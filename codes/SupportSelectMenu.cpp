void SupportSelectMenu___ctor(SupportSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C239D6 & 1) == 0 )
  {
    sub_1C2D490(&BaseMenu_TypeInfo);
    byte_4C239D6 = 1;
  }
  *(_QWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_NOT_EDIT.fields.y = 0;
  *(_OWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_EDTTING.fields.x = xmmword_C09ED0;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void SupportSelectMenu__Active(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void SupportSelectMenu__Callback(
        SupportSelectMenu_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      d,
      n,
      callbackFunc->fields.method);
}


void SupportSelectMenu__Close(SupportSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  this->fields.supportServantData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportServantData, 0, v2, v3);
  BaseMenu__Init((BaseMenu_o *)this, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


SupportSelectListViewItem_o *SupportSelectMenu__GetCenterItem(SupportSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct SupportSelectListViewIndicator_o *indicator; // x8
  SupportSelectMenu_o *v4; // x19
  const MethodInfo *v5; // x2
  SupportSelectListViewManager_o *supportSelectListViewManager; // x8
  SupportSelectListViewItem_o *v7; // x19

  indicator = this->fields.indicator;
  if ( !indicator
    || (v4 = this, (this = (SupportSelectMenu_o *)this->fields.supportSelectListViewManager) == 0)
    || (this = (SupportSelectMenu_o *)SupportSelectListViewManager__GetItem(
                                        (SupportSelectListViewManager_o *)this,
                                        indicator->fields.pageIndex,
                                        v2),
        (supportSelectListViewManager = v4->fields.supportSelectListViewManager) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  v7 = (SupportSelectListViewItem_o *)this;
  SupportSelectListViewManager__SetSurface(supportSelectListViewManager, (SupportSelectListViewItem_o *)this, v5);
  return v7;
}


void SupportSelectMenu__HideActiveSupportApplyIcon(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *applyMainQuestSupport; // x0

  applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyMainQuestSupport;
  if ( !applyMainQuestSupport )
    goto LABEL_10;
  applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(applyMainQuestSupport, 0);
  if ( !applyMainQuestSupport )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0);
  applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyMainQuestSupportFrame;
  if ( !applyMainQuestSupport
    || (applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             applyMainQuestSupport,
                                                             0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0),
        (applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyEventQuestSupport) == 0)
    || (applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             applyMainQuestSupport,
                                                             0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0),
        (applyMainQuestSupport = (UnityEngine_Component_o *)this->fields.applyEventQuestSupportFrame) == 0)
    || (applyMainQuestSupport = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             applyMainQuestSupport,
                                                             0)) == 0 )
  {
LABEL_10:
    sub_1C2D6EC(applyMainQuestSupport, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0);
}


void SupportSelectMenu__Init(SupportSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.supportServantData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportServantData, 0, v2, v3);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void SupportSelectMenu__OnClickCancel(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C239D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectMenu_OnClickCancel__);
    byte_4C239D3 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


void SupportSelectMenu__OnClickDecide(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


void SupportSelectMenu__OnClickDeckName(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C239D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectMenu_OnClickDeckName__);
    byte_4C239D2 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickDeckName__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickDeckName__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_OnClickDeckName__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      5,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


void SupportSelectMenu__OnClickGrandListInfoButton(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C239D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectMenu_OnClickGrandListInfoButton__);
    byte_4C239D5 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickGrandListInfoButton__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickGrandListInfoButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_OnClickGrandListInfoButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      11,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


void SupportSelectMenu__OnClickSupportEdit(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C239D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectMenu_OnClickSupportEdit__);
    byte_4C239D0 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickSupportEdit__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickSupportEdit__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_OnClickSupportEdit__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      7,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


void SupportSelectMenu__OnClickSwap(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4C239D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectMenu_OnClickSwap__);
    byte_4C239D1 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickSwap__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickSwap__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_OnClickSwap__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, __int64, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      6,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
}


void SupportSelectMenu__OnClickTab(
        SupportSelectMenu_o *this,
        UnityEngine_GameObject_o *idxSprite,
        const MethodInfo *method)
{
  SupportSelectMenu_o *v4; // x19
  System_String_o *name; // x0
  int32_t v6; // w0
  _QWORD *v7; // x8
  int32_t v8; // w20
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4C239CF & 1) == 0 )
  {
    this = (SupportSelectMenu_o *)sub_1C2D490(&Method_SupportSelectMenu_OnClickTab__);
    byte_4C239CF = 1;
  }
  if ( !idxSprite )
    goto LABEL_8;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)idxSprite, 0);
  v6 = System_Int32__Parse(name, 0);
  v7 = Method_SupportSelectMenu_OnClickTab__;
  v8 = v6;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickTab__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_OnClickTab__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
  this = (SupportSelectMenu_o *)v4->fields.supportSelectListViewManager;
  if ( !this )
