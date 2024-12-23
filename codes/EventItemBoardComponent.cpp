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

  if ( (byte_4B68BE7 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_EventItemBoardComponent_OnClickItem__, v4);
    sub_1BE4ACC(&Method_EventItemBoardComponent_SpendItemDlg__, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BE4ACC(&StringLiteral_15052/*"USE_ITEM_CONFIRM_MSG"*/, v9);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v10);
    sub_1BE4ACC(&StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    byte_4B68BE7 = 1;
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
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      v20 = Method_EventItemBoardComponent_OnClickItem__;
      if ( (*((_BYTE *)Method_EventItemBoardComponent_OnClickItem__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1BE4AE4(Method_EventItemBoardComponent_OnClickItem__);
      v21 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15052/*"USE_ITEM_CONFIRM_MSG"*/, 0LL);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_19;
      v23 = System_String__Format(v14, (Il2CppObject *)itemEntity->fields.name, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
        sub_1BE4D28(v14, v15);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventItemBoardComponent_CallbackFunc_o **p_onCloseDialogFunc; // x0
  struct EventItemBoardComponent_CallbackFunc_o *v10; // x20
  struct EventItemBoardComponent_CallbackFunc_o *onCloseDialogFunc; // t1

  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v10 = onCloseDialogFunc;
  if ( onCloseDialogFunc )
  {
    this->fields.onCloseDialogFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_onCloseDialogFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct ItemEntity_o *, _QWORD, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      this->fields.itemEntity,
      (unsigned int)this->fields.spendItemNum,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall EventItemBoardComponent__SetEnableSelectItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1BE4D28(0LL, method);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct ItemEntity_o **p_itemEntity; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x1
  void *maskImg; // x0
  struct ItemEntity_o *v33; // x8
  UILabel_o *itemDetailLb; // x21
  Il2CppObject *MasterData_object; // x22
  UserItemEntity_o *Entity; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w22
  UILabel_o *currentNumLb; // x20
  Il2CppObject *v42; // x0
  UILabel_o *spendNumLb; // x20
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B68BE6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity);
    sub_1BE4ACC(&int_TypeInfo, v12);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&StringLiteral_25315/*"{0:N0}"*/, v15);
    sub_1BE4ACC(&StringLiteral_915/*"-"*/, v16);
    sub_1BE4ACC(&StringLiteral_19450/*"event_item_board_description"*/, v17);
    byte_4B68BE6 = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.itemEntity,
    (int64_t)itemEntity,
    (int64_t)onConfirmSelectItemFunc,
    (int32_t)dialog,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.dialog = dialog;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dialog, v19, v20, v21, v22, v23, v24);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onCloseDialogFunc,
    (int64_t)onConfirmSelectItemFunc,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
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
      ItemIconComponent__SetItemImage_39045840(
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
          v33 = this->fields.itemEntity;
          if ( v33 )
          {
            maskImg = this->fields.itemNameLb;
            if ( maskImg )
            {
              UILabel__set_text((UILabel_o *)maskImg, v33->fields.name, 0LL);
              maskImg = this->fields.itemEntity;
              if ( maskImg )
              {
                itemDetailLb = this->fields.itemDetailLb;
                maskImg = ItemEntity__getScript_40320080(
                            (ItemEntity_o *)maskImg,
                            (System_String_o *)StringLiteral_19450/*"event_item_board_description"*/,
                            *((System_String_o **)maskImg + 4),
                            0LL);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)maskImg, 0LL);
                  this->fields.spendItemNum = 1;
                  maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( maskImg )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)maskImg,
                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    if ( !byte_4B61717 )
                    {
                      sub_1BE4ACC(&NetworkManager_TypeInfo, v31);
                      byte_4B61717 = 1;
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
                      v40 = Entity ? Entity->fields.num : 0;
                      currentNumLb = this->fields.currentNumLb;
                      v44 = v40;
                      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v37, v38, v39);
                      maskImg = System_String__Format((System_String_o *)StringLiteral_25315/*"{0:N0}"*/, v42, 0LL);
                      if ( currentNumLb )
                      {
                        UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0LL);
                        spendNumLb = this->fields.spendNumLb;
                        maskImg = System_Int32__ToString((int)this + 124, 0LL);
                        if ( spendNumLb )
                        {
                          UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0LL);
                          this->fields.isEnableSelect = v40 >= this->fields.spendItemNum;
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
    sub_1BE4D28(maskImg, v31);
  }
LABEL_34:
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_4B68BE8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecided);
    sub_1BE4ACC(&Method_EventItemBoardComponent_OnCloseConfirmDialog__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B68BE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecided )
  {
    v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30874304(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_1BE4D28(Instance, v8);
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

  if ( (byte_4B68BE4 & 1) == 0 )
  {
    sub_1BE4ACC(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_4B68BE4 = 1;
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
    v9 = sub_1C1FFBC(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
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

  if ( (byte_4B68BE5 & 1) == 0 )
  {
    sub_1BE4ACC(&EventItemBoardComponent_CallbackFunc_TypeInfo, value);
    byte_4B68BE5 = 1;
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
    v9 = sub_1C1FFBC(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  EventItemBoardComponent__SetItemBoardInfo(v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent_CallbackFunc___ctor(
        EventItemBoardComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A28770;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BE4B84(v10);
        v15 = sub_1BE5040(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A2888C;
          else
            v13 = (Il2CppObject *)sub_1A28840;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A287B4;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A28784;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A2874C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A286F4;
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
  if ( (byte_4B68BE9 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, selectedItem);
    byte_4B68BE9 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&spendNum, callback, object);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v11, callback, object);
}


void __fastcall EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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