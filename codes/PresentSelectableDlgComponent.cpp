void __fastcall PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4351F02 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4351F02 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4351EFC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent_EndClose__);
    byte_4351EFC = 1;
  }
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0LL);
  PresentSelectableDlgComponent__Close_25466212(this, v3, v4);
}


void __fastcall PresentSelectableDlgComponent__Close_25466212(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4351EFD & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__);
    sub_B70694(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
    byte_4351EFD = 1;
  }
  v5 = sub_B70764(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
  PresentSelectableDlgComponent___c__DisplayClass17_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass17_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  this->fields.isClosed = 1;
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
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
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall PresentSelectableDlgComponent__EndOpen(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *scrView; // x8
  PresentSelectableDlgComponent_o *v3; // x19

  scrView = this->fields.scrView;
  this->fields.isClosed = 0;
  if ( !scrView
    || (v3 = this, (this = *(PresentSelectableDlgComponent_o **)&scrView->fields.showScrollBars) == 0LL)
    || (this = (PresentSelectableDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (PresentSelectableDlgComponent_o *)v3->fields.scrView) == 0LL) )
  {
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OnClickClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4351F00 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351F00 = 1;
  }
  if ( !this->fields.isClosed )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PresentSelectableDlgComponent__Close(this, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent__Open(
        PresentSelectableDlgComponent_o *this,
        ItemEntity_o *ticketItem,
        int32_t ticketsHave,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  struct ItemEntity_o **p_ticketItm; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *titleDetailLabel; // x22
  struct ItemEntity_o *ticketItm; // x8
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v20; // x22
  unsigned __int64 v21; // x26
  ItemSelectEntity_o *v22; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v25; // x24
  UnityEngine_Transform_o *v26; // x25
  int v27; // s0
  const MethodInfo *v30; // x5
  struct UIScrollView_o *scrView; // x8
  System_Action_o *v32; // x20
  __int64 v33; // x0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351EFB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemSelectMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent_EndOpen__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_10642/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/);
    sub_B70694(&StringLiteral_10643/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/);
    byte_4351EFB = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.ticketItm,
    (System_Int32_array **)ticketItem,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.ticketsHave = ticketsHave;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10643/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10642/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0LL);
  ticketItm = this->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                             (System_String_o *)gameObject,
                                             (Il2CppObject *)ticketItm->fields.name,
                                             0LL);
  if ( !titleDetailLabel )
    goto LABEL_30;
  UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemSelectMaster___);
  if ( !*p_ticketItm )
    goto LABEL_30;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)ItemSelectMaster__GetSelectables(
                                             (ItemSelectMaster_o *)gameObject,
                                             (*p_ticketItm)->fields.id,
                                             0LL);
  if ( !gameObject )
    goto LABEL_30;
  klass = gameObject[1].klass;
  v20 = gameObject;
  if ( (int)klass >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)klass )
      {
        v33 = sub_B70798(gameObject);
        sub_B70738(v33, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v22 = (ItemSelectEntity_o *)*((_QWORD *)&v20[1].monitor + v21);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      v25 = gameObject;
      v26 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v26 )
        break;
      UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !gameObject )
        break;
      v34.fields.x = 0.95;
      v34.fields.y = 0.95;
      v34.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v34, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v25,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !gameObject )
        break;
      PresentSelectableItemComponent__setItemInfo(
        (PresentSelectableItemComponent_o *)gameObject,
        v22,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v30);
      UnityEngine_GameObject__SetActive(v25, 1, 0LL);
      LODWORD(klass) = v20[1].klass;
      if ( (__int64)++v21 >= (int)klass )
        goto LABEL_24;
    }
LABEL_30:
    sub_B7076C(gameObject, v8);
  }
LABEL_24:
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
  if ( !gameObject )
    goto LABEL_30;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrView;
  if ( !gameObject )
    goto LABEL_30;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  scrView = this->fields.scrView;
  if ( !scrView )
    goto LABEL_30;
  gameObject = *(UnityEngine_GameObject_o **)&scrView->fields.showScrollBars;
  if ( !gameObject )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v32 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OpenItemConfirmDlg(
        PresentSelectableDlgComponent_o *this,
        ItemSelectEntity_o *itemSelectEnt,
        ItemEntity_o *itmEnt,
        int32_t itemHold,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2

  if ( (byte_4351EFE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__);
    sub_B70694(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
    byte_4351EFE = 1;
  }
  v9 = sub_B70764(PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
  PresentSelectableDlgComponent___c__DisplayClass21_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass21_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = itemSelectEnt;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)itemSelectEnt,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v9 + 32) = itmEnt;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)itmEnt, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v9 + 40) = itemHold;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0LL);
  PresentSelectableDlgComponent__Close_25466212(this, v30, v31);
}


