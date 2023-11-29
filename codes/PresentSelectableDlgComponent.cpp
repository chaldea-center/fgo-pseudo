void __fastcall PresentSelectableDlgComponent___ctor(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FA002 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA002 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__Close(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F9FFC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PresentSelectableDlgComponent_EndClose__, v6);
    byte_40F9FFC = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndClose__, 0LL);
  PresentSelectableDlgComponent__Close_25204328(this, v7, v8);
}


void __fastcall PresentSelectableDlgComponent__Close_25204328(
        PresentSelectableDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40F9FFD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__, v7);
    sub_B16FFC(&PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo, v8);
    byte_40F9FFD = 1;
  }
  v9 = sub_B170CC(PresentSelectableDlgComponent___c__DisplayClass17_0_TypeInfo, callback, method, v3, v4);
  PresentSelectableDlgComponent___c__DisplayClass17_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass17_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  this->fields.isClosed = 1;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_PresentSelectableDlgComponent___c__DisplayClass17_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v26, 0LL);
}


void __fastcall PresentSelectableDlgComponent__EndClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  PresentSelectableDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall PresentSelectableDlgComponent__EndOpen(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *scrView; // x8
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v6; // x0

  scrView = this->fields.scrView;
  this->fields.isClosed = 0;
  if ( !scrView
    || (v4 = *(UnityEngine_Component_o **)&scrView->fields.showScrollBars) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (v6 = this->fields.scrView) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._8_UpdateScrollbars.method)(
    v6,
    1LL,
    v6->klass->vtable._9_SetDragAmount.methodPtr);
}


