void __fastcall FGOCrystalMesh___ctor(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  FGOCrystalMesh_CrystalData_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A59F45 & 1) == 0 )
  {
    sub_1B885B0(&FGOCrystalMesh_CrystalData_TypeInfo);
    byte_4A59F45 = 1;
  }
  v3 = (FGOCrystalMesh_CrystalData_o *)sub_1B887FC(FGOCrystalMesh_CrystalData_TypeInfo);
  FGOCrystalMesh_CrystalData___ctor(v3, 0LL);
  this->fields.crystalData = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.crystalData, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FGOCrystalMesh__AddCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *crystalMat; // x20
  UnityEngine_Component_o *ComponentsInChildren_object__48721436; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x20
  unsigned __int64 v7; // x26
  __int64 v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_Component_o **v12; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  Il2CppObject *v14; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x24
  UnityEngine_GameObject_o *v17; // x23
  Il2CppObject *Component_object; // x0
  Il2CppObject *v19; // x24
  System_String_o *name; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x24
  struct FGOCrystalMesh_CrystalData_o *v24; // x8
  UnityEngine_Component_o *v25; // x23
  float z; // w9
  __int64 v27; // x8
  struct FGOCrystalMesh_CrystalData_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A59F42 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__);
    sub_1B885B0(&FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
    sub_1B885B0(&StringLiteral_24672/*"weapon_"*/);
    sub_1B885B0(&StringLiteral_16534/*"_crystal"*/);
    byte_4A59F42 = 1;
  }
  if ( this->fields.crystalData )
  {
    crystalMat = (UnityEngine_Object_o *)this->fields.crystalMat;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(crystalMat, 0LL, 0LL) )
    {
      ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object__48721436(
                                                                           (UnityEngine_Component_o *)this,
                                                                           (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
      if ( !ComponentsInChildren_object__48721436 )
        goto LABEL_39;
      v6 = ComponentsInChildren_object__48721436;
      if ( SLODWORD(ComponentsInChildren_object__48721436[1].klass) >= 1 )
      {
        v7 = 0LL;
        while ( 1 )
        {
          v8 = sub_1B887FC(FGOCrystalMesh___c__DisplayClass9_0_TypeInfo);
          FGOCrystalMesh___c__DisplayClass9_0___ctor((FGOCrystalMesh___c__DisplayClass9_0_o *)v8, 0LL);
          if ( v7 >= LODWORD(v6[1].klass) )
            sub_1B88814(ComponentsInChildren_object__48721436, v5);
          if ( !v8 )
            break;
          v11 = *((_QWORD *)&v6[1].monitor + v7);
          *(_QWORD *)(v8 + 16) = v11;
          v12 = (UnityEngine_Component_o **)(v8 + 16);
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), v11, v9, v10);
          crystalData = this->fields.crystalData;
          if ( !crystalData )
            break;
          if ( crystalData->fields.useWeaponModel )
            goto LABEL_18;
          ComponentsInChildren_object__48721436 = *v12;
          if ( !*v12 )
            break;
          ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                               ComponentsInChildren_object__48721436,
                                                                               0LL);
          if ( !ComponentsInChildren_object__48721436 )
            break;
          ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_Object__get_name(
                                                                               (UnityEngine_Object_o *)ComponentsInChildren_object__48721436,
                                                                               0LL);
          if ( !ComponentsInChildren_object__48721436 )
            break;
          if ( !System_String__Contains(
                  (System_String_o *)ComponentsInChildren_object__48721436,
                  (System_String_o *)StringLiteral_24672/*"weapon_"*/,
                  0LL) )
          {
LABEL_18:
            ComponentsInChildren_object__48721436 = *v12;
            if ( !*v12 )
              break;
            ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__48721436,
                                                                                 0LL);
            if ( !*v12 )
              break;
            v14 = (Il2CppObject *)ComponentsInChildren_object__48721436;
            gameObject = UnityEngine_Component__get_gameObject(*v12, 0LL);
            Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49297800(
                                                                                 v14,
                                                                                 Parent,
                                                                                 (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
            if ( !ComponentsInChildren_object__48721436 )
              break;
            v17 = (UnityEngine_GameObject_o *)ComponentsInChildren_object__48721436;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)ComponentsInChildren_object__48721436,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
            {
              v19 = UnityEngine_GameObject__GetComponent_object_(
                      v17,
                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FGOCrystalMesh___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v19, 0LL);
            }
            ComponentsInChildren_object__48721436 = *v12;
            if ( !*v12 )
              break;
            ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                                 ComponentsInChildren_object__48721436,
                                                                                 0LL);
            if ( !ComponentsInChildren_object__48721436 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ComponentsInChildren_object__48721436, 0LL);
            v21 = System_String__Concat_61707032(name, (System_String_o *)StringLiteral_16534/*"_crystal"*/, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v17, v21, 0LL);
            FGOCrystalMesh__ChangeCrystalMaterial(this, v17, this->fields.crystalMat, v22);
            v23 = UnityEngine_GameObject__GetComponent_object_(
                    v17,
                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_FGOMeshExploder___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
            {
              ComponentsInChildren_object__48721436 = (UnityEngine_Component_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                                   v17,
                                                                                   (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_FGOMeshExploder___);
              v24 = this->fields.crystalData;
              if ( !v24 )
                break;
              v25 = ComponentsInChildren_object__48721436;
              if ( !ComponentsInChildren_object__48721436 )
                break;
              LOBYTE(ComponentsInChildren_object__48721436[1].monitor) = v24->fields.useBrokenPiece;
              BYTE1(ComponentsInChildren_object__48721436[1].monitor) = v24->fields.useGravity;
              HIDWORD(ComponentsInChildren_object__48721436[1].monitor) = LODWORD(v24->fields.mass);
              *(UnityEngine_Component_c **)((char *)&ComponentsInChildren_object__48721436[2].klass + 4) = *(UnityEngine_Component_c **)&v24->fields.minPieceVertex;
              z = v24->fields.angularVelocity.fields.z;
              v27 = *(_QWORD *)&v24->fields.angularVelocity.fields.x;
              *(float *)&ComponentsInChildren_object__48721436[2].klass = z;
              *(_QWORD *)&ComponentsInChildren_object__48721436[1].fields.m_CachedPtr = v27;
              v28 = this->fields.crystalData;
              if ( !v28 )
                break;
              *(_OWORD *)((char *)&ComponentsInChildren_object__48721436[2].monitor + 4) = *(_OWORD *)&v28->fields.minBrokenSpeed;
              ComponentsInChildren_object__48721436 = *v12;
              if ( !*v12 )
                break;
              v29 = UnityEngine_Component__get_gameObject(ComponentsInChildren_object__48721436, 0LL);
              v25[3].monitor = v29;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v25[3].monitor, (int32_t)v29, v30, v31);
              v32 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                v32,
                (Il2CppObject *)v8,
                Method_FGOCrystalMesh___c__DisplayClass9_0__AddCrystalMesh_b__0__,
                0LL);
              *(_QWORD *)&v25[3].fields.m_CachedPtr = v32;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v25[3].fields, (int32_t)v32, v33, v34);
            }
          }
          if ( (__int64)++v7 >= SLODWORD(v6[1].klass) )
            return;
        }
