void DebugInputUsePlayerTurnSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *static_fields; // x8
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Array_o *v25; // x0
  System_RuntimeFieldHandle_o v26; // x1
  System_Array_o *v27; // x19
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Array_o *v43; // x0
  System_RuntimeFieldHandle_o v44; // x1
  System_Array_o *v45; // x19
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7

  if ( (byte_4CC8A03 & 1) == 0 )
  {
    sub_1C713B0(&bool___TypeInfo);
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&BattleCommand_TYPE___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__040A5A009F9B9D5E4771742174142E74FA2D3E0AAA3DF5717F01ADE338D75D0E);
    sub_1C713B0(&Field__PrivateImplementationDetails__DBA3401B79DDBA7DD7AE51264A01A80157347ACDBDF2EFB2F18600DD476CC9A9);
    byte_4CC8A03 = 1;
  }
  DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->NUM_PARTS_LENGTH = 9;
  v1 = sub_1C71458(int___TypeInfo, 9);
  static_fields = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  static_fields->SelectedUseServantIdxList = (struct System_Int32_array *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->SelectedUseServantIdxList, v1, v3, v4, v5, v6, v7, v8);
  v9 = sub_1C71458(int___TypeInfo, 9);
  v10 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v10->SelectedTargetServantIdxList = (struct System_Int32_array *)v9;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->SelectedTargetServantIdxList, v9, v11, v12, v13, v14, v15, v16);
  v17 = sub_1C71458(int___TypeInfo, 9);
  v18 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v18->SelectedSkillIdxList = (struct System_Int32_array *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v18->SelectedSkillIdxList, v17, v19, v20, v21, v22, v23, v24);
  v25 = (System_Array_o *)sub_1C71458(BattleCommand_TYPE___TypeInfo, 9);
  v26.fields.value = Field__PrivateImplementationDetails__DBA3401B79DDBA7DD7AE51264A01A80157347ACDBDF2EFB2F18600DD476CC9A9;
  v27 = v25;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v25, v26, 0);
  v28 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v28->SelectedCommandTypeList = (struct BattleCommand_TYPE_array *)v27;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->SelectedCommandTypeList, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  *(_WORD *)&DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->requestUsePlayerTurnFlg = 256;
  v35 = sub_1C71458(bool___TypeInfo, 9);
  v36 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v36->RequestUseSkillToggle = (struct System_Boolean_array *)v35;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v36->RequestUseSkillToggle, v35, v37, v38, v39, v40, v41, v42);
  v43 = (System_Array_o *)sub_1C71458(bool___TypeInfo, 9);
  v44.fields.value = Field__PrivateImplementationDetails__040A5A009F9B9D5E4771742174142E74FA2D3E0AAA3DF5717F01ADE338D75D0E;
  v45 = v43;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v43, v44, 0);
  v46 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v46->StarUseToggle = (struct System_Boolean_array *)v45;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v46->StarUseToggle, (int32_t)v45, v47, v48, v49, v50, v51, v52);
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
    sub_1C71608(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


void DebugInputUsePlayerTurnSkillComponent__ChangeCloseSelfWindow(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *closeSelfWindw; // x0
  bool value; // w0
  DebugInputUsePlayerTurnSkillComponent_c *v5; // x8
  bool v6; // w19

  if ( (byte_4CC8A00 & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC8A00 = 1;
  }
  closeSelfWindw = this->fields.closeSelfWindw;
  if ( !closeSelfWindw )
    sub_1C71608(0, method);
  value = UIToggle__get_value(closeSelfWindw, 0);
  v5 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v6 = value;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    v5 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  v5->static_fields->closeSelfWindowFlg = v6;
}


void DebugInputUsePlayerTurnSkillComponent__ChangeRequestUsePlayerTurn(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        const MethodInfo *method)
{
  UIToggle_o *requestUsePlayerTurn; // x0
  bool value; // w0
  DebugInputUsePlayerTurnSkillComponent_c *v5; // x8
  bool v6; // w19

  if ( (byte_4CC89FF & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC89FF = 1;
  }
  requestUsePlayerTurn = this->fields.requestUsePlayerTurn;
  if ( !requestUsePlayerTurn )
    sub_1C71608(0, method);
  value = UIToggle__get_value(requestUsePlayerTurn, 0);
  v5 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v6 = value;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    v5 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  v5->static_fields->requestUsePlayerTurnFlg = v6;
}


void DebugInputUsePlayerTurnSkillComponent__ChangeRequestUseSkillToggle(
        DebugInputUsePlayerTurnSkillComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  DebugInputUsePlayerTurnSkillComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  unsigned int v7; // w20
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v9; // x8
  UIToggle_o *requestUseSkillToggle; // x8
  __int64 v11; // x21

  v4 = this;
  if ( (byte_4CC8A01 & 1) == 0 )
  {
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC8A01 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_19;
  v6 = System_String__Substring_64077664(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this - 1 < 0 )
    return;
  settingInfoList = v4->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_19;
  if ( (signed int)v7 >= SLODWORD(settingInfoList->max_length) )
    return;
  this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    settingInfoList = v4->fields.settingInfoList;
    if ( !settingInfoList )
      goto LABEL_19;
    this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( v7 >= LODWORD(settingInfoList->max_length) )
    goto LABEL_20;
  v9 = settingInfoList->m_Items[v7];
  if ( !v9
    || (requestUseSkillToggle = v9->fields.requestUseSkillToggle) == 0
    || (v11 = *((_QWORD *)this[2].monitor + 6),
        this = (DebugInputUsePlayerTurnSkillComponent_o *)UIToggle__get_value(requestUseSkillToggle, 0),
        !v11) )
  {
LABEL_19:
    sub_1C71608(this, parentGameObject);
  }
  if ( v7 >= *(_DWORD *)(v11 + 24) )
LABEL_20:
    sub_1C71610(this);
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
  unsigned int v7; // w20
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v9; // x8
  UIToggle_o *onStarToggle; // x8
  __int64 v11; // x21

  v4 = this;
  if ( (byte_4CC8A02 & 1) == 0 )
  {
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC8A02 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_19;
  v6 = System_String__Substring_64077664(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this - 1 < 0 )
    return;
  settingInfoList = v4->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_19;
  if ( (signed int)v7 >= SLODWORD(settingInfoList->max_length) )
    return;
  this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    settingInfoList = v4->fields.settingInfoList;
    if ( !settingInfoList )
      goto LABEL_19;
    this = (DebugInputUsePlayerTurnSkillComponent_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( v7 >= LODWORD(settingInfoList->max_length) )
    goto LABEL_20;
  v9 = settingInfoList->m_Items[v7];
  if ( !v9
    || (onStarToggle = v9->fields.onStarToggle) == 0
    || (v11 = *((_QWORD *)this[2].monitor + 7),
        this = (DebugInputUsePlayerTurnSkillComponent_o *)UIToggle__get_value(onStarToggle, 0),
        !v11) )
  {
LABEL_19:
    sub_1C71608(this, parentGameObject);
  }
  if ( v7 >= *(_DWORD *)(v11 + 24) )
LABEL_20:
    sub_1C71610(this);
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
  unsigned int i; // w23
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

  if ( (byte_4CC89F5 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommand_TypeInfo);
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_2359/*"Arts"*/);
    sub_1C713B0(&StringLiteral_25630/*"番目"*/);
    byte_4CC89F5 = 1;
  }
  v42 = 0;
  requestUsePlayerTurn = this->fields.requestUsePlayerTurn;
  if ( !requestUsePlayerTurn )
    goto LABEL_87;
  requestUsePlayerTurn = (UIToggle_o *)UIToggle__get_value(requestUsePlayerTurn, 0);
  v4 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v5 = (char)requestUsePlayerTurn;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    v4 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( v4->static_fields->requestUsePlayerTurnFlg != (v5 & 1) )
  {
    v6 = this->fields.requestUsePlayerTurn;
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
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
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    v7 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  if ( v7->static_fields->closeSelfWindowFlg == (v8 & 1) )
    goto LABEL_19;
  closeSelfWindw = this->fields.closeSelfWindw;
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !closeSelfWindw )
LABEL_87:
    sub_1C71608(requestUsePlayerTurn, method);
  UIToggle__set_value(
    closeSelfWindw,
    DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->closeSelfWindowFlg,
    0);
LABEL_19:
  for ( i = 0; ; ++i )
  {
    requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
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
    if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
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
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
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
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    SelectedUseServantIdxList = v13->static_fields->SelectedUseServantIdxList;
    if ( !SelectedUseServantIdxList )
      goto LABEL_87;
    if ( i >= LODWORD(SelectedUseServantIdxList->max_length) )
      goto LABEL_88;
    v42 = SelectedUseServantIdxList->m_Items[i] + 1;
    v20 = System_Int32__ToString((int32_t)&v42, 0);
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_64031724(v20, (System_String_o *)StringLiteral_25630/*"番目"*/, 0);
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
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_64031724(v24, (System_String_o *)StringLiteral_25630/*"番目"*/, 0);
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
      if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
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
      sub_1C71610(requestUsePlayerTurn);
    v34 = v33->m_Items[i];
    if ( !v34 )
      goto LABEL_87;
    requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    commandTypeName = v34->fields.commandTypeName;
    if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
      requestUsePlayerTurn = (UIToggle_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    syncRoot = requestUsePlayerTurn[1].fields.onChange->fields._syncRoot;
    if ( !syncRoot )
      goto LABEL_87;
    if ( i >= LODWORD(syncRoot[1].monitor) )
      goto LABEL_88;
    v37 = *((_DWORD *)&syncRoot[2].klass + (int)i);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    requestUsePlayerTurn = (UIToggle_o *)BattleCommand__GetCommandTypeName(
                                           v37,
                                           (System_String_o *)StringLiteral_2359/*"Arts"*/,
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
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_64031724(v39, (System_String_o *)StringLiteral_25630/*"番目"*/, 0);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DebugInputUsePlayerTurnSkillComponent_c *v11; // x0
  int v12; // w23
  struct UnityEngine_Transform_o **p_debugMenuTran; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1

  if ( (byte_4CC89F4 & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC89F4 = 1;
  }
  v11 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v12 = -1;
  do
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    ++v12;
  }
  while ( v12 < v11->static_fields->NUM_PARTS_LENGTH );
  this->fields.data = inputData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)inputData,
    (int32_t)inputDebugMenuTran,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = &this->fields.debugMenuTran;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.debugMenuTran,
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
    sub_1C71608(gameObject, v21);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v19; // x1
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v30; // x1
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v41; // x1
  Il2CppClass **v42; // x0
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v44; // x22
  const MethodInfo *v45; // x3

  v4 = this;
  if ( (byte_4CC89FD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__string__TypeInfo);
    sub_1C713B0(&BattleCommand_TypeInfo);
    sub_1C713B0(&Method_DebugInputUsePlayerTurnSkillComponent_TapCommandTypeSelectCallback__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C713B0(&StringLiteral_2359/*"Arts"*/);
    byte_4CC89FD = 1;
  }
  if ( !parentGameObject )
    goto LABEL_29;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_29;
  v6 = System_String__Substring_64077664(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
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
    sub_1C71608(this, parentGameObject);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v4->fields.lastOpenSelectButton = v7;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                        1,
                                                        (System_String_o *)StringLiteral_2359/*"Arts"*/,
                                                        0);
    if ( v9 )
    {
      items = v9->fields._items;
      v17 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        v19 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)this,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
        }
        this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                            2,
                                                            (System_String_o *)StringLiteral_2359/*"Arts"*/,
                                                            0);
        v27 = v9->fields._items;
        v28 = Method_System_Collections_Generic_List_string__Add__;
        ++v9->fields._version;
        if ( v27 )
        {
          v29 = v9->fields._size;
          v30 = this;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)this,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v27->obj.klass + v29;
            v9->fields._size = v29 + 1;
            v31[4] = (Il2CppClass *)v30;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v30, v21, v22, v23, v24, v25, v26);
          }
          this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                              3,
                                                              (System_String_o *)StringLiteral_2359/*"Arts"*/,
                                                              0);
          v38 = v9->fields._items;
          v39 = Method_System_Collections_Generic_List_string__Add__;
          ++v9->fields._version;
          if ( v38 )
          {
            v40 = v9->fields._size;
            v41 = this;
            if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)this,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &v38->obj.klass + v40;
              v9->fields._size = v40 + 1;
              v42[4] = (Il2CppClass *)v41;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)v41, v32, v33, v34, v35, v36, v37);
            }
            attackCardSelectWindow = v4->fields.attackCardSelectWindow;
            v44 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_int__string__TypeInfo);
            System_Action_int__object____ctor(
              v44,
              (Il2CppObject *)v4,
              Method_DebugInputUsePlayerTurnSkillComponent_TapCommandTypeSelectCallback__,
              0);
            if ( attackCardSelectWindow )
            {
              DebugAttackCardSelectComponent__Open(
                attackCardSelectWindow,
                (System_Action_int__string__o *)v44,
                (System_Collections_Generic_List_string__o *)v9,
                v45);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Behaviour_o *v19; // x1
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x3
  bool v22; // nf
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC89F8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&StringLiteral_25630/*"番目"*/);
    byte_4CC89F8 = 1;
  }
  attackCardSelectWindow = (UnityEngine_Behaviour_o *)this->fields.attackCardSelectWindow;
  if ( !attackCardSelectWindow )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(attackCardSelectWindow, 0) )
    return;
  this->fields.lastOpenSelectButton = buttonIdx;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  v23 = 1;
  do
  {
    v9 = System_Int32__ToString((int32_t)&v23, 0);
    attackCardSelectWindow = (UnityEngine_Behaviour_o *)System_String__Concat_64031724(
                                                          v9,
                                                          (System_String_o *)StringLiteral_25630/*"番目"*/,
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
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v19;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
    }
    v22 = v23 - 3 < 0;
    ++v23;
  }
  while ( v22 != __OFSUB__(v23, 4) );
  attackCardSelectWindow = (UnityEngine_Behaviour_o *)this->fields.attackCardSelectWindow;
  if ( !attackCardSelectWindow )
