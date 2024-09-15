void __fastcall ModelLineComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2AE07 & 1) == 0 )
  {
    sub_1B761C0(&ModelLineComponent_TypeInfo, v1);
    byte_4A2AE07 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CStateManager_ModelLineComponent__o **p_fsm; // x20
  CStateManager_T__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  CStateManager_T__o *v18; // x21
  Il2CppObject *v19; // x22
  CStateManager_T__o *v20; // x21
  Il2CppObject *v21; // x22
  CStateManager_T__o *v22; // x21
  Il2CppObject *v23; // x22
  CStateManager_T__o *v24; // x20
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x3

  if ( (byte_4A2ADFD & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_ModelLineComponent___ctor__, method);
    sub_1B761C0(&Method_CStateManager_ModelLineComponent__add__, v3);
    sub_1B761C0(&CStateManager_ModelLineComponent__TypeInfo, v4);
    sub_1B761C0(&ModelLineComponent_StateMapMain_TypeInfo, v5);
    sub_1B761C0(&ModelLineComponent_StateNone_TypeInfo, v6);
    sub_1B761C0(&ModelLineComponent_StateQaaDisp_TypeInfo, v7);
    sub_1B761C0(&ModelLineComponent_StateQaaGray_TypeInfo, v8);
    sub_1B761C0(&ModelLineComponent_StateQaaHide_TypeInfo, v9);
    byte_4A2ADFD = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v11 = (CStateManager_T__o *)sub_1B7640C(CStateManager_ModelLineComponent__TypeInfo);
    CStateManager_object____ctor(
      v11,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_308D27C *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v11;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v11, v12, v13);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v15 = (Il2CppObject *)sub_1B7640C(ModelLineComponent_StateNone_TypeInfo);
    System_Object___ctor(v15, 0LL);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v15,
      (const MethodInfo_308D324 *)Method_CStateManager_ModelLineComponent__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (Il2CppObject *)sub_1B7640C(ModelLineComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_10;
    CStateManager_object___add(
      v18,
      1,
      (IState_T__o *)v19,
      (const MethodInfo_308D324 *)Method_CStateManager_ModelLineComponent__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (Il2CppObject *)sub_1B7640C(ModelLineComponent_StateQaaHide_TypeInfo);
    System_Object___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_10;
    CStateManager_object___add(
      v20,
      2,
      (IState_T__o *)v21,
      (const MethodInfo_308D324 *)Method_CStateManager_ModelLineComponent__add__);
    v22 = (CStateManager_T__o *)*p_fsm;
    v23 = (Il2CppObject *)sub_1B7640C(ModelLineComponent_StateQaaGray_TypeInfo);
    System_Object___ctor(v23, 0LL);
    if ( !v22
      || (CStateManager_object___add(
            v22,
            3,
            (IState_T__o *)v23,
            (const MethodInfo_308D324 *)Method_CStateManager_ModelLineComponent__add__),
          v24 = (CStateManager_T__o *)*p_fsm,
          v25 = (Il2CppObject *)sub_1B7640C(ModelLineComponent_StateQaaDisp_TypeInfo),
          System_Object___ctor(v25, 0LL),
          !v24) )
    {
LABEL_10:
      sub_1B7641C(v16, v17);
    }
    CStateManager_object___add(
      v24,
      4,
      (IState_T__o *)v25,
      (const MethodInfo_308D324 *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0LL, v26);
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
  __int64 v3; // x1
  UnityEngine_Material_o **p_material; // x19
  UnityEngine_Object_o *material; // x21
  __int64 v6; // x1
  UnityEngine_Material_o *result; // x0
  Il2CppObject *ComponentInChildren_object; // x20
  bool v9; // w8
  UnityEngine_Material_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A2AE01 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A2AE01 = 1;
  }
  p_material = &this->fields.material;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    return *p_material;
  result = (UnityEngine_Material_o *)this->fields.lineObject;
  if ( !result )
LABEL_14:
    sub_1B7641C(result, v6);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)result,
                                 (const MethodInfo_2EB1C1C *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL);
  result = 0LL;
  if ( !v9 )
  {
    if ( ComponentInChildren_object )
    {
      v10 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)ComponentInChildren_object, 0LL);
      *p_material = v10;
      sub_1B76164((ServantStatusBattleListViewItem_o *)p_material, (int32_t)v10, v11, v12);
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
  UnityEngine_Material_o *Material; // x0
  __int64 v4; // x1
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A2AE03 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16173/*"_Color"*/, method);
    byte_4A2AE03 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1B7641C(0LL, v4);
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_16173/*"_Color"*/, 0LL);
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


void __fastcall ModelLineComponent__RestoreToDisp(ModelLineComponent_o *this, const MethodInfo *method)
{
  ModelLineComponent_o *v2; // x19
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v5; // x0
  float *p_GRAY; // x8
  ModelLineComponent_c *v7; // x0
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A2AE04 & 1) == 0 )
  {
    this = (ModelLineComponent_o *)sub_1B761C0(&ModelLineComponent_TypeInfo, method);
    byte_4A2AE04 = 1;
  }
  SpotRoadInfo_k__BackingField = v2->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_1B7641C(this, method);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType == 2 )
  {
    v7 = ModelLineComponent_TypeInfo;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v7 = ModelLineComponent_TypeInfo;
    }
    p_GRAY = &v7->static_fields->GRAY;
    goto LABEL_12;
  }
  if ( dispType == 1 )
  {
    v5 = ModelLineComponent_TypeInfo;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v5 = ModelLineComponent_TypeInfo;
    }
    p_GRAY = (float *)v5->static_fields;
