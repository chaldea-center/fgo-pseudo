void __fastcall WarBoardBackMenuComponent___ctor(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B140F2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B140F2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__EndClose(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PartyOrganizationUtility_o *p_cancelCallbackFunc; // x0
  struct System_Action_o *cancelCallbackFunc; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x19

  if ( (byte_4B140F0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B140F0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  p_cancelCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.cancelCallbackFunc;
  cancelCallbackFunc = this->fields.cancelCallbackFunc;
  if ( cancelCallbackFunc )
  {
    p_cancelCallbackFunc->klass = 0LL;
    sub_1BCA784(p_cancelCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))cancelCallbackFunc->fields.m_target)(
      cancelCallbackFunc->fields.original_method_info,
      *(_QWORD *)&cancelCallbackFunc->fields.extra_arg);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  UnityEngine_Object__Destroy_70154244(v15, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Init(WarBoardBackMenuComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickBackButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B140EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickBackButton__, v6, v7);
    byte_4B140EF = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v8 = Method_WarBoardBackMenuComponent_OnClickBackButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickBackButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_WarBoardBackMenuComponent_OnClickBackButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickCancelButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B140E9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickCancelButton__, v6, v7);
    byte_4B140E9 = 1;
  }
  if ( this->fields.state == 1 )
    this->fields.state = 0;
  v8 = Method_WarBoardBackMenuComponent_OnClickCancelButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickCancelButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_WarBoardBackMenuComponent_OnClickCancelButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarBoardBackMenuComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickRetireButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x23
  System_String_o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1

  if ( (byte_4B140EC & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickRetireButton__, v8, v9);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__, v10, v11);
    sub_1BCA7E0(&StringLiteral_15576/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_15574/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15578/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_15577/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, v18, v19);
    byte_4B140EC = 1;
  }
  v20 = Method_WarBoardBackMenuComponent_OnClickRetireButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickRetireButton__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_WarBoardBackMenuComponent_OnClickRetireButton__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15577/*"WARBOARD_MENU_RETIRE_CONFIRMATION_TITLE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15574/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15578/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15576/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v28, v29, v30);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialogFinalCheck__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v32, v33);
  CommonUI__OpenConfirmDialog_30766268(
    (CommonUI_o *)Instance,
    v24,
    v25,
    v26,
    v27,
    1,
    v31,
    28,
    28,
    99.0,
    15.0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarBoardBackMenuComponent_o *v4; // x20
  struct System_Action_o *retireCallbackFunc; // x8

  v4 = this;
  if ( (byte_4B140EE & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1BCA7E0(
                                            &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                            isDecide,
                                            method);
    byte_4B140EE = 1;
  }
  if ( isDecide )
  {
    retireCallbackFunc = v4->fields.retireCallbackFunc;
    if ( !retireCallbackFunc )
      goto LABEL_8;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))retireCallbackFunc->fields.m_target)(
      retireCallbackFunc->fields.original_method_info,
      *(_QWORD *)&retireCallbackFunc->fields.extra_arg,
      method);
  }
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickRetireConfirmDialogFinalCheck(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *v22; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  CommonConfirmDialog_ClickDelegate_o *v29; // x24
  struct System_Action_o *retireCallbackFunc; // x8

  if ( (byte_4B140ED & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__, v11, v12);
    sub_1BCA7E0(&StringLiteral_15576/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_15575/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_15578/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, v17, v18);
    byte_4B140ED = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( !isDecide )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (CommonUI_o *)Instance->fields.userPresentBoxWindowPath) == 0LL
    || (Instance = (CommonUI_o *)WarBoardData__GetTreasureIdList((WarBoardData_o *)Instance, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v20);
  }
  if ( !Instance->fields.m_CancellationTokenSource )
  {
    retireCallbackFunc = this->fields.retireCallbackFunc;
    if ( retireCallbackFunc )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))retireCallbackFunc->fields.m_target)(
        retireCallbackFunc->fields.original_method_info,
        *(_QWORD *)&retireCallbackFunc->fields.extra_arg);
      return;
    }
    goto LABEL_16;
  }
  v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15575/*"WARBOARD_MENU_RETIRE_CONFIRMATION_MESSAGE_GET_TREASURE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15578/*"WARBOARD_MENU_RETIRE_CONFIRMATION_YES"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15576/*"WARBOARD_MENU_RETIRE_CONFIRMATION_NO"*/, 0LL);
  v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v26, v27, v28);
  CommonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickRetireConfirmDialog__,
    0LL);
  if ( !v22 )
    goto LABEL_16;
  CommonUI__OpenConfirmDialog_30766268((CommonUI_o *)v22, 0LL, v23, v24, v25, 1, v29, 28, 28, 99.0, 15.0, 0, 0, 0LL);
}


