void __fastcall PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87C8 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87C8 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E87C2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent_EndClose__, v5, v6, v7);
    byte_42E87C2 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0LL);
  PresentSelectableDlgComponent__Close_25085764(this, v8, v9);
}


void __fastcall PresentSelectableDlgComponent__Close_25085764(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_42E87C3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__, v6, v7, v8);
    sub_B5D5C4(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo, v9, v10, v11);
    byte_42E87C3 = 1;
  }
  v12 = sub_B5D694(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo);
  PresentSelectableDlgComponent___c__DisplayClass17_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass17_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  this->fields.isClosed = 1;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v27, 0LL);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OnClickClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E87C6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87C6 = 1;
  }
  if ( !this->fields.isClosed )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PresentSelectableDlgComponent__Close(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent__Open(
        PresentSelectableDlgComponent_o *this,
        ItemEntity_o *ticketItem,
        int32_t ticketsHave,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  struct ItemEntity_o **p_ticketItm; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *titleDetailLabel; // x22
  struct ItemEntity_o *ticketItm; // x8
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v41; // x22
  unsigned __int64 v42; // x26
  ItemSelectEntity_o *v43; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v46; // x24
  UnityEngine_Transform_o *v47; // x25
  int v48; // s0
  const MethodInfo *v51; // x5
  struct UIScrollView_o *scrView; // x8
  System_Action_o *v53; // x20
  __int64 v54; // x0
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E87C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)ticketItem, ticketsHave, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemSelectMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent_EndOpen__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10621/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10622/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, v25, v26, v27);
    byte_42E87C1 = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ticketItm,
    (System_Int32_array **)ticketItem,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.ticketsHave = ticketsHave;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10622/*"PRESENT_BOX_SELECTABLE_LIST_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10621/*"PRESENT_BOX_SELECTABLE_LIST_DETAIL"*/, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)gameObject,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemSelectMaster___);
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
  v41 = gameObject;
  if ( (int)klass >= 1 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)klass )
      {
        v54 = sub_B5D6C8(gameObject);
        sub_B5D668(v54, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.itemListInfoGrid;
      if ( !gameObject )
        break;
      v43 = (ItemSelectEntity_o *)*((_QWORD *)&v41[1].monitor + v42);
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !gameObject )
        break;
      v46 = gameObject;
      v47 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v47 )
        break;
      UnityEngine_Transform__set_localPosition(v47, *(UnityEngine_Vector3_o *)&v48, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v46, 0LL);
      if ( !gameObject )
        break;
      v55.fields.x = 0.95;
      v55.fields.y = 0.95;
      v55.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)gameObject, v55, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v46,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !gameObject )
        break;
      PresentSelectableItemComponent__setItemInfo(
        (PresentSelectableItemComponent_o *)gameObject,
        v43,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v51);
      UnityEngine_GameObject__SetActive(v46, 1, 0LL);
      LODWORD(klass) = v41[1].klass;
      if ( (__int64)++v42 >= (int)klass )
        goto LABEL_24;
    }
LABEL_30:
    sub_B5D69C(gameObject, v29);
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
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent__OpenItemConfirmDlg(
        PresentSelectableDlgComponent_o *this,
        ItemSelectEntity_o *itemSelectEnt,
        ItemEntity_o *itmEnt,
        int32_t itemHold,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_o *v39; // x20
  const MethodInfo *v40; // x2

  if ( (byte_42E87C4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)itemSelectEnt, (_DWORD)itmEnt, *(_QWORD *)&itemHold);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__, v12, v13, v14);
    sub_B5D5C4(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo, v15, v16, v17);
    byte_42E87C4 = 1;
  }
  v18 = sub_B5D694(PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo);
  PresentSelectableDlgComponent___c__DisplayClass21_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass21_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = itemSelectEnt;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)itemSelectEnt,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v18 + 32) = itmEnt;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)itmEnt, v33, v34, v35, v36, v37, v38);
  *(_DWORD *)(v18 + 40) = itemHold;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v18,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0LL);
  PresentSelectableDlgComponent__Close_25085764(this, v39, v40);
}


