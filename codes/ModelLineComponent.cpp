void __fastcall ModelLineComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F7D5F & 1) == 0 )
  {
    sub_B16FFC(&ModelLineComponent_TypeInfo, v1);
    byte_40F7D5F = 1;
  }
  ModelLineComponent_TypeInfo->static_fields->WHITE = 1.0;
  ModelLineComponent_TypeInfo->static_fields->GRAY = 0.5;
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct CStateManager_ModelLineComponent__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct CStateManager_ModelLineComponent__o *fsm; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  ModelLineComponent_StateNone_o *v26; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  ModelLineComponent_StateMapMain_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  ModelLineComponent_StateQaaHide_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  ModelLineComponent_StateQaaGray_o *v44; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  ModelLineComponent_StateQaaDisp_o *v50; // x21
  const MethodInfo *v51; // x3

  if ( (byte_40F7D55 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_ModelLineComponent___ctor__, method);
    sub_B16FFC(&Method_CStateManager_ModelLineComponent__add__, v6);
    sub_B16FFC(&CStateManager_ModelLineComponent__TypeInfo, v7);
    sub_B16FFC(&ModelLineComponent_StateMapMain_TypeInfo, v8);
    sub_B16FFC(&ModelLineComponent_StateNone_TypeInfo, v9);
    sub_B16FFC(&ModelLineComponent_StateQaaDisp_TypeInfo, v10);
    sub_B16FFC(&ModelLineComponent_StateQaaGray_TypeInfo, v11);
    sub_B16FFC(&ModelLineComponent_StateQaaHide_TypeInfo, v12);
    byte_40F7D55 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v14 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_ModelLineComponent__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v14,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2907EF0 *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v14;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    fsm = this->fields.fsm;
    v26 = (ModelLineComponent_StateNone_o *)sub_B170CC(ModelLineComponent_StateNone_TypeInfo, v22, v23, v24, v25);
    ModelLineComponent_StateNone___ctor(v26, 0LL);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_2907FBC *)Method_CStateManager_ModelLineComponent__add__);
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v32 = (ModelLineComponent_StateMapMain_o *)sub_B170CC(ModelLineComponent_StateMapMain_TypeInfo, v28, v29, v30, v31);
    ModelLineComponent_StateMapMain___ctor(v32, 0LL);
    if ( !v27 )
      goto LABEL_10;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v27,
      1,
      (IState_T__o *)v32,
      (const MethodInfo_2907FBC *)Method_CStateManager_ModelLineComponent__add__);
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v38 = (ModelLineComponent_StateQaaHide_o *)sub_B170CC(ModelLineComponent_StateQaaHide_TypeInfo, v34, v35, v36, v37);
    ModelLineComponent_StateQaaHide___ctor(v38, 0LL);
    if ( !v33 )
      goto LABEL_10;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      2,
      (IState_T__o *)v38,
      (const MethodInfo_2907FBC *)Method_CStateManager_ModelLineComponent__add__);
    v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v44 = (ModelLineComponent_StateQaaGray_o *)sub_B170CC(ModelLineComponent_StateQaaGray_TypeInfo, v40, v41, v42, v43);
    ModelLineComponent_StateQaaGray___ctor(v44, 0LL);
    if ( !v39
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v39,
            3,
            (IState_T__o *)v44,
            (const MethodInfo_2907FBC *)Method_CStateManager_ModelLineComponent__add__),
          v45 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v50 = (ModelLineComponent_StateQaaDisp_o *)sub_B170CC(
                                                       ModelLineComponent_StateQaaDisp_TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48,
                                                       v49),
          ModelLineComponent_StateQaaDisp___ctor(v50, 0LL),
          !v45) )
    {
LABEL_10:
      sub_B170D4();
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v45,
      4,
      (IState_T__o *)v50,
      (const MethodInfo_2907FBC *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0LL, v51);
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
  UnityEngine_GameObject_o *lineObject; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  bool v8; // w8
  UnityEngine_Material_o *result; // x0
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F7D59 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7D59 = 1;
  }
  p_material = &this->fields.material;
  material = (UnityEngine_Object_o *)this->fields.material;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(material, 0LL, 0LL) )
    return *p_material;
  lineObject = this->fields.lineObject;
  if ( !lineObject )
