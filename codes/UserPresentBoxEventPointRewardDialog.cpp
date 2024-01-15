void __fastcall UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9796 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9796 = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  this->fields.isInitPanelDepth = 1;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_31352E0;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_24071824(this, 0LL, v2);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close_24071824(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9794 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UserPresentBoxEventPointRewardDialog_EndClose__, v10);
    byte_40F9794 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UnityEngine_Object_o *v6; // x20
  UILabel_o *v7; // x0
  UnityEngine_Object_o *itemLabel; // x20
  UILabel_o *v9; // x0
  UnityEngine_Object_o *numLabel; // x20
  UILabel_o *v11; // x0
  UnityEngine_Object_o *v12; // x20
  UILabel_o *v13; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9792 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F9792 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_37;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v6 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    v7 = this->fields.titleLabel;
    if ( !v7 )
      goto LABEL_37;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    v9 = this->fields.itemLabel;
    if ( !v9 )
      goto LABEL_37;
    UILabel__set_text(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    v11 = this->fields.numLabel;
    if ( !v11 )
      goto LABEL_37;
    UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v12 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    v13 = this->fields.messageLabel;
    if ( !v13 )
      goto LABEL_37;
    UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v15 = this->fields.okBtnLabel;
    if ( !v15 )
      goto LABEL_37;
    UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_37:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40F9795 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9795 = 1;
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
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  void *ItemData; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  Il2CppObject *v31; // x20
  __int64 v32; // x24
  System_String_o *v33; // x23
  System_String_o *v34; // x22
  il2cpp_array_size_t v35; // w26
  __int64 v36; // x8
  struct UserPresentBoxWindow_evReward_array *v37; // x8
  __int64 v38; // x8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v40; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  UnityEngine_Object_o *itemLabel; // x21
  UILabel_o *v44; // x0
  struct UILabel_o *v45; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  UILabel_o *v48; // x0
  struct UILabel_o *v49; // x8
  int v50; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  int v53; // w9
  float v54; // s8
  struct UILabel_o *v55; // x0
  int mHeight; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v58; // s11
  UnityEngine_Transform_o *transform; // x0
  float v60; // s9
  float v61; // s12
  UnityEngine_Component_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_Transform_o *v65; // x0
  UnityEngine_Component_o *v66; // x0
  UnityEngine_Transform_o *v67; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_BoxCollider_o *scrField; // x0
  int v70; // s0
  struct UILabel_o *v72; // x8
  UnityEngine_BoxCollider_o *v73; // x0
  float v74; // s1
  struct UILabel_o *v75; // x8
  UnityEngine_BoxCollider_o *v76; // x0
  UIScrollView_o **p_scrView; // x8
  struct UIScrollView_o *scrView; // x9
  int v79; // w10
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v82; // x21
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  UILabel_o *v90; // x20
  System_String_o *v91; // x0
  System_Action_o *v92; // x20
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9793 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, evpReward);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__, v11);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v12);
    sub_B16FFC(&StringLiteral_10431/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, v13);
    sub_B16FFC(&StringLiteral_10432/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, v14);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    byte_40F9793 = 1;
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
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
    {
      if ( !v24 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v24->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !MasterData_WarQuestSelectionMaster
    || (ItemData = ItemMaster__GetItemData(MasterData_WarQuestSelectionMaster, evpReward->fields.itemId, 0LL)) == 0LL
    || (eventPointReward = evpReward->fields.eventPointReward) == 0LL )
  {
LABEL_99:
    sub_B170D4();
  }
  v31 = (Il2CppObject *)*((_QWORD *)ItemData + 3);
  v32 = 4LL;
  v33 = (System_String_o *)StringLiteral_1/*""*/;
  v34 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v35 = v32 - 4;
    if ( (int)v32 - 4 >= (signed int)eventPointReward->max_length )
      break;
    if ( (_DWORD)v32 != 4 )
    {
      v33 = System_String__Concat_43743732(v33, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      ItemData = System_String__Concat_43743732(v34, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_99;
      v34 = (System_String_o *)ItemData;
    }
    if ( v35 >= eventPointReward->max_length )
    {
LABEL_100:
      sub_B17100(ItemData, v28, v29);
      sub_B170A0();
    }
    v36 = *((_QWORD *)&eventPointReward->obj.klass + v32);
    if ( v36 )
    {
      ItemData = System_String__Concat_43743732(v33, *(System_String_o **)(v36 + 16), 0LL);
      v37 = evpReward->fields.eventPointReward;
      if ( v37 )
      {
        if ( v35 >= v37->max_length )
          goto LABEL_100;
        v38 = *((_QWORD *)&v37->obj.klass + v32);
        if ( v38 )
        {
          v33 = (System_String_o *)ItemData;
          ItemData = System_String__Concat_43743732(v34, *(System_String_o **)(v38 + 24), 0LL);
          eventPointReward = evpReward->fields.eventPointReward;
          v34 = (System_String_o *)ItemData;
          ++v32;
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
    v40 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10432/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
    v42 = System_String__Format(v41, v31, 0LL);
    if ( !v40 )
      goto LABEL_99;
    UILabel__set_text(v40, v42, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    v44 = this->fields.itemLabel;
    if ( !v44 )
      goto LABEL_99;
    UILabel__set_text(v44, v33, 0LL);
    v45 = this->fields.itemLabel;
    if ( !v45 )
      goto LABEL_99;
    mWidth = v45->fields.mWidth;
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
    v48 = this->fields.numLabel;
    if ( !v48 )
      goto LABEL_99;
    UILabel__set_text(v48, v34, 0LL);
    v49 = this->fields.numLabel;
    if ( !v49 )
      goto LABEL_99;
    if ( mWidth >= 1 )
    {
      v50 = v49->fields.mWidth;
      if ( v50 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v53 = v50 + mWidth + 2 * MESSAGE_GAP;
        if ( v53 <= BASE_MESSAGE_WIDTH )
          v54 = 1.0;
        else
          v54 = (float)BASE_MESSAGE_WIDTH / (float)v53;
        v55 = this->fields.itemLabel;
        if ( !v55 )
          goto LABEL_99;
        mHeight = v55->fields.mHeight;
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v58 = mHeight <= BASE_MESSAGE_HEIGHT ? 1.0 : (float)BASE_MESSAGE_HEIGHT / (float)mHeight;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v55, 0LL);
        if ( !transform )
          goto LABEL_99;
        v60 = (float)(v54 * (float)(mWidth - v50)) * 0.5;
        v61 = v54 * (float)MESSAGE_GAP;
        v93.fields.x = v60 - v61;
        v93.fields.y = 0.0;
        v93.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(transform, v93, 0LL);
        v62 = (UnityEngine_Component_o *)this->fields.numLabel;
        if ( !v62 )
          goto LABEL_99;
        v63 = UnityEngine_Component__get_transform(v62, 0LL);
        if ( !v63 )
          goto LABEL_99;
        v94.fields.x = v61 + v60;
        v94.fields.y = 0.0;
        v94.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v63, v94, 0LL);
        v64 = (UnityEngine_Component_o *)this->fields.itemLabel;
        if ( !v64 )
          goto LABEL_99;
        v65 = UnityEngine_Component__get_transform(v64, 0LL);
        if ( !v65 )
          goto LABEL_99;
        v95.fields.x = v54;
        v95.fields.y = v54;
        v95.fields.z = 1.0;
        UnityEngine_Transform__set_localScale(v65, v95, 0LL);
        v66 = (UnityEngine_Component_o *)this->fields.numLabel;
        if ( !v66 )
          goto LABEL_99;
        v67 = UnityEngine_Component__get_transform(v66, 0LL);
        if ( !v67 )
          goto LABEL_99;
        v96.fields.x = v54;
        v96.fields.y = v54;
        v96.fields.z = 1.0;
        UnityEngine_Transform__set_localScale(v67, v96, 0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !gameObject )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( (float)(v58 / v54) >= 1.0 )
        {
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v79 = 4;
        }
        else
        {
          scrField = this->fields.scrField;
          if ( !scrField )
            goto LABEL_99;
          *(UnityEngine_Vector3_o *)&v70 = UnityEngine_BoxCollider__get_size(scrField, 0LL);
          v72 = this->fields.itemLabel;
          if ( !v72 )
            goto LABEL_99;
          v73 = this->fields.scrField;
          if ( !v73 )
            goto LABEL_99;
          v74 = (float)v72->fields.mHeight;
          UnityEngine_BoxCollider__set_size(v73, *(UnityEngine_Vector3_o *)&v70, 0LL);
          v75 = this->fields.itemLabel;
          if ( !v75 )
            goto LABEL_99;
          v76 = this->fields.scrField;
          if ( !v76 )
            goto LABEL_99;
          v97.fields.z = 0.0;
          v97.fields.y = (float)-v75->fields.mHeight * 0.5;
          v97.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center(v76, v97, 0LL);
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v79 = 1;
        }
        HIDWORD(scrView->fields.onDragStarted) = v79;
        if ( !*p_scrView )
          goto LABEL_99;
        UIScrollView__ResetPosition(*p_scrView, 0LL);
        v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !v80 )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive(v80, 0, 0LL);
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
    v82 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10431/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0LL);
    v84 = System_String__Format(v83, v31, 0LL);
    if ( !v82 )
      goto LABEL_99;
    UILabel__set_text(v82, v84, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v90 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v90 )
    {
      UILabel__set_text(v90, v91, 0LL);
      goto LABEL_98;
    }
    goto LABEL_99;
  }
LABEL_98:
  this->fields.isButtonEnable = 0;
  v92 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v86, v87, v88, v89);
  System_Action___ctor(v92, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v92, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F798C & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isOk);
    byte_40F798C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isOk, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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