void __fastcall ModelLineComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12FC4 & 1) == 0 )
  {
    sub_1BCA7E0(&ModelLineComponent_TypeInfo, v1, v2);
    byte_4B12FC4 = 1;
  }
  *ModelLineComponent_TypeInfo->static_fields = (struct ModelLineComponent_StaticFields)0x3F0000003F800000LL;
}


void __fastcall ModelLineComponent___ctor(ModelLineComponent_o *this, const MethodInfo *method)
{
  this->fields.lineWidth = 20.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ModelLineComponent__Awake(ModelLineComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct CStateManager_ModelLineComponent__o **p_fsm; // x20
  CStateManager_T__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  CStateManager_T__o *fsm; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  CStateManager_T__o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  Il2CppObject *v38; // x22
  CStateManager_T__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppObject *v43; // x22
  CStateManager_T__o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  Il2CppObject *v48; // x22
  CStateManager_T__o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  Il2CppObject *v53; // x21
  const MethodInfo *v54; // x3

  if ( (byte_4B12FBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_ModelLineComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_CStateManager_ModelLineComponent__add__, v5, v6);
    sub_1BCA7E0(&CStateManager_ModelLineComponent__TypeInfo, v7, v8);
    sub_1BCA7E0(&ModelLineComponent_StateMapMain_TypeInfo, v9, v10);
    sub_1BCA7E0(&ModelLineComponent_StateNone_TypeInfo, v11, v12);
    sub_1BCA7E0(&ModelLineComponent_StateQaaDisp_TypeInfo, v13, v14);
    sub_1BCA7E0(&ModelLineComponent_StateQaaGray_TypeInfo, v15, v16);
    sub_1BCA7E0(&ModelLineComponent_StateQaaHide_TypeInfo, v17, v18);
    byte_4B12FBA = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v20 = (CStateManager_T__o *)sub_1BCAA2C(CStateManager_ModelLineComponent__TypeInfo, method, v2, v3);
    CStateManager_object____ctor(
      v20,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_313FBC4 *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v31 = (Il2CppObject *)sub_1BCAA2C(ModelLineComponent_StateNone_TypeInfo, v28, v29, v30);
    System_Object___ctor(v31, 0LL);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v31,
      (const MethodInfo_313FC6C *)Method_CStateManager_ModelLineComponent__add__);
    v34 = (CStateManager_T__o *)*p_fsm;
    v38 = (Il2CppObject *)sub_1BCAA2C(ModelLineComponent_StateMapMain_TypeInfo, v35, v36, v37);
    System_Object___ctor(v38, 0LL);
    if ( !v34 )
      goto LABEL_10;
    CStateManager_object___add(
      v34,
      1,
      (IState_T__o *)v38,
      (const MethodInfo_313FC6C *)Method_CStateManager_ModelLineComponent__add__);
    v39 = (CStateManager_T__o *)*p_fsm;
    v43 = (Il2CppObject *)sub_1BCAA2C(ModelLineComponent_StateQaaHide_TypeInfo, v40, v41, v42);
    System_Object___ctor(v43, 0LL);
    if ( !v39 )
      goto LABEL_10;
    CStateManager_object___add(
      v39,
      2,
      (IState_T__o *)v43,
      (const MethodInfo_313FC6C *)Method_CStateManager_ModelLineComponent__add__);
    v44 = (CStateManager_T__o *)*p_fsm;
    v48 = (Il2CppObject *)sub_1BCAA2C(ModelLineComponent_StateQaaGray_TypeInfo, v45, v46, v47);
    System_Object___ctor(v48, 0LL);
    if ( !v44
      || (CStateManager_object___add(
            v44,
            3,
            (IState_T__o *)v48,
            (const MethodInfo_313FC6C *)Method_CStateManager_ModelLineComponent__add__),
          v49 = (CStateManager_T__o *)*p_fsm,
          v53 = (Il2CppObject *)sub_1BCAA2C(ModelLineComponent_StateQaaDisp_TypeInfo, v50, v51, v52),
          System_Object___ctor(v53, 0LL),
          !v49) )
    {
LABEL_10:
      sub_1BCAA3C(v32, v33);
    }
    CStateManager_object___add(
      v49,
      4,
      (IState_T__o *)v53,
      (const MethodInfo_313FC6C *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0LL, v54);
  }
}


void __fastcall ModelLineComponent__ChangeToClear(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Color_o MaterialColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  MaterialColor = ModelLineComponent__GetMaterialColor(this, method);
  MaterialColor.fields.a = 0.0;
  ModelLineComponent__SetMaterialColor(this, MaterialColor, v3);
}


UnityEngine_Material_o *__fastcall ModelLineComponent__GetMaterial(
        ModelLineComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Material_o **p_material; // x19
  UnityEngine_Object_o *material; // x21
  __int64 v8; // x1
  UnityEngine_Material_o *result; // x0
  __int64 v10; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  bool v12; // w8
  UnityEngine_Material_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B12FBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12FBE = 1;
  }
  p_material = &this->fields.material;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    return *p_material;
  result = (UnityEngine_Material_o *)this->fields.lineObject;
  if ( !result )
LABEL_14:
    sub_1BCAA3C(result, v8);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)result,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL);
  result = 0LL;
  if ( !v12 )
  {
    if ( ComponentInChildren_object )
    {
      v13 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)ComponentInChildren_object, 0LL);
      *p_material = v13;
      sub_1BCA784((PartyOrganizationUtility_o *)p_material, (int64_t)v13, v14, v15, v16, v17, v18, v19);
      return *p_material;
    }
    goto LABEL_14;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ModelLineComponent__GetMaterialColor(
        ModelLineComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Material_o *Material; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12FC0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, method, v2);
    byte_4B12FC0 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1BCAA3C(0LL, v5);
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_16346/*"_Color"*/, 0LL);
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


