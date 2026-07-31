void ModelLineComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5935018 & 1) == 0 )
  {
    sub_21FFC50(&ModelLineComponent_TypeInfo);
    byte_5935018 = 1;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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

  if ( (byte_593500E & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_ModelLineComponent___ctor__);
    sub_21FFC50(&Method_CStateManager_ModelLineComponent__add__);
    sub_21FFC50(&CStateManager_ModelLineComponent__TypeInfo);
    sub_21FFC50(&ModelLineComponent_StateMapMain_TypeInfo);
    sub_21FFC50(&ModelLineComponent_StateNone_TypeInfo);
    sub_21FFC50(&ModelLineComponent_StateQaaDisp_TypeInfo);
    sub_21FFC50(&ModelLineComponent_StateQaaGray_TypeInfo);
    sub_21FFC50(&ModelLineComponent_StateQaaHide_TypeInfo);
    byte_593500E = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_ModelLineComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_3E505AC *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v12 = (Il2CppObject *)sub_21FFEBC(ModelLineComponent_StateNone_TypeInfo);
    System_Object___ctor(v12, 0);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v12,
      (const MethodInfo_3E5065C *)Method_CStateManager_ModelLineComponent__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_21FFEBC(ModelLineComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v16, 0);
    if ( !v15 )
      goto LABEL_10;
    CStateManager_object___add(
      v15,
      1,
      (IState_T__o *)v16,
      (const MethodInfo_3E5065C *)Method_CStateManager_ModelLineComponent__add__);
    v17 = (CStateManager_T__o *)*p_fsm;
    v18 = (Il2CppObject *)sub_21FFEBC(ModelLineComponent_StateQaaHide_TypeInfo);
    System_Object___ctor(v18, 0);
    if ( !v17 )
      goto LABEL_10;
    CStateManager_object___add(
      v17,
      2,
      (IState_T__o *)v18,
      (const MethodInfo_3E5065C *)Method_CStateManager_ModelLineComponent__add__);
    v19 = (CStateManager_T__o *)*p_fsm;
    v20 = (Il2CppObject *)sub_21FFEBC(ModelLineComponent_StateQaaGray_TypeInfo);
    System_Object___ctor(v20, 0);
    if ( !v19
      || (CStateManager_object___add(
            v19,
            3,
            (IState_T__o *)v20,
            (const MethodInfo_3E5065C *)Method_CStateManager_ModelLineComponent__add__),
          v21 = (CStateManager_T__o *)*p_fsm,
          v22 = (Il2CppObject *)sub_21FFEBC(ModelLineComponent_StateQaaDisp_TypeInfo),
          System_Object___ctor(v22, 0),
          !v21) )
    {
LABEL_10:
      sub_21FFECC(v13, v14);
    }
    CStateManager_object___add(
      v21,
      4,
      (IState_T__o *)v22,
      (const MethodInfo_3E5065C *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0, v23);
  }
}


void ModelLineComponent__ChangeToClear(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Color_o MaterialColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  MaterialColor = ModelLineComponent__GetMaterialColor(this, method);
  MaterialColor.fields.a = 0.0;
  ModelLineComponent__SetMaterialColor(this, MaterialColor, v3);
}


UnityEngine_Material_o *ModelLineComponent__GetMaterial(ModelLineComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Material_o **p_material; // x19
  UnityEngine_Object_o *material; // x21
  __int64 v6; // x1
  UnityEngine_Material_o *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *ComponentInChildren_object; // x20
  bool v11; // w8
  UnityEngine_Material_o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5935012 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935012 = 1;
  }
  p_material = &this->fields.material;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(material, 0, 0) )
    return *p_material;
  result = (UnityEngine_Material_o *)this->fields.lineObject;
  if ( !result )
