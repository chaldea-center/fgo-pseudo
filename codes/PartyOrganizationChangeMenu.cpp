void __fastcall PartyOrganizationChangeMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_Int32_array **v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_Int32_array **v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v14; // x0

  if ( (byte_418B584 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&PartyOrganizationChangeMenu_TypeInfo, v2);
    byte_418B584 = 1;
  }
  v3 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  v11 = *((_DWORD *)v3 + 6);
  v12 = v3;
  if ( !v11 || (*((_DWORD *)v3 + 8) = 45, v11 == 1) )
  {
    v14 = sub_B2C460(v3);
    sub_B2C400(v14, 0LL);
  }
  *((_DWORD *)v3 + 9) = 145;
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationChangeMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B2C2F8(static_fields, v12, v5, v6, v7, v8, v9, v10);
}


void __fastcall PartyOrganizationChangeMenu___ctor(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationChangeObject_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418B583 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BaseMenu_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationChangeObject___TypeInfo, v4);
    byte_418B583 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationChangeObject_array *)sub_B2C374(
                                                       PartyOrganizationChangeObject___TypeInfo,
                                                       (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.partyOrganizationChangeObjectList = v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.partyOrganizationChangeObjectList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_B2C2F8(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    PartyOrganizationChangeMenu_CallbackFunc__Invoke(v9, result, n, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__ClearItem(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mainDeckBase; // x0
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x20
  int max_length; // w9
  __int64 v7; // x0

  mainDeckBase = this->fields.mainDeckBase;
  if ( !mainDeckBase
    || (UnityEngine_GameObject__SetActive(mainDeckBase, 0, 0LL),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_8:
    sub_B2C434(mainDeckBase, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v7 = sub_B2C460(mainDeckBase);
      sub_B2C400(v7, 0LL);
    }
    mainDeckBase = (UnityEngine_GameObject_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( mainDeckBase )
    {
      PartyOrganizationChangeObject__ClearItem((PartyOrganizationChangeObject_o *)mainDeckBase, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v5;
      if ( partyOrganizationChangeObjectList )
        continue;
    }
    goto LABEL_8;
  }
}


void __fastcall PartyOrganizationChangeMenu__Close(PartyOrganizationChangeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationChangeMenu__Close_31964824(this, 0LL, v2);
}


void __fastcall PartyOrganizationChangeMenu__Close_31964824(
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
  System_Action_o *v11; // x20

  if ( (byte_418B57B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_EndClose__, v10);
    byte_418B57B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__EndCloseTutorialArrowDecide(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton) == 0LL)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL)) == 0LL )
  {
    sub_B2C434(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 1, -1, v4);
}


void __fastcall PartyOrganizationChangeMenu__EndCloseTutorialArrowEmptyItem(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x3

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL)) == 0LL )
  {
    sub_B2C434(tutorialMaskBase, method);
  }
  UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL);
  this->fields.state = 3;
  PartyOrganizationChangeMenu__Callback(this, 5, 1, v4);
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
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  int32_t v23; // w8
  int32_t v24; // w2
  int32_t v25; // w1
  int32_t mode; // w8
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_CallbackFunc_o *v29; // x22
  FSOffset_o *tutorialAddOffsetFS; // x20
  UnityEngine_Vector2_o v31; // kr00_8
  float v32; // s4
  float v33; // s5
  float v34; // s6
  float v35; // s7
  WebViewManager_o *v36; // x0
  const char *name; // kr08_8
  Il2CppClass *klass; // kr10_8
  CommonUI_o *v39; // x20
  System_Action_o *v40; // x21
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 openSelectMember; // x9
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr18_8
  float v45; // s4
  float v46; // s5
  float v47; // s6
  float v48; // s7
  CommonUI_o *Instance; // x20
  System_String_o *v50; // x0
  Il2CppMethodPointer methodPointer; // kr20_8
  void *invoker_method; // kr28_8
  System_String_o *v53; // x21
  System_Action_o *v54; // x22
  BattleServantConfConponent_o *p_openCallbackFunc; // x19
  System_Action_o *v56; // x20
  struct System_Action_o *openCallbackFunc; // t1
  __int64 v58; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v65; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418B57A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_FSOffset___, v10);
    sub_B2C35C(&FSUtility_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, v13);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_OnClickEmptyItem__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_10102/*"OpenServantDetail"*/, v16);
    sub_B2C35C(&StringLiteral_13517/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, v17);
    byte_418B57A = 1;
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
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_50;
        tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
        if ( !tutorialMaskBase )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_50;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
          tutorialMaskBase,
          0LL,
          0LL,
          tutorialMaskBase->klass[1]._1.interfaceOffsets);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyDecideButton;
        if ( !tutorialMaskBase )
          goto LABEL_50;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)tutorialMaskBase,
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 1, 0LL);
        v63.fields.m_Width = 190.0;
        v63.fields.m_Height = 90.0;
        v63.fields.m_XMin = AddOffset.fields.x + 329.0;
        v63.fields.m_YMin = AddOffset.fields.y + -291.0;
        UnityEngine_Rect___ctor(v63, v45, v46, v47, v48, &methoda);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13517/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION4"*/, 0LL);
        methodPointer = methoda.methodPointer;
        invoker_method = methoda.invoker_method;
        v53 = v50;
        v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v54, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0LL);
        if ( !Instance )
          goto LABEL_50;
        v61.fields.x = AddOffset.fields.x + 422.0;
        v61.fields.y = AddOffset.fields.y + -231.0;
        *(_QWORD *)&v64.fields.m_XMin = methodPointer;
        *(_QWORD *)&v64.fields.m_Width = invoker_method;
        CommonUI__OpenTutorialNotificationDialogArrow(Instance, v53, v61, v64, 0.0, 0LL, -1, v54, 0LL);
      }
      else if ( mode == 4 )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( !tutorialMaskBase )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
        if ( !tutorialMaskBase )
          goto LABEL_50;
        tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
        if ( !tutorialMaskBase )
          goto LABEL_50;
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
        partyItem = this->fields.partyItem;
        v29 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
        PartyOrganizationChangeObject_CallbackFunc___ctor(
          v29,
          (Il2CppObject *)this,
          Method_PartyOrganizationChangeMenu_OnClickEmptyItem__,
          0LL);
        if ( !tutorialPartyOrganizationChangeEmptyObject )
          goto LABEL_50;
        PartyOrganizationChangeObject__SetItem(tutorialPartyOrganizationChangeEmptyObject, partyItem, 1, v29, 0LL);
        tutorialAddOffsetFS = this->fields.tutorialAddOffsetFS;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        v31 = FSUtility__GetAddOffset(tutorialAddOffsetFS, 1, 0LL);
        v62.fields.m_Width = 150.0;
        v62.fields.m_Height = 380.0;
        v62.fields.m_XMin = v31.fields.x + -320.0;
        v62.fields.m_YMin = v31.fields.y + -205.0;
        UnityEngine_Rect___ctor(v62, v32, v33, v34, v35, (const MethodInfo *)&methoda.name);
        v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        name = methoda.name;
        klass = methoda.klass;
        v39 = (CommonUI_o *)v36;
        v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v40, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpenTutorialArrow__, 0LL);
        if ( !v39 )
          goto LABEL_50;
        v60.fields.x = v31.fields.x + -245.0;
        v60.fields.y = v31.fields.y + 70.0;
        *(_QWORD *)&v65.fields.m_XMin = name;
        *(_QWORD *)&v65.fields.m_Width = klass;
        CommonUI__OpenTutorialArrowMark(v39, v60, 0.0, v65, v40, 0LL);
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
    v56 = openCallbackFunc;
    if ( openCallbackFunc )
    {
      p_openCallbackFunc->klass = 0LL;
      sub_B2C2F8(p_openCallbackFunc, 0LL, (System_String_array **)v2, v3, v4, v5, v6, v7);
      System_Action__Invoke(v56, 0LL);
    }
    return;
  }
  v18 = (BattleServantConfConponent_o *)&this->fields.openCallbackFunc;
  v19 = this->fields.openCallbackFunc;
  this->fields.state = 3;
  if ( v19 )
  {
    v18->klass = 0LL;
    sub_B2C2F8(v18, 0LL, (System_String_array **)v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v19, 0LL);
  }
  if ( !this->fields.callbackFunc )
    return;
  tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyItem;
  if ( !tutorialMaskBase )
