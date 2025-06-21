void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B204B0 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_17299/*"btn_bg_04"*/, v5);
    sub_1BCAFF8(&StringLiteral_17298/*"btn_bg_03"*/, v6);
    byte_4B204B0 = 1;
  }
  v7 = StringLiteral_17298/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17298/*"btn_bg_03"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.ON_BTN_SPRITE_NAME, v7, v2, v3);
  v8 = StringLiteral_17299/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17299/*"btn_bg_04"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.OFF_BTN_SPRITE_NAME, v8, v9, v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_47691488(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_47691488(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4B204A9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_RecommenededConfigDialog_EndClose__, v6);
    byte_4B204A9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeFunc, 0, v7, v8);
  v9 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall RecommenededConfigDialog__EndOpen(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x2
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v7; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v9; // w21
  il2cpp_array_size_t v10; // w22

  if ( (byte_4B204A5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B204A5 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.classLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.rarityLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_29;
  max_length = classButtonLabelList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( v7 < classButtonLabelList->max_length )
    {
      titleLabel = classButtonLabelList->m_Items[v7];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( max_length == ++v7 )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_29;
    }
LABEL_30:
    sub_1BCB25C(titleLabel, method, v4);
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_29;
  v9 = rarityButtonLabelList->max_length;
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( v10 < rarityButtonLabelList->max_length )
    {
      titleLabel = rarityButtonLabelList->m_Items[v10];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v9 == ++v10 )
        goto LABEL_23;
      rarityButtonLabelList = this->fields.rarityButtonLabelList;
      if ( !rarityButtonLabelList )
        goto LABEL_29;
    }
    goto LABEL_30;
  }
LABEL_23:
  titleLabel = this->fields.resetButtonLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.clearButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_1BCB254(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B204AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommenededConfigDialog_OnClickCancel__, method);
    byte_4B204AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_RecommenededConfigDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BCB254(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickClass(
        RecommenededConfigDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct UICommonButton_array *classButtonList; // x8
  il2cpp_array_size_t max_length; // w8
  bool v11; // vf
  int v12; // w8
  struct RecommendedConfigSaveData_o *saveData; // x8

  if ( (byte_4B204AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommenededConfigDialog_OnClickClass__, *(_QWORD *)&kind);
    byte_4B204AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    classButtonList = this->fields.classButtonList;
    if ( classButtonList )
    {
      max_length = classButtonList->max_length;
      v11 = __OFSUB__(max_length, 1);
      v12 = max_length - 1;
      if ( v12 < 0 != v11 || v12 < (unsigned int)kind )
        goto LABEL_11;
      saveData = this->fields.saveData;
      if ( saveData )
      {
        saveData->fields.selectClass = kind;
LABEL_11:
        RecommenededConfigDialog__SetButtonState(this, v8);
        return;
      }
    }
    sub_1BCB254(v7, v8);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct RecommendedConfigSaveData_o *saveData; // x9
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  int v10; // w9

  if ( (byte_4B204AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_1BCAFF8(&Method_RecommenededConfigDialog_OnClickClear__, v3);
    byte_4B204AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_RecommenededConfigDialog_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList, saveData->fields.selectClass = 0, !selectRarityList) )
    {
      sub_1BCB254(v6, v7);
    }
    v10 = selectRarityList->fields._version + 1;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = v10;
    RecommenededConfigDialog__SetButtonState(this, v7);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B204AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Sort__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1BCAFF8(&Method_RecommenededConfigDialog_OnClickDecide__, v4);
    byte_4B204AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_RecommenededConfigDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_369E4F0 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1BCB254(saveData, v7);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickRarity(
        RecommenededConfigDialog_o *this,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v11; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v13; // x9
  char v14; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4B204AB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&rarity);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1BCAFF8(&Method_RecommenededConfigDialog_OnClickRarity__, v7);
    byte_4B204AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCB010(Method_RecommenededConfigDialog_OnClickRarity__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
        v13 = this->fields.saveData;
        if ( v13 )
        {
          v14 = (char)selectRarityList;
          selectRarityList = v13->fields.selectRarityList;
          if ( selectRarityList )
          {
            if ( (v14 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_369E0A8 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              RecommenededConfigDialog__SetButtonState(this, v11);
              return;
            }
            items = selectRarityList->fields._items;
            v16 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_369CBAC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              }
              else
              {
                selectRarityList->fields._size = size + 1;
                items->m_Items[size + 1] = rarity;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1BCB254(selectRarityList, v11);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B204AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_RecommenededConfigDialog_OnClickReset__, method);
    byte_4B204AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    RecommenededConfigDialog__SetInitConfig(this, v5);
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void __fastcall RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  RecommendedConfigSaveData_o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v31; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 size; // x2
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x23
  System_String_o *v42; // x0
  System_String_o *v43; // x24
  int v44; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v46; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int v48; // w11
  UICommonButton_o *v49; // x8
  System_Collections_Generic_List_object__o *v50; // x23
  EventDelegate_Callback_o *v51; // x24
  EventDelegate_o *v52; // x22
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  struct UICommonButton_array *v59; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v62; // w20
  __int64 v63; // x22
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct UILabel_array *v66; // x8
  UILabel_o *v67; // x23
  System_String_o *v68; // x0
  System_String_o *v69; // x24
  int v70; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v72; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v73; // x10
  int v74; // w11
  UICommonButton_o *v75; // x8
  System_Collections_Generic_List_object__o *v76; // x23
  EventDelegate_Callback_o *v77; // x24
  EventDelegate_o *v78; // x22
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v89; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Action_o *v96; // x20
  CGThumbnailListItem_o *p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v98; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v99; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B204A6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, closeCallback);
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, v5);
    sub_1BCAFF8(&EventDelegate_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&RecommendedConfigSaveData_TypeInfo, v10);
    sub_1BCAFF8(&Method_RecommenededConfigDialog_EndOpen__, v11);
    sub_1BCAFF8(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v12);
    sub_1BCAFF8(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v13);
    sub_1BCAFF8(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v14);
    sub_1BCAFF8(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v15);
    sub_1BCAFF8(&StringLiteral_10920/*"RECOMMENDED_DIALOG_TITLE"*/, v16);
    sub_1BCAFF8(&StringLiteral_10926/*"RECOMMENDED_RARITY_TITLE"*/, v17);
    sub_1BCAFF8(&StringLiteral_10925/*"RECOMMENDED_RARITY_"*/, v18);
    sub_1BCAFF8(&StringLiteral_10918/*"RECOMMENDED_CLEAR"*/, v19);
    sub_1BCAFF8(&StringLiteral_3651/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_1BCAFF8(&StringLiteral_10927/*"RECOMMENDED_RESET"*/, v22);
    sub_1BCAFF8(&StringLiteral_10917/*"RECOMMENDED_CLASS_TITLE"*/, v23);
    sub_1BCAFF8(&StringLiteral_10916/*"RECOMMENDED_CLASS_"*/, v24);
    sub_1BCAFF8(&StringLiteral_10919/*"RECOMMENDED_DIALOG_MESSAGE"*/, v25);
    byte_4B204A6 = 1;
  }
  v98 = 0;
  v26 = (RecommendedConfigSaveData_o *)sub_1BCB244(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v26, 0LL);
  this->fields.saveData = v26;
  p_saveData = (CGThumbnailListItem_o *)&this->fields.saveData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.saveData, (int32_t)v26, v27, v28);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10920/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10919/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_74;
  UILabel__set_text(messageLabel, gameObject, 0LL);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10917/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_74;
  UILabel__set_text(classLabel, gameObject, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_74;
  max_length = classButtonLabelList->max_length;
  v99 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v36 = sub_1BCB244(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
      RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_0_o *)v36,
        0LL);
      if ( !v36 )
        break;
      *(_QWORD *)(v36 + 24) = this;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 24), (int32_t)this, v37, v38);
      v40 = this->fields.classButtonLabelList;
      if ( !v40 )
        break;
      if ( v99 >= v40->max_length )
        goto LABEL_75;
      v41 = v40->m_Items[v99];
      v42 = System_Int32__ToString((int32_t)&v99, 0LL);
      v43 = System_String__Concat_62450424((System_String_o *)StringLiteral_10916/*"RECOMMENDED_CLASS_"*/, v42, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v43, 0LL);
      if ( !v41 )
        break;
      UILabel__set_text(v41, gameObject, 0LL);
      v44 = v99;
      *(_DWORD *)(v36 + 16) = v99;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v44 >= classButtonList->max_length )
        goto LABEL_75;
      v46 = classButtonList->m_Items[v44];
      if ( !v46 )
        break;
      onClick = v46->fields.onClick;
      if ( !onClick )
        break;
      size = (unsigned int)onClick->fields._size;
      v48 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v48;
      if ( (int)size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v44 = v99;
      }
      if ( v44 >= classButtonList->max_length )
