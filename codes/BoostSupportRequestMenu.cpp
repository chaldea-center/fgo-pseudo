void BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4D2A4F3 & 1) == 0 )
  {
    sub_1C93AD4(&BoostSupportRequestMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_11087/*"RECOMMENDED_ICON"*/);
    byte_4D2A4F3 = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11087/*"RECOMMENDED_ICON"*/;
  sub_1C93A78(BoostSupportRequestMenu_TypeInfo->static_fields, StringLiteral_11087/*"RECOMMENDED_ICON"*/);
}


void BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2A4F2 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2A4F2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void BoostSupportRequestMenu__Callback(
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

  if ( (byte_4D2A4EB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_1C93AD4(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_4D2A4EB = 1;
  }
  v7 = sub_1C93D20(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78(v7 + 16, this);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0);
  OptionManager__SaveData(v11, 0);
}


void BoostSupportRequestMenu__CheckSerializeFieldAssertion(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ;
}


void BoostSupportRequestMenu__Close(
        BoostSupportRequestMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4D2A4EC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BoostSupportRequestMenu_EndClose__);
    byte_4D2A4EC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void BoostSupportRequestMenu__EndClose(BoostSupportRequestMenu_o *this, const MethodInfo *method)
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
    *p_closeCallbackFunc = 0;
    sub_1C93A78(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void BoostSupportRequestMenu__EndOpen(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


BoostSupportRequsetItemListViewItem_o *BoostSupportRequestMenu__GetItem(
        BoostSupportRequestMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C93D2C(0, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C93D2C(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4D2A4ED & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostSupportRequestMenu_OnClickCancel__);
    byte_4D2A4ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC();
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 0, -1, v5);
  }
}


void BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4D2A4EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostSupportRequestMenu_OnClickDecide__);
    byte_4D2A4EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC();
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v5);
  }
}


void BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v8; // x8

  if ( (byte_4D2A4F0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__);
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2A4F0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC();
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1C93D2C(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_17637/*"btn_off"*/;
    else
      v8 = &StringLiteral_17638/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v12; // x21
  BoostFunctionUtility_CallbackFunc_o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v20; // x0
  int32_t v21; // w1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  struct BoostEntity_o *v24; // x8

  if ( (byte_4D2A4EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_BoostSupportRequestMenu_Callback__);
    sub_1C93AD4(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1C93AD4(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2A4EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_33;
      Item = BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      v14 = Method_BoostSupportRequestMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C93AEC();
      v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
    }
    else
    {
      if ( kind == 2 )
      {
        if ( this->fields.isBoostItemUseConfirm )
        {
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)this->fields.setupConfirmSprite;
          if ( !itemListViewManager )
            goto LABEL_33;
          if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)itemListViewManager, 0) )
          {
            v9 = Method_BoostSupportRequestMenu_OnSelectItem__;
            if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
              v9 = (_QWORD *)sub_1C93AEC();
            v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
            OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              boostEntity = Item->fields.boostEntity;
              v12 = (CommonUI_o *)itemListViewManager;
              v13 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C93D20(BoostFunctionUtility_CallbackFunc_TypeInfo);
              BoostFunctionUtility_CallbackFunc___ctor(
                v13,
                (Il2CppObject *)this,
                Method_BoostSupportRequestMenu_Callback__,
                0);
              if ( v12 )
              {
                CommonUI__OpenBoostSupportRequestReconfirmationMenu(v12, boostEntity, v13, 0);
                return;
              }
            }
LABEL_33:
            sub_1C93D2C(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1C93AEC();
        v23 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 8, 0, 0);
        if ( !Item )
          goto LABEL_33;
        v24 = Item->fields.boostEntity;
        if ( v24 )
          id = v24->fields.id;
        else
          id = 0;
        v21 = 2;
        v20 = this;
      }
      else
      {
        v16 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1C93AEC();
        v17 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
        id = -1;
        v20 = this;
        v21 = 0;
      }
      BoostSupportRequestMenu__Callback(v20, v21, id, v18);
    }
  }
}