LABEL_50:
    sub_B2C434(tutorialMaskBase, method);
  PartyListViewItem__GetMember((PartyListViewItem_o *)tutorialMaskBase, this->fields.openSelectMember, v2);
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
          v58 = sub_B2C460(tutorialMaskBase);
          sub_B2C400(v58, 0LL);
        }
        tutorialMaskBase = (UnityEngine_GameObject_o *)partyOrganizationChangeObjectList->m_Items[openSelectMember];
        if ( tutorialMaskBase )
        {
          UnityEngine_Component__SendMessage_40641368(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (System_String_o *)StringLiteral_10102/*"OpenServantDetail"*/,
            0LL);
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
    sub_B2C434(0LL, method);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.basePartyItem, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.partyItem = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v9, v10, v11, v12, v13, v14);
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
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_418B582 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418B582 = 1;
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
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v14, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B2C434(Master_WarQuestSelectionMaster, v10);
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
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v5; // x20
  int max_length; // w9
  __int64 v7; // x0

  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem
    || (PartyListViewItem__Modify(basePartyItem, method), (basePartyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__Modify(basePartyItem, method), (basePartyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__CheckRestriction(basePartyItem, method),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_10:
    sub_B2C434(basePartyItem, method);
  }
  v5 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v7 = sub_B2C460(basePartyItem);
      sub_B2C400(v7, 0LL);
    }
    basePartyItem = (PartyListViewItem_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( basePartyItem )
    {
      PartyOrganizationChangeObject__ModifyItem((PartyOrganizationChangeObject_o *)basePartyItem, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v5;
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B57D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418B57D = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v9,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowDecide__,
        0LL);
      if ( !Instance )
        sub_B2C434(v10, v11);
      CommonUI__CloseTutorialNotificationDialogArrow_17996480(Instance, v9, 0LL);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418B581 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_418B581 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_EndCloseTutorialArrowEmptyItem__,
      0LL);
    if ( !Instance )
      sub_B2C434(v10, v11);
    CommonUI__CloseTutorialArrowMark(Instance, v9, 0LL);
  }
}


