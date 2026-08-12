void SupportSelectMenu___ctor(SupportSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseMenu_c *v4; // x0

  if ( (byte_596CC9E & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596CC9E = 1;
  }
  v4 = BaseMenu_TypeInfo;
  *(_QWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_NOT_EDIT.fields.y = 0;
  *(_OWORD *)&this->fields.SUPPORT_EDIT_BUTTON_POSITION_EDTTING.fields.x = xmmword_E9D1C0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void SupportSelectMenu__Active(SupportSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
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
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  SupportSelectMenu__Init(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(applyMainQuestSupport, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)applyMainQuestSupport, 0, 0);
}


void SupportSelectMenu__Init(SupportSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  ListViewManager_o *supportSelectListViewManager; // x0

  this->fields.supportServantData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.supportServantData, 0, v2, v3, v4, v5, v6, v7);
  supportSelectListViewManager = (ListViewManager_o *)this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_2213CDC(0, v9);
  ListViewManager__DestroyList(supportSelectListViewManager, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void SupportSelectMenu__OnClickCancel(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectMenu_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_596CC9B & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectMenu_OnClickCancel__);
    byte_596CC9B = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickCancel__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596CC9A & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectMenu_OnClickDeckName__);
    byte_596CC9A = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickDeckName__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickDeckName__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_OnClickDeckName__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596CC9D & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectMenu_OnClickGrandListInfoButton__);
    byte_596CC9D = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickGrandListInfoButton__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickGrandListInfoButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_OnClickGrandListInfoButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596CC98 & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectMenu_OnClickSupportEdit__);
    byte_596CC98 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickSupportEdit__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickSupportEdit__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_OnClickSupportEdit__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596CC99 & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectMenu_OnClickSwap__);
    byte_596CC99 = 1;
  }
  v3 = Method_SupportSelectMenu_OnClickSwap__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickSwap__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_OnClickSwap__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  if ( (byte_596CC97 & 1) == 0 )
  {
    this = (SupportSelectMenu_o *)sub_2213A60(&Method_SupportSelectMenu_OnClickTab__);
    byte_596CC97 = 1;
  }
  if ( !idxSprite )
    goto LABEL_8;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)idxSprite, 0);
  v6 = System_Int32__Parse(name, 0);
  v7 = Method_SupportSelectMenu_OnClickTab__;
  v8 = v6;
  if ( (*((_BYTE *)Method_SupportSelectMenu_OnClickTab__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_OnClickTab__);
  v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
  this = (SupportSelectMenu_o *)v4->fields.supportSelectListViewManager;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, idxSprite);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  int32_t v27; // w0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x5
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x22
  bool v31; // w8
  struct SupportServantData_array *v32; // x8
  SupportServantData_o *v33; // x8
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CC92 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Count_SupportServantData___);
    byte_596CC92 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    *(System_String_o **)&mainDeckIdx,
    (System_String_o *)callback,
    (int32_t)dragSwapCallbackFunc,
    (int32_t)method,
    v6,
    v7);
  this->fields.dragSwapCallbackFunc = dragSwapCallbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dragSwapCallbackFunc,
    (int32_t)dragSwapCallbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.supportServantData = supportServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportServantData,
    (int32_t)supportServantData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v27 = System_Linq_Enumerable__Count_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
          (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  SupportSelectMenu__createIndexItem(this, v27, v28);
  gameObject = (UnityEngine_GameObject_o *)this->fields.supportSelectListViewManager;
  if ( !gameObject )
    goto LABEL_20;
  SupportSelectListViewManager__CreateList(
    (SupportSelectListViewManager_o *)gameObject,
    supportServantData,
    mainDeckIdx,
    this->fields.callbackFunc,
    dragSwapCallbackFunc,
    v29);
  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)supportServantData,
                                             (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_SupportServantData___);
  if ( (int)gameObject >= 3 )
  {
    if ( !supportServantData )
      goto LABEL_20;
    if ( LODWORD(supportServantData->max_length) <= 2 )
LABEL_21:
      sub_2213CE4(gameObject);
    v31 = supportServantData->m_Items[2] != 0;
  }
  else
  {
    v31 = 0;
  }
  if ( !supportSelectListViewManager
    || (gameObject = (UnityEngine_GameObject_o *)this->fields.indexGrid,
        supportSelectListViewManager->fields.isLoop = v31,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   0)) == 0
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0),
        (v32 = this->fields.supportServantData) == 0) )
  {
LABEL_20:
    sub_2213CDC(gameObject, v26);
  }
  if ( !LODWORD(v32->max_length) )
    goto LABEL_21;
  v33 = v32->m_Items[0];
  if ( !v33 || !gameObject )
    goto LABEL_20;
  v37.fields.y = 278.0;
  v37.fields.z = 0.0;
  if ( v33->fields.isFriendInfo )
    v37.fields.y = -215.0;
  v37.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v37, 0);
  SupportSelectMenu__moveCenterItem(this, mainDeckIdx, v35);
  SupportSelectMenu__Redisp(this, v36);
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
    sub_2213CDC(gameObject, v4);
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
    sub_2213CDC(gameObject, v5);
  }
  SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)gameObject, v8);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetAbleToSwapDrag(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  struct SupportSelectListViewManager_o *supportSelectListViewManager; // x19
  bool v4; // w1
  SupportSelectListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_2213CDC(this, flag);
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
  UISprite_o *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x1
  UISprite_o *currentEventQuestSupportSprite; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x1
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596CC94 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21168/*"icon_event_2_{0}"*/);
    sub_2213A60(&StringLiteral_21167/*"icon_event_2"*/);
    sub_2213A60(&StringLiteral_21166/*"icon_event_1_{0}"*/);
    sub_2213A60(&StringLiteral_21165/*"icon_event_1"*/);
    byte_596CC94 = 1;
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
  v12 = this->fields.currentMainQuestSupportSprite;
  if ( mainNo )
  {
    v19 = mainNo;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_21168/*"icon_event_2_{0}"*/,
                                                                 v13,
                                                                 0);
    if ( !v12 )
      goto LABEL_24;
    v14 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    v14 = (System_String_o *)StringLiteral_21167/*"icon_event_2"*/;
  }
  UISprite__set_spriteName(v12, v14, 0);
  currentEventQuestSupportSprite = this->fields.currentEventQuestSupportSprite;
  if ( eventNo )
  {
    v18 = eventNo;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
    currentMainQuestSupportSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                 (System_String_o *)StringLiteral_21166/*"icon_event_1_{0}"*/,
                                                                 v16,
                                                                 0);
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v17 = (System_String_o *)currentMainQuestSupportSprite;
  }
  else
  {
    if ( !currentEventQuestSupportSprite )
      goto LABEL_24;
    v17 = (System_String_o *)StringLiteral_21165/*"icon_event_1"*/;
  }
  UISprite__set_spriteName(currentEventQuestSupportSprite, v17, 0);
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
    sub_2213CDC(currentMainQuestSupportSprite, mainQuestActive);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))currentMainQuestSupportSprite->klass[1]._1.element_class)(
    currentMainQuestSupportSprite,
    currentMainQuestSupportSprite->klass[1]._1.castClass);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetActiveFixDeckButton(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *fixMainQuestFrameSprite; // x0
  struct UIButton_array *fixMainQuestSupportDeckButtons; // x21
  int max_length; // w8
  __int64 v8; // x22
  struct UIButton_array *fixEventQuestSupportDeckButtons; // x20
  int v10; // w8
  __int64 v11; // x21

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
    v8 = 0;
    while ( (unsigned int)v8 < max_length )
    {
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)fixMainQuestSupportDeckButtons->m_Items[v8];
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             fixMainQuestFrameSprite,
                                                             0);
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
      max_length = fixMainQuestSupportDeckButtons->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_14;
    }
