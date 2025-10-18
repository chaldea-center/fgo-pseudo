void SvtEquipRecommenededConfigDialog___ctor(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1

  if ( (byte_4C3D13C & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17439/*"btn_bg_04"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    sub_1C37058(&StringLiteral_17438/*"btn_bg_03"*/);
    byte_4C3D13C = 1;
  }
  v3 = StringLiteral_17438/*"btn_bg_03"*/;
  this->fields.onBtnSpriteName = (struct System_String_o *)StringLiteral_17438/*"btn_bg_03"*/;
  sub_1C36FFC(&this->fields.onBtnSpriteName, v3);
  v4 = StringLiteral_17439/*"btn_bg_04"*/;
  this->fields.offBtnSpriteName = (struct System_String_o *)StringLiteral_17439/*"btn_bg_04"*/;
  sub_1C36FFC(&this->fields.offBtnSpriteName, v4);
  v5 = StringLiteral_17507/*"btn_on"*/;
  this->fields.autoSetOnBtnSpriteName = (struct System_String_o *)StringLiteral_17507/*"btn_on"*/;
  sub_1C36FFC(&this->fields.autoSetOnBtnSpriteName, v5);
  v6 = StringLiteral_17506/*"btn_off"*/;
  this->fields.autoSetOffSpriteName = (struct System_String_o *)StringLiteral_17506/*"btn_off"*/;
  sub_1C36FFC(&this->fields.autoSetOffSpriteName, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SvtEquipRecommenededConfigDialog__Close(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3D131 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BaseDialog_Init__);
    byte_4C3D131 = 1;
  }
  this->fields.closeAction = 0;
  sub_1C36FFC(&this->fields.closeAction, 0);
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BaseDialog_Init__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void SvtEquipRecommenededConfigDialog__Close_31590580(
        SvtEquipRecommenededConfigDialog_o *this,
        bool isExe,
        const MethodInfo *method)
{
  __int64 v5; // x20
  RecommendedSvtEquipConfigSaveData_o *IsNullOrEmpty; // x0
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x22
  System_Collections_Generic_List_int__o *selectCombineStatusList; // x21
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x8
  System_Collections_Generic_List_T__o *v11; // x22
  SvtEquipRecommenededConfigDialog___c_c *v12; // x0
  System_Func_int__bool__o *_9__39_0; // x23
  Il2CppObject *v14; // x24
  struct SvtEquipRecommenededConfigDialog___c_StaticFields *static_fields; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x24
  CommonConfirmDialog_ClickDelegate_o *v21; // x25
  struct System_Action_bool__o *closeAction; // x8

  if ( (byte_4C3D13A & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog___c__Close_b__39_0__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_0__Close_b__1__);
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_TypeInfo);
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c_TypeInfo);
    sub_1C37058(&StringLiteral_11017/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_11018/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_TITLE"*/);
    byte_4C3D13A = 1;
  }
  v5 = sub_1C372A4(SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  IsNullOrEmpty = (RecommendedSvtEquipConfigSaveData_o *)sub_1C36FFC(v5 + 16, this);
  *(_BYTE *)(v5 + 24) = isExe;
  saveData = this->fields.saveData;
  if ( !saveData )
    goto LABEL_32;
  selectRarityList = saveData->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_32;
  selectCombineStatusList = saveData->fields.selectCombineStatusList;
  if ( selectRarityList->fields._size >= 1 )
    System_Collections_Generic_List_int___Sort(
      saveData->fields.selectRarityList,
      (const MethodInfo_3787944 *)Method_System_Collections_Generic_List_int__Sort__);
  if ( !selectCombineStatusList )
    goto LABEL_32;
  if ( selectCombineStatusList->fields._size >= 1 )
    System_Collections_Generic_List_int___Sort(
      selectCombineStatusList,
      (const MethodInfo_3787944 *)Method_System_Collections_Generic_List_int__Sort__);
  if ( *(_BYTE *)(v5 + 24) )
    goto LABEL_24;
  IsNullOrEmpty = this->fields.saveData;
  if ( !IsNullOrEmpty )
    goto LABEL_32;
  if ( RecommendedSvtEquipConfigSaveData__IsAutoSetOn(IsNullOrEmpty, 0) )
  {
LABEL_24:
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)selectRarityList, 0) )
      goto LABEL_25;
    IsNullOrEmpty = (RecommendedSvtEquipConfigSaveData_o *)BasicHelper__IsNullOrEmpty(
                                                             (System_Collections_ICollection_o *)selectCombineStatusList,
                                                             0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      goto LABEL_25;
    v10 = this->fields.saveData;
    if ( !v10 )
      goto LABEL_32;
    v11 = (System_Collections_Generic_List_T__o *)v10->fields.selectRarityList;
    v12 = SvtEquipRecommenededConfigDialog___c_TypeInfo;
    if ( !SvtEquipRecommenededConfigDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtEquipRecommenededConfigDialog___c_TypeInfo);
      v12 = SvtEquipRecommenededConfigDialog___c_TypeInfo;
    }
    _9__39_0 = v12->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = SvtEquipRecommenededConfigDialog___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__39_0 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__39_0, v14, Method_SvtEquipRecommenededConfigDialog___c__Close_b__39_0__, 0);
      static_fields = SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = _9__39_0;
      sub_1C36FFC(&static_fields->__9__39_0, _9__39_0);
    }
    if ( BasicHelper__Any_int_(
           v11,
           (System_Func_T__bool__o *)_9__39_0,
           (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___)
      || System_Collections_Generic_List_int___Contains(
           selectCombineStatusList,
           1,
           (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
LABEL_25:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_11018/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_TITLE"*/, 0);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11017/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_MESSAGE"*/, 0);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
      v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v21,
        (Il2CppObject *)v5,
        Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_0__Close_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_31207916(
          (CommonUI_o *)Instance,
          v17,
          v18,
          v19,
          v20,
          0,
          v21,
          30,
          26,
          180.0,
          13.0,
          0,
          0,
          0);
        return;
      }
LABEL_32:
      sub_1C372B4(IsNullOrEmpty);
    }
  }
  IsNullOrEmpty = this->fields.saveData;
  if ( !IsNullOrEmpty )
    goto LABEL_32;
  RecommendedSvtEquipConfigSaveData__SaveConfig(IsNullOrEmpty, this->fields.saveData, 0);
  closeAction = this->fields.closeAction;
  if ( !closeAction )
    goto LABEL_32;
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeAction->fields.invoke_impl)(
    closeAction->fields.method_code,
    *(unsigned __int8 *)(v5 + 24),
    closeAction->fields.method);
}


