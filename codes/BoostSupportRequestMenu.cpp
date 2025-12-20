void BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4D262D2 & 1) == 0 )
  {
    sub_1C94098(&BoostSupportRequestMenu_TypeInfo);
    sub_1C94098(&StringLiteral_11049/*"RECOMMENDED_ICON"*/);
    byte_4D262D2 = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11049/*"RECOMMENDED_ICON"*/;
  sub_1C9403C(BoostSupportRequestMenu_TypeInfo->static_fields, StringLiteral_11049/*"RECOMMENDED_ICON"*/);
}


void BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D262D1 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D262D1 = 1;
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

  if ( (byte_4D262CA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_1C94098(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_4D262CA = 1;
  }
  v7 = sub_1C942E4(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C(v7 + 16, this);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D262CB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoostSupportRequestMenu_EndClose__);
    byte_4D262CB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
    sub_1C9403C(p_closeCallbackFunc, 0);
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
    sub_1C942F0(0, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C942F0(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4D262CC & 1) == 0 )
  {
    sub_1C94098(&Method_BoostSupportRequestMenu_OnClickCancel__);
    byte_4D262CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0();
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D262CD & 1) == 0 )
  {
    sub_1C94098(&Method_BoostSupportRequestMenu_OnClickDecide__);
    byte_4D262CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0();
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D262CF & 1) == 0 )
  {
    sub_1C94098(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__);
    sub_1C94098(&StringLiteral_17593/*"btn_on"*/);
    sub_1C94098(&StringLiteral_17592/*"btn_off"*/);
    byte_4D262CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0();
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1C942F0(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_17592/*"btn_off"*/;
    else
      v8 = &StringLiteral_17593/*"btn_on"*/;
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

  if ( (byte_4D262CE & 1) == 0 )
  {
    sub_1C94098(&Method_BoostSupportRequestMenu_Callback__);
    sub_1C94098(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1C94098(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D262CE = 1;
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
        v14 = (_QWORD *)sub_1C940B0();
      v15 = (System_Reflection_MethodBase_o *)sub_1C9407C(v14, v14[4]);
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
              v9 = (_QWORD *)sub_1C940B0();
            v10 = (System_Reflection_MethodBase_o *)sub_1C9407C(v9, v9[4]);
            OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              boostEntity = Item->fields.boostEntity;
              v12 = (CommonUI_o *)itemListViewManager;
              v13 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C942E4(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
            sub_1C942F0(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1C940B0();
        v23 = (System_Reflection_MethodBase_o *)sub_1C9407C(v22, v22[4]);
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
          v16 = (_QWORD *)sub_1C940B0();
        v17 = (System_Reflection_MethodBase_o *)sub_1C9407C(v16, v16[4]);
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
  int32_t ScriptIntParam; // w1
  System_Nullable_int__o v15; // x0
  struct System_Collections_Generic_List_T__o *list; // x8
  System_Nullable_int__o v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v21; // x24
  bool v22; // w25
  System_String_o *v23; // x0
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *ScriptIntArrayParam; // x21
  BoostSupportRequestMenu_c *v28; // x0
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v30; // x3
  BoostEntity_array *v31; // x22
  System_Collections_Generic_List_int__o *v32; // x23
  int max_length; // w8
  unsigned int v34; // w19
  BoostEntity_o *v35; // x24
  int v36; // w8
  void *v37; // x24
  unsigned int v38; // w26
  __int64 v39; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  struct UserItemEntity_array *v43; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x25
  int32_t v45; // w26
  struct UserItemEntity_array *v46; // x20
  Il2CppObject *v47; // x27
  NetworkManager_c *v48; // x0
  int64_t userIdNumber; // x28
  __int64 Item; // x0
  __int64 v51; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v53; // x1
  UserItemEntity_o *v54; // x27
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v58; // x24
  struct EventItemComponent_array *v59; // x8
  EventItemComponent_o *v60; // x24
  struct EventItemComponent_array *v61; // x8
  EventItemComponent_o *v62; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v64; // x22
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  __int64 *v67; // x8
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  System_Action_o *v70; // x20
  const MethodInfo *v71; // x4
  __int64 v72; // x0
  BoostSupportRequestMenu_o *v73; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v74; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v76; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D262C8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_1C94098(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1C94098(&Method_BoostSupportRequestMenu_Open__);
    sub_1C94098(&BoostSupportRequestMenu_TypeInfo);
    sub_1C94098(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int__ToString__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C94098(&UserItemEntity___TypeInfo);
    sub_1C94098(&StringLiteral_2974/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_1C94098(&StringLiteral_17593/*"btn_on"*/);
    sub_1C94098(&StringLiteral_2975/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_2981/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_1C94098(&StringLiteral_17418/*"boostDialogSubtitleId"*/);
    sub_1C94098(&StringLiteral_2973/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_1C94098(&StringLiteral_17417/*"boostDialogOnOffButtonHide"*/);
    sub_1C94098(&StringLiteral_2977/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_1C94098(&StringLiteral_17592/*"btn_off"*/);
    byte_4D262C8 = 1;
  }
  v76 = 0;
  entity = 0;
  memset(&v75, 0, sizeof(v75));
  this->fields.callbackFunc = callback;
  sub_1C9403C(&this->fields.callbackFunc, callback);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_102;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0);
  if ( !titleLabel )
    goto LABEL_102;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17418/*"boostDialogSubtitleId"*/, 0, 0);
    v15 = (System_Nullable_int__o)&v74;
    v74.fields._list = 0;
    System_Nullable_int____ctor(v15, ScriptIntParam, (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
    list = v74.fields._list;
  }
  else
  {
    list = 0;
  }
  v17 = (System_Nullable_int__o)&v76;
  v76 = list;
  v18 = System_Nullable_int___ToString(v17, (const MethodInfo_39934FC *)Method_System_Nullable_int__ToString__);
  v19 = System_String__Concat_64417744((System_String_o *)StringLiteral_2975/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v18, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  v21 = v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__ContainsKey(v21, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = v22 ? v21 : (System_String_o *)StringLiteral_2974/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  Master_object = LocalizationManager__Get(v23, 0);
  if ( !titleDetailLabel )
    goto LABEL_102;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0);
  if ( !useConfirmOptionLabel )
    goto LABEL_102;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_102;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelLabel )
    goto LABEL_102;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  ScriptIntArrayParam = entity;
  if ( entity )
  {
    v28 = BoostSupportRequestMenu_TypeInfo;
    if ( !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v28 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = (QuestPhaseEntity_o *)QuestPhaseEntity__getScriptIntArrayParam(
                                                  ScriptIntArrayParam,
                                                  v28->static_fields->RECOMMENDED_ICON,
                                                  0,
                                                  0);
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Master_object,
                                                         questId,
                                                         questPhase,
                                                         0);
  v31 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          (System_Int32_array *)ScriptIntArrayParam,
          v30);
  v32 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v31 )
    goto LABEL_102;
  max_length = v31->max_length;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= max_length )
        goto LABEL_103;
      v35 = v31->m_Items[v34];
      if ( !v35 )
        goto LABEL_102;
      if ( v35->fields.commonConsumeId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_102;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v35->fields.commonConsumeId,
                          0);
        if ( !Master_object )
          goto LABEL_102;
        v36 = *((_DWORD *)Master_object + 6);
        v37 = Master_object;
        if ( v36 >= 1 )
          break;
      }
LABEL_54:
      max_length = v31->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_55;
    }
    v38 = 0;
    while ( v38 < v36 )
    {
      v39 = *((_QWORD *)v37 + (int)v38 + 4);
      if ( !v39 )
        goto LABEL_102;
      if ( *(_DWORD *)(v39 + 24) == 1 )
      {
        if ( !v32 )
          goto LABEL_102;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v32,
                                  *(_DWORD *)(v39 + 28),
                                  (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v12 = *(unsigned int *)(v39 + 28);
          items = v32->fields._items;
          v41 = Method_System_Collections_Generic_List_int__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v32->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v32,
              v12,
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v32->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
        }
      }
      v36 = *((_DWORD *)v37 + 6);
      if ( (int)++v38 >= v36 )
        goto LABEL_54;
    }
LABEL_103:
    sub_1C942F8(Master_object);
  }
LABEL_55:
  if ( !v32 )
    goto LABEL_102;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v32->fields._size > 0, 0);
  v43 = (struct UserItemEntity_array *)sub_1C94140(UserItemEntity___TypeInfo, (unsigned int)v32->fields._size);
  this->fields.mUsrItemEntityList = v43;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v73 = this;
  sub_1C9403C(&this->fields.mUsrItemEntityList, v43);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v74,
    v32,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v45 = 0;
  v75 = v74;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v75,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v46 = *p_mUsrItemEntityList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v47 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    v48 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v48 = NetworkManager_TypeInfo;
    }
    userIdNumber = v48->static_fields->userIdNumber;
    Item = System_Collections_Generic_List_int___get_Item(
             v32,
             v45,
             (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v47 )
      sub_1C942F0(Item, v51);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v47, userIdNumber, Item, 0);
    if ( !v46 )
      sub_1C942F0(EntityDefinitely, v53);
    v54 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1C941D4(EntityDefinitely, v46->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v72 = sub_1C94314();
        sub_1C941C0(v72, 0);
      }
    }
    if ( (unsigned int)v45 >= LODWORD(v46->max_length) )
      sub_1C942F8(EntityDefinitely);
    v55 = &v46->obj.klass + v45;
    v55[4] = (Il2CppClass *)v54;
    sub_1C9403C(v55 + 4, v54);
    ++v45;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v75,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v32->fields._size >= 1 )
  {
    eventItemIconList = v73->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_102;
    if ( !LODWORD(eventItemIconList->max_length) )
      goto LABEL_103;
    v58 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v32,
                              0,
                              (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v58 )
      goto LABEL_102;
    EventItemComponent__Set(v58, (int32_t)Master_object, 0);
    if ( v32->fields._size >= 2 )
    {
      v59 = v73->fields.eventItemIconList;
      if ( !v59 )
        goto LABEL_102;
      if ( LODWORD(v59->max_length) <= 1 )
        goto LABEL_103;
      v60 = v59->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v32,
                                1,
                                (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v60 )
        goto LABEL_102;
      EventItemComponent__Set(v60, (int32_t)Master_object, 0);
      if ( v32->fields._size >= 3 )
      {
        v61 = v73->fields.eventItemIconList;
        if ( !v61 )
          goto LABEL_102;
        if ( LODWORD(v61->max_length) <= 2 )
          goto LABEL_103;
        v62 = v61->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v32,
                                  2,
                                  (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v62 )
          goto LABEL_102;
        EventItemComponent__Set(v62, (int32_t)Master_object, 0);
      }
    }
  }
  Master_object = v73->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v31,
    (System_Int32_array *)ScriptIntArrayParam,
    v73->fields.mUsrItemEntityList,
    v56);
  itemListViewManager = v73->fields.itemListViewManager;
  v64 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1C942E4(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v64,
    (Il2CppObject *)v73,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v65);
  if ( !itemListViewManager )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v64, v66);
  Master_object = v73->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_102;
  v67 = &StringLiteral_17592/*"btn_off"*/;
  if ( v73->fields.isBoostItemUseConfirm )
    v67 = &StringLiteral_17593/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v67, 0);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17417/*"boostDialogOnOffButtonHide"*/, -1, 0) == 1 )
  {
    Master_object = v73->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_102;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  if ( !isRetryBattle )
  {
    v68 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v68 = (_QWORD *)sub_1C940B0();
    v69 = (System_Reflection_MethodBase_o *)sub_1C9407C(v68, v68[4]);
    OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v73, 0);
  if ( !Master_object )
LABEL_102:
    sub_1C942F0(Master_object, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v73->fields.state = 1;
  v70 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)v73, Method_BoostSupportRequestMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v73, v70, 0, 0, v71);
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

  if ( (byte_4D262C9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4D262C9 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
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
             (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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
          v8 = sub_1C9403C(v16 + 4, v12);
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
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20 + 192) + 112LL));
LABEL_22:
      if ( v11 == v10 )
        break;
      if ( ++v10 >= (unsigned __int64)LODWORD(boostEntityList->max_length) )
        sub_1C942F8(v8);
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
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1C942F0(v8, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v23 = v7;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v23,
                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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

  if ( (byte_4D262C6 & 1) == 0 )
  {
    sub_1C94098(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4D262C6 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C9468C(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4D262D0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D262D0 = 1;
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

  if ( (byte_4D262C7 & 1) == 0 )
  {
    sub_1C94098(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4D262C7 = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C9468C(v8);
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
    sub_1C942F0(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C9403C(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v5->fields.method);
}