LABEL_23:
    sub_2213CE4(fixMainQuestFrameSprite);
  }
LABEL_14:
  fixEventQuestSupportDeckButtons = this->fields.fixEventQuestSupportDeckButtons;
  if ( !fixEventQuestSupportDeckButtons )
LABEL_22:
    sub_2213CDC(fixMainQuestFrameSprite, active);
  v10 = fixEventQuestSupportDeckButtons->max_length;
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( (unsigned int)v11 < v10 )
    {
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)fixEventQuestSupportDeckButtons->m_Items[v11];
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      fixMainQuestFrameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             fixMainQuestFrameSprite,
                                                             0);
      if ( !fixMainQuestFrameSprite )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fixMainQuestFrameSprite, active, 0);
      v10 = fixEventQuestSupportDeckButtons->max_length;
      if ( (int)++v11 >= v10 )
        return;
    }
    goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetActiveHeader(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *headerObject; // x0

  headerObject = this->fields.headerObject;
  if ( !headerObject )
    sub_2213CDC(0, active);
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
  __int64 v10; // x1
  __int64 v11; // x2
  SupportSelectMenu___c_c *v12; // x8
  unsigned int v13; // w23
  struct SupportSelectMenu___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__47_0; // x24
  Il2CppObject *v16; // x25
  struct SupportSelectMenu___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  struct UISprite_o *applyMainQuestSupport; // x8
  int v28; // w22
  bool v29; // w1
  int32_t v30; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  SupportSelectMenu___c_c *v33; // x8
  unsigned int v34; // w21
  struct SupportSelectMenu___c_StaticFields *v35; // x9
  System_Func_int__bool__o *_9__47_1; // x22
  Il2CppObject *v37; // x23
  struct SupportSelectMenu___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  struct UISprite_o *applyEventQuestSupport; // x8
  int v47; // w20
  bool v48; // w1

  if ( (byte_596CC93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_0__);
    sub_2213A60(&Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_1__);
    sub_2213A60(&SupportSelectMenu___c_TypeInfo);
    byte_596CC93 = 1;
  }
  v9 = System_Array__IndexOf_int_(
         fixMainDeckIds,
         nowDeckId,
         (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  v12 = SupportSelectMenu___c_TypeInfo;
  v13 = v9;
  if ( !*(&SupportSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo, v10, v11);
    v12 = SupportSelectMenu___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__47_0 = static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      static_fields = SupportSelectMenu___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__47_0, v16, Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_0__, 0);
    v17 = SupportSelectMenu___c_TypeInfo->static_fields;
    v17->__9__47_0 = _9__47_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__47_0, (int32_t)_9__47_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixMainDeckIds,
          (System_Func_TSource__bool__o *)_9__47_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v24,
                                             (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  applyMainQuestSupport = this->fields.applyMainQuestSupport;
  if ( v13 <= 0x7FFFFFFE )
  {
    if ( !applyMainQuestSupport )
      goto LABEL_44;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyMainQuestSupport, 0);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_44;
    v29 = 1;
  }
  else
  {
    if ( !applyMainQuestSupport )
      goto LABEL_44;
    v28 = (int)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyMainQuestSupport, 0);
    if ( !gameObject )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive(gameObject, v28 < 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.applyMainQuestSupportFrame;
    if ( !gameObject )
      goto LABEL_44;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_44;
    v29 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v29, 0);
  v30 = System_Array__IndexOf_int_(
          fixEventDeckIds,
          nowDeckId,
          (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  v33 = SupportSelectMenu___c_TypeInfo;
  v34 = v30;
  if ( !*(&SupportSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectMenu___c_TypeInfo, v31, v32);
    v33 = SupportSelectMenu___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__47_1 = v35->__9__47_1;
  if ( !_9__47_1 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v31, v32);
      v35 = SupportSelectMenu___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__47_1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__47_1, v37, Method_SupportSelectMenu___c__SetActiveSupportApplyIcon_b__47_1__, 0);
    v38 = SupportSelectMenu___c_TypeInfo->static_fields;
    v38->__9__47_1 = _9__47_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->__9__47_1, (int32_t)_9__47_1, v39, v40, v41, v42, v43, v44);
  }
  v45 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixEventDeckIds,
          (System_Func_TSource__bool__o *)_9__47_1,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  gameObject = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Count_int_(
                                             v45,
                                             (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  applyEventQuestSupport = this->fields.applyEventQuestSupport;
  if ( v34 <= 0x7FFFFFFE )
  {
    if ( applyEventQuestSupport )
    {
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.applyEventQuestSupport,
                     0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            v48 = 1;
            goto LABEL_37;
          }
        }
      }
    }
LABEL_44:
    sub_2213CDC(gameObject, v26);
  }
  if ( !applyEventQuestSupport )
    goto LABEL_44;
  v47 = (int)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.applyEventQuestSupport, 0);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, v47 < 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applyEventQuestSupportFrame;
  if ( !gameObject )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_44;
  v48 = 0;
LABEL_37:
  UnityEngine_GameObject__SetActive(gameObject, v48, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  UIGrid__GetChildList((UIGrid_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.element_class)(
    gameObject,
    gameObject->klass[1]._1.castClass);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.applySupportDeckGrid;
  if ( !gameObject )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_44;
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
  int v9; // w8
  int *v10; // x8
  int v11; // w24
  __int64 i; // x25
  int32_t v13; // w27
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  struct UISprite_array *fixEventQuestSupportDeckLabelSprites; // x8
  struct UISprite_array *fixEventQuestSupportDeckFrameSprites; // x9
  UISprite_o *v18; // x23
  int32_t v19; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596CC96 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&StringLiteral_18378/*"btn_txt_set0_1"*/);
    sub_2213A60(&StringLiteral_18379/*"btn_txt_set{0}_1"*/);
    byte_596CC96 = 1;
  }
  gameObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  v9 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( isEventButton )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&currentId, isEventButton);
      gameObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    v10 = (int *)(gameObject[7].fields.m_CachedPtr + 200);
  }
  else
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&currentId, isEventButton);
      gameObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    v10 = (int *)(gameObject[7].fields.m_CachedPtr + 196);
  }
  v11 = *v10;
  if ( *v10 >= 1 )
  {
    if ( !fixDeckIds )
LABEL_30:
      sub_2213CDC(gameObject, *(_QWORD *)&currentId);
    for ( i = 0; v11 != (_DWORD)i; ++i )
    {
      if ( (unsigned int)i >= LODWORD(fixDeckIds->max_length) )
LABEL_31:
        sub_2213CE4(gameObject);
      v13 = fixDeckIds->m_Items[i];
      if ( v13 )
      {
        v19 = fixDeckIds->m_Items[i];
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
        gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_18379/*"btn_txt_set{0}_1"*/, v14, 0);
        v15 = (System_String_o *)gameObject;
        if ( isEventButton )
          goto LABEL_16;
      }
      else
      {
        v15 = (System_String_o *)StringLiteral_18378/*"btn_txt_set0_1"*/;
        if ( isEventButton )
        {
LABEL_16:
          fixEventQuestSupportDeckLabelSprites = this->fields.fixEventQuestSupportDeckLabelSprites;
          if ( !fixEventQuestSupportDeckLabelSprites )
            goto LABEL_30;
          if ( (unsigned int)i >= LODWORD(fixEventQuestSupportDeckLabelSprites->max_length) )
            goto LABEL_31;
          fixEventQuestSupportDeckFrameSprites = this->fields.fixEventQuestSupportDeckFrameSprites;
          if ( !fixEventQuestSupportDeckFrameSprites )
            goto LABEL_30;
          goto LABEL_24;
        }
      }
      fixEventQuestSupportDeckLabelSprites = this->fields.fixMainQuestSupportDeckLabelSprites;
      if ( !fixEventQuestSupportDeckLabelSprites )
        goto LABEL_30;
      if ( (unsigned int)i >= LODWORD(fixEventQuestSupportDeckLabelSprites->max_length) )
        goto LABEL_31;
      fixEventQuestSupportDeckFrameSprites = this->fields.fixMainQuestSupportDeckFrameSprites;
      if ( !fixEventQuestSupportDeckFrameSprites )
        goto LABEL_30;
LABEL_24:
      if ( (unsigned int)i >= LODWORD(fixEventQuestSupportDeckFrameSprites->max_length) )
        goto LABEL_31;
      gameObject = (UnityEngine_Component_o *)fixEventQuestSupportDeckFrameSprites->m_Items[i];
      if ( !gameObject )
        goto LABEL_30;
      v18 = fixEventQuestSupportDeckLabelSprites->m_Items[i];
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13 != 0, 0);
      if ( !v18 )
        goto LABEL_30;
      UISprite__set_spriteName(v18, v15, 0);
      gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))v18->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                                v18,
                                                v18->klass->vtable._33_MakePixelPerfect.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__SetGrandListInfoButton(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *grandListInfoButton; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *grandListInfoButtonSprite; // x19

  if ( (byte_596CC95 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_18298/*"btn_supportform_grand"*/);
    byte_596CC95 = 1;
  }
  grandListInfoButton = (UnityEngine_Component_o *)this->fields.grandListInfoButton;
  if ( !grandListInfoButton
    || (grandListInfoButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grandListInfoButton, 0)) == 0 )
  {
    sub_2213CDC(grandListInfoButton, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)grandListInfoButton, active, 0);
  grandListInfoButtonSprite = this->fields.grandListInfoButtonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetPartyOrganizationImage(grandListInfoButtonSprite, (System_String_o *)StringLiteral_18298/*"btn_supportform_grand"*/, 0);
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
    goto LABEL_16;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !helpButton )
    goto LABEL_16;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, isEditting, 0);
  helpButton = (UnityEngine_Component_o *)this->fields.swapButton;
  if ( !helpButton )
    goto LABEL_16;
  helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0);
  if ( !helpButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, !isEditting, 0);
  v6 = 116;
  helpButton = (UnityEngine_Component_o *)this->fields.editButton;
  if ( isEditting )
  {
    v6 = 104;
    v7 = 100;
  }
  else
  {
    v7 = 112;
  }
  v8 = isEditting ? 96LL : 108LL;
  if ( !helpButton
    || (v9 = *(float *)((char *)&this->klass + v8),
        v10 = *(float *)((char *)&this->klass + v7),
        v11 = *(float *)((char *)&this->klass + v6),
        (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(helpButton, 0)) == 0) )
  {
LABEL_16:
    sub_2213CDC(helpButton, isEditting);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectMenu_o *v11; // x0
  SupportSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CC8D & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_596CC8D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v6->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  SupportSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void SupportSelectMenu__add_dragSwapCallbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectMenu_o *v11; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CC8F & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_596CC8F = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v6->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.dragSwapCallbackFunc, v6, dragSwapCallbackFunc);
    v10 = v9 == (_QWORD)dragSwapCallbackFunc;
    dragSwapCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v7, v8);
  SupportSelectMenu__remove_dragSwapCallbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__buttonDispSetting(SupportSelectMenu_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  const MethodInfo *v6; // x2

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
    sub_2213CDC(helpButton, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, flag, 0);
  SupportSelectMenu__SetActiveFixDeckButton(this, flag, v6);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__createIndexItem(SupportSelectMenu_o *this, int32_t deckNum, const MethodInfo *method)
{
  UnityEngine_Component_o *indexGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  int32_t i; // w21
  BalanceConfig_c *v10; // x0
  __int64 v11; // x2
  int32_t j; // w22
  Il2CppObject *indexItemSeed; // x21
  UIGrid_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  System_String_o *v17; // x0
  SupportSelectListViewIndicator_o *indicator; // x22
  int32_t v19; // w23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  __int64 v22; // x2
  long double v23; // q0
  struct SupportSelectListViewIndicator_o *v24; // x19
  int32_t index; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596CC91 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CC91 = 1;
  }
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  index = 0;
  if ( !indexGrid )
    goto LABEL_37;
  gameObject = UnityEngine_Component__get_gameObject(indexGrid, 0);
  if ( GameObjectExtensions__HasChild(gameObject, 0) )
  {
    for ( i = 0; ; ++i )
    {
      v10 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckNum, v7);
        v10 = BalanceConfig_TypeInfo;
      }
      if ( i >= v10->static_fields->SupportDeckMax )
        break;
      indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
      if ( !indexGrid )
        goto LABEL_37;
      SupportSelectListViewIndicator__SetPageActive((SupportSelectListViewIndicator_o *)indexGrid, i, i < deckNum, v8);
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
LABEL_37:
    sub_2213CDC(indexGrid, *(_QWORD *)&deckNum);
  }
  indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
  if ( !indexGrid )
    goto LABEL_37;
  SupportSelectListViewIndicator__createSpriteList(
    (SupportSelectListViewIndicator_o *)indexGrid,
    *(const MethodInfo **)&deckNum);
  for ( j = 0; ; j = index + 1 )
  {
    indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    index = j;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckNum, v11);
      indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
    }
    indexItemSeed = (Il2CppObject *)this->fields.indexItemSeed;
    if ( j >= *(_DWORD *)(indexGrid[7].fields.m_CachedPtr + 168) )
      break;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&deckNum, v11);
    indexGrid = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                             indexItemSeed,
                                             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !indexGrid )
      goto LABEL_37;
    v14 = this->fields.indexGrid;
    v15 = (UnityEngine_GameObject_o *)indexGrid;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0);
    if ( !indexGrid )
      goto LABEL_37;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)indexGrid,
                                             0);
    if ( !v14 )
      goto LABEL_37;
    UIGrid__AddChild(v14, (UnityEngine_Transform_o *)indexGrid, 0);
    v16 = UnityEngine_GameObject__get_gameObject(v15, 0);
    GameObjectExtensions__ResetLocalScale(v16, 0);
    v17 = System_Int32__ToString((int32_t)&index, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, v17, 0);
    indicator = this->fields.indicator;
    v19 = index;
    indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             v15,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !indicator )
      goto LABEL_37;
    SupportSelectListViewIndicator__setPageSprite(indicator, v19, (UISprite_o *)indexGrid, v20);
    indexGrid = (UnityEngine_Component_o *)this->fields.indicator;
    if ( !indexGrid )
      goto LABEL_37;
    SupportSelectListViewIndicator__SetPageActive(
      (SupportSelectListViewIndicator_o *)indexGrid,
      index,
      index < deckNum,
      v21);
  }
  if ( !indexItemSeed )
    goto LABEL_37;
  indexGrid = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(this->fields.indexItemSeed, 0);
  if ( !indexGrid )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)indexGrid, 0, 0);
  indexGrid = (UnityEngine_Component_o *)this->fields.indexGrid;
  if ( !indexGrid )
    goto LABEL_37;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexGrid->klass[1]._1.element_class)(
    indexGrid,
    indexGrid->klass[1]._1.castClass);
  indexGrid = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
  v24 = this->fields.indicator;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckNum, v22);
  if ( !v24 )
    goto LABEL_37;
  ((void (__fastcall *)(struct SupportSelectListViewIndicator_o *, _QWORD, const MethodInfo *, long double))v24->klass->vtable._4_SetIndexMax.methodPtr)(
    v24,
    (unsigned int)BalanceConfig_TypeInfo->static_fields->SupportDeckMax,
    v24->klass->vtable._4_SetIndexMax.method,
    v23);
}


