void __fastcall ModelLineComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E742B & 1) == 0 )
  {
    sub_B5D5C4(&ModelLineComponent_TypeInfo, v1, v2, v3);
    byte_42E742B = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct CStateManager_ModelLineComponent__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct CStateManager_ModelLineComponent__o *fsm; // x21
  ModelLineComponent_StateNone_o *v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x21
  ModelLineComponent_StateMapMain_o *v39; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v40; // x21
  ModelLineComponent_StateQaaHide_o *v41; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v42; // x21
  ModelLineComponent_StateQaaGray_o *v43; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v44; // x20
  ModelLineComponent_StateQaaDisp_o *v45; // x21
  const MethodInfo *v46; // x3

  if ( (byte_42E7421 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_ModelLineComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CStateManager_ModelLineComponent__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_ModelLineComponent__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ModelLineComponent_StateMapMain_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ModelLineComponent_StateNone_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ModelLineComponent_StateQaaDisp_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ModelLineComponent_StateQaaGray_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ModelLineComponent_StateQaaHide_TypeInfo, v23, v24, v25);
    byte_42E7421 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v27 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_ModelLineComponent__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v27,
      (QAASpotStateController_IMapSpot_o *)this,
      5,
      (const MethodInfo_2BB2630 *)Method_CStateManager_ModelLineComponent___ctor__);
    this->fields.fsm = (struct CStateManager_ModelLineComponent__o *)v27;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    fsm = this->fields.fsm;
    v35 = (ModelLineComponent_StateNone_o *)sub_B5D694(ModelLineComponent_StateNone_TypeInfo);
    ModelLineComponent_StateNone___ctor(v35, 0LL);
    if ( !fsm )
      goto LABEL_10;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v35,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ModelLineComponent__add__);
    v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v39 = (ModelLineComponent_StateMapMain_o *)sub_B5D694(ModelLineComponent_StateMapMain_TypeInfo);
    ModelLineComponent_StateMapMain___ctor(v39, 0LL);
    if ( !v38 )
      goto LABEL_10;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      1,
      (IState_T__o *)v39,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ModelLineComponent__add__);
    v40 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v41 = (ModelLineComponent_StateQaaHide_o *)sub_B5D694(ModelLineComponent_StateQaaHide_TypeInfo);
    ModelLineComponent_StateQaaHide___ctor(v41, 0LL);
    if ( !v40 )
      goto LABEL_10;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v40,
      2,
      (IState_T__o *)v41,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ModelLineComponent__add__);
    v42 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v43 = (ModelLineComponent_StateQaaGray_o *)sub_B5D694(ModelLineComponent_StateQaaGray_TypeInfo);
    ModelLineComponent_StateQaaGray___ctor(v43, 0LL);
    if ( !v42
      || (CStateManager_QAASpotStateController_IMapSpot___add(
            v42,
            3,
            (IState_T__o *)v43,
            (const MethodInfo_2BB26FC *)Method_CStateManager_ModelLineComponent__add__),
          v44 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm,
          v45 = (ModelLineComponent_StateQaaDisp_o *)sub_B5D694(ModelLineComponent_StateQaaDisp_TypeInfo),
          ModelLineComponent_StateQaaDisp___ctor(v45, 0LL),
          !v44) )
    {
LABEL_10:
      sub_B5D69C(v36, v37);
    }
    CStateManager_QAASpotStateController_IMapSpot___add(
      v44,
      4,
      (IState_T__o *)v45,
      (const MethodInfo_2BB26FC *)Method_CStateManager_ModelLineComponent__add__);
    ModelLineComponent__SetState(this, 1, 0LL, v46);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Material_o **p_material; // x19
  UnityEngine_Object_o *material; // x21
  __int64 v10; // x1
  UnityEngine_Material_o *result; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  bool v13; // w8
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7425 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7425 = 1;
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
  result = (UnityEngine_Material_o *)this->fields.lineObject;
  if ( !result )
LABEL_16:
    sub_B5D69C(result, v10);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)result,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_MeshRenderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL);
  result = 0LL;
  if ( !v13 )
  {
    if ( ComponentInChildren_Dropdown_DropdownItem )
    {
      v14 = (System_Int32_array **)UnityEngine_Renderer__get_material(
                                     (UnityEngine_Renderer_o *)ComponentInChildren_Dropdown_DropdownItem,
                                     0LL);
      *p_material = (UnityEngine_Material_o *)v14;
      sub_B5D560((BattleServantConfConponent_o *)p_material, v14, v15, v16, v17, v18, v19, v20);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Material_o *Material; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7427 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, (_DWORD)method, v2, v3);
    byte_42E7427 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_B5D69C(0LL, v6);
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Material__GetColor(Material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL);
  result.fields.a = v10;
  result.fields.b = v9;
  result.fields.g = v8;
  result.fields.r = v7;
  return result;
}


