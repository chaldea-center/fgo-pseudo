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
    sub_1B64324(v5);
  *(_QWORD *)&this->fields._HIndex_k__BackingField = *(_QWORD *)&panelDetail->fields.idxX;
  this->fields._PanelId_k__BackingField = panelDetail->fields.id;
  this->fields._CommonReleaseId_k__BackingField = panelDetail->fields.commonReleaseId;
}


void __fastcall SubmarineMapPanelData__OpenPanel(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  const MethodInfo *v4; // x1
  SubmarineMapPanelComponent_o *v5; // x0

  if ( (byte_49F90E2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F90E2 = 1;
  }
  this->fields._IsOpened_k__BackingField = 1;
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v5 = this->fields._Component_k__BackingField;
    if ( !v5 )
      sub_1B64324(0LL);
    SubmarineMapPanelComponent__ShowOpenPanelAnim(v5, v4);
  }
}


void __fastcall SubmarineMapPanelData__SetComponent(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Component_k__BackingField = component;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Component_k__BackingField,
    (int32_t)component,
    (int32_t)method,
    v3);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *Component_k__BackingField; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  struct SubmarineMapPanelComponent_o *v17; // x19
  System_Action_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49F90E0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, clickAction);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__, v6);
    sub_1B640C8(&SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, v7);
    byte_49F90E0 = 1;
  }
  v8 = sub_1B64314(SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, clickAction, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 16) = clickAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)clickAction, v10, v11);
  *(_QWORD *)(v8 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v12, v13);
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v17 = this->fields._Component_k__BackingField;
    v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v8,
      Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__,
      0LL);
    if ( v17 )
    {
      v17->fields._OnClickPanel_k__BackingField = v18;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v17->fields._OnClickPanel_k__BackingField,
        (int32_t)v18,
        v19,
        v20);
      return;
    }
LABEL_10:
    sub_1B64324(v9);
  }
}


void __fastcall SubmarineMapPanelData__UpdatePanelDisplay(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  const MethodInfo *v4; // x2
  SubmarineMapPanelComponent_o *v5; // x0

  if ( (byte_49F90E1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F90E1 = 1;
  }
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v5 = this->fields._Component_k__BackingField;
    if ( !v5 )
      sub_1B64324(0LL);
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
  int32_t v3; // w3

  this->fields._Component_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Component_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  if ( (byte_49F90E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_SubmarineMapPanelData___, method);
    byte_49F90E3 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_SubmarineMapPanelData___);
}