int32_t SupportSelectMenu__getPageIdx(SupportSelectMenu_o *this, const MethodInfo *method)
{
  struct SupportSelectListViewIndicator_o *indicator; // x8

  indicator = this->fields.indicator;
  if ( !indicator )
    sub_2213CDC(this, method);
  return indicator->fields.pageIndex;
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__moveCenterItem(SupportSelectMenu_o *this, int32_t centerIdx, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SupportSelectListViewManager_o *supportSelectListViewManager; // x0

  supportSelectListViewManager = this->fields.supportSelectListViewManager;
  if ( !supportSelectListViewManager )
    sub_2213CDC(0, *(_QWORD *)&centerIdx);
  SupportSelectListViewManager__MoveCenterItem(supportSelectListViewManager, centerIdx, 0, v3);
}


void SupportSelectMenu__onClickHelpButton(SupportSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_596CC9C & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectMenu_onClickHelpButton__);
    byte_596CC9C = 1;
  }
  v2 = Method_SupportSelectMenu_onClickHelpButton__;
  if ( (*((_BYTE *)Method_SupportSelectMenu_onClickHelpButton__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_SupportSelectMenu_onClickHelpButton__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 48, 0, 0, 0);
}


void SupportSelectMenu__remove_callbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectMenu_o *v11; // x0
  SupportSelectMenu_DragSwapCallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596CC8E & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_CallbackFunc_TypeInfo);
    byte_596CC8E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_CallbackFunc_c *)v6->klass != SupportSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  SupportSelectMenu__add_dragSwapCallbackFunc(v11, v12, v13);
}


