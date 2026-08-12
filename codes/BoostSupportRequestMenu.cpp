void BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5969E8B & 1) == 0 )
  {
    sub_2213A60(&BoostSupportRequestMenu_TypeInfo);
    sub_2213A60(&StringLiteral_11485/*"RECOMMENDED_ICON"*/);
    byte_5969E8B = 1;
  }
  v1 = StringLiteral_11485/*"RECOMMENDED_ICON"*/;
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11485/*"RECOMMENDED_ICON"*/;
  sub_2213A04(BoostSupportRequestMenu_TypeInfo->static_fields, v1);
}


void BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969E8A & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969E8A = 1;
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

  if ( (byte_5969E83 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__);
    sub_2213A60(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
    byte_5969E83 = 1;
  }
  v7 = sub_2213CCC(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04(v7 + 16, this);
  v12 = OptionManager_TypeInfo;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  *(_DWORD *)(v7 + 24) = result;
  *(_DWORD *)(v7 + 28) = index;
  if ( !*(&v12->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v12, v10, v11);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_5969E84 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestMenu_EndClose__);
    byte_5969E84 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_2213CCC(v5);
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
    sub_2213A04(p_closeCallbackFunc, 0);
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
    sub_2213CDC(0, *(_QWORD *)&index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_2213CDC(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_5969E85 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestMenu_OnClickCancel__);
    byte_5969E85 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78();
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_5969E86 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestMenu_OnClickDecide__);
    byte_5969E86 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78();
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_5969E88 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__);
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_5969E88 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78();
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_2213CDC(0, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_18274/*"btn_off"*/;
    else
      v8 = &StringLiteral_18275/*"btn_on"*/;
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

  if ( (byte_5969E87 & 1) == 0 )
  {
    sub_2213A60(&Method_BoostSupportRequestMenu_Callback__);
    sub_2213A60(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_2213A60(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5969E87 = 1;
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
        v14 = (_QWORD *)sub_2213A78();
      v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
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
              v9 = (_QWORD *)sub_2213A78();
            v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
            OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              v11 = (CommonUI_o *)itemListViewManager;
              boostEntity = Item->fields.boostEntity;
              v13 = (BoostFunctionUtility_CallbackFunc_o *)sub_2213CCC(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
            sub_2213CDC(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_2213A78();
        v23 = (System_Reflection_MethodBase_o *)sub_2213A44(v22, v22[4]);
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
          v16 = (_QWORD *)sub_2213A78();
        v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
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
  int32_t ScriptIntParam; // w0
  struct System_Collections_Generic_List_T__o *list; // x8
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  bool v32; // w8
  int v33; // w9
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  QuestPhaseEntity_o *ScriptIntArrayParam; // x21
  BoostSupportRequestMenu_c *v42; // x0
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v44; // x3
  BoostEntity_array *v45; // x22
  System_Collections_Generic_List_int__o *v46; // x23
  __int64 v47; // x2
  int max_length; // w8
  unsigned int v49; // w25
  BoostEntity_o *v50; // x24
  int v51; // w8
  void *v52; // x24
  unsigned int v53; // w26
  __int64 v54; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  struct UserItemEntity_array *v58; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x25
  int32_t v60; // w26
  __int64 v61; // x1
  __int64 v62; // x2
  struct UserItemEntity_array *v63; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  Il2CppObject *v66; // x27
  NetworkManager_c *v67; // x0
  int64_t userIdNumber; // x28
  __int64 Item; // x0
  __int64 v70; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v72; // x1
  UserItemEntity_o *v73; // x27
  __int64 v74; // x1
  Il2CppClass **v75; // x0
  const MethodInfo *v76; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v78; // x24
  struct EventItemComponent_array *v79; // x8
  EventItemComponent_o *v80; // x24
  struct EventItemComponent_array *v81; // x8
  EventItemComponent_o *v82; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v84; // x22
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x2
  __int64 *v87; // x8
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  System_Action_o *v90; // x20
  const MethodInfo *v91; // x4
  __int64 v92; // x0
  BoostSupportRequestMenu_o *v93; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v94; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v95; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v96; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5969E81 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoostSupportRequestMenu_EndOpen__);
    sub_2213A60(&Method_BoostSupportRequestMenu_OnSelectItem__);
    sub_2213A60(&Method_BoostSupportRequestMenu_Open__);
    sub_2213A60(&BoostSupportRequestMenu_TypeInfo);
    sub_2213A60(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__ToString__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_2213A60(&UserItemEntity___TypeInfo);
    sub_2213A60(&StringLiteral_3095/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/);
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_3096/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_3102/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/);
    sub_2213A60(&StringLiteral_18077/*"boostDialogSubtitleId"*/);
    sub_2213A60(&StringLiteral_3094/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/);
    sub_2213A60(&StringLiteral_18076/*"boostDialogOnOffButtonHide"*/);
    sub_2213A60(&StringLiteral_3098/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_5969E81 = 1;
  }
  v96 = 0;
  entity = 0;
  memset(&v95, 0, sizeof(v95));
  this->fields.callbackFunc = callback;
  sub_2213A04(&this->fields.callbackFunc, callback);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11, v12);
  BoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0);
  v16 = DataManager_TypeInfo;
  this->fields.isBoostItemUseConfirm = BoostItemUseConfirm;
  if ( !*(&v16->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v16, v13, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_103;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3102/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0);
  if ( !titleLabel )
    goto LABEL_103;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_18077/*"boostDialogSubtitleId"*/, 0, 0);
    v94.fields._list = 0;
    System_Nullable_int____ctor(
      (System_Nullable_int__o)&v94,
      ScriptIntParam,
      (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
    list = v94.fields._list;
  }
  else
  {
    list = 0;
    v96 = 0;
  }
  v96 = list;
  v24 = System_Nullable_int___ToString(
          (System_Nullable_int__o)&v96,
          (const MethodInfo_45E440C *)Method_System_Nullable_int__ToString__);
  v25 = System_String__Concat_75651716((System_String_o *)StringLiteral_3096/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v24, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  v29 = v25;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
  v32 = LocalizationManager__ContainsKey(v29, 0);
  v33 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v32 )
  {
    if ( !v33 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
  }
  else
  {
    if ( !v33 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
    v29 = (System_String_o *)StringLiteral_3095/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  }
  Master_object = LocalizationManager__Get(v29, 0);
  if ( !titleDetailLabel )
    goto LABEL_103;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3098/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0);
  if ( !useConfirmOptionLabel )
    goto LABEL_103;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3094/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_103;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelLabel )
    goto LABEL_103;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  ScriptIntArrayParam = entity;
  if ( entity )
  {
    v42 = BoostSupportRequestMenu_TypeInfo;
    if ( !*(&BoostSupportRequestMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo, v39, v40);
      v42 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = (QuestPhaseEntity_o *)QuestPhaseEntity__getScriptIntArrayParam(
                                                  ScriptIntArrayParam,
                                                  v42->static_fields->RECOMMENDED_ICON,
                                                  0,
                                                  0);
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_103;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Master_object,
                                                         questId,
                                                         questPhase,
                                                         0);
  v45 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          (System_Int32_array *)ScriptIntArrayParam,
          v44);
  v46 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v45 )
    goto LABEL_103;
  max_length = v45->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v49 >= max_length )
        goto LABEL_104;
      v50 = v45->m_Items[v49];
      if ( !v50 )
        goto LABEL_103;
      if ( v50->fields.commonConsumeId )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v47);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_103;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v50->fields.commonConsumeId,
                          0);
        if ( !Master_object )
          goto LABEL_103;
        v51 = *((_DWORD *)Master_object + 6);
        v52 = Master_object;
        if ( v51 >= 1 )
          break;
      }
