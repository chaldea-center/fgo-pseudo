void PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CED34A & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CED34A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CED344 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent_EndClose__);
    byte_4CED344 = 1;
  }
  v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0);
  PresentSelectableDlgComponent__Close_40735468(this, v3, v4);
}


void PresentSelectableDlgComponent__Close_40735468(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4CED345 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__);
    sub_1C7BAE8(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
    byte_4CED345 = 1;
  }
  v5 = sub_1C7BD34(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  this->fields.isClosed = 1;
  v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0);
}


void PresentSelectableDlgComponent__EndClose(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  PresentSelectableDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void PresentSelectableDlgComponent__EndOpen(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *scrView; // x8
  PresentSelectableDlgComponent_o *v3; // x19

  scrView = this->fields.scrView;
  this->fields.isClosed = 0;
  if ( !scrView
    || (v3 = this, (this = (PresentSelectableDlgComponent_o *)scrView->fields.verticalScrollBar) == 0)
    || (this = (PresentSelectableDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (PresentSelectableDlgComponent_o *)v3->fields.scrView) == 0) )
  {
    sub_1C7BD40(this, method);
  }
  ((void (__fastcall *)(PresentSelectableDlgComponent_o *, __int64, const char *))this->klass[1]._1.name)(
    this,
    1,
    this->klass[1]._1.namespaze);
}


void PresentSelectableDlgComponent__Init(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentSelectableDlgComponent__OnClickClose(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CED348 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent_OnClickClose__);
    byte_4CED348 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_PresentSelectableDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentSelectableDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_PresentSelectableDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PresentSelectableDlgComponent__Close(this, v5);
  }
}


void PresentSelectableDlgComponent__Open(
        PresentSelectableDlgComponent_o *this,
        ItemEntity_o *ticketItem,
        int32_t ticketsHave,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct ItemEntity_o **p_ticketItm; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *titleDetailLabel; // x22
  struct ItemEntity_o *ticketItm; // x8
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x22
  unsigned __int64 v20; // x27
  ItemSelectEntity_o *v21; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Transform_o *v25; // x26
  const MethodInfo *v26; // x5
  struct UIScrollView_o *scrView; // x8
  System_Action_o *v28; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CED343 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemSelectMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent_EndOpen__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_10484/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/);
    sub_1C7BAE8(&StringLiteral_10485/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/);
    byte_4CED343 = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.ticketItm, (int32_t)ticketItem, v9, v10, v11, v12, v13, v14);
  titleLabel = this->fields.titleLabel;
  this->fields.ticketsHave = ticketsHave;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0);
  ticketItm = this->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                             (System_String_o *)gameObject,
                                             (Il2CppObject *)ticketItm->fields.name,
                                             0);
  if ( !titleDetailLabel )
    goto LABEL_31;
  UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemSelectMaster___);
  if ( !*p_ticketItm )
    goto LABEL_31;
  if ( !gameObject )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)ItemSelectMaster__GetSelectables(
                                             (ItemSelectMaster_o *)gameObject,
                                             (*p_ticketItm)->fields.id,
                                             0);
  if ( !gameObject )
    goto LABEL_31;
  klass = gameObject[1].klass;
  v19 = gameObject;
  if ( (int)klass >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)klass )
        sub_1C7BD48(gameObject);
      gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v21 = (ItemSelectEntity_o *)*((_QWORD *)&v19[1].monitor + v20);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0, 0);
      if ( !gameObject )
        break;
      v24 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4CE7E59 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      if ( !v25 )
        break;
      UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0);
      if ( !gameObject )
        break;
      v30.fields.z = 1.0;
      v30.fields.x = 0.95;
      v30.fields.y = 0.95;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v30, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v24,
                                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !gameObject )
        break;
      PresentSelectableItemComponent__setItemInfo(
        (PresentSelectableItemComponent_o *)gameObject,
        v21,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v26);
      UnityEngine_GameObject__SetActive(v24, 1, 0);
      LODWORD(klass) = v19[1].klass;
      if ( (__int64)++v20 >= (int)klass )
        goto LABEL_25;
    }
LABEL_31:
    sub_1C7BD40(gameObject, v7);
  }
LABEL_25:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_31;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrView;
  if ( !gameObject )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  scrView = this->fields.scrView;
  if ( !scrView )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)scrView->fields.verticalScrollBar;
  if ( !gameObject )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v28 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0, 0);
}


void PresentSelectableDlgComponent__OpenItemConfirmDlg(
        PresentSelectableDlgComponent_o *this,
        ItemSelectEntity_o *itemSelectEnt,
        ItemEntity_o *itmEnt,
        int32_t itemHold,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2

  if ( (byte_4CED346 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__);
    sub_1C7BAE8(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_4CED346 = 1;
  }
  v9 = sub_1C7BD34(PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C7BD40(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = itemSelectEnt;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)itemSelectEnt, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = itmEnt;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)itmEnt, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v9 + 40) = itemHold;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0);
  v30 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0);
  PresentSelectableDlgComponent__Close_40735468(this, v30, v31);
}


