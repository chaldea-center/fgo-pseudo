void __fastcall SupportSelectMenu___ctor(SupportSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418ABD8 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418ABD8 = 1;
  }
  *(_QWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_NOT_EDIT.fields.y = 0LL;
  *(_OWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_EDTTING.fields.x = xmmword_31B3CE0;
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportSelectMenu__Active(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
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
  SupportSelectMenu_o *v4; // x19
  const MethodInfo *v5; // x2
  SupportSelectListViewManager_o *supportSelectListViewManager; // x8
  SupportSelectListViewItem_o *v7; // x19

  indicator = this->fields.indicator;
  if ( !indicator
    || (v4 = this, (this = (SupportSelectMenu_o *)this->fields.supportSelectListViewManager) == 0LL)
    || (this = (SupportSelectMenu_o *)SupportSelectListViewManager__GetItem(
                                        (SupportSelectListViewManager_o *)this,
                                        indicator->fields.pageIndex,
                                        v2),
        (supportSelectListViewManager = v4->fields.supportSelectListViewManager) == 0LL) )
  {
    sub_B2C434(this, method);
  }
  v7 = (SupportSelectListViewItem_o *)this;
  SupportSelectListViewManager__SetSurface(supportSelectListViewManager, (SupportSelectListViewItem_o *)this, v5);
  return v7;
}


void __fastcall SupportSelectMenu__HideActiveSupportApplyIcon(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *applyMainQuestSupport; // x0

  applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyMainQuestSupport;
  if ( !applyMainQuestSupport )
    goto LABEL_10;
  applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(applyMainQuestSupport, 0LL);
  if ( !applyMainQuestSupport )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0LL);
  applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyMainQuestSupportFrame;
  if ( !applyMainQuestSupport
    || (applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             applyMainQuestSupport,
                                                             0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0LL),
        (applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyEventQuestSupport) == 0LL)
    || (applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             applyMainQuestSupport,
                                                             0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0LL),
        (applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyEventQuestSupportFrame) == 0LL)
    || (applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             applyMainQuestSupport,
                                                             0LL)) == 0LL )
  {
LABEL_10:
    sub_B2C434(applyMainQuestSupport, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportSelectMenu__OnClickCancel(SupportSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectMenu_CallbackFunc_o *callbackFunc; // x0

  if ( (byte_418ABD6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ABD6 = 1;
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

  if ( (byte_418ABD5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ABD5 = 1;
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

  if ( (byte_418ABD3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ABD3 = 1;
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

  if ( (byte_418ABD4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ABD4 = 1;
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
  SupportSelectMenu_o *v4; // x19
  System_String_o *name; // x0
  int32_t v6; // w20
  const MethodInfo *v7; // x3

  v4 = this;
  if ( (byte_418ABD2 & 1) == 0 )
  {
    this = (SupportSelectMenu_o *)sub_B2C35C(&SoundManager_TypeInfo, idxSprite);
    byte_418ABD2 = 1;
  }
  if ( !idxSprite )
    goto LABEL_9;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)idxSprite, 0LL);
  v6 = System_Int32__Parse(name, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(7, 0LL);
  this = (SupportSelectMenu_o *)v4->fields.supportSelectListViewManager;
  if ( !this )
LABEL_9:
    sub_B2C434(this, idxSprite);
  SupportSelectListViewManager__MoveCenterItem((SupportSelectListViewManager_o *)this, v6, 1, v7);
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
  __int64 v27; // x1
  int32_t v28; // w0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x5
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x23
  bool v32; // w8
  struct SupportServantData_array *v33; // x8
  SupportServantData_o *v34; // x8
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  __int64 v37; // x0
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418ABCE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_SupportServantData___, supportServantData);
    byte_418ABCE = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&mainDeckIdx,
    (System_String_array **)callback,
    (System_Boolean_array **)dragSwapCallbackFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  v28 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
          (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  SupportSelectMenu__createIndexItem(this, v28, v29);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager;
  if ( !gameObject )
    goto LABEL_18;
  SupportSelectListViewManager__CreateList(
    (SupportSelectListViewManager_o *)gameObject,
    supportServantData,
    mainDeckIdx,
    this->fields.callbackFunc,
    dragSwapCallbackFunc,
    v30);
  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
                                             (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  if ( (int)gameObject >= 3 )
  {
    if ( !supportServantData )
      goto LABEL_18;
    if ( supportServantData->max_length <= 2 )
    {
LABEL_19:
      v37 = sub_B2C460(gameObject);
      sub_B2C400(v37, 0LL);
    }
    v32 = supportServantData->m_Items[2] != 0LL;
    if ( !supportSelectListViewManager )
      goto LABEL_18;
  }
  else
  {
    v32 = 0;
    if ( !supportSelectListViewManager )
      goto LABEL_18;
  }
  supportSelectListViewManager->fields.isLoop = v32;
  gameObject = (UnityEngine_GameObject_o *)this->fields.indexGrid;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL),
        (v33 = *p_supportServantData) == 0LL) )
  {
LABEL_18:
    sub_B2C434(gameObject, v27);
  }
  if ( !v33->max_length )
    goto LABEL_19;
  v34 = v33->m_Items[0];
  if ( !v34 || !gameObject )
    goto LABEL_18;
  v38.fields.x = 0.0;
  LODWORD(v38.fields.y) = dword_31B3CD8[!v34->fields.isFriendInfo];
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v38, 0LL);
  SupportSelectMenu__moveCenterItem(this, mainDeckIdx, v35);
  SupportSelectMenu__Redisp(this, v36);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall SupportSelectMenu__Redisp(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__clearItem((SupportSelectListViewManager_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__setItem((SupportSelectListViewManager_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0LL) )
  {
    sub_B2C434(gameObject, v4);
  }
  SupportSelectListViewManager__reDisp((SupportSelectListViewManager_o *)gameObject, v4);
}


void __fastcall SupportSelectMenu__Reset(SupportSelectMenu_o *this, int32_t classPos, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  SupportSelectListViewIndicator_o *indicator; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager;
  if ( !gameObject
    || (SupportSelectListViewManager__clearItem((SupportSelectListViewManager_o *)gameObject, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__setItem((SupportSelectListViewManager_o *)gameObject, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0LL)
    || (SupportSelectListViewManager__reDisp((SupportSelectListViewManager_o *)gameObject, v5),
        indicator = this->fields.indicator,
        gameObject = (UnityEngine_GameObject_o *)SupportSelectMenu__GetCenterItem(this, v7),
        !indicator) )
  {
LABEL_7:
    sub_B2C434(gameObject, v5);
  }
  SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)gameObject, v8);
}


void __fastcall SupportSelectMenu__SetAbleToSwapDrag(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x19
  bool v4; // w1
  SupportSelectListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_B2C434(this, flag);
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
  UISprite_o *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x1
  UISprite_o *currentEventQuestSupportSprite; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x1
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418ABD0 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, mainQuestActive);
    sub_B2C35C(&StringLiteral_19338/*"icon_event_2_{0}"*/, v11);
    sub_B2C35C(&StringLiteral_19337/*"icon_event_2"*/, v12);
    sub_B2C35C(&StringLiteral_19336/*"icon_event_1_{0}"*/, v13);
    sub_B2C35C(&StringLiteral_19335/*"icon_event_1"*/, v14);
    byte_418ABD0 = 1;
  }
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentMainQuestSupportSprite;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               currentMainQuestSupportSprite,
                                                               0LL);
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMainQuestSupportSprite, mainQuestActive, 0LL);
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentEventQuestSupportSprite;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               currentMainQuestSupportSprite,
                                                               0LL);
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMainQuestSupportSprite, eventQuestActive, 0LL);
  v16 = this->fields.currentMainQuestSupportSprite;
  if ( mainNo )
  {
    v23 = mainNo;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_19338/*"icon_event_2_{0}"*/,
                                                                 v17,
                                                                 0LL);
    if ( !v16 )
      goto LABEL_24;
    v18 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !v16 )
      goto LABEL_24;
    v18 = (System_String_o *)StringLiteral_19337/*"icon_event_2"*/;
  }
  UISprite__set_spriteName(v16, v18, 0LL);
  currentEventQuestSupportSprite = this->fields.currentEventQuestSupportSprite;
  if ( eventNo )
  {
    v22 = eventNo;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_19336/*"icon_event_1_{0}"*/,
                                                                 v20,
                                                                 0LL);
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v21 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v21 = (System_String_o *)StringLiteral_19335/*"icon_event_1"*/;
  }
  UISprite__set_spriteName(currentEventQuestSupportSprite, v21, 0LL);
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  UIGrid__GetChildList((UIGrid_o *)currentMainQuestSupportSprite, 0LL);
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)currentMainQuestSupportSprite, 0LL) )
    return;
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !currentMainQuestSupportSprite
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)currentMainQuestSupportSprite, 1, 0LL),
        (currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid) == 0LL) )
  {
LABEL_24:
    sub_B2C434(currentMainQuestSupportSprite, mainQuestActive);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))currentMainQuestSupportSprite->klass[1]._1.castClass)(
    currentMainQuestSupportSprite,
    currentMainQuestSupportSprite->klass[1]._1.declaringType);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__SetActiveFixDeckButton(
        SupportSelectMenu_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *fixMainQuestFrameSprite; // x0
  struct UIButton_array *fixMainQuestSupportDeckButtons; // x21
  int max_length; // w8
  unsigned int v8; // w22
  struct UIButton_array *fixEventQuestSupportDeckButtons; // x20
  int v10; // w8
  unsigned int v11; // w21
  __int64 v12; // x0

  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixMainQuestFrameSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         fixMainQuestFrameSprite,
                                                         0LL);
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0LL);
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixEventQuestFrameSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         fixMainQuestFrameSprite,
                                                         0LL);
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0LL);
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixBaseSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         fixMainQuestFrameSprite,
                                                         0LL);
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0LL);
  fixMainQuestSupportDeckButtons = this->fields.fixMainQuestSupportDeckButtons;
  if ( !fixMainQuestSupportDeckButtons )
    goto LABEL_22;
  max_length = fixMainQuestSupportDeckButtons->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < max_length )
    {
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)fixMainQuestSupportDeckButtons->m_Items[v8];
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             fixMainQuestFrameSprite,
                                                             0LL);
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0LL);
      max_length = fixMainQuestSupportDeckButtons->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_14;
    }
