void __fastcall EventItemBoardComponent___ctor(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemBoardComponent__OnClickItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *dialog; // x20
  struct EventItemSelectDlgComponent_o *v14; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x0
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *v20; // x23
  CommonUI_o *Instance; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonConfirmDialog_ClickDelegate_o *v26; // x25

  if ( (byte_40F8828 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_EventItemBoardComponent_SpendItemDlg__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_14699/*"USE_ITEM_CONFIRM_MSG"*/, v9);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40F8828 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL) )
    {
      v14 = this->fields.dialog;
      if ( !v14 )
        goto LABEL_23;
      if ( v14->fields.isClosed )
        return;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_14699/*"USE_ITEM_CONFIRM_MSG"*/, 0LL);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_23;
      v20 = System_String__Format(v18, (Il2CppObject *)itemEntity->fields.name, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v22,
                                                     v23,
                                                     v24,
                                                     v25);
      CommonConfirmDialog_ClickDelegate___ctor(
        v26,
        (Il2CppObject *)this,
        Method_EventItemBoardComponent_SpendItemDlg__,
        0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !Instance )
LABEL_23:
        sub_B170D4();
      CommonUI__OpenConfirmDecideDlg(
        Instance,
        v15,
        v20,
        v16,
        v17,
        v26,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        12.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        0LL);
    }
  }
}


void __fastcall EventItemBoardComponent__OnCloseConfirmDialog(
        EventItemBoardComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x0
  EventItemBoardComponent_CallbackFunc_o *v10; // x20
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1

  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v10 = onCloseDialogFunc;
  if ( onCloseDialogFunc )
  {
    this->fields.onCloseDialogFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_onCloseDialogFunc, 0LL, v2, v3, v4, v5, v6, v7);
    EventItemBoardComponent_CallbackFunc__Invoke(v10, this->fields.itemEntity, this->fields.spendItemNum, 0LL);
  }
}


void __fastcall EventItemBoardComponent__SetEnableSelectItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(maskImg, 1, 0LL);
  }
}