LABEL_39:
        sub_1B8880C(ComponentsInChildren_object__48721436, v5);
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
  FGOCrystalMesh_o *v6; // x20
  __int64 v7; // x0
  UnityEngine_Material_array **p_materialsArray; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t sortingOrder; // w0
  int m_CancellationTokenSource; // w8
  FGOCrystalMesh_o *v13; // x23
  il2cpp_array_size_t v14; // w26
  UnityEngine_Material_o *v15; // x25
  UnityEngine_Material_o *v16; // x24
  float Float; // s0
  UnityEngine_Texture_o *Texture; // x0
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  float timeSinceLevelLoad; // s0
  UnityEngine_Texture_o *mainTexture; // x0
  int32_t renderQueue; // w0
  UnityEngine_Material_array *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppClass **v26; // x0
  __int64 v27; // x0
  FGOCrystalMesh_o *v28; // [xsp+8h] [xbp-68h]

  v28 = this;
  if ( (byte_4A59F44 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    sub_1B885B0(&UnityEngine_Material___TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&StringLiteral_16409/*"_Xscale"*/);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    sub_1B885B0(&StringLiteral_16344/*"_StartTime"*/);
    sub_1B885B0(&StringLiteral_16219/*"_FadeTime"*/);
    sub_1B885B0(&StringLiteral_16390/*"_UseSubtex"*/);
    sub_1B885B0(&StringLiteral_16353/*"_SubTex"*/);
    this = (FGOCrystalMesh_o *)sub_1B885B0(&StringLiteral_16606/*"_xscale"*/);
    byte_4A59F44 = 1;
  }
  if ( !o )
    goto LABEL_30;
  this = (FGOCrystalMesh_o *)UnityEngine_GameObject__GetComponent_object_(
                               o,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_30;
  v6 = this;
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)this, 0LL);
  if ( !this )
    goto LABEL_30;
  v7 = sub_1B88658(UnityEngine_Material___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  v28->fields.materialsArray = (struct UnityEngine_Material_array *)v7;
  p_materialsArray = &v28->fields.materialsArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->fields.materialsArray, v7, v9, v10);
  sortingOrder = UnityEngine_Renderer__get_sortingOrder((UnityEngine_Renderer_o *)v6, 0LL);
  UnityEngine_Renderer__set_sortingOrder((UnityEngine_Renderer_o *)v6, sortingOrder + 1, 0LL);
  this = (FGOCrystalMesh_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v6, 0LL);
  if ( !this )
    goto LABEL_30;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v13 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= m_CancellationTokenSource )
