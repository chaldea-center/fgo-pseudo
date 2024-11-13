void __fastcall PresentSelectableItemConfirmDlg___ctor(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14FC1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14FC1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__Close(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableItemConfirmDlg__Close_38177116(this, 0LL, v2);
}


void __fastcall PresentSelectableItemConfirmDlg__Close_38177116(
        PresentSelectableItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B14FBD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PresentSelectableItemConfirmDlg_EndClose__, v10, v11);
    byte_4B14FBD = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__EndClose(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PresentSelectableItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__EndOpen(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentSelectableItemConfirmDlg__Init(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemSelectEntity, 0LL, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickCancel(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B14FBF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PresentSelectableItemConfirmDlg_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, v6, v7);
    byte_4B14FBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_PresentSelectableItemConfirmDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentSelectableItemConfirmDlg_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PresentSelectableItemConfirmDlg_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__,
      0LL);
    PresentSelectableItemConfirmDlg__Close_38177116(this, v13, v14);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickDecide(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B14FBE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PresentSelectableItemConfirmDlg_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, v6, v7);
    byte_4B14FBE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_PresentSelectableItemConfirmDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentSelectableItemConfirmDlg_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_PresentSelectableItemConfirmDlg_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__,
      0LL);
    PresentSelectableItemConfirmDlg__Close_38177116(this, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg__Open(
        PresentSelectableItemConfirmDlg_o *this,
        ItemSelectEntity_o *entity,
        ItemEntity_o *itemEnt,
        int32_t itemHold,
        ItemEntity_o *ticketEnt,
        int32_t ticketsHave,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *callback,
        int32_t btnSpriteId,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  UILabel_o *TitleLabel; // x24
  UILabel_o *DetailLabel; // x24
  UILabel_o *priceNumLabel; // x24
  __int64 v41; // x1
  BalanceConfig_c *v42; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v44; // x21
  __int64 *v45; // x8
  const MethodInfo *v46; // x5
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x20

  if ( (byte_4B14FBC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, itemEnt);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_PresentSelectableItemConfirmDlg_EndOpen__, v19, v20);
    sub_1BCA7E0(&StringLiteral_10579/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10599/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10578/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10598/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v27, v28);
    byte_4B14FBC = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)itemEnt,
      itemHold,
      (System_String_o *)ticketEnt,
      *(BattleSetupInfo_o **)&ticketsHave,
      (FollowerInfo_o *)callback,
      *(PartyListViewItem_o **)&btnSpriteId);
    this->fields.itemSelectEntity = entity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.itemSelectEntity,
      (int64_t)entity,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10579/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_32;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0LL);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10578/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_32;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0LL);
    if ( !ticketEnt )
      goto LABEL_32;
    gameObject = (UnityEngine_GameObject_o *)this->fields.priceDataLabel;
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text((UILabel_o *)gameObject, ticketEnt->fields.name, 0LL);
    if ( !entity )
      goto LABEL_32;
    priceNumLabel = this->fields.priceNumLabel;
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)entity + 28, 0LL);
    if ( !priceNumLabel )
      goto LABEL_32;
    UILabel__set_text(priceNumLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ticketIcon;
    if ( !gameObject )
      goto LABEL_32;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, ticketEnt->fields.imageId, 0LL);
    v42 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v41);
      v42 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v42->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v44 = this->fields.DetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      v45 = &StringLiteral_10598/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42, v41);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( UserItemMax > itemHold )
      {
        v36 = 0LL;
LABEL_29:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v36,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
          if ( gameObject )
          {
            PresentSelectableItemComponent__setItemInfo(
              (PresentSelectableItemComponent_o *)gameObject,
              this->fields.itemSelectEntity,
              ticketsHave,
              0,
              0LL,
              v46);
            this->fields.state = 1;
            v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
            System_Action___ctor(v50, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
            return;
          }
        }
LABEL_32:
        sub_1BCAA3C(gameObject, v36);
      }
      v44 = this->fields.DetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      v45 = &StringLiteral_10599/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
    if ( !v44 )
      goto LABEL_32;
    UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
    v36 = 3LL;
    goto LABEL_29;
  }
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickCancel_b__26_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    0LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickDecide_b__25_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    1LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall PresentSelectableItemConfirmDlg__add_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableItemConfirmDlg_o *v11; // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B14FBA & 1) == 0 )
  {
    sub_1BCA7E0(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, value, method);
    byte_4B14FBA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  PresentSelectableItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableItemConfirmDlg__get_closeBtnObject(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B14FC0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14FC0 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__remove_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableItemConfirmDlg_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B14FBB & 1) == 0 )
  {
    sub_1BCA7E0(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, value, method);
    byte_4B14FBB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  PresentSelectableItemConfirmDlg__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C1F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C1B0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentSelectableItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B14FC2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B14FC2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}