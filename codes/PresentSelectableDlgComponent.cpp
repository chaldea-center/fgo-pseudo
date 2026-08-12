void PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F45E & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596F45E = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_596F458 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent_EndClose__);
    byte_596F458 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0);
  PresentSelectableDlgComponent__Close_47129880(this, v3, v4);
}


void PresentSelectableDlgComponent__Close_47129880(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_596F459 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__);
    sub_2213A60(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
    byte_596F459 = 1;
  }
  v5 = sub_2213CCC(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.isClosed = 1;
  v21 = (System_Action_o *)sub_2213CCC(v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
}


void PresentSelectableDlgComponent__EndClose(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  PresentSelectableDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentSelectableDlgComponent__OnClickClose(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596F45C & 1) == 0 )
  {
    sub_2213A60(&Method_PresentSelectableDlgComponent_OnClickClose__);
    byte_596F45C = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_PresentSelectableDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentSelectableDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PresentSelectableDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v8; // x1
  struct ItemEntity_o **p_ticketItm; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  LocalizationManager_c *v18; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *titleDetailLabel; // x22
  struct ItemEntity_o *ticketItm; // x8
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x22
  unsigned __int64 v24; // x27
  ItemSelectEntity_o *v25; // x24
  UnityEngine_GameObject_o *itemListObj; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v28; // x25
  UnityEngine_Transform_o *v29; // x26
  const MethodInfo *v30; // x5
  struct UIScrollView_o *scrView; // x8
  System_Action_o *v32; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F457 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemSelectMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent_EndOpen__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10881/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/);
    sub_2213A60(&StringLiteral_10882/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/);
    byte_596F457 = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ticketItm,
    (int32_t)ticketItem,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  this->fields.ticketsHave = ticketsHave;
  if ( !*(&v18->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10882/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10881/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_31;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemSelectMaster___);
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
  v23 = gameObject;
  if ( (int)klass >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)klass )
        sub_2213CE4(gameObject);
      gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v25 = (ItemSelectEntity_o *)*((_QWORD *)&v23[1].monitor + v24);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0, 0);
      if ( !gameObject )
        break;
      v28 = gameObject;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      v29 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE0 )
      {
        gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v29 )
        break;
      UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0);
      if ( !gameObject )
        break;
      v33.fields.x = 0.95;
      v33.fields.y = 0.95;
      v33.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v33, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 v28,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !gameObject )
        break;
      PresentSelectableItemComponent__setItemInfo(
        (PresentSelectableItemComponent_o *)gameObject,
        v25,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v30);
      UnityEngine_GameObject__SetActive(v28, 1, 0);
      LODWORD(klass) = v23[1].klass;
      if ( (__int64)++v24 >= (int)klass )
        goto LABEL_25;
    }
LABEL_31:
    sub_2213CDC(gameObject, v8);
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
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  TerminalPramsManager_c *v32; // x0
  System_Action_o *v33; // x20
  const MethodInfo *v34; // x2

  if ( (byte_596F45A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__);
    sub_2213A60(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_596F45A = 1;
  }
  v9 = sub_2213CCC(PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = itemSelectEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)itemSelectEnt, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = itmEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)itmEnt, v24, v25, v26, v27, v28, v29);
  v32 = TerminalPramsManager_TypeInfo;
  *(_DWORD *)(v9 + 40) = itemHold;
  if ( !*(&v32->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v32, v30, v31);
  TerminalPramsManager__PlaySystemSE(0, 0);
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v9,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0);
  PresentSelectableDlgComponent__Close_47129880(this, v33, v34);
}


bool PresentSelectableDlgComponent__checkExpired(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PresentSelectableDlgComponent_o *v3; // x19
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x21
  int64_t Time; // x20

  v3 = this;
  if ( (byte_596F45B & 1) == 0 )
  {
    this = (PresentSelectableDlgComponent_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F45B = 1;
  }
  ticketItm = v3->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_10;
  endedAt = ticketItm->fields.endedAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  if ( endedAt <= Time )
  {
    this = (PresentSelectableDlgComponent_o *)v3->fields.pBox;
    if ( this )
    {
      UserPresentListViewManager__DlgForExpiredPresent((UserPresentListViewManager_o *)this, 0);
      return endedAt <= Time;
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
  return endedAt <= Time;
}


void PresentSelectableDlgComponent__clearInfoGrid(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0

  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    sub_2213CDC(0, method);
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0);
  TransformHelper__DestroyChildren(transform, 0, 0);
}


UnityEngine_GameObject_o *PresentSelectableDlgComponent__get_closeBtnObject(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596F45D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F45D = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
    sub_2213CDC(0, method);
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
  int32_t itemHold; // w22
  ItemEntity_o *ticketItm; // x23
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x24
  PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x25
  const MethodInfo *v13; // x3
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ItemEntity_o *itmEnt; // x24
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x25
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  const MethodInfo *v23; // x3
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // [xsp+0h] [xbp-60h]

  if ( (byte_596F45F & 1) == 0 )
  {
    sub_2213A60(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    sub_2213A60(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__);
    sub_2213A60(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__);
    byte_596F45F = 1;
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
    sub_2213CDC(_4__this, method);
  ticketsHave = v6->fields.ticketsHave;
  itemHold = this->fields.itemHold;
  ticketItm = v6->fields.ticketItm;
  if ( ticketsHave >= 2 * itemSelectEnt->fields.requireNum )
  {
    itmEnt = this->fields.itmEnt;
    itemBulkConfirmDlg = v6->fields.itemBulkConfirmDlg;
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_2213CCC(PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
      PresentSelectableBulkItemConfirmDlg_CallbackFunc___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__,
        v23);
      this->fields.__9__1 = _9__1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__1,
        (int32_t)_9__1,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
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
  if ( !_9__2 )
  {
    _9__2 = (PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_2213CCC(PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__,
      v13);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(
    itemConfirmDlg,
    itemSelectEnt,
    v4,
    itemHold,
    ticketItm,
    ticketsHave,
    _9__2,
    (int32_t)v5,
    v30);
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

  if ( (byte_596F460 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent_EndOpen__);
    byte_596F460 = 1;
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
    sub_2213CDC(_4__this, *(_QWORD *)&result);
  }
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_596F461 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PresentSelectableDlgComponent_EndOpen__);
    byte_596F461 = 1;
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
    sub_2213CDC(_4__this, *(_QWORD *)&result);
  }
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, v6, Method_PresentSelectableDlgComponent_EndOpen__, 0);
  if ( !v6 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v6, v7, 0, 0, 0);
}