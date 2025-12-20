void EventItemBoardComponent___ctor(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventItemBoardComponent__OnClickItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  __int64 v4; // x1
  EventItemSelectDlgComponent_o *v5; // x0
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  _QWORD *v9; // x8
  System_Reflection_MethodBase_o *v10; // x0
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *v12; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4D2E68C & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_EventItemBoardComponent_OnClickItem__);
    sub_1C94098(&Method_EventItemBoardComponent_SpendItemDlg__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_14921/*"USE_ITEM_CONFIRM_MSG"*/);
    sub_1C94098(&StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E68C = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dialog, 0, 0) )
    {
      v5 = this->fields.dialog;
      if ( !v5 )
        goto LABEL_19;
      if ( !EventItemSelectDlgComponent__isListTouchable(v5, 0) )
        return;
      v6 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/, 0);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0);
      v9 = Method_EventItemBoardComponent_OnClickItem__;
      if ( (*((_BYTE *)Method_EventItemBoardComponent_OnClickItem__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C940B0(Method_EventItemBoardComponent_OnClickItem__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C9407C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      v5 = (EventItemSelectDlgComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14921/*"USE_ITEM_CONFIRM_MSG"*/, 0);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_19;
      v12 = System_String__Format((System_String_o *)v5, (Il2CppObject *)itemEntity->fields.name, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v14,
        (Il2CppObject *)this,
        Method_EventItemBoardComponent_SpendItemDlg__,
        0);
      v5 = (EventItemSelectDlgComponent_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !Instance )
LABEL_19:
        sub_1C942F0(v5, v4);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)Instance,
        v6,
        v12,
        v7,
        v8,
        v14,
        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
        12.0,
        15.0,
        0,
        1,
        0,
        240,
        0,
        1,
        0,
        0,
        0);
    }
  }
}


void EventItemBoardComponent__OnCloseConfirmDialog(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x0
  struct EventItemBoardComponent_CallbackFunc_o *v10; // x20
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1

  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v10 = onCloseDialogFunc;
  if ( onCloseDialogFunc )
  {
    this->fields.onCloseDialogFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_onCloseDialogFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, struct ItemEntity_o *, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      this->fields.itemEntity,
      (unsigned int)this->fields.spendItemNum,
      v10->fields.method);
  }
}


void EventItemBoardComponent__SetEnableSelectItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1C942F0(0, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0);
  }
}


