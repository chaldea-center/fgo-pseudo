void DebugInputUsePlayerTurnSkillComponent___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *static_fields; // x8
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v11; // x8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v19; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Array_o *v26; // x0
  System_RuntimeFieldHandle_o v27; // x1
  System_Array_o *v28; // x19
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  Il2CppClass *v36; // x0
  __int64 v37; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v38; // x8
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Array_o *v45; // x0
  System_RuntimeFieldHandle_o v46; // x1
  System_Array_o *v47; // x19
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_5971E8A & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&BattleCommand_TYPE___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__040A5A009F9B9D5E4771742174142E74FA2D3E0AAA3DF5717F01ADE338D75D0E);
    sub_2213A60(&Field__PrivateImplementationDetails__DBA3401B79DDBA7DD7AE51264A01A80157347ACDBDF2EFB2F18600DD476CC9A9);
    byte_5971E8A = 1;
  }
  v1 = int___TypeInfo;
  DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->NUM_PARTS_LENGTH = 9;
  v2 = sub_2213B20(v1, 9);
  static_fields = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  static_fields->SelectedUseServantIdxList = (struct System_Int32_array *)v2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SelectedUseServantIdxList, v2, v4, v5, v6, v7, v8, v9);
  v10 = sub_2213B20(int___TypeInfo, 9);
  v11 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v11->SelectedTargetServantIdxList = (struct System_Int32_array *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->SelectedTargetServantIdxList, v10, v12, v13, v14, v15, v16, v17);
  v18 = sub_2213B20(int___TypeInfo, 9);
  v19 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v19->SelectedSkillIdxList = (struct System_Int32_array *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->SelectedSkillIdxList, v18, v20, v21, v22, v23, v24, v25);
  v26 = (System_Array_o *)sub_2213B20(BattleCommand_TYPE___TypeInfo, 9);
  v27.fields.value = Field__PrivateImplementationDetails__DBA3401B79DDBA7DD7AE51264A01A80157347ACDBDF2EFB2F18600DD476CC9A9;
  v28 = v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v26, v27, 0);
  v29 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v29->SelectedCommandTypeList = (struct BattleCommand_TYPE_array *)v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v29->SelectedCommandTypeList,
    (int32_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = bool___TypeInfo;
  *(_WORD *)&DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->requestUsePlayerTurnFlg = 256;
  v37 = sub_2213B20(v36, 9);
  v38 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v38->RequestUseSkillToggle = (struct System_Boolean_array *)v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->RequestUseSkillToggle, v37, v39, v40, v41, v42, v43, v44);
  v45 = (System_Array_o *)sub_2213B20(bool___TypeInfo, 9);
  v46.fields.value = Field__PrivateImplementationDetails__040A5A009F9B9D5E4771742174142E74FA2D3E0AAA3DF5717F01ADE338D75D0E;
  v47 = v45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v45, v46, 0);
  v48 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v48->StarUseToggle = (struct System_Boolean_array *)v47;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->StarUseToggle, (int32_t)v47, v49, v50, v51, v52, v53, v54);
}


