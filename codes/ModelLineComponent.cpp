void ModelLineComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2D47B & 1) == 0 )
  {
    sub_1C93AD4(&ModelLineComponent_TypeInfo);
    byte_4D2D47B = 1;
  }
  *ModelLineComponent_TypeInfo->static_fields = (struct ModelLineComponent_StaticFields)0x3F0000003F800000LL;
}


void ModelLineComponent___ctor(ModelLineComponent_o *this, const MethodInfo *method)
{
  this->fields.lineWidth = 20.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ModelLineComponent__Awake(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_ModelLineComponent__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x21
  Il2CppObject *v18; // x22
  CStateManager_T__o *v19; // x21
  Il2CppObject *v20; // x22
  CStateManager_T__o *v21; // x20
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4D2D471 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_ModelLineComponent___ctor__);
    sub_1C93AD4(&Method_CStateManager_ModelLineComponent__add__);
    sub_1C93AD4(&CStateManager_ModelLineComponent__TypeInfo);
    sub_1C93AD4(&ModelLineComponent_StateMapMain_TypeInfo);
    sub_1C93AD4(&ModelLineComponent_StateNone_TypeInfo);
    sub_1C93AD4(&ModelLineComponent_StateQaaDisp_TypeInfo);
    sub_1C93AD4(&ModelLineComponent_StateQaaGray_TypeInfo);
    sub_1C93AD4(&ModelLineComponent_StateQaaHide_TypeInfo);
    byte_4D2D471 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1C93D20(CStateManager_ModelLineComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_33EE80C *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_1C93D20(ModelLineComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_ModelLineComponent__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_1C93D20(ModelLineComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_10;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_ModelLineComponent__add__);
    v17 = (CStateManager_T__o *)*p_fsm;
    v18 = (Il2CppObject *)sub_1C93D20(ModelLineComponent_StateQaaHide_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_10;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_ModelLineComponent__add__);
    v19 = (CStateManager_T__o *)*p_fsm;
    v20 = (Il2CppObject *)sub_1C93D20(ModelLineComponent_StateQaaGray_TypeInfo);
    System_Object___ctor(v20, 0);
    if ( !v19
      || (CStateManager_object___add(
            v19,
            3,
            (IState_T__o *)v20,
            (const MethodInfo_33EE8B4 *)Method_CStateManager_ModelLineComponent__add__),
          v21 = (CStateManager_T__o *)*p_fsm,
          v22 = (Il2CppObject *)sub_1C93D20(ModelLineComponent_StateQaaDisp_TypeInfo),
          System_Object___ctor(v22, 0),
          !v21) )
    {
LABEL_10:
      sub_1C93D2C(v13, v14);
    }
    CStateManager_object___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0, v23);
  }
}


void ModelLineComponent__ChangeToClear(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Color_o MaterialColor; // 0:kr00_16.16
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  MaterialColor = ModelLineComponent__GetMaterialColor(this, method);
  v5.fields.r = MaterialColor.fields.r;
  v5.fields.g = MaterialColor.fields.g;
  v5.fields.b = MaterialColor.fields.b;
  v5.fields.a = 0.0;
  ModelLineComponent__SetMaterialColor(this, v5, v3);
}


UnityEngine_Material_o *ModelLineComponent__GetMaterial(ModelLineComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Material_o **p_material; // x19
  UnityEngine_Object_o *material; // x21
  __int64 v5; // x1
  UnityEngine_Material_o *result; // x0
  Il2CppObject *ComponentInChildren_object; // x20
  bool v8; // w8
  UnityEngine_Material_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2D475 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D475 = 1;
  }
  p_material = &this->fields.material;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(material, 0, 0) )
    return *p_material;
  result = (UnityEngine_Material_o *)this->fields.lineObject;
  if ( !result )
LABEL_14:
    sub_1C93D2C(result, v5);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)result,
                                 (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0);
  result = 0;
  if ( !v8 )
  {
    if ( ComponentInChildren_object )
    {
      v9 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)ComponentInChildren_object, 0);
      *p_material = v9;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_material, (int32_t)v9, v10, v11, v12, v13, v14, v15);
      return *p_material;
    }
    goto LABEL_14;
  }
  return result;
}