void __fastcall ModelLineComponent__RestoreToDisp(ModelLineComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ModelLineComponent_o *v4; // x19
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v7; // x0
  float GRAY; // s0
  ModelLineComponent_c *v9; // x0

  v4 = this;
  if ( (byte_42E7428 & 1) == 0 )
  {
    this = (ModelLineComponent_o *)sub_B5D5C4(&ModelLineComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7428 = 1;
  }
  SpotRoadInfo_k__BackingField = v4->fields._SpotRoadInfo_k__BackingField;
  if ( !SpotRoadInfo_k__BackingField )
    sub_B5D69C(this, method);
  dispType = SpotRoadInfo_k__BackingField->fields.dispType;
  if ( dispType == 2 )
  {
    v9 = ModelLineComponent_TypeInfo;
    if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v9 = ModelLineComponent_TypeInfo;
    }
    GRAY = v9->static_fields->GRAY;
    goto LABEL_14;
  }
  if ( dispType == 1 )
  {
    v7 = ModelLineComponent_TypeInfo;
    if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ModelLineComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
      v7 = ModelLineComponent_TypeInfo;
    }
    GRAY = v7->static_fields->WHITE;
LABEL_14:
    ModelLineComponent__SetContrast(v4, GRAY, method);
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
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Material_o *Material; // x0
  __int64 v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42E7426 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, (_DWORD)method, v3, v4);
    byte_42E7426 = 1;
  }
  Material = ModelLineComponent__GetMaterial(this, method);
  if ( !Material )
    sub_B5D69C(0LL, v11);
  v12.fields.b = b;
  v12.fields.a = a;
  v12.fields.r = r;
  v12.fields.g = g;
  UnityEngine_Material__SetColor(Material, (System_String_o *)StringLiteral_16146/*"_Color"*/, v12, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_22803044(this, isActive, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnimQuick(
        ModelLineComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionColorAnim_22803044(this, isActive, 0.0, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionColorAnim_22803044(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  ModelLineComponent_c *v39; // x0
  struct ModelLineComponent_StaticFields *p_GRAY; // x8
  float WHITE; // s9
  struct ModelLineComponent_StaticFields *static_fields; // x8
  float v43; // w23
  EasingObject_o *v44; // x20
  System_Action_o *v45; // x21
  System_Action_o *v46; // x22

  if ( (byte_42E742A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDisp, (_DWORD)method, v4);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9, v10);
    sub_B5D5C4(&ModelLineComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__, v17, v18, v19);
    sub_B5D5C4(&ModelLineComponent___c__DisplayClass40_0_TypeInfo, v20, v21, v22);
    byte_42E742A = 1;
  }
  v23 = sub_B5D694(ModelLineComponent___c__DisplayClass40_0_TypeInfo);
  ModelLineComponent___c__DisplayClass40_0___ctor((ModelLineComponent___c__DisplayClass40_0_o *)v23, 0LL);
  if ( !v23 )
LABEL_22:
    sub_B5D69C(v24, v25);
  *(_QWORD *)(v23 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                this->fields.lineObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v23 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), Component_UIWidget, v33, v34, v35, v36, v37, v38);
  v39 = ModelLineComponent_TypeInfo;
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
      v39 = ModelLineComponent_TypeInfo;
      static_fields = ModelLineComponent_TypeInfo->static_fields;
      WHITE = static_fields->WHITE;
      if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
        goto LABEL_19;
    }
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
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
    v39 = ModelLineComponent_TypeInfo;
    p_GRAY = ModelLineComponent_TypeInfo->static_fields;
    WHITE = p_GRAY->GRAY;
    if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      goto LABEL_20;
  }
  if ( !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    p_GRAY = ModelLineComponent_TypeInfo->static_fields;
  }
LABEL_20:
  v43 = p_GRAY->WHITE;
  v44 = *(EasingObject_o **)(v23 + 24);
  *(float *)(v23 + 32) = p_GRAY->WHITE;
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v23,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v23,
    Method_ModelLineComponent___c__DisplayClass40_0__SetQuestAfterActionColorAnim_b__1__,
    0LL);
  if ( !v44 )
    goto LABEL_22;
  EasingObject__Play_33961128(v44, WHITE, v43, time, v45, v46, 0.0, 17, 0LL);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_22802648(this, isDisp, 0.5, method);
}


