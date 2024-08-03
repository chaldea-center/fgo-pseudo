void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49F74E2 & 1) == 0 )
  {
    sub_1B640C8(&BoostSupportRequestMenu_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_10943/*"RECOMMENDED_ICON"*/, v2);
    byte_49F74E2 = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_10943/*"RECOMMENDED_ICON"*/;
  sub_1B6406C(BoostSupportRequestMenu_TypeInfo->static_fields);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F74E1 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F74E1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__Callback(
        BoostSupportRequestMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  _BOOL4 isBoostItemUseConfirm; // w19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x19

  if ( (byte_49F74DA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&OptionManager_TypeInfo, v7);
    sub_1B640C8(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v8);
    sub_1B640C8(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v9);
    byte_49F74DA = 1;
  }
  v10 = sub_1B64314(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C(v10 + 16);
  *(_DWORD *)(v10 + 24) = result;
  *(_DWORD *)(v10 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v15, 0LL);
}


void __fastcall BoostSupportRequestMenu__CheckSerializeFieldAssertion(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoostSupportRequestMenu__Close(
        BoostSupportRequestMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49F74DB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_BoostSupportRequestMenu_EndClose__, v5);
    byte_49F74DB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, v9);
}


void __fastcall BoostSupportRequestMenu__EndClose(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostSupportRequestMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B6406C(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestMenu__EndOpen(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestMenu__GetItem(
        BoostSupportRequestMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1B64324(0LL);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1B64324(0LL);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_49F74DC & 1) == 0 )
  {
    sub_1B640C8(&Method_BoostSupportRequestMenu_OnClickCancel__, method);
    byte_49F74DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_49F74DD & 1) == 0 )
  {
    sub_1B640C8(&Method_BoostSupportRequestMenu_OnClickDecide__, method);
    byte_49F74DD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v9; // x8

  if ( (byte_49F74DF & 1) == 0 )
  {
    sub_1B640C8(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__, method);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v3);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v4);
    byte_49F74DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0();
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1B64324(0LL);
    if ( isBoostItemUseConfirm )
      v9 = &StringLiteral_17455/*"btn_off"*/;
    else
      v9 = &StringLiteral_17456/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  _QWORD *v12; // x0
  _BOOL4 isBoostItemUseConfirm; // w21
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v18; // x21
  BoostFunctionUtility_CallbackFunc_o *v19; // x22
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v26; // x0
  int32_t v27; // w1
  struct BoostEntity_o *v28; // x8

  if ( (byte_49F74DE & 1) == 0 )
  {
    sub_1B640C8(&Method_BoostSupportRequestMenu_Callback__, *(_QWORD *)&kind);
    sub_1B640C8(&Method_BoostSupportRequestMenu_OnSelectItem__, v7);
    sub_1B640C8(&BoostFunctionUtility_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49F74DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_29;
      Item = BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      v20 = Method_BoostSupportRequestMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B640E0();
      v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0LL);
    }
    else
    {
      if ( kind == 2 )
      {
        v12 = Method_BoostSupportRequestMenu_OnSelectItem__;
        isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1B640E0();
        v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
        if ( isBoostItemUseConfirm )
        {
          OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            boostEntity = Item->fields.boostEntity;
            v18 = (CommonUI_o *)itemListViewManager;
            v19 = (BoostFunctionUtility_CallbackFunc_o *)sub_1B64314(
                                                           BoostFunctionUtility_CallbackFunc_TypeInfo,
                                                           v15,
                                                           v16);
            BoostFunctionUtility_CallbackFunc___ctor(
              v19,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v18 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v18, boostEntity, v19, 0LL);
              return;
            }
          }
LABEL_29:
          sub_1B64324(itemListViewManager);
        }
        OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0LL);
        if ( !Item )
          goto LABEL_29;
        v28 = Item->fields.boostEntity;
        if ( v28 )
          id = v28->fields.id;
        else
          id = 0;
        v27 = 2;
        v26 = this;
      }
      else
      {
        v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1B640E0();
        v23 = (System_Reflection_MethodBase_o *)sub_1B640AC(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 1, 0LL);
        id = -1;
        v26 = this;
        v27 = 0;
      }
      BoostSupportRequestMenu__Callback(v26, v27, id, v24);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__Open(
        BoostSupportRequestMenu_o *this,
        int32_t questId,
        int32_t questPhase,
        BoostFunctionUtility_CallbackFunc_o *callback,
        bool isRetryBattle,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  UILabel_o *titleLabel; // x21
  void *Instance; // x0
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v49; // x21
  BoostSupportRequestMenu_c *v50; // x0
  System_Int32_array *ScriptIntArrayParam; // x24
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v53; // x3
  BoostEntity_array *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_int__o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  int max_length; // w8
  unsigned int v62; // w19
  BoostEntity_o *v63; // x24
  int v64; // w8
  void *v65; // x24
  unsigned int v66; // w27
  __int64 v67; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  int32_t v71; // w25
  struct UserItemEntity_array *mUsrItemEntityList; // x28
  Il2CppObject *v73; // x0
  Il2CppObject *MasterData_object; // x26
  int64_t UserId; // x27
  __int64 Item; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  UserItemEntity_o *v81; // x26
  Il2CppClass **v82; // x0
  const MethodInfo *v83; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v85; // x24
  struct EventItemComponent_array *v86; // x8
  EventItemComponent_o *v87; // x24
  struct EventItemComponent_array *v88; // x8
  EventItemComponent_o *v89; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  __int64 v91; // x1
  __int64 v92; // x2
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v93; // x22
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x2
  __int64 *v96; // x8
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  System_Action_o *v101; // x20
  const MethodInfo *v102; // x3
  __int64 v103; // x0
  bool v104; // [xsp+Ch] [xbp-A4h]
  System_Int32_array *recommendedBoostIds; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v106; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v107; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49F74D8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1B640C8(&Method_BoostSupportRequestMenu_EndOpen__, v11);
    sub_1B640C8(&Method_BoostSupportRequestMenu_OnSelectItem__, v12);
    sub_1B640C8(&Method_BoostSupportRequestMenu_Open__, v13);
    sub_1B640C8(&BoostSupportRequestMenu_TypeInfo, v14);
    sub_1B640C8(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v27);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B640C8(&LocalizationManager_TypeInfo, v29);
    sub_1B640C8(&NetworkManager_TypeInfo, v30);
    sub_1B640C8(&OptionManager_TypeInfo, v31);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B640C8(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v33);
    sub_1B640C8(&UserItemEntity___TypeInfo, v34);
    sub_1B640C8(&StringLiteral_3056/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v35);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v36);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v37);
    sub_1B640C8(&StringLiteral_3062/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v38);
    sub_1B640C8(&StringLiteral_3055/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v39);
    sub_1B640C8(&StringLiteral_3058/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v40);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v41);
    byte_49F74D8 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  this->fields.callbackFunc = callback;
  sub_1B6406C(&this->fields.callbackFunc);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3062/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_79;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3056/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_79;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3058/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_79;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3055/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_79;
  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_79;
  UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_79;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( Entity )
  {
    v49 = Entity;
    v50 = BoostSupportRequestMenu_TypeInfo;
    if ( !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v50 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v49, v50->static_fields->RECOMMENDED_ICON, 0LL, 0LL);
  }
  else
  {
    ScriptIntArrayParam = 0LL;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v104 = isRetryBattle;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Instance,
                                                         questId,
                                                         questPhase,
                                                         0LL);
  recommendedBoostIds = ScriptIntArrayParam;
  v54 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          ScriptIntArrayParam,
          v53);
  v57 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v55, v56);
  System_Collections_Generic_List_int____ctor(
    v57,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v54 )
    goto LABEL_79;
  max_length = v54->max_length;
  if ( max_length >= 1 )
  {
    v62 = 0;
    while ( 1 )
    {
      if ( v62 >= max_length )
        goto LABEL_80;
      v63 = v54->m_Items[v62];
      if ( !v63 )
        goto LABEL_79;
      if ( v63->fields.commonConsumeId )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_79;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_79;
        Instance = CommonConsumeMaster__GetIdEntityList(
                     (CommonConsumeMaster_o *)Instance,
                     v63->fields.commonConsumeId,
                     0LL);
        if ( !Instance )
          goto LABEL_79;
        v64 = *((_DWORD *)Instance + 6);
        v65 = Instance;
        if ( v64 >= 1 )
          break;
      }
LABEL_41:
      max_length = v54->max_length;
      if ( (int)++v62 >= max_length )
        goto LABEL_42;
    }
    v66 = 0;
    while ( v66 < v64 )
    {
      v67 = *((_QWORD *)v65 + (int)v66 + 4);
      if ( !v67 )
        goto LABEL_79;
      if ( *(_DWORD *)(v67 + 24) == 1 )
      {
        if ( !v57 )
          goto LABEL_79;
        Instance = (void *)System_Collections_Generic_List_int___Contains(
                             v57,
                             *(_DWORD *)(v67 + 28),
                             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v58 = *(unsigned int *)(v67 + 28);
          items = v57->fields._items;
          v69 = Method_System_Collections_Generic_List_int__Add__;
          ++v57->fields._version;
          if ( !items )
            goto LABEL_79;
          size = v57->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v57,
              v58,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v57->fields._size = size + 1;
            items->m_Items[size + 1] = v58;
          }
        }
      }
      v64 = *((_DWORD *)v65 + 6);
      if ( (int)++v66 >= v64 )
        goto LABEL_41;
    }