LABEL_16:
    sub_B170D4();
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        lineObject,
                                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL);
  result = 0LL;
  if ( !v8 )
  {
    if ( ComponentInChildren_Dropdown_DropdownItem )
    {
      v10 = (System_Int32_array **)UnityEngine_Renderer__get_material(
                                     (UnityEngine_Renderer_o *)ComponentInChildren_Dropdown_DropdownItem,
                                     0LL);
      *p_material = (UnityEngine_Material_o *)v10;
      sub_B16F98((BattleServantConfConponent_o *)p_material, v10, v11, v12, v13, v14, v15, v16);
      return *p_material;
    }
    goto LABEL_16;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ModelLineComponent__GetMaterialColor(
        ModelLineComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Material_o *Material; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7D5B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, method);
    byte_40F7D5B = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_B170D4();
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL);
  result.fields.a = v7;
  result.fields.b = v6;
  result.fields.g = v5;
  result.fields.r = v4;
  return result;
}


void __fastcall ModelLineComponent__RestoreToDisp(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v5; // x0
  float GRAY; // s0
  ModelLineComponent_c *v7; // x0

  if ( (byte_40F7D5C & 1) == 0 )
  {
    sub_B16FFC(&ModelLineComponent_TypeInfo, method);
    byte_40F7D5C = 1;
  }
  SpotRoadInfo_k__BackingField = this->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_B170D4();
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType == 2 )
  {
    v7 = ModelLineComponent_TypeInfo;
    if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v7 = ModelLineComponent_TypeInfo;
    }
    GRAY = v7->static_fields->GRAY;
    goto LABEL_14;
  }
  if ( dispType == 1 )
  {
    v5 = ModelLineComponent_TypeInfo;
    if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v5 = ModelLineComponent_TypeInfo;
    }
    GRAY = v5->static_fields->WHITE;
