void __fastcall PartyOrganizationChangeMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  System_Int32_array **v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_Int32_array **v12; // x1
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_40FDDFB & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, v1);
    sub_B16FFC(&PartyOrganizationChangeMenu_TypeInfo, v3);
    byte_40FDDFB = 1;
  }
  v4 = (System_Int32_array **)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v4 )
    sub_B170D4();
  v11 = *((_DWORD *)v4 + 6);
  v12 = v4;
  if ( !v11 || (*((_DWORD *)v4 + 8) = 45, v11 == 1) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  *((_DWORD *)v4 + 9) = 145;
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationChangeMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B16F98(static_fields, v12, v5, v6, v7, v8, v9, v10);
}


void __fastcall PartyOrganizationChangeMenu___ctor(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationChangeObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDDFA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&BaseMenu_TypeInfo, v4);
    sub_B16FFC(&PartyOrganizationChangeObject___TypeInfo, v5);
    byte_40FDDFA = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct PartyOrganizationChangeObject_array *)sub_B17014(
                                                       PartyOrganizationChangeObject___TypeInfo,
                                                       (unsigned int)v6->static_fields->DeckMemberMax,
                                                       v2);
  this->fields.partyOrganizationChangeObjectList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.partyOrganizationChangeObjectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__Callback(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationChangeMenu_CallbackFunc_o *v9; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    PartyOrganizationChangeMenu_CallbackFunc__Invoke(v9, result, n, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__ClearItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v8; // x20
  int max_length; // w9
  PartyOrganizationChangeObject_o *v10; // x0

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0LL),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  v8 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    v10 = partyOrganizationChangeObjectList->m_Items[v8];
    if ( v10 )
    {
      PartyOrganizationChangeObject__ClearItem(v10, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v8;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_8;
  }
}


void __fastcall PartyOrganizationChangeMenu__Close(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationChangeMenu__Close_32512428(this, 0LL, v2);
}


void __fastcall PartyOrganizationChangeMenu__Close_32512428(
        PartyOrganizationChangeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FDDF2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_EndClose__, v10);
    byte_40FDDF2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


void __fastcall PartyOrganizationChangeMenu__EndClose(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationChangeMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__EndCloseTutorialArrowDecide(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  UnityEngine_Component_o *tutorialPartyDecideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialPartyDecideButton = (UnityEngine_Component_o *)this->fields.tutorialPartyDecideButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(tutorialPartyDecideButton, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 1, -1, v6);
}


void __fastcall PartyOrganizationChangeMenu__EndCloseTutorialArrowEmptyItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  UnityEngine_Component_o *tutorialPartyOrganizationChangeEmptyObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialPartyOrganizationChangeEmptyObject = (UnityEngine_Component_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(tutorialPartyOrganizationChangeEmptyObject, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 5, 1, v6);
}


void __fastcall PartyOrganizationChangeMenu__EndOpen(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  MethodInfo *v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleServantConfConponent_o *v18; // x0
  System_Action_o *v19; // x20
  PartyListViewItem_o *v20; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  int32_t v23; // w8
  int32_t v24; // w2
  int32_t v25; // w1
  int32_t mode; // w8
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *tutorialPartyOrganizationChangeEmptyObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  PartyOrganizationChangeObject_o *v30; // x20
  PartyListViewItem_o *partyItem; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  PartyOrganizationChangeObject_CallbackFunc_o *v36; // x22
  FSOffset_o *tutorialAddOffsetFS; // x20
  UnityEngine_Vector2_o v38; // kr00_8
  float v39; // s4
  float v40; // s5
  float v41; // s6
  float v42; // s7
  WebViewManager_o *v43; // x0
  const char *name; // kr08_8
  Il2CppClass *klass; // kr10_8
  CommonUI_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_o *v51; // x21
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 openSelectMember; // x9
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  UnityEngine_Component_o *tutorialPartyDecideButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr18_8
  float v65; // s4
  float v66; // s5
  float v67; // s6
  float v68; // s7
  CommonUI_o *Instance; // x20
  System_String_o *v70; // x0
  Il2CppMethodPointer methodPointer; // kr20_8
  void *invoker_method; // kr28_8
  System_String_o *v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Action_o *v78; // x22
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v80; // x20
  struct System_Action_o *openCallbackFunc; // t1
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector2_o v83; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v84; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v87; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v88; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FDDF1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_FSOffset___, v10);
    sub_B16FFC(&FSUtility_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, v13);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_10070, v16);
    sub_B16FFC(&StringLiteral_13461, v17);
    byte_40FDDF1 = 1;
  }
  memset(&methoda, 0, 32);
  if ( (this->fields.openSelectMember & 0x80000000) != 0 )
  {
    mode = this->fields.mode;
    if ( mode )
    {
      this->fields.state = 6;
      if ( mode == 5 )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( !tutorialMaskBase )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialPartyDecideButton = (UnityEngine_Component_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialPartyDecideButton )
          goto LABEL_50;
        gameObject = UnityEngine_Component__get_gameObject(tutorialPartyDecideButton, 0LL);
        if ( !gameObject )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v61 = this->fields.tutorialPartyDecideButton;
        if ( !v61 )
          goto LABEL_50;
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v61->klass->vtable._14_SetState.method)(
          v61,
          0LL,
          0LL,
          v61->klass->vtable._15_OnPress.methodPtr);
        v62 = (UnityEngine_Component_o *)this->fields.tutorialPartyDecideButton;
        if ( !v62 )
          goto LABEL_50;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    v62,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 1, 0LL);
        v86.fields.m_Width = 190.0;
        v86.fields.m_Height = 90.0;
        v86.fields.m_XMin = AddOffset.fields.x + 329.0;
        v86.fields.m_YMin = AddOffset.fields.y + -291.0;
        UnityEngine_Rect___ctor(v86, v65, v66, v67, v68, &methoda);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_13461, 0LL);
        methodPointer = methoda.methodPointer;
        invoker_method = methoda.invoker_method;
        v73 = v70;
        v78 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v74, v75, v76, v77);
        System_Action___ctor(v78, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0LL);
        if ( !Instance )
          goto LABEL_50;
        v84.fields.x = AddOffset.fields.x + 422.0;
        v84.fields.y = AddOffset.fields.y + -231.0;
        *(_QWORD *)&v87.fields.m_XMin = methodPointer;
        *(_QWORD *)&v87.fields.m_Width = invoker_method;
        CommonUI__OpenTutorialNotificationDialogArrow(Instance, v73, v84, v87, 0.0, 0LL, -1, v78, 0LL);
      }
      else if ( mode == 4 )
      {
        v27 = this->fields.tutorialMaskBase;
        if ( !v27 )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(v27, 1, 0LL);
        tutorialPartyOrganizationChangeEmptyObject = (UnityEngine_Component_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
        if ( !tutorialPartyOrganizationChangeEmptyObject )
          goto LABEL_50;
        v29 = UnityEngine_Component__get_gameObject(tutorialPartyOrganizationChangeEmptyObject, 0LL);
        if ( !v29 )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(v29, 1, 0LL);
        v30 = this->fields.tutorialPartyOrganizationChangeEmptyObject;
        partyItem = this->fields.partyItem;
        v36 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_B170CC(
                                                                PartyOrganizationChangeObject_CallbackFunc_TypeInfo,
                                                                v32,
                                                                v33,
                                                                v34,
                                                                v35);
        PartyOrganizationChangeObject_CallbackFunc___ctor(
          v36,
          (Il2CppObject *)this,
          Method_PartyOrganizationChangeMenu_OnClickEmptyItem__,
          0LL);
        if ( !v30 )
          goto LABEL_50;
        PartyOrganizationChangeObject__SetItem(v30, partyItem, 1, v36, 0LL);
        tutorialAddOffsetFS = this->fields.tutorialAddOffsetFS;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v38 = FSUtility__GetAddOffset(tutorialAddOffsetFS, 1, 0LL);
        v85.fields.m_Width = 150.0;
        v85.fields.m_Height = 380.0;
        v85.fields.m_XMin = v38.fields.x + -320.0;
        v85.fields.m_YMin = v38.fields.y + -205.0;
        UnityEngine_Rect___ctor(v85, v39, v40, v41, v42, (const MethodInfo *)&methoda.name);
        v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        name = methoda.name;
        klass = methoda.klass;
        v46 = (CommonUI_o *)v43;
        v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
        System_Action___ctor(v51, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0LL);
        if ( !v46 )
          goto LABEL_50;
        v83.fields.x = v38.fields.x + -245.0;
        v83.fields.y = v38.fields.y + 70.0;
        *(_QWORD *)&v88.fields.m_XMin = name;
        *(_QWORD *)&v88.fields.m_Width = klass;
        CommonUI__OpenTutorialArrowMark(v46, v83, 0.0, v88, v51, 0LL);
      }
    }
    else if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      PartyOrganizationChangeMenu__SetInput(this, 1, v2);
    }
    else
    {
      this->fields.state = 3;
    }
    openCallbackFunc = this->fields.openCallbackFunc;
    p_openCallbackFunc = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
    v80 = openCallbackFunc;
    if ( openCallbackFunc )
    {
      p_openCallbackFunc->klass = 0LL;
      sub_B16F98(p_openCallbackFunc, 0LL, (System_String_array **)v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(v80, 0LL);
    }
    return;
  }
  v18 = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v19 = this->fields.openCallbackFunc;
  this->fields.state = 3;
  if ( v19 )
  {
    v18->klass = 0LL;
    sub_B16F98(v18, 0LL, (System_String_array **)v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v19, 0LL);
  }
  if ( !this->fields.callbackFunc )
    return;
  v20 = this->fields.partyItem;
  if ( !v20 )