LABEL_31:
        sub_1B88814(this, o);
      v15 = (UnityEngine_Material_o *)*((_QWORD *)&v13->fields.crystalMat + (int)v14);
      v16 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_69322740(v16, crystalMaterial, 0LL);
      if ( !v15 )
        break;
      if ( UnityEngine_Material__HasProperty_69325648(v15, (System_String_o *)StringLiteral_16606/*"_xscale"*/, 0LL) )
      {
        Float = UnityEngine_Material__GetFloat(v15, (System_String_o *)StringLiteral_16606/*"_xscale"*/, 0LL);
        if ( !v16 )
          break;
        UnityEngine_Material__SetFloat(v16, (System_String_o *)StringLiteral_16409/*"_Xscale"*/, Float, 0LL);
        LOBYTE(this) = UnityEngine_Material__HasProperty_69325648(v15, (System_String_o *)StringLiteral_16353/*"_SubTex"*/, 0LL);
      }
      else
      {
        this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_69325648(
                                     v15,
                                     (System_String_o *)StringLiteral_16353/*"_SubTex"*/,
                                     0LL);
        if ( !v16 )
          break;
      }
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        UnityEngine_Material__SetInt(v16, (System_String_o *)StringLiteral_16390/*"_UseSubtex"*/, 1, 0LL);
        Texture = UnityEngine_Material__GetTexture(v15, (System_String_o *)StringLiteral_16353/*"_SubTex"*/, 0LL);
        UnityEngine_Material__SetTexture(v16, (System_String_o *)StringLiteral_16353/*"_SubTex"*/, Texture, 0LL);
      }
      else
      {
        UnityEngine_Material__SetInt(v16, (System_String_o *)StringLiteral_16390/*"_UseSubtex"*/, 0, 0LL);
      }
      this = (FGOCrystalMesh_o *)UnityEngine_Material__HasProperty_69325648(
                                   v16,
                                   (System_String_o *)StringLiteral_16219/*"_FadeTime"*/,
                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        crystalData = v28->fields.crystalData;
        if ( !crystalData )
          break;
        UnityEngine_Material__SetFloat(
          v16,
          (System_String_o *)StringLiteral_16219/*"_FadeTime"*/,
          crystalData->fields.crystalFadeTime,
          0LL);
      }
      if ( UnityEngine_Material__HasProperty_69325648(v16, (System_String_o *)StringLiteral_16344/*"_StartTime"*/, 0LL) )
      {
        timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
        UnityEngine_Material__SetFloat(v16, (System_String_o *)StringLiteral_16344/*"_StartTime"*/, timeSinceLevelLoad, 0LL);
      }
      if ( UnityEngine_Material__HasProperty_69325648(v15, (System_String_o *)StringLiteral_16262/*"_MainTex"*/, 0LL) )
      {
        mainTexture = UnityEngine_Material__get_mainTexture(v15, 0LL);
        UnityEngine_Material__set_mainTexture(v16, mainTexture, 0LL);
      }
      renderQueue = UnityEngine_Material__get_renderQueue(v15, 0LL);
      UnityEngine_Material__set_renderQueue(v16, renderQueue, 0LL);
      v23 = *p_materialsArray;
      if ( !*p_materialsArray )
        break;
      this = (FGOCrystalMesh_o *)sub_1B886EC(v16, v23->obj.klass->_1.element_class);
      if ( !this )
      {
        v27 = sub_1B88830(0LL);
        sub_1B886D8(v27, 0LL);
      }
      if ( v14 >= v23->max_length )
        goto LABEL_31;
      v26 = &v23->obj.klass + (int)v14;
      v26[4] = (Il2CppClass *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v16, v24, v25);
      m_CancellationTokenSource = (int)v13->fields.m_CancellationTokenSource;
      if ( (int)++v14 >= m_CancellationTokenSource )
        goto LABEL_29;
    }