LABEL_75:
        sub_1BCB25C(gameObject, v31, size);
      v49 = classButtonList->m_Items[v44];
      if ( !v49 )
        break;
      v50 = (System_Collections_Generic_List_object__o *)v49->fields.onClick;
      v51 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v51,
        (Il2CppObject *)v36,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v52 = (EventDelegate_o *)sub_1BCB244(EventDelegate_TypeInfo);
      EventDelegate___ctor_48466744(v52, v51, 0LL);
      if ( !v50 )
        break;
      items = v50->fields._items;
      v56 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v50->fields._version;
      if ( !items )
        break;
      v57 = v50->fields._size;
      if ( (unsigned int)v57 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v52,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + v57;
        v50->fields._size = v57 + 1;
        v58[4] = (Il2CppClass *)v52;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v52, v53, v54);
      }
      v59 = this->fields.classButtonList;
      if ( !v59 )
        break;
      if ( v99 >= v59->max_length )
        goto LABEL_75;
      gameObject = (System_String_o *)v59->m_Items[v99];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( (int)++v99 >= max_length )
        goto LABEL_35;
    }
LABEL_74:
    sub_1BCB254(gameObject, v31);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10926/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_74;
  UILabel__set_text(rarityLabel, gameObject, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_74;
  v62 = rarityButtonLabelList->max_length;
  v98 = 0;
  if ( v62 >= 1 )
  {
    do
    {
      v63 = sub_1BCB244(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
      RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_1_o *)v63,
        0LL);
      if ( !v63 )
        goto LABEL_74;
      *(_QWORD *)(v63 + 24) = this;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v63 + 24), (int32_t)this, v64, v65);
      v66 = this->fields.rarityButtonLabelList;
      if ( !v66 )
        goto LABEL_74;
      if ( v98 >= v66->max_length )
        goto LABEL_75;
      v67 = v66->m_Items[v98];
      v68 = System_Int32__ToString((int32_t)&v98, 0LL);
      v69 = System_String__Concat_62450424((System_String_o *)StringLiteral_10925/*"RECOMMENDED_RARITY_"*/, v68, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v69, 0LL);
      if ( !v67 )
        goto LABEL_74;
      UILabel__set_text(v67, gameObject, 0LL);
      v70 = v98;
      *(_DWORD *)(v63 + 16) = v98 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_74;
      if ( v70 >= rarityButtonList->max_length )
        goto LABEL_75;
      v72 = rarityButtonList->m_Items[v70];
      if ( !v72 )
        goto LABEL_74;
      v73 = v72->fields.onClick;
      if ( !v73 )
        goto LABEL_74;
      size = (unsigned int)v73->fields._size;
      v74 = v73->fields._version + 1;
      v73->fields._size = 0;
      v73->fields._version = v74;
      if ( (int)size >= 1 )
      {
        System_Array__Clear((System_Array_o *)v73->fields._items, 0, size, 0LL);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_74;
        v70 = v98;
      }
      if ( v70 >= rarityButtonList->max_length )
        goto LABEL_75;
      v75 = rarityButtonList->m_Items[v70];
      if ( !v75 )
        goto LABEL_74;
      v76 = (System_Collections_Generic_List_object__o *)v75->fields.onClick;
      v77 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v77,
        (Il2CppObject *)v63,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v78 = (EventDelegate_o *)sub_1BCB244(EventDelegate_TypeInfo);
      EventDelegate___ctor_48466744(v78, v77, 0LL);
      if ( !v76 )
        goto LABEL_74;
      v81 = v76->fields._items;
      v82 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v76->fields._version;
      if ( !v81 )
        goto LABEL_74;
      v83 = v76->fields._size;
      if ( (unsigned int)v83 >= v81->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v78,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v84 = &v81->obj.klass + v83;
        v76->fields._size = v83 + 1;
        v84[4] = (Il2CppClass *)v78;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v78, v79, v80);
      }
    }
    while ( (int)++v98 < v62 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10927/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_74;
  UILabel__set_text(resetButtonLabel, gameObject, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10918/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_74;
  UILabel__set_text(clearButtonLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_74;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_74;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  gameObject = (System_String_o *)p_saveData->klass;
  if ( !p_saveData->klass )
    goto LABEL_74;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)gameObject, 0LL) )
  {
    if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0LL);
    p_saveData->klass = (CGThumbnailListItem_c *)ConfigSaveData;
    sub_1BCAF9C(p_saveData, (int32_t)ConfigSaveData, v91, v92);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v89);
  }
  RecommenededConfigDialog__SetButtonState(this, v93);
  this->fields.closeFunc = closeCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v94, v95);
  v96 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v96, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RecommenededConfigDialog_o *v3; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v5; // x8
  unsigned __int64 v6; // x20
  __int64 v7; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v9; // x9
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  __int64 v14; // x22
  struct RecommendedConfigSaveData_o *v15; // x8
  unsigned __int64 v16; // x20
  struct UISprite_array *v17; // x9
  char v18; // w8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8

  v3 = this;
  if ( (byte_4B204A8 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, method);
    byte_4B204A8 = 1;
  }
  classButtonSpriteList = v3->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_27;
  v5 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = (unsigned int)v5;
    while ( 1 )
    {
      saveData = v3->fields.saveData;
      if ( !saveData )
        break;
      v9 = v3->fields.classButtonSpriteList;
      if ( !v9 )
        break;
      if ( v6 >= v9->max_length )
LABEL_28:
        sub_1BCB25C(this, method, v2);
      this = (RecommenededConfigDialog_o *)v9->m_Items[v6];
      if ( v6 == saveData->fields.selectClass )
      {
        p_ON_BTN_SPRITE_NAME = &v3->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      else
      {
        p_ON_BTN_SPRITE_NAME = &v3->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_ON_BTN_SPRITE_NAME, 0LL);
      if ( v7 == ++v6 )
        goto LABEL_14;
    }
LABEL_27:
    sub_1BCB254(this, method);
  }
