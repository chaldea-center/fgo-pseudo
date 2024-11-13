void __fastcall UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14FD6 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14FD6 = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_BD3550;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_38184792(this, 0LL, v2);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close_38184792(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B14FD4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UserPresentBoxEventPointRewardDialog_EndClose__, v10, v11);
    byte_4B14FD4 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__EndClose(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  UserPresentBoxEventPointRewardDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *itemLabel; // x20
  UnityEngine_Object_o *numLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_4B14FD2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B14FD2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v8 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.itemLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.numLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_32;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B14FD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserPresentBoxEventPointRewardDialog_OnClickOk__, method, v2);
    byte_4B14FD5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_UserPresentBoxEventPointRewardDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_UserPresentBoxEventPointRewardDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserPresentBoxEventPointRewardDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  UIPanel_o *TargetPanel; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UIPanel_o *v35; // x22
  void *Instance; // x0
  __int64 v37; // x1
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  System_String_o *v39; // x23
  Il2CppObject *v40; // x20
  __int64 v41; // x28
  System_String_o *v42; // x22
  il2cpp_array_size_t v43; // w29
  __int64 v44; // x8
  struct UserPresentBoxWindow_evReward_array *v45; // x8
  __int64 v46; // x8
  UnityEngine_Object_o *titleLabel; // x21
  __int64 v48; // x1
  UILabel_o *v49; // x21
  System_String_o *v50; // x0
  UnityEngine_Object_o *itemLabel; // x21
  struct UILabel_o *v52; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  struct UILabel_o *v55; // x8
  int v56; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  float v59; // s8
  int v60; // w9
  int v61; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v63; // s9
  float v64; // s10
  float v65; // s11
  int v66; // s0
  struct UILabel_o *v68; // x8
  float mHeight; // s1
  struct UILabel_o *v70; // x8
  int v71; // w8
  UnityEngine_Object_o *messageLabel; // x21
  __int64 v73; // x1
  UILabel_o *v74; // x21
  System_String_o *v75; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  UILabel_o *v80; // x20
  System_Action_o *v81; // x20
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14FD3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, evpReward, func);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__, v15, v16);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_10541/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10542/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B14FD3 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v35 = TargetPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_87;
      this->fields.keepPanelDepth = v35->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v29, v30, v31, v32, v33, v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, 0LL)) == 0LL
    || (eventPointReward = evpReward->fields.eventPointReward) == 0LL )
  {
LABEL_87:
    sub_1BCAA3C(Instance, v37);
  }
  v39 = (System_String_o *)StringLiteral_1/*""*/;
  v40 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v41 = 4LL;
  v42 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v43 = v41 - 4;
    if ( (int)v41 - 4 >= (signed int)eventPointReward->max_length )
      break;
    if ( (_DWORD)v41 != 4 )
    {
      v39 = System_String__Concat_62401220(v39, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      Instance = System_String__Concat_62401220(v42, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_87;
      v42 = (System_String_o *)Instance;
    }
    if ( v43 >= eventPointReward->max_length )
LABEL_88:
      sub_1BCAA44(Instance, v37);
    v44 = *((_QWORD *)&eventPointReward->obj.klass + v41);
    if ( v44 )
    {
      Instance = System_String__Concat_62401220(v39, *(System_String_o **)(v44 + 16), 0LL);
      v45 = evpReward->fields.eventPointReward;
      if ( v45 )
      {
        if ( v43 >= v45->max_length )
          goto LABEL_88;
        v46 = *((_QWORD *)&v45->obj.klass + v41);
        if ( v46 )
        {
          v39 = (System_String_o *)Instance;
          Instance = System_String__Concat_62401220(v42, *(System_String_o **)(v46 + 24), 0LL);
          eventPointReward = evpReward->fields.eventPointReward;
          v42 = (System_String_o *)Instance;
          ++v41;
          if ( eventPointReward )
            continue;
        }
      }
    }
    goto LABEL_87;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v49 = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_10542/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
    Instance = System_String__Format(v50, v40, 0LL);
    if ( !v49 )
      goto LABEL_87;
    UILabel__set_text(v49, (System_String_o *)Instance, 0LL);
  }
  itemLabel = (UnityEngine_Object_o *)this->fields.itemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Inequality(itemLabel, 0LL, 0LL) )
  {
    Instance = this->fields.itemLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v39, 0LL);
    v52 = this->fields.itemLabel;
    if ( !v52 )
      goto LABEL_87;
    mWidth = v52->fields.mWidth;
  }
  else
  {
    mWidth = 0;
  }
  numLabel = (UnityEngine_Object_o *)this->fields.numLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(numLabel, 0LL, 0LL) )
  {
    Instance = this->fields.numLabel;
    if ( !Instance )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)Instance, v42, 0LL);
    v55 = this->fields.numLabel;
    if ( !v55 )
      goto LABEL_87;
    if ( mWidth >= 1 )
    {
      v56 = v55->fields.mWidth;
      if ( v56 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v59 = 1.0;
        v60 = v56 + mWidth + 2 * MESSAGE_GAP;
        if ( v60 > BASE_MESSAGE_WIDTH )
          v59 = (float)BASE_MESSAGE_WIDTH / (float)v60;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        v61 = *((_DWORD *)Instance + 43);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v63 = 1.0;
        if ( v61 > BASE_MESSAGE_HEIGHT )
          v63 = (float)BASE_MESSAGE_HEIGHT / (float)v61;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v64 = (float)(v59 * (float)(mWidth - v56)) * 0.5;
        v65 = v59 * (float)MESSAGE_GAP;
        v82.fields.x = v64 - v65;
        v82.fields.y = 0.0;
        v82.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v82, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v83.fields.x = v65 + v64;
        v83.fields.y = 0.0;
        v83.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v83, 0LL);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v84.fields.z = 1.0;
        v84.fields.x = v59;
        v84.fields.y = v59;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v84, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_87;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_87;
        v85.fields.z = 1.0;
        v85.fields.x = v59;
        v85.fields.y = v59;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v85, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (float)(v63 / v59) >= 1.0 )
        {
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v71 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          *(UnityEngine_Vector3_o *)&v66 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0LL);
          v68 = this->fields.itemLabel;
          if ( !v68 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          mHeight = (float)v68->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, *(UnityEngine_Vector3_o *)&v66, 0LL);
          v70 = this->fields.itemLabel;
          if ( !v70 )
            goto LABEL_87;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_87;
          v86.fields.z = 0.0;
          v86.fields.y = (float)-v70->fields.mHeight * 0.5;
          v86.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v86, 0LL);
          Instance = this->fields.scrView;
          if ( !Instance )
            goto LABEL_87;
          v71 = 1;
        }
        *((_DWORD *)Instance + 21) = v71;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v74 = this->fields.messageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10541/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0LL);
    Instance = System_String__Format(v75, v40, 0LL);
    if ( !v74 )
      goto LABEL_87;
    UILabel__set_text(v74, (System_String_o *)Instance, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v80 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v80 )
    {
      UILabel__set_text(v80, (System_String_o *)Instance, 0LL);
      goto LABEL_86;
    }
    goto LABEL_87;
  }
LABEL_86:
  this->fields.isButtonEnable = 0;
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v77, v78, v79);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate___ctor(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C25C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C214;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B14FD7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B14FD7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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