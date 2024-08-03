void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FFD11 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17401/*"btn_bg_04"*/, v5);
    sub_1B640C8(&StringLiteral_17400/*"btn_bg_03"*/, v6);
    byte_49FFD11 = 1;
  }
  v7 = StringLiteral_17400/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17400/*"btn_bg_03"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ON_BTN_SPRITE_NAME, v7, v2, v3);
  v8 = StringLiteral_17401/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17401/*"btn_bg_04"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.OFF_BTN_SPRITE_NAME, v8, v9, v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_44687120(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_44687120(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_49FFD0A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_RecommenededConfigDialog_EndClose__, v6);
    byte_49FFD0A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, 0, v7, v8);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B6406C(p_closeCallbackFunc, 0, v3, v4);
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
  __int64 v4; // x1
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v7; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v9; // w21
  il2cpp_array_size_t v10; // w22

  if ( (byte_49FFD06 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FFD06 = 1;
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
    sub_1B6432C(titleLabel, v4);
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
    sub_1B64324(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_49FFD10 & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommenededConfigDialog_OnClickCancel__, method);
    byte_49FFD10 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RecommenededConfigDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B64324(v5);
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

  if ( (byte_49FFD0B & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommenededConfigDialog_OnClickClass__, *(_QWORD *)&kind);
    byte_49FFD0B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
    sub_1B64324(v7);
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

  if ( (byte_49FFD0E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_1B640C8(&Method_RecommenededConfigDialog_OnClickClear__, v3);
    byte_49FFD0E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0(Method_RecommenededConfigDialog_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList, saveData->fields.selectClass = 0, !selectRarityList) )
    {
      sub_1B64324(v6);
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
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_49FFD0F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1B640C8(&Method_RecommenededConfigDialog_OnClickDecide__, v4);
    byte_49FFD0F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommenededConfigDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_34918C0 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1B64324(saveData);
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
  struct RecommendedConfigSaveData_o *saveData; // x8
  const MethodInfo *v12; // x1
  struct RecommendedConfigSaveData_o *v13; // x9
  char v14; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_49FFD0C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&rarity);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1B640C8(&Method_RecommenededConfigDialog_OnClickRarity__, v7);
    byte_49FFD0C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B640E0(Method_RecommenededConfigDialog_OnClickRarity__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
                (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              RecommenededConfigDialog__SetButtonState(this, v12);
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
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1B64324(selectRarityList);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_49FFD0D & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommenededConfigDialog_OnClickReset__, method);
    byte_49FFD0D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  int32_t v28; // w3
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x23
  System_String_o *v43; // x0
  System_String_o *v44; // x24
  int v45; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v47; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  __int64 size; // x2
  int v50; // w11
  UICommonButton_o *v51; // x8
  System_Collections_Generic_List_object__o *v52; // x23
  EventDelegate_Callback_o *v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  EventDelegate_o *v56; // x22
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  struct UICommonButton_array *v63; // x8
  UILabel_o *rarityLabel; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  struct UILabel_array *rarityButtonLabelList; // x8
  int v68; // w20
  __int64 v69; // x22
  int32_t v70; // w2
  int32_t v71; // w3
  struct UILabel_array *v72; // x8
  UILabel_o *v73; // x23
  System_String_o *v74; // x0
  System_String_o *v75; // x24
  int v76; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v78; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v79; // x10
  __int64 v80; // x2
  int v81; // w11
  UICommonButton_o *v82; // x8
  System_Collections_Generic_List_object__o *v83; // x23
  EventDelegate_Callback_o *v84; // x24
  __int64 v85; // x1
  __int64 v86; // x2
  EventDelegate_o *v87; // x22
  int32_t v88; // w2
  int32_t v89; // w3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v98; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  const MethodInfo *v102; // x1
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x1
  __int64 v106; // x2
  System_Action_o *v107; // x20
  ServantStatusBattleListViewItem_o *p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v109; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v110; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FFD07 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, closeCallback);
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, v5);
    sub_1B640C8(&EventDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&RecommendedConfigSaveData_TypeInfo, v10);
    sub_1B640C8(&Method_RecommenededConfigDialog_EndOpen__, v11);
    sub_1B640C8(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v12);
    sub_1B640C8(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v13);
    sub_1B640C8(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v14);
    sub_1B640C8(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_10942/*"RECOMMENDED_DIALOG_TITLE"*/, v16);
    sub_1B640C8(&StringLiteral_10948/*"RECOMMENDED_RARITY_TITLE"*/, v17);
    sub_1B640C8(&StringLiteral_10947/*"RECOMMENDED_RARITY_"*/, v18);
    sub_1B640C8(&StringLiteral_10940/*"RECOMMENDED_CLEAR"*/, v19);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_1B640C8(&StringLiteral_10949/*"RECOMMENDED_RESET"*/, v22);
    sub_1B640C8(&StringLiteral_10939/*"RECOMMENDED_CLASS_TITLE"*/, v23);
    sub_1B640C8(&StringLiteral_10938/*"RECOMMENDED_CLASS_"*/, v24);
    sub_1B640C8(&StringLiteral_10941/*"RECOMMENDED_DIALOG_MESSAGE"*/, v25);
    byte_49FFD07 = 1;
  }
  v109 = 0;
  v26 = (RecommendedConfigSaveData_o *)sub_1B64314(RecommendedConfigSaveData_TypeInfo, closeCallback, method);
  RecommendedConfigSaveData___ctor(v26, 0LL);
  this->fields.saveData = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.saveData, (int32_t)v26, v27, v28);
  titleLabel = this->fields.titleLabel;
  p_saveData = (ServantStatusBattleListViewItem_o *)&this->fields.saveData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10942/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10941/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_74;
  UILabel__set_text(messageLabel, gameObject, 0LL);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10939/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_74;
  UILabel__set_text(classLabel, gameObject, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_74;
  max_length = classButtonLabelList->max_length;
  v110 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v37 = sub_1B64314(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v33, v34);
      System_Object___ctor((Il2CppObject *)v37, 0LL);
      if ( !v37 )
        break;
      *(_QWORD *)(v37 + 24) = this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)this, v38, v39);
      v41 = this->fields.classButtonLabelList;
      if ( !v41 )
        break;
      if ( v110 >= v41->max_length )
        goto LABEL_75;
      v42 = v41->m_Items[v110];
      v43 = System_Int32__ToString((int32_t)&v110, 0LL);
      v44 = System_String__Concat_61375396((System_String_o *)StringLiteral_10938/*"RECOMMENDED_CLASS_"*/, v43, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v44, 0LL);
      if ( !v42 )
        break;
      UILabel__set_text(v42, gameObject, 0LL);
      v45 = v110;
      *(_DWORD *)(v37 + 16) = v110;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v45 >= classButtonList->max_length )
        goto LABEL_75;
      v47 = classButtonList->m_Items[v45];
      if ( !v47 )
        break;
      onClick = v47->fields.onClick;
      if ( !onClick )
        break;
      size = (unsigned int)onClick->fields._size;
      v50 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v50;
      if ( (int)size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v45 = v110;
      }
      if ( v45 >= classButtonList->max_length )