bool __fastcall PresentSelectableDlgComponent__checkExpired(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *v2; // x19
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x20

  v2 = this;
  if ( (byte_4351EFF & 1) == 0 )
  {
    this = (PresentSelectableDlgComponent_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_4351EFF = 1;
  }
  ticketItm = v2->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_11;
  endedAt = ticketItm->fields.endedAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( endedAt > NetworkManager__getTime(0LL) )
    return 0;
  this = (PresentSelectableDlgComponent_o *)v2->fields.pBox;
  if ( !this )
LABEL_11:
    sub_B7076C(this, method);
  UserPresentListViewManager__DlgForExpiredPresent((UserPresentListViewManager_o *)this, 0LL);
  return 1;
}


void __fastcall PresentSelectableDlgComponent__clearInfoGrid(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0

  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    sub_B7076C(0LL, method);
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

  if ( (byte_4351F01 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F01 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_B7076C(0LL, v4);
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
    sub_B7076C(0LL, method);
  PresentSelectableDlgComponent__EndClose(_4__this, 0LL);
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
  PresentSelectableDlgComponent_o *_4__this; // x0
  struct PresentSelectableDlgComponent_o *v4; // x8
  struct ItemSelectEntity_o *itemSelectEnt; // x21
  int32_t ticketsHave; // w20
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x22
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x26
  ItemEntity_o *v9; // x25
  ItemEntity_o *v10; // x23
  int32_t v11; // w24
  __int64 v12; // x9
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x22
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  ItemEntity_o *ticketItm; // x25
  ItemEntity_o *itmEnt; // x23
  int32_t itemHold; // w24
  __int64 v30; // x9
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_4351AB2 & 1) == 0 )
  {
    sub_B70694(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    sub_B70694(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__);
    sub_B70694(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__);
    byte_4351AB2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v4 = this->fields.__4__this;
  if ( !v4 || (itemSelectEnt = this->fields.itemSelectEnt) == 0LL )
LABEL_17:
    sub_B7076C(_4__this, method);
  ticketsHave = v4->fields.ticketsHave;
  if ( ticketsHave >= 2 * itemSelectEnt->fields.requireNum )
  {
    itemBulkConfirmDlg = v4->fields.itemBulkConfirmDlg;
    _9__1 = this->fields.__9__1;
    ticketItm = v4->fields.ticketItm;
    itmEnt = this->fields.itmEnt;
    itemHold = this->fields.itemHold;
    if ( !_9__1 )
    {
      _9__1 = (struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_B70764(PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
      v30 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.method_ptr = v30;
      *(_QWORD *)&_9__1->fields.method = this;
      sub_B70630(
        (BattleServantConfConponent_o *)&_9__1->fields.method,
        (System_Int32_array **)this,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      this->fields.__9__1 = _9__1;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
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
        0LL);
      return;
    }
    goto LABEL_17;
  }
  itemConfirmDlg = v4->fields.itemConfirmDlg;
  _9__2 = this->fields.__9__2;
  v9 = v4->fields.ticketItm;
  v10 = this->fields.itmEnt;
  v11 = this->fields.itemHold;
  if ( !_9__2 )
  {
    _9__2 = (struct PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_B70764(PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    v12 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.method_ptr = v12;
    *(_QWORD *)&_9__2->fields.method = this;
    sub_B70630(
      (BattleServantConfConponent_o *)&_9__2->fields.method,
      (System_Int32_array **)this,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.__9__2 = _9__2;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(itemConfirmDlg, itemSelectEnt, v10, v11, v9, ticketsHave, _9__2, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__1(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0
  Il2CppObject *v6; // x21
  System_Action_o *v7; // x19

  if ( (byte_4351AB3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent_EndOpen__);
    byte_4351AB3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v6 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v6 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v6[5].monitor;
      if ( _4__this )
      {
        UserPresentListViewManager__RequestItemSelect(
          (UserPresentListViewManager_o *)_4__this,
          this->fields.itemSelectEnt,
          result,
          0LL);
        return;
      }
    }
LABEL_11:
    sub_B7076C(_4__this, *(_QWORD *)&result);
  }
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, v6, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v6 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v6, v7, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *_4__this; // x0
  Il2CppObject *v6; // x21
  System_Action_o *v7; // x19

  if ( (byte_4351AB4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_PresentSelectableDlgComponent_EndOpen__);
    byte_4351AB4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v6 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v6 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v6[5].monitor;
      if ( _4__this )
      {
        UserPresentListViewManager__RequestItemSelect(
          (UserPresentListViewManager_o *)_4__this,
          this->fields.itemSelectEnt,
          result,
          0LL);
        return;
      }
    }
LABEL_11:
    sub_B7076C(_4__this, *(_QWORD *)&result);
  }
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, v6, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v6 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v6, v7, 0, 0LL);
}