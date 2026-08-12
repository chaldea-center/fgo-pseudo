void EventItemBoardComponent___ctor(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventItemBoardComponent__OnClickItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct EventItemSelectDlgComponent_o *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *v13; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v15; // x25

  if ( (byte_597307B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_EventItemBoardComponent_OnClickItem__);
    sub_2213A60(&Method_EventItemBoardComponent_SpendItemDlg__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_15460/*"USE_ITEM_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597307B = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = (System_String_o *)UnityEngine_Object__op_Inequality(dialog, 0, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v6 = this->fields.dialog;
      if ( !v6 )
        goto LABEL_19;
      if ( v6->fields.isClosed )
        return;
      v7 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
      v10 = Method_EventItemBoardComponent_OnClickItem__;
      if ( (*((_BYTE *)Method_EventItemBoardComponent_OnClickItem__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_2213A78(Method_EventItemBoardComponent_OnClickItem__);
      v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      v4 = LocalizationManager__Get((System_String_o *)StringLiteral_15460/*"USE_ITEM_CONFIRM_MSG"*/, 0);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_19;
      v13 = System_String__Format(v4, (Il2CppObject *)itemEntity->fields.name, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v15,
        (Il2CppObject *)this,
        Method_EventItemBoardComponent_SpendItemDlg__,
        0);
      v4 = (System_String_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
      if ( !Instance )
LABEL_19:
        sub_2213CDC(v4, v5);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)Instance,
        v7,
        v13,
        v8,
        v9,
        v15,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x0
  struct EventItemBoardComponent_CallbackFunc_o *v10; // x20
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1

  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v10 = onCloseDialogFunc;
  if ( onCloseDialogFunc )
  {
    this->fields.onCloseDialogFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_onCloseDialogFunc, 0, v2, v3, v4, v5, v6, v7);
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
      sub_2213CDC(0, method);
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
  bool v6; // w6
  bool v7; // w7
  struct ItemEntity_o **p_itemEntity; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *maskImg; // x0
  struct ItemEntity_o *v27; // x8
  ItemEntity_o *v28; // x22
  UILabel_o *itemDetailLb; // x21
  System_String_o *Detail; // x0
  const MethodInfo_47A29F8 *v31; // x0
  Il2CppObject *MasterData_object; // x22
  UserItemEntity_o *Entity; // x0
  int32_t v34; // w22
  UILabel_o *currentNumLb; // x20
  Il2CppObject *v36; // x0
  UILabel_o *spendNumLb; // x20
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597307A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_20104/*"event_item_board_description"*/);
    byte_597307A = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    (System_String_o *)onConfirmSelectItemFunc,
    (System_String_o *)dialog,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.dialog = dialog;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dialog, (int32_t)dialog, v13, v14, v15, v16, v17, v18);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onCloseDialogFunc,
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
  UnityEngine_GameObject__SetActive(maskImg, 0, 0);
  maskImg = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = (UnityEngine_GameObject_o *)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = (UnityEngine_GameObject_o *)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = (UnityEngine_GameObject_o *)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = (UnityEngine_GameObject_o *)this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_35;
  maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0);
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(maskImg, 1, 0);
  maskImg = this->fields.cmdSpellBg;
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(maskImg, 0, 0);
  if ( *p_itemEntity )
  {
    maskImg = (UnityEngine_GameObject_o *)this->fields.itemIconInfo;
    if ( maskImg )
    {
      ItemIconComponent__SetItemImage_47882600(
        (ItemIconComponent_o *)maskImg,
        (*p_itemEntity)->fields.imageId,
        (*p_itemEntity)->fields.bgImageId,
        (*p_itemEntity)->fields.type,
        0,
        1,
        0);
      maskImg = (UnityEngine_GameObject_o *)this->fields.itemIconInfo;
      if ( maskImg )
      {
        maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0);
        if ( maskImg )
        {
          UnityEngine_GameObject__SetActive(maskImg, 1, 0);
          v27 = this->fields.itemEntity;
          if ( v27 )
          {
            maskImg = (UnityEngine_GameObject_o *)this->fields.itemNameLb;
            if ( maskImg )
            {
              UILabel__set_text((UILabel_o *)maskImg, v27->fields.name, 0);
              v28 = this->fields.itemEntity;
              if ( v28 )
              {
                itemDetailLb = this->fields.itemDetailLb;
                Detail = ItemEntity__GetDetail(this->fields.itemEntity, 0);
                maskImg = (UnityEngine_GameObject_o *)ItemEntity__getScript_49376732(
                                                        v28,
                                                        (System_String_o *)StringLiteral_20104/*"event_item_board_description"*/,
                                                        Detail,
                                                        0);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)maskImg, 0);
                  v31 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
                  this->fields.spendItemNum = 1;
                  maskImg = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance(v31);
                  if ( maskImg )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)maskImg,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
                    if ( !byte_5969EF2 )
                    {
                      sub_2213A60(&NetworkManager_TypeInfo);
                      byte_5969EF2 = 1;
                    }
                    maskImg = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
                      maskImg = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                    }
                    if ( *p_itemEntity && MasterData_object )
                    {
                      Entity = UserItemMaster__GetEntity(
                                 (UserItemMaster_o *)MasterData_object,
                                 *(_QWORD *)(maskImg[7].fields.m_CachedPtr + 64),
                                 (*p_itemEntity)->fields.id,
                                 0);
                      v34 = Entity ? Entity->fields.num : 0;
                      currentNumLb = this->fields.currentNumLb;
                      v38 = v34;
                      v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
                      maskImg = (UnityEngine_GameObject_o *)System_String__Format(
                                                              (System_String_o *)StringLiteral_26474/*"{0:N0}"*/,
                                                              v36,
                                                              0);
                      if ( currentNumLb )
                      {
                        UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0);
                        spendNumLb = this->fields.spendNumLb;
                        maskImg = (UnityEngine_GameObject_o *)System_Int32__ToString((int)this + 124, 0);
                        if ( spendNumLb )
                        {
                          UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0);
                          this->fields.isEnableSelect = v34 >= this->fields.spendItemNum;
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
    sub_2213CDC(maskImg, v25);
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

  if ( (byte_597307C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventItemBoardComponent_OnCloseConfirmDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597307C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecided )
  {
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(Instance, v6);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventItemBoardComponent_o *v12; // x0
  EventItemBoardComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5973078 & 1) == 0 )
  {
    sub_2213A60(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    byte_5973078 = 1;
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
    v10 = sub_224B48C(p_onCloseDialogFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, EventItemBoardComponent_CallbackFunc_TypeInfo, v9);
  EventItemBoardComponent__remove_onCloseDialogFunc(v12, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventItemBoardComponent_o *v12; // x0
  ItemEntity_o *v13; // x1
  EventItemBoardComponent_CallbackFunc_o *v14; // x2
  EventItemSelectDlgComponent_o *v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_5973079 & 1) == 0 )
  {
    sub_2213A60(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    byte_5973079 = 1;
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
    v10 = sub_224B48C(p_onCloseDialogFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, EventItemBoardComponent_CallbackFunc_TypeInfo, v9);
  EventItemBoardComponent__SetItemBoardInfo(v12, v13, v14, v15, v16);
}


void EventItemBoardComponent_CallbackFunc___ctor(
        EventItemBoardComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_20109F4;
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
        v14 = sub_2213B30(method);
        v15 = sub_22140B4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_2010B0C;
          else
            v13 = sub_2010AC0;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_2010A34;
        }
        else
        {
          v13 = sub_2010A08;
        }
      }
      else
      {
        v13 = sub_20109D4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_201097C;
}


System_IAsyncResult_o *EventItemBoardComponent_CallbackFunc__BeginInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = spendNum;
  v10[0] = selectedItem;
  v10[2] = 0;
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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