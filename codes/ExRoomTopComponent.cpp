void ExRoomTopComponent___ctor(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  this->fields.slideOutTime = 0.25;
  *(_QWORD *)&this->fields.slideValue = 0x3E80000044110000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomTopComponent__Awake(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *menuPanel; // x0

  menuPanel = (UnityEngine_Component_o *)this->fields.menuPanel;
  if ( !menuPanel
    || (menuPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuPanel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuPanel, 0, 0),
        (menuPanel = (UnityEngine_Component_o *)this->fields.helpButtonSprite) == 0)
    || (menuPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuPanel, 0)) == 0 )
  {
    sub_21FFECC(menuPanel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuPanel, 0, 0);
}


void ExRoomTopComponent__Init(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInParent_object__58645868; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Component_o *menuPanel; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UISprite_o *helpButtonSprite; // x20

  if ( (byte_5932D9B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInParent_ExRoomRootComponent___);
    sub_21FFC50(&StringLiteral_18222/*"btn_help"*/);
    byte_5932D9B = 1;
  }
  ComponentInParent_object__58645868 = UnityEngine_Component__GetComponentInParent_object__58645868(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37EDD6C *)Method_UnityEngine_Component_GetComponentInParent_ExRoomRootComponent___);
  this->fields.root = (struct ExRoomRootComponent_o *)ComponentInParent_object__58645868;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.root,
    (int32_t)ComponentInParent_object__58645868,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  menuPanel = (UnityEngine_Component_o *)this->fields.menuPanel;
  if ( !menuPanel )
    goto LABEL_12;
  menuPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuPanel, 0);
  if ( !menuPanel )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)menuPanel, 1, 0);
  menuPanel = (UnityEngine_Component_o *)this->fields.menuPanel;
  if ( !menuPanel )
    goto LABEL_12;
  SlideFadeObject__SlideOut_42892500((SlideFadeObject_o *)menuPanel, this->fields.slideValue, 0.0, 0.0, 0, 0);
  menuPanel = (UnityEngine_Component_o *)this->fields.questBoard;
  if ( !menuPanel )
    goto LABEL_12;
  ExRoomTopQuestBoard__InitSet((ExRoomTopQuestBoard_o *)menuPanel, this, v12);
  menuPanel = (UnityEngine_Component_o *)this->fields.shopBoard;
  if ( !menuPanel )
    goto LABEL_12;
  ExRoomTopShopBoard__InitSet((ExRoomTopShopBoard_o *)menuPanel, this, v13);
  helpButtonSprite = this->fields.helpButtonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
  AtlasManager__SetCommon(helpButtonSprite, 0);
  menuPanel = (UnityEngine_Component_o *)this->fields.helpButtonSprite;
  if ( !menuPanel )
LABEL_12:
    sub_21FFECC(menuPanel, v10);
  UISprite__set_spriteName((UISprite_o *)menuPanel, (System_String_o *)StringLiteral_18222/*"btn_help"*/, 0);
}


void ExRoomTopComponent__OnClickHelp(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_5932DA0 & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomTopComponent_OnClickHelp__);
    byte_5932DA0 = 1;
  }
  v2 = Method_ExRoomTopComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ExRoomTopComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_ExRoomTopComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 118, 0, 0, 0);
}