LABEL_15:
    sub_1C71608(attackCardSelectWindow, *(_QWORD *)&buttonIdx);
  DebugAttackCardSelectComponent__Open(
    (DebugAttackCardSelectComponent_o *)attackCardSelectWindow,
    callback,
    (System_Collections_Generic_List_string__o *)v8,
    v21);
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
  if ( (byte_4CC89FB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C713B0(&Method_DebugInputUsePlayerTurnSkillComponent_TapSkillSelectCallback__);
    byte_4CC89FB = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_64077664(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_1C71608(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_int__string__TypeInfo);
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
  if ( (byte_4CC89F7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C713B0(&Method_DebugInputUsePlayerTurnSkillComponent_TapTargetServantSelectCallback__);
    byte_4CC89F7 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_64077664(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_1C71608(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_int__string__TypeInfo);
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
  if ( (byte_4CC89F6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C713B0(&Method_DebugInputUsePlayerTurnSkillComponent_TapUseServantSelectCallback__);
    byte_4CC89F6 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_64077664(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_1C71608(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_int__string__TypeInfo);
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
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v12; // x8

  if ( (byte_4CC89FE & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC89FE = 1;
  }
  commandTypeName = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    commandTypeName = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  m_target = commandTypeName->fields.onChange->fields.m_target;
  if ( !m_target )
    goto LABEL_12;
  if ( LODWORD(m_target[1].monitor) <= inputIdx )
    goto LABEL_13;
  *((_DWORD *)&m_target[2].klass + inputIdx) = inputCommandType;
  settingInfoList = this->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_12;
  if ( LODWORD(settingInfoList->max_length) <= inputIdx )
LABEL_13:
    sub_1C71610(commandTypeName);
  v12 = settingInfoList->m_Items[inputIdx];
  if ( !v12 || (commandTypeName = v12->fields.commandTypeName) == 0 )
LABEL_12:
    sub_1C71608(commandTypeName, *(_QWORD *)&inputIdx);
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
  int32_t v5; // w9

  if ( inputIdx == 1 )
    v5 = 2;
  else
    v5 = 3;
  if ( !inputIdx )
    v5 = 1;
  DebugInputUsePlayerTurnSkillComponent__SetCommandType(this, this->fields.lastOpenSelectButton, v5, inputName, v4);
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
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  __int64 v11; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v12; // x8

  if ( (byte_4CC89FC & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC89FC = 1;
  }
  useSkillIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    useSkillIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  invoke_impl = useSkillIdx->fields.onChange->fields.invoke_impl;
  if ( !invoke_impl )
    goto LABEL_12;
  lastOpenSelectButton = this->fields.lastOpenSelectButton;
  if ( (unsigned int)lastOpenSelectButton >= *(_DWORD *)(invoke_impl + 24) )
    goto LABEL_13;
  *(_DWORD *)(invoke_impl + 4 * lastOpenSelectButton + 32) = inputIdx;
  settingInfoList = this->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_12;
  v11 = this->fields.lastOpenSelectButton;
  if ( (unsigned int)v11 >= LODWORD(settingInfoList->max_length) )
LABEL_13:
    sub_1C71610(useSkillIdx);
  v12 = settingInfoList->m_Items[v11];
  if ( !v12 || (useSkillIdx = v12->fields.useSkillIdx) == 0 )
LABEL_12:
    sub_1C71608(useSkillIdx, *(_QWORD *)&inputIdx);
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
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  __int64 v11; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v12; // x8

  if ( (byte_4CC89FA & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC89FA = 1;
  }
  targetServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    targetServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  method_ptr = targetServantIdx->fields.onChange->fields.method_ptr;
  if ( !method_ptr )
    goto LABEL_12;
  lastOpenSelectButton = this->fields.lastOpenSelectButton;
  if ( (unsigned int)lastOpenSelectButton >= *(_DWORD *)(method_ptr + 24) )
    goto LABEL_13;
  *(_DWORD *)(method_ptr + 4 * lastOpenSelectButton + 32) = inputIdx;
  settingInfoList = this->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_12;
  v11 = this->fields.lastOpenSelectButton;
  if ( (unsigned int)v11 >= LODWORD(settingInfoList->max_length) )
LABEL_13:
    sub_1C71610(targetServantIdx);
  v12 = settingInfoList->m_Items[v11];
  if ( !v12 || (targetServantIdx = v12->fields.targetServantIdx) == 0 )
LABEL_12:
    sub_1C71608(targetServantIdx, *(_QWORD *)&inputIdx);
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
  struct DebugInputUsePlayerTurnSkillComponent_SettingInfo_array *settingInfoList; // x8
  __int64 v11; // x9
  DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *v12; // x8

  if ( (byte_4CC89F9 & 1) == 0 )
  {
    sub_1C713B0(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CC89F9 = 1;
  }
  useServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  if ( !DebugInputUsePlayerTurnSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    useServantIdx = (UILabel_o *)DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  }
  monitor = useServantIdx->fields.onChange->monitor;
  if ( !monitor )
    goto LABEL_12;
  lastOpenSelectButton = this->fields.lastOpenSelectButton;
  if ( (unsigned int)lastOpenSelectButton >= monitor[6] )
    goto LABEL_13;
  monitor[lastOpenSelectButton + 8] = inputIdx;
  settingInfoList = this->fields.settingInfoList;
  if ( !settingInfoList )
    goto LABEL_12;
  v11 = this->fields.lastOpenSelectButton;
  if ( (unsigned int)v11 >= LODWORD(settingInfoList->max_length) )
LABEL_13:
    sub_1C71610(useServantIdx);
  v12 = settingInfoList->m_Items[v11];
  if ( !v12 || (useServantIdx = v12->fields.useServantIdx) == 0 )
LABEL_12:
    sub_1C71608(useServantIdx, *(_QWORD *)&inputIdx);
  UILabel__set_text(useServantIdx, inputName, 0);
}


void DebugInputUsePlayerTurnSkillComponent_SettingInfo___ctor(
        DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}