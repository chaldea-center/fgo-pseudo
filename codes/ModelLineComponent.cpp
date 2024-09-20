void __fastcall ModelLineComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A58012 & 1) == 0 )
  {
    sub_1B885B0(&ModelLineComponent_TypeInfo);
    byte_4A58012 = 1;
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
  struct CStateManager_ModelLineComponent__o **p_fsm; // x20
  CStateManager_T__o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  CStateManager_T__o *v11; // x21
  Il2CppObject *v12; // x22
  CStateManager_T__o *v13; // x21
  Il2CppObject *v14; // x22
  CStateManager_T__o *v15; // x21
  Il2CppObject *v16; // x22
  CStateManager_T__o *v17; // x20
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_4A58008 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_ModelLineComponent___ctor__);
    sub_1B885B0(&Method_CStateManager_ModelLineComponent__add__);
    sub_1B885B0(&CStateManager_ModelLineComponent__TypeInfo);
    sub_1B885B0(&ModelLineComponent_StateMapMain_TypeInfo);
    sub_1B885B0(&ModelLineComponent_StateNone_TypeInfo);
    sub_1B885B0(&ModelLineComponent_StateQaaDisp_TypeInfo);
    sub_1B885B0(&ModelLineComponent_StateQaaGray_TypeInfo);
    sub_1B885B0(&ModelLineComponent_StateQaaHide_TypeInfo);
    byte_4A58008 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v4 = (CStateManager_T__o *)sub_1B887FC(CStateManager_ModelLineComponent__TypeInfo);
    CStateManager_object____ctor(
      v4,
      (Il2CppObject *)this,
      5,
      (const MethodInfo_30AAD34 *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fsm, (int32_t)v4, v5, v6);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v8 = (Il2CppObject *)sub_1B887FC(ModelLineComponent_StateNone_TypeInfo);
    System_Object___ctor(v8, 0LL);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v8,
      (const MethodInfo_30AADDC *)Method_CStateManager_ModelLineComponent__add__);
    v11 = (CStateManager_T__o *)*p_fsm;
    v12 = (Il2CppObject *)sub_1B887FC(ModelLineComponent_StateMapMain_TypeInfo);
    System_Object___ctor(v12, 0LL);
    if ( !v11 )
      goto LABEL_10;
    CStateManager_object___add(
      v11,
      1,
      (IState_T__o *)v12,
      (const MethodInfo_30AADDC *)Method_CStateManager_ModelLineComponent__add__);
    v13 = (CStateManager_T__o *)*p_fsm;
    v14 = (Il2CppObject *)sub_1B887FC(ModelLineComponent_StateQaaHide_TypeInfo);
    System_Object___ctor(v14, 0LL);
    if ( !v13 )
      goto LABEL_10;
    CStateManager_object___add(
      v13,
      2,
      (IState_T__o *)v14,
      (const MethodInfo_30AADDC *)Method_CStateManager_ModelLineComponent__add__);
    v15 = (CStateManager_T__o *)*p_fsm;
    v16 = (Il2CppObject *)sub_1B887FC(ModelLineComponent_StateQaaGray_TypeInfo);
    System_Object___ctor(v16, 0LL);
    if ( !v15
      || (CStateManager_object___add(
            v15,
            3,
            (IState_T__o *)v16,
            (const MethodInfo_30AADDC *)Method_CStateManager_ModelLineComponent__add__),
          v17 = (CStateManager_T__o *)*p_fsm,
          v18 = (Il2CppObject *)sub_1B887FC(ModelLineComponent_StateQaaDisp_TypeInfo),
          System_Object___ctor(v18, 0LL),
          !v17) )
    {
LABEL_10:
      sub_1B8880C(v9, v10);
    }
    CStateManager_object___add(
      v17,
      4,
      (IState_T__o *)v18,
      (const MethodInfo_30AADDC *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0LL, v19);
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
  UnityEngine_Material_o **p_material; // x19
  UnityEngine_Object_o *material; // x21
  __int64 v5; // x1
  UnityEngine_Material_o *result; // x0
  Il2CppObject *ComponentInChildren_object; // x20
  bool v8; // w8
  UnityEngine_Material_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5800C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5800C = 1;
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
    sub_1B8880C(result, v5);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)result,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object, 0LL, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    if ( ComponentInChildren_object )
    {
      v9 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)ComponentInChildren_object, 0LL);
      *p_material = v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_material, (int32_t)v9, v10, v11);
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

  if ( (byte_4A5800E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5800E = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1B8880C(0LL, v4);
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_16179/*"_Color"*/, 0LL);
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
  if ( (byte_4A5800F & 1) == 0 )
  {
    this = (ModelLineComponent_o *)sub_1B885B0(&ModelLineComponent_TypeInfo);
    byte_4A5800F = 1;
  }
  SpotRoadInfo_k__BackingField = v2->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_1B8880C(this, method);
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
  if ( (byte_4A5800D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5800D = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_1B8880C(0LL, v9);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_16179/*"_Color"*/, v10, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_33814792(this, isActive, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_33814792(this, isActive, 0.0, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim_33814792(
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
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct ModelLineComponent_StaticFields *static_fields; // x8
  struct ModelLineComponent_StaticFields *p_GRAY; // x9
  float WHITE; // s9
  struct ModelLineComponent_StaticFields *v18; // x10
  float v19; // s10
  EasingObject_o *v20; // x19
  System_Action_o *v21; // x21
  System_Action_o *v22; // x22

  if ( (byte_4A58011 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&ModelLineComponent_TypeInfo);
    sub_1B885B0(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__);
    sub_1B885B0(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__);
    sub_1B885B0(&ModelLineComponent___c__DisplayClass40_0_TypeInfo);
    byte_4A58011 = 1;
  }
  v7 = sub_1B887FC(ModelLineComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       this->fields.lineObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Component_object, v13, v14);
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
    v18 = (struct ModelLineComponent_StaticFields *)&static_fields->GRAY;
    if ( !isDisp )
      v18 = ModelLineComponent_TypeInfo->static_fields;
    WHITE = v18->WHITE;
    if ( !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      static_fields = ModelLineComponent_TypeInfo->static_fields;
    }
  }
  if ( !isDisp )
    static_fields = (struct ModelLineComponent_StaticFields *)((char *)static_fields + 4);
  v19 = static_fields->WHITE;
  v20 = *(EasingObject_o **)(v7 + 24);
  *(float *)(v7 + 32) = static_fields->WHITE;
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0LL);
  if ( !v20 )
LABEL_16:
    sub_1B8880C(v8, v9);
  EasingObject__Play_46570564(v20, WHITE, v19, time, v21, v22, 0.0, 17, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_33814316(this, isDisp, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_33814316(this, isDisp, 0.0, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim_33814316(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  float distance; // s0
  float lineWidth; // s1
  float v12; // s0
  float v13; // s1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  float v20; // s8
  Il2CppObject *v21; // x21
  Il2CppClass *v22; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  void *v25; // d0
  struct UnityEngine_Vector3_StaticFields *v26; // x8

  if ( (byte_4A58010 & 1) == 0 )
  {
    sub_1B885B0(&Method_UITweener_Begin_TweenPosition___);
    sub_1B885B0(&Method_UITweener_Begin_TweenScale___);
    sub_1B885B0(&StringLiteral_12981/*"StateQuestAfterActionEnd"*/);
    byte_4A58010 = 1;
  }
  v7 = UITweener__Begin_object_(
         this->fields.lineObject,
         time,
         (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenScale___);
  v9 = v7;
  distance = 0.0;
  if ( !isDisp )
    distance = this->fields.distance;
  if ( !v7 )
    goto LABEL_21;
  lineWidth = this->fields.lineWidth;
  *((float *)&v7[8].klass + 1) = lineWidth;
  *(float *)&v7[8].monitor = distance;
  *(float *)&v7[8].klass = lineWidth;
  v12 = this->fields.lineWidth;
  v13 = 0.0;
  if ( isDisp )
    v13 = this->fields.distance;
  *((float *)&v7[8].monitor + 1) = v12;
  *(float *)&v7[9].klass = v12;
  *((float *)&v7[9].klass + 1) = v13;
  LODWORD(v7[2].klass) = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9[5].klass = (Il2CppClass *)gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9[5], (int32_t)gameObject, v15, v16);
  v17 = StringLiteral_12981/*"StateQuestAfterActionEnd"*/;
  v9[5].monitor = (void *)StringLiteral_12981/*"StateQuestAfterActionEnd"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9[5].monitor, v17, v18, v19);
  if ( time != 0.0 || isDisp )
  {
    v7 = UITweener__Begin_object_(
           this->fields.lineObject,
           time,
           (const MethodInfo_2F31F60 *)Method_UITweener_Begin_TweenPosition___);
    v20 = this->fields.distance;
    v21 = v7;
    v22 = 0LL;
    z = v20;
    if ( isDisp )
    {
      if ( !byte_4A55CE1 )
      {
        v7 = (Il2CppObject *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v22 = *(Il2CppClass **)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
    }
    if ( v21 )
    {
      v21[8].klass = v22;
      v25 = 0LL;
      *(float *)&v21[8].monitor = z;
      if ( !isDisp )
      {
        if ( !byte_4A55CE1 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        v26 = UnityEngine_Vector3_TypeInfo->static_fields;
        v25 = *(void **)&v26->zeroVector.fields.x;
        v20 = v26->zeroVector.fields.z;
      }
      *(void **)((char *)&v21[8].monitor + 4) = v25;
      *((float *)&v21[9].klass + 1) = v20;
      LODWORD(v21[2].klass) = 2;
      return;
    }
LABEL_21:
    sub_1B8880C(v7, v8);
  }
}


void __fastcall ModelLineComponent__SetState(
        ModelLineComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  struct System_Action_o **p_stateEndAction; // x21
  __int64 v8; // x1
  CStateManager_T__o *v9; // x0

  if ( (byte_4A5800B & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_ModelLineComponent__setState__);
    byte_4A5800B = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_stateEndAction, (int32_t)endAct, (int32_t)endAct, (int32_t)method);
  v9 = (CStateManager_T__o *)*(p_stateEndAction - 2);
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  CStateManager_object___setState(
    v9,
    state,
    (const MethodInfo_30AAE68 *)Method_CStateManager_ModelLineComponent__setState__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x25
  const MethodInfo *v16; // x2
  float x; // s8
  float32x2_t v18; // d9
  float v19; // s10
  float32x2_t v20; // d11
  float v21; // s10
  float32x2_t v22; // d8
  unsigned __int64 v23; // d1
  float v24; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *tweenAlpha; // x8
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  int v30; // s0
  Il2CppObject *ComponentInChildren_object; // x22
  const MethodInfo *v34; // x2
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_GameObject_o *v37; // x0
  ScrTerminalMap_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x19
  int32_t v40; // w20

  if ( (byte_4A5800A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScrTerminalMap_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5800A = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_1B88554(
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_42;
  v15 = Master_object;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    (Il2CppObject **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_311D988 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_object__object__int___TryGetEntity(
    v15,
    (Il2CppObject **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_311D988 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  x = this->fields.startedPostion.fields.x;
  v18.n64_u64[0] = *(unsigned __int64 *)&this->fields.startedPostion.fields.y;
  v19 = this->fields.endedPostion.fields.x;
  v20.n64_u64[0] = *(unsigned __int64 *)&this->fields.endedPostion.fields.y;
  if ( !byte_4A55CDF )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CDF = 1;
  }
  v21 = x - v19;
  v22.n64_u64[0] = vsub_f32(v18, v20).n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v23 = vmul_f32(v22, v22).n64_u64[0];
  v24 = sqrtf(*((float *)&v23 + 1) + (float)((float)(v21 * v21) + *(float *)&v23)) * 0.5;
  this->fields.distance = v24;
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v24, v16);
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    *(UnityEngine_Vector3_o *)&v30 = GameObjectExtensions__GetPosition(SpotGameObject, 0LL);
    if ( !transform )
      goto LABEL_42;
    UnityEngine_Transform__LookAt_69483112(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
  if ( !Master_object )
LABEL_42:
    sub_1B8880C(Master_object, v14);
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)Master_object,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
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
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&ComponentInChildren_object[2],
              (int32_t)Master_object,
              v35,
              v36);
            goto LABEL_37;
          }
        }
      }
      goto LABEL_42;
    }
  }
LABEL_37:
  ModelLineComponent__UpdateDisp(this, layerId, v34);
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v38 = ScrTerminalMap_TypeInfo;
  v39 = v37;
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v38 = ScrTerminalMap_TypeInfo;
  }
  v40 = UnityEngine_LayerMask__NameToLayer(v38->static_fields->MAP_DISP_LAYER_SPOT, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v39, v40, 0LL);
}


void __fastcall ModelLineComponent__SetupTweenAlpha(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *tweenAlpha; // x8

  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, spotRoadInfo);
  }
  if ( !byte_4A55CE1 )
  {
    this = (ModelLineComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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

  if ( (byte_4A58009 & 1) == 0 )
  {
    sub_1B885B0(&Method_CStateManager_ModelLineComponent__update__);
    byte_4A58009 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_30AAE44 *)Method_CStateManager_ModelLineComponent__update__);
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
      sub_1B8880C(0LL, v6);
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
  sub_1B88554(
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

  if ( (byte_4A58013 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaDisp_o *)sub_1B885B0(&ModelLineComponent_TypeInfo);
    byte_4A58013 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1B8880C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__SetQuestAfterActionColorAnim_33814792(that, 1, 0.5, method);
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
      ModelLineComponent__SetQuestAfterActionScaleAnim_33814316(that, 1, 0.5, v7);
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

  if ( (byte_4A58014 & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaGray_o *)sub_1B885B0(&ModelLineComponent_TypeInfo);
    byte_4A58014 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_1B8880C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ActionExtensions__Call(that->fields.stateEndAction, 0LL);
      ModelLineComponent__SetState(that, 1, 0LL, v8);
      break;
    case 1:
      ModelLineComponent__SetQuestAfterActionColorAnim_33814792(that, 0, 0.5, method);
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
      ModelLineComponent__SetQuestAfterActionScaleAnim_33814316(that, 1, 0.5, v7);
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
    sub_1B8880C(this, that);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      ModelLineComponent__SetQuestAfterActionScaleAnim_33814316(that, 0, 0.5, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(_4__this, method);
  }
  ActionExtensions__Call(v4->fields.stateEndAction, 0LL);
  ModelLineComponent__SetState(v4, 1, 0LL, v5);
}