LABEL_23:
    v12 = sub_B2C460(fixMainQuestFrameSprite);
    sub_B2C400(v12, 0LL);
  }
LABEL_14:
  fixEventQuestSupportDeckButtons = this->fields.fixEventQuestSupportDeckButtons;
  if ( !fixEventQuestSupportDeckButtons )
LABEL_22:
    sub_B2C434(fixMainQuestFrameSprite, active);
  v10 = fixEventQuestSupportDeckButtons->max_length;
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( v11 < v10 )
    {
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)fixEventQuestSupportDeckButtons->m_Items[v11];
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             fixMainQuestFrameSprite,
                                                             0LL);
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0LL);
      v10 = fixEventQuestSupportDeckButtons->max_length;
      if ( (int)++v11 >= v10 )
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
    sub_B2C434(0LL, active);
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
  int32_t v16; // w23
  SupportSelectMenu___c_c *v17; // x8
  struct SupportSelectMenu___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__45_0; // x24
  Il2CppObject *v20; // x25
  struct SupportSelectMenu___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  int v31; // w22
  bool v32; // w1
  int32_t v33; // w0
  SupportSelectMenu___c_c *v34; // x8
  int32_t v35; // w21
  struct SupportSelectMenu___c_StaticFields *v36; // x9
  System_Func_int__bool__o *_9__45_1; // x22
  Il2CppObject *v38; // x23
  struct SupportSelectMenu___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  int v47; // w20
  bool v48; // w1

  if ( (byte_418ABCF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&nowDeckId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v11);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v12);
    sub_B2C35C(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_0__, v13);
    sub_B2C35C(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_1__, v14);
    sub_B2C35C(&SupportSelectMenu___c_TypeInfo, v15);
    byte_418ABCF = 1;
  }
  v16 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  v17 = SupportSelectMenu___c_TypeInfo;
  if ( (BYTE3(SupportSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v17 = SupportSelectMenu___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__45_0 = static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = SupportSelectMenu___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__45_0,
      v20,
      Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v21 = SupportSelectMenu___c_TypeInfo->static_fields;
    v21->__9__45_0 = _9__45_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixMainDeckIds,
          (System_Func_TSource__bool__o *)_9__45_0,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v28,
                                             (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyMainQuestSupport )
    goto LABEL_44;
  v31 = (int)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyMainQuestSupport, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  if ( v16 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v31 < 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    v32 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_44;
    v32 = 1;
  }
  UnityEngine_GameObject__SetActive(gameObject, v32, 0LL);
  v33 = System_Array__IndexOf_int_(
          fixEventDeckIds,
          nowDeckId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  v34 = SupportSelectMenu___c_TypeInfo;
  v35 = v33;
  if ( (BYTE3(SupportSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v34 = SupportSelectMenu___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__45_1 = v36->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v36 = SupportSelectMenu___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__45_1 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__45_1,
      v38,
      Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_1__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v39 = SupportSelectMenu___c_TypeInfo->static_fields;
    v39->__9__45_1 = _9__45_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v39->__9__45_1,
      (System_Int32_array **)_9__45_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  v46 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixEventDeckIds,
          (System_Func_TSource__bool__o *)_9__45_1,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v46,
                                             (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyEventQuestSupport
    || (v47 = (int)gameObject,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.applyEventQuestSupport,
                        0LL)) == 0LL) )
  {
LABEL_44:
    sub_B2C434(gameObject, v30);
  }
  if ( v35 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v47 < 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        v48 = 0;
        goto LABEL_37;
      }
    }
    goto LABEL_44;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
  if ( !gameObject )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  v48 = 1;
LABEL_37:
  UnityEngine_GameObject__SetActive(gameObject, v48, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  UIGrid__GetChildList((UIGrid_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  System_String_o *gameObject; // x0
  int *v12; // x8
  int v13; // w24
  __int64 i; // x25
  int32_t v15; // w27
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  struct UISprite_array *fixEventQuestSupportDeckLabelSprites; // x9
  struct UISprite_array *fixEventQuestSupportDeckFrameSprites; // x8
  UISprite_o *v20; // x23
  __int64 v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418ABD1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&currentId);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_17093/*"btn_txt_set0_1"*/, v9);
    sub_B2C35C(&StringLiteral_17094/*"btn_txt_set{0}_1"*/, v10);
    byte_418ABD1 = 1;
  }
  gameObject = (System_String_o *)BalanceConfig_TypeInfo;
  if ( isEventButton )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      gameObject = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = (int *)(*(_QWORD *)&gameObject[7].fields + 176LL);
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      gameObject = (System_String_o *)BalanceConfig_TypeInfo;
    }
    v12 = (int *)(*(_QWORD *)&gameObject[7].fields + 172LL);
  }
  v13 = *v12;
  if ( *v12 >= 1 )
  {
    if ( !fixDeckIds )
LABEL_32:
      sub_B2C434(gameObject, *(_QWORD *)&currentId);
    for ( i = 0LL; (int)i < v13; ++i )
    {
      if ( (unsigned int)i >= fixDeckIds->max_length )
      {
LABEL_33:
        v21 = sub_B2C460(gameObject);
        sub_B2C400(v21, 0LL);
      }
      v15 = fixDeckIds->m_Items[i + 1];
      if ( v15 )
      {
        v22 = fixDeckIds->m_Items[i + 1];
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
        gameObject = System_String__Format((System_String_o *)StringLiteral_17094/*"btn_txt_set{0}_1"*/, v16, 0LL);
        v17 = gameObject;
        if ( isEventButton )
          goto LABEL_18;
      }
      else
      {
        v17 = (System_String_o *)StringLiteral_17093/*"btn_txt_set0_1"*/;
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
      gameObject = (System_String_o *)fixEventQuestSupportDeckFrameSprites->m_Items[i];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v15 != 0, 0LL);
      if ( !v20 )
        goto LABEL_32;
      UISprite__set_spriteName(v20, v17, 0LL);
      gameObject = (System_String_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
                                        v20,
                                        v20->klass->vtable._34_get_minWidth.methodPtr);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__SetupFooterButtons(
        SupportSelectMenu_o *this,
        bool isEditting,
        const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  __int64 v6; // x8
  __int64 v7; // x10
  __int64 v8; // x9
  float v9; // s8
  float v10; // s10
  float v11; // s9
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_16;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !helpButton )
    goto LABEL_16;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditting, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !helpButton )
    goto LABEL_16;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.editButton;
  v6 = 100LL;
  v7 = 104LL;
  if ( isEditting )
    v6 = 88LL;
  if ( isEditting )
    v7 = 92LL;
  v8 = 108LL;
  if ( isEditting )
    v8 = 96LL;
  if ( !helpButton
    || (v9 = *(float *)((char *)&this->klass + v7),
        v10 = *(float *)((char *)&this->klass + v6),
        v11 = *(float *)((char *)&this->klass + v8),
        (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(helpButton, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B2C434(helpButton, isEditting);
  }
  v12.fields.y = v9;
  v12.fields.z = v11;
  v12.fields.x = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)helpButton, v12, 0LL);
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

  if ( (byte_418ABC9 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418ABC9 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418ABCB & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_418ABCB = 1;
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
    v8 = sub_B20D74(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  SupportSelectMenu__remove_dragSwapCallbackFunc(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu__buttonDispSetting(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  bool v6; // w20
  const MethodInfo *v7; // x2

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_12;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !helpButton )
    goto LABEL_12;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0LL),
        (helpButton = (UnityEngine_Component_o *)this->fields.editButton) == 0LL)
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0LL),
        (helpButton = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL)
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
  {
LABEL_12:
    sub_B2C434(helpButton, flag);
  }
  v6 = flag;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, v6, 0LL);
  SupportSelectMenu__SetActiveFixDeckButton(this, v6, v7);
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
  const MethodInfo *v10; // x3
  int32_t i; // w21
  BalanceConfig_c *v12; // x0
  int32_t j; // w22
  UIGrid_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  System_String_o *v17; // x0
  SupportSelectListViewIndicator_o *indicator; // x22
  int32_t v19; // w23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  struct UnityEngine_GameObject_o *indexItemSeed; // x21
  long double v23; // q0
  struct SupportSelectListViewIndicator_o *v24; // x19
  int32_t index; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418ABCD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNum);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418ABCD = 1;
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
      v12 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( i >= v12->static_fields->SupportDeckMax )
        break;
      indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
      if ( !indexGrid )
        goto LABEL_41;
      SupportSelectListViewIndicator__SetPageActive((SupportSelectListViewIndicator_o *)indexGrid, i, i < deckNum, v10);
    }
    indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
    if ( indexGrid )
    {
      indexGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(indexGrid, 0LL);
      if ( indexGrid )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 0, 0LL);
        indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
        if ( indexGrid )
        {
          indexGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(indexGrid, 0LL);
          if ( indexGrid )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 1, 0LL);
            indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
            if ( indexGrid )
            {
              ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexGrid->klass[1]._1.castClass)(
                indexGrid,
                indexGrid->klass[1]._1.declaringType);
              return;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B2C434(indexGrid, *(_QWORD *)&deckNum);
  }
  indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
  if ( !indexGrid )
    goto LABEL_41;
  SupportSelectListViewIndicator__createSpriteList(
    (SupportSelectListViewIndicator_o *)indexGrid,
    *(const MethodInfo **)&deckNum);
  for ( j = 0; ; j = index + 1 )
  {
    indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    index = j;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    indexItemSeed = this->fields.indexItemSeed;
    if ( j >= *(_DWORD *)(*(_QWORD *)&indexGrid[7].fields.m_CachedPtr + 152LL) )
      break;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    indexGrid = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)indexItemSeed,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !indexGrid )
      goto LABEL_41;
    v14 = this->fields.indexGrid;
    v15 = (UnityEngine_GameObject_o *)indexGrid;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0LL);
    if ( !indexGrid )
      goto LABEL_41;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0LL);
    if ( !v14 )
      goto LABEL_41;
    UIGrid__AddChild(v14, (UnityEngine_Transform_o *)indexGrid, 0LL);
    v16 = UnityEngine_GameObject__get_gameObject(v15, 0LL);
    GameObjectExtensions__ResetLocalScale(v16, 0LL);
    v17 = System_Int32__ToString((int32_t)&index, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, v17, 0LL);
    indicator = this->fields.indicator;
    v19 = index;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v15,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !indicator )
      goto LABEL_41;
    SupportSelectListViewIndicator__setPageSprite(indicator, v19, (UISprite_o *)indexGrid, v20);
    indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
    if ( !indexGrid )
      goto LABEL_41;
    SupportSelectListViewIndicator__SetPageActive(
      (SupportSelectListViewIndicator_o *)indexGrid,
      index,
      index < deckNum,
      v21);
  }
  if ( !indexItemSeed )
    goto LABEL_41;
  indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.indexItemSeed, 0LL);
  if ( !indexGrid )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 0, 0LL);
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_41;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexGrid->klass[1]._1.castClass)(
    indexGrid,
    indexGrid->klass[1]._1.declaringType);
  indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  v24 = this->fields.indicator;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v24 )
    goto LABEL_41;
  ((void (__fastcall *)(struct SupportSelectListViewIndicator_o *, _QWORD, Il2CppMethodPointer, long double))v24->klass->vtable._4_SetIndexMax.method)(
    v24,
    (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMax,
    v24->klass->vtable._5_OnModifyCenterItem.methodPtr,
    v23);
}


