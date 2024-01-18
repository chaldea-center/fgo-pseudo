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
  System_String_o *v14; // x0
  __int64 v15; // x1
  struct EventItemSelectDlgComponent_o *v16; // x8
  System_String_o *v17; // x20
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *v21; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v23; // x25

  if ( (byte_4188D2E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_EventItemBoardComponent_SpendItemDlg__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_14759/*"USE_ITEM_CONFIRM_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4188D2E = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = (System_String_o *)UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
    if ( ((unsigned __int8)v14 & 1) != 0 )
    {
      v16 = this->fields.dialog;
      if ( !v16 )
        goto LABEL_23;
      if ( v16->fields.isClosed )
        return;
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14759/*"USE_ITEM_CONFIRM_MSG"*/, 0LL);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_23;
      v21 = System_String__Format(v14, (Il2CppObject *)itemEntity->fields.name, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_EventItemBoardComponent_SpendItemDlg__,
        0LL);
      v14 = (System_String_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !Instance )
LABEL_23:
        sub_B2C434(v14, v15);
      CommonUI__OpenConfirmDecideDlg(
        Instance,
        v17,
        v21,
        v18,
        v19,
        v23,
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
    sub_B2C2F8((BattleServantConfConponent_o *)p_onCloseDialogFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_B2C434(0LL, method);
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
  const MethodInfo *v31; // x1
  int64_t maskImg; // x0
  struct ItemEntity_o *v33; // x8
  UILabel_o *itemDetailLb; // x21
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UserItemEntity_o *Entity; // x0
  int32_t v37; // w22
  UILabel_o *currentNumLb; // x20
  Il2CppObject *v39; // x0
  UILabel_o *spendNumLb; // x20
  int32_t v41; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188D2D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v15);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v16);
    sub_B2C35C(&StringLiteral_18524/*"event_item_board_description"*/, v17);
    byte_4188D2D = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)itemEntity,
    (System_String_array **)onConfirmSelectItemFunc,
    (System_String_array **)dialog,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.dialog = dialog;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dialog,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onCloseDialogFunc,
    (System_Int32_array **)onConfirmSelectItemFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_747/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_32;
  maskImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
  if ( !maskImg )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
  maskImg = (int64_t)this->fields.cmdSpellBg;
  if ( !maskImg )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  if ( *p_itemEntity )
  {
    maskImg = (int64_t)this->fields.itemIconInfo;
    if ( maskImg )
    {
      ItemIconComponent__SetItemImage_27393796(
        (ItemIconComponent_o *)maskImg,
        (*p_itemEntity)->fields.imageId,
        (*p_itemEntity)->fields.bgImageId,
        (*p_itemEntity)->fields.type,
        0,
        0LL);
      maskImg = (int64_t)this->fields.itemIconInfo;
      if ( maskImg )
      {
        maskImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
        if ( maskImg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
          v33 = this->fields.itemEntity;
          if ( v33 )
          {
            maskImg = (int64_t)this->fields.itemNameLb;
            if ( maskImg )
            {
              UILabel__set_text((UILabel_o *)maskImg, v33->fields.name, 0LL);
              maskImg = (int64_t)this->fields.itemEntity;
              if ( maskImg )
              {
                itemDetailLb = this->fields.itemDetailLb;
                maskImg = (int64_t)ItemEntity__getScript_27390864(
                                     (ItemEntity_o *)maskImg,
                                     (System_String_o *)StringLiteral_18524/*"event_item_board_description"*/,
                                     *(System_String_o **)(maskImg + 32),
                                     0LL);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)maskImg, 0LL);
                  this->fields.spendItemNum = 1;
                  maskImg = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( maskImg )
                  {
                    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                               (DataManager_o *)maskImg,
                                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    }
                    maskImg = NetworkManager__get_UserId(0LL);
                    if ( *p_itemEntity && MasterData_WarQuestSelectionMaster )
                    {
                      Entity = UserItemMaster__GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 maskImg,
                                 (*p_itemEntity)->fields.id,
                                 0LL);
                      v37 = Entity ? Entity->fields.num : 0;
                      currentNumLb = this->fields.currentNumLb;
                      v41 = v37;
                      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
                      maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v39, 0LL);
                      if ( currentNumLb )
                      {
                        UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0LL);
                        spendNumLb = this->fields.spendNumLb;
                        maskImg = (int64_t)System_Int32__ToString((int)this + 116, 0LL);
                        if ( spendNumLb )
                        {
                          UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0LL);
                          this->fields.isEnableSelect = v37 >= this->fields.spendItemNum;
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
    sub_B2C434(maskImg, v31);
  }
LABEL_31:
  EventItemBoardComponent__SetEnableSelectItem(this, v31);
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
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_4188D2F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecided);
    sub_B2C35C(&Method_EventItemBoardComponent_OnCloseConfirmDialog__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4188D2F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecided )
  {
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(Instance, v8);
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

  if ( (byte_4188D2B & 1) == 0 )
  {
    sub_B2C35C(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_4188D2B = 1;
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
    v9 = sub_B20D74(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemBoardComponent_o *)sub_B2C728(v8);
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

  if ( (byte_4188D2C & 1) == 0 )
  {
    sub_B2C35C(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_4188D2C = 1;
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
    v9 = sub_B20D74(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemBoardComponent_o *)sub_B2C728(v8);
  EventItemBoardComponent__SetItemBoardInfo(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent_CallbackFunc___ctor(
        EventItemBoardComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184B1B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, selectedItem);
    byte_4184B1B = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  ItemEntity_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(ItemEntity_o *, _QWORD, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, ItemEntity_o *, _QWORD, _QWORD); // x0
  EventItemBoardComponent_CallbackFunc_o *v31; // x8
  __int64 v32; // x22
  __int64 *v33; // x23
  void (__fastcall *v34)(ItemEntity_o *, _QWORD, __int64); // x24
  char v35; // w0
  int v36; // w8
  char v37; // w24
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w23
  char v46; // w0
  __int64 v47; // x3
  ItemEntity_c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  EventItemBoardComponent_CallbackFunc_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v53;
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
      v31 = v9[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(ItemEntity_o *, _QWORD, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v31->fields.extra_arg, selectedItem, *(_QWORD *)&spendNum, method);
      v35 = sub_B2C38C(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 2 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B2C384(v32);
            v46 = sub_B2C788(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = selectedItem->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AC5258(selectedItem, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))sub_B2C40C(v18, v32);
              (*v28)(selectedItem, (unsigned int)spendNum, v28);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v14 = selectedItem->klass;
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v15 = 0LL;
                  v16 = &v14->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v16 - 1) != class_0 )
                  {
                    ++v15;
                    v16 += 4;
                    if ( v15 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v17 = (__int64)(&v14->vtable._0_Equals.method + 2 * (int)(*v16 + v11));
                }
                else
                {
LABEL_11:
                  v17 = sub_AC5258(selectedItem, class_0, v11, v13);
                }
                (*(void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))v17)(
                  selectedItem,
                  (unsigned int)spendNum,
                  *(_QWORD *)(v17 + 8));
              }
              else
              {
                (*((void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))&selectedItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  selectedItem,
                  (unsigned int)spendNum,
                  *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(selectedItem, (unsigned int)spendNum, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B2C384(v32);
          v38 = sub_B2C788(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AC5258(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))sub_B2C40C(v26, v32);
            (*v30)(v33, selectedItem, (unsigned int)spendNum, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AC5258(v33, v20, v19, v21);
              }
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))v25)(
                v33,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))(*v33
                                                                                + 16LL * *(unsigned __int16 *)(v32 + 72)
                                                                                + 312))(
                v33,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, ItemEntity_o *, _QWORD, __int64))v34)(
        v33,
        selectedItem,
        (unsigned int)spendNum,
        v32);
    }
  }
}