LABEL_14:
    ModelLineComponent__SetContrast(this, GRAY, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetContrast(ModelLineComponent_o *this, float value, const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  float v8; // s3
  const MethodInfo *v11; // x1
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-20h] BYREF

  v8 = 1.0;
  *(_QWORD *)&v12.fields.r = 0LL;
  UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&value, v3, v4, v5, v6, (const MethodInfo *)&v12);
  ModelLineComponent__SetMaterialColor(this, v12, v11);
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
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40F7D5A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, method);
    byte_40F7D5A = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_B170D4();
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_15891/*"_Color"*/, v9, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_21043832(this, isActive, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_21043832(this, isActive, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim_21043832(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  ModelLineComponent_c *v32; // x0
  struct ModelLineComponent_StaticFields *p_GRAY; // x8
  float WHITE; // s9
  struct ModelLineComponent_StaticFields *static_fields; // x8
  float v36; // w23
  EasingObject_o *v37; // x20
  System_Action_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x22

  if ( (byte_40F7D5E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDisp);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B16FFC(&ModelLineComponent_TypeInfo, v10);
    sub_B16FFC(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__, v11);
    sub_B16FFC(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__, v12);
    sub_B16FFC(&ModelLineComponent___c__DisplayClass40_0_TypeInfo, v13);
    byte_40F7D5E = 1;
  }
  v14 = sub_B170CC(ModelLineComponent___c__DisplayClass40_0_TypeInfo, isDisp, method, v4, v5);
  ModelLineComponent___c__DisplayClass40_0___ctor((ModelLineComponent___c__DisplayClass40_0_o *)v14, 0LL);
  if ( !v14 )
LABEL_22:
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                this->fields.lineObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  v32 = ModelLineComponent_TypeInfo;
  if ( !isDisp )
  {
    if ( (WORD1(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
    {
      static_fields = ModelLineComponent_TypeInfo->static_fields;
      WHITE = static_fields->WHITE;
LABEL_19:
      p_GRAY = (struct ModelLineComponent_StaticFields *)&static_fields->GRAY;
      goto LABEL_20;
    }
    if ( ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      static_fields = ModelLineComponent_TypeInfo->static_fields;
      WHITE = static_fields->WHITE;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v32 = ModelLineComponent_TypeInfo;
      static_fields = ModelLineComponent_TypeInfo->static_fields;
      WHITE = static_fields->WHITE;
      if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_19;
    }
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = ModelLineComponent_TypeInfo->static_fields;
    }
    goto LABEL_19;
  }
  if ( (WORD1(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
  {
    p_GRAY = ModelLineComponent_TypeInfo->static_fields;
    WHITE = p_GRAY->GRAY;
    goto LABEL_20;
  }
  if ( ModelLineComponent_TypeInfo->_2.cctor_finished )
  {
    p_GRAY = ModelLineComponent_TypeInfo->static_fields;
    WHITE = p_GRAY->GRAY;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
    v32 = ModelLineComponent_TypeInfo;
    p_GRAY = ModelLineComponent_TypeInfo->static_fields;
    WHITE = p_GRAY->GRAY;
    if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_20;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    p_GRAY = ModelLineComponent_TypeInfo->static_fields;
  }
LABEL_20:
  v36 = p_GRAY->WHITE;
  v37 = *(EasingObject_o **)(v14 + 24);
  *(float *)(v14 + 32) = p_GRAY->WHITE;
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v14,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v14,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0LL);
  if ( !v37 )
    goto LABEL_22;
  EasingObject__Play_33167332(v37, WHITE, v36, time, v38, v43, 0.0, 17, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_21043436(this, isDisp, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_21043436(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim_21043436(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  TweenWidth_o *v9; // x0
  float lineWidth; // w8
  TweenWidth_o *v11; // x21
  float distance; // s0
  float v13; // w8
  float v14; // s0
  System_Int32_array **gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  TweenWidth_o *v29; // x0
  float v30; // s8
  float *v31; // x21
  int v32; // s0
  int v33; // s1
  float v34; // s2
  int v35; // s0
  int v36; // s1
  float v37; // s2

  if ( (byte_40F7D5D & 1) == 0 )
  {
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, isDisp);
    sub_B16FFC(&Method_UITweener_Begin_TweenScale___, v7);
    sub_B16FFC(&StringLiteral_13010/*"StateQuestAfterActionEnd"*/, v8);
    byte_40F7D5D = 1;
  }
  v9 = UITweener__Begin_TweenWidth_(
         this->fields.lineObject,
         time,
         (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenScale___);
  lineWidth = this->fields.lineWidth;
  v11 = v9;
  distance = 0.0;
  if ( !isDisp )
    distance = this->fields.distance;
  if ( !v9 )
    goto LABEL_17;
  *(float *)&v9->fields.from = lineWidth;
  *(float *)&v9->fields.to = lineWidth;
  *(float *)&v9->fields.updateTable = distance;
  v13 = this->fields.lineWidth;
  v14 = 0.0;
  if ( isDisp )
    v14 = this->fields.distance;
  *((float *)&v9->fields.updateTable + 1) = v13;
  *(float *)&v9->fields.mWidget = v13;
  *((float *)&v9->fields.mWidget + 1) = v14;
  v9->fields.style = 2;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.eventReceiver, gameObject, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_13010/*"StateQuestAfterActionEnd"*/;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13010/*"StateQuestAfterActionEnd"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
  if ( time != 0.0 || isDisp )
  {
    v29 = UITweener__Begin_TweenWidth_(
            this->fields.lineObject,
            time,
            (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
    v30 = this->fields.distance;
    v31 = (float *)v29;
    v32 = 0;
    v33 = 0;
    v34 = v30;
    if ( isDisp )
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
    if ( v31 )
    {
      *((_DWORD *)v31 + 30) = v32;
      *((_DWORD *)v31 + 31) = v33;
      v35 = 0;
      v36 = 0;
      v31[32] = v34;
      if ( !isDisp )
      {
        *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_zero(0LL);
        v30 = v37;
      }
      *((_DWORD *)v31 + 33) = v35;
      *((_DWORD *)v31 + 34) = v36;
      v31[35] = v30;
      *((_DWORD *)v31 + 6) = 2;
      return;
    }
LABEL_17:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetState(
        ModelLineComponent_o *this,
        int32_t state,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o **p_stateEndAction; // x21
  CStateManager_QAASpotStateController_IMapSpot__o *v12; // x0

  if ( (byte_40F7D58 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_ModelLineComponent__setState__, *(_QWORD *)&state);
    byte_40F7D58 = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_stateEndAction,
    (System_Int32_array **)endAct,
    (System_String_array **)endAct,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_stateEndAction - 2);
  if ( !v12 )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v12,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_ModelLineComponent__setState__);
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
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x25
  float v23; // s0
  const MethodInfo *v24; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  TerminalSceneComponent_c *v28; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  int v33; // s0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  const MethodInfo *v38; // x2
  UnityEngine_GameObject_o *v39; // x0
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_GameObject_o *v47; // x19
  ScrTerminalMap_c *v48; // x8
  int32_t v49; // w20

  if ( (byte_40F7D57 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SpotLayerMaster___, spotRoadInfo);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___, v16);
    sub_B16FFC(&NGUITools_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&ScrTerminalMap_TypeInfo, v19);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v20);
    byte_40F7D57 = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (System_Int32_array **)spotRoadInfo,
    (System_String_array **)startSpot,
    (System_String_array **)endSpot,
    (System_Boolean_array **)spotCamera,
    *(System_Int32_array ***)&layerId,
    (System_Int32_array *)method,
    v7);
  if ( !startSpot )
    goto LABEL_45;
  this->fields.startedPostion = SpotEntity__GetLocalPositionOnMapModel(startSpot, 0LL);
  if ( !endSpot )
    goto LABEL_45;
  this->fields.endedPostion = SpotEntity__GetLocalPositionOnMapModel(endSpot, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  v22 = Master_WarQuestSelectionMaster;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    (WarEntity_o **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v22,
    (WarEntity_o **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  v23 = UnityEngine_Vector3__Distance(this->fields.startedPostion, this->fields.endedPostion, 0LL) * 0.5;
  this->fields.distance = v23;
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v23, v24);
  GameObjectExtensions__SetLocalPositionZ(this->fields.lineObject, this->fields.distance, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startedPostion, 0LL);
  ModelLineComponent__SetupTweenAlpha(this, v26);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v27);
    byte_40F6042 = 1;
  }
  v28 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v28 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v28->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_45;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_45;
  SpotGameObject = ScrTerminalMap__GetSpotGameObject(mTerminalMap, endSpot->fields.id, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v33 = GameObjectExtensions__GetPosition(SpotGameObject, 0LL);
    if ( !transform )
      goto LABEL_45;
    UnityEngine_Transform__LookAt_34932516(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
  }
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
LABEL_45:
    sub_B170D4();
  ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                v36,
                                                (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)spotCamera, 0LL, 0LL) )
    {
      if ( spotCamera )
      {
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spotCamera, 0LL);
        if ( v39 )
        {
          v40 = (System_Int32_array **)UnityEngine_GameObject__get_transform(v39, 0LL);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            ComponentInChildren_Dropdown_DropdownItem->fields.m_Text = (struct UnityEngine_UI_Text_o *)v40;
            sub_B16F98(
              (BattleServantConfConponent_o *)&ComponentInChildren_Dropdown_DropdownItem->fields.m_Text,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            goto LABEL_38;
          }
        }
      }
      goto LABEL_45;
    }
  }
LABEL_38:
  ModelLineComponent__UpdateDisp(this, layerId, v38);
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v48 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v48 = ScrTerminalMap_TypeInfo;
  }
  v49 = UnityEngine_LayerMask__NameToLayer(v48->static_fields->MAP_DISP_LAYER_SPOT, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v47, v49, 0LL);
}


void __fastcall ModelLineComponent__SetupTweenAlpha(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct TweenAlpha_o *tweenAlpha; // x8
  struct TweenAlpha_o *v3; // x8
  struct TweenAlpha_o *v4; // x8

  tweenAlpha = this->fields.tweenAlpha;
  if ( !tweenAlpha
    || (tweenAlpha->fields.from = 0.0, (v3 = this->fields.tweenAlpha) == 0LL)
    || (v3->fields.to = 1.0, (v4 = this->fields.tweenAlpha) == 0LL) )
  {
    sub_B170D4();
  }
  v4->fields.duration = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetupTweenScale(
        ModelLineComponent_o *this,
        MapControl_SpotRoadInfo_o *spotRoadInfo,
        float distance,
        const MethodInfo *method)
{
  struct TweenScale_o *tweenScale; // x20
  float lineWidth; // w8
  struct TweenScale_o *v7; // x20
  float v8; // w8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s3
  struct TweenScale_o *v16; // x8

  if ( !spotRoadInfo )
    goto LABEL_11;
  tweenScale = this->fields.tweenScale;
  if ( spotRoadInfo->fields.dispType )
  {
    if ( tweenScale )
    {
      lineWidth = this->fields.lineWidth;
      tweenScale->fields.from.fields.z = distance;
      tweenScale->fields.from.fields.x = lineWidth;
      tweenScale->fields.from.fields.y = lineWidth;
      v7 = this->fields.tweenScale;
      if ( v7 )
      {
        v8 = this->fields.lineWidth;
        v7->fields.to.fields.x = v8;
        v7->fields.to.fields.y = v8;
        goto LABEL_9;
      }
    }
LABEL_11:
    sub_B170D4();
  }
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( !tweenScale )
    goto LABEL_11;
  tweenScale->fields.from.fields.x = v9;
  tweenScale->fields.from.fields.y = v10;
  tweenScale->fields.from.fields.z = v11;
  v7 = this->fields.tweenScale;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v7 )
    goto LABEL_11;
  v15 = v12;
  distance = v14;
  v7->fields.to.fields.x = v15;
  v7->fields.to.fields.y = v13;
LABEL_9:
  v7->fields.to.fields.z = distance;
  v16 = this->fields.tweenScale;
  if ( !v16 )
    goto LABEL_11;
  v16->fields.duration = 0.0;
}


void __fastcall ModelLineComponent__StateQuestAfterActionEnd(ModelLineComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ActionExtensions__Call(this->fields.stateEndAction, 0LL);
  ModelLineComponent__SetState(this, 1, 0LL, v3);
}


void __fastcall ModelLineComponent__Update(ModelLineComponent_o *this, const MethodInfo *method)
{
  struct CStateManager_ModelLineComponent__o *fsm; // x0

  if ( (byte_40F7D56 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_ModelLineComponent__update__, method);
    byte_40F7D56 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2908038 *)Method_CStateManager_ModelLineComponent__update__);
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
      sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SpotRoadInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SpotRoadInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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

  if ( (byte_40F8637 & 1) == 0 )
  {
    sub_B16FFC(&ModelLineComponent_TypeInfo, that);
    byte_40F8637 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_B170D4();
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__SetQuestAfterActionColorAnim(that, 1, 0LL);
      break;
    case 1:
      ModelLineComponent__StateQuestAfterActionEnd(that, 0LL);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
        v6 = ModelLineComponent_TypeInfo;
      }
      ModelLineComponent__SetContrast(that, v6->static_fields->WHITE, 0LL);
      ModelLineComponent__SetQuestAfterActionScaleAnim(that, 1, 0LL);
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

  if ( (byte_40F8638 & 1) == 0 )
  {
    sub_B16FFC(&ModelLineComponent_TypeInfo, that);
    byte_40F8638 = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_B170D4();
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  switch ( dispType )
  {
    case 2:
      ModelLineComponent__StateQuestAfterActionEnd(that, 0LL);
      break;
    case 1:
      ModelLineComponent__SetQuestAfterActionColorAnim(that, 0, 0LL);
      break;
    case 0:
      v6 = ModelLineComponent_TypeInfo;
      if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
        v6 = ModelLineComponent_TypeInfo;
      }
      ModelLineComponent__SetContrast(that, v6->static_fields->GRAY, 0LL);
      ModelLineComponent__SetQuestAfterActionScaleAnim(that, 1, 0LL);
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

  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_B170D4();
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType )
  {
    if ( (unsigned int)(dispType - 1) < 2 )
      ModelLineComponent__SetQuestAfterActionScaleAnim(that, 0, 0LL);
  }
  else
  {
    ModelLineComponent__StateQuestAfterActionEnd(that, 0LL);
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
  ModelLineComponent_o *_4__this; // x0

  eo = this->fields.eo;
  if ( !eo || (_4__this = this->fields.__4__this) == 0LL )
    sub_B170D4();
  ModelLineComponent__SetContrast(_4__this, eo->fields.mStartTime, 0LL);
}


void __fastcall ModelLineComponent___c__DisplayClass40_0___SetQuestAfterActionColorAnim_b__1(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  ModelLineComponent_o *_4__this; // x0
  ModelLineComponent_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ModelLineComponent__SetContrast(_4__this, this->fields.to, 0LL), (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  ModelLineComponent__StateQuestAfterActionEnd(v4, 0LL);
}