void __fastcall ModelLineComponent__RestoreToDisp(ModelLineComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ModelLineComponent_o *v3; // x19
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v6; // x0
  float *p_GRAY; // x8
  ModelLineComponent_c *v8; // x0
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B12FC1 & 1) == 0 )
  {
    this = (ModelLineComponent_o *)sub_1BCA7E0(&ModelLineComponent_TypeInfo, method, v2);
    byte_4B12FC1 = 1;
  }
  SpotRoadInfo_k__BackingField = v3->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_1BCAA3C(this, method);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType == 2 )
  {
    v8 = ModelLineComponent_TypeInfo;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, method);
      v8 = ModelLineComponent_TypeInfo;
    }
    p_GRAY = &v8->static_fields->GRAY;
    goto LABEL_12;
  }
  if ( dispType == 1 )
  {
    v6 = ModelLineComponent_TypeInfo;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, method);
      v6 = ModelLineComponent_TypeInfo;
    }
    p_GRAY = (float *)v6->static_fields;
LABEL_12:
    v9.fields.r = *p_GRAY;
    v9.fields.a = 1.0;
    v9.fields.g = *p_GRAY;
    v9.fields.b = *p_GRAY;
    ModelLineComponent__SetMaterialColor(v3, v9, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetContrast(ModelLineComponent_o *this, float value, const MethodInfo *method)
{
  float v3; // s3

  v3 = 1.0;
  ModelLineComponent__SetMaterialColor(this, *(UnityEngine_Color_o *)&value, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetMaterialColor(
        ModelLineComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Material_o *Material; // x0
  __int64 v10; // x1
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4B12FBF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, method, v3);
    byte_4B12FBF = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1BCAA3C(0LL, v10);
  v11.fields.b = b;
  v11.fields.a = a;
  v11.fields.r = r;
  v11.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_16346/*"_Color"*/, v11, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_34422160(this, isActive, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_34422160(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim_34422160(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Component_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  struct ModelLineComponent_StaticFields *static_fields; // x8
  struct ModelLineComponent_StaticFields *p_GRAY; // x9
  float WHITE; // s9
  struct ModelLineComponent_StaticFields *v40; // x10
  float v41; // s10
  EasingObject_o *v42; // x19
  System_Action_o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x22

  if ( (byte_4B12FC3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDisp, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9);
    sub_1BCA7E0(&ModelLineComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__, v12, v13);
    sub_1BCA7E0(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__, v14, v15);
    sub_1BCA7E0(&ModelLineComponent___c__DisplayClass40_0_TypeInfo, v16, v17);
    byte_4B12FC3 = 1;
  }
  v18 = sub_1BCAA2C(ModelLineComponent___c__DisplayClass40_0_TypeInfo, isDisp, method, v4);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_16;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.lineObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v18 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)Component_object, v28, v29, v30, v31, v32, v33);
  if ( ModelLineComponent_TypeInfo->_2.cctor_finished )
  {
    static_fields = ModelLineComponent_TypeInfo->static_fields;
    p_GRAY = (struct ModelLineComponent_StaticFields *)&static_fields->GRAY;
    if ( !isDisp )
      p_GRAY = ModelLineComponent_TypeInfo->static_fields;
    WHITE = p_GRAY->WHITE;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, v34);
    static_fields = ModelLineComponent_TypeInfo->static_fields;
    v40 = (struct ModelLineComponent_StaticFields *)&static_fields->GRAY;
    if ( !isDisp )
      v40 = ModelLineComponent_TypeInfo->static_fields;
    WHITE = v40->WHITE;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, v34);
      static_fields = ModelLineComponent_TypeInfo->static_fields;
    }
  }
  if ( !isDisp )
    static_fields = (struct ModelLineComponent_StaticFields *)((char *)static_fields + 4);
  v41 = static_fields->WHITE;
  v42 = *(EasingObject_o **)(v18 + 24);
  *(float *)(v18 + 32) = static_fields->WHITE;
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v18,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0LL);
  v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v18,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0LL);
  if ( !v42 )
