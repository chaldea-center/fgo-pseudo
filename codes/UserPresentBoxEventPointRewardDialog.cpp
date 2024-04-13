void __fastcall UserPresentBoxEventPointRewardDialog___ctor(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E71EE & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E71EE = 1;
  }
  this->fields.MESSAGE_BASE_POS_Y = 54.0;
  this->fields.isInitPanelDepth = 1;
  *(_OWORD *)&this->fields.MESSAGE_FONT_SIZE = xmmword_32A1630;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserPresentBoxEventPointRewardDialog__Close_22553704(this, 0LL, v2);
}


void __fastcall UserPresentBoxEventPointRewardDialog__Close_22553704(
        UserPresentBoxEventPointRewardDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E71EC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserPresentBoxEventPointRewardDialog_EndClose__, v10, v11, v12);
    byte_42E71EC = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *itemLabel; // x20
  UnityEngine_Object_o *numLabel; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20

  if ( (byte_42E71EA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E71EA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v9 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
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
    sub_B5D69C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserPresentBoxEventPointRewardDialog__OnClickOk(
        UserPresentBoxEventPointRewardDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E71ED & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E71ED = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  UIPanel_o *TargetPanel; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UIPanel_o *v44; // x22
  void *Instance; // x0
  __int64 v46; // x1
  struct UserPresentBoxWindow_evReward_array *eventPointReward; // x8
  Il2CppObject *v48; // x20
  __int64 v49; // x24
  System_String_o *v50; // x23
  System_String_o *v51; // x22
  il2cpp_array_size_t v52; // w26
  __int64 v53; // x8
  struct UserPresentBoxWindow_evReward_array *v54; // x8
  __int64 v55; // x8
  UnityEngine_Object_o *titleLabel; // x21
  UILabel_o *v57; // x21
  System_String_o *v58; // x0
  UnityEngine_Object_o *itemLabel; // x21
  struct UILabel_o *v60; // x8
  int mWidth; // w23
  UnityEngine_Object_o *numLabel; // x21
  struct UILabel_o *v63; // x8
  int v64; // w21
  int32_t MESSAGE_GAP; // w22
  int32_t BASE_MESSAGE_WIDTH; // w8
  int v67; // w9
  float v68; // s8
  int v69; // w8
  int32_t BASE_MESSAGE_HEIGHT; // w9
  float v71; // s11
  float v72; // s9
  float v73; // s12
  int v74; // s0
  struct UILabel_o *v76; // x8
  float mHeight; // s1
  struct UILabel_o *v78; // x8
  struct UIScrollView_o **p_scrView; // x8
  struct UIScrollView_o *scrView; // x9
  int v81; // w10
  UnityEngine_Object_o *messageLabel; // x21
  UILabel_o *v83; // x21
  System_String_o *v84; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v86; // x20
  System_Action_o *v87; // x20
  __int64 v88; // x0
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E71EB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)evpReward, (_DWORD)func, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_UserPresentBoxEventPointRewardDialog_EndOpen__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10581/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_10582/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    byte_42E71EB = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    v44 = TargetPanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v44 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v44->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___),
        !evpReward)
    || !Instance
    || (Instance = ItemMaster__GetItemData((ItemMaster_o *)Instance, evpReward->fields.itemId, 0LL)) == 0LL
    || (eventPointReward = evpReward->fields.eventPointReward) == 0LL )
  {
LABEL_99:
    sub_B5D69C(Instance, v46);
  }
  v48 = (Il2CppObject *)*((_QWORD *)Instance + 3);
  v49 = 4LL;
  v50 = (System_String_o *)StringLiteral_1/*""*/;
  v51 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
  {
    v52 = v49 - 4;
    if ( (int)v49 - 4 >= (signed int)eventPointReward->max_length )
      break;
    if ( (_DWORD)v49 != 4 )
    {
      v50 = System_String__Concat_44577788(v50, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      Instance = System_String__Concat_44577788(v51, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      eventPointReward = evpReward->fields.eventPointReward;
      if ( !eventPointReward )
        goto LABEL_99;
      v51 = (System_String_o *)Instance;
    }
    if ( v52 >= eventPointReward->max_length )
    {
LABEL_100:
      v88 = sub_B5D6C8(Instance);
      sub_B5D668(v88, 0LL);
    }
    v53 = *((_QWORD *)&eventPointReward->obj.klass + v49);
    if ( v53 )
    {
      Instance = System_String__Concat_44577788(v50, *(System_String_o **)(v53 + 16), 0LL);
      v54 = evpReward->fields.eventPointReward;
      if ( v54 )
      {
        if ( v52 >= v54->max_length )
          goto LABEL_100;
        v55 = *((_QWORD *)&v54->obj.klass + v49);
        if ( v55 )
        {
          v50 = (System_String_o *)Instance;
          Instance = System_String__Concat_44577788(v51, *(System_String_o **)(v55 + 24), 0LL);
          eventPointReward = evpReward->fields.eventPointReward;
          v51 = (System_String_o *)Instance;
          ++v49;
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
    v57 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_10582/*"PRESENT_BOX_EVENT_POINT_REWARD_TITLE"*/, 0LL);
    Instance = System_String__Format(v58, v48, 0LL);
    if ( !v57 )
      goto LABEL_99;
    UILabel__set_text(v57, (System_String_o *)Instance, 0LL);
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
    UILabel__set_text((UILabel_o *)Instance, v50, 0LL);
    v60 = this->fields.itemLabel;
    if ( !v60 )
      goto LABEL_99;
    mWidth = v60->fields.mWidth;
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
    UILabel__set_text((UILabel_o *)Instance, v51, 0LL);
    v63 = this->fields.numLabel;
    if ( !v63 )
      goto LABEL_99;
    if ( mWidth >= 1 )
    {
      v64 = v63->fields.mWidth;
      if ( v64 >= 1 )
      {
        MESSAGE_GAP = this->fields.MESSAGE_GAP;
        BASE_MESSAGE_WIDTH = this->fields.BASE_MESSAGE_WIDTH;
        v67 = v64 + mWidth + 2 * MESSAGE_GAP;
        if ( v67 <= BASE_MESSAGE_WIDTH )
          v68 = 1.0;
        else
          v68 = (float)BASE_MESSAGE_WIDTH / (float)v67;
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_99;
        v69 = *((_DWORD *)Instance + 41);
        BASE_MESSAGE_HEIGHT = this->fields.BASE_MESSAGE_HEIGHT;
        v71 = v69 <= BASE_MESSAGE_HEIGHT ? 1.0 : (float)BASE_MESSAGE_HEIGHT / (float)v69;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v72 = (float)(v68 * (float)(mWidth - v64)) * 0.5;
        v73 = v68 * (float)MESSAGE_GAP;
        v89.fields.x = v72 - v73;
        v89.fields.y = 0.0;
        v89.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v89, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v90.fields.x = v73 + v72;
        v90.fields.y = 0.0;
        v90.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v90, 0LL);
        Instance = this->fields.itemLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v91.fields.x = v68;
        v91.fields.y = v68;
        v91.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v91, 0LL);
        Instance = this->fields.numLabel;
        if ( !Instance )
          goto LABEL_99;
        Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_99;
        v92.fields.x = v68;
        v92.fields.y = v68;
        v92.fields.z = 1.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v92, 0LL);
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !Instance )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (float)(v71 / v68) >= 1.0 )
        {
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v81 = 4;
        }
        else
        {
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          *(UnityEngine_Vector3_o *)&v74 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Instance, 0LL);
          v76 = this->fields.itemLabel;
          if ( !v76 )
            goto LABEL_99;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          mHeight = (float)v76->fields.mHeight;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Instance, *(UnityEngine_Vector3_o *)&v74, 0LL);
          v78 = this->fields.itemLabel;
          if ( !v78 )
            goto LABEL_99;
          Instance = this->fields.scrField;
          if ( !Instance )
            goto LABEL_99;
          v93.fields.z = 0.0;
          v93.fields.y = (float)-v78->fields.mHeight * 0.5;
          v93.fields.x = 0.0;
          UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Instance, v93, 0LL);
          p_scrView = &this->fields.scrView;
          scrView = this->fields.scrView;
          if ( !scrView )
            goto LABEL_99;
          v81 = 1;
        }
        HIDWORD(scrView->fields.onDragStarted) = v81;
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
    v83 = this->fields.messageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_10581/*"PRESENT_BOX_EVENT_POINT_REWARD_MESSAGE"*/, 0LL);
    Instance = System_String__Format(v84, v48, 0LL);
    if ( !v83 )
      goto LABEL_99;
    UILabel__set_text(v83, (System_String_o *)Instance, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v86 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( v86 )
    {
      UILabel__set_text(v86, (System_String_o *)Instance, 0LL);
      goto LABEL_98;
    }
    goto LABEL_99;
  }
LABEL_98:
  this->fields.isButtonEnable = 0;
  v87 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_UserPresentBoxEventPointRewardDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
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
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_42E7006 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOk, (_DWORD)callback, object);
    byte_42E7006 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall UserPresentBoxEventPointRewardDialog_ClickDelegate__EndInvoke(
        UserPresentBoxEventPointRewardDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  UserPresentBoxEventPointRewardDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isOk, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isOk, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isOk, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isOk,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isOk, v21);
    goto LABEL_37;
  }
}