void __fastcall EventItemBoardComponent___ctor(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemBoardComponent__OnClickItem(EventItemBoardComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *dialog; // x20
  System_String_o *v25; // x0
  __int64 v26; // x1
  struct EventItemSelectDlgComponent_o *v27; // x8
  System_String_o *v28; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  _QWORD *v31; // x8
  System_Reflection_MethodBase_o *v32; // x0
  struct ItemEntity_o *itemEntity; // x8
  System_String_o *v34; // x23
  Il2CppObject *Instance; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  CommonConfirmDialog_ClickDelegate_o *v39; // x25

  if ( (byte_4B181B3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventItemBoardComponent_OnClickItem__, v6, v7);
    sub_1BCA7E0(&Method_EventItemBoardComponent_SpendItemDlg__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_15014/*"USE_ITEM_CONFIRM_MSG"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B181B3 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v25 = (System_String_o *)UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL);
    if ( ((unsigned __int8)v25 & 1) != 0 )
    {
      v27 = this->fields.dialog;
      if ( !v27 )
        goto LABEL_19;
      if ( v27->fields.isClosed )
        return;
      v28 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      v31 = Method_EventItemBoardComponent_OnClickItem__;
      if ( (*((_BYTE *)Method_EventItemBoardComponent_OnClickItem__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1BCA7F8(Method_EventItemBoardComponent_OnClickItem__);
      v32 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15014/*"USE_ITEM_CONFIRM_MSG"*/, 0LL);
      itemEntity = this->fields.itemEntity;
      if ( !itemEntity )
        goto LABEL_19;
      v34 = System_String__Format(v25, (Il2CppObject *)itemEntity->fields.name, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38);
      CommonConfirmDialog_ClickDelegate___ctor(
        v39,
        (Il2CppObject *)this,
        Method_EventItemBoardComponent_SpendItemDlg__,
        0LL);
      v25 = (System_String_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
      if ( !Instance )
LABEL_19:
        sub_1BCAA3C(v25, v26);
      CommonUI__OpenConfirmDecideDlg(
        (CommonUI_o *)Instance,
        v28,
        v34,
        v29,
        v30,
        v39,
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
    sub_1BCA784((PartyOrganizationUtility_o *)p_onCloseDialogFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1BCAA3C(0LL, method);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct ItemEntity_o **p_itemEntity; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x1
  int64_t maskImg; // x0
  struct ItemEntity_o *v39; // x8
  UILabel_o *itemDetailLb; // x21
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x22
  UserItemEntity_o *Entity; // x0
  int32_t v44; // w22
  UILabel_o *currentNumLb; // x20
  Il2CppObject *v46; // x0
  UILabel_o *spendNumLb; // x20
  int32_t v48; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B181B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, itemEntity, onConfirmSelectItemFunc);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19392/*"event_item_board_description"*/, v22, v23);
    byte_4B181B2 = 1;
  }
  this->fields.isEnableSelect = 0;
  this->fields.itemEntity = itemEntity;
  p_itemEntity = &this->fields.itemEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemEntity,
    (int64_t)itemEntity,
    (int64_t)onConfirmSelectItemFunc,
    (int32_t)dialog,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.dialog = dialog;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dialog, v25, v26, v27, v28, v29, v30);
  this->fields.onCloseDialogFunc = onConfirmSelectItemFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onCloseDialogFunc,
    (int64_t)onConfirmSelectItemFunc,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_31;
  maskImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
  if ( !maskImg )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
  maskImg = (int64_t)this->fields.cmdSpellBg;
  if ( !maskImg )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  if ( *p_itemEntity )
  {
    maskImg = (int64_t)this->fields.itemIconInfo;
    if ( maskImg )
    {
      ItemIconComponent__SetItemImage_38852864(
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
          v39 = this->fields.itemEntity;
          if ( v39 )
          {
            maskImg = (int64_t)this->fields.itemNameLb;
            if ( maskImg )
            {
              UILabel__set_text((UILabel_o *)maskImg, v39->fields.name, 0LL);
              maskImg = (int64_t)this->fields.itemEntity;
              if ( maskImg )
              {
                itemDetailLb = this->fields.itemDetailLb;
                maskImg = (int64_t)ItemEntity__getScript_40108400(
                                     (ItemEntity_o *)maskImg,
                                     (System_String_o *)StringLiteral_19392/*"event_item_board_description"*/,
                                     *(System_String_o **)(maskImg + 32),
                                     0LL);
                if ( itemDetailLb )
                {
                  UILabel__set_text(itemDetailLb, (System_String_o *)maskImg, 0LL);
                  this->fields.spendItemNum = 1;
                  maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( maskImg )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)maskImg,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
                    maskImg = NetworkManager__get_UserId(0LL);
                    if ( *p_itemEntity && MasterData_object )
                    {
                      Entity = UserItemMaster__GetEntity(
                                 (UserItemMaster_o *)MasterData_object,
                                 maskImg,
                                 (*p_itemEntity)->fields.id,
                                 0LL);
                      v44 = Entity ? Entity->fields.num : 0;
                      currentNumLb = this->fields.currentNumLb;
                      v48 = v44;
                      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
                      maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v46, 0LL);
                      if ( currentNumLb )
                      {
                        UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0LL);
                        spendNumLb = this->fields.spendNumLb;
                        maskImg = (int64_t)System_Int32__ToString((int)this + 124, 0LL);
                        if ( spendNumLb )
                        {
                          UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0LL);
                          this->fields.isEnableSelect = v44 >= this->fields.spendItemNum;
                          goto LABEL_30;
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
LABEL_31:
    sub_1BCAA3C(maskImg, v37);
  }
LABEL_30:
  EventItemBoardComponent__SetEnableSelectItem(this, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemBoardComponent__SpendItemDlg(
        EventItemBoardComponent_o *this,
        bool isDecided,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CommonUI_o *v13; // x21
  System_Action_o *v14; // x20

  if ( (byte_4B181B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecided, method);
    sub_1BCA7E0(&Method_EventItemBoardComponent_OnCloseConfirmDialog__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B181B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( isDecided )
  {
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_EventItemBoardComponent_OnCloseConfirmDialog__, 0LL);
    if ( v13 )
    {
      CommonUI__CloseConfirmDialog_30766896(v13, v14, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(Instance, v10);
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

  if ( (byte_4B181B0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemBoardComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B181B0 = 1;
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
    v9 = sub_1C05CD0(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B181B1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemBoardComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B181B1 = 1;
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
    v9 = sub_1C05CD0(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A0E998;
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
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0EAB4;
          else
            v13 = (Il2CppObject *)sub_1A0EA68;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0E9DC;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0E9AC;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0E974;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E91C;
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
  if ( (byte_4B181B5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, selectedItem, *(_QWORD *)&spendNum);
    byte_4B181B5 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall EventItemBoardComponent_CallbackFunc__EndInvoke(
        EventItemBoardComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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