void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnimQuick(
        ModelLineComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  ModelLineComponent__SetQuestAfterActionScaleAnim_22802648(this, isDisp, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ModelLineComponent__SetQuestAfterActionScaleAnim_22802648(
        ModelLineComponent_o *this,
        bool isDisp,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TweenWidth_o *v14; // x0
  __int64 v15; // x1
  float lineWidth; // w8
  TweenWidth_o *v17; // x21
  float distance; // s0
  float v19; // w8
  float v20; // s0
  System_Int32_array **gameObject; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  float v35; // s8
  float *v36; // x21
  int v37; // s0
  int v38; // s1
  float v39; // s2
  int v40; // s0
  int v41; // s1
  float v42; // s2

  if ( (byte_42E7429 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, isDisp, (_DWORD)method, v4);
    sub_B5D5C4(&Method_UITweener_Begin_TweenScale___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_13222/*"StateQuestAfterActionEnd"*/, v11, v12, v13);
    byte_42E7429 = 1;
  }
  v14 = UITweener__Begin_TweenWidth_(
          this->fields.lineObject,
          time,
          (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenScale___);
  lineWidth = this->fields.lineWidth;
  v17 = v14;
  distance = 0.0;
  if ( !isDisp )
    distance = this->fields.distance;
  if ( !v14 )
    goto LABEL_17;
  *(float *)&v14->fields.from = lineWidth;
  *(float *)&v14->fields.to = lineWidth;
  *(float *)&v14->fields.updateTable = distance;
  v19 = this->fields.lineWidth;
  v20 = 0.0;
  if ( isDisp )
    v20 = this->fields.distance;
  *((float *)&v14->fields.updateTable + 1) = v19;
  *(float *)&v14->fields.mWidget = v19;
  *((float *)&v14->fields.mWidget + 1) = v20;
  v14->fields.style = 2;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v17->fields.eventReceiver, gameObject, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_13222/*"StateQuestAfterActionEnd"*/;
  v17->fields.callWhenFinished = (struct System_String_o *)StringLiteral_13222/*"StateQuestAfterActionEnd"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v17->fields.callWhenFinished, v28, v29, v30, v31, v32, v33, v34);
  if ( time != 0.0 || isDisp )
  {
    v14 = UITweener__Begin_TweenWidth_(
            this->fields.lineObject,
            time,
            (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
    v35 = this->fields.distance;
    v36 = (float *)v14;
    v37 = 0;
    v38 = 0;
    v39 = v35;
    if ( isDisp )
      *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
    if ( v36 )
    {
      *((_DWORD *)v36 + 30) = v37;
      *((_DWORD *)v36 + 31) = v38;
      v40 = 0;
      v41 = 0;
      v36[32] = v39;
      if ( !isDisp )
      {
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_zero(0LL);
        v35 = v42;
      }
      *((_DWORD *)v36 + 33) = v40;
      *((_DWORD *)v36 + 34) = v41;
      v36[35] = v35;
      *((_DWORD *)v36 + 6) = 2;
      return;
    }
LABEL_17:
    sub_B5D69C(v14, v15);
  }
}


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
  __int64 v12; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v13; // x0

  if ( (byte_42E7424 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_ModelLineComponent__setState__, state, (_DWORD)endAct, method);
    byte_42E7424 = 1;
  }
  this->fields.stateEndAction = endAct;
  p_stateEndAction = &this->fields.stateEndAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_stateEndAction,
    (System_Int32_array **)endAct,
    (System_String_array **)endAct,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v13 = (CStateManager_QAASpotStateController_IMapSpot__o *)*(p_stateEndAction - 2);
  if ( !v13 )
    sub_B5D69C(0LL, v12);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    v13,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_ModelLineComponent__setState__);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x25
  float v38; // s0
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v41; // x1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  UnityEngine_GameObject_o *SpotGameObject; // x22
  UnityEngine_Transform_o *transform; // x23
  int v47; // s0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  const MethodInfo *v51; // x2
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *v58; // x19
  ScrTerminalMap_c *v59; // x8
  int32_t v60; // w20

  if ( (byte_42E7423 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotLayerMaster___, (_DWORD)spotRoadInfo, (_DWORD)startSpot, endSpot);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___, v20, v21, v22);
    sub_B5D5C4(&NGUITools_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&ScrTerminalMap_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v32, v33, v34);
    byte_42E7423 = 1;
  }
  this->fields._SpotRoadInfo_k__BackingField = spotRoadInfo;
  sub_B5D560(
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  v37 = Master_WarQuestSelectionMaster;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    (WarEntity_o **)&this->fields.startSpotLayerEntity,
    startSpot->fields.id,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    v37,
    (WarEntity_o **)&this->fields.endSpotLayerEntity,
    endSpot->fields.id,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  v38 = UnityEngine_Vector3__Distance(this->fields.startedPostion, this->fields.endedPostion, 0LL) * 0.5;
  this->fields.distance = v38;
  ModelLineComponent__SetupTweenScale(this, spotRoadInfo, v38, v39);
  GameObjectExtensions__SetLocalPositionZ(this->fields.lineObject, this->fields.distance, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.startedPostion, 0LL);
  ModelLineComponent__SetupTweenAlpha(this, v41);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v36, v42, v43);
    byte_42E4B1E = 1;
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Master_WarQuestSelectionMaster[2].fields._lookup->klass;
  if ( !klass )
    goto LABEL_45;
  Master_WarQuestSelectionMaster = *(DataMasterBase_WarMaster__WarEntity__int__o **)&klass->_2.static_fields_size;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_45;
  SpotGameObject = ScrTerminalMap__GetSpotGameObject(
                     (ScrTerminalMap_o *)Master_WarQuestSelectionMaster,
                     endSpot->fields.id,
                     0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)SpotGameObject, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v47 = GameObjectExtensions__GetPosition(SpotGameObject, 0LL);
    if ( !transform )
      goto LABEL_45;
    UnityEngine_Transform__LookAt_35743444(transform, *(UnityEngine_Vector3_o *)&v47, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
  if ( !Master_WarQuestSelectionMaster )
LABEL_45:
    sub_B5D69C(Master_WarQuestSelectionMaster, v36);
  ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_BillBoardAroundLocalAxis___);
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)spotCamera,
                                                                                      0LL,
                                                                                      0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( spotCamera )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)spotCamera,
                                                                                          0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                            (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( ComponentInChildren_Dropdown_DropdownItem )
          {
            ComponentInChildren_Dropdown_DropdownItem->fields.m_Text = (struct UnityEngine_UI_Text_o *)Master_WarQuestSelectionMaster;
            sub_B5D560(
              (BattleServantConfConponent_o *)&ComponentInChildren_Dropdown_DropdownItem->fields.m_Text,
              (System_Int32_array **)Master_WarQuestSelectionMaster,
              v52,
              v53,
              v54,
              v55,
              v56,
              v57);
            goto LABEL_38;
          }
        }
      }
      goto LABEL_45;
    }
  }
LABEL_38:
  ModelLineComponent__UpdateDisp(this, layerId, v51);
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v59 = ScrTerminalMap_TypeInfo;
  if ( (BYTE3(ScrTerminalMap_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalMap_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
    v59 = ScrTerminalMap_TypeInfo;
  }
  v60 = UnityEngine_LayerMask__NameToLayer(v59->static_fields->MAP_DISP_LAYER_SPOT, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__SetLayer(v58, v60, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, spotRoadInfo);
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
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_ModelLineComponent__o *fsm; // x0

  if ( (byte_42E7422 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_ModelLineComponent__update__, (_DWORD)method, v2, v3);
    byte_42E7422 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_ModelLineComponent__update__);
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
      sub_B5D69C(0LL, v6);
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
  sub_B5D560(
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
  __int64 v3; // x3
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v7; // x0

  if ( (byte_42E5F6B & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaDisp_o *)sub_B5D5C4(
                                                  &ModelLineComponent_TypeInfo,
                                                  (_DWORD)that,
                                                  (_DWORD)method,
                                                  v3);
    byte_42E5F6B = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_B5D69C(this, that);
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
      v7 = ModelLineComponent_TypeInfo;
      if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
        v7 = ModelLineComponent_TypeInfo;
      }
      ModelLineComponent__SetContrast(that, v7->static_fields->WHITE, 0LL);
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
  __int64 v3; // x3
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  int32_t dispType; // w8
  ModelLineComponent_c *v7; // x0

  if ( (byte_42E5F6C & 1) == 0 )
  {
    this = (ModelLineComponent_StateQaaGray_o *)sub_B5D5C4(
                                                  &ModelLineComponent_TypeInfo,
                                                  (_DWORD)that,
                                                  (_DWORD)method,
                                                  v3);
    byte_42E5F6C = 1;
  }
  if ( !that || (SpotRoadInfo_k__BackingField = that->fields._SpotRoadInfo_k__BackingField) == 0LL )
    sub_B5D69C(this, that);
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
      v7 = ModelLineComponent_TypeInfo;
      if ( (BYTE3(ModelLineComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ModelLineComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ModelLineComponent_TypeInfo);
        v7 = ModelLineComponent_TypeInfo;
      }
      ModelLineComponent__SetContrast(that, v7->static_fields->GRAY, 0LL);
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
    sub_B5D69C(this, that);
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

  eo = this->fields.eo;
  if ( !eo || (this = (ModelLineComponent___c__DisplayClass40_0_o *)this->fields.__4__this) == 0LL )
    sub_B5D69C(this, method);
  ModelLineComponent__SetContrast((ModelLineComponent_o *)this, eo->fields.mStartTime, 0LL);
}


void __fastcall ModelLineComponent___c__DisplayClass40_0___SetQuestAfterActionColorAnim_b__1(
        ModelLineComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  ModelLineComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ModelLineComponent__SetContrast(_4__this, this->fields.to, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  ModelLineComponent__StateQuestAfterActionEnd(_4__this, 0LL);
}