void __fastcall UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418708C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418708C = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  this->fields.isInitPanelDepth = 1;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_31A1330;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_24029420(this, 0LL, v2);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close_24029420(
        UserPresentBoxEventPointRewardDialog_o *this,
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

  if ( (byte_418708A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UserPresentBoxEventPointRewardDialog_EndClose__, v10);
    byte_418708A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *itemLabel; // x20
  UnityEngine_Object_o *numLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4187088 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4187088 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v5 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
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
    sub_B2C434(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418708B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418708B = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UIPanel_o *TargetPanel; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UIPanel_o *v24; // x22
  void *Instance; // x0
  __int64 v26; // x1
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  Il2CppObject *v28; // x20
  __int64 v29; // x24
  System_String_o *v30; // x23
  System_String_o *v31; // x22
  il2cpp_array_size_t v32; // w26
  __int64 v33; // x8
  struct UserPresentBoxWindow_evReward_array *v34; // x8
  __int64 v35; // x8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v37; // x21
  System_String_o *v38; // x0
  UnityEngine_Object_o *itemLabel; // x21
  struct UILabel_o *v40; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  struct UILabel_o *v43; // x8
  int v44; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  int v47; // w9
  float v48; // s8
  int v49; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v51; // s11
  float v52; // s9
  float v53; // s12
  int v54; // s0
  struct UILabel_o *v56; // x8
  float mHeight; // s1
  struct UILabel_o *v58; // x8
  struct UIScrollView_o **p_scrView; // x8
  struct UIScrollView_o *scrView; // x9
  int v61; // w10
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v63; // x21
  System_String_o *v64; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v66; // x20
  System_Action_o *v67; // x20
  __int64 v68; // x0
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187089 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, evpReward);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__, v11);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v12);
    sub_B2C35C(&StringLiteral_10464/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_10465/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, v14);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_4187089 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v24 = TargetPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v24->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, 0LL)) == 0LL
    || (eventPointReward = evpReward->fields.eventPointReward) == 0LL )
  {
LABEL_99:
    sub_B2C434(Instance, v26);
  }
  v28 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v29 = 4LL;
  v30 = (System_String_o *)StringLiteral_1/*""*/;
  v31 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v32 = v29 - 4;
    if ( (int)v29 - 4 >= (signed int)eventPointReward->max_length )
      break;
    if ( (_DWORD)v29 != 4 )
    {
      v30 = System_String__Concat_44305532(v30, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      Instance = System_String__Concat_44305532(v31, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_99;
      v31 = (System_String_o *)Instance;
    }
    if ( v32 >= eventPointReward->max_length )
    {
LABEL_100:
      v68 = sub_B2C460(Instance);
      sub_B2C400(v68, 0LL);
    }
    v33 = *((_QWORD *)&eventPointReward->obj.klass + v29);
    if ( v33 )
    {
      Instance = System_String__Concat_44305532(v30, *(System_String_o **)(v33 + 16), 0LL);
      v34 = evpReward->fields.eventPointReward;
      if ( v34 )
      {
        if ( v32 >= v34->max_length )
          goto LABEL_100;
        v35 = *((_QWORD *)&v34->obj.klass + v29);
        if ( v35 )
        {
          v30 = (System_String_o *)Instance;
          Instance = System_String__Concat_44305532(v31, *(System_String_o **)(v35 + 24), 0LL);
          eventPointReward = evpReward->fields.eventPointReward;
          v31 = (System_String_o *)Instance;
          ++v29;
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
    v37 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10465/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
    Instance = System_String__Format(v38, v28, 0LL);
    if ( !v37 )
      goto LABEL_99;
    UILabel__set_text(v37, (System_String_o *)Instance, 0LL);
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
    UILabel__set_text((UILabel_o *)Instance, v30, 0LL);
    v40 = this->fields.itemLabel;
    if ( !v40 )
      goto LABEL_99;
    mWidth = v40->fields.mWidth;
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
    UILabel__set_text((UILabel_o *)Instance, v31, 0LL);
    v43 = this->fields.numLabel;
    if ( !v43 )
      goto LABEL_99;
    if ( mWidth >= 1 )
    {
      v44 = v43->fields.mWidth;
      if ( v44 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v47 = v44 + mWidth + 2 * MESSAGE_GAP;
        if ( v47 <= BASE_MESSAGE_WIDTH )
          v48 = 1.0;
        else
          v48 = (float)BASE_MESSAGE_WIDTH / (float)v47;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_99;
        v49 = *((_DWORD *)Instance + 41);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v51 = v49 <= BASE_MESSAGE_HEIGHT ? 1.0 : (float)BASE_MESSAGE_HEIGHT / (float)v49;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v52 = (float)(v48 * (float)(mWidth - v44)) * 0.5;
        v53 = v48 * (float)MESSAGE_GAP;
        v69.fields.x = v52 - v53;
        v69.fields.y = 0.0;
        v69.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v69, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v70.fields.x = v53 + v52;
        v70.fields.y = 0.0;
        v70.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v70, 0LL);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v71.fields.x = v48;
        v71.fields.y = v48;
        v71.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v71, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v72.fields.x = v48;
        v72.fields.y = v48;
        v72.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v72, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (float)(v51 / v48) >= 1.0 )
        {
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v61 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          *(UnityEngine_Vector3_o *)&v54 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0LL);
          v56 = this->fields.itemLabel;
          if ( !v56 )
            goto LABEL_99;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          mHeight = (float)v56->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, *(UnityEngine_Vector3_o *)&v54, 0LL);
          v58 = this->fields.itemLabel;
          if ( !v58 )
            goto LABEL_99;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          v73.fields.z = 0.0;
          v73.fields.y = (float)-v58->fields.mHeight * 0.5;
          v73.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v73, 0LL);
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v61 = 1;
        }
        HIDWORD(scrView->fields.onDragStarted) = v61;
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
    v63 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10464/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0LL);
    Instance = System_String__Format(v64, v28, 0LL);
    if ( !v63 )
      goto LABEL_99;
    UILabel__set_text(v63, (System_String_o *)Instance, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v66 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v66 )
    {
      UILabel__set_text(v66, (System_String_o *)Instance, 0LL);
      goto LABEL_98;
    }
    goto LABEL_99;
  }
LABEL_98:
  this->fields.isButtonEnable = 0;
  v67 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41856B4 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isOk);
    byte_41856B4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__Invoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserPresentBoxEventPointRewardDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isOk, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isOk, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isOk, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isOk, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isOk,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isOk, v22);
    goto LABEL_37;
  }
}