void DebugInputUsePlayerTurnSkillComponent___ctor(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputUsePlayerTurnSkillComponent__Cancel(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *debugMenuTran; // x0

  debugMenuTran = (UnityEngine_Component_o *)this->fields.debugMenuTran;
  if ( !debugMenuTran
    || (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugMenuTran, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 1, 0),
        (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
    sub_2213CDC(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


void DebugInputUsePlayerTurnSkillComponent__ChangeCloseSelfWindow(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *closeSelfWindw; // x0
  bool value; // w0
  __int64 v5; // x1
  DebugInputUsePlayerTurnSkillComponent_c *v6; // x8
  bool v7; // w19

  if ( (byte_5971E87 & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E87 = 1;
  }
  closeSelfWindw = this->fields.closeSelfWindw;
  if ( !closeSelfWindw )
    sub_2213CDC(0, method);
  value = UIToggle__get_value(closeSelfWindw, 0);
  v6 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v7 = value;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, v5);
    v6 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  v6->static_fields->closeSelfWindowFlg = v7;
}


void DebugInputUsePlayerTurnSkillComponent__ChangeRequestUsePlayerTurn(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *requestUsePlayerTurn; // x0
  bool value; // w0
  __int64 v5; // x1
  DebugInputUsePlayerTurnSkillComponent_c *v6; // x8
  bool v7; // w19

  if ( (byte_5971E86 & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E86 = 1;
  }
  requestUsePlayerTurn = this->fields.requestUsePlayerTurn;
  if ( !requestUsePlayerTurn )
    sub_2213CDC(0, method);
  value = UIToggle__get_value(requestUsePlayerTurn, 0);
  v6 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v7 = value;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, v5);
    v6 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  v6->static_fields->requestUsePlayerTurnFlg = v7;
}


void DebugInputUsePlayerTurnSkillComponent__ChangeRequestUseSkillToggle(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  DebugInputUsePlayerTurnSkillComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  __int64 v7; // x20
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v9; // x8
  UIToggle_o *requestUseSkillToggle; // x8
  __int64 v11; // x19

  v4 = this;
  if ( (byte_5971E88 & 1) == 0 )
  {
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E88 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_19;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (unsigned int)((_DWORD)this - 1);
  if ( (int)this - 1 < 0 )
    return;
  settingInfoList = v4->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_19;
  if ( (int)v7 >= SLODWORD(settingInfoList->max_length) )
    return;
  this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, parentGameObject);
    settingInfoList = v4->fields.settingInfoList;
    if ( !settingInfoList )
      goto LABEL_19;
    this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( (unsigned int)v7 >= LODWORD(settingInfoList->max_length) )
    goto LABEL_20;
  v9 = settingInfoList->m_Items[v7];
  if ( !v9
    || (requestUseSkillToggle = v9->fields.requestUseSkillToggle) == 0
    || (v11 = *((_QWORD *)this[2].monitor + 6),
        this = (DebugInputUsePlayerTurnSkillComponent_o *)UIToggle__get_value(requestUseSkillToggle, 0),
        !v11) )
  {
LABEL_19:
    sub_2213CDC(this, parentGameObject);
  }
  if ( (unsigned int)v7 >= *(_DWORD *)(v11 + 24) )
LABEL_20:
    sub_2213CE4(this);
  *(_BYTE *)(v11 + v7 + 32) = (unsigned __int8)this & 1;
}


void DebugInputUsePlayerTurnSkillComponent__ChangeStarToggle(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  DebugInputUsePlayerTurnSkillComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  __int64 v7; // x20
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v9; // x8
  UIToggle_o *onStarToggle; // x8
  __int64 v11; // x19

  v4 = this;
  if ( (byte_5971E89 & 1) == 0 )
  {
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E89 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_19;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (unsigned int)((_DWORD)this - 1);
  if ( (int)this - 1 < 0 )
    return;
  settingInfoList = v4->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_19;
  if ( (int)v7 >= SLODWORD(settingInfoList->max_length) )
    return;
  this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, parentGameObject);
    settingInfoList = v4->fields.settingInfoList;
    if ( !settingInfoList )
      goto LABEL_19;
    this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( (unsigned int)v7 >= LODWORD(settingInfoList->max_length) )
    goto LABEL_20;
  v9 = settingInfoList->m_Items[v7];
  if ( !v9
    || (onStarToggle = v9->fields.onStarToggle) == 0
    || (v11 = *((_QWORD *)this[2].monitor + 7),
        this = (DebugInputUsePlayerTurnSkillComponent_o *)UIToggle__get_value(onStarToggle, 0),
        !v11) )
  {
LABEL_19:
    sub_2213CDC(this, parentGameObject);
  }
  if ( (unsigned int)v7 >= *(_DWORD *)(v11 + 24) )
LABEL_20:
    sub_2213CE4(this);
  *(_BYTE *)(v11 + v7 + 32) = (unsigned __int8)this & 1;
}


void DebugInputUsePlayerTurnSkillComponent__OnEnable(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *requestUsePlayerTurn; // x0
  DebugInputUsePlayerTurnSkillComponent_c *v4; // x8
  char v5; // w20
  UIToggle_o *v6; // x20
  DebugInputUsePlayerTurnSkillComponent_c *v7; // x8
  char v8; // w20
  UIToggle_o *closeSelfWindw; // x20
  unsigned int i; // w26
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v12; // x8
  DebugInputUsePlayerTurnSkillComponent_c *v13; // x8
  char v14; // w20
  struct System_Boolean_array *RequestUseSkillToggle; // x9
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v16; // x10
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v17; // x10
  UIToggle_o *v18; // x20
  struct System_Int32_array *SelectedUseServantIdxList; // x8
  System_String_o *v20; // x0
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v21; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v22; // x8
  struct System_Int32_array *SelectedSkillIdxList; // x8
  System_String_o *v24; // x0
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v25; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v26; // x8
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v27; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v28; // x8
  struct System_Boolean_array *StarUseToggle; // x9
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v30; // x10
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v31; // x10
  UIToggle_o *onStarToggle; // x20
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v33; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v34; // x8
  UILabel_o *commandTypeName; // x20
  Il2CppObject *syncRoot; // x8
  int32_t v37; // w21
  struct System_Int32_array *SelectedTargetServantIdxList; // x8
  System_String_o *v39; // x0
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *v40; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v41; // x8
  int v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5971E7C & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    sub_2213A60(&StringLiteral_2470/*"Arts"*/);
    sub_2213A60(&StringLiteral_26900/*"番目"*/);
    byte_5971E7C = 1;
  }
  requestUsePlayerTurn = this->fields.requestUsePlayerTurn;
  v42 = 0;
  if ( !requestUsePlayerTurn )
    goto LABEL_87;
  requestUsePlayerTurn = (UIToggle_o *)UIToggle__get_value(requestUsePlayerTurn, 0);
  v4 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v5 = (char)requestUsePlayerTurn;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, method);
    v4 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( v4->static_fields->requestUsePlayerTurnFlg != (v5 & 1) )
  {
    v6 = this->fields.requestUsePlayerTurn;
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, method);
    if ( !v6 )
      goto LABEL_87;
    UIToggle__set_value(v6, DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->requestUsePlayerTurnFlg, 0);
  }
  requestUsePlayerTurn = this->fields.closeSelfWindw;
  if ( !requestUsePlayerTurn )
    goto LABEL_87;
  requestUsePlayerTurn = (UIToggle_o *)UIToggle__get_value(requestUsePlayerTurn, 0);
  v7 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v8 = (char)requestUsePlayerTurn;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, method);
    v7 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( v7->static_fields->closeSelfWindowFlg == (v8 & 1) )
    goto LABEL_19;
  closeSelfWindw = this->fields.closeSelfWindw;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, method);
  if ( !closeSelfWindw )
LABEL_87:
    sub_2213CDC(requestUsePlayerTurn, method);
  UIToggle__set_value(
    closeSelfWindw,
    DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->closeSelfWindowFlg,
    0);
LABEL_19:
  for ( i = 0; ; ++i )
  {
    requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, method);
      requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    if ( (signed int)i >= (__int64)requestUsePlayerTurn[1].fields.onChange->klass )
      break;
    settingInfoList = this->fields.settingInfoList;
    if ( !settingInfoList )
      goto LABEL_87;
    if ( i >= LODWORD(settingInfoList->max_length) )
      goto LABEL_88;
    v12 = settingInfoList->m_Items[i];
    if ( !v12 )
      goto LABEL_87;
    requestUsePlayerTurn = v12->fields.requestUseSkillToggle;
    if ( !requestUsePlayerTurn )
      goto LABEL_87;
    requestUsePlayerTurn = (UIToggle_o *)UIToggle__get_value(requestUsePlayerTurn, 0);
    v13 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    v14 = (char)requestUsePlayerTurn;
    if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, method);
      v13 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    RequestUseSkillToggle = v13->static_fields->RequestUseSkillToggle;
    if ( !RequestUseSkillToggle )
      goto LABEL_87;
    if ( i >= LODWORD(RequestUseSkillToggle->max_length) )
      goto LABEL_88;
    if ( (v14 & 1) != RequestUseSkillToggle->m_Items[i] )
    {
      v16 = this->fields.settingInfoList;
      if ( !v16 )
        goto LABEL_87;
      if ( i >= LODWORD(v16->max_length) )
        goto LABEL_88;
      v17 = v16->m_Items[i];
      if ( !v17 )
        goto LABEL_87;
      v18 = v17->fields.requestUseSkillToggle;
      if ( !*(&v13->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v13, method);
        RequestUseSkillToggle = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->RequestUseSkillToggle;
        if ( !RequestUseSkillToggle )
          goto LABEL_87;
      }
      if ( i >= LODWORD(RequestUseSkillToggle->max_length) )
        goto LABEL_88;
      if ( !v18 )
        goto LABEL_87;
      UIToggle__set_value(v18, RequestUseSkillToggle->m_Items[i], 0);
      v13 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    SelectedUseServantIdxList = v13->static_fields->SelectedUseServantIdxList;
    if ( !SelectedUseServantIdxList )
      goto LABEL_87;
    if ( i >= LODWORD(SelectedUseServantIdxList->max_length) )
      goto LABEL_88;
    v42 = SelectedUseServantIdxList->m_Items[i] + 1;
    v20 = System_Int32__ToString((int32_t)&v42, 0);
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_75651716(v20, (System_String_o *)StringLiteral_26900/*"番目"*/, 0);
    v21 = this->fields.settingInfoList;
    if ( !v21 )
      goto LABEL_87;
    if ( i >= LODWORD(v21->max_length) )
      goto LABEL_88;
    v22 = v21->m_Items[i];
    if ( !v22 )
      goto LABEL_87;
    method = (const MethodInfo *)requestUsePlayerTurn;
    requestUsePlayerTurn = (UIToggle_o *)v22->fields.useServantIdx;
    if ( !requestUsePlayerTurn )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)requestUsePlayerTurn, (System_String_o *)method, 0);
    SelectedSkillIdxList = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->SelectedSkillIdxList;
    if ( !SelectedSkillIdxList )
      goto LABEL_87;
    if ( i >= LODWORD(SelectedSkillIdxList->max_length) )
      goto LABEL_88;
    v42 = SelectedSkillIdxList->m_Items[i] + 1;
    v24 = System_Int32__ToString((int32_t)&v42, 0);
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_75651716(v24, (System_String_o *)StringLiteral_26900/*"番目"*/, 0);
    v25 = this->fields.settingInfoList;
    if ( !v25 )
      goto LABEL_87;
    if ( i >= LODWORD(v25->max_length) )
      goto LABEL_88;
    v26 = v25->m_Items[i];
    if ( !v26 )
      goto LABEL_87;
    method = (const MethodInfo *)requestUsePlayerTurn;
    requestUsePlayerTurn = (UIToggle_o *)v26->fields.useSkillIdx;
    if ( !requestUsePlayerTurn )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)requestUsePlayerTurn, (System_String_o *)method, 0);
    v27 = this->fields.settingInfoList;
    if ( !v27 )
      goto LABEL_87;
    if ( i >= LODWORD(v27->max_length) )
      goto LABEL_88;
    v28 = v27->m_Items[i];
    if ( !v28 )
      goto LABEL_87;
    requestUsePlayerTurn = v28->fields.onStarToggle;
    if ( !requestUsePlayerTurn )
      goto LABEL_87;
    requestUsePlayerTurn = (UIToggle_o *)UIToggle__get_value(requestUsePlayerTurn, 0);
    StarUseToggle = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->StarUseToggle;
    if ( !StarUseToggle )
      goto LABEL_87;
    if ( i >= LODWORD(StarUseToggle->max_length) )
      goto LABEL_88;
    if ( ((unsigned __int8)requestUsePlayerTurn & 1) != StarUseToggle->m_Items[i] )
    {
      v30 = this->fields.settingInfoList;
      if ( !v30 )
        goto LABEL_87;
      if ( i >= LODWORD(v30->max_length) )
        goto LABEL_88;
      v31 = v30->m_Items[i];
      if ( !v31 )
        goto LABEL_87;
      onStarToggle = v31->fields.onStarToggle;
      if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, method);
        StarUseToggle = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->StarUseToggle;
        if ( !StarUseToggle )
          goto LABEL_87;
      }
      if ( i >= LODWORD(StarUseToggle->max_length) )
        goto LABEL_88;
      if ( !onStarToggle )
        goto LABEL_87;
      UIToggle__set_value(onStarToggle, StarUseToggle->m_Items[i], 0);
    }
    v33 = this->fields.settingInfoList;
    if ( !v33 )
      goto LABEL_87;
    if ( i >= LODWORD(v33->max_length) )
