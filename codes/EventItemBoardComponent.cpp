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
  _QWORD *v20; // x8
  System_Reflection_MethodBase_o *v21; // x0
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *v23; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v25; // x25

  if ( (byte_49BCF6D & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B4CF90(&Method_EventItemBoardComponent_OnClickItem__, v4);
    sub_1B4CF90(&Method_EventItemBoardComponent_SpendItemDlg__, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&StringLiteral_14560/*"USE_ITEM_CONFIRM_MSG"*/, v9);
    sub_1B4CF90(&StringLiteral_3658/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_1B4CF90(&StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1B4CF90(&StringLiteral_1/*""*/, v12);
    byte_49BCF6D = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = (System_String_o *)UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
    if ( ((unsigned __int8)v14 & 1) != 0 )
    {
      v16 = this->fields.dialog;
      if ( !v16 )
        goto LABEL_19;
      if ( v16->fields.isClosed )
        return;
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      v20 = Method_EventItemBoardComponent_OnClickItem__;
      if ( (*((_BYTE *)Method_EventItemBoardComponent_OnClickItem__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B4CFA8(Method_EventItemBoardComponent_OnClickItem__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14560/*"USE_ITEM_CONFIRM_MSG"*/, 0LL);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_19;
      v23 = System_String__Format(v14, (Il2CppObject *)itemEntity->fields.name, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v25,
        (Il2CppObject *)this,
        Method_EventItemBoardComponent_SpendItemDlg__,
        0LL);
      v14 = (System_String_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !Instance )
LABEL_19:
        sub_1B4D1EC(v14, v15);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)Instance,
        v17,
        v23,
        v18,
        v19,
        v25,
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
        0LL);
    }
  }
}


void __fastcall EventItemBoardComponent__OnCloseConfirmDialog(
        EventItemBoardComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x0
  struct EventItemBoardComponent_CallbackFunc_o *v6; // x20
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1

  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = onCloseDialogFunc;
  if ( onCloseDialogFunc )
  {
    this->fields.onCloseDialogFunc = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)p_onCloseDialogFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct ItemEntity_o *, _QWORD, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      this->fields.itemEntity,
      (unsigned int)this->fields.spendItemNum,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall EventItemBoardComponent__SetEnableSelectItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1B4D1EC(0LL, method);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct ItemEntity_o **p_itemEntity; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  void *maskImg; // x0
  struct ItemEntity_o *v22; // x8
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *MasterData_object; // x22
  UserItemEntity_o *Entity; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w22
  UILabel_o *currentNumLb; // x20
  Il2CppObject *v31; // x0
  UILabel_o *spendNumLb; // x20
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49BCF6C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_1B4CF90(&int_TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&StringLiteral_24683/*"{0:N0}"*/, v12);
    sub_1B4CF90(&StringLiteral_867/*"-"*/, v13);
    sub_1B4CF90(&StringLiteral_18887/*"event_item_board_description"*/, v14);
    byte_49BCF6C = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.itemEntity,
    (int32_t)itemEntity,
    (int32_t)onConfirmSelectItemFunc,
    (const MethodInfo *)dialog);
  this->fields.dialog = dialog;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dialog, v16, v17);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onCloseDialogFunc, (int32_t)onConfirmSelectItemFunc, v18, v19);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_867/*"-"*/, 0LL);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_867/*"-"*/, 0LL);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_867/*"-"*/, 0LL);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_867/*"-"*/, 0LL);
  maskImg = this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_35;
  maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
  maskImg = this->fields.cmdSpellBg;
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  if ( *p_itemEntity )
  {
    maskImg = this->fields.itemIconInfo;
    if ( maskImg )
    {
      ItemIconComponent__SetItemImage_38680064(
        (ItemIconComponent_o *)maskImg,
        (*p_itemEntity)->fields.imageId,
        (*p_itemEntity)->fields.bgImageId,
        (*p_itemEntity)->fields.type,
        0,
        1,
        0LL);
      maskImg = this->fields.itemIconInfo;
      if ( maskImg )
      {
        maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
        if ( maskImg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
          v22 = this->fields.itemEntity;
          if ( v22 )
          {
            maskImg = this->fields.itemNameLb;
            if ( maskImg )
            {
              UILabel__set_text((UILabel_o *)maskImg, v22->fields.name, 0LL);
              maskImg = this->fields.itemEntity;
              if ( maskImg )
              {
                itemDetailLb = this->fields.itemDetailLb;
                maskImg = ItemEntity__getScript_39953804(
                            (ItemEntity_o *)maskImg,
                            (System_String_o *)StringLiteral_18887/*"event_item_board_description"*/,
                            *((System_String_o **)maskImg + 4),
                            0LL);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)maskImg, 0LL);
                  this->fields.spendItemNum = 1;
                  maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( maskImg )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)maskImg,
                                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    if ( !byte_49B57A5 )
                    {
                      sub_1B4CF90(&NetworkManager_TypeInfo, v20);
                      byte_49B57A5 = 1;
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
                                 0LL);
                      v29 = Entity ? Entity->fields.num : 0;
                      currentNumLb = this->fields.currentNumLb;
                      v33 = v29;
                      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v26, v27, v28);
                      maskImg = System_String__Format((System_String_o *)StringLiteral_24683/*"{0:N0}"*/, v31, 0LL);
                      if ( currentNumLb )
                      {
                        UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0LL);
                        spendNumLb = this->fields.spendNumLb;
                        maskImg = System_Int32__ToString((int)this + 124, 0LL);
                        if ( spendNumLb )
                        {
                          UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0LL);
                          this->fields.isEnableSelect = v29 >= this->fields.spendItemNum;
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
    sub_1B4D1EC(maskImg, v20);
  }
LABEL_34:
  EventItemBoardComponent__SetEnableSelectItem(this, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent__SpendItemDlg(
        EventItemBoardComponent_o *this,
        bool isDecided,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_49BCF6E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecided);
    sub_1B4CF90(&Method_EventItemBoardComponent_OnCloseConfirmDialog__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49BCF6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecided )
  {
    v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30248724(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_1B4D1EC(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
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

  if ( (byte_49BCF6A & 1) == 0 )
  {
    sub_1B4CF90(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_49BCF6A = 1;
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
    v9 = sub_1B8724C(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
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

  if ( (byte_49BCF6B & 1) == 0 )
  {
    sub_1B4CF90(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_49BCF6B = 1;
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
    v9 = sub_1B8724C(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B4D4AC(v8);
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
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = (Il2CppObject *)sub_199E0A4;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1B4D048(v6);
        v11 = sub_1B4D504(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_199E1C0;
          else
            v9 = (Il2CppObject *)sub_199E174;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_199E0E8;
        }
        else
        {
          v9 = (Il2CppObject *)sub_199E0B8;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_199E080;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199E028;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventItemBoardComponent_CallbackFunc__BeginInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = spendNum;
  if ( (byte_49BCF6F & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, selectedItem);
    byte_49BCF6F = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&spendNum, callback, object);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v11, callback, object);
}


void __fastcall EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall EventItemBoardComponent_CallbackFunc__Invoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ItemEntity_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    selectedItem,
    spendNum,
    *(_QWORD *)&this->fields.extra_arg);
}