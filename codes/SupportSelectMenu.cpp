void __fastcall SupportSelectMenu___ctor(SupportSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A6C83E & 1) == 0 )
  {
    sub_1B90010(&BaseMenu_TypeInfo, method);
    byte_4A6C83E = 1;
  }
  *(_QWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_NOT_EDIT.fields.y = 0LL;
  *(_OWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_EDTTING.fields.x = xmmword_BB7C90;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportSelectMenu__Active(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall SupportSelectMenu__Callback(
        SupportSelectMenu_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      d,
      n,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectMenu__Close(SupportSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  this->fields.supportServantData = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, 0, v2, v3);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
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
    sub_1B9026C(this, method);
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
    sub_1B9026C(applyMainQuestSupport, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0LL);
}


void __fastcall SupportSelectMenu__Init(SupportSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.supportServantData = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, 0, v2, v3);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportSelectMenu__OnClickCancel(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4A6C83C & 1) == 0 )
  {
    sub_1B90010(&Method_SupportSelectMenu_OnClickCancel__, method);
    byte_4A6C83C = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_SupportSelectMenu_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectMenu__OnClickDecide(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectMenu__OnClickDeckName(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4A6C83B & 1) == 0 )
  {
    sub_1B90010(&Method_SupportSelectMenu_OnClickDeckName__, method);
    byte_4A6C83B = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickDeckName__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickDeckName__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_SupportSelectMenu_OnClickDeckName__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      5LL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectMenu__OnClickSupportEdit(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4A6C839 & 1) == 0 )
  {
    sub_1B90010(&Method_SupportSelectMenu_OnClickSupportEdit__, method);
    byte_4A6C839 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickSupportEdit__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickSupportEdit__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_SupportSelectMenu_OnClickSupportEdit__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      7LL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectMenu__OnClickSwap(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4A6C83A & 1) == 0 )
  {
    sub_1B90010(&Method_SupportSelectMenu_OnClickSwap__, method);
    byte_4A6C83A = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickSwap__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickSwap__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_SupportSelectMenu_OnClickSwap__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, __int64, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      6LL,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportSelectMenu__OnClickTab(
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
  if ( (byte_4A6C838 & 1) == 0 )
  {
    this = (SupportSelectMenu_o *)sub_1B90010(&Method_SupportSelectMenu_OnClickTab__, idxSprite);
    byte_4A6C838 = 1;
  }
  if ( !idxSprite )
    goto LABEL_8;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)idxSprite, 0LL);
  v6 = System_Int32__Parse(name, 0LL);
  v7 = Method_SupportSelectMenu_OnClickTab__;
  v8 = v6;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickTab__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B90028(Method_SupportSelectMenu_OnClickTab__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0LL);
  this = (SupportSelectMenu_o *)v4->fields.supportSelectListViewManager;
  if ( !this )
LABEL_8:
    sub_1B9026C(this, idxSprite);
  SupportSelectListViewManager__MoveCenterItem((SupportSelectListViewManager_o *)this, v8, 1, v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct SupportServantData_array **p_supportServantData; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // w0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x5
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x23
  bool v22; // w8
  struct SupportServantData_array *v23; // x8
  SupportServantData_o *v24; // x8
  float v25; // s1
  int v26; // s0
  int v27; // s2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1

  if ( (byte_4A6C834 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Count_SupportServantData___, supportServantData);
    byte_4A6C834 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    mainDeckIdx,
    (int32_t)callback);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.dragSwapCallbackFunc,
    (int32_t)dragSwapCallbackFunc,
    v11,
    v12);
  p_supportServantData = &this->fields.supportServantData;
  this->fields.supportServantData = supportServantData;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    v14,
    v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v18 = System_Linq_Enumerable__Count_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
          (const MethodInfo_2EAB334 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
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
                                             (const MethodInfo_2EAB334 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  if ( (int)gameObject >= 3 )
  {
    if ( !supportServantData )
      goto LABEL_20;
    if ( supportServantData->max_length <= 2 )
LABEL_21:
      sub_1B90274(gameObject, v17);
    v22 = supportServantData->m_Items[2] != 0LL;
  }
  else
  {
    v22 = 0;
  }
  if ( !supportSelectListViewManager
    || (supportSelectListViewManager->fields.isLoop = v22,
        (gameObject = (UnityEngine_GameObject_o *)this->fields.indexGrid) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0LL)) == 0LL
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL),
        (v23 = *p_supportServantData) == 0LL) )
  {
LABEL_20:
    sub_1B9026C(gameObject, v17);
  }
  if ( !v23->max_length )
    goto LABEL_21;
  v24 = v23->m_Items[0];
  if ( !v24 || !gameObject )
    goto LABEL_20;
  v25 = 278.0;
  if ( v24->fields.isFriendInfo )
    v25 = -215.0;
  v26 = 0;
  v27 = 0;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    *(UnityEngine_Vector3_o *)(&v25 - 1),
    0LL);
  SupportSelectMenu__moveCenterItem(this, mainDeckIdx, v28);
  SupportSelectMenu__Redisp(this, v29);
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
    sub_1B9026C(gameObject, v4);
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
    sub_1B9026C(gameObject, v5);
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
    sub_1B9026C(this, flag);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  UISprite_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UISprite_o *currentEventQuestSupportSprite; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x1
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A6C836 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, mainQuestActive);
    sub_1B90010(&StringLiteral_20175/*"icon_event_2_{0}"*/, v11);
    sub_1B90010(&StringLiteral_20174/*"icon_event_2"*/, v12);
    sub_1B90010(&StringLiteral_20173/*"icon_event_1_{0}"*/, v13);
    sub_1B90010(&StringLiteral_20172/*"icon_event_1"*/, v14);
    byte_4A6C836 = 1;
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
  v19 = this->fields.currentMainQuestSupportSprite;
  if ( mainNo )
  {
    v29 = mainNo;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v16, v17, v18);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_20175/*"icon_event_2_{0}"*/,
                                                                 v20,
                                                                 0LL);
    if ( !v19 )
      goto LABEL_24;
    v21 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !v19 )
      goto LABEL_24;
    v21 = (System_String_o *)StringLiteral_20174/*"icon_event_2"*/;
  }
  UISprite__set_spriteName(v19, v21, 0LL);
  currentEventQuestSupportSprite = this->fields.currentEventQuestSupportSprite;
  if ( eventNo )
  {
    v28 = eventNo;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v22, v23, v24);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_20173/*"icon_event_1_{0}"*/,
                                                                 v26,
                                                                 0LL);
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v27 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v27 = (System_String_o *)StringLiteral_20172/*"icon_event_1"*/;
  }
  UISprite__set_spriteName(currentEventQuestSupportSprite, v27, 0LL);
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
    sub_1B9026C(currentMainQuestSupportSprite, mainQuestActive);
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
    sub_1B90274(fixMainQuestFrameSprite, active);
  }