UnityEngine_Color_o ModelLineComponent__GetMaterialColor(ModelLineComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Material_o *Material; // x0
  __int64 v4; // x1

  if ( (byte_4D2D477 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    byte_4D2D477 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1C93D2C(0, v4);
  return UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_16273/*"_Color"*/, 0);
}


void ModelLineComponent__RestoreToDisp(ModelLineComponent_o *this, const MethodInfo *method)
{
  ModelLineComponent_o *v2; // x19
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v5; // x0
  float *p_GRAY; // x8
  ModelLineComponent_c *v7; // x0
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4D2D478 & 1) == 0 )
  {
    this = (ModelLineComponent_o *)sub_1C93AD4(&ModelLineComponent_TypeInfo);
    byte_4D2D478 = 1;
  }
  SpotRoadInfo_k__BackingField = v2->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_1C93D2C(this, method);
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


void ModelLineComponent__SetContrast(ModelLineComponent_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Color_o v3; // 0:kr00_16.16

  v3.fields.r = value;
  v3.fields.g = value;
  v3.fields.b = value;
  v3.fields.a = 1.0;
  ModelLineComponent__SetMaterialColor(this, v3, method);
}


void ModelLineComponent__SetMaterialColor(
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
  if ( (byte_4D2D476 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16273/*"_Color"*/);
    byte_4D2D476 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1C93D2C(0, v9);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_16273/*"_Color"*/, v10, 0);
}


void ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_36837736(this, isActive, 0.5, method);
}


void ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_36837736(this, isActive, 0.0, method);
}


void ModelLineComponent__SetQuestAfterActionColorAnim_36837736(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct ModelLineComponent_StaticFields *static_fields; // x8
  struct ModelLineComponent_StaticFields *p_GRAY; // x9
  float WHITE; // s9
  struct ModelLineComponent_StaticFields *v26; // x10
  float v27; // s10
  EasingObject_o *v28; // x19
  System_Action_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_4D2D47A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C93AD4(&ModelLineComponent_TypeInfo);
    sub_1C93AD4(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__);
    sub_1C93AD4(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__);
    sub_1C93AD4(&ModelLineComponent___c__DisplayClass40_0_TypeInfo);
    byte_4D2D47A = 1;
  }
  v7 = sub_1C93D20(ModelLineComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.lineObject,
                       (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
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
    v26 = (struct ModelLineComponent_StaticFields *)&static_fields->GRAY;
    if ( !isDisp )
      v26 = ModelLineComponent_TypeInfo->static_fields;
    WHITE = v26->WHITE;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      static_fields = ModelLineComponent_TypeInfo->static_fields;
    }
  }
  if ( !isDisp )
    static_fields = (struct ModelLineComponent_StaticFields *)((char *)static_fields + 4);
  v27 = static_fields->WHITE;
  v28 = *(EasingObject_o **)(v7 + 24);
  *(float *)(v7 + 32) = static_fields->WHITE;
  v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0);
  v30 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0);
  if ( !v28 )
LABEL_16:
    sub_1C93D2C(v8, v9);
  EasingObject__Play_49778384(v28, WHITE, v27, time, v29, v30, 0.0, 17, 0);
}


void ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_36837260(this, isDisp, 0.5, method);
}


void ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_36837260(this, isDisp, 0.0, method);
}


