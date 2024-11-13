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
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)&this->fields._HIndex_k__BackingField = *(_QWORD *)&panelDetail->fields.idxX;
  this->fields._PanelId_k__BackingField = panelDetail->fields.id;
  this->fields._CommonReleaseId_k__BackingField = panelDetail->fields.commonReleaseId;
}


void __fastcall SubmarineMapPanelData__OpenPanel(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *Component_k__BackingField; // x20
  __int64 v5; // x1
  SubmarineMapPanelComponent_o *v6; // x0

  if ( (byte_4B12DD3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12DD3 = 1;
  }
  this->fields._IsOpened_k__BackingField = 1;
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v6 = this->fields._Component_k__BackingField;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    SubmarineMapPanelComponent__ShowOpenPanelAnim(v6, 0LL);
  }
}


void __fastcall SubmarineMapPanelData__SetComponent(
        SubmarineMapPanelData_o *this,
        SubmarineMapPanelComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Component_k__BackingField = component;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Component_k__BackingField,
    (int64_t)component,
    (int64_t)method,
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  UnityEngine_Object_o *Component_k__BackingField; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  struct SubmarineMapPanelComponent_o *v32; // x19
  System_Action_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B12DD1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, clickAction, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__, v8, v9);
    sub_1BCA7E0(&SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, v10, v11);
    byte_4B12DD1 = 1;
  }
  v12 = sub_1BCAA2C(SubmarineMapPanelData___c__DisplayClass48_0_TypeInfo, clickAction, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  *(_QWORD *)(v12 + 16) = clickAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)clickAction, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v32 = this->fields._Component_k__BackingField;
    v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v12,
      Method_SubmarineMapPanelData___c__DisplayClass48_0__SetPanelClickAction_b__0__,
      0LL);
    if ( v32 )
    {
      v32->fields._OnClickPanel_k__BackingField = v33;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v32->fields._OnClickPanel_k__BackingField,
        (int64_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      return;
    }
LABEL_10:
    sub_1BCAA3C(v13, v14);
  }
}


void __fastcall SubmarineMapPanelData__UpdatePanelDisplay(SubmarineMapPanelData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *Component_k__BackingField; // x20
  __int64 v5; // x1
  SubmarineMapPanelComponent_o *v6; // x0

  if ( (byte_4B12DD2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12DD2 = 1;
  }
  Component_k__BackingField = (UnityEngine_Object_o *)this->fields._Component_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(Component_k__BackingField, 0LL, 0LL) )
  {
    v6 = this->fields._Component_k__BackingField;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    SubmarineMapPanelComponent__SetClosedPanelVisible(v6, !this->fields._IsOpened_k__BackingField, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Component_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Component_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v2; // x2

  if ( (byte_4B12DD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_SubmarineMapPanelData___, method, v2);
    byte_4B12DD4 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_SubmarineMapPanelData___);
}