LABEL_50:
    sub_B170D4();
  PartyListViewItem__GetMember(v20, this->fields.openSelectMember, v2);
  v23 = this->fields.mode;
  switch ( v23 )
  {
    case 3:
      this->fields.state = 2;
      PartyOrganizationChangeMenu__SetInput(this, 1, v21);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      if ( partyOrganizationChangeObjectList )
      {
        openSelectMember = this->fields.openSelectMember;
        if ( (unsigned int)openSelectMember >= partyOrganizationChangeObjectList->max_length )
        {
          sub_B17100(v52, v53, v54);
          sub_B170A0();
        }
        v57 = (UnityEngine_Component_o *)partyOrganizationChangeObjectList->m_Items[openSelectMember];
        if ( v57 )
        {
          UnityEngine_Component__SendMessage_40674196(v57, (System_String_o *)StringLiteral_10070, 0LL);
          return;
        }
      }
      goto LABEL_50;
    case 2:
      v24 = this->fields.openSelectMember;
      this->fields.state = 3;
      v25 = 6;
      goto LABEL_27;
    case 1:
      v24 = this->fields.openSelectMember;
      v25 = 5;
      this->fields.state = 3;
LABEL_27:
      PartyOrganizationChangeMenu__Callback(this, v25, v24, v22);
      return;
  }
  this->fields.openSelectMember = -1;
  this->fields.state = 2;
  PartyOrganizationChangeMenu__SetInput(this, 1, v21);
}