LABEL_8:
    sub_1C2D6EC(this, idxSprite);
  SupportSelectListViewManager__MoveCenterItem((SupportSelectListViewManager_o *)this, v8, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__Open(
        SupportSelectMenu_o *this,
        SupportServantData_array *supportServantData,
        int32_t mainDeckIdx,
        SupportSelectMenu_CallbackFunc_o *callback,
        SupportSelectMenu_DragSwapCallbackFunc_o *dragSwapCallbackFunc,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct SupportServantData_array **p_supportServantData; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // w0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x5
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x23
  __int64 v22; // x2
  bool v23; // w8
  struct SupportServantData_array *v24; // x8
  SupportServantData_o *v25; // x8
  float v26; // s1 OVERLAPPED
  int v27; // s0
  int v28; // s2
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1

  if ( (byte_4C239CA & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_SupportServantData___);
    byte_4C239CA = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    mainDeckIdx,
    (const MethodInfo *)callback);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dragSwapCallbackFunc, (int32_t)dragSwapCallbackFunc, v11, v12);
  p_supportServantData = &this->fields.supportServantData;
  this->fields.supportServantData = supportServantData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)supportServantData, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v18 = System_Linq_Enumerable__Count_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
          (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  SupportSelectMenu__createIndexItem(this, v18, v19);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager;
  if ( !gameObject )
    goto LABEL_20;
  SupportSelectListViewManager__CreateList(
    (SupportSelectListViewManager_o *)gameObject,
    supportServantData,
    mainDeckIdx,
    this->fields.callbackFunc,
    dragSwapCallbackFunc,
    v20);
  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
                                             (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  if ( (int)gameObject >= 3 )
  {
    if ( !supportServantData )
      goto LABEL_20;
    if ( LODWORD(supportServantData->max_length) <= 2 )
LABEL_21:
      sub_1C2D6F4(gameObject, v17, v22);
    v23 = supportServantData->m_Items[2] != 0;
  }
  else
  {
    v23 = 0;
  }
  if ( !supportSelectListViewManager
    || (supportSelectListViewManager->fields.isLoop = v23,
        (gameObject = (UnityEngine_GameObject_o *)this->fields.indexGrid) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0)) == 0
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0),
        (v24 = *p_supportServantData) == 0) )
  {
LABEL_20:
    sub_1C2D6EC(gameObject, v17);
  }
  if ( !LODWORD(v24->max_length) )
    goto LABEL_21;
  v25 = v24->m_Items[0];
  if ( !v25 || !gameObject )
    goto LABEL_20;
  v26 = 278.0;
  if ( v25->fields.isFriendInfo )
    v26 = -215.0;
  v27 = 0;
  v28 = 0;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    *(UnityEngine_Vector3_o *)(&v26 - 1),
    0);
  SupportSelectMenu__moveCenterItem(this, mainDeckIdx, v29);
  SupportSelectMenu__Redisp(this, v30);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void SupportSelectMenu__Redisp(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0)
    || (SupportSelectListViewManager__clearItem((SupportSelectListViewManager_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0)
    || (SupportSelectListViewManager__setItem((SupportSelectListViewManager_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0) )
  {
    sub_1C2D6EC(gameObject, v4);
  }
  SupportSelectListViewManager__reDisp((SupportSelectListViewManager_o *)gameObject, v4);
}


void SupportSelectMenu__Reset(SupportSelectMenu_o *this, int32_t classPos, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  SupportSelectListViewIndicator_o *indicator; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager;
  if ( !gameObject
    || (SupportSelectListViewManager__clearItem((SupportSelectListViewManager_o *)gameObject, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0)
    || (SupportSelectListViewManager__setItem((SupportSelectListViewManager_o *)gameObject, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager) == 0)
    || (SupportSelectListViewManager__reDisp((SupportSelectListViewManager_o *)gameObject, v5),
        indicator = this->fields.indicator,
        gameObject = (UnityEngine_GameObject_o *)SupportSelectMenu__GetCenterItem(this, v7),
        !indicator) )
  {
LABEL_7:
    sub_1C2D6EC(gameObject, v5);
  }
  SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)gameObject, v8);
}


void SupportSelectMenu__SetAbleToSwapDrag(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x19
  bool v4; // w1
  SupportSelectListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_1C2D6EC(this, flag);
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
void SupportSelectMenu__SetActiveCurrentSupportSprite(
        SupportSelectMenu_o *this,
        bool mainQuestActive,
        bool eventQuestActive,
        int32_t mainNo,
        int32_t eventNo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentMainQuestSupportSprite; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UISprite_o *v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UISprite_o *currentEventQuestSupportSprite; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C239CC & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_20182/*"icon_event_2_{0}"*/);
    sub_1C2D490(&StringLiteral_20181/*"icon_event_2"*/);
    sub_1C2D490(&StringLiteral_20180/*"icon_event_1_{0}"*/);
    sub_1C2D490(&StringLiteral_20179/*"icon_event_1"*/);
    byte_4C239CC = 1;
  }
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentMainQuestSupportSprite;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               currentMainQuestSupportSprite,
                                                               0);
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMainQuestSupportSprite, mainQuestActive, 0);
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentEventQuestSupportSprite;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               currentMainQuestSupportSprite,
                                                               0);
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMainQuestSupportSprite, eventQuestActive, 0);
  v15 = this->fields.currentMainQuestSupportSprite;
  if ( mainNo )
  {
    v25 = mainNo;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_20182/*"icon_event_2_{0}"*/,
                                                                 v16,
                                                                 0);
    if ( !v15 )
      goto LABEL_24;
    v17 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !v15 )
      goto LABEL_24;
    v17 = (System_String_o *)StringLiteral_20181/*"icon_event_2"*/;
  }
  UISprite__set_spriteName(v15, v17, 0);
  currentEventQuestSupportSprite = this->fields.currentEventQuestSupportSprite;
  if ( eventNo )
  {
    v24 = eventNo;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v18, v19, v20);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_20180/*"icon_event_1_{0}"*/,
                                                                 v22,
                                                                 0);
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v23 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v23 = (System_String_o *)StringLiteral_20179/*"icon_event_1"*/;
  }
  UISprite__set_spriteName(currentEventQuestSupportSprite, v23, 0);
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  UIGrid__GetChildList((UIGrid_o *)currentMainQuestSupportSprite, 0);
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !currentMainQuestSupportSprite )
    goto LABEL_24;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)currentMainQuestSupportSprite, 0) )
    return;
  currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid;
  if ( !currentMainQuestSupportSprite
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)currentMainQuestSupportSprite, 1, 0),
        (currentMainQuestSupportSprite = (UnityEngine_Component_o *)this->fields.currentSupportDeckSpriteGrid) == 0) )
  {
LABEL_24:
    sub_1C2D6EC(currentMainQuestSupportSprite, mainQuestActive);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))currentMainQuestSupportSprite->klass[1]._1.element_class)(
    currentMainQuestSupportSprite,
    currentMainQuestSupportSprite->klass[1]._1.castClass);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetActiveFixDeckButton(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *fixMainQuestFrameSprite; // x0
  __int64 v6; // x2
  struct UIButton_array *fixMainQuestSupportDeckButtons; // x21
  int max_length; // w8
  unsigned int v9; // w22
  struct UIButton_array *fixEventQuestSupportDeckButtons; // x20
  int v11; // w8
  unsigned int v12; // w21

  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixMainQuestFrameSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(fixMainQuestFrameSprite, 0);
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixEventQuestFrameSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(fixMainQuestFrameSprite, 0);
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)this->fields.fixBaseSprite;
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(fixMainQuestFrameSprite, 0);
  if ( !fixMainQuestFrameSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
  fixMainQuestSupportDeckButtons = this->fields.fixMainQuestSupportDeckButtons;
  if ( !fixMainQuestSupportDeckButtons )
    goto LABEL_22;
  max_length = fixMainQuestSupportDeckButtons->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < max_length )
    {
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)fixMainQuestSupportDeckButtons->m_Items[v9];
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             fixMainQuestFrameSprite,
                                                             0);
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
      max_length = fixMainQuestSupportDeckButtons->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_14;
    }
