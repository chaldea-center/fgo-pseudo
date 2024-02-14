void __fastcall PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42144A0 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42144A0 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_421449A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent_EndClose__, v4);
    byte_421449A = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0LL);
  PresentSelectableDlgComponent__Close_24360616(this, v5, v6);
}


void __fastcall PresentSelectableDlgComponent__Close_24360616(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x20

  if ( (byte_421449B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__, v5);
    sub_B0D8A4(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo, v6);
    byte_421449B = 1;
  }
  v7 = sub_B0D974(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo, callback, method);
  PresentSelectableDlgComponent___c__DisplayClass17_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass17_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  this->fields.isClosed = 1;
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v23, 0LL);
}


void __fastcall PresentSelectableDlgComponent__EndClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  PresentSelectableDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  }
  ((void (__fastcall *)(PresentSelectableDlgComponent_o *, __int64, void *))this->klass[1]._1.namespaze)(
    this,
    1LL,
    this->klass[1]._1.byval_arg.data);
}


void __fastcall PresentSelectableDlgComponent__Init(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OnClickClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_421449E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421449E = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct ItemEntity_o **p_ticketItm; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *titleDetailLabel; // x22
  struct ItemEntity_o *ticketItm; // x8
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v26; // x22
  unsigned __int64 v27; // x26
  ItemSelectEntity_o *v28; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v31; // x24
  UnityEngine_Transform_o *v32; // x25
  int v33; // s0
  const MethodInfo *v36; // x5
  struct UIScrollView_o *scrView; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x20
  __int64 v41; // x0
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214499 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, ticketItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemSelectMaster___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent_EndOpen__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_10529/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, v12);
    sub_B0D8A4(&StringLiteral_10530/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, v13);
    byte_4214499 = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ticketItm,
    (System_Int32_array **)ticketItem,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.ticketsHave = ticketsHave;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10530/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10529/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemSelectMaster___);
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
  v26 = gameObject;
  if ( (int)klass >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)klass )
      {
        v41 = sub_B0D9A8(gameObject);
        sub_B0D948(v41, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v28 = (ItemSelectEntity_o *)*((_QWORD *)&v26[1].monitor + v27);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      v31 = gameObject;
      v32 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v32 )
        break;
      UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v31, 0LL);
      if ( !gameObject )
        break;
      v42.fields.x = 0.95;
      v42.fields.y = 0.95;
      v42.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v42, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v31,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !gameObject )
        break;
      PresentSelectableItemComponent__setItemInfo(
        (PresentSelectableItemComponent_o *)gameObject,
        v28,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v36);
      UnityEngine_GameObject__SetActive(v31, 1, 0LL);
      LODWORD(klass) = v26[1].klass;
      if ( (__int64)++v27 >= (int)klass )
        goto LABEL_24;
    }
LABEL_30:
    sub_B0D97C(gameObject);
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
  v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
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
  __int64 v12; // x21
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x2

  if ( (byte_421449C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, itemSelectEnt);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__, v10);
    sub_B0D8A4(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo, v11);
    byte_421449C = 1;
  }
  v12 = sub_B0D974(PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo, itemSelectEnt, itmEnt);
  PresentSelectableDlgComponent___c__DisplayClass21_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass21_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = itemSelectEnt;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)itemSelectEnt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)(v12 + 32) = itmEnt;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)itmEnt, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v12 + 40) = itemHold;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v12,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0LL);
  PresentSelectableDlgComponent__Close_24360616(this, v34, v35);
}


bool __fastcall PresentSelectableDlgComponent__checkExpired(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  PresentSelectableDlgComponent_o *v2; // x19
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x20

  v2 = this;
  if ( (byte_421449D & 1) == 0 )
  {
    this = (PresentSelectableDlgComponent_o *)sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_421449D = 1;
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  TransformHelper__DestroyChildren(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableDlgComponent__get_closeBtnObject(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_421449F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421449F = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PresentSelectableDlgComponent_o *_4__this; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct PresentSelectableDlgComponent_o *v9; // x8
  struct ItemSelectEntity_o *itemSelectEnt; // x21
  int32_t ticketsHave; // w20
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x22
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x26
  ItemEntity_o *v14; // x25
  ItemEntity_o *v15; // x23
  int32_t v16; // w24
  __int64 v17; // x9
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x22
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  ItemEntity_o *ticketItm; // x25
  ItemEntity_o *itmEnt; // x23
  int32_t itemHold; // w24
  __int64 v23; // x9

  if ( (byte_42121AC & 1) == 0 )
  {
    sub_B0D8A4(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__, v4);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__, v5);
    byte_42121AC = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v9 = this->fields.__4__this;
  if ( !v9 || (itemSelectEnt = this->fields.itemSelectEnt) == 0LL )
LABEL_17:
    sub_B0D97C(_4__this);
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
      _9__1 = (struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_B0D974(
                                                                             PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo,
                                                                             v7,
                                                                             v8);
      v23 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.method_ptr = v23;
      *(_QWORD *)&_9__1->fields.method = this;
      sub_B0D840(&_9__1->fields.method, this);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
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
  itemConfirmDlg = v9->fields.itemConfirmDlg;
  _9__2 = this->fields.__9__2;
  v14 = v9->fields.ticketItm;
  v15 = this->fields.itmEnt;
  v16 = this->fields.itemHold;
  if ( !_9__2 )
  {
    _9__2 = (struct PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_B0D974(
                                                                       PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8);
    v17 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.method_ptr = v17;
    *(_QWORD *)&_9__2->fields.method = this;
    sub_B0D840(&_9__2->fields.method, this);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(itemConfirmDlg, itemSelectEnt, v15, v16, v14, ticketsHave, _9__2, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__1(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PresentSelectableDlgComponent_o *_4__this; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  System_Action_o *v10; // x19

  if ( (byte_42121AD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent_EndOpen__, v5);
    byte_42121AD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v9 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v9 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v9[5].monitor;
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
    sub_B0D97C(_4__this);
  }
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v10, v9, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v9 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v9, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PresentSelectableDlgComponent_o *_4__this; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  System_Action_o *v10; // x19

  if ( (byte_42121AE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_PresentSelectableDlgComponent_EndOpen__, v5);
    byte_42121AE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v9 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v9 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v9[5].monitor;
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
    sub_B0D97C(_4__this);
  }
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v10, v9, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v9 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v9, v10, 0, 0LL);
}