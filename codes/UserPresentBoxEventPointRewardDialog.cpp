void UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B50C & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2B50C = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_CFF970;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_40931352(this, 0, v2);
}


void UserPresentBoxEventPointRewardDialog__Close_40931352(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2B50A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UserPresentBoxEventPointRewardDialog_EndClose__);
    byte_4D2B50A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void UserPresentBoxEventPointRewardDialog__EndClose(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  UserPresentBoxEventPointRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C9403C(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void UserPresentBoxEventPointRewardDialog__EndOpen(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void UserPresentBoxEventPointRewardDialog__Init(UserPresentBoxEventPointRewardDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *itemLabel; // x20
  UnityEngine_Object_o *numLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4D2B508 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B508 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0, 0) )
  {
    titleLabel = this->fields.itemLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0, 0) )
  {
    titleLabel = this->fields.numLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    titleLabel = this->fields.okBtnLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
LABEL_32:
    sub_1C942F0(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4D2B50B & 1) == 0 )
  {
    sub_1C94098(&Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    byte_4D2B50B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_UserPresentBoxEventPointRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_UserPresentBoxEventPointRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void UserPresentBoxEventPointRewardDialog__Open(
        UserPresentBoxEventPointRewardDialog_o *this,
        UserPresentBoxWindow_evPointReward_o *evpReward,
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  UIPanel_o *TargetPanel; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UIPanel_o *v14; // x22
  void *Instance; // x0
  __int64 v16; // x1
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  System_String_o *v18; // x23
  Il2CppObject *v19; // x20
  __int64 v20; // x28
  System_String_o *v21; // x22
  unsigned int v22; // w29
  __int64 v23; // x8
  struct UserPresentBoxWindow_evReward_array *v24; // x8
  __int64 v25; // x8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v27; // x21
  System_String_o *v28; // x0
  UnityEngine_Object_o *itemLabel; // x21
  struct UILabel_o *v30; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  struct UILabel_o *v33; // x8
  int v34; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  float v37; // s8
  int v38; // w9
  int v39; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v41; // s9
  float v42; // s10
  float v43; // s11
  struct UILabel_o *v44; // x8
  float mHeight; // s1
  struct UILabel_o *v46; // x8
  int v47; // w8
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v49; // x21
  System_String_o *v50; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v52; // x20
  System_Action_o *v53; // x20
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B509 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_10442/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/);
    sub_1C94098(&StringLiteral_10443/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B509 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v14 = TargetPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_87;
      this->fields.keepPanelDepth = v14->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, -1, 0)) == 0
    || (eventPointReward = evpReward->fields.eventPointReward) == 0 )
  {
LABEL_87:
    sub_1C942F0(Instance, v16);
  }
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  v19 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v20 = 4;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v22 = v20 - 4;
    if ( (int)v20 - 4 >= SLODWORD(eventPointReward->max_length) )
      break;
    if ( (_DWORD)v20 != 4 )
    {
      v18 = System_String__Concat_64417744(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      Instance = System_String__Concat_64417744(v21, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_87;
      v21 = (System_String_o *)Instance;
    }
    if ( v22 >= LODWORD(eventPointReward->max_length) )
LABEL_88:
      sub_1C942F8(Instance);
    v23 = *((_QWORD *)&eventPointReward->obj.klass + v20);
    if ( v23 )
    {
      Instance = System_String__Concat_64417744(v18, *(System_String_o **)(v23 + 16), 0);
      v24 = evpReward->fields.eventPointReward;
      if ( v24 )
      {
        if ( v22 >= LODWORD(v24->max_length) )
          goto LABEL_88;
        v25 = *((_QWORD *)&v24->obj.klass + v20);
        if ( v25 )
        {
          v18 = (System_String_o *)Instance;
          Instance = System_String__Concat_64417744(v21, *(System_String_o **)(v25 + 24), 0);
          eventPointReward = evpReward->fields.eventPointReward;
          v21 = (System_String_o *)Instance;
          ++v20;
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
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v27 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10443/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0);
    Instance = System_String__Format(v28, v19, 0);
    if ( !v27 )
      goto LABEL_87;
    UILabel__set_text(v27, (System_String_o *)Instance, 0);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0, 0) )
  {
    Instance = this->fields.itemLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v18, 0);
    v30 = this->fields.itemLabel;
    if ( !v30 )
      goto LABEL_87;
    mWidth = v30->fields.mWidth;
  }
  else
  {
    mWidth = 0;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0, 0) )
  {
    Instance = this->fields.numLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v21, 0);
    v33 = this->fields.numLabel;
    if ( !v33 )
      goto LABEL_87;
    if ( mWidth >= 1 )
    {
      v34 = v33->fields.mWidth;
      if ( v34 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v37 = 1.0;
        v38 = v34 + mWidth + 2 * MESSAGE_GAP;
        if ( v38 > BASE_MESSAGE_WIDTH )
          v37 = (float)BASE_MESSAGE_WIDTH / (float)v38;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        v39 = *((_DWORD *)Instance + 43);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v41 = 1.0;
        if ( v39 > BASE_MESSAGE_HEIGHT )
          v41 = (float)BASE_MESSAGE_HEIGHT / (float)v39;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v42 = (float)(v37 * (float)(mWidth - v34)) * 0.5;
        v43 = v37 * (float)MESSAGE_GAP;
        v54.fields.x = v42 - v43;
        v54.fields.y = 0.0;
        v54.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v54, 0);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v55.fields.x = v43 + v42;
        v55.fields.y = 0.0;
        v55.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v55, 0);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v56.fields.z = 1.0;
        v56.fields.x = v37;
        v56.fields.y = v37;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v56, 0);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v57.fields.z = 1.0;
        v57.fields.x = v37;
        v57.fields.y = v37;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v57, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !Instance )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( (float)(v41 / v37) >= 1.0 )
        {
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v47 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0);
          v44 = this->fields.itemLabel;
          if ( !v44 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          mHeight = (float)v44->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, size, 0);
          v46 = this->fields.itemLabel;
          if ( !v46 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          v59.fields.z = 0.0;
          v59.fields.y = (float)-v46->fields.mHeight * 0.5;
          v59.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v59, 0);
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v47 = 1;
        }
        *((_DWORD *)Instance + 21) = v47;
        UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !Instance )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v49 = this->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0);
    Instance = System_String__Format(v50, v19, 0);
    if ( !v49 )
      goto LABEL_87;
    UILabel__set_text(v49, (System_String_o *)Instance, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v52 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v52 )
    {
      UILabel__set_text(v52, (System_String_o *)Instance, 0);
      goto LABEL_86;
    }
    goto LABEL_87;
  }
LABEL_86:
  this->fields.isButtonEnable = 0;
  v53 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0, 0);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC7D8C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC7D44;
}


System_IAsyncResult_o *UserPresentBoxEventPointRewardDialog_ClickDelegate__BeginInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4D2B50D & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D2B50D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate__Invoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}