int32_t __fastcall SupportSelectMenu__getPageIdx(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectListViewIndicator_o *indicator; // x8

  indicator = this->fields.indicator;
  if ( !indicator )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, centerIdx);
  SupportSelectListViewManager__MoveCenterItem(supportSelectListViewManager, centerIdx, 0, v3);
}


void __fastcall SupportSelectMenu__onClickHelpButton(SupportSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418ABD7 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418ABD7 = 1;
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

  if ( (byte_418ABCA & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418ABCA = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418ABCC & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_418ABCC = 1;
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
    v8 = sub_B20D74(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
    sub_B2C434(0LL, active);
  UnityEngine_Collider__set_enabled(namePanelCollider, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu_CallbackFunc___ctor(
        SupportSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41847D2 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&SupportSelectMenu_ResultKind_TypeInfo, v10);
    byte_41847D2 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(SupportSelectMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall SupportSelectMenu_CallbackFunc__EndInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  SupportSelectMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  SupportSelectMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&d, *(_QWORD *)&n);
      if ( (sub_B2C38C(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)d, (unsigned int)n, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)d, (unsigned int)n, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
        (*v22)(v24, v30, (unsigned int)d, (unsigned int)n, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AC5258(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)d,
            (unsigned int)n,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)d,
            (unsigned int)n,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)d,
      (unsigned int)n,
      v25);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41847D3 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&SupportSelectRootComponent_SwapKind_TypeInfo, v14);
    byte_41847D3 = 1;
  }
  v16[5] = 0LL;
  v16[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_SwapKind_TypeInfo, &v19);
  v16[1] = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v16[2] = (__int64)leader1;
  v16[3] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16[4] = (__int64)leader2;
  return (System_IAsyncResult_o *)sub_B2C300(this, v16, callback, object);
}


void __fastcall SupportSelectMenu_DragSwapCallbackFunc__EndInvoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v17; // x3
  __int64 v18; // x8
  unsigned int v19; // w26
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD); // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v26; // x8
  __int64 *v27; // x25
  __int64 v28; // x26
  void (__fastcall *v29)(__int64, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, __int64); // x27
  char v30; // w27
  char v31; // w0
  __int64 v32; // x3
  unsigned int v33; // w27
  __int64 v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  unsigned __int64 v37; // x10
  _DWORD *v38; // x11
  SupportSelectMenu_DragSwapCallbackFunc_o *v39; // [xsp+0h] [xbp-70h] BYREF
  __int64 v40; // [xsp+8h] [xbp-68h]
  unsigned int v41; // [xsp+14h] [xbp-5Ch]
  SupportSelectMenu_DragSwapCallbackFunc_o *v42; // [xsp+18h] [xbp-58h] BYREF

  v42 = this;
  v41 = kind;
  v7 = *(_QWORD *)&this[1].fields.method_ptr;
  v39 = this;
  if ( !v7 )
  {
    v13 = &v42;
    v12 = 1LL;
    goto LABEL_5;
  }
  v12 = *(_QWORD *)(v7 + 24);
  if ( v12 )
  {
    v13 = (SupportSelectMenu_DragSwapCallbackFunc_o **)(v7 + 32);
LABEL_5:
    v14 = 0LL;
    v40 = (__int64)&v39 + 4;
    while ( 1 )
    {
      v26 = v13[v14];
      v27 = *(__int64 **)&v26->fields.method;
      v28 = *(_QWORD *)&v26->fields.extra_arg;
      v29 = *(void (__fastcall **)(__int64, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, __int64))&v26->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v26->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&classPos1, leader1);
      if ( (sub_B2C38C(v28) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v28 + 74) != 5 )
        goto LABEL_36;
      v29(v41, (unsigned int)classPos1, leader1, (unsigned int)classPos2, leader2, v28);
LABEL_38:
      if ( ++v14 == v12 )
        return;
    }
    if ( !v27 )
    {
      v29(v40, (unsigned int)classPos1, leader1, (unsigned int)classPos2, leader2, v28);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v27 + 277) & 1) == 0 && v39->fields.m_target )
    {
      v30 = sub_B2C384(v28);
      v31 = sub_B2C788(v28);
      if ( (v30 & 1) != 0 )
      {
        v33 = v41;
        if ( (v31 & 1) != 0 )
        {
          v34 = *v27;
          v35 = *(_QWORD *)(v28 + 24);
          v36 = *(unsigned __int16 *)(v28 + 72);
          if ( *(_WORD *)(*v27 + 298) )
          {
            v37 = 0LL;
            v38 = (_DWORD *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((_QWORD *)v38 - 1) != v35 )
            {
              ++v37;
              v38 += 4;
              if ( v37 >= *(unsigned __int16 *)(*v27 + 298) )
                goto LABEL_35;
            }
            v24 = v34 + 16LL * (*v38 + (int)v36) + 312;
          }
          else
          {
LABEL_35:
            v24 = sub_AC5258(v27, v35, v36, v32);
          }
          v23 = *(_QWORD *)(v24 + 8);
        }
        else
        {
          v23 = *(_QWORD *)(*v27 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
        }
        v25 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD))sub_B2C40C(v23, v28);
        (*v25)(v27, v33, (unsigned int)classPos1, leader1, (unsigned int)classPos2, leader2, v25);
      }
      else
      {
        v15 = *(unsigned __int16 *)(v28 + 72);
        if ( (v31 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v28);
          v18 = *v27;
          v19 = v41;
          if ( *(_WORD *)(*v27 + 298) )
          {
            v20 = 0LL;
            v21 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((_QWORD *)v21 - 1) != class_0 )
            {
              ++v20;
              v21 += 4;
              if ( v20 >= *(unsigned __int16 *)(*v27 + 298) )
                goto LABEL_11;
            }
            v22 = v18 + 16LL * (int)(*v21 + v15) + 312;
          }
          else
          {
LABEL_11:
            v22 = sub_AC5258(v27, class_0, v15, v17);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD))v22)(
            v27,
            v19,
            (unsigned int)classPos1,
            leader1,
            (unsigned int)classPos2,
            leader2,
            *(_QWORD *)(v22 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, _QWORD))(*v27 + 16LL * *(unsigned __int16 *)(v28 + 72) + 312))(
            v27,
            v41,
            (unsigned int)classPos1,
            leader1,
            (unsigned int)classPos2,
            leader2,
            *(_QWORD *)(*v27 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, UserServantLeaderEntity_o *, _QWORD, UserServantLeaderEntity_o *, __int64))v29)(
      v27,
      v41,
      (unsigned int)classPos1,
      leader1,
      (unsigned int)classPos2,
      leader2,
      v28);
    goto LABEL_38;
  }
}


void __fastcall SupportSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SupportSelectMenu___c_StaticFields *static_fields; // x0

  if ( (byte_41847D1 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectMenu___c_TypeInfo, v1);
    byte_41847D1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SupportSelectMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SupportSelectMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SupportSelectMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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