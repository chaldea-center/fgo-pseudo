void UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C25FC8 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C25FC8 = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_C0A410;
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

  UserPresentBoxEventPointRewardDialog__Close_39966796(this, 0, v2);
}


void UserPresentBoxEventPointRewardDialog__Close_39966796(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C25FC6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserPresentBoxEventPointRewardDialog_EndClose__);
    byte_4C25FC6 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void UserPresentBoxEventPointRewardDialog__EndClose(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  UserPresentBoxEventPointRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C2D434(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
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

  if ( (byte_4C25FC4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C25FC4 = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C25FC7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    byte_4C25FC7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_UserPresentBoxEventPointRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_UserPresentBoxEventPointRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  const MethodInfo *v9; // x3
  UIPanel_o *v10; // x22
  void *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  System_String_o *v15; // x23
  Il2CppObject *v16; // x20
  __int64 v17; // x28
  System_String_o *v18; // x22
  unsigned int v19; // w29
  __int64 v20; // x8
  struct UserPresentBoxWindow_evReward_array *v21; // x8
  __int64 v22; // x8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v24; // x21
  System_String_o *v25; // x0
  UnityEngine_Object_o *itemLabel; // x21
  struct UILabel_o *v27; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  struct UILabel_o *v30; // x8
  int v31; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  float v34; // s8
  int v35; // w9
  int v36; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v38; // s9
  float v39; // s10
  float v40; // s11
  struct UILabel_o *v41; // x8
  float mHeight; // s1
  struct UILabel_o *v43; // x8
  int v44; // w8
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v46; // x21
  System_String_o *v47; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v49; // x20
  System_Action_o *v50; // x20
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25FC5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_10401/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_10402/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C25FC5 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v10 = TargetPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_87;
      this->fields.keepPanelDepth = v10->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, -1, 0)) == 0
    || (eventPointReward = evpReward->fields.eventPointReward) == 0 )
  {
LABEL_87:
    sub_1C2D6EC(Instance, v12);
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  v16 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v17 = 4;
  v18 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v19 = v17 - 4;
    if ( (int)v17 - 4 >= SLODWORD(eventPointReward->max_length) )
      break;
    if ( (_DWORD)v17 != 4 )
    {
      v15 = System_String__Concat_63457864(v15, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      Instance = System_String__Concat_63457864(v18, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_87;
      v18 = (System_String_o *)Instance;
    }
    if ( v19 >= LODWORD(eventPointReward->max_length) )
LABEL_88:
      sub_1C2D6F4(Instance, v12, v13);
    v20 = *((_QWORD *)&eventPointReward->obj.klass + v17);
    if ( v20 )
    {
      Instance = System_String__Concat_63457864(v15, *(System_String_o **)(v20 + 16), 0);
      v21 = evpReward->fields.eventPointReward;
      if ( v21 )
      {
        if ( v19 >= LODWORD(v21->max_length) )
          goto LABEL_88;
        v22 = *((_QWORD *)&v21->obj.klass + v17);
        if ( v22 )
        {
          v15 = (System_String_o *)Instance;
          Instance = System_String__Concat_63457864(v18, *(System_String_o **)(v22 + 24), 0);
          eventPointReward = evpReward->fields.eventPointReward;
          v18 = (System_String_o *)Instance;
          ++v17;
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
    v24 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10402/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0);
    Instance = System_String__Format(v25, v16, 0);
    if ( !v24 )
      goto LABEL_87;
    UILabel__set_text(v24, (System_String_o *)Instance, 0);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0, 0) )
  {
    Instance = this->fields.itemLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v15, 0);
    v27 = this->fields.itemLabel;
    if ( !v27 )
      goto LABEL_87;
    mWidth = v27->fields.mWidth;
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
    UILabel__set_text((UILabel_o *)Instance, v18, 0);
    v30 = this->fields.numLabel;
    if ( !v30 )
      goto LABEL_87;
    if ( mWidth >= 1 )
    {
      v31 = v30->fields.mWidth;
      if ( v31 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v34 = 1.0;
        v35 = v31 + mWidth + 2 * MESSAGE_GAP;
        if ( v35 > BASE_MESSAGE_WIDTH )
          v34 = (float)BASE_MESSAGE_WIDTH / (float)v35;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        v36 = *((_DWORD *)Instance + 43);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v38 = 1.0;
        if ( v36 > BASE_MESSAGE_HEIGHT )
          v38 = (float)BASE_MESSAGE_HEIGHT / (float)v36;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v39 = (float)(v34 * (float)(mWidth - v31)) * 0.5;
        v40 = v34 * (float)MESSAGE_GAP;
        v51.fields.x = v39 - v40;
        v51.fields.y = 0.0;
        v51.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v51, 0);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v52.fields.x = v40 + v39;
        v52.fields.y = 0.0;
        v52.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v52, 0);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v53.fields.z = 1.0;
        v53.fields.x = v34;
        v53.fields.y = v34;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v53, 0);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_87;
        v54.fields.z = 1.0;
        v54.fields.x = v34;
        v54.fields.y = v34;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v54, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !Instance )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( (float)(v38 / v34) >= 1.0 )
        {
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v44 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0);
          v41 = this->fields.itemLabel;
          if ( !v41 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          mHeight = (float)v41->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, size, 0);
          v43 = this->fields.itemLabel;
          if ( !v43 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          v56.fields.z = 0.0;
          v56.fields.y = (float)-v43->fields.mHeight * 0.5;
          v56.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v56, 0);
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v44 = 1;
        }
        *((_DWORD *)Instance + 21) = v44;
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
    v46 = this->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10401/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0);
    Instance = System_String__Format(v47, v16, 0);
    if ( !v46 )
      goto LABEL_87;
    UILabel__set_text(v46, (System_String_o *)Instance, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v49 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v49 )
    {
      UILabel__set_text(v49, (System_String_o *)Instance, 0);
      goto LABEL_86;
    }
    goto LABEL_87;
  }
LABEL_86:
  this->fields.isButtonEnable = 0;
  v50 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A71298;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A71250;
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
  if ( (byte_4C25FC9 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C25FC9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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