LABEL_80:
    sub_1B6432C(Instance, v58, v59, v60);
  }
LABEL_42:
  if ( !v57 )
    goto LABEL_79;
  Instance = this->fields.eventItemsInfoBase;
  if ( !Instance )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v57->fields._size > 0, 0LL);
  this->fields.mUsrItemEntityList = (struct UserItemEntity_array *)sub_1B64170(
                                                                     UserItemEntity___TypeInfo,
                                                                     (unsigned int)v57->fields._size);
  sub_1B6406C(&this->fields.mUsrItemEntityList);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v106,
    v57,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v71 = 0;
  v107 = v106;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v107,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    mUsrItemEntityList = this->fields.mUsrItemEntityList;
    v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v73 )
      sub_1B64324(0LL);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v73,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    Item = System_Collections_Generic_List_int___get_Item(
             v57,
             v71,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MasterData_object )
      sub_1B64324(Item);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, UserId, Item, 0LL);
    if ( !mUsrItemEntityList )
      sub_1B64324(EntityDefinitely);
    v81 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1B64204(
                                               EntityDefinitely,
                                               mUsrItemEntityList->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v103 = sub_1B64348();
        sub_1B641F0(v103, 0LL);
      }
    }
    if ( v71 >= mUsrItemEntityList->max_length )
      sub_1B6432C(EntityDefinitely, v78, v79, v80);
    v82 = &mUsrItemEntityList->obj.klass + v71;
    v82[4] = (Il2CppClass *)v81;
    sub_1B6406C(v82 + 4);
    ++v71;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v107,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v57->fields._size < 1 )
    goto LABEL_68;
  eventItemIconList = this->fields.eventItemIconList;
  if ( !eventItemIconList )
    goto LABEL_79;
  if ( !eventItemIconList->max_length )
    goto LABEL_80;
  v85 = eventItemIconList->m_Items[0];
  Instance = (void *)System_Collections_Generic_List_int___get_Item(
                       v57,
                       0,
                       (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v85 )
    goto LABEL_79;
  EventItemComponent__Set(v85, (int32_t)Instance, 0LL);
  if ( v57->fields._size < 2 )
    goto LABEL_68;
  v86 = this->fields.eventItemIconList;
  if ( !v86 )
    goto LABEL_79;
  if ( v86->max_length <= 1 )
    goto LABEL_80;
  v87 = v86->m_Items[1];
  Instance = (void *)System_Collections_Generic_List_int___get_Item(
                       v57,
                       1,
                       (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v87 )
    goto LABEL_79;
  EventItemComponent__Set(v87, (int32_t)Instance, 0LL);
  if ( v57->fields._size < 3 )
    goto LABEL_68;
  v88 = this->fields.eventItemIconList;
  if ( !v88 )
    goto LABEL_79;
  if ( v88->max_length <= 2 )
    goto LABEL_80;
  v89 = v88->m_Items[2];
  Instance = (void *)System_Collections_Generic_List_int___get_Item(
                       v57,
                       2,
                       (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v89 )
LABEL_79:
    sub_1B64324(Instance);
  EventItemComponent__Set(v89, (int32_t)Instance, 0LL);
LABEL_68:
  Instance = this->fields.itemListViewManager;
  if ( !Instance )
    goto LABEL_79;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Instance,
    v54,
    recommendedBoostIds,
    this->fields.mUsrItemEntityList,
    v83);
  itemListViewManager = this->fields.itemListViewManager;
  v93 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v91,
                                                                   v92);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v93,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v94);
  if ( !itemListViewManager )
    goto LABEL_79;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v93, v95);
  Instance = this->fields.setupConfirmSprite;
  if ( !Instance )
    goto LABEL_79;
  v96 = &StringLiteral_17455/*"btn_off"*/;
  if ( this->fields.isBoostItemUseConfirm )
    v96 = &StringLiteral_17456/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v96, 0LL);
  if ( !v104 )
  {
    v97 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v97 = (_QWORD *)sub_1B640E0();
    v98 = (System_Reflection_MethodBase_o *)sub_1B640AC(v97, v97[4]);
    OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0LL);
  }
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.state = 1;
  v101 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v99, v100);
  System_Action___ctor(v101, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v101, 0, v102);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x24
  __int64 v21; // x25
  BoostEntity_o *v22; // x23
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *v31; // x0
  System_Collections_Generic_List_object__o *v33; // x0

  if ( (byte_49F74D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, boostEntityList);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoostEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_49F74D9 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       boostEntityList,
                                                       recommendedBoostIds);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_32;
  if ( !recommendedBoostIds || !*(_QWORD *)&recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)*(_QWORD *)&boostEntityList->max_length >= 1 )
  {
    v20 = 0LL;
    v21 = (unsigned int)*(_QWORD *)&boostEntityList->max_length - 1LL;
    while ( 1 )
    {
      v22 = boostEntityList->m_Items[v20];
      if ( !v22 )
        goto LABEL_22;
      v16 = System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
              v22->fields.id,
              (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v16 & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_32;
        items = v15->fields._items;
        v24 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v15->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v26 = &items->obj.klass + size;
          v15->fields._size = size + 1;
LABEL_18:
          v26[4] = (Il2CppClass *)v22;
          v16 = sub_1B6406C(v26 + 4);
          goto LABEL_22;
        }
        v30 = v24[4];
        v31 = v15;
      }
      else
      {
        if ( !v12 )
          goto LABEL_32;
        v27 = v12->fields._items;
        v28 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v12->fields._version;
        if ( !v27 )
          goto LABEL_32;
        v29 = v12->fields._size;
        if ( (unsigned int)v29 < v27->max_length )
        {
          v26 = &v27->obj.klass + v29;
          v12->fields._size = v29 + 1;
          goto LABEL_18;
        }
        v30 = v28[4];
        v31 = v12;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        (Il2CppObject *)v22,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30 + 192) + 112LL));
