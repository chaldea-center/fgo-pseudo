void SubmarineMapPanelData___ctor(
        SubmarineMapPanelData_o *this,
        EventPanelMapDetailEntity_o *panelDetail,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t commonReleaseId; // w9

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_WORD *)&this->fields._IsOpened_k__BackingField = 0;
  this->fields._IsScannable_k__BackingField = 0;
  if ( !panelDetail )
    sub_2213CDC(v5, v6);
  *(_QWORD *)&this->fields._HIndex_k__BackingField = *(_QWORD *)&panelDetail->fields.idxX;
  commonReleaseId = panelDetail->fields.commonReleaseId;
  this->fields._PanelId_k__BackingField = panelDetail->fields.id;
  this->fields._CommonReleaseId_k__BackingField = commonReleaseId;
}


void SubmarineMapPanelData__OpenPanel(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_c *v4; // x0
  UnityEngine_Object_o *Component_k__BackingField; // x20
  const MethodInfo *v6; // x1
  SubmarineMapPanelComponent_o *v7; // x0

  if ( (byte_596CF43 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CF43 = 1;
  }
  v4 = UnityEngine_Object_TypeInfo;
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  this->fields._IsOpened_k__BackingField = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Component_k__BackingField;
    if ( !v7 )
      sub_2213CDC(0, v6);
    SubmarineMapPanelComponent__ShowOpenPanelAnim(v7, v6);
  }
}


void SubmarineMapPanelData__SetComponent(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *component,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Component_k__BackingField = component;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Component_k__BackingField,
    (int32_t)component,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapPanelData__SetPanelClickAction(
        SubmarineMapPanelData_o *this,
        System_Action_SubmarineMapPanelData__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *Component_k__BackingField; // x21
  struct SubmarineMapPanelComponent_o *v23; // x19
  System_Action_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596CF41 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__);
    sub_2213A60(&SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo);
    byte_596CF41 = 1;
  }
  v5 = sub_2213CCC(SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = clickAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)clickAction, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0, 0) )
  {
    v23 = this->fields._Component_k__BackingField;
    v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v5,
      Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__,
      0);
    if ( v23 )
    {
      v23->fields._OnClickPanel_k__BackingField = v24;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v23->fields._OnClickPanel_k__BackingField,
        (int32_t)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      return;
    }
LABEL_10:
    sub_2213CDC(v6, v7);
  }
}


void SubmarineMapPanelData__UpdatePanelDisplay(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *Component_k__BackingField; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SubmarineMapPanelComponent_o *v7; // x0

  if ( (byte_596CF42 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CF42 = 1;
  }
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0, 0) )
  {
    v7 = this->fields._Component_k__BackingField;
    if ( !v7 )
      sub_2213CDC(0, v5);
    SubmarineMapPanelComponent__SetClosedPanelVisible(v7, !this->fields._IsOpened_k__BackingField, v6);
  }
}


int32_t SubmarineMapPanelData__get_CommonReleaseId(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._CommonReleaseId_k__BackingField;
}


SubmarineMapPanelComponent_o *SubmarineMapPanelData__get_Component(
        SubmarineMapPanelData_o *this,
        const MethodInfo *method)
{
  return this->fields._Component_k__BackingField;
}


int32_t SubmarineMapPanelData__get_HIndex(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._HIndex_k__BackingField;
}


bool SubmarineMapPanelData__get_HasEnemyParts(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._HasEnemyParts_k__BackingField;
}


bool SubmarineMapPanelData__get_HasReleaseCond(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._CommonReleaseId_k__BackingField > 0;
}


bool SubmarineMapPanelData__get_HasSpot(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField > 0;
}


bool SubmarineMapPanelData__get_IsEnemyVisible(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField && this->fields._HasEnemyParts_k__BackingField;
}


bool SubmarineMapPanelData__get_IsOpened(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField;
}


bool SubmarineMapPanelData__get_IsScannable(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._IsScannable_k__BackingField;
}


UnityEngine_Vector3_o SubmarineMapPanelData__get_LocalPosition(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  result.fields.x = this->fields._LocalPosition_k__BackingField.fields.x;
  result.fields.y = this->fields._LocalPosition_k__BackingField.fields.y;
  result.fields.z = this->fields._LocalPosition_k__BackingField.fields.z;
  return result;
}


int32_t SubmarineMapPanelData__get_PanelId(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._PanelId_k__BackingField;
}


int32_t SubmarineMapPanelData__get_SpotId(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._SpotId_k__BackingField;
}


int32_t SubmarineMapPanelData__get_VIndex(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  return this->fields._VIndex_k__BackingField;
}


void SubmarineMapPanelData__set_CommonReleaseId(SubmarineMapPanelData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CommonReleaseId_k__BackingField = value;
}


void SubmarineMapPanelData__set_Component(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Component_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Component_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapPanelData__set_HIndex(SubmarineMapPanelData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._HIndex_k__BackingField = value;
}


void SubmarineMapPanelData__set_HasEnemyParts(SubmarineMapPanelData_o *this, bool value, const MethodInfo *method)
{
  this->fields._HasEnemyParts_k__BackingField = value;
}


void SubmarineMapPanelData__set_IsOpened(SubmarineMapPanelData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOpened_k__BackingField = value;
}


void SubmarineMapPanelData__set_IsScannable(SubmarineMapPanelData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsScannable_k__BackingField = value;
}


void SubmarineMapPanelData__set_LocalPosition(
        SubmarineMapPanelData_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._LocalPosition_k__BackingField = value;
}


void SubmarineMapPanelData__set_PanelId(SubmarineMapPanelData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PanelId_k__BackingField = value;
}


void SubmarineMapPanelData__set_SpotId(SubmarineMapPanelData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SpotId_k__BackingField = value;
}


void SubmarineMapPanelData__set_VIndex(SubmarineMapPanelData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._VIndex_k__BackingField = value;
}


void SubmarineMapPanelData___c__DisplayClass48_0___ctor(
        SubmarineMapPanelData___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapPanelData___c__DisplayClass48_0___SetPanelClickAction_b__0(
        SubmarineMapPanelData___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_596CF44 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_SubmarineMapPanelData___);
    byte_596CF44 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_SubmarineMapPanelData___);
}