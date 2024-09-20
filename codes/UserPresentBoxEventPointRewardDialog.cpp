void __fastcall UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A59EA1 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A59EA1 = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_BB5380;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_37391484(this, 0LL, v2);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close_37391484(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A59E9F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserPresentBoxEventPointRewardDialog_EndClose__);
    byte_4A59E9F = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__EndClose(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  UserPresentBoxEventPointRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B88554(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall UserPresentBoxEventPointRewardDialog__EndOpen(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall UserPresentBoxEventPointRewardDialog__Init(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *itemLabel; // x20
  UnityEngine_Object_o *numLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4A59E9D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E9D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.itemLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.numLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.okBtnLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_32:
    sub_1B8880C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A59EA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    byte_4A59EA0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_UserPresentBoxEventPointRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_UserPresentBoxEventPointRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog__Open(
        UserPresentBoxEventPointRewardDialog_o *this,
        UserPresentBoxWindow_evPointReward_o *evpReward,
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UIPanel_o *TargetPanel; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UIPanel_o *v10; // x22
  void *Instance; // x0
  __int64 v12; // x1
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  System_String_o *v14; // x23
  Il2CppObject *v15; // x20
  __int64 v16; // x28
  System_String_o *v17; // x22
  il2cpp_array_size_t v18; // w29
  __int64 v19; // x8
  struct UserPresentBoxWindow_evReward_array *v20; // x8
  __int64 v21; // x8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Object_o *itemLabel; // x21
  struct UILabel_o *v26; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  struct UILabel_o *v29; // x8
  int v30; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  float v33; // s8
  int v34; // w9
  int v35; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v37; // s9
  float v38; // s10
  float v39; // s11
  int v40; // s0
  struct UILabel_o *v42; // x8
  float mHeight; // s1
  struct UILabel_o *v44; // x8
  int v45; // w8
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v47; // x21
  System_String_o *v48; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v50; // x20
  System_Action_o *v51; // x20
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59E9E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_10408/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10409/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E9E = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v10 = TargetPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_87;
      this->fields.keepPanelDepth = v10->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, 0LL)) == 0LL
    || (eventPointReward = evpReward->fields.eventPointReward) == 0LL )
  {
LABEL_87:
    sub_1B8880C(Instance, v12);
  }
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  v15 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v16 = 4LL;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v18 = v16 - 4;
    if ( (int)v16 - 4 >= (signed int)eventPointReward->max_length )
      break;
    if ( (_DWORD)v16 != 4 )
    {
      v14 = System_String__Concat_61707032(v14, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      Instance = System_String__Concat_61707032(v17, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_87;
      v17 = (System_String_o *)Instance;
    }
    if ( v18 >= eventPointReward->max_length )
LABEL_88:
      sub_1B88814(Instance, v12);
    v19 = *((_QWORD *)&eventPointReward->obj.klass + v16);
    if ( v19 )
    {
      Instance = System_String__Concat_61707032(v14, *(System_String_o **)(v19 + 16), 0LL);
      v20 = evpReward->fields.eventPointReward;
      if ( v20 )
      {
        if ( v18 >= v20->max_length )
          goto LABEL_88;
        v21 = *((_QWORD *)&v20->obj.klass + v16);
        if ( v21 )
        {
          v14 = (System_String_o *)Instance;
          Instance = System_String__Concat_61707032(v17, *(System_String_o **)(v21 + 24), 0LL);
          eventPointReward = evpReward->fields.eventPointReward;
          v17 = (System_String_o *)Instance;
          ++v16;
          if ( eventPointReward )
            continue;
        }
      }
    }
    goto LABEL_87;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v23 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10409/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
    Instance = System_String__Format(v24, v15, 0LL);
    if ( !v23 )
      goto LABEL_87;
    UILabel__set_text(v23, (System_String_o *)Instance, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    Instance = this->fields.itemLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v14, 0LL);
    v26 = this->fields.itemLabel;
    if ( !v26 )
      goto LABEL_87;
    mWidth = v26->fields.mWidth;
  }
  else
  {
    mWidth = 0;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    Instance = this->fields.numLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v17, 0LL);
    v29 = this->fields.numLabel;
    if ( !v29 )
      goto LABEL_87;
    if ( mWidth >= 1 )
    {
      v30 = v29->fields.mWidth;
      if ( v30 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v33 = 1.0;
        v34 = v30 + mWidth + 2 * MESSAGE_GAP;
        if ( v34 > BASE_MESSAGE_WIDTH )
          v33 = (float)BASE_MESSAGE_WIDTH / (float)v34;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        v35 = *((_DWORD *)Instance + 43);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v37 = 1.0;
        if ( v35 > BASE_MESSAGE_HEIGHT )
          v37 = (float)BASE_MESSAGE_HEIGHT / (float)v35;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v38 = (float)(v33 * (float)(mWidth - v30)) * 0.5;
        v39 = v33 * (float)MESSAGE_GAP;
        v52.fields.x = v38 - v39;
        v52.fields.y = 0.0;
        v52.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v52, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v53.fields.x = v39 + v38;
        v53.fields.y = 0.0;
        v53.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v53, 0LL);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v54.fields.z = 1.0;
        v54.fields.x = v33;
        v54.fields.y = v33;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v54, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v55.fields.z = 1.0;
        v55.fields.x = v33;
        v55.fields.y = v33;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v55, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (float)(v37 / v33) >= 1.0 )
        {
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v45 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          *(UnityEngine_Vector3_o *)&v40 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0LL);
          v42 = this->fields.itemLabel;
          if ( !v42 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          mHeight = (float)v42->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, *(UnityEngine_Vector3_o *)&v40, 0LL);
          v44 = this->fields.itemLabel;
          if ( !v44 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          v56.fields.z = 0.0;
          v56.fields.y = (float)-v44->fields.mHeight * 0.5;
          v56.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v56, 0LL);
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v45 = 1;
        }
        *((_DWORD *)Instance + 21) = v45;
        UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v47 = this->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10408/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0LL);
    Instance = System_String__Format(v48, v15, 0LL);
    if ( !v47 )
      goto LABEL_87;
    UILabel__set_text(v47, (System_String_o *)Instance, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v50 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v50 )
    {
      UILabel__set_text(v50, (System_String_o *)Instance, 0LL);
      goto LABEL_86;
    }
    goto LABEL_87;
  }
LABEL_86:
  this->fields.isButtonEnable = 0;
  v51 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CDBC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CDB80;
}


System_IAsyncResult_o *__fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__BeginInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4A59EA2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A59EA2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__Invoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}