LABEL_88:
      sub_2213CE4(requestUsePlayerTurn);
    v34 = v33->m_Items[i];
    if ( !v34 )
      goto LABEL_87;
    requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    commandTypeName = v34->fields.commandTypeName;
    if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, method);
      requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    syncRoot = requestUsePlayerTurn[1].fields.onChange->fields._syncRoot;
    if ( !syncRoot )
      goto LABEL_87;
    if ( i >= LODWORD(syncRoot[1].monitor) )
      goto LABEL_88;
    v37 = *((_DWORD *)&syncRoot[2].klass + (int)i);
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
    requestUsePlayerTurn = (UIToggle_o *)BattleCommand__GetCommandTypeName(
                                           v37,
                                           (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                           0);
    if ( !commandTypeName )
      goto LABEL_87;
    UILabel__set_text(commandTypeName, (System_String_o *)requestUsePlayerTurn, 0);
    SelectedTargetServantIdxList = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->SelectedTargetServantIdxList;
    if ( !SelectedTargetServantIdxList )
      goto LABEL_87;
    if ( i >= LODWORD(SelectedTargetServantIdxList->max_length) )
      goto LABEL_88;
    v42 = SelectedTargetServantIdxList->m_Items[i] + 1;
    v39 = System_Int32__ToString((int32_t)&v42, 0);
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_75651716(v39, (System_String_o *)StringLiteral_26900/*"番目"*/, 0);
    v40 = this->fields.settingInfoList;
    if ( !v40 )
      goto LABEL_87;
    if ( i >= LODWORD(v40->max_length) )
      goto LABEL_88;
    v41 = v40->m_Items[i];
    if ( !v41 )
      goto LABEL_87;
    method = (const MethodInfo *)requestUsePlayerTurn;
    requestUsePlayerTurn = (UIToggle_o *)v41->fields.targetServantIdx;
    if ( !requestUsePlayerTurn )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)requestUsePlayerTurn, (System_String_o *)method, 0);
  }
}


