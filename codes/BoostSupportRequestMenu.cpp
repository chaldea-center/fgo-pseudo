void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4187E5A & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequestMenu_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_11055/*"RECOMMENDED_ICON"*/, v8);
    byte_4187E5A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoostSupportRequestMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11055/*"RECOMMENDED_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11055/*"RECOMMENDED_ICON"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4187E59 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187E59 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__Awake(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
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
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v20; // x19

  if ( (byte_4187E52 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&OptionManager_TypeInfo, v7);
    sub_B2C35C(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v8);
    sub_B2C35C(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v9);
    byte_4187E52 = 1;
  }
  v10 = sub_B2C42C(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  BoostSupportRequestMenu___c__DisplayClass26_0___ctor((BoostSupportRequestMenu___c__DisplayClass26_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = result;
  *(_DWORD *)(v10 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v10,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v20, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187E53 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_BoostSupportRequestMenu_EndClose__, v10);
    byte_4187E53 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall BoostSupportRequestMenu__EndClose(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostSupportRequestMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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
    sub_B2C434(0LL, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_B2C434(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4187E54 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187E54 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 0, -1, v3);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4187E55 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187E55 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v3);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v8; // x8

  if ( (byte_4187E57 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v3);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v4);
    byte_4187E57 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_B2C434(0LL, v5);
    if ( isBoostItemUseConfirm )
      v8 = &StringLiteral_17005/*"btn_off"*/;
    else
      v8 = &StringLiteral_17006/*"btn_on"*/;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  CommonUI_o *v12; // x21
  BoostEntity_o *BoostEntity; // x20
  BoostFunctionUtility_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  BoostSupportRequestMenu_o *v17; // x0
  int32_t v18; // w1
  int32_t ItemId; // w0

  if ( (byte_4187E56 & 1) == 0 )
  {
    sub_B2C35C(&Method_BoostSupportRequestMenu_Callback__, *(_QWORD *)&kind);
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    byte_4187E56 = 1;
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
        goto LABEL_32;
      Item = BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
    }
    else
    {
      if ( kind == 2 )
      {
        if ( this->fields.isBoostItemUseConfirm )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( Item )
          {
            v12 = (CommonUI_o *)itemListViewManager;
            BoostEntity = BoostSupportRequsetItemListViewItem__get_BoostEntity(Item, 0LL);
            v14 = (BoostFunctionUtility_CallbackFunc_o *)sub_B2C42C(BoostFunctionUtility_CallbackFunc_TypeInfo);
            BoostFunctionUtility_CallbackFunc___ctor(
              v14,
              (Il2CppObject *)this,
              Method_BoostSupportRequestMenu_Callback__,
              0LL);
            if ( v12 )
            {
              CommonUI__OpenBoostSupportRequestReconfirmationMenu(v12, BoostEntity, v14, 0LL);
              return;
            }
          }
LABEL_32:
          sub_B2C434(itemListViewManager, *(_QWORD *)&kind);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        if ( !Item )
          goto LABEL_32;
        ItemId = BoostSupportRequsetItemListViewItem__get_ItemId(Item, 0LL);
        v18 = 2;
        v16 = ItemId;
        v17 = this;
      }
      else
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        v16 = -1;
        v17 = this;
        v18 = 0;
      }
      BoostSupportRequestMenu__Callback(v17, v18, v16, v15);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  UILabel_o *titleLabel; // x21
  EventItemComponent_o *Instance; // x0
  __int64 v47; // x1
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v53; // x21
  BoostSupportRequestMenu_c *v54; // x0
  System_Int32_array *ScriptIntArrayParam; // x19
  const MethodInfo *v56; // x3
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v58; // x3
  BoostEntity_array *v59; // x22
  System_Collections_Generic_List_int__o *v60; // x23
  int max_length; // w8
  int v62; // w19
  BoostEntity_array *v63; // x28
  BoostEntity_o *v64; // x22
  int baseObject; // w8
  EventItemComponent_o *v66; // x24
  unsigned int v67; // w26
  __int64 v68; // x22
  struct UserItemEntity_array *v69; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x24
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  unsigned int v77; // w28
  struct UserItemEntity_array *v78; // x27
  WebViewManager_o *v79; // x0
  __int64 v80; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v83; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x25
  Il2CppClass **v93; // x0
  const MethodInfo *v94; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  struct EventItemComponent_array *v96; // x8
  struct EventItemComponent_array *v97; // x8
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v99; // x22
  const MethodInfo *v100; // x2
  __int64 *v101; // x8
  System_Action_o *v102; // x20
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  BoostSupportRequestMenu_o *v106; // [xsp+10h] [xbp-A0h]
  System_Int32_array *recommendedBoostIds; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_int__o v108; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v109; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4187E50 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&Method_BoostSupportRequestMenu_EndOpen__, v13);
    sub_B2C35C(&Method_BoostSupportRequestMenu_OnSelectItem__, v14);
    sub_B2C35C(&BoostSupportRequestMenu_TypeInfo, v15);
    sub_B2C35C(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v28);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B2C35C(&LocalizationManager_TypeInfo, v30);
    sub_B2C35C(&NetworkManager_TypeInfo, v31);
    sub_B2C35C(&OptionManager_TypeInfo, v32);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_B2C35C(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v34);
    sub_B2C35C(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v35);
    sub_B2C35C(&SoundManager_TypeInfo, v36);
    sub_B2C35C(&UserItemEntity___TypeInfo, v37);
    sub_B2C35C(&StringLiteral_2598/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v38);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v39);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v40);
    sub_B2C35C(&StringLiteral_2604/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v41);
    sub_B2C35C(&StringLiteral_2597/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v42);
    sub_B2C35C(&StringLiteral_2600/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v43);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v44);
    byte_4187E50 = 1;
  }
  memset(&v109, 0, sizeof(v109));
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&questPhase,
    (System_String_array **)callback,
    (System_Boolean_array **)isRetryBattle,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2604/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_87;
  UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2598/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_87;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Instance, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2600/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_87;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Instance, 0LL);
  decideLabel = this->fields.decideLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2597/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_87;
  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Instance = (EventItemComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_87;
  UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
  Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_87;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( Entity )
  {
    v53 = Entity;
    v54 = BoostSupportRequestMenu_TypeInfo;
    if ( (BYTE3(BoostSupportRequestMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v54 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v53, v54->static_fields->RECOMMENDED_ICON, 0LL, 0LL);
  }
  else
  {
    ScriptIntArrayParam = 0LL;
  }
  if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
  }
  Instance = (EventItemComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Instance,
                                                         questId,
                                                         questPhase,
                                                         v56);
  recommendedBoostIds = ScriptIntArrayParam;
  v59 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          ScriptIntArrayParam,
          v58);
  v60 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v60,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v59 )
    goto LABEL_87;
  max_length = v59->max_length;
  if ( max_length >= 1 )
  {
    v62 = 0;
    while ( 1 )
    {
      if ( v62 >= (unsigned int)max_length )
        goto LABEL_88;
      v63 = v59;
      v64 = v59->m_Items[v62];
      if ( !v64 )
        goto LABEL_87;
      if ( v64->fields.commonConsumeId )
      {
        Instance = (EventItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
        if ( !Instance )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)CommonConsumeMaster__GetIdEntityList(
                                             (CommonConsumeMaster_o *)Instance,
                                             v64->fields.commonConsumeId,
                                             0LL);
        if ( !Instance )
          goto LABEL_87;
        baseObject = (int)Instance->fields.baseObject;
        v66 = Instance;
        if ( baseObject >= 1 )
          break;
      }
LABEL_44:
      max_length = v63->max_length;
      ++v62;
      v59 = v63;
      if ( v62 >= max_length )
        goto LABEL_45;
    }
    v67 = 0;
    while ( v67 < baseObject )
    {
      v68 = *((_QWORD *)&v66->fields.baseSp + (int)v67);
      if ( !v68 )
        goto LABEL_87;
      if ( *(_DWORD *)(v68 + 24) == 1 )
      {
        if ( !v60 )
          goto LABEL_87;
        Instance = (EventItemComponent_o *)System_Collections_Generic_List_int___Contains(
                                             v60,
                                             *(_DWORD *)(v68 + 28),
                                             (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v60,
            *(_DWORD *)(v68 + 28),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      baseObject = (int)v66->fields.baseObject;
      if ( (int)++v67 >= baseObject )
        goto LABEL_44;
    }
LABEL_88:
    v103 = sub_B2C460(Instance);
    sub_B2C400(v103, 0LL);
  }
LABEL_45:
  if ( !v60 )
    goto LABEL_87;
  Instance = (EventItemComponent_o *)this->fields.eventItemsInfoBase;
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v60->fields._size > 0, 0LL);
  v69 = (struct UserItemEntity_array *)sub_B2C374(UserItemEntity___TypeInfo, (unsigned int)v60->fields._size);
  this->fields.mUsrItemEntityList = v69;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v106 = this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mUsrItemEntityList,
    (System_Int32_array **)v69,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v108,
    v60,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v109 = v108;
  v77 = 0;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v109,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v78 = *p_mUsrItemEntityList;
    v79 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v79 )
      sub_B2C434(0LL, v80);
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v79,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( v60->fields._size <= v77 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, v83);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         v60->fields._items->m_Items[v77 + 1],
                         0LL);
    if ( !v78 )
      sub_B2C434(EntityDefinitely, v85);
    v92 = (System_Int32_array **)EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_B2C41C(EntityDefinitely, v78->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v105 = sub_B2C454(0LL);
        sub_B2C400(v105, 0LL);
      }
    }
    if ( v77 >= v78->max_length )
    {
      v104 = sub_B2C460(EntityDefinitely);
      sub_B2C400(v104, 0LL);
    }
    v93 = &v78->obj.klass + (int)v77;
    v93[4] = (Il2CppClass *)v92;
    sub_B2C2F8((BattleServantConfConponent_o *)(v93 + 4), v92, v86, v87, v88, v89, v90, v91);
    ++v77;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v109,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v60->fields._size >= 1 )
  {
    eventItemIconList = v106->fields.eventItemIconList;
    if ( eventItemIconList )
    {
      if ( !eventItemIconList->max_length )
        goto LABEL_88;
      Instance = eventItemIconList->m_Items[0];
      if ( Instance )
      {
        EventItemComponent__Set(Instance, v60->fields._items->m_Items[1], 0LL);
        if ( v60->fields._size < 2 )
          goto LABEL_74;
        v96 = v106->fields.eventItemIconList;
        if ( v96 )
        {
          if ( v96->max_length <= 1 )
            goto LABEL_88;
          Instance = v96->m_Items[1];
          if ( Instance )
          {
            EventItemComponent__Set(Instance, v60->fields._items->m_Items[2], 0LL);
            if ( v60->fields._size < 3 )
              goto LABEL_74;
            v97 = v106->fields.eventItemIconList;
            if ( v97 )
            {
              if ( v97->max_length <= 2 )
                goto LABEL_88;
              Instance = v97->m_Items[2];
              if ( Instance )
              {
                EventItemComponent__Set(Instance, v60->fields._items->m_Items[3], 0LL);
                goto LABEL_74;
              }
            }
          }
        }
      }
    }
LABEL_87:
    sub_B2C434(Instance, v47);
  }