void SupportSelectMenu__remove_dragSwapCallbackFunc(
        SupportSelectMenu_o *this,
        SupportSelectMenu_DragSwapCallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *dragSwapCallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596CC90 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    byte_596CC90 = 1;
  }
  dragSwapCallbackFunc = (System_Delegate_o *)this->fields.dragSwapCallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(dragSwapCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SupportSelectMenu_DragSwapCallbackFunc_c *)v6->klass != SupportSelectMenu_DragSwapCallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.dragSwapCallbackFunc, v6, dragSwapCallbackFunc);
    v10 = v9 == (_QWORD)dragSwapCallbackFunc;
    dragSwapCallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v7, v8);
  SupportSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectMenu__setActiveDeckNameChangeButton(SupportSelectMenu_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Collider_o *namePanelCollider; // x0

  namePanelCollider = (UnityEngine_Collider_o *)this->fields.namePanelCollider;
  if ( !namePanelCollider )
    sub_2213CDC(0, active);
  UnityEngine_Collider__set_enabled(namePanelCollider, active, 0);
}


void SupportSelectMenu_CallbackFunc___ctor(
        SupportSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20072D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2007274;
}


System_IAsyncResult_o *SupportSelectMenu_CallbackFunc__BeginInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t d,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = d;
  v15 = result;
  v13 = n;
  if ( (byte_596CC9F & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu_ResultKind_TypeInfo);
    byte_596CC9F = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(SupportSelectMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v11, callback, object);
}