bool __fastcall PresentSelectableDlgComponent__checkExpired(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PresentSelectableDlgComponent_o *v4; // x19
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x20

  v4 = this;
  if ( (byte_42E87C5 & 1) == 0 )
  {
    this = (PresentSelectableDlgComponent_o *)sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87C5 = 1;
  }
  ticketItm = v4->fields.ticketItm;
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
  this = (PresentSelectableDlgComponent_o *)v4->fields.pBox;
  if ( !this )
LABEL_11:
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  TransformHelper__DestroyChildren(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableDlgComponent__get_closeBtnObject(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E87C7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87C7 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  PresentSelectableDlgComponent_o *_4__this; // x0
  struct PresentSelectableDlgComponent_o *v15; // x8
  struct ItemSelectEntity_o *itemSelectEnt; // x21
  int32_t ticketsHave; // w20
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x22
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x26
  ItemEntity_o *v20; // x25
  ItemEntity_o *v21; // x23
  int32_t v22; // w24
  __int64 v23; // x9
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x22
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  ItemEntity_o *ticketItm; // x25
  ItemEntity_o *itmEnt; // x23
  int32_t itemHold; // w24
  __int64 v29; // x9

  if ( (byte_42E5AB7 & 1) == 0 )
  {
    sub_B5D5C4(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__, v8, v9, v10);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__, v11, v12, v13);
    byte_42E5AB7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v15 = this->fields.__4__this;
  if ( !v15 || (itemSelectEnt = this->fields.itemSelectEnt) == 0LL )
LABEL_17:
    sub_B5D69C(_4__this, method);
  ticketsHave = v15->fields.ticketsHave;
  if ( ticketsHave >= 2 * itemSelectEnt->fields.requireNum )
  {
    itemBulkConfirmDlg = v15->fields.itemBulkConfirmDlg;
    _9__1 = this->fields.__9__1;
    ticketItm = v15->fields.ticketItm;
    itmEnt = this->fields.itmEnt;
    itemHold = this->fields.itemHold;
    if ( !_9__1 )
    {
      _9__1 = (struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_B5D694(PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
      v29 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.method_ptr = v29;
      *(_QWORD *)&_9__1->fields.method = this;
      sub_B5D560(&_9__1->fields.method);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
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
  itemConfirmDlg = v15->fields.itemConfirmDlg;
  _9__2 = this->fields.__9__2;
  v20 = v15->fields.ticketItm;
  v21 = this->fields.itmEnt;
  v22 = this->fields.itemHold;
  if ( !_9__2 )
  {
    _9__2 = (struct PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_B5D694(PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    v23 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.method_ptr = v23;
    *(_QWORD *)&_9__2->fields.method = this;
    sub_B5D560(&_9__2->fields.method);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(itemConfirmDlg, itemSelectEnt, v21, v22, v20, ticketsHave, _9__2, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__1(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PresentSelectableDlgComponent_o *_4__this; // x0
  Il2CppObject *v10; // x21
  System_Action_o *v11; // x19

  if ( (byte_42E5AB8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent_EndOpen__, v6, v7, v8);
    byte_42E5AB8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v10 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v10 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v10[5].monitor;
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
    sub_B5D69C(_4__this, *(_QWORD *)&result);
  }
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, v10, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v10 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v10, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableDlgComponent___c__DisplayClass21_0___OpenItemConfirmDlg_b__2(
        PresentSelectableDlgComponent___c__DisplayClass21_0_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PresentSelectableDlgComponent_o *_4__this; // x0
  Il2CppObject *v10; // x21
  System_Action_o *v11; // x19

  if ( (byte_42E5AB9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentSelectableDlgComponent_EndOpen__, v6, v7, v8);
    byte_42E5AB9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (PresentSelectableDlgComponent_o *)PresentSelectableDlgComponent__checkExpired(_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  v10 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v10 )
    {
      _4__this = (PresentSelectableDlgComponent_o *)v10[5].monitor;
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
    sub_B5D69C(_4__this, *(_QWORD *)&result);
  }
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, v10, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v10 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v10, v11, 0, 0LL);
}