LABEL_74:
  Instance = (EventItemComponent_o *)v106->fields.itemListViewManager;
  if ( !Instance )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Instance,
    v59,
    recommendedBoostIds,
    v106->fields.mUsrItemEntityList,
    v94);
  itemListViewManager = v106->fields.itemListViewManager;
  v99 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_B2C42C(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v99,
    (Il2CppObject *)v106,
    Method_BoostSupportRequestMenu_OnSelectItem__,
    0LL);
  if ( !itemListViewManager )
    goto LABEL_87;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v99, v100);
  Instance = (EventItemComponent_o *)v106->fields.setupConfirmSprite;
  if ( !Instance )
    goto LABEL_87;
  if ( v106->fields.isBoostItemUseConfirm )
    v101 = &StringLiteral_17006/*"btn_on"*/;
  else
    v101 = &StringLiteral_17005/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v101, 0LL);
  if ( !isRetryBattle )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  Instance = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v106, 0LL);
  if ( !Instance )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v106->fields.state = 1;
  v102 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v102, (Il2CppObject *)v106, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v106, v102, 0, 0LL);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  BoostEntity_array *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  unsigned __int64 v17; // x24
  signed __int64 v18; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x23
  const MethodInfo_2EF4460 *v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x0
  __int64 v22; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v23; // x0

  v5 = boostEntityList;
  if ( (byte_4187E51 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, boostEntityList);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_4187E51 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !v5 )
    goto LABEL_25;
  if ( recommendedBoostIds && *(_QWORD *)&recommendedBoostIds->max_length )
  {
    v16 = *(_QWORD *)&v5->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = 0LL;
      v18 = (int)v16;
      while ( 1 )
      {
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v5->m_Items[v17];
        if ( v19 )
        {
          v14 = System_Linq_Enumerable__Contains_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
                  v19->fields.missionTargetId,
                  (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( v14 )
          {
            if ( !v13 )
              goto LABEL_25;
            v20 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v21 = v13;
          }
          else
          {
            if ( !v12 )
              goto LABEL_25;
            v20 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoostEntity__Add__;
            v21 = v12;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v21, v19, v20);
        }
        if ( (__int64)++v17 >= v18 )
          break;
        if ( v17 >= v5->max_length )
        {
          v22 = sub_B2C460(v14);
          sub_B2C400(v22, 0LL);
        }
      }
    }
    if ( v13 )
    {
      if ( v13->fields._size >= 1 )
      {
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
          (System_Collections_Generic_IEnumerable_T__o *)v12,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
        v23 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v23,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
      if ( v12 )
      {
        v23 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12;
        return (BoostEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v23,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
      }
    }
LABEL_25:
    sub_B2C434(v14, v15);
  }
  return v5;
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

  if ( (byte_4187E4E & 1) == 0 )
  {
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4187E4E = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_B2C728(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4187E58 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187E58 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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

  if ( (byte_4187E4F & 1) == 0 )
  {
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4187E4F = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_B2C728(v8);
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
  BoostFunctionUtility_CallbackFunc_o *v5; // x20
  BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_B2C2F8(p_callbackFunc, 0LL);
  if ( callbackFunc )
    BoostFunctionUtility_CallbackFunc__Invoke(v5, this->fields.result, this->fields.index, v7);
}