LABEL_23:
    sub_1C2D6F4(fixMainQuestFrameSprite, active, v6);
  }
LABEL_14:
  fixEventQuestSupportDeckButtons = this->fields.fixEventQuestSupportDeckButtons;
  if ( !fixEventQuestSupportDeckButtons )
LABEL_22:
    sub_1C2D6EC(fixMainQuestFrameSprite, active);
  v11 = fixEventQuestSupportDeckButtons->max_length;
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( v12 < v11 )
    {
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)fixEventQuestSupportDeckButtons->m_Items[v12];
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             fixMainQuestFrameSprite,
                                                             0);
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
      v11 = fixEventQuestSupportDeckButtons->max_length;
      if ( (int)++v12 >= v11 )
        return;
    }
    goto LABEL_23;
  }
}


void SupportSelectMenu__SetActiveHeader(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *headerObject; // x0

  headerObject = this->fields.headerObject;
  if ( !headerObject )
    sub_1C2D6EC(0, active);
  UnityEngine_GameObject__SetActive(headerObject, active, 0);
}


void SupportSelectMenu__SetActiveSupportApplyIcon(
        SupportSelectMenu_o *this,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        const MethodInfo *method)
{
  int32_t v9; // w0
  SupportSelectMenu___c_c *v10; // x8
  int32_t v11; // w23
  System_Func_int__bool__o *_9__47_0; // x24
  Il2CppObject *v13; // x25
  struct SupportSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  int v20; // w22
  bool v21; // w1
  int32_t v22; // w0
  SupportSelectMenu___c_c *v23; // x8
  int32_t v24; // w21
  System_Func_int__bool__o *_9__47_1; // x22
  Il2CppObject *v26; // x23
  struct SupportSelectMenu___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  int v31; // w20
  bool v32; // w1

  if ( (byte_4C239CB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_0__);
    sub_1C2D490(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_1__);
    sub_1C2D490(&SupportSelectMenu___c_TypeInfo);
    byte_4C239CB = 1;
  }
  v9 = System_Array__IndexOf_int_(
         fixMainDeckIds,
         nowDeckId,
         (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
  v10 = SupportSelectMenu___c_TypeInfo;
  v11 = v9;
  if ( !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v10 = SupportSelectMenu___c_TypeInfo;
  }
  _9__47_0 = v10->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SupportSelectMenu___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__47_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__47_0, v13, Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_0__, 0);
    static_fields = SupportSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = _9__47_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__47_0, (int32_t)_9__47_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixMainDeckIds,
          (System_Func_TSource__bool__o *)_9__47_0,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v17,
                                             (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyMainQuestSupport )
    goto LABEL_40;
  v20 = (int)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyMainQuestSupport, 0);
  if ( !gameObject )
    goto LABEL_40;
  if ( v11 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v20 < 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    v21 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_40;
    v21 = 1;
  }
  UnityEngine_GameObject__SetActive(gameObject, v21, 0);
  v22 = System_Array__IndexOf_int_(
          fixEventDeckIds,
          nowDeckId,
          (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
  v23 = SupportSelectMenu___c_TypeInfo;
  v24 = v22;
  if ( !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v23 = SupportSelectMenu___c_TypeInfo;
  }
  _9__47_1 = v23->static_fields->__9__47_1;
  if ( !_9__47_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = SupportSelectMenu___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__47_1 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__47_1, v26, Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_1__, 0);
    v27 = SupportSelectMenu___c_TypeInfo->static_fields;
    v27->__9__47_1 = _9__47_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v27->__9__47_1, (int32_t)_9__47_1, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixEventDeckIds,
          (System_Func_TSource__bool__o *)_9__47_1,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v30,
                                             (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyEventQuestSupport
    || (v31 = (int)gameObject,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.applyEventQuestSupport,
                        0)) == 0) )
  {
LABEL_40:
    sub_1C2D6EC(gameObject, v19);
  }
  if ( v24 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v31 < 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        v32 = 0;
        goto LABEL_33;
      }
    }
    goto LABEL_40;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  v32 = 1;