void __fastcall PartyOrganizationChangeMenu__EndOpenTutorialArrow(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x0

  tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
  this->fields.state = 7;
  if ( !tutorialPartyOrganizationChangeEmptyObject )
    sub_B170D4();
  PartyOrganizationChangeObject__SetInput(tutorialPartyOrganizationChangeEmptyObject, 1, 0LL);
}


PartyListViewItem_o *__fastcall PartyOrganizationChangeMenu__GetBaseItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.basePartyItem;
}


PartyListViewItem_o *__fastcall PartyOrganizationChangeMenu__GetItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


void __fastcall PartyOrganizationChangeMenu__Init(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  PartyOrganizationChangeMenu__ClearItem(this, method);
  this->fields.basePartyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.basePartyItem, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.partyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyOrganizationChangeMenu__IsHintDialog(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestPhaseMaster_o *v11; // x0
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FDDF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FDDF9 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !QuestHintMaster__TryGetEntity(
          (QuestHintMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          questId,
          questPhase,
          0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v11 )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(v11, &v14, questId, questPhase, 0LL) )
    {
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1, 0LL);
      }
LABEL_19:
      sub_B170D4();
    }
    return 0;
  }
  return 1;
}


bool __fastcall PartyOrganizationChangeMenu__IsThroughSelect(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.openSelectMember >= 0;
}


