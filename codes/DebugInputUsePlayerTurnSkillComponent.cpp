void DebugInputUsePlayerTurnSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *static_fields; // x8
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v6; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Array_o *v13; // x0
  System_RuntimeFieldHandle_o v14; // x1
  System_Array_o *v15; // x19
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Array_o *v23; // x0
  System_RuntimeFieldHandle_o v24; // x1
  System_Array_o *v25; // x19
  struct DebugInputUsePlayerTurnSkillComponent_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4CB78DA & 1) == 0 )
  {
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&BattleCommand_TYPE___TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__040A5A009F9B9D5E4771742174142E74FA2D3E0AAA3DF5717F01ADE338D75D0E);
    sub_1C6BA08(&Field__PrivateImplementationDetails__DBA3401B79DDBA7DD7AE51264A01A80157347ACDBDF2EFB2F18600DD476CC9A9);
    byte_4CB78DA = 1;
  }
  DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->NUM_PARTS_LENGTH = 9;
  v1 = sub_1C6BAB0(int___TypeInfo, 9);
  static_fields = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  static_fields->SelectedUseServantIdxList = (struct System_Int32_array *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SelectedUseServantIdxList, v1, v3, v4);
  v5 = sub_1C6BAB0(int___TypeInfo, 9);
  v6 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v6->SelectedTargetServantIdxList = (struct System_Int32_array *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->SelectedTargetServantIdxList, v5, v7, v8);
  v9 = sub_1C6BAB0(int___TypeInfo, 9);
  v10 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v10->SelectedSkillIdxList = (struct System_Int32_array *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->SelectedSkillIdxList, v9, v11, v12);
  v13 = (System_Array_o *)sub_1C6BAB0(BattleCommand_TYPE___TypeInfo, 9);
  v14.fields.value = Field__PrivateImplementationDetails__DBA3401B79DDBA7DD7AE51264A01A80157347ACDBDF2EFB2F18600DD476CC9A9;
  v15 = v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v13, v14, 0);
  v16 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v16->SelectedCommandTypeList = (struct BattleCommand_TYPE_array *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->SelectedCommandTypeList, (int32_t)v15, v17, v18);
  *(_WORD *)&DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields->requestUsePlayerTurnFlg = 256;
  v19 = sub_1C6BAB0(bool___TypeInfo, 9);
  v20 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v20->RequestUseSkillToggle = (struct System_Boolean_array *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v20->RequestUseSkillToggle, v19, v21, v22);
  v23 = (System_Array_o *)sub_1C6BAB0(bool___TypeInfo, 9);
  v24.fields.value = Field__PrivateImplementationDetails__040A5A009F9B9D5E4771742174142E74FA2D3E0AAA3DF5717F01ADE338D75D0E;
  v25 = v23;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v23, v24, 0);
  v26 = DebugInputUsePlayerTurnSkillComponent_TypeInfo->static_fields;
  v26->StarUseToggle = (struct System_Boolean_array *)v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v26->StarUseToggle, (int32_t)v25, v27, v28);
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
    sub_1C6BC60(debugMenuTran, method);
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

  if ( (byte_4CB78D7 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D7 = 1;
  }
  closeSelfWindw = this->fields.closeSelfWindw;
  if ( !closeSelfWindw )
    sub_1C6BC60(0, method);
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

  if ( (byte_4CB78D6 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D6 = 1;
  }
  requestUsePlayerTurn = this->fields.requestUsePlayerTurn;
  if ( !requestUsePlayerTurn )
    sub_1C6BC60(0, method);
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
  if ( (byte_4CB78D8 & 1) == 0 )
  {
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D8 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_19;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
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
    sub_1C6BC60(this, parentGameObject);
  }
  if ( v7 >= *(_DWORD *)(v11 + 24) )
LABEL_20:
    sub_1C6BC68(this);
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
  if ( (byte_4CB78D9 & 1) == 0 )
  {
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D9 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_19;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_19;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
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
    sub_1C6BC60(this, parentGameObject);
  }
  if ( v7 >= *(_DWORD *)(v11 + 24) )
LABEL_20:
    sub_1C6BC68(this);
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

  if ( (byte_4CB78CC & 1) == 0 )
  {
    sub_1C6BA08(&BattleCommand_TypeInfo);
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_2357/*"Arts"*/);
    sub_1C6BA08(&StringLiteral_25610/*"番目"*/);
    byte_4CB78CC = 1;
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
    sub_1C6BC60(requestUsePlayerTurn, method);
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
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_63966792(v20, (System_String_o *)StringLiteral_25610/*"番目"*/, 0);
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
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_63966792(v24, (System_String_o *)StringLiteral_25610/*"番目"*/, 0);
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
      sub_1C6BC68(requestUsePlayerTurn);
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
                                           (System_String_o *)StringLiteral_2357/*"Arts"*/,
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
    requestUsePlayerTurn = (UIToggle_o *)System_String__Concat_63966792(v39, (System_String_o *)StringLiteral_25610/*"番目"*/, 0);
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
  DebugInputUsePlayerTurnSkillComponent_c *v7; // x0
  int v8; // w23
  struct UnityEngine_Transform_o **p_debugMenuTran; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1

  if ( (byte_4CB78CB & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78CB = 1;
  }
  v7 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
  v8 = -1;
  do
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = DebugInputUsePlayerTurnSkillComponent_TypeInfo;
    }
    ++v8;
  }
  while ( v8 < v7->static_fields->NUM_PARTS_LENGTH );
  this->fields.data = inputData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)inputData, (int32_t)inputDebugMenuTran, method);
  this->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = &this->fields.debugMenuTran;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.debugMenuTran, (int32_t)inputDebugMenuTran, v10, v11);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)*p_debugMenuTran) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.attackCardSelectWindow) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C6BC60(gameObject, v13);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v15; // x1
  Il2CppClass **v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v22; // x1
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  DebugInputUsePlayerTurnSkillComponent_o *v29; // x1
  Il2CppClass **v30; // x0
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v32; // x22
  const MethodInfo *v33; // x3

  v4 = this;
  if ( (byte_4CB78D4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__TypeInfo);
    sub_1C6BA08(&BattleCommand_TypeInfo);
    sub_1C6BA08(&Method_DebugInputUsePlayerTurnSkillComponent_TapCommandTypeSelectCallback__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C6BA08(&StringLiteral_2357/*"Arts"*/);
    byte_4CB78D4 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_29;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_29;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
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
    sub_1C6BC60(this, parentGameObject);
  if ( !UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v4->fields.lastOpenSelectButton = v7;
    v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                        1,
                                                        (System_String_o *)StringLiteral_2357/*"Arts"*/,
                                                        0);
    if ( v9 )
    {
      items = v9->fields._items;
      v13 = Method_System_Collections_Generic_List_string__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        v15 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)this,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v15;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
        }
        this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                            2,
                                                            (System_String_o *)StringLiteral_2357/*"Arts"*/,
                                                            0);
        v19 = v9->fields._items;
        v20 = Method_System_Collections_Generic_List_string__Add__;
        ++v9->fields._version;
        if ( v19 )
        {
          v21 = v9->fields._size;
          v22 = this;
          if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)this,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v19->obj.klass + v21;
            v9->fields._size = v21 + 1;
            v23[4] = (Il2CppClass *)v22;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
          }
          this = (DebugInputUsePlayerTurnSkillComponent_o *)BattleCommand__GetCommandTypeName(
                                                              3,
                                                              (System_String_o *)StringLiteral_2357/*"Arts"*/,
                                                              0);
          v26 = v9->fields._items;
          v27 = Method_System_Collections_Generic_List_string__Add__;
          ++v9->fields._version;
          if ( v26 )
          {
            v28 = v9->fields._size;
            v29 = this;
            if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)this,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &v26->obj.klass + v28;
              v9->fields._size = v28 + 1;
              v30[4] = (Il2CppClass *)v29;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v29, v24, v25);
            }
            attackCardSelectWindow = v4->fields.attackCardSelectWindow;
            v32 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__string__TypeInfo);
            System_Action_int__object____ctor(
              v32,
              (Il2CppObject *)v4,
              Method_DebugInputUsePlayerTurnSkillComponent_TapCommandTypeSelectCallback__,
              0);
            if ( attackCardSelectWindow )
            {
              DebugAttackCardSelectComponent__Open(
                attackCardSelectWindow,
                (System_Action_int__string__o *)v32,
                (System_Collections_Generic_List_string__o *)v9,
                v33);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UnityEngine_Behaviour_o *v15; // x1
  Il2CppClass **v16; // x0
  const MethodInfo *v17; // x3
  bool v18; // nf
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB78CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_25610/*"番目"*/);
    byte_4CB78CF = 1;
  }
  attackCardSelectWindow = (UnityEngine_Behaviour_o *)this->fields.attackCardSelectWindow;
  if ( !attackCardSelectWindow )
    goto LABEL_15;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(attackCardSelectWindow, 0) )
    return;
  this->fields.lastOpenSelectButton = buttonIdx;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  v19 = 1;
  do
  {
    v9 = System_Int32__ToString((int32_t)&v19, 0);
    attackCardSelectWindow = (UnityEngine_Behaviour_o *)System_String__Concat_63966792(
                                                          v9,
                                                          (System_String_o *)StringLiteral_25610/*"番目"*/,
                                                          0);
    if ( !v8 )
      goto LABEL_15;
    items = v8->fields._items;
    v13 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_15;
    size = v8->fields._size;
    v15 = attackCardSelectWindow;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)attackCardSelectWindow,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v15;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
    }
    v18 = v19 - 3 < 0;
    ++v19;
  }
  while ( v18 != __OFSUB__(v19, 4) );
  attackCardSelectWindow = (UnityEngine_Behaviour_o *)this->fields.attackCardSelectWindow;
  if ( !attackCardSelectWindow )