void DebugInputUsePlayerTurnSkillComponent__Open(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DebugInputUsePlayerTurnSkillComponent_c *v11; // x0
  int v12; // w23
  struct UnityEngine_Transform_o **p_debugMenuTran; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1

  if ( (byte_5971E7B & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E7B = 1;
  }
  v11 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v12 = -1;
  do
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, inputData);
      v11 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    ++v12;
  }
  while ( v12 < v11->static_fields->NUM_PARTS_LENGTH );
  this->fields.data = inputData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)inputData,
    (System_String_o *)inputDebugMenuTran,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = &this->fields.debugMenuTran;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.debugMenuTran,
    (int32_t)inputDebugMenuTran,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)*p_debugMenuTran) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.attackCardSelectWindow) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_2213CDC(gameObject, v21);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void DebugInputUsePlayerTurnSkillComponent__OpenCommandTypeSelect(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  DebugInputUsePlayerTurnSkillComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  int v7; // w20
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v20; // x1
  Il2CppClass **v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v31; // x1
  Il2CppClass **v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v42; // x1
  Il2CppClass **v43; // x0
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v45; // x22

  v4 = this;
  if ( (byte_5971E84 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__string__TypeInfo);
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&Method_DebugInputUsePlayerTurnSkillComponent_TapCommandTypeSelectCallback__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_2213A60(&StringLiteral_2470/*"Arts"*/);
    byte_5971E84 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_29;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_29;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  settingInfoList = v4->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_29;
  if ( (int)this > SLODWORD(settingInfoList->max_length) )
    return;
  this = (DebugInputUsePlayerTurnSkillComponent_o *)v4->fields.attackCardSelectWindow;
  if ( !this )
LABEL_29:
    sub_2213CDC(this, parentGameObject);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v4->fields.lastOpenSelectButton = v7;
    v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v10);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                        1,
                                                        (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                                        0);
    if ( v9 )
    {
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        v20 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)this,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
        }
        this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                            2,
                                                            (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                                            0);
        v28 = v9->fields._items;
        v29 = Method_System_Collections_Generic_List_string__Add__;
        ++v9->fields._version;
        if ( v28 )
        {
          v30 = v9->fields._size;
          v31 = this;
          if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)this,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &v28->obj.klass + v30;
            v9->fields._size = v30 + 1;
            v32[4] = (Il2CppClass *)v31;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v31, v22, v23, v24, v25, v26, v27);
          }
          this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                              3,
                                                              (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                                              0);
          v39 = v9->fields._items;
          v40 = Method_System_Collections_Generic_List_string__Add__;
          ++v9->fields._version;
          if ( v39 )
          {
            v41 = v9->fields._size;
            v42 = this;
            if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)this,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &v39->obj.klass + v41;
              v9->fields._size = v41 + 1;
              v43[4] = (Il2CppClass *)v42;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v42, v33, v34, v35, v36, v37, v38);
            }
            attackCardSelectWindow = v4->fields.attackCardSelectWindow;
            v45 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__string__TypeInfo);
            System_Action_int__object____ctor(
              v45,
              (Il2CppObject *)v4,
              Method_DebugInputUsePlayerTurnSkillComponent_TapCommandTypeSelectCallback__,
              0);
            if ( attackCardSelectWindow )
            {
              DebugAttackCardSelectComponent__Open(
                attackCardSelectWindow,
                (System_Action_int__string__o *)v45,
                (System_Collections_Generic_List_string__o *)v9,
                0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_29;
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugInputUsePlayerTurnSkillComponent__OpenNumSelectWindow(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        int32_t buttonIdx,
        System_Action_int__string__o *callback,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *attackCardSelectWindow; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Behaviour_o *v19; // x1
  Il2CppClass **v20; // x0
  bool v21; // nf
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5971E7F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_26900/*"番目"*/);
    byte_5971E7F = 1;
  }
  attackCardSelectWindow = (UnityEngine_Behaviour_o *)this->fields.attackCardSelectWindow;
  v22 = 0;
  if ( !attackCardSelectWindow )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(attackCardSelectWindow, 0) )
    return;
  this->fields.lastOpenSelectButton = buttonIdx;
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  v22 = 1;
  do
  {
    v9 = System_Int32__ToString((int32_t)&v22, 0);
    attackCardSelectWindow = (UnityEngine_Behaviour_o *)System_String__Concat_75651716(
                                                          v9,
                                                          (System_String_o *)StringLiteral_26900/*"番目"*/,
                                                          0);
    if ( !v8 )
      goto LABEL_15;
    items = v8->fields._items;
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v8->fields._size;
    v19 = attackCardSelectWindow;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)attackCardSelectWindow,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v19;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
    }
    v21 = v22 - 3 < 0;
    ++v22;
  }
  while ( v21 != __OFSUB__(v22, 4) );
  attackCardSelectWindow = (UnityEngine_Behaviour_o *)this->fields.attackCardSelectWindow;
  if ( !attackCardSelectWindow )