LABEL_14:
  fixEventQuestSupportDeckButtons = this->fields.fixEventQuestSupportDeckButtons;
  if ( !fixEventQuestSupportDeckButtons )
LABEL_22:
    sub_1B9026C(fixMainQuestFrameSprite, active);
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
    sub_1B9026C(0LL, active);
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
  int32_t v15; // w0
  SupportSelectMenu___c_c *v16; // x8
  int32_t v17; // w23
  System_Func_int__bool__o *_9__45_0; // x24
  Il2CppObject *v19; // x25
  struct SupportSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  int v26; // w22
  bool v27; // w1
  int32_t v28; // w0
  SupportSelectMenu___c_c *v29; // x8
  int32_t v30; // w21
  System_Func_int__bool__o *_9__45_1; // x22
  Il2CppObject *v32; // x23
  struct SupportSelectMenu___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  int v37; // w20
  bool v38; // w1

  if ( (byte_4A6C835 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_IndexOf_int___, *(_QWORD *)&nowDeckId);
    sub_1B90010(&Method_System_Linq_Enumerable_Count_int___, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v11);
    sub_1B90010(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_0__, v12);
    sub_1B90010(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_1__, v13);
    sub_1B90010(&SupportSelectMenu___c_TypeInfo, v14);
    byte_4A6C835 = 1;
  }
  v15 = System_Array__IndexOf_int_(
          fixMainDeckIds,
          nowDeckId,
          (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___);
  v16 = SupportSelectMenu___c_TypeInfo;
  v17 = v15;
  if ( !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v16 = SupportSelectMenu___c_TypeInfo;
  }
  _9__45_0 = v16->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = SupportSelectMenu___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__45_0 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__45_0, v19, Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_0__, 0LL);
    static_fields = SupportSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = _9__45_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v21, v22);
  }
  v23 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixMainDeckIds,
          (System_Func_TSource__bool__o *)_9__45_0,
          (const MethodInfo_2ECC658 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v23,
                                             (const MethodInfo_2EAAF68 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyMainQuestSupport )
    goto LABEL_40;
  v26 = (int)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyMainQuestSupport, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  if ( v17 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v26 < 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_40;
    v27 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_40;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_40;
    v27 = 1;
  }
  UnityEngine_GameObject__SetActive(gameObject, v27, 0LL);
  v28 = System_Array__IndexOf_int_(
          fixEventDeckIds,
          nowDeckId,
          (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___);
  v29 = SupportSelectMenu___c_TypeInfo;
  v30 = v28;
  if ( !SupportSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo);
    v29 = SupportSelectMenu___c_TypeInfo;
  }
  _9__45_1 = v29->static_fields->__9__45_1;
  if ( !_9__45_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = SupportSelectMenu___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__45_1 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__45_1, v32, Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__45_1__, 0LL);
    v33 = SupportSelectMenu___c_TypeInfo->static_fields;
    v33->__9__45_1 = _9__45_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v33->__9__45_1, (int32_t)_9__45_1, v34, v35);
  }
  v36 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixEventDeckIds,
          (System_Func_TSource__bool__o *)_9__45_1,
          (const MethodInfo_2ECC658 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v36,
                                             (const MethodInfo_2EAAF68 *)Method_System_Linq_Enumerable_Count_int___);
  if ( !this->fields.applyEventQuestSupport
    || (v37 = (int)gameObject,
        (gameObject = UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.applyEventQuestSupport,
                        0LL)) == 0LL) )
  {
LABEL_40:
    sub_1B9026C(gameObject, v25);
  }
  if ( v30 + 1 < 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, v37 < 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        v38 = 0;
        goto LABEL_33;
      }
    }
    goto LABEL_40;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  v38 = 1;