void ModelLineComponent__SetQuestAfterActionScaleAnim_36837260(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  float *v7; // x0
  __int64 v8; // x1
  float *v9; // x21
  float distance; // s0
  float lineWidth; // s1
  float v12; // s0
  float v13; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  float v28; // s8
  float *v29; // x21
  __int64 v30; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v33; // d0
  struct UnityEngine_Vector3_StaticFields *v34; // x8

  if ( (byte_4D2D479 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UITweener_Begin_TweenPosition___);
    sub_1C93AD4(&Method_UITweener_Begin_TweenScale___);
    sub_1C93AD4(&StringLiteral_13172/*"StateQuestAfterActionEnd"*/);
    byte_4D2D479 = 1;
  }
  v7 = (float *)UITweener__Begin_object_(
                  this->fields.lineObject,
                  time,
                  (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenScale___);
  v9 = v7;
  distance = 0.0;
  if ( !isDisp )
    distance = this->fields.distance;
  if ( !v7 )
    goto LABEL_21;
  lineWidth = this->fields.lineWidth;
  v7[33] = lineWidth;
  v7[34] = distance;
  v7[32] = lineWidth;
  v12 = this->fields.lineWidth;
  v13 = 0.0;
  if ( isDisp )
    v13 = this->fields.distance;
  v7[35] = v12;
  v7[36] = v12;
  v7[37] = v13;
  *((_DWORD *)v7 + 8) = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v9 + 10) = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 20), (int32_t)gameObject, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_13172/*"StateQuestAfterActionEnd"*/;
  *((_QWORD *)v9 + 11) = StringLiteral_13172/*"StateQuestAfterActionEnd"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 22), v21, v22, v23, v24, v25, v26, v27);
  if ( time != 0.0 || isDisp )
  {
    v7 = (float *)UITweener__Begin_object_(
                    this->fields.lineObject,
                    time,
                    (const MethodInfo_327A3AC *)Method_UITweener_Begin_TweenPosition___);
    v28 = this->fields.distance;
    v29 = v7;
    v30 = 0;
    z = v28;
    if ( isDisp )
    {
      if ( !byte_4D2A139 )
      {
        v7 = (float *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v30 = *(_QWORD *)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
    }
    if ( v29 )
    {
      *((_QWORD *)v29 + 16) = v30;
      v33 = 0;
      v29[34] = z;
      if ( !isDisp )
      {
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        v34 = UnityEngine_Vector3_TypeInfo->static_fields;
        v33 = *(_QWORD *)&v34->zeroVector.fields.x;
        v28 = v34->zeroVector.fields.z;
      }
      *(_QWORD *)(v29 + 35) = v33;
      v29[37] = v28;
      *((_DWORD *)v29 + 8) = 2;
      return;
    }
LABEL_21:
    sub_1C93D2C(v7, v8);
  }
}


void ModelLineComponent__SetState(
        ModelLineComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o **p_stateEndAction; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_4D2D474 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_ModelLineComponent__setState__);
    byte_4D2D474 = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_stateEndAction,
    (int32_t)endAct,
    (int32_t)endAct,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_stateEndAction - 2);
  if ( !v13 )
    sub_1C93D2C(0, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_ModelLineComponent__setState__);
}


void ModelLineComponent__Setup(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        SpotEntity_o *startSpot,
        SpotEntity_o *endSpot,
        MapModelCamera_o *spotCamera,
        int32_t layerId,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x25
  const MethodInfo *v17; // x2
  float x; // s8
  float32x2_t v19; // d9
  float v20; // s10
  float32x2_t v21; // d11
  float v22; // s10
  float32x2_t v23; // d8
  unsigned __int64 v24; // d1
  float v25; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *tweenAlpha; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *ComponentInChildren_object; // x22
  const MethodInfo *v32; // x2
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_GameObject_o *v39; // x0
  ScrTerminalMap_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x19
  int32_t v42; // w20
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D473 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScrTerminalMap_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D473 = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int32_t)spotRoadInfo,
    (int32_t)startSpot,
    (int32_t)endSpot,
    (System_String_o *)spotCamera,
    layerId,
    (int64_t)method,
    v7);
  if ( !startSpot )
    goto LABEL_42;
  this->fields.startedPostion = SpotEntity__GetLocalPositionOnMapModel(startSpot, 0);
  if ( !endSpot )
    goto LABEL_42;
  this->fields.endedPostion = SpotEntity__GetLocalPositionOnMapModel(endSpot, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v16 = Master_object;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_34632C0 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_object__object__int___TryGetEntity(
    v16,
    (Il2CppObject **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_34632C0 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  x = this->fields.startedPostion.fields.x;
  v19.n64_u64[0] = *(unsigned __int64 *)&this->fields.startedPostion.fields.y;
  v20 = this->fields.endedPostion.fields.x;
  v21.n64_u64[0] = *(unsigned __int64 *)&this->fields.endedPostion.fields.y;
  if ( !byte_4D2A137 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A137 = 1;
  }
  v22 = x - v20;
  v23.n64_u64[0] = vsub_f32(v19, v21).n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v24 = vmul_f32(v23, v23).n64_u64[0];
  v25 = sqrtf(*((float *)&v24 + 1) + (float)((float)(v22 * v22) + *(float *)&v24)) * 0.5;
  this->fields.distance = v25;
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v25, v17);
  GameObjectExtensions__SetLocalPositionZ(this->fields.lineObject, this->fields.distance, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startedPostion, 0);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_42;
  tweenAlpha->fields.duration = 0.0;
  *(_QWORD *)&tweenAlpha->fields.from = 0x3F80000000000000LL;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_42;
  Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)&klass->_2.static_fields_size;
  if ( !Master_object )
    goto LABEL_42;
  SpotGameObject = ScrTerminalMap__GetSpotGameObject((ScrTerminalMap_o *)Master_object, endSpot->fields.id, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Position = GameObjectExtensions__GetPosition(SpotGameObject, 0);
    if ( !transform )
      goto LABEL_42;
    UnityEngine_Transform__LookAt_72145832(transform, Position, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
  if ( !Master_object )
LABEL_42:
    sub_1C93D2C(Master_object, v15);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)Master_object,
                                 (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)spotCamera,
                                                                    0,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( spotCamera )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)spotCamera,
                                                                        0);
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)Master_object,
                                                                          0);
          if ( ComponentInChildren_object )
          {
            ComponentInChildren_object[2].klass = (Il2CppClass *)Master_object;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&ComponentInChildren_object[2],
              (int32_t)Master_object,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_42;
    }
  }
LABEL_37:
  ModelLineComponent__UpdateDisp(this, layerId, v32);
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v40 = ScrTerminalMap_TypeInfo;
  v41 = v39;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v40 = ScrTerminalMap_TypeInfo;
  }
  v42 = UnityEngine_LayerMask__NameToLayer(v40->static_fields->MAP_DISP_LAYER_SPOT, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v41, v42, 0);
}


void ModelLineComponent__SetupTweenAlpha(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *tweenAlpha; // x8

  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    sub_1C93D2C(this, method);
  tweenAlpha->fields.duration = 0.0;
  *(_QWORD *)&tweenAlpha->fields.from = 0x3F80000000000000LL;
}


void ModelLineComponent__SetupTweenScale(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        float distance,
        const MethodInfo *method)
{
  struct TweenScale_o *tweenScale; // x20
  ModelLineComponent_o *v5; // x19
  float lineWidth; // s1
  struct TweenScale_o *v7; // x8
  unsigned __int64 v8; // d1
  UnityEngine_Vector3_c *v9; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v12; // x9
  struct TweenScale_o *v13; // x8

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
        v8 = vld1_dup_f32(&this->fields.lineWidth).n64_u64[0];
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_1C93D2C(this, spotRoadInfo);
  }
  if ( !byte_4D2A139 )
  {
    this = (ModelLineComponent_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !tweenScale )
    goto LABEL_13;
  v9 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&tweenScale->fields.from.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  tweenScale->fields.from.fields.z = z;
  v7 = v5->fields.tweenScale;
  if ( !v7 )
    goto LABEL_13;
  v12 = v9->static_fields;
  distance = v12->zeroVector.fields.z;
  v8 = *(_QWORD *)&v12->zeroVector.fields.x;
LABEL_11:
  *(_QWORD *)&v7->fields.to.fields.x = v8;
  v7->fields.to.fields.z = distance;
  v13 = v5->fields.tweenScale;
  if ( !v13 )
    goto LABEL_13;
  v13->fields.duration = 0.0;
}


void ModelLineComponent__StateQuestAfterActionEnd(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.stateEndAction, 0);
  ModelLineComponent__SetState(this, 1, 0, v3);
}


void ModelLineComponent__Update(ModelLineComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D2D472 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_ModelLineComponent__update__);
    byte_4D2D472 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_33EE91C *)Method_CStateManager_ModelLineComponent__update__);
}


void ModelLineComponent__UpdateDisp(ModelLineComponent_o *this, int32_t layerId, const MethodInfo *method)
{
  SpotLayerEntity_o *startSpotLayerEntity; // x0
  const MethodInfo *v6; // x1
  SpotLayerEntity_o *endSpotLayerEntity; // x0

  startSpotLayerEntity = this->fields.startSpotLayerEntity;
  if ( startSpotLayerEntity && this->fields.endSpotLayerEntity )
  {
    if ( !SpotLayerEntity__IsEnabledDispSpot(startSpotLayerEntity, layerId, 0) )
      goto LABEL_8;
    endSpotLayerEntity = this->fields.endSpotLayerEntity;
    if ( !endSpotLayerEntity )
      sub_1C93D2C(0, v6);
    if ( SpotLayerEntity__IsEnabledDispSpot(endSpotLayerEntity, layerId, 0) )
      ModelLineComponent__RestoreToDisp(this, v6);
    else
LABEL_8:
      ModelLineComponent__ChangeToClear(this, v6);
  }
}


UnityEngine_GameObject_o *ModelLineComponent__get_LineObject(ModelLineComponent_o *this, const MethodInfo *method)
{
  return this->fields.lineObject;
}


MapControl_SpotRoadInfo_o *ModelLineComponent__get_SpotRoadInfo(ModelLineComponent_o *this, const MethodInfo *method)
{
  return this->fields._SpotRoadInfo_k__BackingField;
}


void ModelLineComponent__set_SpotRoadInfo(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SpotRoadInfo_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ModelLineComponent_StateMapMain___ctor(ModelLineComponent_StateMapMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ModelLineComponent_StateMapMain__begin(
        ModelLineComponent_StateMapMain_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateMapMain__end(
        ModelLineComponent_StateMapMain_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateMapMain__update(
        ModelLineComponent_StateMapMain_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateNone___ctor(ModelLineComponent_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ModelLineComponent_StateNone__begin(
        ModelLineComponent_StateNone_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateNone__end(
        ModelLineComponent_StateNone_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateNone__update(
        ModelLineComponent_StateNone_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateQaaDisp___ctor(ModelLineComponent_StateQaaDisp_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ModelLineComponent_StateQaaDisp__begin(
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

  if ( (byte_4D2D47C & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaDisp_o *)sub_1C93AD4(&ModelLineComponent_TypeInfo);
    byte_4D2D47C = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0 )
    sub_1C93D2C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__SetQuestAfterActionColorAnim_36837736(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.stateEndAction, 0);
      ModelLineComponent__SetState(that, 1, 0, v8);
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
      ModelLineComponent__SetQuestAfterActionScaleAnim_36837260(that, 1, 0.5, v7);
      break;
  }
}


void ModelLineComponent_StateQaaDisp__end(
        ModelLineComponent_StateQaaDisp_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateQaaDisp__update(
        ModelLineComponent_StateQaaDisp_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateQaaGray___ctor(ModelLineComponent_StateQaaGray_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ModelLineComponent_StateQaaGray__begin(
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

  if ( (byte_4D2D47D & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaGray_o *)sub_1C93AD4(&ModelLineComponent_TypeInfo);
    byte_4D2D47D = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0 )
    sub_1C93D2C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.stateEndAction, 0);
      ModelLineComponent__SetState(that, 1, 0, v8);
      break;
    case 1:
      ModelLineComponent__SetQuestAfterActionColorAnim_36837736(that, 0, 0.5, method);
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
      ModelLineComponent__SetQuestAfterActionScaleAnim_36837260(that, 1, 0.5, v7);
      break;
  }
}


void ModelLineComponent_StateQaaGray__end(
        ModelLineComponent_StateQaaGray_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateQaaGray__update(
        ModelLineComponent_StateQaaGray_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateQaaHide___ctor(ModelLineComponent_StateQaaHide_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ModelLineComponent_StateQaaHide__begin(
        ModelLineComponent_StateQaaHide_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0 )
    sub_1C93D2C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      ModelLineComponent__SetQuestAfterActionScaleAnim_36837260(that, 0, 0.5, method);
  }
  else
  {
    ActionExtensions__Call(that->fields.stateEndAction, 0);
    ModelLineComponent__SetState(that, 1, 0, v6);
  }
}


void ModelLineComponent_StateQaaHide__end(
        ModelLineComponent_StateQaaHide_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent_StateQaaHide__update(
        ModelLineComponent_StateQaaHide_o *this,
        ModelLineComponent_o *that,
        const MethodInfo *method)
{
  ;
}


void ModelLineComponent___c__DisplayClass40_0___ctor(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ModelLineComponent___c__DisplayClass40_0___SetQuestAfterActionColorAnim_b__0(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *eo; // x8
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  eo = this->fields.eo;
  if ( !eo || (this = (ModelLineComponent___c__DisplayClass40_0_o *)this->fields.__4__this) == 0 )
    sub_1C93D2C(this, method);
  v3.fields.r = eo->fields.mNow;
  v3.fields.a = 1.0;
  v3.fields.g = v3.fields.r;
  v3.fields.b = v3.fields.r;
  ModelLineComponent__SetMaterialColor((ModelLineComponent_o *)this, v3, method);
}


void ModelLineComponent___c__DisplayClass40_0___SetQuestAfterActionColorAnim_b__1(
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
        (v4 = this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.stateEndAction, 0);
  ModelLineComponent__SetState(v4, 1, 0, v5);
}