LABEL_15:
    sub_2213CDC(attackCardSelectWindow, *(_QWORD *)&buttonIdx);
  DebugAttackCardSelectComponent__Open(
    (DebugAttackCardSelectComponent_o *)attackCardSelectWindow,
    callback,
    (System_Collections_Generic_List_string__o *)v8,
    0);
}


void DebugInputUsePlayerTurnSkillComponent__OpenSkillSelect(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  int32_t v7; // w20
  Il2CppClass *klass; // x8
  System_Action_T1__T2__o *v9; // x21
  const MethodInfo *v10; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_5971E82 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_2213A60(&Method_DebugInputUsePlayerTurnSkillComponent_TapSkillSelectCallback__);
    byte_5971E82 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_2213CDC(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__string__TypeInfo);
    System_Action_int__object____ctor(v9, v4, Method_DebugInputUsePlayerTurnSkillComponent_TapSkillSelectCallback__, 0);
    DebugInputUsePlayerTurnSkillComponent__OpenNumSelectWindow(
      (DebugInputUsePlayerTurnSkillComponent_o *)v4,
      v7,
      (System_Action_int__string__o *)v9,
      v10);
  }
}


void DebugInputUsePlayerTurnSkillComponent__OpenTargetServantSelect(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  int32_t v7; // w20
  Il2CppClass *klass; // x8
  System_Action_T1__T2__o *v9; // x21
  const MethodInfo *v10; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_5971E7E & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_2213A60(&Method_DebugInputUsePlayerTurnSkillComponent_TapTargetServantSelectCallback__);
    byte_5971E7E = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_2213CDC(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__string__TypeInfo);
    System_Action_int__object____ctor(
      v9,
      v4,
      Method_DebugInputUsePlayerTurnSkillComponent_TapTargetServantSelectCallback__,
      0);
    DebugInputUsePlayerTurnSkillComponent__OpenNumSelectWindow(
      (DebugInputUsePlayerTurnSkillComponent_o *)v4,
      v7,
      (System_Action_int__string__o *)v9,
      v10);
  }
}


