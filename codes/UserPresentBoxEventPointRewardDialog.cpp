void __fastcall UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4389DDE & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_4389DDE = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  this->fields.isInitPanelDepth = 1;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_331C860;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_23090812(this, 0LL, v2);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close_23090812(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4389DDC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UserPresentBoxEventPointRewardDialog_EndClose__);
    byte_4389DDC = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__EndClose(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  UserPresentBoxEventPointRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B77560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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

  if ( (byte_4389DDA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389DDA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_37;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.itemLabel;
    if ( !titleLabel )
      goto LABEL_37;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.numLabel;
    if ( !titleLabel )
      goto LABEL_37;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_37;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.okBtnLabel;
    if ( !titleLabel )
      goto LABEL_37;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_37:
    sub_B7769C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4389DDD & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389DDD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      UserPresentBoxEventPointRewardDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIPanel_o *v14; // x22
  void *Instance; // x0
  __int64 v16; // x1
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  Il2CppObject *v18; // x20
  __int64 v19; // x24
  System_String_o *v20; // x23
  System_String_o *v21; // x22
  il2cpp_array_size_t v22; // w26
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
  int v37; // w9
  float v38; // s8
  int v39; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v41; // s11
  float v42; // s9
  float v43; // s12
  int v44; // s0
  struct UILabel_o *v46; // x8
  float mHeight; // s1
  struct UILabel_o *v48; // x8
  struct UIScrollView_o **p_scrView; // x8
  struct UIScrollView_o *scrView; // x9
  int v51; // w10
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v53; // x21
  System_String_o *v54; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v56; // x20
  System_Action_o *v57; // x20
  __int64 v58; // x0
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4389DDB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_10661/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10662/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389DDB = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v14 = TargetPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v14->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, 0LL)) == 0LL
    || (eventPointReward = evpReward->fields.eventPointReward) == 0LL )
  {
LABEL_99:
    sub_B7769C(Instance, v16);
  }
  v18 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v19 = 4LL;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v22 = v19 - 4;
    if ( (int)v19 - 4 >= (signed int)eventPointReward->max_length )
      break;
    if ( (_DWORD)v19 != 4 )
    {
      v20 = System_String__Concat_44901936(v20, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      Instance = System_String__Concat_44901936(v21, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_99;
      v21 = (System_String_o *)Instance;
    }
    if ( v22 >= eventPointReward->max_length )
    {
LABEL_100:
      v58 = sub_B776C8(Instance);
      sub_B77668(v58, 0LL);
    }
    v23 = *((_QWORD *)&eventPointReward->obj.klass + v19);
    if ( v23 )
    {
      Instance = System_String__Concat_44901936(v20, *(System_String_o **)(v23 + 16), 0LL);
      v24 = evpReward->fields.eventPointReward;
      if ( v24 )
      {
        if ( v22 >= v24->max_length )
          goto LABEL_100;
        v25 = *((_QWORD *)&v24->obj.klass + v19);
        if ( v25 )
        {
          v20 = (System_String_o *)Instance;
          Instance = System_String__Concat_44901936(v21, *(System_String_o **)(v25 + 24), 0LL);
          eventPointReward = evpReward->fields.eventPointReward;
          v21 = (System_String_o *)Instance;
          ++v19;
          if ( eventPointReward )
            continue;
        }
      }
    }
    goto LABEL_99;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v27 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10662/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
    Instance = System_String__Format(v28, v18, 0LL);
    if ( !v27 )
      goto LABEL_99;
    UILabel__set_text(v27, (System_String_o *)Instance, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    Instance = this->fields.itemLabel;
    if ( !Instance )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)Instance, v20, 0LL);
    v30 = this->fields.itemLabel;
    if ( !v30 )
      goto LABEL_99;
    mWidth = v30->fields.mWidth;
  }
  else
  {
    mWidth = 0;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    Instance = this->fields.numLabel;
    if ( !Instance )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)Instance, v21, 0LL);
    v33 = this->fields.numLabel;
    if ( !v33 )
      goto LABEL_99;
    if ( mWidth >= 1 )
    {
      v34 = v33->fields.mWidth;
      if ( v34 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v37 = v34 + mWidth + 2 * MESSAGE_GAP;
        if ( v37 <= BASE_MESSAGE_WIDTH )
          v38 = 1.0;
        else
          v38 = (float)BASE_MESSAGE_WIDTH / (float)v37;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_99;
        v39 = *((_DWORD *)Instance + 41);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v41 = v39 <= BASE_MESSAGE_HEIGHT ? 1.0 : (float)BASE_MESSAGE_HEIGHT / (float)v39;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v42 = (float)(v38 * (float)(mWidth - v34)) * 0.5;
        v43 = v38 * (float)MESSAGE_GAP;
        v59.fields.x = v42 - v43;
        v59.fields.y = 0.0;
        v59.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v59, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v60.fields.x = v43 + v42;
        v60.fields.y = 0.0;
        v60.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v60, 0LL);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v61.fields.x = v38;
        v61.fields.y = v38;
        v61.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v61, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v62.fields.x = v38;
        v62.fields.y = v38;
        v62.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v62, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (float)(v41 / v38) >= 1.0 )
        {
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v51 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          *(UnityEngine_Vector3_o *)&v44 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0LL);
          v46 = this->fields.itemLabel;
          if ( !v46 )
            goto LABEL_99;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          mHeight = (float)v46->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, *(UnityEngine_Vector3_o *)&v44, 0LL);
          v48 = this->fields.itemLabel;
          if ( !v48 )
            goto LABEL_99;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          v63.fields.z = 0.0;
          v63.fields.y = (float)-v48->fields.mHeight * 0.5;
          v63.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v63, 0LL);
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v51 = 1;
        }
        HIDWORD(scrView->fields.onDragStarted) = v51;
        Instance = *p_scrView;
        if ( !*p_scrView )
          goto LABEL_99;
        UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v53 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10661/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0LL);
    Instance = System_String__Format(v54, v18, 0LL);
    if ( !v53 )
      goto LABEL_99;
    UILabel__set_text(v53, (System_String_o *)Instance, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v56 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v56 )
    {
      UILabel__set_text(v56, (System_String_o *)Instance, 0LL);
      goto LABEL_98;
    }
    goto LABEL_99;
  }
LABEL_98:
  this->fields.isButtonEnable = 0;
  v57 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
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
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__BeginInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_43888F6 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43888F6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__Invoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isOk);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isOk, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isOk, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isOk, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isOk,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isOk, v20);
    goto LABEL_37;
  }
}