void __fastcall PresentSelectableDlgComponent__Init(PresentSelectableDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableDlgComponent__OnClickClose(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FA000 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA000 = 1;
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
  System_String_o *v23; // x0
  UILabel_o *titleDetailLabel; // x22
  System_String_o *v25; // x0
  struct ItemEntity_o *ticketItm; // x8
  System_String_o *v27; // x0
  WebViewManager_o *Instance; // x0
  ItemSelectMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemSelectEntity_array *Selectables; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x8
  ItemSelectEntity_array *v34; // x22
  unsigned __int64 v35; // x26
  UnityEngine_Component_o *itemListInfoGrid; // x0
  ItemSelectEntity_o *v37; // x23
  UnityEngine_GameObject_o *itemListObj; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v41; // x24
  UnityEngine_Transform_o *v42; // x25
  int v43; // s0
  UnityEngine_Transform_o *v46; // x0
  PresentSelectableItemComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v48; // x5
  UIGrid_o *v49; // x0
  UIScrollView_o *scrView; // x0
  struct UIScrollView_o *v51; // x8
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Action_o *v58; // x20
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9FFB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, ticketItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemSelectMaster___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_PresentSelectableDlgComponent_EndOpen__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_10471, v12);
    sub_B16FFC(&StringLiteral_10472, v13);
    byte_40F9FFB = 1;
  }
  PresentSelectableDlgComponent__clearInfoGrid(this, (const MethodInfo *)ticketItem);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.ticketItm = ticketItem;
  p_ticketItm = &this->fields.ticketItm;
  this->fields.isClosed = 0;
  sub_B16F98(
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
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10472, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, v23, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10471, 0LL);
  ticketItm = this->fields.ticketItm;
  if ( !ticketItm )
    goto LABEL_30;
  v27 = System_String__Format(v25, (Il2CppObject *)ticketItm->fields.name, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_30;
  UILabel__set_text(titleDetailLabel, v27, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (ItemSelectMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemSelectMaster___);
  if ( !*p_ticketItm )
    goto LABEL_30;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  Selectables = ItemSelectMaster__GetSelectables(MasterData_WarQuestSelectionMaster, (*p_ticketItm)->fields.id, 0LL);
  if ( !Selectables )
    goto LABEL_30;
  v33 = *(_QWORD *)&Selectables->max_length;
  v34 = Selectables;
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v33 )
      {
        sub_B17100(Selectables, v31, v32);
        sub_B170A0();
      }
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        break;
      v37 = v34->m_Items[v35];
      itemListObj = this->fields.itemListObj;
      transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
      if ( !Object )
        break;
      v41 = Object;
      v42 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v42 )
        break;
      UnityEngine_Transform__set_localPosition(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
      v46 = UnityEngine_GameObject__get_transform(v41, 0LL);
      if ( !v46 )
        break;
      v59.fields.x = 0.95;
      v59.fields.y = 0.95;
      v59.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(v46, v59, 0LL);
      Component_srcLineSprite = (PresentSelectableItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      v41,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PresentSelectableItemComponent___);
      if ( !*p_ticketItm || !Component_srcLineSprite )
        break;
      PresentSelectableItemComponent__setItemInfo(
        Component_srcLineSprite,
        v37,
        ticketsHave,
        (*p_ticketItm)->fields.imageId,
        this,
        v48);
      UnityEngine_GameObject__SetActive(v41, 1, 0LL);
      LODWORD(v33) = v34->max_length;
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_24;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_24:
  v49 = this->fields.itemListInfoGrid;
  if ( !v49 )
    goto LABEL_30;
  UIGrid__set_repositionNow(v49, 1, 0LL);
  scrView = this->fields.scrView;
  if ( !scrView )
    goto LABEL_30;
  UIScrollView__ResetPosition(scrView, 0LL);
  v51 = this->fields.scrView;
  if ( !v51 )
    goto LABEL_30;
  v52 = *(UnityEngine_Component_o **)&v51->fields.showScrollBars;
  if ( !v52 )
    goto LABEL_30;
  v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
  if ( !v53 )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(v53, 0, 0LL);
  v58 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v54, v55, v56, v57);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x2

  if ( (byte_40F9FFE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, itemSelectEnt);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    sub_B16FFC(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__, v10);
    sub_B16FFC(&PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo, v11);
    byte_40F9FFE = 1;
  }
  v12 = sub_B170CC(
          PresentSelectableDlgComponent___c__DisplayClass21_0_TypeInfo,
          itemSelectEnt,
          itmEnt,
          *(_QWORD *)&itemHold,
          method);
  PresentSelectableDlgComponent___c__DisplayClass21_0___ctor(
    (PresentSelectableDlgComponent___c__DisplayClass21_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = itemSelectEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)itemSelectEnt,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v12 + 32) = itmEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)itmEnt, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v12 + 40) = itemHold;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__PlaySystemSE(0, 0LL);
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v12,
    Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__0__,
    0LL);
  PresentSelectableDlgComponent__Close_25204328(this, v35, v36);
}