LABEL_33:
  UnityEngine_GameObject__SetActive(gameObject, v32, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  UIGrid__GetChildList((UIGrid_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.element_class)(
    gameObject,
    gameObject->klass[1]._1.castClass);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetFixDeckButton(
        SupportSelectMenu_o *this,
        int32_t currentId,
        bool isEventButton,
        System_Int32_array *fixDeckIds,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x9
  int v10; // w24
  unsigned int v11; // w8
  __int64 v12; // x28
  int32_t v13; // w29
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  struct UISprite_array *fixEventQuestSupportDeckLabelSprites; // x8
  struct UISprite_array *fixEventQuestSupportDeckFrameSprites; // x9
  UISprite_o *v18; // x23
  int32_t v19; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C239CE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_17599/*"btn_txt_set0_1"*/);
    sub_1C2D490(&StringLiteral_17600/*"btn_txt_set{0}_1"*/);
    byte_4C239CE = 1;
  }
  gameObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    gameObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  }
  v9 = 196;
  if ( isEventButton )
    v9 = 200;
  v10 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + v9);
  if ( v10 >= 1 )
  {
    if ( !fixDeckIds )
LABEL_27:
      sub_1C2D6EC(gameObject, *(_QWORD *)&currentId);
    v11 = 0;
    do
    {
      if ( v11 >= LODWORD(fixDeckIds->max_length) )
LABEL_28:
        sub_1C2D6F4(gameObject, *(_QWORD *)&currentId, isEventButton);
      v12 = (int)v11;
      v13 = fixDeckIds->m_Items[v11];
      if ( v13 )
      {
        v19 = fixDeckIds->m_Items[v11];
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, isEventButton, fixDeckIds, method);
        gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_17600/*"btn_txt_set{0}_1"*/, v14, 0);
        v15 = (System_String_o *)gameObject;
        if ( isEventButton )
          goto LABEL_13;
      }
      else
      {
        v15 = (System_String_o *)StringLiteral_17599/*"btn_txt_set0_1"*/;
        if ( isEventButton )
        {
LABEL_13:
          fixEventQuestSupportDeckLabelSprites = this->fields.fixEventQuestSupportDeckLabelSprites;
          if ( !fixEventQuestSupportDeckLabelSprites )
            goto LABEL_27;
          if ( (unsigned int)v12 >= LODWORD(fixEventQuestSupportDeckLabelSprites->max_length) )
            goto LABEL_28;
          fixEventQuestSupportDeckFrameSprites = this->fields.fixEventQuestSupportDeckFrameSprites;
          if ( !fixEventQuestSupportDeckFrameSprites )
            goto LABEL_27;
          goto LABEL_21;
        }
      }
      fixEventQuestSupportDeckLabelSprites = this->fields.fixMainQuestSupportDeckLabelSprites;
      if ( !fixEventQuestSupportDeckLabelSprites )
        goto LABEL_27;
      if ( (unsigned int)v12 >= LODWORD(fixEventQuestSupportDeckLabelSprites->max_length) )
        goto LABEL_28;
      fixEventQuestSupportDeckFrameSprites = this->fields.fixMainQuestSupportDeckFrameSprites;
      if ( !fixEventQuestSupportDeckFrameSprites )
        goto LABEL_27;