void SvtEquipRecommenededConfigDialog__OnClickAutoSet(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8

  if ( (byte_4C3D135 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__);
    byte_4C3D135 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      sub_1C372B4(v5);
    saveData->fields.isAutoSet = saveData->fields.isAutoSet != 1;
    SvtEquipRecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickCancel(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3D139 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickCancel__);
    byte_4C3D139 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SvtEquipRecommenededConfigDialog__Close_31590580(this, 0, v5);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickClear(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectTypeList; // x9
  int v9; // w10
  struct System_Collections_Generic_List_int__o *selectCombineStatusList; // x9
  int v11; // w10
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v13; // w10

  if ( (byte_4C3D137 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickClear__);
    byte_4C3D137 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      goto LABEL_12;
    selectTypeList = saveData->fields.selectTypeList;
    if ( !selectTypeList )
      goto LABEL_12;
    v9 = selectTypeList->fields._version + 1;
    selectTypeList->fields._size = 0;
    selectTypeList->fields._version = v9;
    selectCombineStatusList = saveData->fields.selectCombineStatusList;
    if ( !selectCombineStatusList
      || (v11 = selectCombineStatusList->fields._version + 1,
          selectCombineStatusList->fields._size = 0,
          selectCombineStatusList->fields._version = v11,
          (selectRarityList = saveData->fields.selectRarityList) == 0) )
    {
LABEL_12:
      sub_1C372B4(v5);
    }
    v13 = selectRarityList->fields._version + 1;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = v13;
    saveData->fields.isAutoSet = 0;
    SvtEquipRecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickCombineStatus(
        SvtEquipRecommenededConfigDialog_o *this,
        int32_t status,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Collections_Generic_List_int__o *selectCombineStatusList; // x0
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  const MethodInfo *v9; // x1
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x9
  char v11; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C3D134 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__);
    byte_4C3D134 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectCombineStatusList = saveData->fields.selectCombineStatusList;
      if ( selectCombineStatusList )
      {
        selectCombineStatusList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                              selectCombineStatusList,
                                                                              status,
                                                                              (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( v10 )
        {
          v11 = (char)selectCombineStatusList;
          selectCombineStatusList = v10->fields.selectCombineStatusList;
          if ( selectCombineStatusList )
          {
            if ( (v11 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectCombineStatusList,
                status,
                (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              SvtEquipRecommenededConfigDialog__SetButtonState(this, v9);
              return;
            }
            items = selectCombineStatusList->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++selectCombineStatusList->fields._version;
            if ( items )
            {
              size = selectCombineStatusList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectCombineStatusList,
                  status,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                selectCombineStatusList->fields._size = size + 1;
                items->m_Items[size] = status;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1C372B4(selectCombineStatusList);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickDecide(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3D138 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickDecide__);
    byte_4C3D138 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SvtEquipRecommenededConfigDialog__Close_31590580(this, 1, v5);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickEquipType(
        SvtEquipRecommenededConfigDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Collections_Generic_List_int__o *selectTypeList; // x0
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  const MethodInfo *v9; // x1
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x9
  char v11; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C3D132 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__);
    byte_4C3D132 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectTypeList = saveData->fields.selectTypeList;
      if ( selectTypeList )
      {
        selectTypeList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                     selectTypeList,
                                                                     type,
                                                                     (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( v10 )
        {
          v11 = (char)selectTypeList;
          selectTypeList = v10->fields.selectTypeList;
          if ( selectTypeList )
          {
            if ( (v11 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectTypeList,
                type,
                (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              SvtEquipRecommenededConfigDialog__SetButtonState(this, v9);
              return;
            }
            items = selectTypeList->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++selectTypeList->fields._version;
            if ( items )
            {
              size = selectTypeList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectTypeList,
                  type,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                selectTypeList->fields._size = size + 1;
                items->m_Items[size] = type;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1C372B4(selectTypeList);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickRarity(
        SvtEquipRecommenededConfigDialog_o *this,
        int32_t rarity,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  const MethodInfo *v9; // x1
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x9
  char v11; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C3D133 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickRarity__);
    byte_4C3D133 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_SvtEquipRecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickRarity__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( v10 )
        {
          v11 = (char)selectRarityList;
          selectRarityList = v10->fields.selectRarityList;
          if ( selectRarityList )
          {
            if ( (v11 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              SvtEquipRecommenededConfigDialog__SetButtonState(this, v9);
              return;
            }
            items = selectRarityList->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                selectRarityList->fields._size = size + 1;
                items->m_Items[size] = rarity;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1C372B4(selectRarityList);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickReset(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C3D136 & 1) == 0 )
  {
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog_OnClickReset__);
    byte_4C3D136 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_SvtEquipRecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SvtEquipRecommenededConfigDialog__SetInitConfig(this, v5);
    SvtEquipRecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void SvtEquipRecommenededConfigDialog__OpenRecommendedConfig(
        SvtEquipRecommenededConfigDialog_o *this,
        System_Action_bool__o *closeCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *saveData; // x0
  UILabel_o *messageLabel; // x20
  UILabel_o *typeLabel; // x20
  struct UILabel_array *typeButtonLabelList; // x9
  int v10; // w8
  __int64 v11; // x20
  struct UILabel_array *v12; // x8
  UILabel_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x22
  struct UICommonButton_array *typeButtonList; // x8
  unsigned int v17; // w9
  UICommonButton_o *v18; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int32_t size; // w2
  int v21; // w11
  UICommonButton_o *v22; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  EventDelegate_Callback_o *v24; // x22
  EventDelegate_o *v25; // x20
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  UILabel_o *rarityLabel; // x20
  struct UILabel_array *rarityButtonLabelList; // x8
  int v32; // w9
  __int64 v33; // x20
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  unsigned int v38; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v40; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v41; // x10
  int32_t v42; // w2
  int v43; // w11
  UICommonButton_o *v44; // x8
  System_Collections_Generic_List_object__o *v45; // x21
  EventDelegate_Callback_o *v46; // x22
  EventDelegate_o *v47; // x20
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  UILabel_o *combineStatusLabel; // x20
  struct UILabel_array *combineStatusButtonLabelList; // x8
  int v54; // w9
  __int64 v55; // x20
  struct UILabel_array *v56; // x8
  UILabel_o *v57; // x21
  System_String_o *v58; // x0
  System_String_o *v59; // x22
  unsigned int v60; // w9
  struct UICommonButton_array *combineStatusButtonList; // x8
  UICommonButton_o *v62; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v63; // x10
  int32_t v64; // w2
  int v65; // w11
  UICommonButton_o *v66; // x8
  System_Collections_Generic_List_object__o *v67; // x21
  EventDelegate_Callback_o *v68; // x22
  EventDelegate_o *v69; // x20
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  UILabel_o *autoSetLabel; // x20
  UILabel_o *resetButtonLabel; // x20
  UILabel_o *clearButtonLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  RecommendedSvtEquipConfigSaveData_o *v79; // x21
  const MethodInfo *v80; // x1
  struct RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  const MethodInfo *v82; // x1
  unsigned int v83; // [xsp+4h] [xbp-6Ch] BYREF
  unsigned int v84; // [xsp+8h] [xbp-68h] BYREF
  unsigned int v85; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C3D12E & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_0__OpenRecommendedConfig_b__0__);
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c__DisplayClass27_0_TypeInfo);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_1__OpenRecommendedConfig_b__1__);
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c__DisplayClass27_1_TypeInfo);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_2__OpenRecommendedConfig_b__2__);
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c__DisplayClass27_2_TypeInfo);
    sub_1C37058(&StringLiteral_11022/*"RECOMMENDED_SVT_EQUIP_STATUS_TITLE"*/);
    sub_1C37058(&StringLiteral_11007/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_11005/*"RECOMMENDED_DIALOG_DECIDE"*/);
    sub_1C37058(&StringLiteral_11024/*"RECOMMENDED_SVT_EQUIP_TYPE_TITLE"*/);
    sub_1C37058(&StringLiteral_11001/*"RECOMMENDED_AUTO_SET_TITLE"*/);
    sub_1C37058(&StringLiteral_11013/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_1C37058(&StringLiteral_11021/*"RECOMMENDED_SVT_EQUIP_STATUS_"*/);
    sub_1C37058(&StringLiteral_11012/*"RECOMMENDED_RARITY_"*/);
    sub_1C37058(&StringLiteral_11004/*"RECOMMENDED_CLEAR"*/);
    sub_1C37058(&StringLiteral_11016/*"RECOMMENDED_SVT_EQUIP_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11023/*"RECOMMENDED_SVT_EQUIP_TYPE_"*/);
    sub_1C37058(&StringLiteral_11014/*"RECOMMENDED_RESET"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C3D12E = 1;
  }
  v83 = 0;
  v84 = 0;
  this->fields.closeAction = closeCallback;
  sub_1C36FFC(&this->fields.closeAction, closeCallback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11007/*"RECOMMENDED_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_104;
  UILabel__set_text(titleLabel, saveData, 0);
  messageLabel = this->fields.messageLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11016/*"RECOMMENDED_SVT_EQUIP_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_104;
  UILabel__set_text(messageLabel, saveData, 0);
  typeLabel = this->fields.typeLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11024/*"RECOMMENDED_SVT_EQUIP_TYPE_TITLE"*/, 0);
  if ( !typeLabel )
    goto LABEL_104;
  UILabel__set_text(typeLabel, saveData, 0);
  v85 = 0;
  typeButtonLabelList = this->fields.typeButtonLabelList;
  if ( !typeButtonLabelList )
    goto LABEL_104;
  v10 = 0;
  while ( v10 < SLODWORD(typeButtonLabelList->max_length) )
  {
    v11 = sub_1C372A4(SvtEquipRecommenededConfigDialog___c__DisplayClass27_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 24) = this;
      saveData = (System_String_o *)sub_1C36FFC(v11 + 24, this);
      v12 = this->fields.typeButtonLabelList;
      if ( v12 )
      {
        if ( v85 >= LODWORD(v12->max_length) )
          goto LABEL_105;
        v13 = v12->m_Items[v85];
        v14 = System_Int32__ToString((int32_t)&v85, 0);
        v15 = System_String__Concat_63561656((System_String_o *)StringLiteral_11023/*"RECOMMENDED_SVT_EQUIP_TYPE_"*/, v14, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        saveData = LocalizationManager__Get(v15, 0);
        if ( v13 )
        {
          UILabel__set_text(v13, saveData, 0);
          typeButtonList = this->fields.typeButtonList;
          if ( typeButtonList )
          {
            v17 = v85;
            if ( v85 >= LODWORD(typeButtonList->max_length) )
              goto LABEL_105;
            v18 = typeButtonList->m_Items[v85];
            if ( v18 )
            {
              onClick = v18->fields.onClick;
              if ( onClick )
              {
                size = onClick->fields._size;
                v21 = onClick->fields._version + 1;
                onClick->fields._size = 0;
                onClick->fields._version = v21;
                if ( size <= 0 )
                {
                  *(_DWORD *)(v11 + 16) = v17;
                }
                else
                {
                  System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
                  v17 = v85;
                  typeButtonList = this->fields.typeButtonList;
                  *(_DWORD *)(v11 + 16) = v85;
                  if ( !typeButtonList )
                    goto LABEL_104;
                }
                if ( v17 >= LODWORD(typeButtonList->max_length) )
LABEL_105:
                  sub_1C372BC(saveData);
                v22 = typeButtonList->m_Items[v17];
                if ( v22 )
                {
                  v23 = (System_Collections_Generic_List_object__o *)v22->fields.onClick;
                  v24 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
                  EventDelegate_Callback___ctor(
                    v24,
                    (Il2CppObject *)v11,
                    Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_0__OpenRecommendedConfig_b__0__,
                    0);
                  v25 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
                  EventDelegate___ctor_49273948(v25, v24, 0);
                  if ( v23 )
                  {
                    items = v23->fields._items;
                    v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                    ++v23->fields._version;
                    if ( items )
                    {
                      v28 = v23->fields._size;
                      if ( (unsigned int)v28 >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v23,
                          (Il2CppObject *)v25,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v29 = &items->obj.klass + v28;
                        v23->fields._size = v28 + 1;
                        v29[4] = (Il2CppClass *)v25;
                        saveData = (System_String_o *)sub_1C36FFC(v29 + 4, v25);
                      }
                      v10 = ++v85;
                      typeButtonLabelList = this->fields.typeButtonLabelList;
                      if ( typeButtonLabelList )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_104;
  }
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11013/*"RECOMMENDED_RARITY_TITLE"*/, 0);
  if ( !rarityLabel )
    goto LABEL_104;
  UILabel__set_text(rarityLabel, saveData, 0);
  v84 = 0;
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_104;
  v32 = 0;
  while ( v32 < SLODWORD(rarityButtonLabelList->max_length) )
  {
    v33 = sub_1C372A4(SvtEquipRecommenededConfigDialog___c__DisplayClass27_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v33, 0);
    if ( !v33 )
      goto LABEL_104;
    *(_QWORD *)(v33 + 24) = this;
    saveData = (System_String_o *)sub_1C36FFC(v33 + 24, this);
    v34 = this->fields.rarityButtonLabelList;
    if ( !v34 )
      goto LABEL_104;
    if ( v84 >= LODWORD(v34->max_length) )
      goto LABEL_105;
    v35 = v34->m_Items[v84];
    v36 = System_Int32__ToString((int32_t)&v84, 0);
    v37 = System_String__Concat_63561656((System_String_o *)StringLiteral_11012/*"RECOMMENDED_RARITY_"*/, v36, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    saveData = LocalizationManager__Get(v37, 0);
    if ( !v35 )
      goto LABEL_104;
    UILabel__set_text(v35, saveData, 0);
    v38 = v84;
    *(_DWORD *)(v33 + 16) = v84 + 1;
    rarityButtonList = this->fields.rarityButtonList;
    if ( !rarityButtonList )
      goto LABEL_104;
    if ( v38 >= LODWORD(rarityButtonList->max_length) )
      goto LABEL_105;
    v40 = rarityButtonList->m_Items[v38];
    if ( !v40 )
      goto LABEL_104;
    v41 = v40->fields.onClick;
    if ( !v41 )
      goto LABEL_104;
    v42 = v41->fields._size;
    v43 = v41->fields._version + 1;
    v41->fields._size = 0;
    v41->fields._version = v43;
    if ( v42 >= 1 )
    {
      System_Array__Clear((System_Array_o *)v41->fields._items, 0, v42, 0);
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_104;
      v38 = v84;
    }
    if ( v38 >= LODWORD(rarityButtonList->max_length) )
      goto LABEL_105;
    v44 = rarityButtonList->m_Items[v38];
    if ( v44 )
    {
      v45 = (System_Collections_Generic_List_object__o *)v44->fields.onClick;
      v46 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v46,
        (Il2CppObject *)v33,
        Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_1__OpenRecommendedConfig_b__1__,
        0);
      v47 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
      EventDelegate___ctor_49273948(v47, v46, 0);
      if ( v45 )
      {
        v48 = v45->fields._items;
        v49 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v45->fields._version;
        if ( v48 )
        {
          v50 = v45->fields._size;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v45,
              (Il2CppObject *)v47,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v45->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)v47;
            saveData = (System_String_o *)sub_1C36FFC(v51 + 4, v47);
          }
          v32 = ++v84;
          rarityButtonLabelList = this->fields.rarityButtonLabelList;
          if ( rarityButtonLabelList )
            continue;
        }
      }
    }
    goto LABEL_104;
  }
  combineStatusLabel = this->fields.combineStatusLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11022/*"RECOMMENDED_SVT_EQUIP_STATUS_TITLE"*/, 0);
  if ( !combineStatusLabel )
    goto LABEL_104;
  UILabel__set_text(combineStatusLabel, saveData, 0);
  v83 = 0;
  combineStatusButtonLabelList = this->fields.combineStatusButtonLabelList;
  if ( !combineStatusButtonLabelList )
    goto LABEL_104;
  v54 = 0;
  while ( v54 < SLODWORD(combineStatusButtonLabelList->max_length) )
  {
    v55 = sub_1C372A4(SvtEquipRecommenededConfigDialog___c__DisplayClass27_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v55, 0);
    if ( !v55 )
      goto LABEL_104;
    *(_QWORD *)(v55 + 24) = this;
    saveData = (System_String_o *)sub_1C36FFC(v55 + 24, this);
    v56 = this->fields.combineStatusButtonLabelList;
    if ( !v56 )
      goto LABEL_104;
    if ( v83 >= LODWORD(v56->max_length) )
      goto LABEL_105;
    v57 = v56->m_Items[v83];
    v58 = System_Int32__ToString((int32_t)&v83, 0);
    v59 = System_String__Concat_63561656((System_String_o *)StringLiteral_11021/*"RECOMMENDED_SVT_EQUIP_STATUS_"*/, v58, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    saveData = LocalizationManager__Get(v59, 0);
    if ( !v57 )
      goto LABEL_104;
    UILabel__set_text(v57, saveData, 0);
    v60 = v83;
    *(_DWORD *)(v55 + 16) = v83;
    combineStatusButtonList = this->fields.combineStatusButtonList;
    if ( !combineStatusButtonList )
      goto LABEL_104;
    if ( v60 >= LODWORD(combineStatusButtonList->max_length) )
      goto LABEL_105;
    v62 = combineStatusButtonList->m_Items[v60];
    if ( !v62 )
      goto LABEL_104;
    v63 = v62->fields.onClick;
    if ( !v63 )
      goto LABEL_104;
    v64 = v63->fields._size;
    v65 = v63->fields._version + 1;
    v63->fields._size = 0;
    v63->fields._version = v65;
    if ( v64 >= 1 )
    {
      System_Array__Clear((System_Array_o *)v63->fields._items, 0, v64, 0);
      combineStatusButtonList = this->fields.combineStatusButtonList;
      if ( !combineStatusButtonList )
        goto LABEL_104;
      v60 = v83;
    }
    if ( v60 >= LODWORD(combineStatusButtonList->max_length) )
      goto LABEL_105;
    v66 = combineStatusButtonList->m_Items[v60];
    if ( v66 )
    {
      v67 = (System_Collections_Generic_List_object__o *)v66->fields.onClick;
      v68 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v68,
        (Il2CppObject *)v55,
        Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_2__OpenRecommendedConfig_b__2__,
        0);
      v69 = (EventDelegate_o *)sub_1C372A4(EventDelegate_TypeInfo);
      EventDelegate___ctor_49273948(v69, v68, 0);
      if ( v67 )
      {
        v70 = v67->fields._items;
        v71 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++v67->fields._version;
        if ( v70 )
        {
          v72 = v67->fields._size;
          if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v67,
              (Il2CppObject *)v69,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v70->obj.klass + v72;
            v67->fields._size = v72 + 1;
            v73[4] = (Il2CppClass *)v69;
            saveData = (System_String_o *)sub_1C36FFC(v73 + 4, v69);
          }
          v54 = ++v83;
          combineStatusButtonLabelList = this->fields.combineStatusButtonLabelList;
          if ( combineStatusButtonLabelList )
            continue;
        }
      }
    }
    goto LABEL_104;
  }
  autoSetLabel = this->fields.autoSetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11001/*"RECOMMENDED_AUTO_SET_TITLE"*/, 0);
  if ( !autoSetLabel )
    goto LABEL_104;
  UILabel__set_text(autoSetLabel, saveData, 0);
  resetButtonLabel = this->fields.resetButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11014/*"RECOMMENDED_RESET"*/, 0);
  if ( !resetButtonLabel )
    goto LABEL_104;
  UILabel__set_text(resetButtonLabel, saveData, 0);
  clearButtonLabel = this->fields.clearButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11004/*"RECOMMENDED_CLEAR"*/, 0);
  if ( !clearButtonLabel )
    goto LABEL_104;
  UILabel__set_text(clearButtonLabel, saveData, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11005/*"RECOMMENDED_DIALOG_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_104;
  UILabel__set_text(decideButtonLabel, saveData, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, saveData, 0),
        v79 = (RecommendedSvtEquipConfigSaveData_o *)sub_1C372A4(RecommendedSvtEquipConfigSaveData_TypeInfo),
        RecommendedSvtEquipConfigSaveData___ctor(v79, 0),
        this->fields.saveData = v79,
        sub_1C36FFC(&this->fields.saveData, v79),
        (saveData = (System_String_o *)this->fields.saveData) == 0) )
  {
LABEL_104:
    sub_1C372B4(saveData);
  }
  if ( RecommendedSvtEquipConfigSaveData__IsExist((RecommendedSvtEquipConfigSaveData_o *)saveData, 0) )
  {
    if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
    ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
    this->fields.saveData = ConfigSaveData;
    sub_1C36FFC(&this->fields.saveData, ConfigSaveData);
  }
  else
  {
    SvtEquipRecommenededConfigDialog__SetInitConfig(this, v80);
  }
  SvtEquipRecommenededConfigDialog__SetButtonState(this, v82);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void SvtEquipRecommenededConfigDialog__SetButtonState(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  SvtEquipRecommenededConfigDialog_o *v2; // x19
  struct UISprite_array *typeButtonSpriteList; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x9
  UISprite_o *v7; // x21
  __int64 v8; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v10; // x21
  int v11; // w9
  struct RecommendedSvtEquipConfigSaveData_o *v12; // x9
  UISprite_o *v13; // x20
  __int64 v14; // x8
  struct UILabel_array *combineStatusButtonLabelList; // x8
  __int64 v16; // x20
  struct UISprite_array *combineStatusButtonSpriteList; // x8
  struct RecommendedSvtEquipConfigSaveData_o *v18; // x9
  UISprite_o *v19; // x21
  __int64 v20; // x8
  UISprite_o *autoSetButtonSprite; // x20
  __int64 v22; // x8

  v2 = this;
  if ( (byte_4C3D130 & 1) == 0 )
  {
    this = (SvtEquipRecommenededConfigDialog_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C3D130 = 1;
  }
  typeButtonSpriteList = v2->fields.typeButtonSpriteList;
  if ( !typeButtonSpriteList )
    goto LABEL_45;
  v4 = 0;
  while ( 1 )
  {
    max_length = typeButtonSpriteList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_46:
      sub_1C372BC(this);
    saveData = v2->fields.saveData;
    if ( saveData )
    {
      this = (SvtEquipRecommenededConfigDialog_o *)saveData->fields.selectTypeList;
      if ( this )
      {
        v7 = typeButtonSpriteList->m_Items[v4];
        this = (SvtEquipRecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                                       (System_Collections_Generic_List_int__o *)this,
                                                       v4,
                                                       (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v7 )
        {
          v8 = ((unsigned __int8)this & 1) != 0 ? 104LL : 112LL;
          UISprite__set_spriteName(v7, *(System_String_o **)((char *)&v2->klass + v8), 0);
          typeButtonSpriteList = v2->fields.typeButtonSpriteList;
          ++v4;
          if ( typeButtonSpriteList )
            continue;
        }
      }
    }
    goto LABEL_45;
  }
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_45;
  v10 = 0;
  while ( 1 )
  {
    v11 = rarityButtonSpriteList->max_length;
    if ( (int)v10 >= v11 )
      break;
    if ( (unsigned int)v10 >= v11 )
      goto LABEL_46;
    v12 = v2->fields.saveData;
    if ( v12 )
    {
      this = (SvtEquipRecommenededConfigDialog_o *)v12->fields.selectRarityList;
      if ( this )
      {
        v13 = rarityButtonSpriteList->m_Items[v10];
        this = (SvtEquipRecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                                       (System_Collections_Generic_List_int__o *)this,
                                                       v10 + 1,
                                                       (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v13 )
        {
          v14 = ((unsigned __int8)this & 1) != 0 ? 104LL : 112LL;
          UISprite__set_spriteName(v13, *(System_String_o **)((char *)&v2->klass + v14), 0);
          rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
          ++v10;
          if ( rarityButtonSpriteList )
            continue;
        }
      }
    }
    goto LABEL_45;
  }
  combineStatusButtonLabelList = v2->fields.combineStatusButtonLabelList;
  if ( !combineStatusButtonLabelList )
    goto LABEL_45;
  v16 = 0;
  while ( (int)v16 < SLODWORD(combineStatusButtonLabelList->max_length) )
  {
    combineStatusButtonSpriteList = v2->fields.combineStatusButtonSpriteList;
    if ( !combineStatusButtonSpriteList )
      goto LABEL_45;
    if ( (unsigned int)v16 >= LODWORD(combineStatusButtonSpriteList->max_length) )
      goto LABEL_46;
    v18 = v2->fields.saveData;
    if ( v18 )
    {
      this = (SvtEquipRecommenededConfigDialog_o *)v18->fields.selectCombineStatusList;
      if ( this )
      {
        v19 = combineStatusButtonSpriteList->m_Items[v16];
        this = (SvtEquipRecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                                       (System_Collections_Generic_List_int__o *)this,
                                                       v16,
                                                       (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( v19 )
        {
          v20 = ((unsigned __int8)this & 1) != 0 ? 104LL : 112LL;
          UISprite__set_spriteName(v19, *(System_String_o **)((char *)&v2->klass + v20), 0);
          combineStatusButtonLabelList = v2->fields.combineStatusButtonLabelList;
          ++v16;
          if ( combineStatusButtonLabelList )
            continue;
        }
      }
    }
    goto LABEL_45;
  }
  this = (SvtEquipRecommenededConfigDialog_o *)v2->fields.saveData;
  if ( !this
    || (autoSetButtonSprite = v2->fields.autoSetButtonSprite,
        this = (SvtEquipRecommenededConfigDialog_o *)RecommendedSvtEquipConfigSaveData__IsAutoSetOn(
                                                       (RecommendedSvtEquipConfigSaveData_o *)this,
                                                       0),
        !autoSetButtonSprite) )
  {
LABEL_45:
    sub_1C372B4(this);
  }
  v22 = 128;
  if ( ((unsigned __int8)this & 1) != 0 )
    v22 = 120;
  UISprite__set_spriteName(autoSetButtonSprite, *(System_String_o **)((char *)&v2->klass + v22), 0);
}


void SvtEquipRecommenededConfigDialog__SetInitConfig(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  SvtEquipRecommenededConfigDialog_o *v2; // x19
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectTypeList; // x9
  int v5; // w10
  intptr_t m_CachedPtr; // x9
  _QWORD *v7; // x10
  int v8; // w11
  intptr_t v9; // x9
  _QWORD *v10; // x10
  __int64 m_CancellationTokenSource_low; // x11
  intptr_t v12; // x9
  _QWORD *v13; // x10
  int v14; // w11

  v2 = this;
  if ( (byte_4C3D12F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    this = (SvtEquipRecommenededConfigDialog_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C3D12F = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_21;
  selectTypeList = saveData->fields.selectTypeList;
  if ( !selectTypeList )
    goto LABEL_21;
  v5 = selectTypeList->fields._version + 1;
  selectTypeList->fields._size = 0;
  selectTypeList->fields._version = v5;
  this = (SvtEquipRecommenededConfigDialog_o *)saveData->fields.selectRarityList;
  if ( !this )
    goto LABEL_21;
  m_CachedPtr = this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_int__Add__;
  v8 = HIDWORD(this->fields.m_CancellationTokenSource) + 2;
  LODWORD(this->fields.m_CancellationTokenSource) = 0;
  HIDWORD(this->fields.m_CancellationTokenSource) = v8;
  if ( !m_CachedPtr )
    goto LABEL_21;
  if ( *(_DWORD *)(m_CachedPtr + 24) )
  {
    LODWORD(this->fields.m_CancellationTokenSource) = 1;
    *(_DWORD *)(m_CachedPtr + 32) = 1;
  }
  else
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      1,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    saveData = v2->fields.saveData;
    if ( !saveData )
      goto LABEL_21;
  }
  this = (SvtEquipRecommenededConfigDialog_o *)saveData->fields.selectRarityList;
  if ( !this )
    goto LABEL_21;
  v9 = this->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v9 )
    goto LABEL_21;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v9 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      2,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    saveData = v2->fields.saveData;
    if ( !saveData )
      goto LABEL_21;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v9 + 4 * m_CancellationTokenSource_low + 32) = 2;
  }
  this = (SvtEquipRecommenededConfigDialog_o *)saveData->fields.selectCombineStatusList;
  if ( !this
    || (v12 = this->fields.m_CachedPtr,
        v13 = Method_System_Collections_Generic_List_int__Add__,
        v14 = HIDWORD(this->fields.m_CancellationTokenSource) + 2,
        LODWORD(this->fields.m_CancellationTokenSource) = 0,
        HIDWORD(this->fields.m_CancellationTokenSource) = v14,
        !v12) )
  {
LABEL_21:
    sub_1C372B4(this);
  }
  if ( !*(_DWORD *)(v12 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      0,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    saveData = v2->fields.saveData;
    if ( saveData )
      goto LABEL_20;
    goto LABEL_21;
  }
  LODWORD(this->fields.m_CancellationTokenSource) = 1;
  *(_DWORD *)(v12 + 32) = 0;
LABEL_20:
  saveData->fields.isAutoSet = 0;
}


UnityEngine_GameObject_o *SvtEquipRecommenededConfigDialog__get_closeBtnObject(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3D13B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D13B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void SvtEquipRecommenededConfigDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3D13D & 1) == 0 )
  {
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c_TypeInfo);
    byte_4C3D13D = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SvtEquipRecommenededConfigDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields->__9 = (struct SvtEquipRecommenededConfigDialog___c_o *)v1;
  sub_1C36FFC(SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields, v1);
}


void SvtEquipRecommenededConfigDialog___c___ctor(
        SvtEquipRecommenededConfigDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SvtEquipRecommenededConfigDialog___c___Close_b__39_0(
        SvtEquipRecommenededConfigDialog___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return (x & 0xFFFFFFFE) == 4;
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass27_0___ctor(
        SvtEquipRecommenededConfigDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass27_0___OpenRecommendedConfig_b__0(
        SvtEquipRecommenededConfigDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  SvtEquipRecommenededConfigDialog__OnClickEquipType(this->fields.__4__this, this->fields.equipType, v2);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass27_1___ctor(
        SvtEquipRecommenededConfigDialog___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass27_1___OpenRecommendedConfig_b__1(
        SvtEquipRecommenededConfigDialog___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  SvtEquipRecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass27_2___ctor(
        SvtEquipRecommenededConfigDialog___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass27_2___OpenRecommendedConfig_b__2(
        SvtEquipRecommenededConfigDialog___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  SvtEquipRecommenededConfigDialog__OnClickCombineStatus(this->fields.__4__this, this->fields.combineStatus, v2);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass39_0___ctor(
        SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass39_0___Close_b__1(
        SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x20

  if ( (byte_4C3D13E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_1__Close_b__2__);
    sub_1C37058(&SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_TypeInfo);
    byte_4C3D13E = 1;
  }
  v5 = sub_1C372A4(SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C36FFC(v5 + 24, this),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v5,
          Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_1__Close_b__2__,
          0),
        !Instance) )
  {
    sub_1C372B4(v6);
  }
  CommonUI__CloseConfirmDialog_31208544((CommonUI_o *)Instance, v8, 0);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass39_1___ctor(
        SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtEquipRecommenededConfigDialog___c__DisplayClass39_1___Close_b__2(
        SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_o *this,
        const MethodInfo *method)
{
  struct SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_o *CS___8__locals1; // x8
  SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_o *v3; // x19
  struct SvtEquipRecommenededConfigDialog_o *_4__this; // x8
  struct SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_o *v5; // x8
  struct SvtEquipRecommenededConfigDialog_o *v6; // x9
  struct System_Action_bool__o *closeAction; // x9

  if ( this->fields.isDecide )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    v3 = this;
    if ( !CS___8__locals1
      || (_4__this = CS___8__locals1->fields.__4__this) == 0
      || (this = (SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_o *)_4__this->fields.saveData) == 0
      || (RecommendedSvtEquipConfigSaveData__SaveConfig(
            (RecommendedSvtEquipConfigSaveData_o *)this,
            _4__this->fields.saveData,
            0),
          (v5 = v3->fields.CS___8__locals1) == 0)
      || (v6 = v5->fields.__4__this) == 0
      || (closeAction = v6->fields.closeAction) == 0 )
    {
      sub_1C372B4(this);
    }
    ((void (__fastcall *)(intptr_t, bool, intptr_t))closeAction->fields.invoke_impl)(
      closeAction->fields.method_code,
      v5->fields.isExe,
      closeAction->fields.method);
  }
}