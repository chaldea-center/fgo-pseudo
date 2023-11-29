void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x9
  UserPresentBoxErrorDialog_c *v3; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v8; // x8

  if ( (byte_40F9790 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentBoxErrorDialog_TypeInfo, v1);
    byte_40F9790 = 1;
  }
  static_fields = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_POS.fields.x = 0LL;
  static_fields->MESSAGE_POS.fields.z = 0.0;
  v3 = UserPresentBoxErrorDialog_TypeInfo;
  v4 = UserPresentBoxErrorDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_COMMAND_CODE_POS.fields.x = 0xC220000000000000LL;
  v4->MESSAGE_COMMAND_CODE_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->SHOP_POS.fields.x = 0xC322000000000000LL;
  v5->SHOP_POS.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->SHOP_COMMAND_CODE_POS.fields.x = 0xC322000043200000LL;
  v6->SHOP_COMMAND_CODE_POS.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->EXIT_POS.fields.x = 0xC2A40000C36B0000LL;
  v7->EXIT_POS.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->EXIT_COMMAND_CODE_POS.fields.x = 0xC3220000C3200000LL;
  v8->EXIT_COMMAND_CODE_POS.fields.z = 0.0;
}


void __fastcall UserPresentBoxErrorDialog___ctor(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F978F & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F978F = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__ChangeScene(
        UserPresentBoxErrorDialog_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int v27; // w8
  int32_t v28; // w22
  WebViewManager_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  SceneJumpInfo_o *v34; // x0
  SceneJumpInfo_o *v35; // x22
  int32_t v36; // w2
  System_String_o *v37; // x1
  int32_t v38; // w22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  SceneJumpInfo_o *v43; // x0
  bool v44; // zf
  int32_t jumpType; // w21
  AvalonSceneManager_o *Instance; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w1
  __int64 *v52; // x8
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x3
  System_Action_o *v58; // x21

  if ( (byte_40F978D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&scene);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__, v10);
    sub_B16FFC(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_12655, v12);
    sub_B16FFC(&StringLiteral_12612, v13);
    sub_B16FFC(&StringLiteral_12654, v14);
    sub_B16FFC(&StringLiteral_12651, v15);
    byte_40F978D = 1;
  }
  v16 = sub_B170CC(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&scene, method, v3, v4);
  UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor((UserPresentBoxErrorDialog___c__DisplayClass23_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_31;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v16 + 24) = scene;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v27 = *(_DWORD *)(v16 + 24);
  switch ( v27 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v44 = jumpType == 1;
      v29 = (WebViewManager_o *)Instance;
      if ( !v44 )
      {
        if ( Instance )
        {
          v51 = 71;
          v57 = 0LL;
LABEL_29:
          AvalonSceneManager__transitionScene(Instance, v51, 1, v57, 0LL);
          break;
        }
        goto LABEL_31;
      }
      v35 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v47, v48, v49, v50);
      SceneJumpInfo___ctor_29747932(v35, (System_String_o *)StringLiteral_12655, 0LL);
      if ( !v29 )
        goto LABEL_31;
      v51 = 71;
LABEL_28:
      Instance = (AvalonSceneManager_o *)v29;
      v57 = (Il2CppObject *)v35;
      goto LABEL_29;
    case 32:
      v38 = this->fields.jumpType;
      v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v43 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v39, v40, v41, v42);
      v44 = v38 == 1;
      v35 = v43;
      if ( v44 )
        v52 = &StringLiteral_12654;
      else
        v52 = &StringLiteral_12651;
      SceneJumpInfo___ctor_29747932(v43, (System_String_o *)*v52, 0LL);
      if ( !v29 )
        goto LABEL_31;
      v51 = 32;
      goto LABEL_28;
    case 22:
      v28 = this->fields.jumpType;
      if ( v28 == 1 )
      {
        v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v34 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v30, v31, v32, v33);
        v35 = v34;
        v36 = 1;
        v37 = (System_String_o *)StringLiteral_12612;
      }
      else
      {
        v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v34 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v53, v54, v55, v56);
        v44 = v28 == 2;
        v35 = v34;
        v37 = (System_String_o *)StringLiteral_12612;
        if ( v44 )
          v36 = 2;
        else
          v36 = 0;
      }
      SceneJumpInfo___ctor_29748028(v34, v37, v36, 0LL);
      if ( v29 )
      {
        v51 = 22;
        goto LABEL_28;
      }