LABEL_21:
      if ( (unsigned int)v12 >= LODWORD(fixEventQuestSupportDeckFrameSprites->max_length) )
        goto LABEL_28;
      gameObject = (UnityEngine_Component_o *)fixEventQuestSupportDeckFrameSprites->m_Items[v12];
      if ( !gameObject )
        goto LABEL_27;
      v18 = fixEventQuestSupportDeckLabelSprites->m_Items[v12];
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13 != 0, 0);
      if ( !v18 )
        goto LABEL_27;
      UISprite__set_spriteName(v18, v15, 0);
      gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))v18->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                v18,
                                                v18->klass->vtable._33_MakePixelPerfect.method);
      v11 = v12 + 1;
    }
    while ( v10 != (_DWORD)v12 + 1 );
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetGrandListInfoButton(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *grandListInfoButton; // x0
  UISprite_o *grandListInfoButtonSprite; // x19

  if ( (byte_4C239CD & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17524/*"btn_supportform_grand"*/);
    byte_4C239CD = 1;
  }
  grandListInfoButton = (UnityEngine_Component_o *)this->fields.grandListInfoButton;
  if ( !grandListInfoButton
    || (grandListInfoButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grandListInfoButton, 0)) == 0 )
  {
    sub_1C2D6EC(grandListInfoButton, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandListInfoButton, active, 0);
  grandListInfoButtonSprite = this->fields.grandListInfoButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(grandListInfoButtonSprite, (System_String_o *)StringLiteral_17524/*"btn_supportform_grand"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetupFooterButtons(SupportSelectMenu_o *this, bool isEditting, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_15;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !helpButton )
    goto LABEL_15;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditting, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !helpButton )
    goto LABEL_15;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.editButton;
  v6 = 116;
  if ( isEditting )
  {
    v6 = 104;
    v7 = 100;
  }
  else
  {
    v7 = 112;
  }
  v8 = 108;
  if ( isEditting )
    v8 = 96;
  if ( !helpButton
    || (v9 = *(float *)((char *)&this->klass + v8),
        v10 = *(float *)((char *)&this->klass + v7),
        v11 = *(float *)((char *)&this->klass + v6),
        (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(helpButton, 0)) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(helpButton, isEditting);
  }
  v12.fields.x = v9;
  v12.fields.y = v10;
  v12.fields.z = v11;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)helpButton, v12, 0);
}


void SupportSelectMenu__add_callbackFunc(
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

  if ( (byte_4C239C5 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4C239C5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  SupportSelectMenu__remove_callbackFunc(v10, v11, v12);
}


void SupportSelectMenu__add_dragSwapCallbackFunc(
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

  if ( (byte_4C239C7 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4C239C7 = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  SupportSelectMenu__remove_dragSwapCallbackFunc(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__buttonDispSetting(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  bool v6; // w20
  const MethodInfo *v7; // x2

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_12;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !helpButton )
    goto LABEL_12;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0),
        (helpButton = (UnityEngine_Component_o *)this->fields.editButton) == 0)
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0),
        (helpButton = (UnityEngine_Component_o *)this->fields.cancelButton) == 0)
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
  {
LABEL_12:
    sub_1C2D6EC(helpButton, flag);
  }
  v6 = flag;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, v6, 0);
  SupportSelectMenu__SetActiveFixDeckButton(this, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__createIndexItem(SupportSelectMenu_o *this, int32_t deckNum, const MethodInfo *method)
{
  UnityEngine_Component_o *indexGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x3
  int32_t i; // w21
  BalanceConfig_c *v9; // x0
  int32_t j; // w22
  Il2CppObject *indexItemSeed; // x21
  UIGrid_o *v12; // x22
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x0
  System_String_o *v15; // x0
  SupportSelectListViewIndicator_o *indicator; // x22
  int32_t v17; // w23
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  long double inited; // q0
  struct SupportSelectListViewIndicator_o *v21; // x19
  int32_t index; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C239C9 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C239C9 = 1;
  }
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(indexGrid, 0);
  if ( GameObjectExtensions__HasChild(gameObject, 0) )
  {
    for ( i = 0; ; ++i )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( i >= v9->static_fields->SupportDeckMax )
        break;
      indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
      if ( !indexGrid )
        goto LABEL_38;
      SupportSelectListViewIndicator__SetPageActive((SupportSelectListViewIndicator_o *)indexGrid, i, i < deckNum, v7);
    }
    indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
    if ( indexGrid )
    {
      indexGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(indexGrid, 0);
      if ( indexGrid )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 0, 0);
        indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
        if ( indexGrid )
        {
          indexGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(indexGrid, 0);
          if ( indexGrid )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 1, 0);
            indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
            if ( indexGrid )
            {
              ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexGrid->klass[1]._1.element_class)(
                indexGrid,
                indexGrid->klass[1]._1.castClass);
              return;
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C2D6EC(indexGrid, *(_QWORD *)&deckNum);
  }
  indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
  if ( !indexGrid )
    goto LABEL_38;
  SupportSelectListViewIndicator__createSpriteList(
    (SupportSelectListViewIndicator_o *)indexGrid,
    *(const MethodInfo **)&deckNum);
  for ( j = 0; ; j = index + 1 )
  {
    indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    index = j;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    indexItemSeed = (Il2CppObject *)this->fields.indexItemSeed;
    if ( j >= *(_DWORD *)(indexGrid[7].fields.m_CachedPtr + 168) )
      break;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    indexGrid = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                             indexItemSeed,
                                             (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !indexGrid )
      goto LABEL_38;
    v12 = this->fields.indexGrid;
    v13 = (UnityEngine_GameObject_o *)indexGrid;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0);
    if ( !indexGrid )
      goto LABEL_38;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0);
    if ( !v12 )
      goto LABEL_38;
    UIGrid__AddChild(v12, (UnityEngine_Transform_o *)indexGrid, 0);
    v14 = UnityEngine_GameObject__get_gameObject(v13, 0);
    GameObjectExtensions__ResetLocalScale(v14, 0);
    v15 = System_Int32__ToString((int32_t)&index, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, v15, 0);
    indicator = this->fields.indicator;
    v17 = index;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v13,
                                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !indicator )
      goto LABEL_38;
    SupportSelectListViewIndicator__setPageSprite(indicator, v17, (UISprite_o *)indexGrid, v18);
    indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
    if ( !indexGrid )
      goto LABEL_38;
    SupportSelectListViewIndicator__SetPageActive(
      (SupportSelectListViewIndicator_o *)indexGrid,
      index,
      index < deckNum,
      v19);
  }
  if ( !indexItemSeed )
    goto LABEL_38;
  indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.indexItemSeed, 0);
  if ( !indexGrid )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 0, 0);
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_38;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexGrid->klass[1]._1.element_class)(
    indexGrid,
    indexGrid->klass[1]._1.castClass);
  indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  v21 = this->fields.indicator;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v21 )
    goto LABEL_38;
  ((void (__fastcall *)(struct SupportSelectListViewIndicator_o *, _QWORD, const MethodInfo *, long double))v21->klass->vtable._4_SetIndexMax.methodPtr)(
    v21,
    (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMax,
    v21->klass->vtable._4_SetIndexMax.method,
    inited);
}


int32_t SupportSelectMenu__getPageIdx(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectListViewIndicator_o *indicator; // x8

  indicator = this->fields.indicator;
  if ( !indicator )
    sub_1C2D6EC(this, method);
  return indicator->fields.pageIndex;
}


void SupportSelectMenu__moveCenterItem(SupportSelectMenu_o *this, int32_t centerIdx, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_1C2D6EC(0, centerIdx);
  SupportSelectListViewManager__MoveCenterItem(supportSelectListViewManager, centerIdx, 0, v3);
}


void SupportSelectMenu__onClickHelpButton(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C239D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectMenu_onClickHelpButton__);
    byte_4C239D4 = 1;
  }
  v2 = Method_SupportSelectMenu_onClickHelpButton__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_onClickHelpButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectMenu_onClickHelpButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C2D474(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 48, 0, 0, 0);
}


void SupportSelectMenu__remove_callbackFunc(
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

  if ( (byte_4C239C6 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_4C239C6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v7->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  SupportSelectMenu__add_dragSwapCallbackFunc(v10, v11, v12);
}


void SupportSelectMenu__remove_dragSwapCallbackFunc(
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

  if ( (byte_4C239C8 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_4C239C8 = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  p_dragSwapCallbackFunc = &this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v7->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  SupportSelectMenu__Init(v10, v11);
}


void SupportSelectMenu__setActiveDeckNameChangeButton(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Collider_o *namePanelCollider; // x0

  namePanelCollider = (UnityEngine_Collider_o *)this->fields.namePanelCollider;
  if ( !namePanelCollider )
    sub_1C2D6EC(0, active);
  UnityEngine_Collider__set_enabled(namePanelCollider, active, 0);
}


void SupportSelectMenu_CallbackFunc___ctor(
        SupportSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E800;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E7A0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *SupportSelectMenu_CallbackFunc__BeginInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = d;
  v21 = result;
  v19 = n;
  if ( (byte_4C239D7 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&SupportSelectMenu_ResultKind_TypeInfo);
    byte_4C239D7 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(SupportSelectMenu_ResultKind_TypeInfo, &v21, *(_QWORD *)&d, *(_QWORD *)&n, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void SupportSelectMenu_CallbackFunc__EndInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void SupportSelectMenu_CallbackFunc__Invoke(
        SupportSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    d,
    n,
    this->fields.method);
}


void SupportSelectMenu_DragSwapCallbackFunc___ctor(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 5 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E8A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E82C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *SupportSelectMenu_DragSwapCallbackFunc__BeginInvoke(
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  _QWORD v21[4]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v22; // [xsp+20h] [xbp-70h]
  int32_t v23; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+48h] [xbp-48h] BYREF
  int32_t v25; // [xsp+4Ch] [xbp-44h] BYREF

  v24 = classPos1;
  v25 = kind;
  v23 = classPos2;
  if ( (byte_4C239D8 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&SupportSelectRootComponent_SwapKind_TypeInfo);
    byte_4C239D8 = 1;
  }
  v22 = 0u;
  v21[0] = j_il2cpp_value_box_0(
             SupportSelectRootComponent_SwapKind_TypeInfo,
             &v25,
             *(_QWORD *)&classPos1,
             leader1,
             *(_QWORD *)&classPos2);
  v21[1] = j_il2cpp_value_box_0(int_TypeInfo, &v24, v14, v15, v16);
  v21[2] = leader1;
  v21[3] = j_il2cpp_value_box_0(int_TypeInfo, &v23, v17, v18, v19);
  *(_QWORD *)&v22 = leader2;
  return (System_IAsyncResult_o *)sub_1C2D444(this, v21, callback, object);
}


void SupportSelectMenu_DragSwapCallbackFunc__EndInvoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void SupportSelectMenu_DragSwapCallbackFunc__Invoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        int32_t kind,
        int32_t classPos1,
        UserServantLeaderEntity_o *leader1,
        int32_t classPos2,
        UserServantLeaderEntity_o *leader2,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, UserServantLeaderEntity_o *, int32_t, UserServantLeaderEntity_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    classPos1,
    leader1,
    classPos2,
    leader2,
    this->fields.method);
}


void SupportSelectMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C239D9 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectMenu___c_TypeInfo);
    byte_4C239D9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SupportSelectMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SupportSelectMenu___c_TypeInfo->static_fields->__9 = (struct SupportSelectMenu___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SupportSelectMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SupportSelectMenu___c___ctor(SupportSelectMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectMenu___c___SetActiveSupportApplyIcon_b__47_0(
        SupportSelectMenu___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectMenu___c___SetActiveSupportApplyIcon_b__47_1(
        SupportSelectMenu___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}