void __fastcall PartyOrganizationChangeMenu__ModifyItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *basePartyItem; // x0
  const MethodInfo *v4; // x1
  PartyListViewItem_o *partyItem; // x0
  const MethodInfo *v6; // x1
  PartyListViewItem_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v12; // x20
  int max_length; // w9
  PartyOrganizationChangeObject_o *v14; // x0

  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem
    || (PartyListViewItem__Modify(basePartyItem, method), (partyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__Modify(partyItem, v4), (v7 = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__CheckRestriction(v7, v6),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v12 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      sub_B17100(v8, v9, v10);
      sub_B170A0();
    }
    v14 = partyOrganizationChangeObjectList->m_Items[v12];
    if ( v14 )
    {
      PartyOrganizationChangeObject__ModifyItem(v14, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v12;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_10;
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickCancel(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 0, -1, v2);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickDecide(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w8
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FDDF4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FDDF4 = 1;
  }
  state = this->fields.state;
  if ( state == 7 )
  {
    if ( this->fields.mode == 5 )
    {
      this->fields.state = 8;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__,
        0LL);
      if ( !Instance )
        sub_B170D4();
      CommonUI__CloseTutorialNotificationDialogArrow_18262716(Instance, v13, 0LL);
    }
  }
  else if ( state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 1, -1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__OnClickEmptyItem(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FDDF8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FDDF8 = 1;
  }
  if ( this->fields.state == 7 && this->fields.mode == 4 )
  {
    this->fields.state = 8;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__CloseTutorialArrowMark(Instance, v13, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickInfomation(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FDDF5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDDF5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 3, -1, v3);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickItem(
        PartyOrganizationChangeMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  int32_t v4; // w1

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( result == 2 )
      v4 = 6;
    else
      v4 = 5;
    PartyOrganizationChangeMenu__Callback(this, v4, n, method);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickPointEvent(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FDDF6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDDF6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 4, -1, v3);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickQuestInfomation(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FDDF7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FDDF7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 7, -1, v3);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickRemove(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    PartyOrganizationChangeMenu__Callback(this, 2, -1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__Open(
        PartyOrganizationChangeMenu_o *this,
        int32_t kind,
        int32_t tutorialMode,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *partyItem,
        int32_t selectMember,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationChangeMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x2
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *explanationBase; // x0
  UILabel_o *explanationLabel; // x22
  System_String_o *v76; // x0
  UnityEngine_GameObject_o *titleExplanationBase; // x0
  const MethodInfo *v78; // x2
  UnityEngine_GameObject_o *v79; // x0
  UIRangeLabel_o *titleExplanationLabel; // x21
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Action_o *v89; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  UnityEngine_GameObject_o *v120; // x0
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // x2
  const MethodInfo *v123; // x1
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FDDF0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_EndOpen__, v21);
    sub_B16FFC(&StringLiteral_10329, v22);
    sub_B16FFC(&StringLiteral_10353, v23);
    byte_40FDDF0 = 1;
  }
  message = 0LL;
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = kind;
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&tutorialMode,
        (System_String_array **)basePartyItem,
        (System_Boolean_array **)partyItem,
        *(System_Int32_array ***)&selectMember,
        (System_Int32_array *)setupInfo,
        (System_Int32_array *)questRestrictionInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      this->fields.basePartyItem = basePartyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      this->fields.partyItem = partyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.setupInfo,
        (System_Int32_array **)setupInfo,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
        (System_Int32_array **)questRestrictionInfo,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      explanationBase = this->fields.explanationBase;
      if ( !explanationBase )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(explanationBase, 1, 0LL);
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_10353, 0LL);
      if ( !explanationLabel )
        goto LABEL_25;
      UILabel__set_text(explanationLabel, v76, 0LL);
      titleExplanationBase = this->fields.titleExplanationBase;
      if ( !titleExplanationBase )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(titleExplanationBase, 0, 0LL);
      if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0LL) )
      {
        v79 = this->fields.titleExplanationBase;
        if ( !v79 )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive(v79, 1, 0LL);
        titleExplanationLabel = this->fields.titleExplanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_10329, 0LL);
        v82 = System_String__Concat_43743732(v81, message, 0LL);
        if ( !titleExplanationLabel )
LABEL_25:
          sub_B170D4();
        UIRangeLabel__Set(titleExplanationLabel, v82, 0LL, 1, 0, 0LL);
      }
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v78);
      PartyOrganizationChangeMenu__SetInput(this, 0, v83);
      PartyOrganizationChangeMenu__SetupButton(this, 0, v84);
      this->fields.state = 1;
      v89 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v85, v86, v87, v88);
      System_Action___ctor(v89, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v89, 0LL);
      break;
    case 2:
    case 3:
    case 7:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&tutorialMode,
        (System_String_array **)basePartyItem,
        (System_Boolean_array **)partyItem,
        *(System_Int32_array ***)&selectMember,
        (System_Int32_array *)setupInfo,
        (System_Int32_array *)questRestrictionInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      this->fields.basePartyItem = basePartyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      this->fields.partyItem = partyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      this->fields.openSelectMember = selectMember;
      goto LABEL_23;
    case 5:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&tutorialMode,
        (System_String_array **)basePartyItem,
        (System_Boolean_array **)partyItem,
        *(System_Int32_array ***)&selectMember,
        (System_Int32_array *)setupInfo,
        (System_Int32_array *)questRestrictionInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      this->fields.basePartyItem = basePartyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      this->fields.partyItem = partyItem;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.setupInfo,
        (System_Int32_array **)setupInfo,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
        (System_Int32_array **)questRestrictionInfo,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v120 )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(v120, 1, 0LL);
LABEL_23:
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v42);
      PartyOrganizationChangeMenu__SetInput(this, 0, v121);
      PartyOrganizationChangeMenu__SetupButton(this, 1, v122);
      PartyOrganizationChangeMenu__EndOpen(this, v123);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__SetInput(
        PartyOrganizationChangeMenu_o *this,
        bool isInput,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  PartyOrganizationChangeObject_o *v8; // x0

  partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
  if ( !partyOrganizationChangeObjectList )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = isInput;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, isInput, method);
      sub_B170A0();
    }
    v8 = partyOrganizationChangeObjectList->m_Items[v5];
    if ( v8 )
    {
      PartyOrganizationChangeObject__SetInput(v8, v6, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v5;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_7;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__SetItem(
        PartyOrganizationChangeMenu_o *this,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyListViewIndicator_o *partyListViewIndicator; // x0
  const MethodInfo *v7; // x2
  PartyListViewIndicator_o *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v15; // x20
  int max_length; // w9
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_o *v18; // x22
  PartyOrganizationChangeObject_CallbackFunc_o *v19; // x23

  if ( (byte_40FDDEF & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, *(_QWORD *)&friendBonusVal);
    sub_B16FFC(&Method_PartyOrganizationChangeMenu_OnClickItem__, v5);
    byte_40FDDEF = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, method),
        (v8 = this->fields.partyListViewIndicator) == 0LL)
    || (PartyListViewIndicator__DispFriendPointUpBonus(v8, friendBonusVal, v7),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  v15 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v15 >= max_length )
      break;
    if ( (unsigned int)v15 >= max_length )
    {
      sub_B17100(v9, v10, v11);
      sub_B170A0();
    }
    partyItem = this->fields.partyItem;
    v18 = partyOrganizationChangeObjectList->m_Items[v15];
    v19 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_B170CC(
                                                            PartyOrganizationChangeObject_CallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12,
                                                            v13);
    PartyOrganizationChangeObject_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_OnClickItem__,
      0LL);
    if ( v18 )
    {
      PartyOrganizationChangeObject__SetItem(v18, partyItem, v15, v19, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v15;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu__SetupButton(
        PartyOrganizationChangeMenu_o *this,
        bool isMove,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct QuestRestrictionInfo_o *v13; // x0
  struct UICommonButton_o *partyRemoveButton; // x0
  UnityEngine_Component_o *partyPointEventButton; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *v18; // x0
  const MethodInfo *v19; // x1
  bool v20; // w0
  bool v21; // w21
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  PartyOrganizationChangeMenu_c *v24; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  int v29; // w21
  float OffsetX; // s0
  UnityEngine_Component_o *hintDialogButton; // x0
  bool v32; // w1
  struct QuestRestrictionInfo_o *v33; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  UnityEngine_Component_o *questInfoButton; // x0
  UnityEngine_GameObject_o *v37; // x0
  BalanceConfig_c *v38; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19

  if ( (byte_40FDDF3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, isMove);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&System_Convert_TypeInfo, v7);
    sub_B16FFC(&FSUtility_TypeInfo, v8);
    sub_B16FFC(&PartyOrganizationChangeMenu_TypeInfo, v9);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_17080, v11);
    byte_40FDDF3 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_8;
    v13 = this->fields.questRestrictionInfo;
    if ( !v13 )
      goto LABEL_52;
    if ( v13->fields.isFixedMyServantSingle || QuestRestrictionInfo__IsUseEventDeck(v13, 0LL) )
    {
LABEL_8:
      partyRemoveButton = this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_52;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, bool, Il2CppMethodPointer))partyRemoveButton->klass->vtable._14_SetState.method)(
        partyRemoveButton,
        3LL,
        isMove,
        partyRemoveButton->klass->vtable._15_OnPress.methodPtr);
    }
  }
  partyPointEventButton = (UnityEngine_Component_o *)this->fields.partyPointEventButton;
  if ( !partyPointEventButton )
    goto LABEL_52;
  setupInfo = this->fields.setupInfo;
  gameObject = UnityEngine_Component__get_gameObject(partyPointEventButton, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.setupInfo != 0LL, 0LL);
  v18 = this->fields.partyPointEventButton;
  if ( !v18 )
    goto LABEL_52;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v18->klass->vtable._14_SetState.method)(
    v18,
    0LL,
    isMove,
    v18->klass->vtable._15_OnPress.methodPtr);
  v20 = PartyOrganizationChangeMenu__IsHintDialog(this, v19);
  if ( !this->fields.hintDialogButton )
    goto LABEL_52;
  v21 = v20;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.hintDialogButton, 0LL);
  v23 = v22;
  if ( v21 )
  {
    v24 = PartyOrganizationChangeMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationChangeMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationChangeMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationChangeMenu_TypeInfo);
      v24 = PartyOrganizationChangeMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v24->static_fields->LAYOUT_POS_X_HINT;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v26 = System_Convert__ToInt32_41746392(setupInfo != 0LL, 0LL);
    if ( LAYOUT_POS_X_HINT )
    {
      if ( (unsigned int)v26 >= LAYOUT_POS_X_HINT->max_length )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      v29 = LAYOUT_POS_X_HINT->m_Items[(int)v26 + 1];
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v23, (float)v29 - OffsetX, 0LL);
      hintDialogButton = (UnityEngine_Component_o *)this->fields.hintDialogButton;
      if ( hintDialogButton )
      {
        v22 = UnityEngine_Component__get_gameObject(hintDialogButton, 0LL);
        if ( v22 )
        {
          v32 = 1;
          goto LABEL_31;
        }
      }
    }