LABEL_31:
      sub_B170D4();
  }
  v58 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v16,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v58, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v11; // x0
  UILabel_o *shopLabel; // x20
  System_String_o *v13; // x0
  UILabel_o *combineLabel; // x20
  System_String_o *v15; // x0
  UILabel_o *warehouseLabel; // x20
  System_String_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UserPresentBoxErrorDialog_c *v21; // x8
  UnityEngine_Component_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0

  if ( (byte_40F978A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UserPresentBoxErrorDialog_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_12180, v4);
    sub_B16FFC(&StringLiteral_3252, v5);
    sub_B16FFC(&StringLiteral_12183, v6);
    sub_B16FFC(&StringLiteral_12166, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F978A = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_32;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !closeLabel )
    goto LABEL_32;
  UILabel__set_text(closeLabel, v11, 0LL);
  shopLabel = this->fields.shopLabel;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12180, 0LL);
  if ( !shopLabel )
    goto LABEL_32;
  UILabel__set_text(shopLabel, v13, 0LL);
  combineLabel = this->fields.combineLabel;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12166, 0LL);
  if ( !combineLabel )
    goto LABEL_32;
  UILabel__set_text(combineLabel, v15, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12183, 0LL);
  if ( !warehouseLabel )
    goto LABEL_32;
  UILabel__set_text(warehouseLabel, v17, 0LL);
  v18 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v18 )
    goto LABEL_32;
  transform = UnityEngine_Component__get_transform(v18, 0LL);
  if ( !transform )
    goto LABEL_32;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  v21 = UserPresentBoxErrorDialog_TypeInfo;
  if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v21 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !parent )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(parent, v21->static_fields->MESSAGE_POS, 0LL);
  v22 = (UnityEngine_Component_o *)this->fields.closeLabel;
  if ( !v22 )
    goto LABEL_32;
  v23 = UnityEngine_Component__get_transform(v22, 0LL);
  if ( !v23 )
    goto LABEL_32;
  v24 = UnityEngine_Transform__get_parent(v23, 0LL);
  if ( !v24 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v24, UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_POS, 0LL);
  v25 = (UnityEngine_Component_o *)this->fields.shopLabel;
  if ( !v25 )
    goto LABEL_32;
  v26 = UnityEngine_Component__get_transform(v25, 0LL);
  if ( !v26 )
    goto LABEL_32;
  v27 = UnityEngine_Transform__get_parent(v26, 0LL);
  if ( !v27 )
    goto LABEL_32;
  UnityEngine_Transform__set_localPosition(v27, UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_POS, 0LL);
  v28 = (UnityEngine_Component_o *)this->fields.combineLabel;
  if ( !v28 )
    goto LABEL_32;
  v29 = UnityEngine_Component__get_transform(v28, 0LL);
  if ( !v29
    || (v30 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v29, 0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(v30, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (v32 = (UnityEngine_Component_o *)this->fields.warehouseLabel) == 0LL)
    || (v33 = UnityEngine_Component__get_transform(v32, 0LL)) == 0LL
    || (v34 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v33, 0LL)) == 0LL
    || (v35 = UnityEngine_Component__get_gameObject(v34, 0LL)) == 0LL )
  {
LABEL_32:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v35, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40F978B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, v4);
    byte_40F978B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__OnClickCombineButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 32, v2);
}


void __fastcall UserPresentBoxErrorDialog__OnClickShopButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 22, v2);
}


void __fastcall UserPresentBoxErrorDialog__OnClickWarehouseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxErrorDialog__ChangeScene(this, 71, v2);
}


void __fastcall UserPresentBoxErrorDialog__Open(
        UserPresentBoxErrorDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  UserPresentBoxErrorDialog__Init(this, (const MethodInfo *)message);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B170D4();
  UILabel__set_text(messageLabel, message, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x0

  if ( (byte_40F9791 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SceneList_Type__Invoke__, method);
    byte_40F9791 = 1;
  }
  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      (System_Action_ShopRootConstants_State__o *)OnErrorDialogClosed,
      -1,
      (const MethodInfo_24B6068 *)Method_System_Action_SceneList_Type__Invoke__);
}