void DebugInputUsePlayerTurnSkillComponent__OpenUseServantSelect(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  int32_t v7; // w20
  Il2CppClass *klass; // x8
  System_Action_T1__T2__o *v9; // x21
  const MethodInfo *v10; // x3

  v4 = (Il2CppObject *)this;
  if ( (byte_5971E7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_2213A60(&Method_DebugInputUsePlayerTurnSkillComponent_TapUseServantSelectCallback__);
    byte_5971E7D = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_2213CDC(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__string__TypeInfo);
    System_Action_int__object____ctor(
      v9,
      v4,
      Method_DebugInputUsePlayerTurnSkillComponent_TapUseServantSelectCallback__,
      0);
    DebugInputUsePlayerTurnSkillComponent__OpenNumSelectWindow(
      (DebugInputUsePlayerTurnSkillComponent_o *)v4,
      v7,
      (System_Action_int__string__o *)v9,
      v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void DebugInputUsePlayerTurnSkillComponent__SetCommandType(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        int32_t inputIdx,
        int32_t inputCommandType,
        System_String_o *inputName,
        const MethodInfo *method)
{
  UILabel_o *commandTypeName; // x0
  Il2CppObject *m_target; // x9
  char *v11; // x10
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v13; // x8

  if ( (byte_5971E85 & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E85 = 1;
  }
  commandTypeName = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, *(_QWORD *)&inputIdx);
    commandTypeName = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  m_target = commandTypeName->fields.onChange->fields.m_target;
  if ( !m_target )
    goto LABEL_12;
  if ( LODWORD(m_target[1].monitor) <= inputIdx )
    goto LABEL_13;
  v11 = (char *)m_target + 4 * inputIdx;
  settingInfoList = this->fields.settingInfoList;
  *((_DWORD *)v11 + 8) = inputCommandType;
  if ( !settingInfoList )
    goto LABEL_12;
  if ( LODWORD(settingInfoList->max_length) <= inputIdx )
LABEL_13:
    sub_2213CE4(commandTypeName);
  v13 = settingInfoList->m_Items[inputIdx];
  if ( !v13 || (commandTypeName = v13->fields.commandTypeName) == 0 )
LABEL_12:
    sub_2213CDC(commandTypeName, *(_QWORD *)&inputIdx);
  UILabel__set_text(commandTypeName, inputName, 0);
}


void DebugInputUsePlayerTurnSkillComponent__Submit(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void DebugInputUsePlayerTurnSkillComponent__TapCommandTypeSelectCallback(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        int32_t inputIdx,
        System_String_o *inputName,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v5; // w9
  int32_t v7; // w2

  if ( inputIdx == 1 )
    v5 = 2;
  else
    v5 = 3;
  if ( inputIdx )
    v7 = v5;
  else
    v7 = 1;
  DebugInputUsePlayerTurnSkillComponent__SetCommandType(this, this->fields.lastOpenSelectButton, v7, inputName, v4);
}


// local variable allocation has failed, the output may be wrong!
void DebugInputUsePlayerTurnSkillComponent__TapSkillSelectCallback(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        int32_t inputIdx,
        System_String_o *inputName,
        const MethodInfo *method)
{
  UILabel_o *useSkillIdx; // x0
  intptr_t invoke_impl; // x8
  __int64 lastOpenSelectButton; // x9
  intptr_t v10; // x9
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  __int64 v12; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v13; // x8

  if ( (byte_5971E83 & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E83 = 1;
  }
  useSkillIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, *(_QWORD *)&inputIdx);
    useSkillIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  invoke_impl = useSkillIdx->fields.onChange->fields.invoke_impl;
  if ( !invoke_impl )
    goto LABEL_12;
  lastOpenSelectButton = this->fields.lastOpenSelectButton;
  if ( (unsigned int)lastOpenSelectButton >= *(_DWORD *)(invoke_impl + 24) )
    goto LABEL_13;
  v10 = invoke_impl + 4 * lastOpenSelectButton;
  settingInfoList = this->fields.settingInfoList;
  *(_DWORD *)(v10 + 32) = inputIdx;
  if ( !settingInfoList )
    goto LABEL_12;
  v12 = this->fields.lastOpenSelectButton;
  if ( (unsigned int)v12 >= LODWORD(settingInfoList->max_length) )
LABEL_13:
    sub_2213CE4(useSkillIdx);
  v13 = settingInfoList->m_Items[v12];
  if ( !v13 || (useSkillIdx = v13->fields.useSkillIdx) == 0 )
LABEL_12:
    sub_2213CDC(useSkillIdx, *(_QWORD *)&inputIdx);
  UILabel__set_text(useSkillIdx, inputName, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugInputUsePlayerTurnSkillComponent__TapTargetServantSelectCallback(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        int32_t inputIdx,
        System_String_o *inputName,
        const MethodInfo *method)
{
  UILabel_o *targetServantIdx; // x0
  intptr_t method_ptr; // x8
  __int64 lastOpenSelectButton; // x9
  intptr_t v10; // x9
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  __int64 v12; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v13; // x8

  if ( (byte_5971E81 & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E81 = 1;
  }
  targetServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, *(_QWORD *)&inputIdx);
    targetServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  method_ptr = targetServantIdx->fields.onChange->fields.method_ptr;
  if ( !method_ptr )
    goto LABEL_12;
  lastOpenSelectButton = this->fields.lastOpenSelectButton;
  if ( (unsigned int)lastOpenSelectButton >= *(_DWORD *)(method_ptr + 24) )
    goto LABEL_13;
  v10 = method_ptr + 4 * lastOpenSelectButton;
  settingInfoList = this->fields.settingInfoList;
  *(_DWORD *)(v10 + 32) = inputIdx;
  if ( !settingInfoList )
    goto LABEL_12;
  v12 = this->fields.lastOpenSelectButton;
  if ( (unsigned int)v12 >= LODWORD(settingInfoList->max_length) )
LABEL_13:
    sub_2213CE4(targetServantIdx);
  v13 = settingInfoList->m_Items[v12];
  if ( !v13 || (targetServantIdx = v13->fields.targetServantIdx) == 0 )
LABEL_12:
    sub_2213CDC(targetServantIdx, *(_QWORD *)&inputIdx);
  UILabel__set_text(targetServantIdx, inputName, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugInputUsePlayerTurnSkillComponent__TapUseServantSelectCallback(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        int32_t inputIdx,
        System_String_o *inputName,
        const MethodInfo *method)
{
  UILabel_o *useServantIdx; // x0
  _DWORD *monitor; // x8
  __int64 lastOpenSelectButton; // x9
  char *v10; // x9
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  __int64 v12; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v13; // x8

  if ( (byte_5971E80 & 1) == 0 )
  {
    sub_2213A60(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_5971E80 = 1;
  }
  useServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !*(&DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo, *(_QWORD *)&inputIdx);
    useServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  monitor = useServantIdx->fields.onChange->monitor;
  if ( !monitor )
    goto LABEL_12;
  lastOpenSelectButton = this->fields.lastOpenSelectButton;
  if ( (unsigned int)lastOpenSelectButton >= monitor[6] )
    goto LABEL_13;
  v10 = (char *)&monitor[lastOpenSelectButton];
  settingInfoList = this->fields.settingInfoList;
  *((_DWORD *)v10 + 8) = inputIdx;
  if ( !settingInfoList )
    goto LABEL_12;
  v12 = this->fields.lastOpenSelectButton;
  if ( (unsigned int)v12 >= LODWORD(settingInfoList->max_length) )
LABEL_13:
    sub_2213CE4(useServantIdx);
  v13 = settingInfoList->m_Items[v12];
  if ( !v13 || (useServantIdx = v13->fields.useServantIdx) == 0 )
LABEL_12:
    sub_2213CDC(useServantIdx, *(_QWORD *)&inputIdx);
  UILabel__set_text(useServantIdx, inputName, 0);
}


void DebugInputUsePlayerTurnSkillComponent_SettingInfo___ctor(
        DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}