void BoostSupportRequestMenu__Open(
        BoostSupportRequestMenu_o *this,
        int32_t questId,
        int32_t questPhase,
        BoostFunctionUtility_CallbackFunc_o *callback,
        bool isRetryBattle,
        const MethodInfo *method)
{
  void *Master_object; // x0
  __int64 v12; // x1
  UILabel_o *titleLabel; // x21
  int32_t ScriptIntParam; // w0
  struct System_Collections_Generic_List_T__o *list; // x8
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v19; // x24
  bool v20; // w25
  System_String_o *v21; // x0
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *ScriptIntArrayParam; // x21
  BoostSupportRequestMenu_c *v26; // x0
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v28; // x3
  BoostEntity_array *v29; // x22
  System_Collections_Generic_List_int__o *v30; // x23
  int max_length; // w8
  unsigned int v32; // w19
  BoostEntity_o *v33; // x24
  int v34; // w8
  void *v35; // x24
  unsigned int v36; // w26
  __int64 v37; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  struct UserItemEntity_array *v41; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x25
  int32_t v43; // w26
  struct UserItemEntity_array *v44; // x20
  Il2CppObject *v45; // x27
  NetworkManager_c *v46; // x0
  int64_t userIdNumber; // x28
  __int64 Item; // x0
  __int64 v49; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v51; // x1
  UserItemEntity_o *v52; // x27
  Il2CppClass **v53; // x0
  const MethodInfo *v54; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v56; // x24
  struct EventItemComponent_array *v57; // x8
  EventItemComponent_o *v58; // x24
  struct EventItemComponent_array *v59; // x8
  EventItemComponent_o *v60; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v62; // x22
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x2
  __int64 *v65; // x8
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  System_Action_o *v68; // x20
  const MethodInfo *v69; // x4
  __int64 v70; // x0
  BoostSupportRequestMenu_o *v71; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v72; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v73; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v74; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D2A4E9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_1C93AD4(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1C93AD4(&Method_BoostSupportRequestMenu_Open__);
    sub_1C93AD4(&BoostSupportRequestMenu_TypeInfo);
    sub_1C93AD4(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int__ToString__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C93AD4(&UserItemEntity___TypeInfo);
    sub_1C93AD4(&StringLiteral_2987/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_2988/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_2994/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_1C93AD4(&StringLiteral_17463/*"boostDialogSubtitleId"*/);
    sub_1C93AD4(&StringLiteral_2986/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_17462/*"boostDialogOnOffButtonHide"*/);
    sub_1C93AD4(&StringLiteral_2990/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2A4E9 = 1;
  }
  v74 = 0;
  entity = 0;
  memset(&v73, 0, sizeof(v73));
  this->fields.callbackFunc = callback;
  sub_1C93A78(&this->fields.callbackFunc, callback);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_102;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0);
  if ( !titleLabel )
    goto LABEL_102;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17463/*"boostDialogSubtitleId"*/, 0, 0);
    v72.fields._list = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v72,
      ScriptIntParam,
      (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
    list = v72.fields._list;
  }
  else
  {
    list = 0;
  }
  v74 = list;
  v16 = System_Nullable_int___ToString(
          (System_Nullable_int__o)&v74,
          (const MethodInfo_399F91C *)Method_System_Nullable_int__ToString__);
  v17 = System_String__Concat_64425724((System_String_o *)StringLiteral_2988/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v16, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  v19 = v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__ContainsKey(v19, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = v20 ? v19 : (System_String_o *)StringLiteral_2987/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  Master_object = LocalizationManager__Get(v21, 0);
  if ( !titleDetailLabel )
    goto LABEL_102;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0);
  if ( !useConfirmOptionLabel )
    goto LABEL_102;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2986/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_102;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelLabel )
    goto LABEL_102;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  ScriptIntArrayParam = entity;
  if ( entity )
  {
    v26 = BoostSupportRequestMenu_TypeInfo;
    if ( !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v26 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = (QuestPhaseEntity_o *)QuestPhaseEntity__getScriptIntArrayParam(
                                                  ScriptIntArrayParam,
                                                  v26->static_fields->RECOMMENDED_ICON,
                                                  0,
                                                  0);
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Master_object,
                                                         questId,
                                                         questPhase,
                                                         0);
  v29 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          (System_Int32_array *)ScriptIntArrayParam,
          v28);
  v30 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v29 )
    goto LABEL_102;
  max_length = v29->max_length;
  if ( max_length >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= max_length )
        goto LABEL_103;
      v33 = v29->m_Items[v32];
      if ( !v33 )
        goto LABEL_102;
      if ( v33->fields.commonConsumeId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_102;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v33->fields.commonConsumeId,
                          0);
        if ( !Master_object )
          goto LABEL_102;
        v34 = *((_DWORD *)Master_object + 6);
        v35 = Master_object;
        if ( v34 >= 1 )
          break;
      }