LABEL_15:
    sub_1C6BC60(attackCardSelectWindow, *(_QWORD *)&buttonIdx);
  DebugAttackCardSelectComponent__Open(
    (DebugAttackCardSelectComponent_o *)attackCardSelectWindow,
    callback,
    (System_Collections_Generic_List_string__o *)v8,
    v17);
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
  if ( (byte_4CB78D2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C6BA08(&Method_DebugInputUsePlayerTurnSkillComponent_TapSkillSelectCallback__);
    byte_4CB78D2 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_1C6BC60(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__string__TypeInfo);
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
  if ( (byte_4CB78CE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C6BA08(&Method_DebugInputUsePlayerTurnSkillComponent_TapTargetServantSelectCallback__);
    byte_4CB78CE = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_1C6BC60(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__string__TypeInfo);
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
  if ( (byte_4CB78CD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__TypeInfo);
    this = (DebugInputUsePlayerTurnSkillComponent_o *)sub_1C6BA08(&Method_DebugInputUsePlayerTurnSkillComponent_TapUseServantSelectCallback__);
    byte_4CB78CD = 1;
  }
  if ( !parentGameObject )
    goto LABEL_11;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)UnityEngine_Object__get_name(
                                                      (UnityEngine_Object_o *)parentGameObject,
                                                      0);
  if ( !this || !name )
    goto LABEL_11;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputUsePlayerTurnSkillComponent_o *)System_Int32__Parse(v6, 0);
  v7 = (_DWORD)this - 1;
  if ( (int)this < 1 )
    return;
  klass = v4[3].klass;
  if ( !klass )
LABEL_11:
    sub_1C6BC60(this, parentGameObject);
  if ( (int)this <= SLODWORD(klass->_1.namespaze) )
  {
    v9 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__string__TypeInfo);
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

  if ( (byte_4CB78D5 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D5 = 1;
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
    sub_1C6BC68(commandTypeName);
  v12 = settingInfoList->m_Items[inputIdx];
  if ( !v12 || (commandTypeName = v12->fields.commandTypeName) == 0 )
LABEL_12:
    sub_1C6BC60(commandTypeName, *(_QWORD *)&inputIdx);
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

  if ( (byte_4CB78D3 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D3 = 1;
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
    sub_1C6BC68(useSkillIdx);
  v12 = settingInfoList->m_Items[v11];
  if ( !v12 || (useSkillIdx = v12->fields.useSkillIdx) == 0 )
LABEL_12:
    sub_1C6BC60(useSkillIdx, *(_QWORD *)&inputIdx);
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

  if ( (byte_4CB78D1 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D1 = 1;
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
    sub_1C6BC68(targetServantIdx);
  v12 = settingInfoList->m_Items[v11];
  if ( !v12 || (targetServantIdx = v12->fields.targetServantIdx) == 0 )
LABEL_12:
    sub_1C6BC60(targetServantIdx, *(_QWORD *)&inputIdx);
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

  if ( (byte_4CB78D0 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputUsePlayerTurnSkillComponent_TypeInfo);
    byte_4CB78D0 = 1;
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
    sub_1C6BC68(useServantIdx);
  v12 = settingInfoList->m_Items[v11];
  if ( !v12 || (useServantIdx = v12->fields.useServantIdx) == 0 )
LABEL_12:
    sub_1C6BC60(useServantIdx, *(_QWORD *)&inputIdx);
  UILabel__set_text(useServantIdx, inputName, 0);
}


void DebugInputUsePlayerTurnSkillComponent_SettingInfo___ctor(
        DebugInputUsePlayerTurnSkillComponent_SettingInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}