bool PresentSelectableDlgComponent__checkExpired(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *v2; // x19
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x21
  int64_t Time; // x20

  v2 = this;
  if ( (byte_4CED347 & 1) == 0 )
  {
    this = (PresentSelectableDlgComponent_o *)sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CED347 = 1;
  }
  ticketItm = v2->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_10;
  endedAt = ticketItm->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( endedAt <= Time )
  {
    this = (PresentSelectableDlgComponent_o *)v2->fields.pBox;
    if ( this )
    {
      UserPresentListViewManager__DlgForExpiredPresent((UserPresentListViewManager_o *)this, 0);
      return endedAt <= Time;
    }
LABEL_10:
    sub_1C7BD40(this, method);
  }
  return endedAt <= Time;
}


void PresentSelectableDlgComponent__clearInfoGrid(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0

  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    sub_1C7BD40(0, method);
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
}


UnityEngine_GameObject_o *PresentSelectableDlgComponent__get_closeBtnObject(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CED349 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED349 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


bool PresentSelectableDlgComponent__isListTouchable(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  return !this->fields.isClosed;
}


void PresentSelectableDlgComponent___c__DisplayClass17_0___ctor(
        PresentSelectableDlgComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PresentSelectableDlgComponent___c__DisplayClass17_0___Close_b__0(
        PresentSelectableDlgComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  PresentSelectableDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}


void PresentSelectableDlgComponent___c__DisplayClass21_0___ctor(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__0(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0
  ItemEntity_o *v4; // x2
  const MethodInfo *v5; // x7
  struct PresentSelectableDlgComponent_o *v6; // x8
  struct ItemSelectEntity_o *itemSelectEnt; // x21
  int32_t ticketsHave; // w20
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x22
  PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x25
  ItemEntity_o *v11; // x24
  int32_t v12; // w23
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x22
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  ItemEntity_o *ticketItm; // x25
  ItemEntity_o *itmEnt; // x23
  int32_t itemHold; // w24
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // [xsp+0h] [xbp-60h]

  if ( (byte_4CED34B & 1) == 0 )
  {
    sub_1C7BAE8(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__);
    byte_4CED34B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, method);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v6 = this->fields.__4__this;
  if ( !v6 || (itemSelectEnt = this->fields.itemSelectEnt) == 0 )
LABEL_17:
    sub_1C7BD40(_4__this, method);
  ticketsHave = v6->fields.ticketsHave;
  if ( ticketsHave >= 2 * itemSelectEnt->fields.requireNum )
  {
    itemBulkConfirmDlg = v6->fields.itemBulkConfirmDlg;
    _9__1 = this->fields.__9__1;
    ticketItm = v6->fields.ticketItm;
    itmEnt = this->fields.itmEnt;
    itemHold = this->fields.itemHold;
    if ( !_9__1 )
    {
      _9__1 = (PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_1C7BD34(PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
      PresentSelectableBulkItemConfirmDlg_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__,
        v25);
      this->fields.__9__1 = _9__1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v26, v27, v28, v29, v30, v31);
    }
    if ( itemBulkConfirmDlg )
    {
      PresentSelectableBulkItemConfirmDlg__Open(
        itemBulkConfirmDlg,
        itemSelectEnt,
        itmEnt,
        itemHold,
        ticketItm,
        ticketsHave,
        _9__1,
        v5);
      return;
    }
    goto LABEL_17;
  }
  itemConfirmDlg = v6->fields.itemConfirmDlg;
  _9__2 = this->fields.__9__2;
  v11 = v6->fields.ticketItm;
  v12 = this->fields.itemHold;
  if ( !_9__2 )
  {
    _9__2 = (PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_1C7BD34(PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__,
      v13);
    this->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(
    itemConfirmDlg,
    itemSelectEnt,
    v4,
    v12,
    v11,
    ticketsHave,
    _9__2,
    (int32_t)v5,
    v32);
}


// local variable allocation has failed, the output may be wrong!
void PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__1(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0
  Il2CppObject *v6; // x21
  System_Action_o *v7; // x19

  if ( (byte_4CED34C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent_EndOpen__);
    byte_4CED34C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(
                                                  _4__this,
                                                  *(const MethodInfo **)&result);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v6 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v6 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v6[6].monitor;
      if ( _4__this )
      {
        UserPresentListViewManager__RequestItemSelect(
          (UserPresentListViewManager_o *)_4__this,
          this->fields.itemSelectEnt,
          result,
          0);
        return;
      }
    }
LABEL_11:
    sub_1C7BD40(_4__this, *(_QWORD *)&result);
  }
  v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v7, v6, Method_PresentSelectableDlgComponent_EndOpen__, 0);
  if ( !v6 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v6, v7, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0
  Il2CppObject *v6; // x21
  System_Action_o *v7; // x19

  if ( (byte_4CED34D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PresentSelectableDlgComponent_EndOpen__);
    byte_4CED34D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(
                                                  _4__this,
                                                  *(const MethodInfo **)&result);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v6 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v6 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v6[6].monitor;
      if ( _4__this )
      {
        UserPresentListViewManager__RequestItemSelect(
          (UserPresentListViewManager_o *)_4__this,
          this->fields.itemSelectEnt,
          result,
          0);
        return;
      }
    }
LABEL_11:
    sub_1C7BD40(_4__this, *(_QWORD *)&result);
  }
  v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v7, v6, Method_PresentSelectableDlgComponent_EndOpen__, 0);
  if ( !v6 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v6, v7, 0, 0, 0);
}