void __fastcall UserPresentBoxErrorDialog__add_OnErrorDialogClosed(
        UserPresentBoxErrorDialog_o *this,
        System_Action_SceneList_Type__o *value,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o **p_OnErrorDialogClosed; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentBoxErrorDialog_o *v11; // x0
  System_Action_SceneList_Type__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40F9788 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_SceneList_Type__TypeInfo, value);
    byte_40F9788 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_SceneList_Type__c *)v8->klass != System_Action_SceneList_Type__TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_OnErrorDialogClosed, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentBoxErrorDialog_o *)sub_B173C8(v8);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v11, v12, v13);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F978E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15418, method);
    byte_40F978E = 1;
  }
  return (System_String_o *)StringLiteral_15418;
}


void __fastcall UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(
        UserPresentBoxErrorDialog_o *this,
        System_Action_SceneList_Type__o *value,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o **p_OnErrorDialogClosed; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserPresentBoxErrorDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40F9789 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_SceneList_Type__TypeInfo, value);
    byte_40F9789 = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_SceneList_Type__c *)v8->klass != System_Action_SceneList_Type__TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_OnErrorDialogClosed, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserPresentBoxErrorDialog_o *)sub_B173C8(v8);
  UserPresentBoxErrorDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__setJumpType(
        UserPresentBoxErrorDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  UserPresentBoxErrorDialog_c *v8; // x8
  UnityEngine_Component_o *closeLabel; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Component_o *shopLabel; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Component_o *combineLabel; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *warehouseLabel; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0

  if ( (byte_40F978C & 1) == 0 )
  {
    sub_B16FFC(&UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type);
    byte_40F978C = 1;
  }
  this->fields.jumpType = type;
  if ( type == 2 )
  {
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_26;
    transform = UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !transform )
      goto LABEL_26;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    v8 = UserPresentBoxErrorDialog_TypeInfo;
    if ( (BYTE3(UserPresentBoxErrorDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
      v8 = UserPresentBoxErrorDialog_TypeInfo;
    }
    if ( !parent )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(parent, v8->static_fields->MESSAGE_COMMAND_CODE_POS, 0LL);
    closeLabel = (UnityEngine_Component_o *)this->fields.closeLabel;
    if ( !closeLabel )
      goto LABEL_26;
    v10 = UnityEngine_Component__get_transform(closeLabel, 0LL);
    if ( !v10 )
      goto LABEL_26;
    v11 = UnityEngine_Transform__get_parent(v10, 0LL);
    if ( !v11 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(
      v11,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_COMMAND_CODE_POS,
      0LL);
    shopLabel = (UnityEngine_Component_o *)this->fields.shopLabel;
    if ( !shopLabel )
      goto LABEL_26;
    v13 = UnityEngine_Component__get_transform(shopLabel, 0LL);
    if ( !v13 )
      goto LABEL_26;
    v14 = UnityEngine_Transform__get_parent(v13, 0LL);
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(
      v14,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_COMMAND_CODE_POS,
      0LL);
    combineLabel = (UnityEngine_Component_o *)this->fields.combineLabel;
    if ( !combineLabel )
      goto LABEL_26;
    v16 = UnityEngine_Component__get_transform(combineLabel, 0LL);
    if ( !v16
      || (v17 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v16, 0LL)) == 0LL
      || (gameObject = UnityEngine_Component__get_gameObject(v17, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (warehouseLabel = (UnityEngine_Component_o *)this->fields.warehouseLabel) == 0LL)
      || (v20 = UnityEngine_Component__get_transform(warehouseLabel, 0LL)) == 0LL
      || (v21 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v20, 0LL)) == 0LL
      || (v22 = UnityEngine_Component__get_gameObject(v21, 0LL)) == 0LL )
    {
LABEL_26:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(v22, 0, 0LL);
  }
}


void __fastcall UserPresentBoxErrorDialog___c__DisplayClass23_0___ctor(
        UserPresentBoxErrorDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___c__DisplayClass23_0___ChangeScene_b__0(
        UserPresentBoxErrorDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  UserPresentBoxErrorDialog_o *_4__this; // x0
  struct UserPresentBoxErrorDialog_o *v4; // x8
  System_Action_ShopRootConstants_State__o *OnErrorDialogClosed; // x0

  if ( (byte_40F798B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SceneList_Type__Invoke__, method);
    byte_40F798B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL) )
    sub_B170D4();
  OnErrorDialogClosed = (System_Action_ShopRootConstants_State__o *)v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    System_Action_ShopRootConstants_State___Invoke(
      OnErrorDialogClosed,
      this->fields.scene,
      (const MethodInfo_24B6068 *)Method_System_Action_SceneList_Type__Invoke__);
}