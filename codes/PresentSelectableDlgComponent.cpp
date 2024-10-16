void __fastcall PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AB4B1B & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB4B1B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4AB4B15 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent_EndClose__, v3);
    byte_4AB4B15 = 1;
  }
  v4 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0LL);
  PresentSelectableDlgComponent__Close_37842916(this, v4, v5);
}


void __fastcall PresentSelectableDlgComponent__Close_37842916(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x20

  if ( (byte_4AB4B16 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__, v5);
    sub_1BAB41C(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo, v6);
    byte_4AB4B16 = 1;
  }
  v7 = sub_1BAB668(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BAB678(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  this->fields.isClosed = 1;
  v14 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall PresentSelectableDlgComponent__EndClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  PresentSelectableDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall PresentSelectableDlgComponent__EndOpen(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *scrView; // x8
  PresentSelectableDlgComponent_o *v3; // x19

  scrView = this->fields.scrView;
  this->fields.isClosed = 0;
  if ( !scrView
    || (v3 = this, (this = (PresentSelectableDlgComponent_o *)scrView->fields.verticalScrollBar) == 0LL)
    || (this = (PresentSelectableDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (PresentSelectableDlgComponent_o *)v3->fields.scrView) == 0LL) )
  {
    sub_1BAB678(this, method);
  }
  ((void (__fastcall *)(PresentSelectableDlgComponent_o *, __int64, void *))this->klass[1]._1.namespaze)(
    this,
    1LL,
    this->klass[1]._1.byval_arg.data);
}


void __fastcall PresentSelectableDlgComponent__Init(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OnClickClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4AB4B19 & 1) == 0 )
  {
    sub_1BAB41C(&Method_PresentSelectableDlgComponent_OnClickClose__, method);
    byte_4AB4B19 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_PresentSelectableDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentSelectableDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_PresentSelectableDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    PresentSelectableDlgComponent__Close(this, v5);
  }
}


void __fastcall PresentSelectableDlgComponent__Open(
        PresentSelectableDlgComponent_o *this,
        ItemEntity_o *ticketItem,
        int32_t ticketsHave,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  struct ItemEntity_o **p_ticketItm; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  UILabel_o *titleLabel; // x22
  UILabel_o *titleDetailLabel; // x22
  struct ItemEntity_o *ticketItm; // x8
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v22; // x22
  unsigned __int64 v23; // x27
  ItemSelectEntity_o *v24; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x25
  UnityEngine_Transform_o *v28; // x26
  const MethodInfo *v29; // x5
  struct UIScrollView_o *scrView; // x8
  System_Action_o *v31; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB4B14 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, ticketItem);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ItemSelectMaster___, v6);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___, v7);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v8);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent_EndOpen__, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BAB41C(&StringLiteral_10454/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, v11);
    sub_1BAB41C(&StringLiteral_10455/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, v12);
    byte_4AB4B14 = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.ticketItm, (int32_t)ticketItem, v16, v17);
  titleLabel = this->fields.titleLabel;
  this->fields.ticketsHave = ticketsHave;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10455/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10454/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0LL);
  ticketItm = this->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                             (System_String_o *)gameObject,
                                             (Il2CppObject *)ticketItm->fields.name,
                                             0LL);
  if ( !titleDetailLabel )
    goto LABEL_31;
  UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ItemSelectMaster___);
  if ( !*p_ticketItm )
    goto LABEL_31;
  if ( !gameObject )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)ItemSelectMaster__GetSelectables(
                                             (ItemSelectMaster_o *)gameObject,
                                             (*p_ticketItm)->fields.id,
                                             0LL);
  if ( !gameObject )
    goto LABEL_31;
  klass = gameObject[1].klass;
  v22 = gameObject;
  if ( (int)klass >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)klass )
        sub_1BAB680(gameObject, v14);
      gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v24 = (ItemSelectEntity_o *)*((_QWORD *)&v22[1].monitor + v23);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      v27 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      v28 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4AB0691 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v14);
        byte_4AB0691 = 1;
      }
      if ( !v28 )
        break;
      UnityEngine_Transform__set_localPosition(v28, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v27, 0LL);
      if ( !gameObject )
        break;
      v33.fields.z = 1.0;
      v33.fields.x = 0.95;
      v33.fields.y = 0.95;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v33, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v27,
                                                 (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !gameObject )
        break;
      PresentSelectableItemComponent__setItemInfo(
        (PresentSelectableItemComponent_o *)gameObject,
        v24,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v29);
      UnityEngine_GameObject__SetActive(v27, 1, 0LL);
      LODWORD(klass) = v22[1].klass;
      if ( (__int64)++v23 >= (int)klass )
        goto LABEL_25;
    }
LABEL_31:
    sub_1BAB678(gameObject, v14);
  }
LABEL_25:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_31;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrView;
  if ( !gameObject )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  scrView = this->fields.scrView;
  if ( !scrView )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)scrView->fields.verticalScrollBar;
  if ( !gameObject )
    goto LABEL_31;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v31 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OpenItemConfirmDlg(
        PresentSelectableDlgComponent_o *this,
        ItemSelectEntity_o *itemSelectEnt,
        ItemEntity_o *itmEnt,
        int32_t itemHold,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2

  if ( (byte_4AB4B17 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, itemSelectEnt);
    sub_1BAB41C(&TerminalPramsManager_TypeInfo, v9);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__, v10);
    sub_1BAB41C(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo, v11);
    byte_4AB4B17 = 1;
  }
  v12 = sub_1BAB668(PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BAB678(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = itemSelectEnt;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)itemSelectEnt, v17, v18);
  *(_QWORD *)(v12 + 32) = itmEnt;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)itmEnt, v19, v20);
  *(_DWORD *)(v12 + 40) = itemHold;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  v21 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0LL);
  PresentSelectableDlgComponent__Close_37842916(this, v21, v22);
}


