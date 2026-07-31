void SvtEquipRecommenededConfigDialog___ctor(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2

  if ( (byte_593235B & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18163/*"btn_bg_04"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    sub_21FFC50(&StringLiteral_18162/*"btn_bg_03"*/);
    byte_593235B = 1;
  }
  v9 = StringLiteral_18162/*"btn_bg_03"*/;
  this->fields.onBtnSpriteName = (struct System_String_o *)StringLiteral_18162/*"btn_bg_03"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onBtnSpriteName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_18163/*"btn_bg_04"*/;
  this->fields.offBtnSpriteName = (struct System_String_o *)StringLiteral_18163/*"btn_bg_04"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.offBtnSpriteName, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_18237/*"btn_on"*/;
  this->fields.autoSetOnBtnSpriteName = (struct System_String_o *)StringLiteral_18237/*"btn_on"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.autoSetOnBtnSpriteName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_18236/*"btn_off"*/;
  this->fields.autoSetOffSpriteName = (struct System_String_o *)StringLiteral_18236/*"btn_off"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.autoSetOffSpriteName, v24, v25, v26, v27, v28, v29, v30);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v31, v32);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SvtEquipRecommenededConfigDialog__Close(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v9; // x20

  if ( (byte_5932350 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BaseDialog_Init__);
    byte_5932350 = 1;
  }
  this->fields.closeAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v2, v3, v4, v5, v6, v7);
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BaseDialog_Init__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v9, 0);
}


void SvtEquipRecommenededConfigDialog__Close_38020764(
        SvtEquipRecommenededConfigDialog_o *this,
        bool isExe,
        const MethodInfo *method)
{
  __int64 v5; // x20
  RecommendedSvtEquipConfigSaveData_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x22
  System_Collections_Generic_List_int__o *selectCombineStatusList; // x21
  __int64 v17; // x2
  struct RecommendedSvtEquipConfigSaveData_o *v18; // x8
  System_Collections_Generic_List_T__o *v19; // x22
  SvtEquipRecommenededConfigDialog___c_c *v20; // x0
  struct SvtEquipRecommenededConfigDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__39_0; // x23
  Il2CppObject *v23; // x24
  struct SvtEquipRecommenededConfigDialog___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  System_String_o *v36; // x23
  System_String_o *v37; // x24
  CommonConfirmDialog_ClickDelegate_o *v38; // x25
  struct System_Action_bool__o *closeAction; // x8

  if ( (byte_5932359 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int___);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog___c__Close_b__39_0__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_0__Close_b__1__);
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_TypeInfo);
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c_TypeInfo);
    sub_21FFC50(&StringLiteral_11474/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11475/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_TITLE"*/);
    byte_5932359 = 1;
  }
  v5 = sub_21FFEBC(SvtEquipRecommenededConfigDialog___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  saveData = this->fields.saveData;
  *(_BYTE *)(v5 + 24) = isExe;
  if ( !saveData )
    goto LABEL_32;
  selectRarityList = saveData->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_32;
  selectCombineStatusList = saveData->fields.selectCombineStatusList;
  if ( selectRarityList->fields._size >= 1 )
    System_Collections_Generic_List_int___Sort(
      saveData->fields.selectRarityList,
      (const MethodInfo_4434A40 *)Method_System_Collections_Generic_List_int__Sort__);
  if ( !selectCombineStatusList )
    goto LABEL_32;
  if ( selectCombineStatusList->fields._size >= 1 )
    System_Collections_Generic_List_int___Sort(
      selectCombineStatusList,
      (const MethodInfo_4434A40 *)Method_System_Collections_Generic_List_int__Sort__);
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
    v18 = this->fields.saveData;
    if ( !v18 )
      goto LABEL_32;
    v19 = (System_Collections_Generic_List_T__o *)v18->fields.selectRarityList;
    v20 = SvtEquipRecommenededConfigDialog___c_TypeInfo;
    if ( !*(&SvtEquipRecommenededConfigDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtEquipRecommenededConfigDialog___c_TypeInfo, v7, v17);
      v20 = SvtEquipRecommenededConfigDialog___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__39_0 = static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v7, v17);
        static_fields = SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__39_0 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__39_0, v23, Method_SvtEquipRecommenededConfigDialog___c__Close_b__39_0__, 0);
      v24 = SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields;
      v24->__9__39_0 = _9__39_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__39_0, (int32_t)_9__39_0, v25, v26, v27, v28, v29, v30);
    }
    if ( BasicHelper__Any_int_(
           v19,
           (System_Func_T__bool__o *)_9__39_0,
           (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___)
      || System_Collections_Generic_List_int___Contains(
           selectCombineStatusList,
           1,
           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
LABEL_25:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11475/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_TITLE"*/, 0);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11474/*"RECOMMENDED_SVT_EQUIP_MATERIAL_CONFIRM_MESSAGE"*/, 0);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
      v38 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v38,
        (Il2CppObject *)v5,
        Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_0__Close_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_37291768(
          (CommonUI_o *)Instance,
          v34,
          v35,
          v36,
          v37,
          0,
          v38,
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
      sub_21FFECC(IsNullOrEmpty, v7);
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

  if ( (byte_5932354 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__);
    byte_5932354 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickAutoSet__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      sub_21FFECC(v5, v6);
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

  if ( (byte_5932358 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickCancel__);
    byte_5932358 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SvtEquipRecommenededConfigDialog__Close_38020764(this, 0, v5);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickClear(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectTypeList; // x10
  struct System_Collections_Generic_List_int__o *selectCombineStatusList; // x9
  int v10; // w11
  struct System_Collections_Generic_List_int__o *selectRarityList; // x10
  int v12; // w11
  int32_t version; // w9

  if ( (byte_5932356 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickClear__);
    byte_5932356 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      goto LABEL_12;
    selectTypeList = saveData->fields.selectTypeList;
    if ( !selectTypeList )
      goto LABEL_12;
    selectCombineStatusList = saveData->fields.selectCombineStatusList;
    v10 = selectTypeList->fields._version + 1;
    selectTypeList->fields._size = 0;
    selectTypeList->fields._version = v10;
    if ( !selectCombineStatusList
      || (selectRarityList = saveData->fields.selectRarityList,
          v12 = selectCombineStatusList->fields._version + 1,
          selectCombineStatusList->fields._size = 0,
          selectCombineStatusList->fields._version = v12,
          !selectRarityList) )
    {
LABEL_12:
      sub_21FFECC(v5, v6);
    }
    version = selectRarityList->fields._version;
    saveData->fields.isAutoSet = 0;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = version + 1;
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
  const MethodInfo *v8; // x1
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_5932353 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__);
    byte_5932353 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickCombineStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
                                                                              (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( ((unsigned __int8)selectCombineStatusList & 1) != 0 )
        {
          if ( v10 )
          {
            selectCombineStatusList = v10->fields.selectCombineStatusList;
            if ( selectCombineStatusList )
            {
              System_Collections_Generic_List_int___Remove(
                selectCombineStatusList,
                status,
                (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_19:
              SvtEquipRecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
          }
        }
        else if ( v10 )
        {
          selectCombineStatusList = v10->fields.selectCombineStatusList;
          if ( selectCombineStatusList )
          {
            items = selectCombineStatusList->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++selectCombineStatusList->fields._version;
            if ( items )
            {
              size = selectCombineStatusList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectCombineStatusList,
                  status,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                selectCombineStatusList->fields._size = size + 1;
                items->m_Items[size] = status;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
    sub_21FFECC(selectCombineStatusList, v8);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickDecide(
        SvtEquipRecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932357 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickDecide__);
    byte_5932357 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SvtEquipRecommenededConfigDialog__Close_38020764(this, 1, v5);
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
  const MethodInfo *v8; // x1
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_5932351 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__);
    byte_5932351 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickEquipType__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
                                                                     (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( ((unsigned __int8)selectTypeList & 1) != 0 )
        {
          if ( v10 )
          {
            selectTypeList = v10->fields.selectTypeList;
            if ( selectTypeList )
            {
              System_Collections_Generic_List_int___Remove(
                selectTypeList,
                type,
                (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_19:
              SvtEquipRecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
          }
        }
        else if ( v10 )
        {
          selectTypeList = v10->fields.selectTypeList;
          if ( selectTypeList )
          {
            items = selectTypeList->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++selectTypeList->fields._version;
            if ( items )
            {
              size = selectTypeList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectTypeList,
                  type,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                selectTypeList->fields._size = size + 1;
                items->m_Items[size] = type;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
    sub_21FFECC(selectTypeList, v8);
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
  const MethodInfo *v8; // x1
  struct RecommendedSvtEquipConfigSaveData_o *saveData; // x8
  struct RecommendedSvtEquipConfigSaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_5932352 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickRarity__);
    byte_5932352 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_SvtEquipRecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickRarity__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
                                                                       (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( ((unsigned __int8)selectRarityList & 1) != 0 )
        {
          if ( v10 )
          {
            selectRarityList = v10->fields.selectRarityList;
            if ( selectRarityList )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_19:
              SvtEquipRecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
          }
        }
        else if ( v10 )
        {
          selectRarityList = v10->fields.selectRarityList;
          if ( selectRarityList )
          {
            items = selectRarityList->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                selectRarityList->fields._size = size + 1;
                items->m_Items[size] = rarity;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
    sub_21FFECC(selectRarityList, v8);
  }
}


void SvtEquipRecommenededConfigDialog__OnClickReset(SvtEquipRecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_5932355 & 1) == 0 )
  {
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog_OnClickReset__);
    byte_5932355 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_SvtEquipRecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_SvtEquipRecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SvtEquipRecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *saveData; // x0
  __int64 v14; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *typeLabel; // x20
  __int64 v17; // x2
  struct UILabel_array *typeButtonLabelList; // x8
  int v19; // w9
  __int64 v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UILabel_array *v27; // x8
  UILabel_o *v28; // x21
  System_String_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x22
  struct UICommonButton_array *typeButtonList; // x8
  unsigned int v34; // w9
  UICommonButton_o *v35; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int32_t size; // w2
  int v38; // w11
  UICommonButton_o *v39; // x8
  System_Collections_Generic_List_object__o *v40; // x21
  EventDelegate_Callback_o *v41; // x22
  EventDelegate_o *v42; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  UILabel_o *rarityLabel; // x20
  __int64 v54; // x2
  struct UILabel_array *rarityButtonLabelList; // x8
  int v56; // w9
  __int64 v57; // x20
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct UILabel_array *v64; // x8
  UILabel_o *v65; // x21
  System_String_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  System_String_o *v69; // x22
  __int64 v70; // x9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v72; // x9
  struct System_Collections_Generic_List_EventDelegate__o *v73; // x9
  int32_t v74; // w2
  int v75; // w10
  UICommonButton_o *v76; // x8
  System_Collections_Generic_List_object__o *v77; // x21
  EventDelegate_Callback_o *v78; // x22
  EventDelegate_o *v79; // x20
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  UILabel_o *combineStatusLabel; // x20
  __int64 v91; // x2
  struct UILabel_array *combineStatusButtonLabelList; // x8
  int v93; // w9
  __int64 v94; // x20
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  struct UILabel_array *v101; // x8
  UILabel_o *v102; // x21
  System_String_o *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  System_String_o *v106; // x22
  __int64 v107; // x9
  struct UICommonButton_array *combineStatusButtonList; // x8
  UICommonButton_o *v109; // x9
  struct System_Collections_Generic_List_EventDelegate__o *v110; // x9
  int32_t v111; // w2
  int v112; // w10
  UICommonButton_o *v113; // x8
  System_Collections_Generic_List_object__o *v114; // x21
  EventDelegate_Callback_o *v115; // x22
  EventDelegate_o *v116; // x20
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  UILabel_o *autoSetLabel; // x20
  UILabel_o *resetButtonLabel; // x20
  UILabel_o *clearButtonLabel; // x20
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  RecommendedSvtEquipConfigSaveData_o *v132; // x20
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  const MethodInfo *v139; // x1
  __int64 v140; // x2
  struct RecommendedSvtEquipConfigSaveData_o *ConfigSaveData; // x0
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  const MethodInfo *v148; // x1
  unsigned int v149; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v150; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593234D & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_0__OpenRecommendedConfig_b__0__);
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c__DisplayClass27_0_TypeInfo);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_1__OpenRecommendedConfig_b__1__);
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c__DisplayClass27_1_TypeInfo);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_2__OpenRecommendedConfig_b__2__);
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c__DisplayClass27_2_TypeInfo);
    sub_21FFC50(&StringLiteral_11479/*"RECOMMENDED_SVT_EQUIP_STATUS_TITLE"*/);
    sub_21FFC50(&StringLiteral_11464/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_11462/*"RECOMMENDED_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_11481/*"RECOMMENDED_SVT_EQUIP_TYPE_TITLE"*/);
    sub_21FFC50(&StringLiteral_11458/*"RECOMMENDED_AUTO_SET_TITLE"*/);
    sub_21FFC50(&StringLiteral_11470/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_21FFC50(&StringLiteral_11478/*"RECOMMENDED_SVT_EQUIP_STATUS_"*/);
    sub_21FFC50(&StringLiteral_11469/*"RECOMMENDED_RARITY_"*/);
    sub_21FFC50(&StringLiteral_11461/*"RECOMMENDED_CLEAR"*/);
    sub_21FFC50(&StringLiteral_11473/*"RECOMMENDED_SVT_EQUIP_DIALOG_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_11480/*"RECOMMENDED_SVT_EQUIP_TYPE_"*/);
    sub_21FFC50(&StringLiteral_11471/*"RECOMMENDED_RESET"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_593234D = 1;
  }
  v150 = 0;
  v149 = 0;
  this->fields.closeAction = closeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11464/*"RECOMMENDED_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, saveData, 0);
  messageLabel = this->fields.messageLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11473/*"RECOMMENDED_SVT_EQUIP_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_87;
  UILabel__set_text(messageLabel, saveData, 0);
  typeLabel = this->fields.typeLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11481/*"RECOMMENDED_SVT_EQUIP_TYPE_TITLE"*/, 0);
  if ( !typeLabel )
    goto LABEL_87;
  UILabel__set_text(typeLabel, saveData, 0);
  typeButtonLabelList = this->fields.typeButtonLabelList;
  HIDWORD(v150) = 0;
  if ( !typeButtonLabelList )
    goto LABEL_87;
  v19 = 0;
  while ( v19 < SLODWORD(typeButtonLabelList->max_length) )
  {
    v20 = sub_21FFEBC(SvtEquipRecommenededConfigDialog___c__DisplayClass27_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 24) = this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 24), (int32_t)this, v21, v22, v23, v24, v25, v26);
      v27 = this->fields.typeButtonLabelList;
      if ( v27 )
      {
        if ( HIDWORD(v150) >= LODWORD(v27->max_length) )
          goto LABEL_102;
        v28 = v27->m_Items[SHIDWORD(v150)];
        v29 = System_Int32__ToString((int32_t)&v150 + 4, 0);
        v32 = System_String__Concat_75438412((System_String_o *)StringLiteral_11480/*"RECOMMENDED_SVT_EQUIP_TYPE_"*/, v29, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
        saveData = LocalizationManager__Get(v32, 0);
        if ( v28 )
        {
          UILabel__set_text(v28, saveData, 0);
          typeButtonList = this->fields.typeButtonList;
          if ( typeButtonList )
          {
            v34 = HIDWORD(v150);
            if ( HIDWORD(v150) >= LODWORD(typeButtonList->max_length) )
              goto LABEL_102;
            v35 = typeButtonList->m_Items[SHIDWORD(v150)];
            if ( v35 )
            {
              onClick = v35->fields.onClick;
              if ( onClick )
              {
                size = onClick->fields._size;
                v38 = onClick->fields._version + 1;
                onClick->fields._size = 0;
                onClick->fields._version = v38;
                if ( size <= 0 )
                {
                  *(_DWORD *)(v20 + 16) = v34;
                }
                else
                {
                  System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
                  v34 = HIDWORD(v150);
                  typeButtonList = this->fields.typeButtonList;
                  *(_DWORD *)(v20 + 16) = HIDWORD(v150);
                  if ( !typeButtonList )
                    goto LABEL_87;
                }
                if ( v34 >= LODWORD(typeButtonList->max_length) )
LABEL_102:
                  sub_21FFED4(saveData);
                v39 = typeButtonList->m_Items[v34];
                if ( v39 )
                {
                  v40 = (System_Collections_Generic_List_object__o *)v39->fields.onClick;
                  v41 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
                  EventDelegate_Callback___ctor(
                    v41,
                    (Il2CppObject *)v20,
                    Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_0__OpenRecommendedConfig_b__0__,
                    0);
                  v42 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
                  EventDelegate___ctor_56132624(v42, v41, 0);
                  if ( v40 )
                  {
                    items = v40->fields._items;
                    v50 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                    ++v40->fields._version;
                    if ( items )
                    {
                      v51 = v40->fields._size;
                      if ( (unsigned int)v51 >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v40,
                          (Il2CppObject *)v42,
                          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v52 = &items->obj.klass + v51;
                        v40->fields._size = v51 + 1;
                        v52[4] = (Il2CppClass *)v42;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)(v52 + 4),
                          (int32_t)v42,
                          v43,
                          v44,
                          v45,
                          v46,
                          v47,
                          v48);
                      }
                      typeButtonLabelList = this->fields.typeButtonLabelList;
                      v19 = ++HIDWORD(v150);
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
    goto LABEL_87;
  }
  rarityLabel = this->fields.rarityLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v17);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11470/*"RECOMMENDED_RARITY_TITLE"*/, 0);
  if ( !rarityLabel )
    goto LABEL_87;
  UILabel__set_text(rarityLabel, saveData, 0);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  LODWORD(v150) = 0;
  if ( !rarityButtonLabelList )
    goto LABEL_87;
  v56 = 0;
  while ( v56 < SLODWORD(rarityButtonLabelList->max_length) )
  {
    v57 = sub_21FFEBC(SvtEquipRecommenededConfigDialog___c__DisplayClass27_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v57, 0);
    if ( v57 )
    {
      *(_QWORD *)(v57 + 24) = this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v57 + 24), (int32_t)this, v58, v59, v60, v61, v62, v63);
      v64 = this->fields.rarityButtonLabelList;
      if ( v64 )
      {
        if ( (unsigned int)v150 >= LODWORD(v64->max_length) )
          goto LABEL_102;
        v65 = v64->m_Items[(int)v150];
        v66 = System_Int32__ToString((int32_t)&v150, 0);
        v69 = System_String__Concat_75438412((System_String_o *)StringLiteral_11469/*"RECOMMENDED_RARITY_"*/, v66, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v67, v68);
        saveData = LocalizationManager__Get(v69, 0);
        if ( v65 )
        {
          UILabel__set_text(v65, saveData, 0);
          v70 = (int)v150;
          rarityButtonList = this->fields.rarityButtonList;
          *(_DWORD *)(v57 + 16) = v150 + 1;
          if ( rarityButtonList )
          {
            if ( (unsigned int)v70 >= LODWORD(rarityButtonList->max_length) )
              goto LABEL_102;
            v72 = rarityButtonList->m_Items[v70];
            if ( v72 )
            {
              v73 = v72->fields.onClick;
              if ( v73 )
              {
                v74 = v73->fields._size;
                v75 = v73->fields._version + 1;
                v73->fields._size = 0;
                v73->fields._version = v75;
                if ( v74 < 1
                  || (System_Array__Clear((System_Array_o *)v73->fields._items, 0, v74, 0),
                      (rarityButtonList = this->fields.rarityButtonList) != 0) )
                {
                  if ( (unsigned int)v150 >= LODWORD(rarityButtonList->max_length) )
                    goto LABEL_102;
                  v76 = rarityButtonList->m_Items[(int)v150];
                  if ( v76 )
                  {
                    v77 = (System_Collections_Generic_List_object__o *)v76->fields.onClick;
                    v78 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
                    EventDelegate_Callback___ctor(
                      v78,
                      (Il2CppObject *)v57,
                      Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_1__OpenRecommendedConfig_b__1__,
                      0);
                    v79 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
                    EventDelegate___ctor_56132624(v79, v78, 0);
                    if ( v77 )
                    {
                      v86 = v77->fields._items;
                      v87 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                      ++v77->fields._version;
                      if ( v86 )
                      {
                        v88 = v77->fields._size;
                        if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v77,
                            (Il2CppObject *)v79,
                            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v89 = &v86->obj.klass + v88;
                          v77->fields._size = v88 + 1;
                          v89[4] = (Il2CppClass *)v79;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)(v89 + 4),
                            (int32_t)v79,
                            v80,
                            v81,
                            v82,
                            v83,
                            v84,
                            v85);
                        }
                        rarityButtonLabelList = this->fields.rarityButtonLabelList;
                        v56 = v150 + 1;
                        LODWORD(v150) = v150 + 1;
                        if ( rarityButtonLabelList )
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
    }
    goto LABEL_87;
  }
  combineStatusLabel = this->fields.combineStatusLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v54);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11479/*"RECOMMENDED_SVT_EQUIP_STATUS_TITLE"*/, 0);
  if ( !combineStatusLabel )
    goto LABEL_87;
  UILabel__set_text(combineStatusLabel, saveData, 0);
  combineStatusButtonLabelList = this->fields.combineStatusButtonLabelList;
  v149 = 0;
  if ( !combineStatusButtonLabelList )
    goto LABEL_87;
  v93 = 0;
  while ( v93 < SLODWORD(combineStatusButtonLabelList->max_length) )
  {
    v94 = sub_21FFEBC(SvtEquipRecommenededConfigDialog___c__DisplayClass27_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v94, 0);
    if ( v94 )
    {
      *(_QWORD *)(v94 + 24) = this;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v94 + 24), (int32_t)this, v95, v96, v97, v98, v99, v100);
      v101 = this->fields.combineStatusButtonLabelList;
      if ( v101 )
      {
        if ( v149 >= LODWORD(v101->max_length) )
          goto LABEL_102;
        v102 = v101->m_Items[v149];
        v103 = System_Int32__ToString((int32_t)&v149, 0);
        v106 = System_String__Concat_75438412((System_String_o *)StringLiteral_11478/*"RECOMMENDED_SVT_EQUIP_STATUS_"*/, v103, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v104, v105);
        saveData = LocalizationManager__Get(v106, 0);
        if ( v102 )
        {
          UILabel__set_text(v102, saveData, 0);
          v107 = (int)v149;
          combineStatusButtonList = this->fields.combineStatusButtonList;
          *(_DWORD *)(v94 + 16) = v149;
          if ( combineStatusButtonList )
          {
            if ( (unsigned int)v107 >= LODWORD(combineStatusButtonList->max_length) )
              goto LABEL_102;
            v109 = combineStatusButtonList->m_Items[v107];
            if ( v109 )
            {
              v110 = v109->fields.onClick;
              if ( v110 )
              {
                v111 = v110->fields._size;
                v112 = v110->fields._version + 1;
                v110->fields._size = 0;
                v110->fields._version = v112;
                if ( v111 < 1
                  || (System_Array__Clear((System_Array_o *)v110->fields._items, 0, v111, 0),
                      (combineStatusButtonList = this->fields.combineStatusButtonList) != 0) )
                {
                  if ( v149 >= LODWORD(combineStatusButtonList->max_length) )
                    goto LABEL_102;
                  v113 = combineStatusButtonList->m_Items[v149];
                  if ( v113 )
                  {
                    v114 = (System_Collections_Generic_List_object__o *)v113->fields.onClick;
                    v115 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
                    EventDelegate_Callback___ctor(
                      v115,
                      (Il2CppObject *)v94,
                      Method_SvtEquipRecommenededConfigDialog___c__DisplayClass27_2__OpenRecommendedConfig_b__2__,
                      0);
                    v116 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
                    EventDelegate___ctor_56132624(v116, v115, 0);
                    if ( v114 )
                    {
                      v123 = v114->fields._items;
                      v124 = Method_System_Collections_Generic_List_EventDelegate__Add__;
                      ++v114->fields._version;
                      if ( v123 )
                      {
                        v125 = v114->fields._size;
                        if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v114,
                            (Il2CppObject *)v116,
                            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v126 = &v123->obj.klass + v125;
                          v114->fields._size = v125 + 1;
                          v126[4] = (Il2CppClass *)v116;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)(v126 + 4),
                            (int32_t)v116,
                            v117,
                            v118,
                            v119,
                            v120,
                            v121,
                            v122);
                        }
                        combineStatusButtonLabelList = this->fields.combineStatusButtonLabelList;
                        v93 = ++v149;
                        if ( combineStatusButtonLabelList )
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
    }
    goto LABEL_87;
  }
  autoSetLabel = this->fields.autoSetLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v91);
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11458/*"RECOMMENDED_AUTO_SET_TITLE"*/, 0);
  if ( !autoSetLabel )
    goto LABEL_87;
  UILabel__set_text(autoSetLabel, saveData, 0);
  resetButtonLabel = this->fields.resetButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11471/*"RECOMMENDED_RESET"*/, 0);
  if ( !resetButtonLabel )
    goto LABEL_87;
  UILabel__set_text(resetButtonLabel, saveData, 0);
  clearButtonLabel = this->fields.clearButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11461/*"RECOMMENDED_CLEAR"*/, 0);
  if ( !clearButtonLabel )
    goto LABEL_87;
  UILabel__set_text(clearButtonLabel, saveData, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_11462/*"RECOMMENDED_DIALOG_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_87;
  UILabel__set_text(decideButtonLabel, saveData, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  saveData = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelButtonLabel
    || (UILabel__set_text(cancelButtonLabel, saveData, 0),
        v132 = (RecommendedSvtEquipConfigSaveData_o *)sub_21FFEBC(RecommendedSvtEquipConfigSaveData_TypeInfo),
        RecommendedSvtEquipConfigSaveData___ctor(v132, 0),
        this->fields.saveData = v132,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.saveData,
          (int32_t)v132,
          v133,
          v134,
          v135,
          v136,
          v137,
          v138),
        (saveData = (System_String_o *)this->fields.saveData) == 0) )
  {
LABEL_87:
    sub_21FFECC(saveData, v14);
  }
  if ( RecommendedSvtEquipConfigSaveData__IsExist((RecommendedSvtEquipConfigSaveData_o *)saveData, 0) )
  {
    if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, v139, v140);
    ConfigSaveData = RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(0);
    this->fields.saveData = ConfigSaveData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.saveData,
      (int32_t)ConfigSaveData,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
  }
  else
  {
    SvtEquipRecommenededConfigDialog__SetInitConfig(this, v139);
  }
  SvtEquipRecommenededConfigDialog__SetButtonState(this, v148);
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
  if ( (byte_593234F & 1) == 0 )
  {
    this = (SvtEquipRecommenededConfigDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    byte_593234F = 1;
  }
  typeButtonSpriteList = v2->fields.typeButtonSpriteList;
  if ( !typeButtonSpriteList )
    goto LABEL_39;
  v4 = 0;
  while ( 1 )
  {
    max_length = typeButtonSpriteList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_45:
      sub_21FFED4(this);
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
                                                       (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
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
    goto LABEL_39;
  }
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_39;
  v10 = 0;
  while ( 1 )
  {
    v11 = rarityButtonSpriteList->max_length;
    if ( (int)v10 >= v11 )
      break;
    if ( (unsigned int)v10 >= v11 )
      goto LABEL_45;
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
                                                       (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
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
    goto LABEL_39;
  }
  combineStatusButtonLabelList = v2->fields.combineStatusButtonLabelList;
  if ( !combineStatusButtonLabelList )
    goto LABEL_39;
  v16 = 0;
  while ( (int)v16 < SLODWORD(combineStatusButtonLabelList->max_length) )
  {
    combineStatusButtonSpriteList = v2->fields.combineStatusButtonSpriteList;
    if ( !combineStatusButtonSpriteList )
      goto LABEL_39;
    if ( (unsigned int)v16 >= LODWORD(combineStatusButtonSpriteList->max_length) )
      goto LABEL_45;
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
                                                       (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
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
    goto LABEL_39;
  }
  this = (SvtEquipRecommenededConfigDialog_o *)v2->fields.saveData;
  if ( !this
    || (autoSetButtonSprite = v2->fields.autoSetButtonSprite,
        this = (SvtEquipRecommenededConfigDialog_o *)RecommendedSvtEquipConfigSaveData__IsAutoSetOn(
                                                       (RecommendedSvtEquipConfigSaveData_o *)this,
                                                       0),
        !autoSetButtonSprite) )
  {
LABEL_39:
    sub_21FFECC(this, method);
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
  if ( (byte_593234E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    this = (SvtEquipRecommenededConfigDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    byte_593234E = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_21;
  selectTypeList = saveData->fields.selectTypeList;
  if ( !selectTypeList )
    goto LABEL_21;
  this = (SvtEquipRecommenededConfigDialog_o *)saveData->fields.selectRarityList;
  v5 = selectTypeList->fields._version + 1;
  selectTypeList->fields._size = 0;
  selectTypeList->fields._version = v5;
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
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
    sub_21FFECC(this, method);
  }
  if ( !*(_DWORD *)(v12 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      0,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_593235A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593235A = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void SvtEquipRecommenededConfigDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593235C & 1) == 0 )
  {
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c_TypeInfo);
    byte_593235C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SvtEquipRecommenededConfigDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields->__9 = (struct SvtEquipRecommenededConfigDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SvtEquipRecommenededConfigDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_593235D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_1__Close_b__2__);
    sub_21FFC50(&SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_TypeInfo);
    byte_593235D = 1;
  }
  v5 = sub_21FFEBC(SvtEquipRecommenededConfigDialog___c__DisplayClass39_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_SvtEquipRecommenededConfigDialog___c__DisplayClass39_1__Close_b__2__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
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
      sub_21FFECC(this, method);
    }
    ((void (__fastcall *)(intptr_t, bool, intptr_t))closeAction->fields.invoke_impl)(
      closeAction->fields.method_code,
      v5->fields.isExe,
      closeAction->fields.method);
  }
}