LABEL_55:
      max_length = v45->max_length;
      if ( (int)++v49 >= max_length )
        goto LABEL_56;
    }
    v53 = 0;
    while ( v53 < v51 )
    {
      v54 = *((_QWORD *)v52 + (int)v53 + 4);
      if ( !v54 )
        goto LABEL_103;
      if ( *(_DWORD *)(v54 + 24) == 1 )
      {
        if ( !v46 )
          goto LABEL_103;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v46,
                                  *(_DWORD *)(v54 + 28),
                                  (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          items = v46->fields._items;
          v18 = *(unsigned int *)(v54 + 28);
          v56 = Method_System_Collections_Generic_List_int__Add__;
          ++v46->fields._version;
          if ( !items )
            goto LABEL_103;
          size = v46->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v46,
              v18,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v46->fields._size = size + 1;
            items->m_Items[size] = v18;
          }
        }
      }
      v51 = *((_DWORD *)v52 + 6);
      if ( (int)++v53 >= v51 )
        goto LABEL_55;
    }
LABEL_104:
    sub_2213CE4(Master_object);
  }
LABEL_56:
  if ( !v46 )
    goto LABEL_103;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v46->fields._size > 0, 0);
  v58 = (struct UserItemEntity_array *)sub_2213B20(UserItemEntity___TypeInfo, (unsigned int)v46->fields._size);
  v93 = this;
  this->fields.mUsrItemEntityList = v58;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  sub_2213A04(&this->fields.mUsrItemEntityList, v58);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    v46,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v60 = 0;
  v95 = v94;
  v94.fields._list = 0;
  *(_QWORD *)&v94.fields._index = &v95;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v95,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v63 = *p_mUsrItemEntityList;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61, v62);
    v66 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v64, v65);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v67 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v64, v65);
      v67 = NetworkManager_TypeInfo;
    }
    userIdNumber = v67->static_fields->userIdNumber;
    Item = System_Collections_Generic_List_int___get_Item(
             v46,
             v60,
             (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v66 )
      sub_2213CDC(Item, v70);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v66, userIdNumber, Item, 0);
    if ( !v63 )
      sub_2213CDC(EntityDefinitely, v72);
    v73 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_2213BB4(EntityDefinitely, v63->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v92 = sub_2213D00(0, v74);
        sub_2213BA0(v92, 0);
      }
    }
    if ( (unsigned int)v60 >= LODWORD(v63->max_length) )
      sub_2213CE4(EntityDefinitely);
    v75 = &v63->obj.klass + v60;
    v75[4] = (Il2CppClass *)v73;
    sub_2213A04(v75 + 4, v73);
    ++v60;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v95,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v46->fields._size >= 1 )
  {
    eventItemIconList = v93->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_103;
    if ( !LODWORD(eventItemIconList->max_length) )
      goto LABEL_104;
    v78 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v46,
                              0,
                              (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v78 )
      goto LABEL_103;
    EventItemComponent__Set(v78, (int32_t)Master_object, 0);
    if ( v46->fields._size >= 2 )
    {
      v79 = v93->fields.eventItemIconList;
      if ( !v79 )
        goto LABEL_103;
      if ( (v79->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_104;
      v80 = v79->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v46,
                                1,
                                (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v80 )
        goto LABEL_103;
      EventItemComponent__Set(v80, (int32_t)Master_object, 0);
      if ( v46->fields._size >= 3 )
      {
        v81 = v93->fields.eventItemIconList;
        if ( !v81 )
          goto LABEL_103;
        if ( LODWORD(v81->max_length) <= 2 )
          goto LABEL_104;
        v82 = v81->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v46,
                                  2,
                                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v82 )
          goto LABEL_103;
        EventItemComponent__Set(v82, (int32_t)Master_object, 0);
      }
    }
  }
  Master_object = v93->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_103;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v45,
    (System_Int32_array *)ScriptIntArrayParam,
    v93->fields.mUsrItemEntityList,
    v76);
  itemListViewManager = v93->fields.itemListViewManager;
  v84 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_2213CCC(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v84,
    (Il2CppObject *)v93,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v85);
  if ( !itemListViewManager )
    goto LABEL_103;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v84, v86);
  Master_object = v93->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_103;
  v87 = &StringLiteral_18274/*"btn_off"*/;
  if ( v93->fields.isBoostItemUseConfirm )
    v87 = &StringLiteral_18275/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v87, 0);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_18076/*"boostDialogOnOffButtonHide"*/, -1, 0) == 1 )
  {
    Master_object = v93->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_103;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
    if ( !Master_object )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  if ( !isRetryBattle )
  {
    v88 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v88 = (_QWORD *)sub_2213A78();
    v89 = (System_Reflection_MethodBase_o *)sub_2213A44(v88, v88[4]);
    OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0, 0);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v93, 0);
  if ( !Master_object )
LABEL_103:
    sub_2213CDC(Master_object, v18);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v93->fields.state = 1;
  v90 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v90, (Il2CppObject *)v93, Method_BoostSupportRequestMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v93, v90, 0, 0, v91);
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

  if ( (byte_5969E82 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    byte_5969E82 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
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
        sub_2213CE4(v8);
      v12 = boostEntityList->m_Items[v10];
      if ( !v12 )
        continue;
      v8 = System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
             v12->fields.id,
             (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20 + 192) + 112LL));
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
      v8 = sub_2213A04(v16 + 4, v12);
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
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
LABEL_30:
    sub_2213CDC(v8, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v6 = v7;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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

  if ( (byte_5969E7F & 1) == 0 )
  {
    sub_2213A60(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_5969E7F = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostSupportRequestMenu_o *)sub_221405C(v8, BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
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

  if ( (byte_5969E89 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E89 = 1;
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

  if ( (byte_5969E80 & 1) == 0 )
  {
    sub_2213A60(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    byte_5969E80 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BoostSupportRequestMenu_o *)sub_221405C(v8, BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
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
    sub_2213CDC(0, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0;
  sub_2213A04(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      v5->fields.method);
}