LABEL_12:
    v8.fields.r = *p_GRAY;
    v8.fields.a = 1.0;
    v8.fields.g = *p_GRAY;
    v8.fields.b = *p_GRAY;
    ModelLineComponent__SetMaterialColor(v2, v8, method);
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
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Material_o *Material; // x0
  __int64 v9; // x1
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A2AE02 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16173/*"_Color"*/, method);
    byte_4A2AE02 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1B7641C(0LL, v9);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_16173/*"_Color"*/, v10, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_33642720(this, isActive, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_33642720(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim_33642720(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct ModelLineComponent_StaticFields *static_fields; // x8
  struct ModelLineComponent_StaticFields *p_GRAY; // x9
  float WHITE; // s9
  struct ModelLineComponent_StaticFields *v23; // x10
  float v24; // s10
  EasingObject_o *v25; // x19
  System_Action_o *v26; // x21
  System_Action_o *v27; // x22

  if ( (byte_4A2AE06 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDisp);
    sub_1B761C0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1B761C0(&ModelLineComponent_TypeInfo, v8);
    sub_1B761C0(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__, v9);
    sub_1B761C0(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__, v10);
    sub_1B761C0(&ModelLineComponent___c__DisplayClass40_0_TypeInfo, v11);
    byte_4A2AE06 = 1;
  }
  v12 = sub_1B7640C(ModelLineComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.lineObject,
                       (const MethodInfo_2EB34A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v12 + 24) = Component_object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)Component_object, v18, v19);
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
    j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
    static_fields = ModelLineComponent_TypeInfo->static_fields;
    v23 = (struct ModelLineComponent_StaticFields *)&static_fields->GRAY;
    if ( !isDisp )
      v23 = ModelLineComponent_TypeInfo->static_fields;
    WHITE = v23->WHITE;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      static_fields = ModelLineComponent_TypeInfo->static_fields;
    }
  }
  if ( !isDisp )
    static_fields = (struct ModelLineComponent_StaticFields *)((char *)static_fields + 4);
  v24 = static_fields->WHITE;
  v25 = *(EasingObject_o **)(v12 + 24);
  *(float *)(v12 + 32) = static_fields->WHITE;
  v26 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v12,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0LL);
  v27 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0LL);
  if ( !v25 )