void __fastcall EventItemBoardComponent__SetItemBoardInfo(
        EventItemBoardComponent_o *this,
        ItemEntity_o *itemEntity,
        EventItemBoardComponent_CallbackFunc_o *onConfirmSelectItemFunc,
        EventItemSelectDlgComponent_o *dialog,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct ItemEntity_o **p_itemEntity; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *maskImg; // x0
  UILabel_o *itemNameLb; // x0
  UILabel_o *currentNumLb; // x0
  UILabel_o *spendNumLb; // x0
  UILabel_o *itemDetailLb; // x0
  UnityEngine_Component_o *itemIconInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *cmdSpellBg; // x0
  const MethodInfo *v39; // x1
  ItemIconComponent_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct ItemEntity_o *v43; // x8
  UILabel_o *v44; // x0
  struct ItemEntity_o *v45; // x0
  UILabel_o *v46; // x21
  System_String_o *Script_28921972; // x0
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserItemEntity_o *Entity; // x0
  int32_t v52; // w22
  UILabel_o *v53; // x20
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  UILabel_o *v56; // x20
  System_String_o *v57; // x0
  int32_t v58; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8827 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_23433/*"{0:N0}"*/, v15);
    sub_B16FFC(&StringLiteral_746/*"-"*/, v16);
    sub_B16FFC(&StringLiteral_18455/*"event_item_board_description"*/, v17);
    byte_40F8827 = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    (System_String_array **)onConfirmSelectItemFunc,
    (System_String_array **)dialog,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.dialog = dialog;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dialog,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onCloseDialogFunc,
    (System_Int32_array **)onConfirmSelectItemFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(maskImg, 0, 0LL);
  itemNameLb = this->fields.itemNameLb;
  if ( !itemNameLb )
    goto LABEL_32;
  UILabel__set_text(itemNameLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  currentNumLb = this->fields.currentNumLb;
  if ( !currentNumLb )
    goto LABEL_32;
  UILabel__set_text(currentNumLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  spendNumLb = this->fields.spendNumLb;
  if ( !spendNumLb )
    goto LABEL_32;
  UILabel__set_text(spendNumLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  itemDetailLb = this->fields.itemDetailLb;
  if ( !itemDetailLb )
    goto LABEL_32;
  UILabel__set_text(itemDetailLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  itemIconInfo = (UnityEngine_Component_o *)this->fields.itemIconInfo;
  if ( !itemIconInfo )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(itemIconInfo, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  cmdSpellBg = this->fields.cmdSpellBg;
  if ( !cmdSpellBg )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(cmdSpellBg, 0, 0LL);
  if ( *p_itemEntity )
  {
    v40 = this->fields.itemIconInfo;
    if ( v40 )
    {
      ItemIconComponent__SetItemImage_28925112(
        v40,
        (*p_itemEntity)->fields.imageId,
        (*p_itemEntity)->fields.bgImageId,
        (*p_itemEntity)->fields.type,
        0,
        0LL);
      v41 = (UnityEngine_Component_o *)this->fields.itemIconInfo;
      if ( v41 )
      {
        v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
        if ( v42 )
        {
          UnityEngine_GameObject__SetActive(v42, 1, 0LL);
          v43 = this->fields.itemEntity;
          if ( v43 )
          {
            v44 = this->fields.itemNameLb;
            if ( v44 )
            {
              UILabel__set_text(v44, v43->fields.name, 0LL);
              v45 = this->fields.itemEntity;
              if ( v45 )
              {
                v46 = this->fields.itemDetailLb;
                Script_28921972 = ItemEntity__getScript_28921972(
                                    v45,
                                    (System_String_o *)StringLiteral_18455/*"event_item_board_description"*/,
                                    v45->fields.detail,
                                    0LL);
                if ( v46 )
                {
                  UILabel__set_text(v46, Script_28921972, 0LL);
                  this->fields.spendItemNum = 1;
                  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)Instance,
                                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    }
                    UserId = NetworkManager__get_UserId(0LL);
                    if ( *p_itemEntity && MasterData_WarQuestSelectionMaster )
                    {
                      Entity = UserItemMaster__GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 UserId,
                                 (*p_itemEntity)->fields.id,
                                 0LL);
                      v52 = Entity ? Entity->fields.num : 0;
                      v53 = this->fields.currentNumLb;
                      v58 = v52;
                      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
                      v55 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v54, 0LL);
                      if ( v53 )
                      {
                        UILabel__set_text(v53, v55, 0LL);
                        v56 = this->fields.spendNumLb;
                        v57 = System_Int32__ToString((int)this + 116, 0LL);
                        if ( v56 )
                        {
                          UILabel__set_text(v56, v57, 0LL);
                          this->fields.isEnableSelect = v52 >= this->fields.spendItemNum;
                          goto LABEL_31;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
LABEL_31:
  EventItemBoardComponent__SetEnableSelectItem(this, v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent__SpendItemDlg(
        EventItemBoardComponent_o *this,
        bool isDecided,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  CommonUI_o *v12; // x21
  System_Action_o *v13; // x20

  if ( (byte_40F8829 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecided);
    sub_B16FFC(&Method_EventItemBoardComponent_OnCloseConfirmDialog__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F8829 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecided )
  {
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0LL);
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_18237824(v12, v13, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall EventItemBoardComponent__add_onCloseDialogFunc(
        EventItemBoardComponent_o *this,
        EventItemBoardComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventItemBoardComponent_o *v11; // x0
  EventItemBoardComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F8825 & 1) == 0 )
  {
    sub_B16FFC(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_40F8825 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventItemBoardComponent_CallbackFunc_c *)v8->klass != EventItemBoardComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemBoardComponent_o *)sub_B173C8(v8);
  EventItemBoardComponent__remove_onCloseDialogFunc(v11, v12, v13);
}


void __fastcall EventItemBoardComponent__remove_onCloseDialogFunc(
        EventItemBoardComponent_o *this,
        EventItemBoardComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventItemBoardComponent_o *v11; // x0
  ItemEntity_o *v12; // x1
  EventItemBoardComponent_CallbackFunc_o *v13; // x2
  EventItemSelectDlgComponent_o *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_40F8826 & 1) == 0 )
  {
    sub_B16FFC(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_40F8826 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventItemBoardComponent_CallbackFunc_c *)v8->klass != EventItemBoardComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemBoardComponent_o *)sub_B173C8(v8);
  EventItemBoardComponent__SetItemBoardInfo(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent_CallbackFunc___ctor(
        EventItemBoardComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall EventItemBoardComponent_CallbackFunc__BeginInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = spendNum;
  if ( (byte_40F6FE8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, selectedItem);
    byte_40F6FE8 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent_CallbackFunc__Invoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  EventItemBoardComponent_CallbackFunc_o **v9; // x26
  __int64 i; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  ItemEntity_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w24
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(ItemEntity_o *, _QWORD, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, ItemEntity_o *, _QWORD, _QWORD); // x0
  EventItemBoardComponent_CallbackFunc_o *v29; // x8
  __int64 v30; // x22
  __int64 *v31; // x23
  void (__fastcall *v32)(ItemEntity_o *, _QWORD, __int64); // x24
  char v33; // w0
  int v34; // w8
  char v35; // w24
  char v36; // w0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  char v42; // w23
  char v43; // w0
  ItemEntity_c *klass; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  EventItemBoardComponent_CallbackFunc_o *v49; // [xsp+8h] [xbp-48h] BYREF

  v49 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v49;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (EventItemBoardComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v8; ++i )
    {
      v29 = v9[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(ItemEntity_o *, _QWORD, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v29->fields.extra_arg, selectedItem, *(_QWORD *)&spendNum);
      v33 = sub_B1702C(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 2 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v42 = sub_B17024(v30);
            v43 = sub_B17428(v30);
            if ( (v42 & 1) != 0 )
            {
              if ( (v43 & 1) != 0 )
              {
                klass = selectedItem->klass;
                v45 = *(_QWORD *)(v30 + 24);
                v46 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v45 )
                  {
                    ++v47;
                    p_offset += 4;
                    if ( v47 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v46);
                }
                else
                {
LABEL_57:
                  v25 = sub_AAFEF8(selectedItem, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))sub_B170AC(v17, v30);
              (*v26)(selectedItem, (unsigned int)spendNum, v26);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v30 + 72);
              if ( (v43 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v13 = selectedItem->klass;
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v11));
                }
                else
                {
LABEL_11:
                  v16 = sub_AAFEF8(selectedItem, class_0, v11);
                }
                (*(void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))v16)(
                  selectedItem,
                  (unsigned int)spendNum,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))&selectedItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  selectedItem,
                  (unsigned int)spendNum,
                  *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(selectedItem, (unsigned int)spendNum, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B17024(v30);
          v36 = sub_B17428(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v37 = *v31;
              v38 = *(_QWORD *)(v30 + 24);
              v39 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v40 = 0LL;
                v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
                while ( *((_QWORD *)v41 - 1) != v38 )
                {
                  ++v40;
                  v41 += 4;
                  if ( v40 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v37 + 16LL * (*v41 + (int)v39) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AAFEF8(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))sub_B170AC(v24, v30);
            (*v28)(v31, selectedItem, (unsigned int)spendNum, v28);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v19 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v18) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AAFEF8(v31, v19, v18);
              }
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))v23)(
                v31,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))(*v31
                                                                                + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                                + 312))(
                v31,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, ItemEntity_o *, _QWORD, __int64))v32)(
        v31,
        selectedItem,
        (unsigned int)spendNum,
        v30);
    }
  }
}