void BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  if ( (byte_4C21179 & 1) == 0 )
  {
    sub_1C2D490(&BoostSupportRequestMenu_TypeInfo);
    sub_1C2D490(&StringLiteral_11001/*"RECOMMENDED_ICON"*/);
    byte_4C21179 = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11001/*"RECOMMENDED_ICON"*/;
  sub_1C2D434(BoostSupportRequestMenu_TypeInfo->static_fields);
}


void BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C21178 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21178 = 1;
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

  if ( (byte_4C21171 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_1C2D490(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_4C21171 = 1;
  }
  v7 = sub_1C2D6DC(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C21172 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BoostSupportRequestMenu_EndClose__);
    byte_4C21172 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    sub_1C2D434(p_closeCallbackFunc);
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
    sub_1C2D6EC(0, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C2D6EC(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C21173 & 1) == 0 )
  {
    sub_1C2D490(&Method_BoostSupportRequestMenu_OnClickCancel__);
    byte_4C21173 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C21174 & 1) == 0 )
  {
    sub_1C2D490(&Method_BoostSupportRequestMenu_OnClickDecide__);
    byte_4C21174 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C21176 & 1) == 0 )
  {
    sub_1C2D490(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__);
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C21176 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1C2D6EC(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_17500/*"btn_off"*/;
    else
      v8 = &StringLiteral_17501/*"btn_on"*/;
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

  if ( (byte_4C21175 & 1) == 0 )
  {
    sub_1C2D490(&Method_BoostSupportRequestMenu_Callback__);
    sub_1C2D490(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1C2D490(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21175 = 1;
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
        v14 = (_QWORD *)sub_1C2D4A8();
      v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
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
              v9 = (_QWORD *)sub_1C2D4A8();
            v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
            OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              boostEntity = Item->fields.boostEntity;
              v12 = (CommonUI_o *)itemListViewManager;
              v13 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C2D6DC(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
            sub_1C2D6EC(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1C2D4A8();
        v23 = (System_Reflection_MethodBase_o *)sub_1C2D474(v22, v22[4]);
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
          v16 = (_QWORD *)sub_1C2D4A8();
        v17 = (System_Reflection_MethodBase_o *)sub_1C2D474(v16, v16[4]);
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
  __int64 v33; // x2
  __int64 v34; // x3
  int max_length; // w8
  unsigned int v36; // w19
  BoostEntity_o *v37; // x24
  int v38; // w8
  void *v39; // x24
  unsigned int v40; // w26
  __int64 v41; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  struct UserItemEntity_array **p_mUsrItemEntityList; // x25
  int32_t v46; // w26
  struct UserItemEntity_array *v47; // x20
  Il2CppObject *v48; // x27
  NetworkManager_c *v49; // x0
  int64_t userIdNumber; // x28
  __int64 Item; // x0
  __int64 v52; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  UserItemEntity_o *v57; // x27
  Il2CppClass **v58; // x0
  const MethodInfo *v59; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v61; // x24
  struct EventItemComponent_array *v62; // x8
  EventItemComponent_o *v63; // x24
  struct EventItemComponent_array *v64; // x8
  EventItemComponent_o *v65; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v67; // x22
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x2
  __int64 *v70; // x8
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  System_Action_o *v73; // x20
  const MethodInfo *v74; // x3
  __int64 v75; // x0
  BoostSupportRequestMenu_o *v76; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v77; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v78; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v79; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C2116F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_1C2D490(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_1C2D490(&Method_BoostSupportRequestMenu_Open__);
    sub_1C2D490(&BoostSupportRequestMenu_TypeInfo);
    sub_1C2D490(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__ToString__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C2D490(&UserItemEntity___TypeInfo);
    sub_1C2D490(&StringLiteral_2970/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_2971/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_2977/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_1C2D490(&StringLiteral_17329/*"boostDialogSubtitleId"*/);
    sub_1C2D490(&StringLiteral_2969/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_1C2D490(&StringLiteral_17328/*"boostDialogOnOffButtonHide"*/);
    sub_1C2D490(&StringLiteral_2973/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C2116F = 1;
  }
  v79 = 0;
  entity = 0;
  memset(&v78, 0, sizeof(v78));
  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_102;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0);
  if ( !titleLabel )
    goto LABEL_102;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17329/*"boostDialogSubtitleId"*/, 0, 0);
    v15 = (System_Nullable_int__o)&v77;
    v77.fields._list = 0;
    System_Nullable_int____ctor(v15, ScriptIntParam, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
    list = v77.fields._list;
  }
  else
  {
    list = 0;
  }
  v17 = (System_Nullable_int__o)&v79;
  v79 = list;
  v18 = System_Nullable_int___ToString(v17, (const MethodInfo_38AF414 *)Method_System_Nullable_int__ToString__);
  v19 = System_String__Concat_63457864((System_String_o *)StringLiteral_2971/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v18, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  v21 = v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__ContainsKey(v21, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = v22 ? v21 : (System_String_o *)StringLiteral_2970/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  Master_object = LocalizationManager__Get(v23, 0);
  if ( !titleDetailLabel )
    goto LABEL_102;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0);
  if ( !useConfirmOptionLabel )
    goto LABEL_102;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_102;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
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
  v32 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v31 )
    goto LABEL_102;
  max_length = v31->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        goto LABEL_103;
      v37 = v31->m_Items[v36];
      if ( !v37 )
        goto LABEL_102;
      if ( v37->fields.commonConsumeId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_102;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v37->fields.commonConsumeId,
                          0);
        if ( !Master_object )
          goto LABEL_102;
        v38 = *((_DWORD *)Master_object + 6);
        v39 = Master_object;
        if ( v38 >= 1 )
          break;
      }
LABEL_54:
      max_length = v31->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_55;
    }
    v40 = 0;
    while ( v40 < v38 )
    {
      v41 = *((_QWORD *)v39 + (int)v40 + 4);
      if ( !v41 )
        goto LABEL_102;
      if ( *(_DWORD *)(v41 + 24) == 1 )
      {
        if ( !v32 )
          goto LABEL_102;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v32,
                                  *(_DWORD *)(v41 + 28),
                                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v12 = *(unsigned int *)(v41 + 28);
          items = v32->fields._items;
          v43 = Method_System_Collections_Generic_List_int__Add__;
          ++v32->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v32->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v32,
              v12,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v32->fields._size = size + 1;
            items->m_Items[size] = v12;
          }
        }
      }
      v38 = *((_DWORD *)v39 + 6);
      if ( (int)++v40 >= v38 )
        goto LABEL_54;
    }
LABEL_103:
    sub_1C2D6F4(Master_object, v12, v33, v34);
  }
LABEL_55:
  if ( !v32 )
    goto LABEL_102;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v32->fields._size > 0, 0);
  this->fields.mUsrItemEntityList = (struct UserItemEntity_array *)sub_1C2D538(
                                                                     UserItemEntity___TypeInfo,
                                                                     (unsigned int)v32->fields._size);
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v76 = this;
  sub_1C2D434(&this->fields.mUsrItemEntityList);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v32,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v46 = 0;
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v78,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v47 = *p_mUsrItemEntityList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v48 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    v49 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v49 = NetworkManager_TypeInfo;
    }
    userIdNumber = v49->static_fields->userIdNumber;
    Item = System_Collections_Generic_List_int___get_Item(
             v32,
             v46,
             (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v48 )
      sub_1C2D6EC(Item, v52);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v48, userIdNumber, Item, 0);
    if ( !v47 )
      sub_1C2D6EC(EntityDefinitely, v54);
    v57 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1C2D5CC(EntityDefinitely, v47->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v75 = sub_1C2D710();
        sub_1C2D5B8(v75, 0);
      }
    }
    if ( (unsigned int)v46 >= LODWORD(v47->max_length) )
      sub_1C2D6F4(EntityDefinitely, v54, v55, v56);
    v58 = &v47->obj.klass + v46;
    v58[4] = (Il2CppClass *)v57;
    sub_1C2D434(v58 + 4);
    ++v46;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v78,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v32->fields._size >= 1 )
  {
    eventItemIconList = v76->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_102;
    if ( !LODWORD(eventItemIconList->max_length) )
      goto LABEL_103;
    v61 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v32,
                              0,
                              (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v61 )
      goto LABEL_102;
    EventItemComponent__Set(v61, (int32_t)Master_object, 0);
    if ( v32->fields._size >= 2 )
    {
      v62 = v76->fields.eventItemIconList;
      if ( !v62 )
        goto LABEL_102;
      if ( LODWORD(v62->max_length) <= 1 )
        goto LABEL_103;
      v63 = v62->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v32,
                                1,
                                (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v63 )
        goto LABEL_102;
      EventItemComponent__Set(v63, (int32_t)Master_object, 0);
      if ( v32->fields._size >= 3 )
      {
        v64 = v76->fields.eventItemIconList;
        if ( !v64 )
          goto LABEL_102;
        if ( LODWORD(v64->max_length) <= 2 )
          goto LABEL_103;
        v65 = v64->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v32,
                                  2,
                                  (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v65 )
          goto LABEL_102;
        EventItemComponent__Set(v65, (int32_t)Master_object, 0);
      }
    }
  }
  Master_object = v76->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v31,
    (System_Int32_array *)ScriptIntArrayParam,
    v76->fields.mUsrItemEntityList,
    v59);
  itemListViewManager = v76->fields.itemListViewManager;
  v67 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v67,
    (Il2CppObject *)v76,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v68);
  if ( !itemListViewManager )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v67, v69);
  Master_object = v76->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_102;
  v70 = &StringLiteral_17500/*"btn_off"*/;
  if ( v76->fields.isBoostItemUseConfirm )
    v70 = &StringLiteral_17501/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v70, 0);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17328/*"boostDialogOnOffButtonHide"*/, -1, 0) == 1 )
  {
    Master_object = v76->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_102;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  if ( !isRetryBattle )
  {
    v71 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v71 = (_QWORD *)sub_1C2D4A8();
    v72 = (System_Reflection_MethodBase_o *)sub_1C2D474(v71, v71[4]);
    OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0, 0);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v76, 0);
  if ( !Master_object )