bool __fastcall PresentSelectableDlgComponent__checkExpired(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *ticketItm; // x8
  int64_t endedAt; // x20
  UserPresentListViewManager_o *pBox; // x0

  if ( (byte_40F9FFF & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F9FFF = 1;
  }
  ticketItm = this->fields.ticketItm;
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
  pBox = this->fields.pBox;
  if ( !pBox )
LABEL_11:
    sub_B170D4();
  UserPresentListViewManager__DlgForExpiredPresent(pBox, 0LL);
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
    sub_B170D4();
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  TransformHelper__DestroyChildren(transform, 0LL);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableDlgComponent__get_closeBtnObject(
        PresentSelectableDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FA001 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA001 = 1;
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  struct PresentSelectableDlgComponent_o *v11; // x8
  struct ItemSelectEntity_o *itemSelectEnt; // x21
  int32_t ticketsHave; // w20
  PresentSelectableItemConfirmDlg_o *itemConfirmDlg; // x22
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *_9__2; // x26
  ItemEntity_o *v16; // x25
  ItemEntity_o *v17; // x23
  int32_t v18; // w24
  __int64 v19; // x9
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
  PresentSelectableBulkItemConfirmDlg_o *itemBulkConfirmDlg; // x22
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *_9__1; // x26
  ItemEntity_o *ticketItm; // x25
  ItemEntity_o *itmEnt; // x23
  int32_t itemHold; // w24
  __int64 v37; // x9
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_40F83A3 & 1) == 0 )
  {
    sub_B16FFC(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__, v4);
    sub_B16FFC(&Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__, v5);
    byte_40F83A3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( PresentSelectableDlgComponent__checkExpired(_4__this, 0LL) )
    return;
  v11 = this->fields.__4__this;
  if ( !v11 || (itemSelectEnt = this->fields.itemSelectEnt) == 0LL )
LABEL_17:
    sub_B170D4();
  ticketsHave = v11->fields.ticketsHave;
  if ( ticketsHave >= 2 * itemSelectEnt->fields.requireNum )
  {
    itemBulkConfirmDlg = v11->fields.itemBulkConfirmDlg;
    _9__1 = this->fields.__9__1;
    ticketItm = v11->fields.ticketItm;
    itmEnt = this->fields.itmEnt;
    itemHold = this->fields.itemHold;
    if ( !_9__1 )
    {
      _9__1 = (struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *)sub_B170CC(
                                                                             PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo,
                                                                             v7,
                                                                             v8,
                                                                             v9,
                                                                             v10);
      v37 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__1__;
      *(_QWORD *)&_9__1->fields.method_ptr = v37;
      *(_QWORD *)&_9__1->fields.method = this;
      sub_B16F98(
        (BattleServantConfConponent_o *)&_9__1->fields.method,
        (System_Int32_array **)this,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
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
  itemConfirmDlg = v11->fields.itemConfirmDlg;
  _9__2 = this->fields.__9__2;
  v16 = v11->fields.ticketItm;
  v17 = this->fields.itmEnt;
  v18 = this->fields.itemHold;
  if ( !_9__2 )
  {
    _9__2 = (struct PresentSelectableItemConfirmDlg_CallbackFunc_o *)sub_B170CC(
                                                                       PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8,
                                                                       v9,
                                                                       v10);
    v19 = *(_QWORD *)Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.extra_arg = Method_PresentSelectableDlgComponent___c__DisplayClass21_0__OpenItemConfirmDlg_b__2__;
    *(_QWORD *)&_9__2->fields.method_ptr = v19;
    *(_QWORD *)&_9__2->fields.method = this;
    sub_B16F98(
      (BattleServantConfConponent_o *)&_9__2->fields.method,
      (System_Int32_array **)this,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !itemConfirmDlg )
    goto LABEL_17;
  PresentSelectableItemConfirmDlg__Open(itemConfirmDlg, itemSelectEnt, v17, v18, v16, ticketsHave, _9__2, 0, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x21
  UserPresentListViewManager_o *monitor; // x0
  System_Action_o *v13; // x19

  if ( (byte_40F83A4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_PresentSelectableDlgComponent_EndOpen__, v5);
    byte_40F83A4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( PresentSelectableDlgComponent__checkExpired(_4__this, 0LL) )
    return;
  v11 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v11 )
    {
      monitor = (UserPresentListViewManager_o *)v11[5].monitor;
      if ( monitor )
      {
        UserPresentListViewManager__RequestItemSelect(monitor, this->fields.itemSelectEnt, result, 0LL);
        return;
      }
    }
LABEL_11:
    sub_B170D4();
  }
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v13, v11, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v11 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v11, v13, 0, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x21
  UserPresentListViewManager_o *monitor; // x0
  System_Action_o *v13; // x19

  if ( (byte_40F83A5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_PresentSelectableDlgComponent_EndOpen__, v5);
    byte_40F83A5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  if ( PresentSelectableDlgComponent__checkExpired(_4__this, 0LL) )
    return;
  v11 = (Il2CppObject *)this->fields.__4__this;
  if ( result > 0 )
  {
    if ( v11 )
    {
      monitor = (UserPresentListViewManager_o *)v11[5].monitor;
      if ( monitor )
      {
        UserPresentListViewManager__RequestItemSelect(monitor, this->fields.itemSelectEnt, result, 0LL);
        return;
      }
    }
LABEL_11:
    sub_B170D4();
  }
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v13, v11, Method_PresentSelectableDlgComponent_EndOpen__, 0LL);
  if ( !v11 )
    goto LABEL_11;
  BaseDialog__Open((BaseDialog_o *)v11, v13, 0, 0LL);
}