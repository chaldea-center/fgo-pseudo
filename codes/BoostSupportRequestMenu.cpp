void BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5931CEB & 1) == 0 )
  {
    sub_21FFC50(&BoostSupportRequestMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_11465/*"RECOMMENDED_ICON"*/);
    byte_5931CEB = 1;
  }
  v1 = StringLiteral_11465/*"RECOMMENDED_ICON"*/;
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11465/*"RECOMMENDED_ICON"*/;
  sub_21FFBF4(BoostSupportRequestMenu_TypeInfo->static_fields, v1);
}


void BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5931CEA & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5931CEA = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  __int64 v10; // x1
  __int64 v11; // x2
  OptionManager_c *v12; // x0
  _BOOL4 isBoostItemUseConfirm; // w21
  System_Action_o *v14; // x19

  if ( (byte_5931CE3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_21FFC50(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_5931CE3 = 1;
  }
  v7 = sub_21FFEBC(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4(v7 + 16, this);
  v12 = OptionManager_TypeInfo;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  if ( !*(&v12->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v12, v10, v11);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0);
  OptionManager__SaveData(v14, 0);
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
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5931CE4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BoostSupportRequestMenu_EndClose__);
    byte_5931CE4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_21FFEBC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
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
    sub_21FFBF4(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void BoostSupportRequestMenu__EndOpen(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


// local variable allocation has failed, the output may be wrong!
BoostSupportRequsetItemListViewItem_o *BoostSupportRequestMenu__GetItem(
        BoostSupportRequestMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_21FFECC(0, *(_QWORD *)&index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_21FFECC(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_5931CE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostSupportRequestMenu_OnClickCancel__);
    byte_5931CE5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68();
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5931CE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostSupportRequestMenu_OnClickDecide__);
    byte_5931CE6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68();
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5931CE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5931CE8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68();
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_21FFECC(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_18236/*"btn_off"*/;
    else
      v8 = &StringLiteral_18237/*"btn_on"*/;
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
  CommonUI_o *v11; // x21
  BoostEntity_o *boostEntity; // x20
  BoostFunctionUtility_CallbackFunc_o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x3
  BoostSupportRequestMenu_o *v19; // x0
  int32_t v20; // w1
  int32_t id; // w2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  struct BoostEntity_o *v24; // x8

  if ( (byte_5931CE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BoostSupportRequestMenu_Callback__);
    sub_21FFC50(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_21FFC50(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5931CE7 = 1;
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
        v14 = (_QWORD *)sub_21FFC68();
      v15 = (System_Reflection_MethodBase_o *)sub_21FFC34(v14, v14[4]);
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
              v9 = (_QWORD *)sub_21FFC68();
            v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
            OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              v11 = (CommonUI_o *)itemListViewManager;
              boostEntity = Item->fields.boostEntity;
              v13 = (BoostFunctionUtility_CallbackFunc_o *)sub_21FFEBC(BoostFunctionUtility_CallbackFunc_TypeInfo);
              BoostFunctionUtility_CallbackFunc___ctor(
                v13,
                (Il2CppObject *)this,
                Method_BoostSupportRequestMenu_Callback__,
                0);
              if ( v11 )
              {
                CommonUI__OpenBoostSupportRequestReconfirmationMenu(v11, boostEntity, v13, 0);
                return;
              }
            }
LABEL_33:
            sub_21FFECC(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_21FFC68();
        v23 = (System_Reflection_MethodBase_o *)sub_21FFC34(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 8, 0, 0);
        if ( !Item )
          goto LABEL_33;
        v24 = Item->fields.boostEntity;
        if ( v24 )
          id = v24->fields.id;
        else
          id = 0;
        v19 = this;
        v20 = 2;
      }
      else
      {
        v16 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_21FFC68();
        v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
        v19 = this;
        v20 = 0;
        id = -1;
      }
      BoostSupportRequestMenu__Callback(v19, v20, id, v18);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  bool BoostItemUseConfirm; // w8
  DataManager_c *v16; // x0
  void *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x21
  int32_t ScriptIntParam; // w1
  System_Nullable_int__o v23; // x0
  struct System_Collections_Generic_List_T__o *list; // x8
  System_Nullable_int__o v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  bool v34; // w8
  int v35; // w9
  __int64 v36; // x1
  __int64 v37; // x2
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  QuestPhaseEntity_o *ScriptIntArrayParam; // x21
  BoostSupportRequestMenu_c *v44; // x0
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v46; // x3
  BoostEntity_array *v47; // x22
  System_Collections_Generic_List_int__o *v48; // x23
  __int64 v49; // x2
  int max_length; // w8
  unsigned int v51; // w25
  BoostEntity_o *v52; // x24
  int v53; // w8
  void *v54; // x24
  unsigned int v55; // w26
  __int64 v56; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  struct UserItemEntity_array *v60; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x25
  int32_t v62; // w26
  __int64 v63; // x1
  __int64 v64; // x2
  struct UserItemEntity_array *v65; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  Il2CppObject *v68; // x27
  NetworkManager_c *v69; // x0
  int64_t userIdNumber; // x28
  __int64 Item; // x0
  __int64 v72; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v74; // x1
  UserItemEntity_o *v75; // x27
  __int64 v76; // x1
  Il2CppClass **v77; // x0
  const MethodInfo *v78; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v80; // x24
  struct EventItemComponent_array *v81; // x8
  EventItemComponent_o *v82; // x24
  struct EventItemComponent_array *v83; // x8
  EventItemComponent_o *v84; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v86; // x22
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x2
  __int64 *v89; // x8
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  System_Action_o *v92; // x20
  const MethodInfo *v93; // x4
  __int64 v94; // x0
  BoostSupportRequestMenu_o *v95; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v96; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v97; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v98; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5931CE1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_21FFC50(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_21FFC50(&Method_BoostSupportRequestMenu_Open__);
    sub_21FFC50(&BoostSupportRequestMenu_TypeInfo);
    sub_21FFC50(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int__ToString__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_21FFC50(&UserItemEntity___TypeInfo);
    sub_21FFC50(&StringLiteral_3092/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_3093/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_3099/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_21FFC50(&StringLiteral_18039/*"boostDialogSubtitleId"*/);
    sub_21FFC50(&StringLiteral_3091/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_21FFC50(&StringLiteral_18038/*"boostDialogOnOffButtonHide"*/);
    sub_21FFC50(&StringLiteral_3095/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5931CE1 = 1;
  }
  v98 = 0;
  entity = 0;
  memset(&v97, 0, sizeof(v97));
  this->fields.callbackFunc = callback;
  sub_21FFBF4(&this->fields.callbackFunc, callback);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11, v12);
  BoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  v16 = DataManager_TypeInfo;
  this->fields.isBoostItemUseConfirm = BoostItemUseConfirm;
  if ( !*(&v16->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v16, v13, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_103;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3099/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0);
  if ( !titleLabel )
    goto LABEL_103;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_18039/*"boostDialogSubtitleId"*/, 0, 0);
    v23 = (System_Nullable_int__o)&v96;
    v96.fields._list = 0;
    System_Nullable_int____ctor(v23, ScriptIntParam, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    list = v96.fields._list;
  }
  else
  {
    list = 0;
    v98 = 0;
  }
  v25 = (System_Nullable_int__o)&v98;
  v98 = list;
  v26 = System_Nullable_int___ToString(v25, (const MethodInfo_45B02D4 *)Method_System_Nullable_int__ToString__);
  v27 = System_String__Concat_75438412((System_String_o *)StringLiteral_3093/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v26, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  v31 = v27;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
  v34 = LocalizationManager__ContainsKey(v31, 0);
  v35 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v34 )
  {
    if ( !v35 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
  }
  else
  {
    if ( !v35 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
    v31 = (System_String_o *)StringLiteral_3092/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  }
  Master_object = LocalizationManager__Get(v31, 0);
  if ( !titleDetailLabel )
    goto LABEL_103;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3095/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0);
  if ( !useConfirmOptionLabel )
    goto LABEL_103;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3091/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_103;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelLabel )
    goto LABEL_103;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  ScriptIntArrayParam = entity;
  if ( entity )
  {
    v44 = BoostSupportRequestMenu_TypeInfo;
    if ( !*(&BoostSupportRequestMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo, v41, v42);
      v44 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = (QuestPhaseEntity_o *)QuestPhaseEntity__getScriptIntArrayParam(
                                                  ScriptIntArrayParam,
                                                  v44->static_fields->RECOMMENDED_ICON,
                                                  0,
                                                  0);
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_103;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Master_object,
                                                         questId,
                                                         questPhase,
                                                         0);
  v47 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          (System_Int32_array *)ScriptIntArrayParam,
          v46);
  v48 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v47 )
    goto LABEL_103;
  max_length = v47->max_length;
  if ( max_length >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= max_length )
        goto LABEL_104;
      v52 = v47->m_Items[v51];
      if ( !v52 )
        goto LABEL_103;
      if ( v52->fields.commonConsumeId )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v49);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_103;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v52->fields.commonConsumeId,
                          0);
        if ( !Master_object )
          goto LABEL_103;
        v53 = *((_DWORD *)Master_object + 6);
        v54 = Master_object;
        if ( v53 >= 1 )
          break;
      }
LABEL_55:
      max_length = v47->max_length;
      if ( (int)++v51 >= max_length )
        goto LABEL_56;
    }
    v55 = 0;
    while ( v55 < v53 )
    {
      v56 = *((_QWORD *)v54 + (int)v55 + 4);
      if ( !v56 )
        goto LABEL_103;
      if ( *(_DWORD *)(v56 + 24) == 1 )
      {
        if ( !v48 )
          goto LABEL_103;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v48,
                                  *(_DWORD *)(v56 + 28),
                                  (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          items = v48->fields._items;
          v18 = *(unsigned int *)(v56 + 28);
          v58 = Method_System_Collections_Generic_List_int__Add__;
          ++v48->fields._version;
          if ( !items )
            goto LABEL_103;
          size = v48->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v48,
              v18,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v48->fields._size = size + 1;
            items->m_Items[size] = v18;
          }
        }
      }
      v53 = *((_DWORD *)v54 + 6);
      if ( (int)++v55 >= v53 )
        goto LABEL_55;
    }
LABEL_104:
    sub_21FFED4(Master_object);
  }
LABEL_56:
  if ( !v48 )
    goto LABEL_103;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v48->fields._size > 0, 0);
  v60 = (struct UserItemEntity_array *)sub_21FFD10(UserItemEntity___TypeInfo, (unsigned int)v48->fields._size);
  v95 = this;
  this->fields.mUsrItemEntityList = v60;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  sub_21FFBF4(&this->fields.mUsrItemEntityList, v60);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    v48,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v62 = 0;
  v97 = v96;
  v96.fields._list = 0;
  *(_QWORD *)&v96.fields._index = &v97;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v97,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v65 = *p_mUsrItemEntityList;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v63, v64);
    v68 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66, v67);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v69 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v66, v67);
      v69 = NetworkManager_TypeInfo;
    }
    userIdNumber = v69->static_fields->userIdNumber;
    Item = System_Collections_Generic_List_int___get_Item(
             v48,
             v62,
             (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v68 )
      sub_21FFECC(Item, v72);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v68, userIdNumber, Item, 0);
    if ( !v65 )
      sub_21FFECC(EntityDefinitely, v74);
    v75 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_21FFDA4(EntityDefinitely, v65->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v94 = sub_21FFEF0(0, v76);
        sub_21FFD90(v94, 0);
      }
    }
    if ( (unsigned int)v62 >= LODWORD(v65->max_length) )
      sub_21FFED4(EntityDefinitely);
    v77 = &v65->obj.klass + v62;
    v77[4] = (Il2CppClass *)v75;
    sub_21FFBF4(v77 + 4, v75);
    ++v62;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v97,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v48->fields._size >= 1 )
  {
    eventItemIconList = v95->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_103;
    if ( !LODWORD(eventItemIconList->max_length) )
      goto LABEL_104;
    v80 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v48,
                              0,
                              (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v80 )
      goto LABEL_103;
    EventItemComponent__Set(v80, (int32_t)Master_object, 0);
    if ( v48->fields._size >= 2 )
    {
      v81 = v95->fields.eventItemIconList;
      if ( !v81 )
        goto LABEL_103;
      if ( (v81->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_104;
      v82 = v81->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v48,
                                1,
                                (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v82 )
        goto LABEL_103;
      EventItemComponent__Set(v82, (int32_t)Master_object, 0);
      if ( v48->fields._size >= 3 )
      {
        v83 = v95->fields.eventItemIconList;
        if ( !v83 )
          goto LABEL_103;
        if ( LODWORD(v83->max_length) <= 2 )
          goto LABEL_104;
        v84 = v83->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v48,
                                  2,
                                  (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v84 )
          goto LABEL_103;
        EventItemComponent__Set(v84, (int32_t)Master_object, 0);
      }
    }
  }
  Master_object = v95->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_103;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v47,
    (System_Int32_array *)ScriptIntArrayParam,
    v95->fields.mUsrItemEntityList,
    v78);
  itemListViewManager = v95->fields.itemListViewManager;
  v86 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_21FFEBC(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v86,
    (Il2CppObject *)v95,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v87);
  if ( !itemListViewManager )
    goto LABEL_103;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v86, v88);
  Master_object = v95->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_103;
  v89 = &StringLiteral_18236/*"btn_off"*/;
  if ( v95->fields.isBoostItemUseConfirm )
    v89 = &StringLiteral_18237/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v89, 0);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_18038/*"boostDialogOnOffButtonHide"*/, -1, 0) == 1 )
  {
    Master_object = v95->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_103;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  if ( !isRetryBattle )
  {
    v90 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v90 = (_QWORD *)sub_21FFC68();
    v91 = (System_Reflection_MethodBase_o *)sub_21FFC34(v90, v90[4]);
    OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0, 0);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v95, 0);
  if ( !Master_object )