LABEL_102:
    sub_1C2D6EC(Master_object, v12);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v76->fields.state = 1;
  v73 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)v76, Method_BoostSupportRequestMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v76, v73, 0, v74);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x24
  __int64 v13; // x25
  BoostEntity_o *v14; // x23
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  System_Collections_Generic_List_object__o *v23; // x0
  System_Collections_Generic_List_object__o *v25; // x0

  if ( (byte_4C21170 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_4C21170 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_32;
  if ( !recommendedBoostIds || !recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)boostEntityList->max_length >= 1 )
  {
    v12 = 0;
    v13 = (unsigned int)boostEntityList->max_length - 1LL;
    while ( 1 )
    {
      v14 = boostEntityList->m_Items[v12];
      if ( !v14 )
        goto LABEL_22;
      v8 = System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
             v14->fields.id,
             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v8 & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_32;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v7->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v18 = &items->obj.klass + size;
          v7->fields._size = size + 1;
LABEL_18:
          v18[4] = (Il2CppClass *)v14;
          v8 = sub_1C2D434(v18 + 4);
          goto LABEL_22;
        }
        v22 = v16[4];
        v23 = v7;
      }
      else
      {
        if ( !v6 )
          goto LABEL_32;
        v19 = v6->fields._items;
        v20 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v6->fields._version;
        if ( !v19 )
          goto LABEL_32;
        v21 = v6->fields._size;
        if ( (unsigned int)v21 < LODWORD(v19->max_length) )
        {
          v18 = &v19->obj.klass + v21;
          v6->fields._size = v21 + 1;
          goto LABEL_18;
        }
        v22 = v20[4];
        v23 = v6;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        (Il2CppObject *)v14,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v22 + 192) + 112LL));
LABEL_22:
      if ( v13 == v12 )
        break;
      if ( ++v12 >= (unsigned __int64)LODWORD(boostEntityList->max_length) )
        sub_1C2D6F4(v8, v9, v10, v11);
    }
  }
  if ( !v7 )
    goto LABEL_32;
  if ( v7->fields._size < 1 )
  {
    if ( v6 )
    {
      v25 = v6;
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v25,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1C2D6EC(v8, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v25 = v7;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v25,
                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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

  if ( (byte_4C2116D & 1) == 0 )
  {
    sub_1C2D490(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4C2116D = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C2D9AC(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4C21177 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21177 = 1;
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

  if ( (byte_4C2116E & 1) == 0 )
  {
    sub_1C2D490(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_4C2116E = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C2D9AC(v8);
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
    sub_1C2D6EC(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C2D434(p_callbackFunc);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v5->fields.method);
}