void ExRoomTopComponent__OnClickQuest(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ExRoomRootComponent_o *root; // x0

  if ( (byte_5932D9E & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomTopComponent_OnClickQuest__);
    byte_5932D9E = 1;
  }
  v3 = Method_ExRoomTopComponent_OnClickQuest__;
  if ( (*((_BYTE *)Method_ExRoomTopComponent_OnClickQuest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ExRoomTopComponent_OnClickQuest__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  root = this->fields.root;
  if ( !root )
    sub_21FFECC(0, v5);
  ExRoomRootComponent__ChangeState(root, 2, v6);
}


void ExRoomTopComponent__OnClickShop(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ExRoomRootComponent_o *root; // x0

  if ( (byte_5932D9F & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomTopComponent_OnClickShop__);
    byte_5932D9F = 1;
  }
  v3 = Method_ExRoomTopComponent_OnClickShop__;
  if ( (*((_BYTE *)Method_ExRoomTopComponent_OnClickShop__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ExRoomTopComponent_OnClickShop__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  root = this->fields.root;
  if ( !root )
    sub_21FFECC(0, v5);
  ExRoomRootComponent__ChangeState(root, 3, v6);
}


void ExRoomTopComponent__SlideIn(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float slideInTime; // s8
  float IntpTime_AutoResume; // s0
  SlideFadeObject_o *menuPanel; // x20
  float v7; // s9
  float slideValue; // s8
  System_Action_o *v9; // x21
  UnityEngine_Component_o *helpButtonSprite; // x0
  __int64 v11; // x1

  if ( (byte_5932D9C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomTopComponent__SlideIn_b__12_0__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932D9C = 1;
  }
  slideInTime = this->fields.slideInTime;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(slideInTime, 0);
  menuPanel = this->fields.menuPanel;
  v7 = IntpTime_AutoResume;
  slideValue = this->fields.slideValue;
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ExRoomTopComponent__SlideIn_b__12_0__, 0);
  if ( !menuPanel
    || (SlideFadeObject__SlideIn_42891556(menuPanel, slideValue, v7, 0.0, v9, 0),
        (helpButtonSprite = (UnityEngine_Component_o *)this->fields.helpButtonSprite) == 0)
    || (helpButtonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButtonSprite, 0)) == 0 )
  {
    sub_21FFECC(helpButtonSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 1, 0);
}


void ExRoomTopComponent__SlideOut(ExRoomTopComponent_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *helpButtonSprite; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  float slideOutTime; // s8
  float IntpTime_AutoResume; // s0
  SlideFadeObject_o *menuPanel; // x21
  float v19; // s9
  float slideValue; // s8
  System_Action_o *v21; // x19

  if ( (byte_5932D9D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_ExRoomTopComponent___c__DisplayClass13_0__SlideOut_b__0__);
    sub_21FFC50(&ExRoomTopComponent___c__DisplayClass13_0_TypeInfo);
    byte_5932D9D = 1;
  }
  v5 = sub_21FFEBC(ExRoomTopComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  helpButtonSprite = (UnityEngine_Component_o *)this->fields.helpButtonSprite;
  if ( !helpButtonSprite )
    goto LABEL_10;
  helpButtonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButtonSprite, 0);
  if ( !helpButtonSprite )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButtonSprite, 0, 0);
  slideOutTime = this->fields.slideOutTime;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(slideOutTime, 0);
  menuPanel = this->fields.menuPanel;
  v19 = IntpTime_AutoResume;
  slideValue = this->fields.slideValue;
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_ExRoomTopComponent___c__DisplayClass13_0__SlideOut_b__0__, 0);
  if ( !menuPanel )
LABEL_10:
    sub_21FFECC(helpButtonSprite, v7);
  SlideFadeObject__SlideOut_42892500(menuPanel, slideValue, v19, 0.0, v21, 0);
}


void ExRoomTopComponent___SlideIn_b__12_0(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  SlideFadeObject_o *menuPanel; // x0

  menuPanel = this->fields.menuPanel;
  if ( !menuPanel )
    sub_21FFECC(0, method);
  SlideFadeObject__ResetPosition(menuPanel, 0);
}


ExRoomRootComponent_o *ExRoomTopComponent__get_Root(ExRoomTopComponent_o *this, const MethodInfo *method)
{
  return this->fields.root;
}


void ExRoomTopComponent___c__DisplayClass13_0___ctor(
        ExRoomTopComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomTopComponent___c__DisplayClass13_0___SlideOut_b__0(
        ExRoomTopComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}