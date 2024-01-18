void __fastcall SubmarineMapPanelData___ctor(
        SubmarineMapPanelData_o *this,
        EventPanelMapDetailEntity_o *panelDetail,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_WORD *)&this->fields._IsOpened_k__BackingField = 0;
  this->fields._IsScannable_k__BackingField = 0;
  if ( !panelDetail )
    sub_B2C434(v5, v6);
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

  if ( (byte_4185804 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185804 = 1;
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
      sub_B2C434(0LL, v4);
    SubmarineMapPanelComponent__ShowOpenPanelAnim(v5, v4);
  }
}


void __fastcall SubmarineMapPanelData__SetComponent(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *component,
        const MethodInfo *method)
{
  this->fields._Component_k__BackingField = component;
  sub_B2C2F8(&this->fields._Component_k__BackingField, component);
}


void __fastcall SubmarineMapPanelData__SetPanelClickAction(
        SubmarineMapPanelData_o *this,
        System_Action_SubmarineMapPanelData__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SubmarineMapPanelData___c__DisplayClass48_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_k__BackingField; // x21
  struct SubmarineMapPanelComponent_o *v12; // x19
  System_Action_o *v13; // x21

  if ( (byte_4185802 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, clickAction);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__, v6);
    sub_B2C35C(&SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, v7);
    byte_4185802 = 1;
  }
  v8 = (SubmarineMapPanelData___c__DisplayClass48_0_o *)sub_B2C42C(SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo);
  SubmarineMapPanelData___c__DisplayClass48_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v8->fields.clickAction = clickAction;
  sub_B2C2F8(&v8->fields, clickAction);
  v8->fields.__4__this = this;
  sub_B2C2F8(&v8->fields.__4__this, this);
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v12 = this->fields._Component_k__BackingField;
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v8,
      Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__,
      0LL);
    if ( v12 )
    {
      v12->fields._OnClickPanel_k__BackingField = v13;
      sub_B2C2F8(&v12->fields._OnClickPanel_k__BackingField, v13);
      return;
    }
LABEL_11:
    sub_B2C434(v9, v10);
  }
}


void __fastcall SubmarineMapPanelData__UpdatePanelDisplay(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  SubmarineMapPanelComponent_o *v6; // x0

  if ( (byte_4185803 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185803 = 1;
  }
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v6 = this->fields._Component_k__BackingField;
    if ( !v6 )
      sub_B2C434(0LL, v4);
    SubmarineMapPanelComponent__SetClosedPanelVisible(v6, !this->fields._IsOpened_k__BackingField, v5);
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
  this->fields._Component_k__BackingField = value;
  sub_B2C2F8(&this->fields._Component_k__BackingField, value);
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
  if ( (byte_41847AA & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_SubmarineMapPanelData___, method);
    byte_41847AA = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickAction,
    (BlankEarth_QAARotateEarthResponse_o *)this->fields.__4__this,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_SubmarineMapPanelData___);
}