LABEL_54:
      max_length = v29->max_length;
      if ( (int)++v32 >= max_length )
        goto LABEL_55;
    }
    v36 = 0;
    while ( v36 < v34 )
    {
      v37 = *((_QWORD *)v35 + (int)v36 + 4);
      if ( !v37 )
        goto LABEL_102;
      if ( *(_DWORD *)(v37 + 24) == 1 )
      {
        if ( !v30 )
          goto LABEL_102;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v30,
                                  *(_DWORD *)(v37 + 28),
                                  (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v12 = *(unsigned int *)(v37 + 28);
          items = v30->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v30->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v30->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v30,
              v12,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v30->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
        }
      }
      v34 = *((_DWORD *)v35 + 6);
      if ( (int)++v36 >= v34 )
        goto LABEL_54;
    }
LABEL_103:
    sub_1C93D34(Master_object);
  }
LABEL_55:
  if ( !v30 )
    goto LABEL_102;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v30->fields._size > 0, 0);
  v41 = (struct UserItemEntity_array *)sub_1C93B7C(UserItemEntity___TypeInfo, (unsigned int)v30->fields._size);
  this->fields.mUsrItemEntityList = v41;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v71 = this;
  sub_1C93A78(&this->fields.mUsrItemEntityList, v41);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    v30,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v43 = 0;
  v73 = v72;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v73,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v44 = *p_mUsrItemEntityList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v45 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    v46 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v46 = NetworkManager_TypeInfo;
    }
    userIdNumber = v46->static_fields->userIdNumber;
    Item = System_Collections_Generic_List_int___get_Item(
             v30,
             v43,
             (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v45 )
      sub_1C93D2C(Item, v49);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v45, userIdNumber, Item, 0);
    if ( !v44 )
      sub_1C93D2C(EntityDefinitely, v51);
    v52 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1C93C10(EntityDefinitely, v44->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v70 = sub_1C93D50();
        sub_1C93BFC(v70, 0);
      }
    }
    if ( (unsigned int)v43 >= LODWORD(v44->max_length) )
      sub_1C93D34(EntityDefinitely);
    v53 = &v44->obj.klass + v43;
    v53[4] = (Il2CppClass *)v52;
    sub_1C93A78(v53 + 4, v52);
    ++v43;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v73,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v30->fields._size >= 1 )
  {
    eventItemIconList = v71->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_102;
    if ( !LODWORD(eventItemIconList->max_length) )
      goto LABEL_103;
    v56 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v30,
                              0,
                              (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v56 )
      goto LABEL_102;
    EventItemComponent__Set(v56, (int32_t)Master_object, 0);
    if ( v30->fields._size >= 2 )
    {
      v57 = v71->fields.eventItemIconList;
      if ( !v57 )
        goto LABEL_102;
      if ( LODWORD(v57->max_length) <= 1 )
        goto LABEL_103;
      v58 = v57->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v30,
                                1,
                                (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v58 )
        goto LABEL_102;
      EventItemComponent__Set(v58, (int32_t)Master_object, 0);
      if ( v30->fields._size >= 3 )
      {
        v59 = v71->fields.eventItemIconList;
        if ( !v59 )
          goto LABEL_102;
        if ( LODWORD(v59->max_length) <= 2 )
          goto LABEL_103;
        v60 = v59->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v30,
                                  2,
                                  (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v60 )
          goto LABEL_102;
        EventItemComponent__Set(v60, (int32_t)Master_object, 0);
      }
    }
  }
  Master_object = v71->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v29,
    (System_Int32_array *)ScriptIntArrayParam,
    v71->fields.mUsrItemEntityList,
    v54);
  itemListViewManager = v71->fields.itemListViewManager;
  v62 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1C93D20(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v62,
    (Il2CppObject *)v71,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v63);
  if ( !itemListViewManager )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v62, v64);
  Master_object = v71->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_102;
  v65 = &StringLiteral_17637/*"btn_off"*/;
  if ( v71->fields.isBoostItemUseConfirm )
    v65 = &StringLiteral_17638/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v65, 0);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17462/*"boostDialogOnOffButtonHide"*/, -1, 0) == 1 )
  {
    Master_object = v71->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_102;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  if ( !isRetryBattle )
  {
    v66 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v66 = (_QWORD *)sub_1C93AEC();
    v67 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v66, v66[4]);
    OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0, 0);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v71, 0);
  if ( !Master_object )
