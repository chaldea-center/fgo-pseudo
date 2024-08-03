void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FGOCrystalMesh_CrystalData_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FB216 & 1) == 0 )
  {
    sub_1B640C8(&FGOCrystalMesh_CrystalData_TypeInfo, method);
    byte_49FB216 = 1;
  }
  v4 = (FGOCrystalMesh_CrystalData_o *)sub_1B64314(FGOCrystalMesh_CrystalData_TypeInfo, method, v2);
  FGOCrystalMesh_CrystalData___ctor(v4, 0LL);
  this->fields.crystalData = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.crystalData, (int32_t)v4, v5, v6);
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
  UnityEngine_Component_o *ComponentsInChildren_object__48433408; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *v17; // x20
  unsigned __int64 v18; // x26
  __int64 v19; // x21
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  UnityEngine_Component_o **v24; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v26; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v29; // x23
  Il2CppObject *Component_object; // x0
  Il2CppObject *v31; // x24
  System_String_o *name; // x0
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x24
  struct FGOCrystalMesh_CrystalData_o *v36; // x8
  UnityEngine_Component_o *v37; // x23
  float z; // w9
  __int64 v39; // x8
  struct FGOCrystalMesh_CrystalData_o *v40; // x8
  UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x22
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_49FB213 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__, v9);
    sub_1B640C8(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_24573/*"weapon_"*/, v11);
    sub_1B640C8(&StringLiteral_16465/*"_crystal"*/, v12);
    byte_49FB213 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__48433408 )
        goto LABEL_39;
      v17 = ComponentsInChildren_object__48433408;
      if ( SLODWORD(ComponentsInChildren_object__48433408[1].klass) >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v19 = sub_1B64314(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo, v15, v16);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v19, 0LL);
          if ( v18 >= LODWORD(v17[1].klass) )
            sub_1B6432C(ComponentsInChildren_object__48433408, v20);
          if ( !v19 )
            break;
          v23 = *((_QWORD *)&v17[1].monitor + v18);
          *(_QWORD *)(v19 + 16) = v23;
          v24 = (UnityEngine_Component_o **)(v19 + 16);
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), v23, v21, v22);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__48433408 = *v24;
          if ( !*v24 )
            break;
          ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__48433408,
                                                                               0LL);
          if ( !ComponentsInChildren_object__48433408 )
            break;
          ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__48433408,
                                                                               0LL);
          if ( !ComponentsInChildren_object__48433408 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__48433408,
                  (System_String_o *)StringLiteral_24573/*"weapon_"*/,
                  0LL) )
          {
LABEL_18:
            ComponentsInChildren_object__48433408 = *v24;
            if ( !*v24 )
              break;
            ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__48433408,
                                                                                 0LL);
            if ( !*v24 )
              break;
            v26 = (Il2CppObject *)ComponentsInChildren_object__48433408;
            gameObject = UnityEngine_Component__get_gameObject(*v24, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49003980(
                                                                                 v26,
                                                                                 Parent,
                                                                                 (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
            if ( !ComponentsInChildren_object__48433408 )
              break;
            v29 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__48433408;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__48433408,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
            {
              v31 = UnityEngine_GameObject__GetComponent_object_(
                      v29,
                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v31, 0LL);
            }
            ComponentsInChildren_object__48433408 = *v24;
            if ( !*v24 )
              break;
            ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__48433408,
                                                                                 0LL);
            if ( !ComponentsInChildren_object__48433408 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__48433408, 0LL);
            v33 = System_String__Concat_61375396(name, (System_String_o *)StringLiteral_16465/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v29, v33, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v29, this->fields.crystalMat, v34);
            v35 = UnityEngine_GameObject__GetComponent_object_(
                    v29,
                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
            {
              ComponentsInChildren_object__48433408 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v29,
                                                                                   (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v36 = this->fields.crystalData;
              if ( !v36 )
                break;
              v37 = ComponentsInChildren_object__48433408;
              if ( !ComponentsInChildren_object__48433408 )
                break;
              LOBYTE(ComponentsInChildren_object__48433408[1].monitor) = v36->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__48433408[1].monitor) = v36->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__48433408[1].monitor) = LODWORD(v36->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__48433408[2].klass + 4) = *(UnityEngine_Component_c **)&v36->fields.minPieceVertex;
              z = v36->fields.angularVelocity.fields.z;
              v39 = *(_QWORD *)&v36->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__48433408[2].klass = z;
              *(_QWORD *)&ComponentsInChildren_object__48433408[1].fields.m_CachedPtr = v39;
              v40 = this->fields.crystalData;
              if ( !v40 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__48433408[2].monitor + 4) = *(_OWORD *)&v40->fields.minBrokenSpeed;
              ComponentsInChildren_object__48433408 = *v24;
              if ( !*v24 )
                break;
              v41 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__48433408, 0LL);
              v37[3].monitor = v41;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37[3].monitor, (int32_t)v41, v42, v43);
              v46 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v44, v45);
              System_Action___ctor(
                v46,
                (Il2CppObject *)v19,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              *(_QWORD *)&v37[3].fields.m_CachedPtr = v46;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37[3].fields, (int32_t)v46, v47, v48);
            }
          }
          if ( (__int64)++v18 >= SLODWORD(v17[1].klass) )
            return;
        }
