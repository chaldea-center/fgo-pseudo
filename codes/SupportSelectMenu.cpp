void __fastcall SupportSelectMenu___ctor(SupportSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD256 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FD256 = 1;
  }
  *(_QWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_NOT_EDIT.fields.y = 0LL;
  *(_OWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_EDTTING.fields.x = xmmword_3147C50;
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportSelectMenu__Active(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall SupportSelectMenu__Callback(
        SupportSelectMenu_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, result, d, n, 0LL);
}


void __fastcall SupportSelectMenu__Close(SupportSelectMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  this->fields.supportServantData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, 2, -1, -1, 0LL);
}


SupportSelectListViewItem_o *__fastcall SupportSelectMenu__GetCenterItem(
        SupportSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct SupportSelectListViewIndicator_o *indicator; // x8
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0
  SupportSelectListViewItem_o *Item; // x0
  const MethodInfo *v7; // x2
  SupportSelectListViewManager_o *v8; // x8
  SupportSelectListViewItem_o *v9; // x19

  indicator = this->fields.indicator;
  if ( !indicator
    || (supportSelectListViewManager = this->fields.supportSelectListViewManager) == 0LL
    || (Item = SupportSelectListViewManager__GetItem(supportSelectListViewManager, indicator->fields.pageIndex, v2),
        (v8 = this->fields.supportSelectListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = Item;
  SupportSelectListViewManager__SetSurface(v8, Item, v7);
  return v9;
}


void __fastcall SupportSelectMenu__HideActiveSupportApplyIcon(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *applyMainQuestSupport; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *applyMainQuestSupportFrame; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *applyEventQuestSupport; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *applyEventQuestSupportFrame; // x0
  UnityEngine_GameObject_o *v10; // x0

  applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyMainQuestSupport;
  if ( !applyMainQuestSupport )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(applyMainQuestSupport, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  applyMainQuestSupportFrame = (UnityEngine_Component_o *)this->fields.applyMainQuestSupportFrame;
  if ( !applyMainQuestSupportFrame
    || (v6 = UnityEngine_Component__get_gameObject(applyMainQuestSupportFrame, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v6, 0, 0LL),
        (applyEventQuestSupport = (UnityEngine_Component_o *)this->fields.applyEventQuestSupport) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(applyEventQuestSupport, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v8, 0, 0LL),
        (applyEventQuestSupportFrame = (UnityEngine_Component_o *)this->fields.applyEventQuestSupportFrame) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(applyEventQuestSupportFrame, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v10, 0, 0LL);
}


void __fastcall SupportSelectMenu__Init(SupportSelectMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.supportServantData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportSelectMenu__OnClickCancel(SupportSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40FD254 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD254 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, 0, -1, -1, 0LL);
}


void __fastcall SupportSelectMenu__OnClickDecide(SupportSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, 1, -1, -1, 0LL);
}


void __fastcall SupportSelectMenu__OnClickDeckName(SupportSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40FD253 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD253 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, 5, -1, -1, 0LL);
}


void __fastcall SupportSelectMenu__OnClickSupportEdit(SupportSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40FD251 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD251 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, 7, -1, -1, 0LL);
}


void __fastcall SupportSelectMenu__OnClickSwap(SupportSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_40FD252 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD252 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    SupportSelectMenu_CallbackFunc__Invoke(callbackFunc, 6, -1, -1, 0LL);
}


void __fastcall SupportSelectMenu__OnClickTab(
        SupportSelectMenu_o *this,
        UnityEngine_GameObject_o *idxSprite,
        const MethodInfo *method)
{
  System_String_o *name; // x0
  int32_t v6; // w20
  const MethodInfo *v7; // x3
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0

  if ( (byte_40FD250 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, idxSprite);
    byte_40FD250 = 1;
  }
  if ( !idxSprite )
    goto LABEL_9;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)idxSprite, 0LL);
  v6 = System_Int32__Parse(name, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(7, 0LL);
  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
LABEL_9:
    sub_B170D4();
  SupportSelectListViewManager__MoveCenterItem(supportSelectListViewManager, v6, 1, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__Open(
        SupportSelectMenu_o *this,
        SupportServantData_array *supportServantData,
        int32_t mainDeckIdx,
        SupportSelectMenu_CallbackFunc_o *callback,
        SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct SupportServantData_array **p_supportServantData; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v27; // w0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x5
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0
  struct SupportSelectListViewManager_o *v31; // x23
  UnityEngine_Transform_o *parent; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  bool v35; // w8
  UnityEngine_Component_o *indexGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  struct SupportServantData_array *v38; // x8
  SupportServantData_o *v39; // x8
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD24C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_SupportServantData___, supportServantData);
    byte_40FD24C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&mainDeckIdx,
    (System_String_array **)callback,
    (System_Boolean_array **)dragSwapCallbackFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dragSwapCallbackFunc,
    (System_Int32_array **)dragSwapCallbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  p_supportServantData = &this->fields.supportServantData;
  this->fields.supportServantData = supportServantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportServantData,
    (System_Int32_array **)supportServantData,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v27 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
          (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  SupportSelectMenu__createIndexItem(this, v27, v28);
  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    goto LABEL_18;
  SupportSelectListViewManager__CreateList(
    supportSelectListViewManager,
    supportServantData,
    mainDeckIdx,
    this->fields.callbackFunc,
    dragSwapCallbackFunc,
    v29);
  v31 = this->fields.supportSelectListViewManager;
  parent = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
                                        (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  if ( (int)parent >= 3 )
  {
    if ( !supportServantData )
      goto LABEL_18;
    if ( supportServantData->max_length <= 2 )
    {
LABEL_19:
      sub_B17100(parent, v33, v34);
      sub_B170A0();
    }
    v35 = supportServantData->m_Items[2] != 0LL;
    if ( !v31 )
      goto LABEL_18;
  }
  else
  {
    v35 = 0;
    if ( !v31 )
      goto LABEL_18;
  }
  v31->fields.isLoop = v35;
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid
    || (transform = UnityEngine_Component__get_transform(indexGrid, 0LL)) == 0LL
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL), (v38 = *p_supportServantData) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  if ( !v38->max_length )
    goto LABEL_19;
  v39 = v38->m_Items[0];
  if ( !v39 || !parent )
    goto LABEL_18;
  v42.fields.x = 0.0;
  LODWORD(v42.fields.y) = dword_3147C48[!v39->fields.isFriendInfo];
  v42.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(parent, v42, 0LL);
  SupportSelectMenu__moveCenterItem(this, mainDeckIdx, v40);
  SupportSelectMenu__Redisp(this, v41);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall SupportSelectMenu__Redisp(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0
  const MethodInfo *v6; // x1
  SupportSelectListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1
  SupportSelectListViewManager_o *v9; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (supportSelectListViewManager = this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__clearItem(supportSelectListViewManager, v4),
        (v7 = this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__setItem(v7, v6), (v9 = this->fields.supportSelectListViewManager) == 0LL) )
  {
    sub_B170D4();
  }
  SupportSelectListViewManager__reDisp(v9, v8);
}


void __fastcall SupportSelectMenu__Reset(SupportSelectMenu_o *this, int32_t classPos, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0
  const MethodInfo *v7; // x1
  SupportSelectListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1
  SupportSelectListViewManager_o *v10; // x0
  SupportSelectListViewIndicator_o *indicator; // x20
  const MethodInfo *v12; // x1
  SupportSelectListViewItem_o *CenterItem; // x0
  const MethodInfo *v14; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager
    || (SupportSelectListViewManager__clearItem(supportSelectListViewManager, v5),
        (v8 = this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__setItem(v8, v7), (v10 = this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__reDisp(v10, v9),
        indicator = this->fields.indicator,
        CenterItem = SupportSelectMenu__GetCenterItem(this, v12),
        !indicator) )
  {
LABEL_7:
    sub_B170D4();
  }
  SupportSelectListViewIndicator__DrawPartyInfo(indicator, CenterItem, v14);
}


void __fastcall SupportSelectMenu__SetAbleToSwapDrag(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x19
  bool v4; // w1
  SupportSelectListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_B170D4();
  v4 = flag;
  v5 = this->fields.supportSelectListViewManager;
  supportSelectListViewManager->fields.ableToSwapDragObj = v4;
  SupportSelectListViewManager__UpdateExplanationText(v5, v4, method);
  SupportSelectListViewManager__SetActiveDragSwapGuide(
    supportSelectListViewManager,
    supportSelectListViewManager->fields.ableToSwapDragObj,
    v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__SetActiveCurrentSupportSprite(
        SupportSelectMenu_o *this,
        bool mainQuestActive,
        bool eventQuestActive,
        int32_t mainNo,
        int32_t eventNo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *currentMainQuestSupportSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *currentEventQuestSupportSprite; // x0
  UnityEngine_GameObject_o *v18; // x0
  UISprite_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  UISprite_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  UIGrid_o *currentSupportDeckSpriteGrid; // x0
  UnityEngine_Behaviour_o *v28; // x0
  UnityEngine_Behaviour_o *v29; // x0
  struct UIGrid_o *v30; // x0
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD24E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, mainQuestActive);
    sub_B16FFC(&StringLiteral_19264, v11);
    sub_B16FFC(&StringLiteral_19263, v12);
    sub_B16FFC(&StringLiteral_19262, v13);
    sub_B16FFC(&StringLiteral_19261, v14);
    byte_40FD24E = 1;
  }
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentMainQuestSupportSprite;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(currentMainQuestSupportSprite, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, mainQuestActive, 0LL);
  currentEventQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentEventQuestSupportSprite;
  if ( !currentEventQuestSupportSprite )
    goto LABEL_24;
  v18 = UnityEngine_Component__get_gameObject(currentEventQuestSupportSprite, 0LL);
  if ( !v18 )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(v18, eventQuestActive, 0LL);
  v19 = this->fields.currentMainQuestSupportSprite;
  if ( mainNo )
  {
    v32 = mainNo;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v21 = System_String__Format((System_String_o *)StringLiteral_19264, v20, 0LL);
    if ( !v19 )
      goto LABEL_24;
    v22 = v21;
  }
  else
  {
    if ( !v19 )
      goto LABEL_24;
    v22 = (System_String_o *)StringLiteral_19263;
  }
  UISprite__set_spriteName(v19, v22, 0LL);
  v23 = this->fields.currentEventQuestSupportSprite;
  if ( eventNo )
  {
    v31 = eventNo;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v25 = System_String__Format((System_String_o *)StringLiteral_19262, v24, 0LL);
    if ( !v23 )
      goto LABEL_24;
    v26 = v25;
  }
  else
  {
    if ( !v23 )
      goto LABEL_24;
    v26 = (System_String_o *)StringLiteral_19261;
  }
  UISprite__set_spriteName(v23, v26, 0LL);
  currentSupportDeckSpriteGrid = this->fields.currentSupportDeckSpriteGrid;
  if ( !currentSupportDeckSpriteGrid )
    goto LABEL_24;
  UIGrid__GetChildList(currentSupportDeckSpriteGrid, 0LL);
  v28 = (UnityEngine_Behaviour_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !v28 )
    goto LABEL_24;
  if ( UnityEngine_Behaviour__get_enabled(v28, 0LL) )
    return;
  v29 = (UnityEngine_Behaviour_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !v29
    || (UnityEngine_Behaviour__set_enabled(v29, 1, 0LL), (v30 = this->fields.currentSupportDeckSpriteGrid) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v30->klass->vtable._8_Reposition.method)(
    v30,
    v30->klass->vtable._9_ResetPosition.methodPtr);
}


void __fastcall SupportSelectMenu__SetActiveFixDeckButton(
        SupportSelectMenu_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *fixMainQuestFrameSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *fixEventQuestFrameSprite; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *fixBaseSprite; // x0
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UIButton_array *fixMainQuestSupportDeckButtons; // x21
  int max_length; // w8
  unsigned int v16; // w22
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct UIButton_array *fixEventQuestSupportDeckButtons; // x20
  int v20; // w8
  unsigned int v21; // w21
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0

  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixMainQuestFrameSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(fixMainQuestFrameSprite, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
  fixEventQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixEventQuestFrameSprite;
  if ( !fixEventQuestFrameSprite )
    goto LABEL_22;
  v8 = UnityEngine_Component__get_gameObject(fixEventQuestFrameSprite, 0LL);
  if ( !v8 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v8, active, 0LL);
  fixBaseSprite = (UnityEngine_Component_o *)this->fields.fixBaseSprite;
  if ( !fixBaseSprite )
    goto LABEL_22;
  v10 = UnityEngine_Component__get_gameObject(fixBaseSprite, 0LL);
  if ( !v10 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v10, active, 0LL);
  fixMainQuestSupportDeckButtons = this->fields.fixMainQuestSupportDeckButtons;
  if ( !fixMainQuestSupportDeckButtons )
    goto LABEL_22;
  max_length = fixMainQuestSupportDeckButtons->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < max_length )
    {
      v17 = (UnityEngine_Component_o *)fixMainQuestSupportDeckButtons->m_Items[v16];
      if ( !v17 )
        goto LABEL_22;
      v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v18 )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(v18, active, 0LL);
      max_length = fixMainQuestSupportDeckButtons->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_14;
    }
LABEL_23:
    sub_B17100(v11, v12, v13);
    sub_B170A0();
  }
LABEL_14:
  fixEventQuestSupportDeckButtons = this->fields.fixEventQuestSupportDeckButtons;
  if ( !fixEventQuestSupportDeckButtons )
LABEL_22:
    sub_B170D4();
  v20 = fixEventQuestSupportDeckButtons->max_length;
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( v21 < v20 )
    {
      v22 = (UnityEngine_Component_o *)fixEventQuestSupportDeckButtons->m_Items[v21];
      if ( !v22 )
        goto LABEL_22;
      v23 = UnityEngine_Component__get_gameObject(v22, 0LL);
      if ( !v23 )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive(v23, active, 0LL);
      v20 = fixEventQuestSupportDeckButtons->max_length;
      if ( (int)++v21 >= v20 )
        return;
    }
    goto LABEL_23;
  }
}


void __fastcall SupportSelectMenu__SetActiveHeader(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *headerObject; // x0

  headerObject = this->fields.headerObject;
  if ( !headerObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(headerObject, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__SetActiveSupportApplyIcon(
        SupportSelectMenu_o *this,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t v20; // w23
  SupportSelectMenu___c_c *v21; // x8
  struct SupportSelectMenu___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__45_0; // x24
  Il2CppObject *v24; // x25
  struct SupportSelectMenu___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w0
  int v34; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  bool v38; // w1
  UnityEngine_Component_o *applyMainQuestSupportFrame; // x0
  int32_t v40; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  SupportSelectMenu___c_c *v45; // x8
  int32_t v46; // w21
  struct SupportSelectMenu___c_StaticFields *v47; // x9
  System_Func_int__bool__o *_9__45_1; // x22
  Il2CppObject *v49; // x23
  struct SupportSelectMenu___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  int32_t v58; // w0
  int v59; // w20
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Component_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  bool v63; // w1
  UnityEngine_Component_o *applyEventQuestSupportFrame; // x0
  UIGrid_o *applySupportDeckGrid; // x0
  struct UIGrid_o *v66; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0

  if ( (byte_40FD24D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&nowDeckId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v11);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v12);
    sub_B16FFC(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_0__, v13);
    sub_B16FFC(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_1__, v14);
    sub_B16FFC(&SupportSelectMenu___c_TypeInfo, v15);
    byte_40FD24D = 1;
  }
  v20 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  v21 = SupportSelectMenu___c_TypeInfo;
  if ( (BYTE3(SupportSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v21 = SupportSelectMenu___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__45_0 = static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = SupportSelectMenu___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v16, v17, v18, v19);
    System_Func_int__bool____ctor(
      _9__45_0,
      v24,
      Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v25 = SupportSelectMenu___c_TypeInfo->static_fields;
    v25->__9__45_0 = _9__45_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixMainDeckIds,
          (System_Func_TSource__bool__o *)_9__45_0,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v33 = System_Linq_Enumerable__Count_int_(v32, (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyMainQuestSupport )
    goto LABEL_44;
  v34 = v33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyMainQuestSupport, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  if ( v20 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v34 < 1, 0LL);
    applyMainQuestSupportFrame = (UnityEngine_Component_o *)this->fields.applyMainQuestSupportFrame;
    if ( !applyMainQuestSupportFrame )
      goto LABEL_44;
    v37 = UnityEngine_Component__get_gameObject(applyMainQuestSupportFrame, 0LL);
    if ( !v37 )
      goto LABEL_44;
    v38 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v36 = (UnityEngine_Component_o *)this->fields.applyMainQuestSupportFrame;
    if ( !v36 )
      goto LABEL_44;
    v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
    if ( !v37 )
      goto LABEL_44;
    v38 = 1;
  }
  UnityEngine_GameObject__SetActive(v37, v38, 0LL);
  v40 = System_Array__IndexOf_int_(
          fixEventDeckIds,
          nowDeckId,
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  v45 = SupportSelectMenu___c_TypeInfo;
  v46 = v40;
  if ( (BYTE3(SupportSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v45 = SupportSelectMenu___c_TypeInfo;
  }
  v47 = v45->static_fields;
  _9__45_1 = v47->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v47 = SupportSelectMenu___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__45_1 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v41, v42, v43, v44);
    System_Func_int__bool____ctor(
      _9__45_1,
      v49,
      Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_1__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v50 = SupportSelectMenu___c_TypeInfo->static_fields;
    v50->__9__45_1 = _9__45_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v50->__9__45_1,
      (System_Int32_array **)_9__45_1,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v57 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixEventDeckIds,
          (System_Func_TSource__bool__o *)_9__45_1,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v58 = System_Linq_Enumerable__Count_int_(v57, (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyEventQuestSupport
    || (v59 = v58,
        (v60 = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.applyEventQuestSupport,
                 0LL)) == 0LL) )
  {
LABEL_44:
    sub_B170D4();
  }
  if ( v46 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(v60, v59 < 1, 0LL);
    applyEventQuestSupportFrame = (UnityEngine_Component_o *)this->fields.applyEventQuestSupportFrame;
    if ( applyEventQuestSupportFrame )
    {
      v62 = UnityEngine_Component__get_gameObject(applyEventQuestSupportFrame, 0LL);
      if ( v62 )
      {
        v63 = 0;
        goto LABEL_37;
      }
    }
    goto LABEL_44;
  }
  UnityEngine_GameObject__SetActive(v60, 1, 0LL);
  v61 = (UnityEngine_Component_o *)this->fields.applyEventQuestSupportFrame;
  if ( !v61 )
    goto LABEL_44;
  v62 = UnityEngine_Component__get_gameObject(v61, 0LL);
  if ( !v62 )
    goto LABEL_44;
  v63 = 1;
LABEL_37:
  UnityEngine_GameObject__SetActive(v62, v63, 0LL);
  applySupportDeckGrid = this->fields.applySupportDeckGrid;
  if ( !applySupportDeckGrid )
    goto LABEL_44;
  UIGrid__GetChildList(applySupportDeckGrid, 0LL);
  v66 = this->fields.applySupportDeckGrid;
  if ( !v66 )
    goto LABEL_44;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v66->klass->vtable._8_Reposition.method)(
    v66,
    v66->klass->vtable._9_ResetPosition.methodPtr);
  v67 = (UnityEngine_Component_o *)this->fields.applySupportDeckGrid;
  if ( !v67 )
    goto LABEL_44;
  v68 = UnityEngine_Component__get_gameObject(v67, 0LL);
  if ( !v68 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v68, 0, 0LL);
  v69 = (UnityEngine_Component_o *)this->fields.applySupportDeckGrid;
  if ( !v69 )
    goto LABEL_44;
  v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
  if ( !v70 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v70, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__SetFixDeckButton(
        SupportSelectMenu_o *this,
        int32_t currentId,
        bool isEventButton,
        System_Int32_array *fixDeckIds,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  int *v12; // x8
  int v13; // w24
  __int64 i; // x25
  int32_t v15; // w27
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  struct UISprite_array *fixEventQuestSupportDeckLabelSprites; // x9
  struct UISprite_array *fixEventQuestSupportDeckFrameSprites; // x8
  UISprite_o *v20; // x23
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FD24F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&currentId);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_17027, v9);
    sub_B16FFC(&StringLiteral_17028, v10);
    byte_40FD24F = 1;
  }
  v11 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( isEventButton )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = (int *)(*(_QWORD *)&v11[7].fields + 176LL);
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = (int *)(*(_QWORD *)&v11[7].fields + 172LL);
  }
  v13 = *v12;
  if ( *v12 >= 1 )
  {
    if ( !fixDeckIds )
LABEL_32:
      sub_B170D4();
    for ( i = 0LL; (int)i < v13; ++i )
    {
      if ( (unsigned int)i >= fixDeckIds->max_length )
      {
LABEL_33:
        sub_B17100(v11, *(_QWORD *)&currentId, isEventButton);
        sub_B170A0();
      }
      v15 = fixDeckIds->m_Items[i + 1];
      if ( v15 )
      {
        v23 = fixDeckIds->m_Items[i + 1];
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
        v11 = System_String__Format((System_String_o *)StringLiteral_17028, v16, 0LL);
        v17 = v11;
        if ( isEventButton )
          goto LABEL_18;
      }
      else
      {
        v17 = (System_String_o *)StringLiteral_17027;
        if ( isEventButton )
        {
LABEL_18:
          fixEventQuestSupportDeckLabelSprites = this->fields.fixEventQuestSupportDeckLabelSprites;
          if ( !fixEventQuestSupportDeckLabelSprites )
            goto LABEL_32;
          if ( (unsigned int)i >= fixEventQuestSupportDeckLabelSprites->max_length )
            goto LABEL_33;
          fixEventQuestSupportDeckFrameSprites = this->fields.fixEventQuestSupportDeckFrameSprites;
          if ( !fixEventQuestSupportDeckFrameSprites )
            goto LABEL_32;
          goto LABEL_26;
        }
      }
      fixEventQuestSupportDeckLabelSprites = this->fields.fixMainQuestSupportDeckLabelSprites;
      if ( !fixEventQuestSupportDeckLabelSprites )
        goto LABEL_32;
      if ( (unsigned int)i >= fixEventQuestSupportDeckLabelSprites->max_length )
        goto LABEL_33;
      fixEventQuestSupportDeckFrameSprites = this->fields.fixMainQuestSupportDeckFrameSprites;
      if ( !fixEventQuestSupportDeckFrameSprites )
        goto LABEL_32;
LABEL_26:
      if ( (unsigned int)i >= fixEventQuestSupportDeckFrameSprites->max_length )
        goto LABEL_33;
      v20 = fixEventQuestSupportDeckLabelSprites->m_Items[i];
      v21 = (UnityEngine_Component_o *)fixEventQuestSupportDeckFrameSprites->m_Items[i];
      if ( !v21 )
        goto LABEL_32;
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(gameObject, v15 != 0, 0LL);
      if ( !v20 )
        goto LABEL_32;
      UISprite__set_spriteName(v20, v17, 0LL);
      v11 = (System_String_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
                                 v20,
                                 v20->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}


void __fastcall SupportSelectMenu__SetupFooterButtons(
        SupportSelectMenu_o *this,
        bool isEditting,
        const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *swapButton; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *editButton; // x0
  __int64 v12; // x8
  __int64 v13; // x10
  __int64 v14; // x9
  float v15; // s8
  float v16; // s10
  float v17; // s9
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_16;
  gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, !isEditting, 0LL);
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_16;
  v8 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( !v8 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v8, isEditting, 0LL);
  swapButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !swapButton )
    goto LABEL_16;
  v10 = UnityEngine_Component__get_gameObject(swapButton, 0LL);
  if ( !v10 )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(v10, !isEditting, 0LL);
  editButton = (UnityEngine_Component_o *)this->fields.editButton;
  v12 = 100LL;
  v13 = 104LL;
  if ( isEditting )
    v12 = 88LL;
  if ( isEditting )
    v13 = 92LL;
  v14 = 108LL;
  if ( isEditting )
    v14 = 96LL;
  if ( !editButton
    || (v15 = *(float *)((char *)&this->klass + v13),
        v16 = *(float *)((char *)&this->klass + v12),
        v17 = *(float *)((char *)&this->klass + v14),
        (transform = UnityEngine_Component__get_transform(editButton, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  v19.fields.y = v15;
  v19.fields.z = v17;
  v19.fields.x = v16;
  UnityEngine_Transform__set_localPosition(transform, v19, 0LL);
}


void __fastcall SupportSelectMenu__add_callbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectMenu_o *v10; // x0
  SupportSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FD247 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FD247 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportSelectMenu__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectMenu__add_dragSwapCallbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o **p_dragSwapCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectMenu_o *v10; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FD249 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_40FD249 = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportSelectMenu__remove_dragSwapCallbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectMenu__buttonDispSetting(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *swapButton; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *editButton; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v14; // x0
  bool v15; // w20
  const MethodInfo *v16; // x2

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_12;
  v8 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(v8, flag, 0LL);
  swapButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !swapButton
    || (v10 = UnityEngine_Component__get_gameObject(swapButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v10, flag, 0LL),
        (editButton = (UnityEngine_Component_o *)this->fields.editButton) == 0LL)
    || (v12 = UnityEngine_Component__get_gameObject(editButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v12, flag, 0LL),
        (cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL)
    || (v14 = UnityEngine_Component__get_gameObject(cancelButton, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B170D4();
  }
  v15 = flag;
  UnityEngine_GameObject__SetActive(v14, v15, 0LL);
  SupportSelectMenu__SetActiveFixDeckButton(this, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__createIndexItem(
        SupportSelectMenu_o *this,
        int32_t deckNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *indexGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  int32_t i; // w21
  SupportSelectListViewIndicator_o *indicator; // x0
  BalanceConfig_c *v14; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct UIGrid_o *v19; // x0
  SupportSelectListViewIndicator_o *v20; // x0
  int32_t j; // w22
  UnityEngine_GameObject_o *v22; // x0
  UIGrid_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x21
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x0
  System_String_o *v28; // x0
  SupportSelectListViewIndicator_o *v29; // x22
  int32_t v30; // w23
  UISprite_o *Component_srcLineSprite; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  SupportSelectListViewIndicator_o *v34; // x0
  BalanceConfig_c *v35; // x0
  struct UnityEngine_GameObject_o *indexItemSeed; // x21
  UnityEngine_GameObject_o *v37; // x0
  struct UIGrid_o *v38; // x0
  long double v39; // q0
  struct SupportSelectListViewIndicator_o *v40; // x19
  int32_t index; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FD24B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNum);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FD24B = 1;
  }
  index = 0;
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(indexGrid, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    for ( i = 0; ; ++i )
    {
      v14 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( i >= v14->static_fields->SupportDeckMax )
        break;
      indicator = this->fields.indicator;
      if ( !indicator )
        goto LABEL_41;
      SupportSelectListViewIndicator__SetPageActive(indicator, i, i < deckNum, v11);
    }
    v15 = (UnityEngine_Component_o *)this->fields.indexGrid;
    if ( v15 )
    {
      v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( v16 )
      {
        UnityEngine_GameObject__SetActive(v16, 0, 0LL);
        v17 = (UnityEngine_Component_o *)this->fields.indexGrid;
        if ( v17 )
        {
          v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
          if ( v18 )
          {
            UnityEngine_GameObject__SetActive(v18, 1, 0LL);
            v19 = this->fields.indexGrid;
            if ( v19 )
            {
              ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v19->klass->vtable._8_Reposition.method)(
                v19,
                v19->klass->vtable._9_ResetPosition.methodPtr);
              return;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B170D4();
  }
  v20 = this->fields.indicator;
  if ( !v20 )
    goto LABEL_41;
  SupportSelectListViewIndicator__createSpriteList(v20, v10);
  for ( j = 0; ; j = index + 1 )
  {
    v35 = BalanceConfig_TypeInfo;
    index = j;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    indexItemSeed = this->fields.indexItemSeed;
    if ( j >= v35->static_fields->SupportDeckMax )
      break;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)indexItemSeed,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v22 )
      goto LABEL_41;
    v23 = this->fields.indexGrid;
    v24 = v22;
    v25 = UnityEngine_GameObject__get_gameObject(v22, 0LL);
    if ( !v25 )
      goto LABEL_41;
    transform = UnityEngine_GameObject__get_transform(v25, 0LL);
    if ( !v23 )
      goto LABEL_41;
    UIGrid__AddChild(v23, transform, 0LL);
    v27 = UnityEngine_GameObject__get_gameObject(v24, 0LL);
    GameObjectExtensions__ResetLocalScale(v27, 0LL);
    v28 = System_Int32__ToString((int32_t)&index, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v24, v28, 0LL);
    v29 = this->fields.indicator;
    v30 = index;
    Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v24,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v29 )
      goto LABEL_41;
    SupportSelectListViewIndicator__setPageSprite(v29, v30, Component_srcLineSprite, v32);
    v34 = this->fields.indicator;
    if ( !v34 )
      goto LABEL_41;
    SupportSelectListViewIndicator__SetPageActive(v34, index, index < deckNum, v33);
  }
  if ( !indexItemSeed )
    goto LABEL_41;
  v37 = UnityEngine_GameObject__get_gameObject(this->fields.indexItemSeed, 0LL);
  if ( !v37 )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(v37, 0, 0LL);
  v38 = this->fields.indexGrid;
  if ( !v38 )
    goto LABEL_41;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v38->klass->vtable._8_Reposition.method)(
    v38,
    v38->klass->vtable._9_ResetPosition.methodPtr);
  v40 = this->fields.indicator;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v39 = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v40 )
    goto LABEL_41;
  ((void (__fastcall *)(struct SupportSelectListViewIndicator_o *, _QWORD, Il2CppMethodPointer, long double))v40->klass->vtable._4_SetIndexMax.method)(
    v40,
    (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMax,
    v40->klass->vtable._5_OnModifyCenterItem.methodPtr,
    v39);
}


int32_t __fastcall SupportSelectMenu__getPageIdx(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectListViewIndicator_o *indicator; // x8

  indicator = this->fields.indicator;
  if ( !indicator )
    sub_B170D4();
  return indicator->fields.pageIndex;
}


void __fastcall SupportSelectMenu__moveCenterItem(
        SupportSelectMenu_o *this,
        int32_t centerIdx,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_B170D4();
  SupportSelectListViewManager__MoveCenterItem(supportSelectListViewManager, centerIdx, 0, v3);
}


void __fastcall SupportSelectMenu__onClickHelpButton(SupportSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD255 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD255 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 48, 0LL, 0LL);
}


void __fastcall SupportSelectMenu__remove_callbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SupportSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectMenu_o *v10; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FD248 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FD248 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportSelectMenu__add_dragSwapCallbackFunc(v10, v11, v12);
}


void __fastcall SupportSelectMenu__remove_dragSwapCallbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  struct SupportSelectMenu_DragSwapCallbackFunc_o **p_dragSwapCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SupportSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FD24A & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_40FD24A = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  SupportSelectMenu__Init(v10, v11);
}


void __fastcall SupportSelectMenu__setActiveDeckNameChangeButton(
        SupportSelectMenu_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *namePanelCollider; // x0

  namePanelCollider = (UnityEngine_Collider_o *)this->fields.namePanelCollider;
  if ( !namePanelCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(namePanelCollider, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu_CallbackFunc___ctor(
        SupportSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectMenu_CallbackFunc__BeginInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v13 = n;
  v14 = d;
  if ( (byte_40F7AA1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&SupportSelectMenu_ResultKind_TypeInfo, v10);
    byte_40F7AA1 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(SupportSelectMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall SupportSelectMenu_CallbackFunc__EndInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu_CallbackFunc__Invoke(
        SupportSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  SupportSelectMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  SupportSelectMenu_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  SupportSelectMenu_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (SupportSelectMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&d);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)d, (unsigned int)n, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)d, (unsigned int)n, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, v28, (unsigned int)d, (unsigned int)n, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)d,
            (unsigned int)n,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)d,
            (unsigned int)n,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)d,
      (unsigned int)n,
      v24);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu_DragSwapCallbackFunc___ctor(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectMenu_DragSwapCallbackFunc__BeginInvoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        int32_t kind,
        int32_t classPos1,
        UserServantLeaderEntity_o *leader1,
        int32_t classPos2,
        UserServantLeaderEntity_o *leader2,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v16[6]; // [xsp+0h] [xbp-70h] BYREF
  int32_t v17; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t v18; // [xsp+38h] [xbp-38h] BYREF
  int32_t v19; // [xsp+3Ch] [xbp-34h] BYREF

  v19 = kind;
  v17 = classPos2;
  v18 = classPos1;
  if ( (byte_40F7AA2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&SupportSelectRootComponent_SwapKind_TypeInfo, v14);
    byte_40F7AA2 = 1;
  }
  v16[5] = 0LL;
  v16[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_SwapKind_TypeInfo, &v19);
  v16[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v16[2] = (__int64)leader1;
  v16[3] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16[4] = (__int64)leader2;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v16, callback, object);
}


void __fastcall SupportSelectMenu_DragSwapCallbackFunc__EndInvoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu_DragSwapCallbackFunc__Invoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        int32_t kind,
        int32_t classPos1,
        UserServantLeaderEntity_o *leader1,
        int32_t classPos2,
        UserServantLeaderEntity_o *leader2,
        const MethodInfo *method)
{
  __int64 v7; // x8
  __int64 v12; // x28
  SupportSelectMenu_DragSwapCallbackFunc_o **v13; // x22
  __int64 v14; // x24
  unsigned int v15; // w27
  __int64 class_0; // x0
  __int64 v17; // x8
  unsigned int v18; // w26
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD); // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v25; // x8
  __int64 *v26; // x25
  __int64 v27; // x26
  void (__fastcall *v28)(__int64, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, __int64); // x27
  char v29; // w27
  char v30; // w0
  unsigned int v31; // w27
  __int64 v32; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  unsigned __int64 v35; // x10
  _DWORD *v36; // x11
  SupportSelectMenu_DragSwapCallbackFunc_o *v37; // [xsp+0h] [xbp-70h] BYREF
  __int64 v38; // [xsp+8h] [xbp-68h]
  unsigned int v39; // [xsp+14h] [xbp-5Ch]
  SupportSelectMenu_DragSwapCallbackFunc_o *v40; // [xsp+18h] [xbp-58h] BYREF

  v40 = this;
  v39 = kind;
  v7 = *(_QWORD *)&this[1].fields.method_ptr;
  v37 = this;
  if ( !v7 )
  {
    v13 = &v40;
    v12 = 1LL;
    goto LABEL_5;
  }
  v12 = *(_QWORD *)(v7 + 24);
  if ( v12 )
  {
    v13 = (SupportSelectMenu_DragSwapCallbackFunc_o **)(v7 + 32);
LABEL_5:
    v14 = 0LL;
    v38 = (__int64)&v37 + 4;
    while ( 1 )
    {
      v25 = v13[v14];
      v26 = *(__int64 **)&v25->fields.method;
      v27 = *(_QWORD *)&v25->fields.extra_arg;
      v28 = *(void (__fastcall **)(__int64, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, __int64))&v25->fields.method_ptr;
      if ( *(__int16 *)(v27 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v25->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&classPos1);
      if ( (sub_B1702C(v27) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v27 + 74) != 5 )
        goto LABEL_36;
      v28(v39, (unsigned int)classPos1, leader1, (unsigned int)classPos2, leader2, v27);
LABEL_38:
      if ( ++v14 == v12 )
        return;
    }
    if ( !v26 )
    {
      v28(v38, (unsigned int)classPos1, leader1, (unsigned int)classPos2, leader2, v27);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v27 + 72) != -1 && (*(_BYTE *)(*v26 + 277) & 1) == 0 && v37->fields.m_target )
    {
      v29 = sub_B17024(v27);
      v30 = sub_B17428(v27);
      if ( (v29 & 1) != 0 )
      {
        v31 = v39;
        if ( (v30 & 1) != 0 )
        {
          v32 = *v26;
          v33 = *(_QWORD *)(v27 + 24);
          v34 = *(unsigned __int16 *)(v27 + 72);
          if ( *(_WORD *)(*v26 + 298) )
          {
            v35 = 0LL;
            v36 = (_DWORD *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((_QWORD *)v36 - 1) != v33 )
            {
              ++v35;
              v36 += 4;
              if ( v35 >= *(unsigned __int16 *)(*v26 + 298) )
                goto LABEL_35;
            }
            v23 = v32 + 16LL * (*v36 + (int)v34) + 312;
          }
          else
          {
LABEL_35:
            v23 = sub_AAFEF8(v26, v33, v34);
          }
          v22 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v22 = *(_QWORD *)(*v26 + 16LL * *(unsigned __int16 *)(v27 + 72) + 320);
        }
        v24 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD))sub_B170AC(v22, v27);
        (*v24)(v26, v31, (unsigned int)classPos1, leader1, (unsigned int)classPos2, leader2, v24);
      }
      else
      {
        v15 = *(unsigned __int16 *)(v27 + 72);
        if ( (v30 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v27);
          v17 = *v26;
          v18 = v39;
          if ( *(_WORD *)(*v26 + 298) )
          {
            v19 = 0LL;
            v20 = (_DWORD *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((_QWORD *)v20 - 1) != class_0 )
            {
              ++v19;
              v20 += 4;
              if ( v19 >= *(unsigned __int16 *)(*v26 + 298) )
                goto LABEL_11;
            }
            v21 = v17 + 16LL * (int)(*v20 + v15) + 312;
          }
          else
          {
LABEL_11:
            v21 = sub_AAFEF8(v26, class_0, v15);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD))v21)(
            v26,
            v18,
            (unsigned int)classPos1,
            leader1,
            (unsigned int)classPos2,
            leader2,
            *(_QWORD *)(v21 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD))(*v26 + 16LL * *(unsigned __int16 *)(v27 + 72) + 312))(
            v26,
            v39,
            (unsigned int)classPos1,
            leader1,
            (unsigned int)classPos2,
            leader2,
            *(_QWORD *)(*v26 + 16LL * *(unsigned __int16 *)(v27 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, __int64))v28)(
      v26,
      v39,
      (unsigned int)classPos1,
      leader1,
      (unsigned int)classPos2,
      leader2,
      v27);
    goto LABEL_38;
  }
}


void __fastcall SupportSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AA0 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectMenu___c_TypeInfo, v1);
    byte_40F7AA0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SupportSelectMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SupportSelectMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SupportSelectMenu___c___ctor(SupportSelectMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SupportSelectMenu___c___SetActiveSupportApplyIcon_b__45_0(
        SupportSelectMenu___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool __fastcall SupportSelectMenu___c___SetActiveSupportApplyIcon_b__45_1(
        SupportSelectMenu___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}