void SupportSelectMenu_CallbackFunc__EndInvoke(
        SupportSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 5 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2007378;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2007300;
}


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
  _QWORD v15[4]; // [xsp+0h] [xbp-80h] BYREF
  __int128 v16; // [xsp+20h] [xbp-60h]
  int32_t v17; // [xsp+34h] [xbp-4Ch] BYREF
  int32_t v18; // [xsp+38h] [xbp-48h] BYREF
  int32_t v19; // [xsp+3Ch] [xbp-44h] BYREF

  v18 = classPos1;
  v19 = kind;
  v17 = classPos2;
  if ( (byte_596CCA0 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectRootComponent_SwapKind_TypeInfo);
    byte_596CCA0 = 1;
  }
  v16 = 0u;
  v15[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_SwapKind_TypeInfo, &v19);
  v15[1] = j_il2cpp_value_box_0(qword_5984348, &v18);
  v15[2] = leader1;
  v15[3] = j_il2cpp_value_box_0(qword_5984348, &v17);
  *(_QWORD *)&v16 = leader2;
  return sub_2213A14(this, v15, callback, object);
}


void SupportSelectMenu_DragSwapCallbackFunc__EndInvoke(
        SupportSelectMenu_DragSwapCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CCA1 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectMenu___c_TypeInfo);
    byte_596CCA1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SupportSelectMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SupportSelectMenu___c_TypeInfo->static_fields->__9 = (struct SupportSelectMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SupportSelectMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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