LABEL_39:
        sub_1B64324(ComponentsInChildren_object__48433408);
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
  __int64 v21; // x1
  __int64 v22; // x2
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v24; // x23
  il2cpp_array_size_t v25; // w26
  UnityEngine_Material_o *v26; // x25
  UnityEngine_Material_o *v27; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppClass **v37; // x0
  __int64 v38; // x0
  FGOCrystalMesh_o *v39; // [xsp+8h] [xbp-68h]

  v39 = this;
  if ( (byte_49FB215 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, o);
    sub_1B640C8(&UnityEngine_Material___TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_16340/*"_Xscale"*/, v8);
    sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v9);
    sub_1B640C8(&StringLiteral_16275/*"_StartTime"*/, v10);
    sub_1B640C8(&StringLiteral_16150/*"_FadeTime"*/, v11);
    sub_1B640C8(&StringLiteral_16321/*"_UseSubtex"*/, v12);
    sub_1B640C8(&StringLiteral_16284/*"_SubTex"*/, v13);
    this = (FGOCrystalMesh_o *)sub_1B640C8(&StringLiteral_16537/*"_xscale"*/, v14);
    byte_49FB215 = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_object_(
                               o,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v15 = this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v16 = sub_1B64170(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  v39->fields.materialsArray = (struct UnityEngine_Material_array *)v16;
  p_materialsArray = &v39->fields.materialsArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields.materialsArray, v16, v18, v19);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder((UnityEngine_Renderer_o *)v15, 0LL);
  UnityEngine_Renderer__set_sortingOrder((UnityEngine_Renderer_o *)v15, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v15, 0LL);
  if ( !this )
    goto LABEL_30;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v24 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= m_CancellationTokenSource )
LABEL_31:
        sub_1B6432C(this, v21);
      v26 = (UnityEngine_Material_o *)*((_QWORD *)&v24->fields.crystalMat + (int)v25);
      v27 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v21, v22);
      UnityEngine_Material___ctor_68991096(v27, crystalMaterial, 0LL);
      if ( !v26 )
        break;
      if ( UnityEngine_Material__HasProperty_68994004(v26, (System_String_o *)StringLiteral_16537/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v26, (System_String_o *)StringLiteral_16537/*"_xscale"*/, 0LL);
        if ( !v27 )
          break;
        UnityEngine_Material__SetFloat(v27, (System_String_o *)StringLiteral_16340/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_68994004(v26, (System_String_o *)StringLiteral_16284/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_68994004(
                                     v26,
                                     (System_String_o *)StringLiteral_16284/*"_SubTex"*/,
                                     0LL);
        if ( !v27 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v27, (System_String_o *)StringLiteral_16321/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v26, (System_String_o *)StringLiteral_16284/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v27, (System_String_o *)StringLiteral_16284/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v27, (System_String_o *)StringLiteral_16321/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_68994004(
                                   v27,
                                   (System_String_o *)StringLiteral_16150/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v39->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v27,
          (System_String_o *)StringLiteral_16150/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_68994004(v27, (System_String_o *)StringLiteral_16275/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v27, (System_String_o *)StringLiteral_16275/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_68994004(v26, (System_String_o *)StringLiteral_16193/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v26, 0LL);
        UnityEngine_Material__set_mainTexture(v27, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v26, 0LL);
      UnityEngine_Material__set_renderQueue(v27, renderQueue, 0LL);
      v34 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_1B64204(v27, v34->obj.klass->_1.element_class);
      if ( !this )
      {
        v38 = sub_1B64348(0LL);
        sub_1B641F0(v38, 0LL);
      }
      if ( v25 >= v34->max_length )
        goto LABEL_31;
      v37 = &v34->obj.klass + (int)v25;
      v37[4] = (Il2CppClass *)v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v27, v35, v36);
      m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
      if ( (int)++v25 >= m_CancellationTokenSource )
        goto LABEL_29;
    }
LABEL_30:
    sub_1B64324(this);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)v15, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *ComponentsInChildren_object__48433408; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x8
  _QWORD *v11; // x20
  unsigned __int64 v12; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v14; // x21

  if ( (byte_49FB214 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1B640C8(&StringLiteral_24573/*"weapon_"*/, v4);
    byte_49FB214 = 1;
  }
  ComponentsInChildren_object__48433408 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__48433408 )
    goto LABEL_23;
  v7 = *((_DWORD *)ComponentsInChildren_object__48433408 + 6);
  v8 = ComponentsInChildren_object__48433408;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      ComponentsInChildren_object__48433408 = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !ComponentsInChildren_object__48433408 )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_object__48433408, 0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1B6432C(ComponentsInChildren_object__48433408, v6);
  }
LABEL_9:
  ComponentsInChildren_object__48433408 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__48433408 )
LABEL_23:
    sub_1B64324(ComponentsInChildren_object__48433408);
  v10 = *((_QWORD *)ComponentsInChildren_object__48433408 + 3);
  v11 = ComponentsInChildren_object__48433408;
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
        ComponentsInChildren_object__48433408 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v11[v12 + 4],
                                                  0LL);
        if ( !ComponentsInChildren_object__48433408 )
          goto LABEL_23;
        ComponentsInChildren_object__48433408 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__48433408,
                                                  0LL);
        if ( !ComponentsInChildren_object__48433408 )
          goto LABEL_23;
        ComponentsInChildren_object__48433408 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__48433408,
                                                          (System_String_o *)StringLiteral_24573/*"weapon_"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__48433408 & 1) != 0 )
        {
          ComponentsInChildren_object__48433408 = UnityEngine_Component__get_gameObject(v14, 0LL);
          if ( !ComponentsInChildren_object__48433408 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__48433408, 0, 0LL);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.crystalData,
    (int32_t)crystalData,
    (int32_t)crystalMat,
    (int32_t)method);
  this->fields.crystalMat = crystalMat;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.crystalMat, (int32_t)crystalMat, v6, v7);
}


void __fastcall FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.materialsArray = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.materialsArray, 0, v2, v3);
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
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BA3640;
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

  if ( (byte_49FB2EE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB2EE = 1;
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
    sub_1B64324(r);
  }
}