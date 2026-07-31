void UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w9

  if ( (byte_5937324 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5937324 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_E93D60;
  v5 = *(&v4->_2.cctor_finished + 1);
  this->fields.isInitPanelDepth = 1;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_47113396(this, 0, v2);
}


void UserPresentBoxEventPointRewardDialog__Close_47113396(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5937322 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserPresentBoxEventPointRewardDialog_EndClose__);
    byte_5937322 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void UserPresentBoxEventPointRewardDialog__EndClose(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  UserPresentBoxEventPointRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x2
  UnityEngine_Object_o *itemLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *numLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_5937320 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937320 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  v6 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0, 0) )
  {
    titleLabel = this->fields.itemLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0, 0) )
  {
    titleLabel = this->fields.numLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v11);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v13);
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
    sub_21FFECC(titleLabel, method);
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

  if ( (byte_5937323 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    byte_5937323 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_UserPresentBoxEventPointRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_UserPresentBoxEventPointRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UIPanel_o *v15; // x22
  UnityEngine_Object_c *v16; // x0
  void *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  unsigned int v21; // w27
  System_String_o *v22; // x23
  Il2CppObject *v23; // x20
  System_String_o *v24; // x22
  UserPresentBoxWindow_evReward_o *v25; // x8
  struct UserPresentBoxWindow_evReward_array *v26; // x8
  UserPresentBoxWindow_evReward_o *v27; // x8
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Object_o *itemLabel; // x21
  __int64 v34; // x2
  struct UILabel_o *v35; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  __int64 v38; // x2
  struct UILabel_o *v39; // x8
  int v40; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  float v43; // s8
  int v44; // w9
  int v45; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v47; // s9
  float v48; // s11
  float v49; // s10
  struct UILabel_o *v50; // x8
  float mHeight; // s1
  struct UILabel_o *v52; // x8
  int v53; // w8
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  UILabel_o *v57; // x21
  System_String_o *v58; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  UILabel_o *v62; // x20
  System_Action_c *v63; // x0
  System_Action_o *v64; // x20
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937321 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_10828/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_10829/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937321 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    v15 = TargetPanel;
    v16 = UnityEngine_Object_TypeInfo;
    this->fields.isInitPanelDepth = 0;
    if ( !*(&v16->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v16, v8, v9);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_25;
      this->fields.keepPanelDepth = v15->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v9, v10, v11, v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, -1, 0)) == 0
    || (eventPointReward = evpReward->fields.eventPointReward) == 0 )
  {
LABEL_25:
    sub_21FFECC(Instance, v18);
  }
  v21 = 0;
  v22 = (System_String_o *)StringLiteral_1/*""*/;
  v23 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v24 = (System_String_o *)StringLiteral_1/*""*/;
  while ( (signed int)v21 < SLODWORD(eventPointReward->max_length) )
  {
    if ( v21 )
    {
      v22 = System_String__Concat_75438412(v22, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      Instance = System_String__Concat_75438412(v24, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_25;
      v24 = (System_String_o *)Instance;
    }
    if ( v21 >= LODWORD(eventPointReward->max_length) )
LABEL_87:
      sub_21FFED4(Instance);
    v25 = eventPointReward->m_Items[v21];
    if ( v25 )
    {
      Instance = System_String__Concat_75438412(v22, v25->fields.name, 0);
      v26 = evpReward->fields.eventPointReward;
      if ( v26 )
      {
        if ( v21 >= LODWORD(v26->max_length) )
          goto LABEL_87;
        v27 = v26->m_Items[v21];
        if ( v27 )
        {
          v22 = (System_String_o *)Instance;
          ++v21;
          Instance = System_String__Concat_75438412(v24, v27->fields.detail, 0);
          eventPointReward = evpReward->fields.eventPointReward;
          v24 = (System_String_o *)Instance;
          if ( eventPointReward )
            continue;
        }
      }
    }
    goto LABEL_25;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v31 = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10829/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0);
    Instance = System_String__Format(v32, v23, 0);
    if ( !v31 )
      goto LABEL_25;
    UILabel__set_text(v31, (System_String_o *)Instance, 0);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0, 0) )
  {
    Instance = this->fields.itemLabel;
    if ( !Instance )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)Instance, v22, 0);
    v35 = this->fields.itemLabel;
    if ( !v35 )
      goto LABEL_25;
    mWidth = v35->fields.mWidth;
  }
  else
  {
    mWidth = 0;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v34);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0, 0) )
  {
    Instance = this->fields.numLabel;
    if ( !Instance )
      goto LABEL_25;
    UILabel__set_text((UILabel_o *)Instance, v24, 0);
    v39 = this->fields.numLabel;
    if ( !v39 )
      goto LABEL_25;
    if ( mWidth >= 1 )
    {
      v40 = v39->fields.mWidth;
      if ( v40 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v43 = 1.0;
        v44 = v40 + mWidth + 2 * MESSAGE_GAP;
        if ( v44 > BASE_MESSAGE_WIDTH )
          v43 = (float)BASE_MESSAGE_WIDTH / (float)v44;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_25;
        v45 = *((_DWORD *)Instance + 43);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v47 = 1.0;
        if ( v45 > BASE_MESSAGE_HEIGHT )
          v47 = (float)BASE_MESSAGE_HEIGHT / (float)v45;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_25;
        v48 = v43 * (float)MESSAGE_GAP;
        v65.fields.y = 0.0;
        v49 = (float)(v43 * (float)(mWidth - v40)) * 0.5;
        v65.fields.z = 0.0;
        v65.fields.x = v49 - v48;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v65, 0);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_25;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_25;
        v66.fields.x = v48 + v49;
        v66.fields.y = 0.0;
        v66.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v66, 0);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_25;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_25;
        v67.fields.x = v43;
        v67.fields.y = v43;
        v67.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v67, 0);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_25;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_25;
        v68.fields.x = v43;
        v68.fields.y = v43;
        v68.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v68, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !Instance )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( (float)(v47 / v43) >= 1.0 )
        {
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_25;
          v53 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_25;
          size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0);
          v50 = this->fields.itemLabel;
          if ( !v50 )
            goto LABEL_25;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_25;
          mHeight = (float)v50->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, size, 0);
          v52 = this->fields.itemLabel;
          if ( !v52 )
            goto LABEL_25;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_25;
          v70.fields.x = 0.0;
          v70.fields.z = 0.0;
          v70.fields.y = vcvts_n_f32_s32(-v52->fields.mHeight, 1u);
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v70, 0);
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_25;
          v53 = 1;
        }
        *((_DWORD *)Instance + 21) = v53;
        UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !Instance )
          goto LABEL_25;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v38);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v57 = this->fields.messageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55, v56);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10828/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0);
    Instance = System_String__Format(v58, v23, 0);
    if ( !v57 )
      goto LABEL_25;
    UILabel__set_text(v57, (System_String_o *)Instance, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v62 = this->fields.okBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60, v61);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( v62 )
    {
      UILabel__set_text(v62, (System_String_o *)Instance, 0);
      goto LABEL_86;
    }
    goto LABEL_25;
  }
LABEL_86:
  v63 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v64 = (System_Action_o *)sub_21FFEBC(v63);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0, 0);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF8F04;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF8EBC;
}


System_IAsyncResult_o *UserPresentBoxEventPointRewardDialog_ClickDelegate__BeginInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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