void __fastcall UserPresentBoxErrorDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UserPresentBoxErrorDialog_StaticFields *static_fields; // x8
  UserPresentBoxErrorDialog_c *v3; // x8
  struct UserPresentBoxErrorDialog_StaticFields *v4; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v5; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v6; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v7; // x9
  struct UserPresentBoxErrorDialog_StaticFields *v8; // x8

  if ( (byte_49FD265 & 1) == 0 )
  {
    sub_1B64870(&UserPresentBoxErrorDialog_TypeInfo, v1);
    byte_49FD265 = 1;
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
  if ( (byte_49FD264 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_49FD264 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__ChangeScene(
        UserPresentBoxErrorDialog_o *this,
        int32_t scene,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  int v21; // w8
  int32_t v22; // w22
  Il2CppObject *v23; // x21
  SceneJumpInfo_o *v24; // x0
  SceneJumpInfo_o *v25; // x22
  int32_t v26; // w2
  System_String_o *v27; // x1
  int32_t jumpType; // w21
  bool v29; // zf
  int32_t v30; // w1
  int32_t v31; // w22
  SceneJumpInfo_o *v32; // x0
  Il2CppObject *v33; // x3
  __int64 *v34; // x8
  System_Action_o *v35; // x21

  if ( (byte_49FD262 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&scene);
    sub_1B64870(&SceneJumpInfo_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B64870(&Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__, v7);
    sub_1B64870(&UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo, v8);
    sub_1B64870(&Method_UserPresentBoxErrorDialog_ChangeScene__, v9);
    sub_1B64870(&StringLiteral_12569/*"ServantEquipList"*/, v10);
    sub_1B64870(&StringLiteral_12528/*"SellServant"*/, v11);
    sub_1B64870(&StringLiteral_12568/*"ServantEQCombine"*/, v12);
    sub_1B64870(&StringLiteral_12565/*"ServantCombine"*/, v13);
    byte_49FD262 = 1;
  }
  v14 = sub_1B64ABC(UserPresentBoxErrorDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_30;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v14 + 24) = scene;
  v19 = Method_UserPresentBoxErrorDialog_ChangeScene__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_ChangeScene__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B64888(Method_UserPresentBoxErrorDialog_ChangeScene__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B64854(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  v21 = *(_DWORD *)(v14 + 24);
  switch ( v21 )
  {
    case 71:
      jumpType = this->fields.jumpType;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v29 = jumpType == 1;
      v23 = Instance;
      if ( !v29 )
      {
        if ( Instance )
        {
          v30 = 71;
          v33 = 0LL;
LABEL_28:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v30, 1, v33, 0LL);
          break;
        }
        goto LABEL_30;
      }
      v25 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279020(v25, (System_String_o *)StringLiteral_12569/*"ServantEquipList"*/, 0LL);
      if ( !v23 )
        goto LABEL_30;
      v30 = 71;
LABEL_27:
      Instance = v23;
      v33 = (Il2CppObject *)v25;
      goto LABEL_28;
    case 32:
      v31 = this->fields.jumpType;
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v32 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
      v29 = v31 == 1;
      v25 = v32;
      if ( v29 )
        v34 = &StringLiteral_12568/*"ServantEQCombine"*/;
      else
        v34 = &StringLiteral_12565/*"ServantCombine"*/;
      SceneJumpInfo___ctor_38279020(v32, (System_String_o *)*v34, 0LL);
      if ( !v23 )
        goto LABEL_30;
      v30 = 32;
      goto LABEL_27;
    case 22:
      v22 = this->fields.jumpType;
      if ( v22 == 1 )
      {
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v24 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
        v25 = v24;
        v26 = 1;
        v27 = (System_String_o *)StringLiteral_12528/*"SellServant"*/;
      }
      else
      {
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v24 = (SceneJumpInfo_o *)sub_1B64ABC(SceneJumpInfo_TypeInfo);
        v29 = v22 == 2;
        v25 = v24;
        v27 = (System_String_o *)StringLiteral_12528/*"SellServant"*/;
        if ( v29 )
          v26 = 2;
        else
          v26 = 0;
      }
      SceneJumpInfo___ctor_38279108(v24, v27, v26, 0LL);
      if ( v23 )
      {
        v30 = 22;
        goto LABEL_27;
      }
LABEL_30:
      sub_1B64ACC(Instance, v16);
  }
  v35 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_UserPresentBoxErrorDialog___c__DisplayClass23_0__ChangeScene_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v35, 0LL);
}


void __fastcall UserPresentBoxErrorDialog__Init(UserPresentBoxErrorDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *messageLabel; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *shopLabel; // x20
  UILabel_o *combineLabel; // x20
  UILabel_o *warehouseLabel; // x20
  UserPresentBoxErrorDialog_c *v15; // x8
  UnityEngine_Transform_o *v16; // x20

  if ( (byte_49FD25F & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&UserPresentBoxErrorDialog_TypeInfo, v3);
    sub_1B64870(&StringLiteral_12077/*"SHORT_SERVANT_SELL"*/, v4);
    sub_1B64870(&StringLiteral_3733/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_1B64870(&StringLiteral_12080/*"SHORT_SERVANT_WAREHOUSE"*/, v6);
    sub_1B64870(&StringLiteral_12062/*"SHORT_SERVANT_COMBINE"*/, v7);
    sub_1B64870(&StringLiteral_1/*""*/, v8);
    byte_49FD25F = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_30;
  UILabel__set_text(closeLabel, (System_String_o *)messageLabel, 0LL);
  shopLabel = this->fields.shopLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12077/*"SHORT_SERVANT_SELL"*/, 0LL);
  if ( !shopLabel )
    goto LABEL_30;
  UILabel__set_text(shopLabel, (System_String_o *)messageLabel, 0LL);
  combineLabel = this->fields.combineLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SHORT_SERVANT_COMBINE"*/, 0LL);
  if ( !combineLabel )
    goto LABEL_30;
  UILabel__set_text(combineLabel, (System_String_o *)messageLabel, 0LL);
  warehouseLabel = this->fields.warehouseLabel;
  messageLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12080/*"SHORT_SERVANT_WAREHOUSE"*/, 0LL);
  if ( !warehouseLabel )
    goto LABEL_30;
  UILabel__set_text(warehouseLabel, (System_String_o *)messageLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  v15 = UserPresentBoxErrorDialog_TypeInfo;
  v16 = (UnityEngine_Transform_o *)messageLabel;
  if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
    v15 = UserPresentBoxErrorDialog_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(v16, v15->static_fields->MESSAGE_POS, 0LL);
  messageLabel = this->fields.closeLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_POS,
    0LL);
  messageLabel = this->fields.shopLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_30;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)messageLabel,
    UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_POS,
    0LL);
  messageLabel = this->fields.combineLabel;
  if ( !messageLabel )
    goto LABEL_30;
  messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
  if ( !messageLabel
    || (messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL)) == 0LL
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL),
        (messageLabel = this->fields.warehouseLabel) == 0LL)
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL)) == 0LL
    || (messageLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)messageLabel, 0LL)) == 0LL
    || (messageLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL)) == 0LL )
  {
LABEL_30:
    sub_1B64ACC(messageLabel, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
  this->fields.jumpType = 0;
}


void __fastcall UserPresentBoxErrorDialog__OnClickCloseButton(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_49FD260 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_UserPresentBoxErrorDialog_OnClickCloseButton__, v3);
    sub_1B64870(&Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, v4);
    byte_49FD260 = 1;
  }
  v5 = Method_UserPresentBoxErrorDialog_OnClickCloseButton__;
  if ( (*((_BYTE *)Method_UserPresentBoxErrorDialog_OnClickCloseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64888(Method_UserPresentBoxErrorDialog_OnClickCloseButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserPresentBoxErrorDialog__OnClickCloseButton_b__18_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v5; // x1
  UILabel_o *messageLabel; // x0

  UserPresentBoxErrorDialog__Init(this, (const MethodInfo *)message);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1B64ACC(0LL, v5);
  UILabel__set_text(messageLabel, message, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall UserPresentBoxErrorDialog___OnClickCloseButton_b__18_0(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x8

  UserPresentBoxErrorDialog__Init(this, method);
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))OnErrorDialogClosed->fields.m_target)(
      OnErrorDialogClosed->fields.original_method_info,
      0xFFFFFFFFLL,
      *(_QWORD *)&OnErrorDialogClosed->fields.extra_arg);
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
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  UserPresentBoxErrorDialog_o *v13; // x0
  System_Action_SceneList_Type__o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_49FD25D & 1) == 0 )
  {
    sub_1B64870(&System_Action_SceneList_Type__TypeInfo, value);
    byte_49FD25D = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1B649AC(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1B9FD60(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1B64D8C(v9);
  UserPresentBoxErrorDialog__remove_OnErrorDialogClosed(v13, v14, v15);
}


System_String_o *__fastcall UserPresentBoxErrorDialog__get_closeBtnPath(
        UserPresentBoxErrorDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FD263 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_15579/*"Window/ExitButton"*/, method);
    byte_49FD263 = 1;
  }
  return (System_String_o *)StringLiteral_15579/*"Window/ExitButton"*/;
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
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  UserPresentBoxErrorDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FD25E & 1) == 0 )
  {
    sub_1B64870(&System_Action_SceneList_Type__TypeInfo, value);
    byte_49FD25E = 1;
  }
  OnErrorDialogClosed = this->fields.OnErrorDialogClosed;
  p_OnErrorDialogClosed = &this->fields.OnErrorDialogClosed;
  v6 = (System_Delegate_o *)OnErrorDialogClosed;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1B649AC(v8, System_Action_SceneList_Type__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1B9FD60(p_OnErrorDialogClosed, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1B64D8C(v9);
  UserPresentBoxErrorDialog__Init(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxErrorDialog__setJumpType(
        UserPresentBoxErrorDialog_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_Transform_o *v6; // x20
  UserPresentBoxErrorDialog_c *v7; // x8

  if ( (byte_49FD261 & 1) == 0 )
  {
    sub_1B64870(&UserPresentBoxErrorDialog_TypeInfo, *(_QWORD *)&type);
    byte_49FD261 = 1;
  }
  this->fields.jumpType = type;
  if ( type == 2 )
  {
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    v6 = (UnityEngine_Transform_o *)messageLabel;
    v7 = UserPresentBoxErrorDialog_TypeInfo;
    if ( !UserPresentBoxErrorDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserPresentBoxErrorDialog_TypeInfo);
      v7 = UserPresentBoxErrorDialog_TypeInfo;
    }
    if ( !v6 )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(v6, v7->static_fields->MESSAGE_COMMAND_CODE_POS, 0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.closeLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    if ( !messageLabel )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->SHOP_COMMAND_CODE_POS,
      0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.shopLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                (UnityEngine_Transform_o *)messageLabel,
                                                0LL);
    if ( !messageLabel )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)messageLabel,
      UserPresentBoxErrorDialog_TypeInfo->static_fields->EXIT_COMMAND_CODE_POS,
      0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.combineLabel;
    if ( !messageLabel )
      goto LABEL_25;
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL);
    if ( !messageLabel
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)messageLabel,
                                                      0LL)) == 0LL
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL),
          (messageLabel = (UnityEngine_Component_o *)this->fields.warehouseLabel) == 0LL)
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0LL)) == 0LL
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)messageLabel,
                                                      0LL)) == 0LL
      || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL )
    {
LABEL_25:
      sub_1B64ACC(messageLabel, *(_QWORD *)&type);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
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
  struct System_Action_SceneList_Type__o *OnErrorDialogClosed; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (UserPresentBoxErrorDialog__Init(_4__this, method), (v4 = this->fields.__4__this) == 0LL) )
    sub_1B64ACC(_4__this, method);
  OnErrorDialogClosed = v4->fields.OnErrorDialogClosed;
  if ( OnErrorDialogClosed )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))OnErrorDialogClosed->fields.m_target)(
      OnErrorDialogClosed->fields.original_method_info,
      (unsigned int)this->fields.scene,
      *(_QWORD *)&OnErrorDialogClosed->fields.extra_arg);
}