LABEL_52:
    sub_B170D4();
  }
  if ( !v22 )
    goto LABEL_52;
  v32 = 0;
LABEL_31:
  UnityEngine_GameObject__SetActive(v22, v32, 0LL);
  if ( this->fields.menuKind == 8 || (v33 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v33->fields.questId;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  questInfoButton = (UnityEngine_Component_o *)this->fields.questInfoButton;
  if ( !questInfoButton )
    goto LABEL_52;
  v37 = UnityEngine_Component__get_gameObject(questInfoButton, 0LL);
  if ( !v37 )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(v37, IsDisplayQuestInformation, 0LL);
  v38 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v38->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25438860(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17080, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__add_callbackFunc(
        PartyOrganizationChangeMenu_o *this,
        PartyOrganizationChangeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeMenu_o *v11; // x0
  PartyOrganizationChangeMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDDED & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, value);
    byte_40FDDED = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationChangeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationChangeMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationChangeMenu__remove_callbackFunc(
        PartyOrganizationChangeMenu_o *this,
        PartyOrganizationChangeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationChangeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDDEE & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, value);
    byte_40FDDEE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeMenu_CallbackFunc_c *)v8->klass != PartyOrganizationChangeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationChangeMenu__IsThroughSelect(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu_CallbackFunc___ctor(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall PartyOrganizationChangeMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = n;
  v13 = result;
  if ( (byte_40F836F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&PartyOrganizationChangeMenu_ResultKind_TypeInfo, v9);
    byte_40F836F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationChangeMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall PartyOrganizationChangeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu_CallbackFunc__Invoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyOrganizationChangeMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationChangeMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationChangeMenu_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationChangeMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)n, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)n, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)n, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)n,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)n,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)n, v22);
    goto LABEL_38;
  }
}