LABEL_102:
    sub_1C93D2C(Master_object, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v71->fields.state = 1;
  v68 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)v71, Method_BoostSupportRequestMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v71, v68, 0, 0, v69);
}


BoostEntity_array *BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
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

  if ( (byte_4D2A4EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4D2A4EA = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_32;
  if ( !recommendedBoostIds || !recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)boostEntityList->max_length >= 1 )
  {
    v10 = 0;
    v11 = (unsigned int)boostEntityList->max_length - 1LL;
    while ( 1 )
    {
      v12 = boostEntityList->m_Items[v10];
      if ( !v12 )
        goto LABEL_22;
      v8 = System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
             v12->fields.id,
             (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
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
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v16 = &items->obj.klass + size;
          v7->fields._size = size + 1;
LABEL_18:
          v16[4] = (Il2CppClass *)v12;
          v8 = sub_1C93A78(v16 + 4, v12);
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
        if ( (unsigned int)v19 < LODWORD(v17->max_length) )
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
        *(const MethodInfo_387999C **)(*(_QWORD *)(v20 + 192) + 112LL));
LABEL_22:
      if ( v11 == v10 )
        break;
      if ( ++v10 >= (unsigned __int64)LODWORD(boostEntityList->max_length) )
        sub_1C93D34(v8);
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
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1C93D2C(v8, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v23 = v7;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v23,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


void BoostSupportRequestMenu__add_callbackFunc(
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

  if ( (byte_4D2A4E7 & 1) == 0 )
  {
    sub_1C93AD4(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4D2A4E7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C940C8(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4D2A4F1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A4F1 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0, 0);
  result = 0;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void BoostSupportRequestMenu__remove_callbackFunc(
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

  if ( (byte_4D2A4E8 & 1) == 0 )
  {
    sub_1C93AD4(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4D2A4E8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C940C8(v8);
  BoostSupportRequestMenu__GetItem(v11, v12, v13);
}


void BoostSupportRequestMenu___c__DisplayClass26_0___ctor(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoostSupportRequestMenu___c__DisplayClass26_0___Callback_b__0(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct BoostSupportRequestMenu_o *_4__this; // x0
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x0
  struct BoostFunctionUtility_CallbackFunc_o *v5; // x20
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C93A78(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v5->fields.method);
}