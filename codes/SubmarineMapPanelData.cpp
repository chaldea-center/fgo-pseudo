void SubmarineMapPanelData___ctor(
        SubmarineMapPanelData_o *this,
        EventPanelMapDetailEntity_o *panelDetail,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_WORD *)&this->fields._IsOpened_k__BackingField = 0;
  this->fields._IsScannable_k__BackingField = 0;
  if ( !panelDetail )
    sub_1C71608(v5, v6);
  *(_QWORD *)&this->fields._HIndex_k__BackingField = *(_QWORD *)&panelDetail->fields.idxX;
  this->fields._PanelId_k__BackingField = panelDetail->fields.id;
  this->fields._CommonReleaseId_k__BackingField = panelDetail->fields.commonReleaseId;
}


void SubmarineMapPanelData__OpenPanel(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  const MethodInfo *v4; // x1
  SubmarineMapPanelComponent_o *v5; // x0

  if ( (byte_4CC3D24 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3D24 = 1;
  }
  this->fields._IsOpened_k__BackingField = 1;
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0, 0) )
  {
    v5 = this->fields._Component_k__BackingField;
    if ( !v5 )
      sub_1C71608(0, v4);
    SubmarineMapPanelComponent__ShowOpenPanelAnim(v5, v4);
  }
}


void SubmarineMapPanelData__SetComponent(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Component_k__BackingField = component;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Component_k__BackingField,
    (int32_t)component,
    (int32_t)method,
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *Component_k__BackingField; // x21
  struct SubmarineMapPanelComponent_o *v21; // x19
  System_Action_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CC3D22 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__);
    sub_1C713B0(&SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo);
    byte_4CC3D22 = 1;
  }
  v5 = sub_1C715FC(SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = clickAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)clickAction, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0, 0) )
  {
    v21 = this->fields._Component_k__BackingField;
    v22 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v5,
      Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__,
      0);
    if ( v21 )
    {
      v21->fields._OnClickPanel_k__BackingField = v22;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v21->fields._OnClickPanel_k__BackingField,
        (int32_t)v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      return;
    }
LABEL_10:
    sub_1C71608(v6, v7);
  }
}


void SubmarineMapPanelData__UpdatePanelDisplay(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_k__BackingField; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  SubmarineMapPanelComponent_o *v6; // x0

  if ( (byte_4CC3D23 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3D23 = 1;
  }
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0, 0) )
  {
    v6 = this->fields._Component_k__BackingField;
    if ( !v6 )
      sub_1C71608(0, v4);
    SubmarineMapPanelComponent__SetClosedPanelVisible(v6, !this->fields._IsOpened_k__BackingField, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Component_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Component_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  if ( (byte_4CC3D25 & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_SubmarineMapPanelData___);
    byte_4CC3D25 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_3095D08 *)Method_ActionExtensions_Call_SubmarineMapPanelData___);
}