LABEL_14:
    sub_21FFECC(result, v6);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)result,
                                 (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0);
  result = 0;
  if ( !v11 )
  {
    if ( ComponentInChildren_object )
    {
      v12 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)ComponentInChildren_object, 0);
      *p_material = v12;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_material, (int32_t)v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_5935014 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    byte_5935014 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_21FFECC(0, v4);
  return UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_16781/*"_Color"*/, 0);
}


void ModelLineComponent__RestoreToDisp(ModelLineComponent_o *this, const MethodInfo *method)
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
  if ( (byte_5935015 & 1) == 0 )
  {
    this = (ModelLineComponent_o *)sub_21FFC50(&ModelLineComponent_TypeInfo);
    byte_5935015 = 1;
  }
  SpotRoadInfo_k__BackingField = v3->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_21FFECC(this, method);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType == 2 )
  {
    v8 = ModelLineComponent_TypeInfo;
    if ( !*(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, method, v2);
      v8 = ModelLineComponent_TypeInfo;
    }
    p_GRAY = &v8->static_fields->GRAY;
    goto LABEL_12;
  }
  if ( dispType == 1 )
  {
    v6 = ModelLineComponent_TypeInfo;
    if ( !*(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, method, v2);
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
void ModelLineComponent__SetContrast(ModelLineComponent_o *this, float value, const MethodInfo *method)
{
  float v5; // s3

  v5 = 1.0;
  ModelLineComponent__SetMaterialColor(this, *(UnityEngine_Color_o *)&value, method);
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
  if ( (byte_5935013 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    byte_5935013 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_21FFECC(0, v9);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_16781/*"_Color"*/, v10, 0);
}


void ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_42973224(this, isActive, 0.5, method);
}


void ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_42973224(this, isActive, 0.0, method);
}


void ModelLineComponent__SetQuestAfterActionColorAnim_42973224(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  int v25; // w8
  struct ModelLineComponent_StaticFields *static_fields; // x8
  float GRAY; // s9
  struct ModelLineComponent_StaticFields *v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  float WHITE; // s10
  System_Action_c *v34; // x0
  EasingObject_o *v35; // x20
  System_Action_o *v36; // x21
  System_Action_o *v37; // x22

  if ( (byte_5935017 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&ModelLineComponent_TypeInfo);
    sub_21FFC50(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__);
    sub_21FFC50(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__);
    sub_21FFC50(&ModelLineComponent___c__DisplayClass40_0_TypeInfo);
    byte_5935017 = 1;
  }
  v7 = sub_21FFEBC(ModelLineComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.lineObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
  v25 = *(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1);
  if ( isDisp )
  {
    if ( v25 )
    {
      static_fields = ModelLineComponent_TypeInfo->static_fields;
      GRAY = static_fields->GRAY;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, v23, v24);
      static_fields = ModelLineComponent_TypeInfo->static_fields;
      GRAY = static_fields->GRAY;
      if ( !*(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, v29, v30);
        static_fields = ModelLineComponent_TypeInfo->static_fields;
      }
    }
  }
  else
  {
    if ( v25 )
    {
      v28 = ModelLineComponent_TypeInfo->static_fields;
      GRAY = v28->WHITE;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, v23, v24);
      v28 = ModelLineComponent_TypeInfo->static_fields;
      GRAY = v28->WHITE;
      if ( !*(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, v31, v32);
        v28 = ModelLineComponent_TypeInfo->static_fields;
      }
    }
    static_fields = (struct ModelLineComponent_StaticFields *)&v28->GRAY;
  }
  WHITE = static_fields->WHITE;
  v34 = System_Action_TypeInfo;
  v35 = *(EasingObject_o **)(v7 + 24);
  *(float *)(v7 + 32) = static_fields->WHITE;
  v36 = (System_Action_o *)sub_21FFEBC(v34);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0);
  v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0);
  if ( !v35 )
LABEL_16:
    sub_21FFECC(v8, v9);
  EasingObject__Play_55916512(v35, GRAY, WHITE, time, v36, v37, 0.0, 17, 0);
}


void ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_42972740(this, isDisp, 0.5, method);
}


void ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_42972740(this, isDisp, 0.0, method);
}


void ModelLineComponent__SetQuestAfterActionScaleAnim_42972740(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  float *v7; // x0
  __int64 v8; // x1
  float *v9; // x21
  float lineWidth; // s0
  float distance; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  float v29; // s8
  float *v30; // x20
  __int64 v31; // d0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s2
  int v34; // w8
  struct UnityEngine_Vector3_StaticFields *v35; // x8

  if ( (byte_5935016 & 1) == 0 )
  {
    sub_21FFC50(&Method_UITweener_Begin_TweenPosition___);
    sub_21FFC50(&Method_UITweener_Begin_TweenScale___);
    sub_21FFC50(&StringLiteral_13597/*"StateQuestAfterActionEnd"*/);
    byte_5935016 = 1;
  }
  v7 = (float *)UITweener__Begin_object_(
                  this->fields.lineObject,
                  time,
                  (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenScale___);
  v9 = v7;
  if ( isDisp )
  {
    if ( !v7 )
      goto LABEL_21;
    lineWidth = this->fields.lineWidth;
    v7[34] = 0.0;
    v7[32] = lineWidth;
    v7[33] = lineWidth;
    distance = this->fields.distance;
  }
  else
  {
    if ( !v7 )
      goto LABEL_21;
    v12 = this->fields.lineWidth;
    v13 = this->fields.distance;
    distance = 0.0;
    v7[32] = v12;
    v7[33] = v12;
    v7[34] = v13;
  }
  v14 = this->fields.lineWidth;
  v7[37] = distance;
  v7[35] = v14;
  v7[36] = v14;
  *((_DWORD *)v7 + 8) = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v9 + 10) = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 20), (int32_t)gameObject, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_13597/*"StateQuestAfterActionEnd"*/;
  *((_QWORD *)v9 + 11) = StringLiteral_13597/*"StateQuestAfterActionEnd"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 22), v22, v23, v24, v25, v26, v27, v28);
  if ( time != 0.0 || isDisp )
  {
    v7 = (float *)UITweener__Begin_object_(
                    this->fields.lineObject,
                    time,
                    (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenPosition___);
    v29 = this->fields.distance;
    v30 = v7;
    if ( isDisp )
    {
      if ( !byte_5931940 )
      {
        v7 = (float *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      if ( v30 )
      {
        v31 = 0;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        z = static_fields->zeroVector.fields.z;
        *((_QWORD *)v30 + 16) = *(_QWORD *)&static_fields->zeroVector.fields.x;
        v30[34] = z;
LABEL_19:
        *(_QWORD *)(v30 + 35) = v31;
        v30[37] = v29;
        *((_DWORD *)v30 + 8) = 2;
        return;
      }
    }
    else if ( v7 )
    {
      *((_QWORD *)v7 + 16) = 0;
      v34 = (unsigned __int8)byte_5931940;
      v7[34] = v29;
      if ( !v34 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      v35 = UnityEngine_Vector3_TypeInfo->static_fields;
      v31 = *(_QWORD *)&v35->zeroVector.fields.x;
      v29 = v35->zeroVector.fields.z;
      goto LABEL_19;
    }
LABEL_21:
    sub_21FFECC(v7, v8);
  }
}


void ModelLineComponent__SetState(
        ModelLineComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o **p_stateEndAction; // x21
  __int64 v12; // x1
  CStateManager_T__o *v13; // x0

  if ( (byte_5935011 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_ModelLineComponent__setState__);
    byte_5935011 = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_stateEndAction,
    (int32_t)endAct,
    (System_String_o *)endAct,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_T__o *)*(p_stateEndAction - 2);
  if ( !v13 )
    sub_21FFECC(0, v12);
  CStateManager_object___setState(
    v13,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_ModelLineComponent__setState__);
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
  bool v7; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_c *v18; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x25
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  float z; // s8
  float32x2_t v23; // d9
  float32x2_t v24; // d10
  float v25; // s11
  float32x2_t v26; // d0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x2
  struct TweenAlpha_o *tweenAlpha; // x8
  TerminalSceneComponent_c *v30; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *ComponentInChildren_object; // x22
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  ScrTerminalMap_c *v50; // x8
  UnityEngine_GameObject_o *v51; // x19
  __int64 v52; // x1
  __int64 v53; // x2
  int32_t v54; // w20
  UnityEngine_Vector3_o LocalPositionOnMapModel; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935010 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScrTerminalMap_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935010 = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int32_t)spotRoadInfo,
    (System_String_o *)startSpot,
    (System_String_o *)endSpot,
    (int32_t)spotCamera,
    layerId,
    (bool)method,
    v7);
  if ( !startSpot )
    goto LABEL_42;
  this->fields.startedPostion = SpotEntity__GetLocalPositionOnMapModel(startSpot, 0);
  if ( !endSpot )
    goto LABEL_42;
  LocalPositionOnMapModel = SpotEntity__GetLocalPositionOnMapModel(endSpot, 0);
  v18 = DataManager_TypeInfo;
  this->fields.endedPostion = LocalPositionOnMapModel;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v19 = Master_object;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_object__object__int___TryGetEntity(
    v19,
    (Il2CppObject **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  z = this->fields.startedPostion.fields.z;
  v23.n64_u64[0] = *(unsigned __int64 *)&this->fields.startedPostion.fields.x;
  v24.n64_u64[0] = *(unsigned __int64 *)&this->fields.endedPostion.fields.x;
  v25 = this->fields.endedPostion.fields.z;
  if ( !byte_593193E )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193E = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20, v21);
  v26.n64_u64[0] = vsub_f32(v23, v24).n64_u64[0];
  v26.n64_f32[0] = sqrtf((float)((float)(z - v25) * (float)(z - v25)) + vaddv_f32(vmul_f32(v26, v26))) * 0.5;
  LODWORD(this->fields.distance) = v26.n64_u32[0];
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v26.n64_f32[0], v21);
  GameObjectExtensions__SetLocalPositionZ(this->fields.lineObject, this->fields.distance, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startedPostion, 0);
  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    goto LABEL_42;
  tweenAlpha->fields.duration = 0.0;
  v30 = TerminalSceneComponent_TypeInfo;
  *(_QWORD *)&tweenAlpha->fields.from = 0x3F80000000000000LL;
  if ( !*(&v30->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v30, v15, v28);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v28);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_42;
  Master_object = *(DataMasterBase_TMaster__TEntity__PKType__o **)&klass->_2.static_fields_size;
  if ( !Master_object )
    goto LABEL_42;
  SpotGameObject = ScrTerminalMap__GetSpotGameObject((ScrTerminalMap_o *)Master_object, endSpot->fields.id, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    Position = GameObjectExtensions__GetPosition(SpotGameObject, 0);
    if ( !transform )
      goto LABEL_42;
    UnityEngine_Transform__LookAt_83282108(transform, Position, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
  if ( !Master_object )
LABEL_42:
    sub_21FFECC(Master_object, v15);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)Master_object,
                                 (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
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
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&ComponentInChildren_object[2],
              (int32_t)Master_object,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_42;
    }
  }
LABEL_37:
  ModelLineComponent__UpdateDisp(this, layerId, v40);
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v50 = ScrTerminalMap_TypeInfo;
  v51 = v47;
  if ( !*(&ScrTerminalMap_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, v48, v49);
    v50 = ScrTerminalMap_TypeInfo;
  }
  v54 = UnityEngine_LayerMask__NameToLayer(v50->static_fields->MAP_DISP_LAYER_SPOT, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v52, v53);
  NGUITools__SetLayer(v51, v54, 0);
}


void ModelLineComponent__SetupTweenAlpha(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *tweenAlpha; // x8

  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, spotRoadInfo);
  }
  if ( !byte_5931940 )
  {
    this = (ModelLineComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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


void ModelLineComponent__StateQuestAfterActionEnd(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.stateEndAction, 0);
  ModelLineComponent__SetState(this, 1, 0, v3);
}


void ModelLineComponent__Update(ModelLineComponent_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_593500F & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_ModelLineComponent__update__);
    byte_593500F = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3E506C4 *)Method_CStateManager_ModelLineComponent__update__);
}


void ModelLineComponent__UpdateDisp(ModelLineComponent_o *this, int32_t layerId, const MethodInfo *method)
{
  SpotLayerEntity_o *startSpotLayerEntity; // x0
  const MethodInfo *v6; // x1
  SpotLayerEntity_o *endSpotLayerEntity; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Color_o MaterialColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  startSpotLayerEntity = this->fields.startSpotLayerEntity;
  if ( startSpotLayerEntity && this->fields.endSpotLayerEntity )
  {
    if ( !SpotLayerEntity__IsEnabledDispSpot(startSpotLayerEntity, layerId, 0) )
      goto LABEL_8;
    endSpotLayerEntity = this->fields.endSpotLayerEntity;
    if ( !endSpotLayerEntity )
      sub_21FFECC(0, v6);
    if ( SpotLayerEntity__IsEnabledDispSpot(endSpotLayerEntity, layerId, 0) )
    {
      ModelLineComponent__RestoreToDisp(this, v6);
    }
    else
    {
LABEL_8:
      MaterialColor = ModelLineComponent__GetMaterialColor(this, v6);
      MaterialColor.fields.a = 0.0;
      ModelLineComponent__SetMaterialColor(this, MaterialColor, v8);
    }
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpotRoadInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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

  if ( (byte_5935019 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaDisp_o *)sub_21FFC50(&ModelLineComponent_TypeInfo);
    byte_5935019 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0 )
    sub_21FFECC(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__SetQuestAfterActionColorAnim_42973224(that, 1, 0.5, method);
      break;
    case 1:
      ActionExtensions__Call(that->fields.stateEndAction, 0);
      ModelLineComponent__SetState(that, 1, 0, v8);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( !*(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, that, method);
        v6 = ModelLineComponent_TypeInfo;
      }
      v9.fields.a = 1.0;
      v9.fields.r = v6->static_fields->WHITE;
      v9.fields.g = v9.fields.r;
      v9.fields.b = v9.fields.r;
      ModelLineComponent__SetMaterialColor(that, v9, (const MethodInfo *)that);
      ModelLineComponent__SetQuestAfterActionScaleAnim_42972740(that, 1, 0.5, v7);
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

  if ( (byte_593501A & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaGray_o *)sub_21FFC50(&ModelLineComponent_TypeInfo);
    byte_593501A = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0 )
    sub_21FFECC(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.stateEndAction, 0);
      ModelLineComponent__SetState(that, 1, 0, v8);
      break;
    case 1:
      ModelLineComponent__SetQuestAfterActionColorAnim_42973224(that, 0, 0.5, method);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( !*(&ModelLineComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo, that, method);
        v6 = ModelLineComponent_TypeInfo;
      }
      v9.fields.a = 1.0;
      v9.fields.r = v6->static_fields->GRAY;
      v9.fields.g = v9.fields.r;
      v9.fields.b = v9.fields.r;
      ModelLineComponent__SetMaterialColor(that, v9, (const MethodInfo *)that);
      ModelLineComponent__SetQuestAfterActionScaleAnim_42972740(that, 1, 0.5, v7);
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
  unsigned int dispType; // w8
  const MethodInfo *v6; // x3

  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0 )
    sub_21FFECC(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType )
  {
    if ( dispType < 3 )
      ModelLineComponent__SetQuestAfterActionScaleAnim_42972740(that, 0, 0.5, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.stateEndAction, 0);
  ModelLineComponent__SetState(v4, 1, 0, v5);
}