void __fastcall WarBoardBackMenuComponent__OnClickSuspendButton(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x23
  System_String_o *v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1

  if ( (byte_4B140EA & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickSuspendButton__, v8, v9);
    sub_1BCA7E0(&Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__, v10, v11);
    sub_1BCA7E0(&StringLiteral_15581/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_15583/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15582/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_15580/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, v18, v19);
    byte_4B140EA = 1;
  }
  v20 = Method_WarBoardBackMenuComponent_OnClickSuspendButton__;
  if ( (*((_BYTE *)Method_WarBoardBackMenuComponent_OnClickSuspendButton__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_WarBoardBackMenuComponent_OnClickSuspendButton__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_15582/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_TITLE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_15580/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_MESSAGE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15583/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_YES"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15581/*"WARBOARD_MENU_SUSPEND_CONFIRMATION_NO"*/, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v28, v29, v30);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_WarBoardBackMenuComponent_OnClickSusupendConfirmDialog__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v32, v33);
  CommonUI__OpenConfirmDialog_30766268(
    (CommonUI_o *)Instance,
    v24,
    v25,
    v26,
    v27,
    1,
    v31,
    28,
    28,
    99.0,
    15.0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackMenuComponent__OnClickSusupendConfirmDialog(
        WarBoardBackMenuComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarBoardBackMenuComponent_o *v4; // x20
  struct System_Action_o *suspendCallbackFunc; // x8

  v4 = this;
  if ( (byte_4B140EB & 1) == 0 )
  {
    this = (WarBoardBackMenuComponent_o *)sub_1BCA7E0(
                                            &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                            isDecide,
                                            method);
    byte_4B140EB = 1;
  }
  if ( isDecide )
  {
    suspendCallbackFunc = v4->fields.suspendCallbackFunc;
    if ( !suspendCallbackFunc )
      goto LABEL_8;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))suspendCallbackFunc->fields.m_target)(
      suspendCallbackFunc->fields.original_method_info,
      *(_QWORD *)&suspendCallbackFunc->fields.extra_arg,
      method);
  }
  this = (WarBoardBackMenuComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, isDecide);
  CommonUI__CloseConfirmDialog((CommonUI_o *)this, 0LL);
}


void __fastcall WarBoardBackMenuComponent__Open(
        WarBoardBackMenuComponent_o *this,
        System_Action_o *suspendCallback,
        System_Action_o *retireCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  UnityEngine_Object_o *menuTitleTxt; // x20
  __int64 v36; // x1
  UILabel_o *v37; // x20
  System_String_o *gameObject; // x0
  __int64 v39; // x1
  UnityEngine_Object_o *suspendButtonTxt; // x20
  __int64 v41; // x1
  UILabel_o *v42; // x20
  UnityEngine_Object_o *retireButtonTxt; // x20
  __int64 v44; // x1
  UILabel_o *v45; // x20
  UnityEngine_Object_o *cancelButtonTxt; // x20
  __int64 v47; // x1
  UILabel_o *v48; // x20

  if ( (byte_4B140E8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, suspendCallback, retireCallback);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_15579/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15572/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_15573/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_15584/*"WARBOARD_MENU_TITLE_LABEL"*/, v20, v21);
    byte_4B140E8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.suspendCallbackFunc = suspendCallback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.suspendCallbackFunc,
      (int64_t)suspendCallback,
      (int64_t)retireCallback,
      (int32_t)cancelCallback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.retireCallbackFunc = retireCallback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.retireCallbackFunc,
      (int64_t)retireCallback,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    this->fields.cancelCallbackFunc = cancelCallback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.cancelCallbackFunc,
      (int64_t)cancelCallback,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    menuTitleTxt = (UnityEngine_Object_o *)this->fields.menuTitleTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality(menuTitleTxt, 0LL, 0LL) )
    {
      v37 = this->fields.menuTitleTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15584/*"WARBOARD_MENU_TITLE_LABEL"*/, 0LL);
      if ( !v37 )
        goto LABEL_34;
      UILabel__set_text(v37, gameObject, 0LL);
    }
    suspendButtonTxt = (UnityEngine_Object_o *)this->fields.suspendButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    if ( UnityEngine_Object__op_Inequality(suspendButtonTxt, 0LL, 0LL) )
    {
      v42 = this->fields.suspendButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15579/*"WARBOARD_MENU_SUSPEND_BUTTON_LABEL"*/, 0LL);
      if ( !v42 )
        goto LABEL_34;
      UILabel__set_text(v42, gameObject, 0LL);
    }
    retireButtonTxt = (UnityEngine_Object_o *)this->fields.retireButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Inequality(retireButtonTxt, 0LL, 0LL) )
    {
      v45 = this->fields.retireButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15573/*"WARBOARD_MENU_RETIRE_BUTTON_LABEL"*/, 0LL);
      if ( !v45 )
        goto LABEL_34;
      UILabel__set_text(v45, gameObject, 0LL);
    }
    cancelButtonTxt = (UnityEngine_Object_o *)this->fields.cancelButtonTxt;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
    if ( UnityEngine_Object__op_Inequality(cancelButtonTxt, 0LL, 0LL) )
    {
      v48 = this->fields.cancelButtonTxt;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_15572/*"WARBOARD_MENU_BACK_BUTTON_LABEL"*/, 0LL);
      if ( !v48 )
        goto LABEL_34;
      UILabel__set_text(v48, gameObject, 0LL);
    }
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
      return;
    }
LABEL_34:
    sub_1BCAA3C(gameObject, v39);
  }
}


System_String_o *__fastcall WarBoardBackMenuComponent__get_closeBtnPath(
        WarBoardBackMenuComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B140F1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3035/*"BG/BackButton"*/, method, v2);
    byte_4B140F1 = 1;
  }
  return (System_String_o *)StringLiteral_3035/*"BG/BackButton"*/;
}