LABEL_103:
    sub_21FFECC(Master_object, v18);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v95->fields.state = 1;
  v92 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v92, (Il2CppObject *)v95, Method_BoostSupportRequestMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v95, v92, 0, 0, v93);
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
  unsigned __int64 v10; // x24
  __int64 max_length; // x27
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

  if ( (byte_5931CE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_5931CE2 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_30;
  if ( !recommendedBoostIds || !recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)boostEntityList->max_length >= 1 )
  {
    v10 = 0;
    max_length = (unsigned int)boostEntityList->max_length;
    do
    {
      if ( v10 >= LODWORD(boostEntityList->max_length) )
        sub_21FFED4(v8);
      v12 = boostEntityList->m_Items[v10];
      if ( !v12 )
        continue;
      v8 = System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
             v12->fields.id,
             (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v8 & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_30;
        items = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v20 = v14[4];
          v21 = v7;
LABEL_22:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v12,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20 + 192) + 112LL));
          continue;
        }
        v16 = &items->obj.klass + size;
        v7->fields._size = size + 1;
      }
      else
      {
        if ( !v6 )
          goto LABEL_30;
        v17 = v6->fields._items;
        v18 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v6->fields._version;
        if ( !v17 )
          goto LABEL_30;
        v19 = v6->fields._size;
        if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
        {
          v20 = v18[4];
          v21 = v6;
          goto LABEL_22;
        }
        v16 = &v17->obj.klass + v19;
        v6->fields._size = v19 + 1;
      }
      v16[4] = (Il2CppClass *)v12;
      v8 = sub_21FFBF4(v16 + 4, v12);
    }
    while ( max_length != ++v10 );
  }
  if ( !v7 )
    goto LABEL_30;
  if ( v7->fields._size < 1 )
  {
    if ( v6 )
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_30:
    sub_21FFECC(v8, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v6 = v7;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BoostSupportRequestMenu_o *v13; // x0
  BoostFunctionUtility_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5931CDF & 1) == 0 )
  {
    sub_21FFC50(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_5931CDF = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostSupportRequestMenu_o *)sub_220024C(v8, BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
  BoostSupportRequestMenu__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_5931CE9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931CE9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(closeButton, 0, 0);
  result = 0;
  if ( !v5 )
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BoostSupportRequestMenu_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_5931CE0 & 1) == 0 )
  {
    sub_21FFC50(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_5931CE0 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostSupportRequestMenu_o *)sub_220024C(v8, BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
  BoostSupportRequestMenu__GetItem(v13, v14, v15);
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
    sub_21FFECC(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0;
  sub_21FFBF4(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v5->fields.method);
}