LABEL_14:
  rarityButtonSpriteList = v3->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_27;
  v12 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)v12;
    while ( 1 )
    {
      v15 = v3->fields.saveData;
      if ( !v15 )
        goto LABEL_27;
      this = (RecommenededConfigDialog_o *)v15->fields.selectRarityList;
      if ( !this )
        goto LABEL_27;
      v16 = v13 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v13 + 1,
                                             (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
      v17 = v3->fields.rarityButtonSpriteList;
      if ( !v17 )
        goto LABEL_27;
      if ( v13 >= v17->max_length )
        goto LABEL_28;
      v18 = (char)this;
      this = (RecommenededConfigDialog_o *)v17->m_Items[v13];
      if ( (v18 & 1) != 0 )
      {
        p_OFF_BTN_SPRITE_NAME = &v3->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      else
      {
        p_OFF_BTN_SPRITE_NAME = &v3->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_OFF_BTN_SPRITE_NAME, 0LL);
      ++v13;
      if ( v14 == v16 )
        return;
    }
  }
}


void __fastcall RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  __int64 v3; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v6; // w10
  struct UISprite_array *rarityButtonSpriteList; // x9
  int max_length; // w21
  int32_t v9; // w20
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v2 = this;
  if ( (byte_4B204A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (RecommenededConfigDialog_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Clear__, v3);
    byte_4B204A7 = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_15;
  selectRarityList = saveData->fields.selectRarityList;
  saveData->fields.selectClass = 0;
  if ( !selectRarityList )
    goto LABEL_15;
  v6 = selectRarityList->fields._version + 1;
  selectRarityList->fields._size = 0;
  selectRarityList->fields._version = v6;
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_15;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 1;
    do
    {
      this = (RecommenededConfigDialog_o *)saveData->fields.selectRarityList;
      if ( !this )
        break;
      v10 = *(_QWORD *)&this->fields.m_CachedPtr;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v10 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v10 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          v9,
          *(const MethodInfo_369CBAC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v10 + 4 * m_CancellationTokenSource_low + 32) = v9;
      }
      if ( max_length == v9 )
        return;
      saveData = v2->fields.saveData;
      ++v9;
    }
    while ( saveData );
LABEL_15:
    sub_1BCB254(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog_ClickDelegate___ctor(
        RecommenededConfigDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A19E64;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A19E1C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecommenededConfigDialog_ClickDelegate__BeginInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B204B1 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isDecide);
    byte_4B204B1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__Invoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        RecommenededConfigDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_0___OpenRecommendedConfig_b__0(
        RecommenededConfigDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  RecommenededConfigDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  RecommenededConfigDialog__OnClickClass(_4__this, this->fields.classKind, 0LL);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        RecommenededConfigDialog___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_1___OpenRecommendedConfig_b__1(
        RecommenededConfigDialog___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  RecommenededConfigDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  RecommenededConfigDialog__OnClickRarity(_4__this, this->fields.rarityKind, 0LL);
}