LABEL_33:
  UnityEngine_GameObject__SetActive(gameObject, v38, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  UIGrid__GetChildList((UIGrid_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_40;
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
  __int64 v12; // x9
  int v13; // w24
  il2cpp_array_size_t v14; // w8
  __int64 v15; // x28
  int32_t v16; // w29
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  struct UISprite_array *fixEventQuestSupportDeckLabelSprites; // x8
  struct UISprite_array *fixEventQuestSupportDeckFrameSprites; // x9
  UISprite_o *v21; // x23
  int32_t v22; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A6C837 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, *(_QWORD *)&currentId);
    sub_1B90010(&int_TypeInfo, v8);
    sub_1B90010(&StringLiteral_17642/*"btn_txt_set0_1"*/, v9);
    sub_1B90010(&StringLiteral_17643/*"btn_txt_set{0}_1"*/, v10);
    byte_4A6C837 = 1;
  }
  gameObject = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    gameObject = (System_String_o *)BalanceConfig_TypeInfo;
  }
  v12 = 180LL;
  if ( isEventButton )
    v12 = 184LL;
  v13 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields + v12);
  if ( v13 >= 1 )
  {
    if ( !fixDeckIds )
LABEL_27:
      sub_1B9026C(gameObject, *(_QWORD *)&currentId);
    v14 = 0;
    do
    {
      if ( v14 >= fixDeckIds->max_length )
LABEL_28:
        sub_1B90274(gameObject, *(_QWORD *)&currentId);
      v15 = (int)v14;
      v16 = fixDeckIds->m_Items[v14 + 1];
      if ( v16 )
      {
        v22 = fixDeckIds->m_Items[v14 + 1];
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, isEventButton, fixDeckIds, method);
        gameObject = System_String__Format((System_String_o *)StringLiteral_17643/*"btn_txt_set{0}_1"*/, v17, 0LL);
        v18 = gameObject;
        if ( isEventButton )
          goto LABEL_13;
      }
      else
      {
        v18 = (System_String_o *)StringLiteral_17642/*"btn_txt_set0_1"*/;
        if ( isEventButton )
        {
LABEL_13:
          fixEventQuestSupportDeckLabelSprites = this->fields.fixEventQuestSupportDeckLabelSprites;
          if ( !fixEventQuestSupportDeckLabelSprites )
            goto LABEL_27;
          if ( (unsigned int)v15 >= fixEventQuestSupportDeckLabelSprites->max_length )
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
      if ( (unsigned int)v15 >= fixEventQuestSupportDeckLabelSprites->max_length )
        goto LABEL_28;
      fixEventQuestSupportDeckFrameSprites = this->fields.fixMainQuestSupportDeckFrameSprites;
      if ( !fixEventQuestSupportDeckFrameSprites )
        goto LABEL_27;
LABEL_21:
      if ( (unsigned int)v15 >= fixEventQuestSupportDeckFrameSprites->max_length )
        goto LABEL_28;
      gameObject = (System_String_o *)fixEventQuestSupportDeckFrameSprites->m_Items[v15];
      if ( !gameObject )
        goto LABEL_27;
      v21 = fixEventQuestSupportDeckLabelSprites->m_Items[v15];
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_27;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16 != 0, 0LL);
      if ( !v21 )
        goto LABEL_27;
      UISprite__set_spriteName(v21, v18, 0LL);
      gameObject = (System_String_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v21->klass->vtable._33_MakePixelPerfect.method)(
                                        v21,
                                        v21->klass->vtable._34_get_minWidth.methodPtr);
      v14 = v15 + 1;
    }
    while ( v13 != (_DWORD)v15 + 1 );
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
  __int64 v7; // x9
  __int64 v8; // x10
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton )
    goto LABEL_17;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !helpButton )
    goto LABEL_17;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditting, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !helpButton )
    goto LABEL_17;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL);
  if ( !helpButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0LL);
  helpButton = (UnityEngine_Component_o *)this->fields.editButton;
  v6 = 116LL;
  if ( isEditting )
    v6 = 104LL;
  v7 = isEditting ? 100LL : 112LL;
  v8 = 108LL;
  if ( isEditting )
    v8 = 96LL;
  if ( !helpButton
    || (v9 = *(float *)((char *)&this->klass + v8),
        v10 = *(float *)((char *)&this->klass + v7),
        v11 = *(float *)((char *)&this->klass + v6),
        (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(helpButton, 0LL)) == 0LL) )
  {
LABEL_17:
    sub_1B9026C(helpButton, isEditting);
  }
  v12.fields.x = v9;
  v12.fields.y = v10;
  v12.fields.z = v11;
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

  if ( (byte_4A6C82F & 1) == 0 )
  {
    sub_1B90010(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A6C82F = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6C831 & 1) == 0 )
  {
    sub_1B90010(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_4A6C831 = 1;
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
    v8 = sub_1BCB500(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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
    sub_1B9026C(helpButton, flag);
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
  Il2CppObject *indexItemSeed; // x21
  UIGrid_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_GameObject_o *v17; // x0
  System_String_o *v18; // x0
  SupportSelectListViewIndicator_o *indicator; // x22
  int32_t v20; // w23
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  long double inited; // q0
  struct SupportSelectListViewIndicator_o *v24; // x19
  int32_t index; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A6C833 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNum);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A6C833 = 1;
  }
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(indexGrid, 0LL);
  if ( GameObjectExtensions__HasChild(gameObject, 0LL) )
  {
    for ( i = 0; ; ++i )
    {
      v12 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v12 = BalanceConfig_TypeInfo;
      }
      if ( i >= v12->static_fields->SupportDeckMax )
        break;
      indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
      if ( !indexGrid )
        goto LABEL_38;
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
LABEL_38:
    sub_1B9026C(indexGrid, *(_QWORD *)&deckNum);
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
    if ( j >= *(_DWORD *)(*(_QWORD *)&indexGrid[7].fields.m_CachedPtr + 152LL) )
      break;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    indexGrid = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                             indexItemSeed,
                                             (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !indexGrid )
      goto LABEL_38;
    v15 = this->fields.indexGrid;
    v16 = (UnityEngine_GameObject_o *)indexGrid;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0LL);
    if ( !indexGrid )
      goto LABEL_38;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0LL);
    if ( !v15 )
      goto LABEL_38;
    UIGrid__AddChild(v15, (UnityEngine_Transform_o *)indexGrid, 0LL);
    v17 = UnityEngine_GameObject__get_gameObject(v16, 0LL);
    GameObjectExtensions__ResetLocalScale(v17, 0LL);
    v18 = System_Int32__ToString((int32_t)&index, 0LL);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, v18, 0LL);
    indicator = this->fields.indicator;
    v20 = index;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v16,
                                             (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !indicator )
      goto LABEL_38;
    SupportSelectListViewIndicator__setPageSprite(indicator, v20, (UISprite_o *)indexGrid, v21);
    indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
    if ( !indexGrid )
      goto LABEL_38;
    SupportSelectListViewIndicator__SetPageActive(
      (SupportSelectListViewIndicator_o *)indexGrid,
      index,
      index < deckNum,
      v22);
  }
  if ( !indexItemSeed )
    goto LABEL_38;
  indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.indexItemSeed, 0LL);
  if ( !indexGrid )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 0, 0LL);
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_38;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexGrid->klass[1]._1.castClass)(
    indexGrid,
    indexGrid->klass[1]._1.declaringType);
  indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  v24 = this->fields.indicator;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v24 )
    goto LABEL_38;
  ((void (__fastcall *)(struct SupportSelectListViewIndicator_o *, _QWORD, Il2CppMethodPointer, long double))v24->klass->vtable._4_SetIndexMax.method)(
    v24,
    (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMax,
    v24->klass->vtable._5_OnModifyCenterItem.methodPtr,
    inited);
}