bool __fastcall PresentSelectableDlgComponent__checkExpired(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *v2; // x19
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x21
  int64_t Time; // x20

  v2 = this;
  if ( (byte_4AB4B18 & 1) == 0 )
  {
    this = (PresentSelectableDlgComponent_o *)sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB4B18 = 1;
  }
  ticketItm = v2->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_10;
  endedAt = ticketItm->fields.endedAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( endedAt <= Time )
  {
    this = (PresentSelectableDlgComponent_o *)v2->fields.pBox;
    if ( this )
    {
      UserPresentListViewManager__DlgForExpiredPresent((UserPresentListViewManager_o *)this, method);
      return endedAt <= Time;
    }
LABEL_10:
    sub_1BAB678(this, method);
  }
  return endedAt <= Time;
}


void __fastcall PresentSelectableDlgComponent__clearInfoGrid(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0

  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    sub_1BAB678(0LL, method);
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  TransformHelper__DestroyChildren(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableDlgComponent__get_closeBtnObject(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4AB4B1A & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB4B1A = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_1BAB678(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


bool __fastcall PresentSelectableDlgComponent__isListTouchable(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  return !this->fields.isClosed;
}


void __fastcall PresentSelectableDlgComponent___c__DisplayClass17_0___ctor(
        PresentSelectableDlgComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent___c__DisplayClass17_0___Close_b__0(
        PresentSelectableDlgComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BAB678(0LL, method);
  PresentSelectableDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___ctor(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__0(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PresentSelectableDlgComponent_o *_4__this; // x0
  ItemEntity_o *v7; // x2
  const MethodInfo *v8; // x7
  struct PresentSelectableDlgComponent_o *v9; // x8
  struct ItemSelectEntity_o *itemSelectEnt; // x21
  int32_t ticketsHave; // w20
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x22
  PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x25
  ItemEntity_o *v14; // x24
  int32_t v15; // w23
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  int32_t v18; // w3
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x22
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  ItemEntity_o *ticketItm; // x25
  ItemEntity_o *itmEnt; // x23
  int32_t itemHold; // w24
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // [xsp+0h] [xbp-60h]

  if ( (byte_4AB4B1C & 1) == 0 )
  {
    sub_1BAB41C(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, v3);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__, v4);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__, v5);
    byte_4AB4B1C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, method);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v9 = this->fields.__4__this;
  if ( !v9 || (itemSelectEnt = this->fields.itemSelectEnt) == 0LL )
LABEL_17:
    sub_1BAB678(_4__this, method);
  ticketsHave = v9->fields.ticketsHave;
  if ( ticketsHave >= 2 * itemSelectEnt->fields.requireNum )
  {
    itemBulkConfirmDlg = v9->fields.itemBulkConfirmDlg;
    _9__1 = this->fields.__9__1;
    ticketItm = v9->fields.ticketItm;
    itmEnt = this->fields.itmEnt;
    itemHold = this->fields.itemHold;
    if ( !_9__1 )
    {
      _9__1 = (PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_1BAB668(PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
      PresentSelectableBulkItemConfirmDlg_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__,
        v24);
      this->fields.__9__1 = _9__1;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v25, v26);
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
        v8);
      return;
    }
    goto LABEL_17;
  }
  itemConfirmDlg = v9->fields.itemConfirmDlg;
  _9__2 = this->fields.__9__2;
  v14 = v9->fields.ticketItm;
  v15 = this->fields.itemHold;
  if ( !_9__2 )
  {
    _9__2 = (PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_1BAB668(PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__,
      v16);
    this->fields.__9__2 = _9__2;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v17, v18);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(
    itemConfirmDlg,
    itemSelectEnt,
    v7,
    v15,
    v14,
    ticketsHave,
    _9__2,
    (int32_t)v8,
    v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__1(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PresentSelectableDlgComponent_o *_4__this; // x0
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21
  System_Action_o *v9; // x19

  if ( (byte_4AB4B1D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent_EndOpen__, v5);
    byte_4AB4B1D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(
                                                  _4__this,
                                                  *(const MethodInfo **)&result);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v8 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v8 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v8[6].klass;
      if ( _4__this )
      {
        UserPresentListViewManager__RequestItemSelect(
          (UserPresentListViewManager_o *)_4__this,
          this->fields.itemSelectEnt,
          result,
          v7);
        return;
      }
    }
LABEL_11:
    sub_1BAB678(_4__this, *(_QWORD *)&result);
  }
  v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v9, v8, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v8 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v8, v9, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PresentSelectableDlgComponent_o *_4__this; // x0
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21
  System_Action_o *v9; // x19

  if ( (byte_4AB4B1E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BAB41C(&Method_PresentSelectableDlgComponent_EndOpen__, v5);
    byte_4AB4B1E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(
                                                  _4__this,
                                                  *(const MethodInfo **)&result);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v8 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v8 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v8[6].klass;
      if ( _4__this )
      {
        UserPresentListViewManager__RequestItemSelect(
          (UserPresentListViewManager_o *)_4__this,
          this->fields.itemSelectEnt,
          result,
          v7);
        return;
      }
    }
LABEL_11:
    sub_1BAB678(_4__this, *(_QWORD *)&result);
  }
  v9 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v9, v8, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v8 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v8, v9, 0, 0LL);
}