LABEL_22:
      if ( v21 == v20 )
        break;
      if ( ++v20 >= (unsigned __int64)boostEntityList->max_length )
        sub_1B6432C(v16, v17, v18, v19);
    }
  }
  if ( !v15 )
    goto LABEL_32;
  if ( v15->fields._size < 1 )
  {
    if ( v12 )
    {
      v33 = v12;
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v33,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1B64324(v16);
  }
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v33 = v15;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v33,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


void __fastcall BoostSupportRequestMenu__add_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestMenu_o *v11; // x0
  BoostFunctionUtility_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F74D6 & 1) == 0 )
  {
    sub_1B640C8(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_49F74D6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1B645E4(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49F74E0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F74E0 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void __fastcall BoostSupportRequestMenu__remove_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_49F74D7 & 1) == 0 )
  {
    sub_1B640C8(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_49F74D7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1B645E4(v8);
  BoostSupportRequestMenu__GetItem(v11, v12, v13);
}


void __fastcall BoostSupportRequestMenu___c__DisplayClass26_0___ctor(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu___c__DisplayClass26_0___Callback_b__0(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct BoostSupportRequestMenu_o *_4__this; // x0
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x0
  struct BoostFunctionUtility_CallbackFunc_o *v5; // x20
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1B6406C(p_callbackFunc);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      *(_QWORD *)&v5->fields.extra_arg);
}