void __fastcall PartyOrganizationChangeMenu__OnClickInfomation(
        PartyOrganizationChangeMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418B57E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B57E = 1;
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

  if ( (byte_418B57F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B57F = 1;
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

  if ( (byte_418B580 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B580 = 1;
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
  __int64 v74; // x1
  UILabel_o *explanationLabel; // x22
  const MethodInfo *v76; // x2
  UIRangeLabel_o *titleExplanationLabel; // x21
  System_String_o *v78; // x0
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  System_Action_o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  const MethodInfo *v112; // x2
  const MethodInfo *v113; // x2
  const MethodInfo *v114; // x1
  System_String_o *message; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B579 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_EndOpen__, v21);
    sub_B2C35C(&StringLiteral_10362/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, v22);
    sub_B2C35C(&StringLiteral_10386/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, v23);
    byte_418B579 = 1;
  }
  message = 0LL;
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = kind;
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&tutorialMode,
        (System_String_array **)basePartyItem,
        (System_Boolean_array **)partyItem,
        *(System_Int32_array ***)&selectMember,
        (System_Int32_array *)setupInfo,
        (System_Int32_array *)questRestrictionInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      this->fields.basePartyItem = basePartyItem;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      this->fields.partyItem = partyItem;
      sub_B2C2F8(
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.setupInfo,
        (System_Int32_array **)setupInfo,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(
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
      gameObject = this->fields.explanationBase;
      if ( !gameObject )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10386/*"PARTY_ORGANIZATION_SERVANT_CHANGE_EXPLANATION"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_25;
      UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
      gameObject = this->fields.titleExplanationBase;
      if ( !gameObject )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0LL) )
      {
        gameObject = this->fields.titleExplanationBase;
        if ( !gameObject )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        titleExplanationLabel = this->fields.titleExplanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_10362/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_EXPLANATION_COLOR"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Concat_44305532(v78, message, 0LL);
        if ( !titleExplanationLabel )
LABEL_25:
          sub_B2C434(gameObject, v74);
        UIRangeLabel__Set(titleExplanationLabel, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      }
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v76);
      PartyOrganizationChangeMenu__SetInput(this, 0, v79);
      PartyOrganizationChangeMenu__SetupButton(this, 0, v80);
      this->fields.state = 1;
      v81 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v81, (Il2CppObject *)this, Method_PartyOrganizationChangeMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v81, 0LL);
      break;
    case 2:
    case 3:
    case 7:
      this->fields.mode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&tutorialMode,
        (System_String_array **)basePartyItem,
        (System_Boolean_array **)partyItem,
        *(System_Int32_array ***)&selectMember,
        (System_Int32_array *)setupInfo,
        (System_Int32_array *)questRestrictionInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      this->fields.basePartyItem = basePartyItem;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      this->fields.partyItem = partyItem;
      sub_B2C2F8(
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        *(System_String_array ***)&tutorialMode,
        (System_String_array **)basePartyItem,
        (System_Boolean_array **)partyItem,
        *(System_Int32_array ***)&selectMember,
        (System_Int32_array *)setupInfo,
        (System_Int32_array *)questRestrictionInfo);
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.openCallbackFunc,
        (System_Int32_array **)openCallback,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      this->fields.basePartyItem = basePartyItem;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.basePartyItem,
        (System_Int32_array **)basePartyItem,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      this->fields.partyItem = partyItem;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.partyItem,
        (System_Int32_array **)partyItem,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      this->fields.openSelectMember = selectMember;
      this->fields.setupInfo = setupInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.setupInfo,
        (System_Int32_array **)setupInfo,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
        (System_Int32_array **)questRestrictionInfo,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_25;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_23:
      PartyOrganizationChangeMenu__SetItem(this, friendBonusVal, v42);
      PartyOrganizationChangeMenu__SetInput(this, 0, v112);
      PartyOrganizationChangeMenu__SetupButton(this, 1, v113);
      PartyOrganizationChangeMenu__EndOpen(this, v114);
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
  PartyOrganizationChangeMenu_o *v4; // x19
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9
  __int64 v8; // x0

  partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
  if ( !partyOrganizationChangeObjectList )
LABEL_7:
    sub_B2C434(this, isInput);
  v4 = this;
  v5 = 0LL;
  v6 = isInput;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    this = (PartyOrganizationChangeMenu_o *)partyOrganizationChangeObjectList->m_Items[v5];
    if ( this )
    {
      PartyOrganizationChangeObject__SetInput((PartyOrganizationChangeObject_o *)this, v6, 0LL);
      partyOrganizationChangeObjectList = v4->fields.partyOrganizationChangeObjectList;
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
  struct PartyOrganizationChangeObject_array *partyOrganizationChangeObjectList; // x8
  __int64 v9; // x20
  int max_length; // w9
  PartyListViewItem_o *partyItem; // x21
  PartyOrganizationChangeObject_o *v12; // x22
  PartyOrganizationChangeObject_CallbackFunc_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_418B578 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, *(_QWORD *)&friendBonusVal);
    sub_B2C35C(&Method_PartyOrganizationChangeMenu_OnClickItem__, v5);
    byte_418B578 = 1;
  }
  partyListViewIndicator = this->fields.partyListViewIndicator;
  if ( !partyListViewIndicator
    || (PartyListViewIndicator__DrawPartyInfo(partyListViewIndicator, this->fields.partyItem, method),
        (partyListViewIndicator = this->fields.partyListViewIndicator) == 0LL)
    || (PartyListViewIndicator__DispFriendPointUpBonus(partyListViewIndicator, friendBonusVal, v7),
        (partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList) == 0LL) )
  {
LABEL_11:
    sub_B2C434(partyListViewIndicator, *(_QWORD *)&friendBonusVal);
  }
  v9 = 0LL;
  while ( 1 )
  {
    max_length = partyOrganizationChangeObjectList->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      v14 = sub_B2C460(partyListViewIndicator);
      sub_B2C400(v14, 0LL);
    }
    partyItem = this->fields.partyItem;
    v12 = partyOrganizationChangeObjectList->m_Items[v9];
    v13 = (PartyOrganizationChangeObject_CallbackFunc_o *)sub_B2C42C(PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    PartyOrganizationChangeObject_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_PartyOrganizationChangeMenu_OnClickItem__,
      0LL);
    if ( v12 )
    {
      PartyOrganizationChangeObject__SetItem(v12, partyItem, v9, v13, 0LL);
      partyOrganizationChangeObjectList = this->fields.partyOrganizationChangeObjectList;
      ++v9;
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
  QuestRestrictionInfo_o *partyRemoveButton; // x0
  struct EventUpValSetupInfo_o *setupInfo; // x22
  const MethodInfo *v15; // x1
  char v16; // w21
  UnityEngine_GameObject_o *v17; // x20
  PartyOrganizationChangeMenu_c *v18; // x0
  struct System_Int32_array *LAYOUT_POS_X_HINT; // x21
  int v20; // w21
  float OffsetX; // s0
  bool v22; // w1
  struct QuestRestrictionInfo_o *v23; // x8
  int32_t questId; // w20
  bool IsDisplayQuestInformation; // w20
  BalanceConfig_c *v26; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSprite; // x19
  __int64 v29; // x0

  if ( (byte_418B57C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, isMove);
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&System_Convert_TypeInfo, v7);
    sub_B2C35C(&FSUtility_TypeInfo, v8);
    sub_B2C35C(&PartyOrganizationChangeMenu_TypeInfo, v9);
    sub_B2C35C(&QuestInformationComponent_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_17146/*"buttontxt_formation_20"*/, v11);
    byte_418B57C = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
      goto LABEL_8;
    partyRemoveButton = this->fields.questRestrictionInfo;
    if ( !partyRemoveButton )
      goto LABEL_52;
    if ( partyRemoveButton->fields.isFixedMyServantSingle
      || QuestRestrictionInfo__IsUseEventDeck(partyRemoveButton, 0LL) )
    {
LABEL_8:
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyRemoveButton;
      if ( !partyRemoveButton )
        goto LABEL_52;
      ((void (__fastcall *)(QuestRestrictionInfo_o *, __int64, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
        partyRemoveButton,
        3LL,
        isMove,
        partyRemoveButton->klass[1]._1.interfaceOffsets);
    }
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_52;
  setupInfo = this->fields.setupInfo;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0LL);
  if ( !partyRemoveButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, this->fields.setupInfo != 0LL, 0LL);
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.partyPointEventButton;
  if ( !partyRemoveButton )
    goto LABEL_52;
  ((void (__fastcall *)(QuestRestrictionInfo_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))partyRemoveButton->klass[1]._1.implementedInterfaces)(
    partyRemoveButton,
    0LL,
    isMove,
    partyRemoveButton->klass[1]._1.interfaceOffsets);
  partyRemoveButton = (QuestRestrictionInfo_o *)PartyOrganizationChangeMenu__IsHintDialog(this, v15);
  if ( !this->fields.hintDialogButton )
    goto LABEL_52;
  v16 = (char)partyRemoveButton;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                                  0LL);
  v17 = (UnityEngine_GameObject_o *)partyRemoveButton;
  if ( (v16 & 1) != 0 )
  {
    v18 = PartyOrganizationChangeMenu_TypeInfo;
    if ( (BYTE3(PartyOrganizationChangeMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationChangeMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationChangeMenu_TypeInfo);
      v18 = PartyOrganizationChangeMenu_TypeInfo;
    }
    LAYOUT_POS_X_HINT = v18->static_fields->LAYOUT_POS_X_HINT;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    partyRemoveButton = (QuestRestrictionInfo_o *)System_Convert__ToInt32_42131944(setupInfo != 0LL, 0LL);
    if ( LAYOUT_POS_X_HINT )
    {
      if ( (unsigned int)partyRemoveButton >= LAYOUT_POS_X_HINT->max_length )
      {
        v29 = sub_B2C460(partyRemoveButton);
        sub_B2C400(v29, 0LL);
      }
      v20 = LAYOUT_POS_X_HINT->m_Items[(int)partyRemoveButton + 1];
      if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
      OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
      GameObjectExtensions__SetLocalPositionX(v17, (float)v20 - OffsetX, 0LL);
      partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.hintDialogButton;
      if ( partyRemoveButton )
      {
        partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)partyRemoveButton,
                                                        0LL);
        if ( partyRemoveButton )
        {
          v22 = 1;
          goto LABEL_31;
        }
      }
    }
LABEL_52:
    sub_B2C434(partyRemoveButton, isMove);
  }
  if ( !partyRemoveButton )
    goto LABEL_52;
  v22 = 0;
LABEL_31:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, v22, 0LL);
  if ( this->fields.menuKind == 8 || (v23 = this->fields.questRestrictionInfo) == 0LL )
  {
    IsDisplayQuestInformation = 0;
  }
  else
  {
    questId = v23->fields.questId;
    if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
    }
    IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
  }
  partyRemoveButton = (QuestRestrictionInfo_o *)this->fields.questInfoButton;
  if ( !partyRemoveButton )
    goto LABEL_52;
  partyRemoveButton = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)partyRemoveButton,
                                                  0LL);
  if ( !partyRemoveButton )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyRemoveButton, IsDisplayQuestInformation, 0LL);
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v26->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL) )
  {
    classInfoSprite = this->fields.classInfoSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetPartyOrganizationImage(classInfoSprite, (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/, 0LL);
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

  if ( (byte_418B576 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, value);
    byte_418B576 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418B577 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationChangeMenu_CallbackFunc_TypeInfo, value);
    byte_418B577 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyOrganizationChangeMenu__IsThroughSelect(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeMenu_CallbackFunc___ctor(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
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
  if ( (byte_4185285 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&PartyOrganizationChangeMenu_ResultKind_TypeInfo, v9);
    byte_4185285 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationChangeMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall PartyOrganizationChangeMenu_CallbackFunc__EndInvoke(
        PartyOrganizationChangeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationChangeMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationChangeMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)n, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)n, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)n, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)n,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)n,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)n, v23);
    goto LABEL_38;
  }
}