int32_t __fastcall SupportSelectMenu__getPageIdx(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectListViewIndicator_o *indicator; // x8

  indicator = this->fields.indicator;
  if ( !indicator )
    sub_1B9026C(this, method);
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
    sub_1B9026C(0LL, centerIdx);
  SupportSelectListViewManager__MoveCenterItem(supportSelectListViewManager, centerIdx, 0, v3);
}


void __fastcall SupportSelectMenu__onClickHelpButton(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A6C83D & 1) == 0 )
  {
    sub_1B90010(&Method_SupportSelectMenu_onClickHelpButton__, method);
    byte_4A6C83D = 1;
  }
  v2 = Method_SupportSelectMenu_onClickHelpButton__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_onClickHelpButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B90028(Method_SupportSelectMenu_onClickHelpButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
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

  if ( (byte_4A6C830 & 1) == 0 )
  {
    sub_1B90010(&SupportSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A6C830 = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6C832 & 1) == 0 )
  {
    sub_1B90010(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, value);
    byte_4A6C832 = 1;
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
    v8 = sub_1BCB500(p_dragSwapCallbackFunc, v7, dragSwapCallbackFunc);
    v9 = dragSwapCallbackFunc == (System_Delegate_o *)v8;
    dragSwapCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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
    sub_1B9026C(0LL, active);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D2614;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D25B4;
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = d;
  v22 = result;
  v20 = n;
  if ( (byte_4A6C83F & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B90010(&SupportSelectMenu_ResultKind_TypeInfo, v10);
    byte_4A6C83F = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(SupportSelectMenu_ResultKind_TypeInfo, &v22, *(_QWORD *)&d, *(_QWORD *)&n, callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v18, callback, object);
}


void __fastcall SupportSelectMenu_CallbackFunc__EndInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall SupportSelectMenu_CallbackFunc__Invoke(
        SupportSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    d,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectMenu_DragSwapCallbackFunc___ctor(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 5 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D26B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2640;
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  _QWORD v22[4]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v23; // [xsp+20h] [xbp-70h]
  int32_t v24; // [xsp+3Ch] [xbp-54h] BYREF
  int32_t v25; // [xsp+48h] [xbp-48h] BYREF
  int32_t v26; // [xsp+4Ch] [xbp-44h] BYREF

  v25 = classPos1;
  v26 = kind;
  v24 = classPos2;
  if ( (byte_4A6C840 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(&SupportSelectRootComponent_SwapKind_TypeInfo, v14);
    byte_4A6C840 = 1;
  }
  v23 = 0u;
  v22[0] = j_il2cpp_value_box_0(
             SupportSelectRootComponent_SwapKind_TypeInfo,
             &v26,
             *(_QWORD *)&classPos1,
             leader1,
             *(_QWORD *)&classPos2);
  v22[1] = j_il2cpp_value_box_0(int_TypeInfo, &v25, v15, v16, v17);
  v22[2] = leader1;
  v22[3] = j_il2cpp_value_box_0(int_TypeInfo, &v24, v18, v19, v20);
  *(_QWORD *)&v23 = leader2;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v22, callback, object);
}


void __fastcall SupportSelectMenu_DragSwapCallbackFunc__EndInvoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall SupportSelectMenu_DragSwapCallbackFunc__Invoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        int32_t kind,
        int32_t classPos1,
        UserServantLeaderEntity_o *leader1,
        int32_t classPos2,
        UserServantLeaderEntity_o *leader2,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, UserServantLeaderEntity_o *, int32_t, UserServantLeaderEntity_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    classPos1,
    leader1,
    classPos2,
    leader2,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SupportSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6C841 & 1) == 0 )
  {
    sub_1B90010(&SupportSelectMenu___c_TypeInfo, v1);
    byte_4A6C841 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(SupportSelectMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SupportSelectMenu___c_TypeInfo->static_fields->__9 = (struct SupportSelectMenu___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)SupportSelectMenu___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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