LABEL_16:
    sub_1B7641C(v13, v14);
  EasingObject__Play_46457736(v25, WHITE, v24, time, v26, v27, 0.0, 17, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_33642244(this, isDisp, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_33642244(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim_33642244(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  float *v9; // x0
  __int64 v10; // x1
  float *v11; // x21
  float distance; // s0
  float lineWidth; // s1
  float v14; // s0
  float v15; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  float v22; // s8
  float *v23; // x21
  __int64 v24; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v27; // d0
  struct UnityEngine_Vector3_StaticFields *v28; // x8

  if ( (byte_4A2AE05 & 1) == 0 )
  {
    sub_1B761C0(&Method_UITweener_Begin_TweenPosition___, isDisp);
    sub_1B761C0(&Method_UITweener_Begin_TweenScale___, v7);
    sub_1B761C0(&StringLiteral_12975/*"StateQuestAfterActionEnd"*/, v8);
    byte_4A2AE05 = 1;
  }
  v9 = (float *)UITweener__Begin_object_(
                  this->fields.lineObject,
                  time,
                  (const MethodInfo_2F148BC *)Method_UITweener_Begin_TweenScale___);
  v11 = v9;
  distance = 0.0;
  if ( !isDisp )
    distance = this->fields.distance;
  if ( !v9 )
    goto LABEL_21;
  lineWidth = this->fields.lineWidth;
  v9[33] = lineWidth;
  v9[34] = distance;
  v9[32] = lineWidth;
  v14 = this->fields.lineWidth;
  v15 = 0.0;
  if ( isDisp )
    v15 = this->fields.distance;
  v9[35] = v14;
  v9[36] = v14;
  v9[37] = v15;
  *((_DWORD *)v9 + 8) = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v11 + 10) = gameObject;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v11 + 20), (int32_t)gameObject, v17, v18);
  v19 = StringLiteral_12975/*"StateQuestAfterActionEnd"*/;
  *((_QWORD *)v11 + 11) = StringLiteral_12975/*"StateQuestAfterActionEnd"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v11 + 22), v19, v20, v21);
  if ( time != 0.0 || isDisp )
  {
    v9 = (float *)UITweener__Begin_object_(
                    this->fields.lineObject,
                    time,
                    (const MethodInfo_2F148BC *)Method_UITweener_Begin_TweenPosition___);
    v22 = this->fields.distance;
    v23 = v9;
    v24 = 0LL;
    z = v22;
    if ( isDisp )
    {
      if ( !byte_4A28BB1 )
      {
        v9 = (float *)sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v10);
        byte_4A28BB1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v24 = *(_QWORD *)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
    }
    if ( v23 )
    {
      *((_QWORD *)v23 + 16) = v24;
      v27 = 0LL;
      v23[34] = z;
      if ( !isDisp )
      {
        if ( !byte_4A28BB1 )
        {
          sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v10);
          byte_4A28BB1 = 1;
        }
        v28 = UnityEngine_Vector3_TypeInfo->static_fields;
        v27 = *(_QWORD *)&v28->zeroVector.fields.x;
        v22 = v28->zeroVector.fields.z;
      }
      *(_QWORD *)(v23 + 35) = v27;
      v23[37] = v22;
      *((_DWORD *)v23 + 8) = 2;
      return;
    }
LABEL_21:
    sub_1B7641C(v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetState(
        ModelLineComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Action_o **p_stateEndAction; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4A2AE00 & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_ModelLineComponent__setState__, *(_QWORD *)&state);
    byte_4A2AE00 = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_stateEndAction, (int32_t)endAct, (int32_t)endAct, (int32_t)method);
  v9 = (CStateManager_T__o *)*(p_stateEndAction - 2);
  if ( !v9 )
    sub_1B7641C(0LL, v8);
  CStateManager_object___setState(
    v9,
    state,
    (const MethodInfo_308D3B0 *)Method_CStateManager_ModelLineComponent__setState__);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x25
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  float x; // s8
  float32x2_t v26; // d9
  float v27; // s10
  float32x2_t v28; // d11
  float v29; // s10
  float32x2_t v30; // d8
  unsigned __int64 v31; // d1
  float v32; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *tweenAlpha; // x8
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  int v38; // s0
  Il2CppObject *ComponentInChildren_object; // x22
  const MethodInfo *v42; // x2
  int32_t v43; // w2
  int32_t v44; // w3
  UnityEngine_GameObject_o *v45; // x0
  ScrTerminalMap_c *v46; // x8
  UnityEngine_GameObject_o *v47; // x19
  int32_t v48; // w20

  if ( (byte_4A2ADFF & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_SpotLayerMaster___, spotRoadInfo);
    sub_1B761C0(&DataManager_TypeInfo, v13);
    sub_1B761C0(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v14);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___, v15);
    sub_1B761C0(&NGUITools_TypeInfo, v16);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v17);
    sub_1B761C0(&ScrTerminalMap_TypeInfo, v18);
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v19);
    byte_4A2ADFF = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int32_t)spotRoadInfo,
    (int32_t)startSpot,
    (int32_t)endSpot);
  if ( !startSpot )
    goto LABEL_42;
  this->fields.startedPostion = SpotEntity__GetLocalPositionOnMapModel(startSpot, 0LL);
  if ( !endSpot )
    goto LABEL_42;
  this->fields.endedPostion = SpotEntity__GetLocalPositionOnMapModel(endSpot, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v22 = Master_object;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_object__object__int___TryGetEntity(
    v22,
    (Il2CppObject **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  x = this->fields.startedPostion.fields.x;
  v26.n64_u64[0] = *(unsigned __int64 *)&this->fields.startedPostion.fields.y;
  v27 = this->fields.endedPostion.fields.x;
  v28.n64_u64[0] = *(unsigned __int64 *)&this->fields.endedPostion.fields.y;
  if ( !byte_4A28BAF )
  {
    sub_1B761C0(&System_Math_TypeInfo, v23);
    byte_4A28BAF = 1;
  }
  v29 = x - v27;
  v30.n64_u64[0] = vsub_f32(v26, v28).n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v31 = vmul_f32(v30, v30).n64_u64[0];
  v32 = sqrtf(*((float *)&v31 + 1) + (float)((float)(v29 * v29) + *(float *)&v31)) * 0.5;
  this->fields.distance = v32;
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v32, v24);
  GameObjectExtensions__SetLocalPositionZ(this->fields.lineObject, this->fields.distance, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startedPostion, 0LL);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_42;
  tweenAlpha->fields.duration = 0.0;
  *(_QWORD *)&tweenAlpha->fields.from = 0x3F80000000000000LL;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A2915D )
  {
    sub_1B761C0(&TerminalSceneComponent_TypeInfo, v21);
    byte_4A2915D = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields._lookup->klass;
  if ( !klass )
    goto LABEL_42;
  Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)&klass->_2.thread_static_fields_offset;
  if ( !Master_object )
    goto LABEL_42;
  SpotGameObject = ScrTerminalMap__GetSpotGameObject((ScrTerminalMap_o *)Master_object, endSpot->fields.id, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v38 = GameObjectExtensions__GetPosition(SpotGameObject, 0LL);
    if ( !transform )
      goto LABEL_42;
    UnityEngine_Transform__LookAt_69311140(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
  if ( !Master_object )
LABEL_42:
    sub_1B7641C(Master_object, v21);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)Master_object,
                                 (const MethodInfo_2EB1C1C *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)spotCamera,
                                                                    0LL,
                                                                    0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( spotCamera )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)spotCamera,
                                                                        0LL);
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)Master_object,
                                                                          0LL);
          if ( ComponentInChildren_object )
          {
            ComponentInChildren_object[2].klass = (Il2CppClass *)Master_object;
            sub_1B76164(
              (ServantStatusBattleListViewItem_o *)&ComponentInChildren_object[2],
              (int32_t)Master_object,
              v43,
              v44);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_42;
    }
  }
LABEL_37:
  ModelLineComponent__UpdateDisp(this, layerId, v42);
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v46 = ScrTerminalMap_TypeInfo;
  v47 = v45;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v46 = ScrTerminalMap_TypeInfo;
  }
  v48 = UnityEngine_LayerMask__NameToLayer(v46->static_fields->MAP_DISP_LAYER_SPOT, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v47, v48, 0LL);
}


void __fastcall ModelLineComponent__SetupTweenAlpha(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *tweenAlpha; // x8

  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, spotRoadInfo);
  }
  if ( !byte_4A28BB1 )
  {
    this = (ModelLineComponent_o *)sub_1B761C0(&UnityEngine_Vector3_TypeInfo, spotRoadInfo);
    byte_4A28BB1 = 1;
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
  CStateManager_T__o *fsm; // x0

  if ( (byte_4A2ADFE & 1) == 0 )
  {
    sub_1B761C0(&Method_CStateManager_ModelLineComponent__update__, method);
    byte_4A2ADFE = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_308D38C *)Method_CStateManager_ModelLineComponent__update__);
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
      sub_1B7641C(0LL, v6);
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

  this->fields._SpotRoadInfo_k__BackingField = value;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  if ( (byte_4A2AE08 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaDisp_o *)sub_1B761C0(&ModelLineComponent_TypeInfo, that);
    byte_4A2AE08 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1B7641C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__SetQuestAfterActionColorAnim_33642720(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.stateEndAction, 0LL);
      ModelLineComponent__SetState(that, 1, 0LL, v8);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
        v6 = ModelLineComponent_TypeInfo;
      }
      v9.fields.a = 1.0;
      v9.fields.r = v6->static_fields->WHITE;
      v9.fields.g = v9.fields.r;
      v9.fields.b = v9.fields.r;
      ModelLineComponent__SetMaterialColor(that, v9, (const MethodInfo *)that);
      ModelLineComponent__SetQuestAfterActionScaleAnim_33642244(that, 1, 0.5, v7);
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

  if ( (byte_4A2AE09 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaGray_o *)sub_1B761C0(&ModelLineComponent_TypeInfo, that);
    byte_4A2AE09 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1B7641C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.stateEndAction, 0LL);
      ModelLineComponent__SetState(that, 1, 0LL, v8);
      break;
    case 1:
      ModelLineComponent__SetQuestAfterActionColorAnim_33642720(that, 0, 0.5, method);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
        v6 = ModelLineComponent_TypeInfo;
      }
      v9.fields.a = 1.0;
      v9.fields.r = v6->static_fields->GRAY;
      v9.fields.g = v9.fields.r;
      v9.fields.b = v9.fields.r;
      ModelLineComponent__SetMaterialColor(that, v9, (const MethodInfo *)that);
      ModelLineComponent__SetQuestAfterActionScaleAnim_33642244(that, 1, 0.5, v7);
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
    sub_1B7641C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      ModelLineComponent__SetQuestAfterActionScaleAnim_33642244(that, 0, 0.5, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.stateEndAction, 0LL);
  ModelLineComponent__SetState(v4, 1, 0LL, v5);
}