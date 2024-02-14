void __fastcall SubmarineMapPanelData___ctor(
        SubmarineMapPanelData_o *this,
        EventPanelMapDetailEntity_o *panelDetail,
        const MethodInfo *method)
{
  __int64 v5; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_WORD *)&this->fields._IsOpened_k__BackingField = 0;
  this->fields._IsScannable_k__BackingField = 0;
  if ( !panelDetail )
    sub_B0D97C(v5);
  this->fields._HIndex_k__BackingField = panelDetail->fields.idxX;
  this->fields._VIndex_k__BackingField = panelDetail->fields.idxY;
  this->fields._PanelId_k__BackingField = panelDetail->fields.id;
  this->fields._CommonReleaseId_k__BackingField = panelDetail->fields.commonReleaseId;
}


void __fastcall SubmarineMapPanelData__OpenPanel(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  const MethodInfo *v4; // x1
  SubmarineMapPanelComponent_o *v5; // x0

  if ( (byte_421364D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421364D = 1;
  }
  this->fields._IsOpened_k__BackingField = 1;
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v5 = this->fields._Component_k__BackingField;
    if ( !v5 )
      sub_B0D97C(0LL);
    SubmarineMapPanelComponent__ShowOpenPanelAnim(v5, v4);
  }
}


void __fastcall SubmarineMapPanelData__SetComponent(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *component,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Component_k__BackingField = component;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Component_k__BackingField,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapPanelData__SetPanelClickAction(
        SubmarineMapPanelData_o *this,
        System_Action_SubmarineMapPanelData__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *Component_k__BackingField; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  struct SubmarineMapPanelComponent_o *v25; // x19
  System_Action_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_421364B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, clickAction);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__, v6);
    sub_B0D8A4(&SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, v7);
    byte_421364B = 1;
  }
  v8 = sub_B0D974(SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, clickAction, method);
  SubmarineMapPanelData___c__DisplayClass48_0___ctor((SubmarineMapPanelData___c__DisplayClass48_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = clickAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 16),
    (System_Int32_array **)clickAction,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v8 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v25 = this->fields._Component_k__BackingField;
    v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v8,
      Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__,
      0LL);
    if ( v25 )
    {
      v25->fields._OnClickPanel_k__BackingField = v26;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v25->fields._OnClickPanel_k__BackingField,
        (System_Int32_array **)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      return;
    }
LABEL_11:
    sub_B0D97C(v9);
  }
}


void __fastcall SubmarineMapPanelData__UpdatePanelDisplay(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  const MethodInfo *v4; // x2
  SubmarineMapPanelComponent_o *v5; // x0

  if ( (byte_421364C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421364C = 1;
  }
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v5 = this->fields._Component_k__BackingField;
    if ( !v5 )
      sub_B0D97C(0LL);
    SubmarineMapPanelComponent__SetClosedPanelVisible(v5, !this->fields._IsOpened_k__BackingField, v4);
  }
}


int32_t __fastcall SubmarineMapPanelData__get_CommonReleaseId(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._CommonReleaseId_k__BackingField;
}


SubmarineMapPanelComponent_o *__fastcall SubmarineMapPanelData__get_Component(
        SubmarineMapPanelData_o *this,
        const MethodInfo *method)
{
  return this->fields._Component_k__BackingField;
}


int32_t __fastcall SubmarineMapPanelData__get_HIndex(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._HIndex_k__BackingField;
}


bool __fastcall SubmarineMapPanelData__get_HasEnemyParts(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._HasEnemyParts_k__BackingField;
}


bool __fastcall SubmarineMapPanelData__get_HasReleaseCond(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._CommonReleaseId_k__BackingField > 0;
}


bool __fastcall SubmarineMapPanelData__get_HasSpot(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField > 0;
}


bool __fastcall SubmarineMapPanelData__get_IsEnemyVisible(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField && this->fields._HasEnemyParts_k__BackingField;
}


bool __fastcall SubmarineMapPanelData__get_IsOpened(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapPanelData__get_IsScannable(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._IsScannable_k__BackingField;
}


UnityEngine_Vector3_o __fastcall SubmarineMapPanelData__get_LocalPosition(
        SubmarineMapPanelData_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._LocalPosition_k__BackingField.fields.x;
  y = this->fields._LocalPosition_k__BackingField.fields.y;
  z = this->fields._LocalPosition_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall SubmarineMapPanelData__get_PanelId(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField;
}


int32_t __fastcall SubmarineMapPanelData__get_SpotId(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


int32_t __fastcall SubmarineMapPanelData__get_VIndex(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._VIndex_k__BackingField;
}


void __fastcall SubmarineMapPanelData__set_CommonReleaseId(
        SubmarineMapPanelData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommonReleaseId_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_Component(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Component_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Component_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapPanelData__set_HIndex(
        SubmarineMapPanelData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HIndex_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_HasEnemyParts(
        SubmarineMapPanelData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._HasEnemyParts_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_IsOpened(
        SubmarineMapPanelData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOpened_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_IsScannable(
        SubmarineMapPanelData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsScannable_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapPanelData__set_LocalPosition(
        SubmarineMapPanelData_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._LocalPosition_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_PanelId(
        SubmarineMapPanelData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_SpotId(
        SubmarineMapPanelData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData__set_VIndex(
        SubmarineMapPanelData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._VIndex_k__BackingField = value;
}


void __fastcall SubmarineMapPanelData___c__DisplayClass48_0___ctor(
        SubmarineMapPanelData___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapPanelData___c__DisplayClass48_0___SetPanelClickAction_b__0(
        SubmarineMapPanelData___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_421173F & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_SubmarineMapPanelData___, method);
    byte_421173F = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickAction,
    (BlankEarth_QAARotateEarthResponse_o *)this->fields.__4__this,
    (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_SubmarineMapPanelData___);
}