LABEL_30:
    sub_1B8880C(this, o);
  }
LABEL_29:
  UnityEngine_Renderer__set_materials((UnityEngine_Renderer_o *)v6, *p_materialsArray, 0LL);
}


void __fastcall FGOCrystalMesh__ExplodeCrystalMesh(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  void *ComponentsInChildren_object__48721436; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w21
  __int64 v8; // x8
  _QWORD *v9; // x20
  unsigned __int64 v10; // x22
  struct FGOCrystalMesh_CrystalData_o *crystalData; // x8
  UnityEngine_Component_o *v12; // x21

  if ( (byte_4A59F43 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&StringLiteral_24672/*"weapon_"*/);
    byte_4A59F43 = 1;
  }
  ComponentsInChildren_object__48721436 = UnityEngine_Component__GetComponentsInChildren_object__48721436(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_FGOMeshExploder___);
  if ( !ComponentsInChildren_object__48721436 )
    goto LABEL_23;
  v5 = *((_DWORD *)ComponentsInChildren_object__48721436 + 6);
  v6 = ComponentsInChildren_object__48721436;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( v7 < v5 )
    {
      ComponentsInChildren_object__48721436 = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !ComponentsInChildren_object__48721436 )
        goto LABEL_23;
      FGOMeshExploder__Explode((FGOMeshExploder_o *)ComponentsInChildren_object__48721436, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_9;
    }
LABEL_24:
    sub_1B88814(ComponentsInChildren_object__48721436, v4);
  }
LABEL_9:
  ComponentsInChildren_object__48721436 = UnityEngine_Component__GetComponentsInChildren_object__48721436(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !ComponentsInChildren_object__48721436 )
LABEL_23:
    sub_1B8880C(ComponentsInChildren_object__48721436, v4);
  v8 = *((_QWORD *)ComponentsInChildren_object__48721436 + 3);
  v9 = ComponentsInChildren_object__48721436;
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
        ComponentsInChildren_object__48721436 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)v9[v10 + 4],
                                                  0LL);
        if ( !ComponentsInChildren_object__48721436 )
          goto LABEL_23;
        ComponentsInChildren_object__48721436 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__48721436,
                                                  0LL);
        if ( !ComponentsInChildren_object__48721436 )
          goto LABEL_23;
        ComponentsInChildren_object__48721436 = (void *)System_String__Contains(
                                                          (System_String_o *)ComponentsInChildren_object__48721436,
                                                          (System_String_o *)StringLiteral_24672/*"weapon_"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__48721436 & 1) != 0 )
        {
          ComponentsInChildren_object__48721436 = UnityEngine_Component__get_gameObject(v12, 0LL);
          if ( !ComponentsInChildren_object__48721436 )
            goto LABEL_23;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ComponentsInChildren_object__48721436, 0, 0LL);
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
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.crystalData = crystalData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.crystalData,
    (int32_t)crystalData,
    (int32_t)crystalMat,
    (int32_t)method);
  this->fields.crystalMat = crystalMat;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.crystalMat, (int32_t)crystalMat, v6, v7);
}


void __fastcall FGOCrystalMesh__OnDestroy(FGOCrystalMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.materialsArray = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.materialsArray, 0, v2, v3);
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
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.minBrokenSpeed = xmmword_BB4E30;
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

  if ( (byte_4A5A01E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A01E = 1;
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
    sub_1B8880C(r, method);
  }
}