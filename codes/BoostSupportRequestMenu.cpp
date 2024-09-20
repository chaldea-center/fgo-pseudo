void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4A560B2 & 1) == 0 )
  {
    sub_1B885B0(&BoostSupportRequestMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_10995/*"RECOMMENDED_ICON"*/);
    byte_4A560B2 = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_10995/*"RECOMMENDED_ICON"*/;
  sub_1B88554(BoostSupportRequestMenu_TypeInfo->static_fields, StringLiteral_10995/*"RECOMMENDED_ICON"*/);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A560B1 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A560B1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall BoostSupportRequestMenu__Callback(
        BoostSupportRequestMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v11; // x19

  if ( (byte_4A560AA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_1B885B0(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_4A560AA = 1;
  }
  v7 = sub_1B887FC(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554(v7 + 16, this);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v11, 0LL);
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
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A560AB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestMenu_EndClose__);
    byte_4A560AB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
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
    sub_1B88554(p_closeCallbackFunc, 0LL);
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
    sub_1B8880C(0LL, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1B8880C(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4A560AC & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestMenu_OnClickCancel__);
    byte_4A560AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A560AD & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestMenu_OnClickDecide__);
    byte_4A560AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v8; // x8

  if ( (byte_4A560AF & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__);
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A560AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1B8880C(0LL, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_17525/*"btn_off"*/;
    else
      v8 = &StringLiteral_17526/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  _QWORD *v9; // x0
  _BOOL4 isBoostItemUseConfirm; // w21
  System_Reflection_MethodBase_o *v11; // x0
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v13; // x21
  BoostFunctionUtility_CallbackFunc_o *v14; // x22
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v21; // x0
  int32_t v22; // w1
  struct BoostEntity_o *v23; // x8

  if ( (byte_4A560AE & 1) == 0 )
  {
    sub_1B885B0(&Method_BoostSupportRequestMenu_Callback__);
    sub_1B885B0(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1B885B0(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A560AE = 1;
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
      v15 = Method_BoostSupportRequestMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B885C8();
      v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
    }
    else
    {
      if ( kind == 2 )
      {
        v9 = Method_BoostSupportRequestMenu_OnSelectItem__;
        isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1B885C8();
        v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
        if ( isBoostItemUseConfirm )
        {
          OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            boostEntity = Item->fields.boostEntity;
            v13 = (CommonUI_o *)itemListViewManager;
            v14 = (BoostFunctionUtility_CallbackFunc_o *)sub_1B887FC(BoostFunctionUtility_CallbackFunc_TypeInfo);
            BoostFunctionUtility_CallbackFunc___ctor(
              v14,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v13 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v13, boostEntity, v14, 0LL);
              return;
            }
          }
LABEL_29:
          sub_1B8880C(itemListViewManager, *(_QWORD *)&kind);
        }
        OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0LL);
        if ( !Item )
          goto LABEL_29;
        v23 = Item->fields.boostEntity;
        if ( v23 )
          id = v23->fields.id;
        else
          id = 0;
        v22 = 2;
        v21 = this;
      }
      else
      {
        v17 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1B885C8();
        v18 = (System_Reflection_MethodBase_o *)sub_1B88594(v17, v17[4]);
        OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0LL);
        id = -1;
        v21 = this;
        v22 = 0;
      }
      BoostSupportRequestMenu__Callback(v21, v22, id, v19);
    }
  }
}


void __fastcall BoostSupportRequestMenu__Open(
        BoostSupportRequestMenu_o *this,
        int32_t questId,
        int32_t questPhase,
        BoostFunctionUtility_CallbackFunc_o *callback,
        bool isRetryBattle,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  void *Instance; // x0
  __int64 v13; // x1
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v19; // x21
  BoostSupportRequestMenu_c *v20; // x0
  System_Int32_array *ScriptIntArrayParam; // x24
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v23; // x3
  BoostEntity_array *v24; // x22
  System_Collections_Generic_List_int__o *v25; // x23
  int max_length; // w8
  unsigned int v27; // w19
  BoostEntity_o *v28; // x24
  int v29; // w8
  void *v30; // x24
  unsigned int v31; // w27
  __int64 v32; // x28
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  struct UserItemEntity_array *v36; // x0
  int32_t v37; // w25
  struct UserItemEntity_array *mUsrItemEntityList; // x28
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x26
  int64_t UserId; // x27
  __int64 Item; // x0
  __int64 v44; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v46; // x1
  UserItemEntity_o *v47; // x26
  Il2CppClass **v48; // x0
  const MethodInfo *v49; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v51; // x24
  struct EventItemComponent_array *v52; // x8
  EventItemComponent_o *v53; // x24
  struct EventItemComponent_array *v54; // x8
  EventItemComponent_o *v55; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v57; // x22
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x2
  __int64 *v60; // x8
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  System_Action_o *v63; // x20
  const MethodInfo *v64; // x3
  __int64 v65; // x0
  bool v66; // [xsp+Ch] [xbp-A4h]
  System_Int32_array *recommendedBoostIds; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v68; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v69; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A560A8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_1B885B0(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1B885B0(&Method_BoostSupportRequestMenu_Open__);
    sub_1B885B0(&BoostSupportRequestMenu_TypeInfo);
    sub_1B885B0(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1B885B0(&UserItemEntity___TypeInfo);
    sub_1B885B0(&StringLiteral_3076/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_3082/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_1B885B0(&StringLiteral_3075/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3078/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A560A8 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  this->fields.callbackFunc = callback;
  sub_1B88554(&this->fields.callbackFunc, callback);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3082/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_79;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3076/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_79;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3078/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_79;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
  decideLabel = this->fields.decideLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3075/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_79;
  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_79;
  UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_79;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( Entity )
  {
    v19 = Entity;
    v20 = BoostSupportRequestMenu_TypeInfo;
    if ( !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v20 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v19, v20->static_fields->RECOMMENDED_ICON, 0LL, 0LL);
  }
  else
  {
    ScriptIntArrayParam = 0LL;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  v66 = isRetryBattle;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Instance,
                                                         questId,
                                                         questPhase,
                                                         0LL);
  recommendedBoostIds = ScriptIntArrayParam;
  v24 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          ScriptIntArrayParam,
          v23);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v24 )
    goto LABEL_79;
  max_length = v24->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        goto LABEL_80;
      v28 = v24->m_Items[v27];
      if ( !v28 )
        goto LABEL_79;
      if ( v28->fields.commonConsumeId )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_79;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_79;
        Instance = CommonConsumeMaster__GetIdEntityList(
                     (CommonConsumeMaster_o *)Instance,
                     v28->fields.commonConsumeId,
                     0LL);
        if ( !Instance )
          goto LABEL_79;
        v29 = *((_DWORD *)Instance + 6);
        v30 = Instance;
        if ( v29 >= 1 )
          break;
      }
LABEL_41:
      max_length = v24->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_42;
    }
    v31 = 0;
    while ( v31 < v29 )
    {
      v32 = *((_QWORD *)v30 + (int)v31 + 4);
      if ( !v32 )
        goto LABEL_79;
      if ( *(_DWORD *)(v32 + 24) == 1 )
      {
        if ( !v25 )
          goto LABEL_79;
        Instance = (void *)System_Collections_Generic_List_int___Contains(
                             v25,
                             *(_DWORD *)(v32 + 28),
                             (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v13 = *(unsigned int *)(v32 + 28);
          items = v25->fields._items;
          v34 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_79;
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v25,
              v13,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v25->fields._size = size + 1;
            items->m_Items[size + 1] = v13;
          }
        }
      }
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
        goto LABEL_41;
    }
LABEL_80:
    sub_1B88814(Instance, v13);
  }
LABEL_42:
  if ( !v25 )
    goto LABEL_79;
  Instance = this->fields.eventItemsInfoBase;
  if ( !Instance )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v25->fields._size > 0, 0LL);
  v36 = (struct UserItemEntity_array *)sub_1B88658(UserItemEntity___TypeInfo, (unsigned int)v25->fields._size);
  this->fields.mUsrItemEntityList = v36;
  sub_1B88554(&this->fields.mUsrItemEntityList, v36);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v25,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v37 = 0;
  v69 = v68;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v69,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    mUsrItemEntityList = this->fields.mUsrItemEntityList;
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v39 )
      sub_1B8880C(0LL, v40);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)v39,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    Item = System_Collections_Generic_List_int___get_Item(
             v25,
             v37,
             (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MasterData_object )
      sub_1B8880C(Item, v44);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)MasterData_object, UserId, Item, 0LL);
    if ( !mUsrItemEntityList )
      sub_1B8880C(EntityDefinitely, v46);
    v47 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1B886EC(
                                               EntityDefinitely,
                                               mUsrItemEntityList->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v65 = sub_1B88830();
        sub_1B886D8(v65, 0LL);
      }
    }
    if ( v37 >= mUsrItemEntityList->max_length )
      sub_1B88814(EntityDefinitely, v46);
    v48 = &mUsrItemEntityList->obj.klass + v37;
    v48[4] = (Il2CppClass *)v47;
    sub_1B88554(v48 + 4, v47);
    ++v37;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v69,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v25->fields._size < 1 )
    goto LABEL_68;
  eventItemIconList = this->fields.eventItemIconList;
  if ( !eventItemIconList )
    goto LABEL_79;
  if ( !eventItemIconList->max_length )
    goto LABEL_80;
  v51 = eventItemIconList->m_Items[0];
  Instance = (void *)System_Collections_Generic_List_int___get_Item(
                       v25,
                       0,
                       (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v51 )
    goto LABEL_79;
  EventItemComponent__Set(v51, (int32_t)Instance, 0LL);
  if ( v25->fields._size < 2 )
    goto LABEL_68;
  v52 = this->fields.eventItemIconList;
  if ( !v52 )
    goto LABEL_79;
  if ( v52->max_length <= 1 )
    goto LABEL_80;
  v53 = v52->m_Items[1];
  Instance = (void *)System_Collections_Generic_List_int___get_Item(
                       v25,
                       1,
                       (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v53 )
    goto LABEL_79;
  EventItemComponent__Set(v53, (int32_t)Instance, 0LL);
  if ( v25->fields._size < 3 )
    goto LABEL_68;
  v54 = this->fields.eventItemIconList;
  if ( !v54 )
    goto LABEL_79;
  if ( v54->max_length <= 2 )
    goto LABEL_80;
  v55 = v54->m_Items[2];
  Instance = (void *)System_Collections_Generic_List_int___get_Item(
                       v25,
                       2,
                       (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v55 )
LABEL_79:
    sub_1B8880C(Instance, v13);
  EventItemComponent__Set(v55, (int32_t)Instance, 0LL);
LABEL_68:
  Instance = this->fields.itemListViewManager;
  if ( !Instance )
    goto LABEL_79;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Instance,
    v24,
    recommendedBoostIds,
    this->fields.mUsrItemEntityList,
    v49);
  itemListViewManager = this->fields.itemListViewManager;
  v57 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1B887FC(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v57,
    (Il2CppObject *)this,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v58);
  if ( !itemListViewManager )
    goto LABEL_79;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v57, v59);
  Instance = this->fields.setupConfirmSprite;
  if ( !Instance )
    goto LABEL_79;
  v60 = &StringLiteral_17525/*"btn_off"*/;
  if ( this->fields.isBoostItemUseConfirm )
    v60 = &StringLiteral_17526/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v60, 0LL);
  if ( !v66 )
  {
    v61 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1B885C8();
    v62 = (System_Reflection_MethodBase_o *)sub_1B88594(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
  }
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.state = 1;
  v63 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, v64);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x24
  __int64 v11; // x25
  BoostEntity_o *v12; // x23
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  System_Collections_Generic_List_object__o *v21; // x0
  System_Collections_Generic_List_object__o *v23; // x0

  if ( (byte_4A560A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4A560A9 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_32;
  if ( !recommendedBoostIds || !*(_QWORD *)&recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)*(_QWORD *)&boostEntityList->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)*(_QWORD *)&boostEntityList->max_length - 1LL;
    while ( 1 )
    {
      v12 = boostEntityList->m_Items[v10];
      if ( !v12 )
        goto LABEL_22;
      v8 = System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
             v12->fields.id,
             (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v8 & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_32;
        items = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v7->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v16 = &items->obj.klass + size;
          v7->fields._size = size + 1;
LABEL_18:
          v16[4] = (Il2CppClass *)v12;
          v8 = sub_1B88554(v16 + 4, v12);
          goto LABEL_22;
        }
        v20 = v14[4];
        v21 = v7;
      }
      else
      {
        if ( !v6 )
          goto LABEL_32;
        v17 = v6->fields._items;
        v18 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v6->fields._version;
        if ( !v17 )
          goto LABEL_32;
        v19 = v6->fields._size;
        if ( (unsigned int)v19 < v17->max_length )
        {
          v16 = &v17->obj.klass + v19;
          v6->fields._size = v19 + 1;
          goto LABEL_18;
        }
        v20 = v18[4];
        v21 = v6;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)v12,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20 + 192) + 112LL));
LABEL_22:
      if ( v11 == v10 )
        break;
      if ( ++v10 >= (unsigned __int64)boostEntityList->max_length )
        sub_1B88814(v8, v9);
    }
  }
  if ( !v7 )
    goto LABEL_32;
  if ( v7->fields._size < 1 )
  {
    if ( v6 )
    {
      v23 = v6;
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v23,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1B8880C(v8, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v23 = v7;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v23,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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

  if ( (byte_4A560A6 & 1) == 0 )
  {
    sub_1B885B0(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4A560A6 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1B88ACC(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4A560B0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A560B0 = 1;
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

  if ( (byte_4A560A7 & 1) == 0 )
  {
    sub_1B885B0(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4A560A7 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1B88ACC(v8);
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
    sub_1B8880C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1B88554(p_callbackFunc, 0LL);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      *(_QWORD *)&v5->fields.extra_arg);
}