void EventItemBoardComponent__SetItemBoardInfo(
        EventItemBoardComponent_o *this,
        ItemEntity_o *itemEntity,
        EventItemBoardComponent_CallbackFunc_o *onConfirmSelectItemFunc,
        EventItemSelectDlgComponent_o *dialog,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ItemEntity_o **p_itemEntity; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x1
  void *maskImg; // x0
  struct ItemEntity_o *v27; // x8
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *MasterData_object; // x22
  UserItemEntity_o *Entity; // x0
  int32_t v31; // w22
  UILabel_o *currentNumLb; // x20
  Il2CppObject *v33; // x0
  UILabel_o *spendNumLb; // x20
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2E68B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_25345/*"{0:N0}"*/);
    sub_1C94098(&StringLiteral_858/*"-"*/);
    sub_1C94098(&StringLiteral_19357/*"event_item_board_description"*/);
    byte_4D2E68B = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    (int32_t)onConfirmSelectItemFunc,
    (int32_t)dialog,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.dialog = dialog;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dialog, (int32_t)dialog, v13, v14, v15, v16, v17, v18);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onCloseDialogFunc,
    (int32_t)onConfirmSelectItemFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_35;
  maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0);
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0);
  maskImg = this->fields.cmdSpellBg;
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0);
  if ( *p_itemEntity )
  {
    maskImg = this->fields.itemIconInfo;
    if ( maskImg )
    {
      ItemIconComponent__SetItemImage_41672124(
        (ItemIconComponent_o *)maskImg,
        (*p_itemEntity)->fields.imageId,
        (*p_itemEntity)->fields.bgImageId,
        (*p_itemEntity)->fields.type,
        0,
        1,
        0);
      maskImg = this->fields.itemIconInfo;
      if ( maskImg )
      {
        maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0);
        if ( maskImg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0);
          v27 = this->fields.itemEntity;
          if ( v27 )
          {
            maskImg = this->fields.itemNameLb;
            if ( maskImg )
            {
              UILabel__set_text((UILabel_o *)maskImg, v27->fields.name, 0);
              maskImg = this->fields.itemEntity;
              if ( maskImg )
              {
                itemDetailLb = this->fields.itemDetailLb;
                maskImg = ItemEntity__getScript_43132092(
                            (ItemEntity_o *)maskImg,
                            (System_String_o *)StringLiteral_19357/*"event_item_board_description"*/,
                            *((System_String_o **)maskImg + 4),
                            0);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)maskImg, 0);
                  this->fields.spendItemNum = 1;
                  maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( maskImg )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)maskImg,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    if ( !byte_4D2633A )
                    {
                      sub_1C94098(&NetworkManager_TypeInfo);
                      byte_4D2633A = 1;
                    }
                    maskImg = NetworkManager_TypeInfo;
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      maskImg = NetworkManager_TypeInfo;
                    }
                    if ( *p_itemEntity && MasterData_object )
                    {
                      Entity = UserItemMaster__GetEntity(
                                 (UserItemMaster_o *)MasterData_object,
                                 *(_QWORD *)(*((_QWORD *)maskImg + 23) + 64LL),
                                 (*p_itemEntity)->fields.id,
                                 0);
                      v31 = Entity ? Entity->fields.num : 0;
                      currentNumLb = this->fields.currentNumLb;
                      v35 = v31;
                      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
                      maskImg = System_String__Format((System_String_o *)StringLiteral_25345/*"{0:N0}"*/, v33, 0);
                      if ( currentNumLb )
                      {
                        UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0);
                        spendNumLb = this->fields.spendNumLb;
                        maskImg = System_Int32__ToString((int)this + 124, 0);
                        if ( spendNumLb )
                        {
                          UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0);
                          this->fields.isEnableSelect = v31 >= this->fields.spendItemNum;
                          goto LABEL_34;
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
LABEL_35:
    sub_1C942F0(maskImg, v25);
  }
LABEL_34:
  EventItemBoardComponent__SetEnableSelectItem(this, v25);
}


void EventItemBoardComponent__SpendItemDlg(EventItemBoardComponent_o *this, bool isDecided, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_4D2E68D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventItemBoardComponent_OnCloseConfirmDialog__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2E68D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecided )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31583752(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_1C942F0(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void EventItemBoardComponent__add_onCloseDialogFunc(
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

  if ( (byte_4D2E689 & 1) == 0 )
  {
    sub_1C94098(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    byte_4D2E689 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EventItemBoardComponent_CallbackFunc_c *)v8->klass != EventItemBoardComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  EventItemBoardComponent__remove_onCloseDialogFunc(v11, v12, v13);
}


void EventItemBoardComponent__remove_onCloseDialogFunc(
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

  if ( (byte_4D2E68A & 1) == 0 )
  {
    sub_1C94098(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    byte_4D2E68A = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EventItemBoardComponent_CallbackFunc_c *)v8->klass != EventItemBoardComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C9468C(v8);
  EventItemBoardComponent__SetItemBoardInfo(v11, v12, v13, v14, v15);
}


void EventItemBoardComponent_CallbackFunc___ctor(
        EventItemBoardComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1ACA9CC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_1C94150(method);
        v15 = sub_1C946E4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1ACAAE8;
          else
            v13 = sub_1ACAA9C;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1ACAA10;
        }
        else
        {
          v13 = sub_1ACA9E0;
        }
      }
      else
      {
        v13 = sub_1ACA9A8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1ACA950;
}


System_IAsyncResult_o *EventItemBoardComponent_CallbackFunc__BeginInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = spendNum;
  if ( (byte_4D2EFC8 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D2EFC8 = 1;
  }
  v11[2] = 0;
  v11[0] = selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void EventItemBoardComponent_CallbackFunc__Invoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, ItemEntity_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    selectedItem,
    spendNum,
    this->fields.method);
}