LABEL_75:
        sub_1B6432C(gameObject, v40);
      v51 = classButtonList->m_Items[v45];
      if ( !v51 )
        break;
      v52 = (System_Collections_Generic_List_object__o *)v51->fields.onClick;
      v53 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v40, size);
      EventDelegate_Callback___ctor(
        v53,
        (Il2CppObject *)v37,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v56 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v54, v55);
      EventDelegate___ctor_46508544(v56, v53, 0LL);
      if ( !v52 )
        break;
      items = v52->fields._items;
      v60 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v52->fields._version;
      if ( !items )
        break;
      v61 = v52->fields._size;
      if ( (unsigned int)v61 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v56,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &items->obj.klass + v61;
        v52->fields._size = v61 + 1;
        v62[4] = (Il2CppClass *)v56;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
      }
      v63 = this->fields.classButtonList;
      if ( !v63 )
        break;
      if ( v110 >= v63->max_length )
        goto LABEL_75;
      gameObject = (System_String_o *)v63->m_Items[v110];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( (int)++v110 >= max_length )
        goto LABEL_35;
    }
LABEL_74:
    sub_1B64324(gameObject);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10948/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_74;
  UILabel__set_text(rarityLabel, gameObject, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_74;
  v68 = rarityButtonLabelList->max_length;
  v109 = 0;
  if ( v68 >= 1 )
  {
    do
    {
      v69 = sub_1B64314(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v65, v66);
      System_Object___ctor((Il2CppObject *)v69, 0LL);
      if ( !v69 )
        goto LABEL_74;
      *(_QWORD *)(v69 + 24) = this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 24), (int32_t)this, v70, v71);
      v72 = this->fields.rarityButtonLabelList;
      if ( !v72 )
        goto LABEL_74;
      if ( v109 >= v72->max_length )
        goto LABEL_75;
      v73 = v72->m_Items[v109];
      v74 = System_Int32__ToString((int32_t)&v109, 0LL);
      v75 = System_String__Concat_61375396((System_String_o *)StringLiteral_10947/*"RECOMMENDED_RARITY_"*/, v74, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v75, 0LL);
      if ( !v73 )
        goto LABEL_74;
      UILabel__set_text(v73, gameObject, 0LL);
      v76 = v109;
      *(_DWORD *)(v69 + 16) = v109 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_74;
      if ( v76 >= rarityButtonList->max_length )
        goto LABEL_75;
      v78 = rarityButtonList->m_Items[v76];
      if ( !v78 )
        goto LABEL_74;
      v79 = v78->fields.onClick;
      if ( !v79 )
        goto LABEL_74;
      v80 = (unsigned int)v79->fields._size;
      v81 = v79->fields._version + 1;
      v79->fields._size = 0;
      v79->fields._version = v81;
      if ( (int)v80 >= 1 )
      {
        System_Array__Clear((System_Array_o *)v79->fields._items, 0, v80, 0LL);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_74;
        v76 = v109;
      }
      if ( v76 >= rarityButtonList->max_length )
        goto LABEL_75;
      v82 = rarityButtonList->m_Items[v76];
      if ( !v82 )
        goto LABEL_74;
      v83 = (System_Collections_Generic_List_object__o *)v82->fields.onClick;
      v84 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v40, v80);
      EventDelegate_Callback___ctor(
        v84,
        (Il2CppObject *)v69,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v87 = (EventDelegate_o *)sub_1B64314(EventDelegate_TypeInfo, v85, v86);
      EventDelegate___ctor_46508544(v87, v84, 0LL);
      if ( !v83 )
        goto LABEL_74;
      v90 = v83->fields._items;
      v91 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v83->fields._version;
      if ( !v90 )
        goto LABEL_74;
      v92 = v83->fields._size;
      if ( (unsigned int)v92 >= v90->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v83,
          (Il2CppObject *)v87,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = &v90->obj.klass + v92;
        v83->fields._size = v92 + 1;
        v93[4] = (Il2CppClass *)v87;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v93 + 4), (int32_t)v87, v88, v89);
      }
    }
    while ( (int)++v109 < v68 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10949/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_74;
  UILabel__set_text(resetButtonLabel, gameObject, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10940/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_74;
  UILabel__set_text(clearButtonLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_74;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    p_saveData->klass = (ServantStatusBattleListViewItem_c *)ConfigSaveData;
    sub_1B6406C(p_saveData, (int32_t)ConfigSaveData, v100, v101);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v98);
  }
  RecommenededConfigDialog__SetButtonState(this, v102);
  this->fields.closeFunc = closeCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v103, v104);
  v107 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v105, v106);
  System_Action___ctor(v107, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v107, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v4; // x8
  unsigned __int64 v5; // x20
  __int64 v6; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v8; // x9
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  __int64 v13; // x22
  struct RecommendedConfigSaveData_o *v14; // x8
  unsigned __int64 v15; // x20
  struct UISprite_array *v16; // x9
  char v17; // w8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8

  v2 = this;
  if ( (byte_49FFD09 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, method);
    byte_49FFD09 = 1;
  }
  classButtonSpriteList = v2->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_27;
  v4 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v4;
    while ( 1 )
    {
      saveData = v2->fields.saveData;
      if ( !saveData )
        break;
      v8 = v2->fields.classButtonSpriteList;
      if ( !v8 )
        break;
      if ( v5 >= v8->max_length )
LABEL_28:
        sub_1B6432C(this, method);
      this = (RecommenededConfigDialog_o *)v8->m_Items[v5];
      if ( v5 == saveData->fields.selectClass )
      {
        p_ON_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      else
      {
        p_ON_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_ON_BTN_SPRITE_NAME, 0LL);
      if ( v6 == ++v5 )
        goto LABEL_14;
    }
LABEL_27:
    sub_1B64324(this);
  }
LABEL_14:
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_27;
  v11 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v11;
    while ( 1 )
    {
      v14 = v2->fields.saveData;
      if ( !v14 )
        goto LABEL_27;
      this = (RecommenededConfigDialog_o *)v14->fields.selectRarityList;
      if ( !this )
        goto LABEL_27;
      v15 = v12 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v12 + 1,
                                             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      v16 = v2->fields.rarityButtonSpriteList;
      if ( !v16 )
        goto LABEL_27;
      if ( v12 >= v16->max_length )
        goto LABEL_28;
      v17 = (char)this;
      this = (RecommenededConfigDialog_o *)v16->m_Items[v12];
      if ( (v17 & 1) != 0 )
      {
        p_OFF_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      else
      {
        p_OFF_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_OFF_BTN_SPRITE_NAME, 0LL);
      ++v12;
      if ( v13 == v15 )
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
  if ( (byte_49FFD08 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (RecommenededConfigDialog_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v3);
    byte_49FFD08 = 1;
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
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B06A4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B065C;
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
  if ( (byte_49FFD12 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    byte_49FFD12 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  RecommenededConfigDialog__OnClickClass(this->fields.__4__this, this->fields.classKind, v2);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}