LABEL_16:
    sub_1BCAA3C(v19, v20);
  EasingObject__Play_47132496(v42, WHITE, v41, time, v43, v47, 0.0, 17, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_34421684(this, isDisp, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_34421684(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim_34421684(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  float *v11; // x0
  __int64 v12; // x1
  float *v13; // x21
  float distance; // s0
  float lineWidth; // s1
  float v16; // s0
  float v17; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  float v33; // s8
  float *v34; // x21
  __int64 v35; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v38; // d0
  struct UnityEngine_Vector3_StaticFields *v39; // x8

  if ( (byte_4B12FC2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UITweener_Begin_TweenPosition___, isDisp, method);
    sub_1BCA7E0(&Method_UITweener_Begin_TweenScale___, v7, v8);
    sub_1BCA7E0(&StringLiteral_13141/*"StateQuestAfterActionEnd"*/, v9, v10);
    byte_4B12FC2 = 1;
  }
  v11 = (float *)UITweener__Begin_object_(
                   this->fields.lineObject,
                   time,
                   (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenScale___);
  v13 = v11;
  distance = 0.0;
  if ( !isDisp )
    distance = this->fields.distance;
  if ( !v11 )
    goto LABEL_21;
  lineWidth = this->fields.lineWidth;
  v11[33] = lineWidth;
  v11[34] = distance;
  v11[32] = lineWidth;
  v16 = this->fields.lineWidth;
  v17 = 0.0;
  if ( isDisp )
    v17 = this->fields.distance;
  v11[35] = v16;
  v11[36] = v16;
  v11[37] = v17;
  *((_DWORD *)v11 + 8) = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v13 + 10) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 20), (int64_t)gameObject, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_13141/*"StateQuestAfterActionEnd"*/;
  *((_QWORD *)v13 + 11) = StringLiteral_13141/*"StateQuestAfterActionEnd"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 22), v25, v26, v27, v28, v29, v30, v31);
  if ( time != 0.0 || isDisp )
  {
    v11 = (float *)UITweener__Begin_object_(
                     this->fields.lineObject,
                     time,
                     (const MethodInfo_2FC6528 *)Method_UITweener_Begin_TweenPosition___);
    v33 = this->fields.distance;
    v34 = v11;
    v35 = 0LL;
    z = v33;
    if ( isDisp )
    {
      if ( !byte_4B109C1 )
      {
        v11 = (float *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v32);
        byte_4B109C1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v35 = *(_QWORD *)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
    }
    if ( v34 )
    {
      *((_QWORD *)v34 + 16) = v35;
      v38 = 0LL;
      v34[34] = z;
      if ( !isDisp )
      {
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v32);
          byte_4B109C1 = 1;
        }
        v39 = UnityEngine_Vector3_TypeInfo->static_fields;
        v38 = *(_QWORD *)&v39->zeroVector.fields.x;
        v33 = v39->zeroVector.fields.z;
      }
      *(_QWORD *)(v34 + 35) = v38;
      v34[37] = v33;
      *((_DWORD *)v34 + 8) = 2;
      return;
    }
LABEL_21:
    sub_1BCAA3C(v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetState(
        ModelLineComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o **p_stateEndAction; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_4B12FBD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_ModelLineComponent__setState__, *(_QWORD *)&state, endAct);
    byte_4B12FBD = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_stateEndAction,
    (int64_t)endAct,
    (int64_t)endAct,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_stateEndAction - 2);
  if ( !v13 )
    sub_1BCAA3C(0LL, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_313FCF8 *)Method_CStateManager_ModelLineComponent__setState__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__Setup(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        SpotEntity_o *startSpot,
        SpotEntity_o *endSpot,
        MapModelCamera_o *spotCamera,
        int32_t layerId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
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
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Master_object; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x25
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  float x; // s8
  float32x2_t v35; // d9
  float v36; // s10
  float32x2_t v37; // d11
  float v38; // s10
  float32x2_t v39; // d8
  unsigned __int64 v40; // d1
  float v41; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x2
  struct TweenAlpha_o *tweenAlpha; // x8
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *v45; // x8
  __int64 v46; // x1
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  int v49; // s0
  __int64 v52; // x1
  Il2CppObject *ComponentInChildren_object; // x22
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x1
  ScrTerminalMap_c *v64; // x8
  UnityEngine_GameObject_o *v65; // x19
  __int64 v66; // x1
  int32_t v67; // w20

  if ( (byte_4B12FBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotLayerMaster___, spotRoadInfo, startSpot);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___, v18, v19);
    sub_1BCA7E0(&NGUITools_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&ScrTerminalMap_TypeInfo, v24, v25);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v26, v27);
    byte_4B12FBC = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int64_t)spotRoadInfo,
    (int64_t)startSpot,
    (int32_t)endSpot,
    (System_String_o *)spotCamera,
    *(BattleSetupInfo_o **)&layerId,
    (FollowerInfo_o *)method,
    v7);
  if ( !startSpot )
    goto LABEL_42;
  this->fields.startedPostion = SpotEntity__GetLocalPositionOnMapModel(startSpot, 0LL);
  if ( !endSpot )
    goto LABEL_42;
  this->fields.endedPostion = SpotEntity__GetLocalPositionOnMapModel(endSpot, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
    (Il2CppObject **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_object__object__int___TryGetEntity(
    v31,
    (Il2CppObject **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  x = this->fields.startedPostion.fields.x;
  v35.n64_u64[0] = *(unsigned __int64 *)&this->fields.startedPostion.fields.y;
  v36 = this->fields.endedPostion.fields.x;
  v37.n64_u64[0] = *(unsigned __int64 *)&this->fields.endedPostion.fields.y;
  if ( !byte_4B109BF )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v32, v33);
    byte_4B109BF = 1;
  }
  v38 = x - v36;
  v39.n64_u64[0] = vsub_f32(v35, v37).n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v32);
  v40 = vmul_f32(v39, v39).n64_u64[0];
  v41 = sqrtf(*((float *)&v40 + 1) + (float)((float)(v38 * v38) + *(float *)&v40)) * 0.5;
  this->fields.distance = v41;
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v41, v33);
  GameObjectExtensions__SetLocalPositionZ(this->fields.lineObject, this->fields.distance, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startedPostion, 0LL);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_42;
  tweenAlpha->fields.duration = 0.0;
  *(_QWORD *)&tweenAlpha->fields.from = 0x3F80000000000000LL;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v29, v43);
    byte_4B10F83 = 1;
  }
  Master_object = (int64_t)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29);
    Master_object = (int64_t)TerminalSceneComponent_TypeInfo;
  }
  v45 = **(System_Collections_Generic_Dictionary_string__DataEntityBase__c ***)(Master_object + 184);
  if ( !v45 )
    goto LABEL_42;
  Master_object = *(_QWORD *)&v45->_2.thread_static_fields_offset;
  if ( !Master_object )
    goto LABEL_42;
  SpotGameObject = ScrTerminalMap__GetSpotGameObject((ScrTerminalMap_o *)Master_object, endSpot->fields.id, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v49 = GameObjectExtensions__GetPosition(SpotGameObject, 0LL);
    if ( !transform )
      goto LABEL_42;
    UnityEngine_Transform__LookAt_70177976(transform, *(UnityEngine_Vector3_o *)&v49, 0LL);
  }
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Master_object )
LABEL_42:
    sub_1BCAA3C(Master_object, v29);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)Master_object,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
    Master_object = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)spotCamera, 0LL, 0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( spotCamera )
      {
        Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spotCamera, 0LL);
        if ( Master_object )
        {
          Master_object = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
          if ( ComponentInChildren_object )
          {
            ComponentInChildren_object[2].klass = (Il2CppClass *)Master_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&ComponentInChildren_object[2],
              Master_object,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_42;
    }
  }
LABEL_37:
  ModelLineComponent__UpdateDisp(this, layerId, v55);
  v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v64 = ScrTerminalMap_TypeInfo;
  v65 = v62;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, v63);
    v64 = ScrTerminalMap_TypeInfo;
  }
  v67 = UnityEngine_LayerMask__NameToLayer(v64->static_fields->MAP_DISP_LAYER_SPOT, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v66);
  NGUITools__SetLayer(v65, v67, 0LL);
}


void __fastcall ModelLineComponent__SetupTweenAlpha(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *tweenAlpha; // x8

  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    sub_1BCAA3C(this, method);
  tweenAlpha->fields.duration = 0.0;
  *(_QWORD *)&tweenAlpha->fields.from = 0x3F80000000000000LL;
}


void __fastcall ModelLineComponent__SetupTweenScale(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        float distance,
        const MethodInfo *method)
{
  struct TweenScale_o *tweenScale; // x20
  ModelLineComponent_o *v5; // x19
  float lineWidth; // s1
  struct TweenScale_o *v7; // x8
  float *p_lineWidth; // x9
  unsigned __int64 v9; // d1
  UnityEngine_Vector3_c *v10; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v13; // x9
  struct TweenScale_o *v14; // x8

  if ( !spotRoadInfo )
    goto LABEL_13;
  tweenScale = this->fields.tweenScale;
  v5 = this;
  if ( spotRoadInfo->fields.dispType )
  {
    if ( tweenScale )
    {
      lineWidth = this->fields.lineWidth;
      tweenScale->fields.from.fields.y = lineWidth;
      tweenScale->fields.from.fields.z = distance;
      tweenScale->fields.from.fields.x = lineWidth;
      v7 = this->fields.tweenScale;
      if ( v7 )
      {
        p_lineWidth = &this->fields.lineWidth;
        v9 = vld1_dup_f32(p_lineWidth).n64_u64[0];
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_1BCAA3C(this, spotRoadInfo);
  }
  if ( !byte_4B109C1 )
  {
    this = (ModelLineComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, spotRoadInfo, method);
    byte_4B109C1 = 1;
  }
  if ( !tweenScale )
    goto LABEL_13;
  v10 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&tweenScale->fields.from.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  tweenScale->fields.from.fields.z = z;
  v7 = v5->fields.tweenScale;
  if ( !v7 )
    goto LABEL_13;
  v13 = v10->static_fields;
  distance = v13->zeroVector.fields.z;
  v9 = *(_QWORD *)&v13->zeroVector.fields.x;
LABEL_11:
  *(_QWORD *)&v7->fields.to.fields.x = v9;
  v7->fields.to.fields.z = distance;
  v14 = v5->fields.tweenScale;
  if ( !v14 )
    goto LABEL_13;
  v14->fields.duration = 0.0;
}


void __fastcall ModelLineComponent__StateQuestAfterActionEnd(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.stateEndAction, 0LL);
  ModelLineComponent__SetState(this, 1, 0LL, v3);
}


void __fastcall ModelLineComponent__Update(ModelLineComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CStateManager_T__o *fsm; // x0

  if ( (byte_4B12FBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CStateManager_ModelLineComponent__update__, method, v2);
    byte_4B12FBB = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_313FCD4 *)Method_CStateManager_ModelLineComponent__update__);
}


void __fastcall ModelLineComponent__UpdateDisp(ModelLineComponent_o *this, int32_t layerId, const MethodInfo *method)
{
  SpotLayerEntity_o *startSpotLayerEntity; // x0
  const MethodInfo *v6; // x1
  SpotLayerEntity_o *endSpotLayerEntity; // x0

  startSpotLayerEntity = this->fields.startSpotLayerEntity;
  if ( startSpotLayerEntity && this->fields.endSpotLayerEntity )
  {
    if ( !SpotLayerEntity__IsEnabledDispSpot(startSpotLayerEntity, layerId, 0LL) )
      goto LABEL_8;
    endSpotLayerEntity = this->fields.endSpotLayerEntity;
    if ( !endSpotLayerEntity )
      sub_1BCAA3C(0LL, v6);
    if ( SpotLayerEntity__IsEnabledDispSpot(endSpotLayerEntity, layerId, 0LL) )
      ModelLineComponent__RestoreToDisp(this, v6);
    else
LABEL_8:
      ModelLineComponent__ChangeToClear(this, v6);
  }
}


UnityEngine_GameObject_o *__fastcall ModelLineComponent__get_LineObject(
        ModelLineComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.lineObject;
}


MapControl_SpotRoadInfo_o *__fastcall ModelLineComponent__get_SpotRoadInfo(
        ModelLineComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SpotRoadInfo_k__BackingField;
}


void __fastcall ModelLineComponent__set_SpotRoadInfo(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SpotRoadInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ModelLineComponent_StateMapMain___ctor(
        ModelLineComponent_StateMapMain_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ModelLineComponent_StateMapMain__begin(
        ModelLineComponent_StateMapMain_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateMapMain__end(
        ModelLineComponent_StateMapMain_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateMapMain__update(
        ModelLineComponent_StateMapMain_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateNone___ctor(ModelLineComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ModelLineComponent_StateNone__begin(
        ModelLineComponent_StateNone_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateNone__end(
        ModelLineComponent_StateNone_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateNone__update(
        ModelLineComponent_StateNone_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateQaaDisp___ctor(
        ModelLineComponent_StateQaaDisp_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ModelLineComponent_StateQaaDisp__begin(
        ModelLineComponent_StateQaaDisp_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12FC5 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaDisp_o *)sub_1BCA7E0(&ModelLineComponent_TypeInfo, that, method);
    byte_4B12FC5 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1BCAA3C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__SetQuestAfterActionColorAnim_34422160(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.stateEndAction, 0LL);
      ModelLineComponent__SetState(that, 1, 0LL, v8);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, that);
        v6 = ModelLineComponent_TypeInfo;
      }
      v9.fields.a = 1.0;
      v9.fields.r = v6->static_fields->WHITE;
      v9.fields.g = v9.fields.r;
      v9.fields.b = v9.fields.r;
      ModelLineComponent__SetMaterialColor(that, v9, (const MethodInfo *)that);
      ModelLineComponent__SetQuestAfterActionScaleAnim_34421684(that, 1, 0.5, v7);
      break;
  }
}


void __fastcall ModelLineComponent_StateQaaDisp__end(
        ModelLineComponent_StateQaaDisp_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateQaaDisp__update(
        ModelLineComponent_StateQaaDisp_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateQaaGray___ctor(
        ModelLineComponent_StateQaaGray_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ModelLineComponent_StateQaaGray__begin(
        ModelLineComponent_StateQaaGray_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12FC6 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaGray_o *)sub_1BCA7E0(&ModelLineComponent_TypeInfo, that, method);
    byte_4B12FC6 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1BCAA3C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.stateEndAction, 0LL);
      ModelLineComponent__SetState(that, 1, 0LL, v8);
      break;
    case 1:
      ModelLineComponent__SetQuestAfterActionColorAnim_34422160(that, 0, 0.5, method);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, that);
        v6 = ModelLineComponent_TypeInfo;
      }
      v9.fields.a = 1.0;
      v9.fields.r = v6->static_fields->GRAY;
      v9.fields.g = v9.fields.r;
      v9.fields.b = v9.fields.r;
      ModelLineComponent__SetMaterialColor(that, v9, (const MethodInfo *)that);
      ModelLineComponent__SetQuestAfterActionScaleAnim_34421684(that, 1, 0.5, v7);
      break;
  }
}


void __fastcall ModelLineComponent_StateQaaGray__end(
        ModelLineComponent_StateQaaGray_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateQaaGray__update(
        ModelLineComponent_StateQaaGray_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateQaaHide___ctor(
        ModelLineComponent_StateQaaHide_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ModelLineComponent_StateQaaHide__begin(
        ModelLineComponent_StateQaaHide_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1BCAA3C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      ModelLineComponent__SetQuestAfterActionScaleAnim_34421684(that, 0, 0.5, method);
  }
  else
  {
    ActionExtensions__Call(that->fields.stateEndAction, 0LL);
    ModelLineComponent__SetState(that, 1, 0LL, v6);
  }
}


void __fastcall ModelLineComponent_StateQaaHide__end(
        ModelLineComponent_StateQaaHide_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent_StateQaaHide__update(
        ModelLineComponent_StateQaaHide_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall ModelLineComponent___c__DisplayClass40_0___ctor(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ModelLineComponent___c__DisplayClass40_0___SetQuestAfterActionColorAnim_b__0(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo || (this = (ModelLineComponent___c__DisplayClass40_0_o *)this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, method);
  v3.fields.r = eo->fields.mNow;
  v3.fields.a = 1.0;
  v3.fields.g = v3.fields.r;
  v3.fields.b = v3.fields.r;
  ModelLineComponent__SetMaterialColor((ModelLineComponent_o *)this, v3, method);
}


void __fastcall ModelLineComponent___c__DisplayClass40_0___SetQuestAfterActionColorAnim_b__1(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  ModelLineComponent_o *_4__this; // x0
  struct ModelLineComponent_o *v4; // x19
  const MethodInfo *v5; // x3
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v6.fields.r = this->fields.to,
        v6.fields.a = 1.0,
        v6.fields.g = v6.fields.r,
        v6.fields.b = v6.fields.r,
        ModelLineComponent__SetMaterialColor(_4__this, v6, method),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.stateEndAction, 0LL);
  ModelLineComponent__SetState(v4, 1, 0LL, v5);
}