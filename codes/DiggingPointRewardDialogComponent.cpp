void __fastcall DiggingPointRewardDialogComponent___ctor(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5F332 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_Color___TypeInfo);
    byte_4A5F332 = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1B88658(UnityEngine_Color___TypeInfo, 2LL);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.viewChangeButtonLabelEffectColors, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__EndClose(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4A5F32E & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5F32E = 1;
  }
  DiggingPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall DiggingPointRewardDialogComponent__Init(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__OnClickCloseButton(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x0
  Il2CppObject *current; // x20
  System_Action_o *v8; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5F32D & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingPointRewardDialogComponent_EndClose__);
    sub_1B885B0(&Method_DiggingPointRewardDialogComponent_OnClickCloseButton__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F32D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_DiggingPointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingPointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_DiggingPointRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1B8880C(0LL, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingPointRewardDialogComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
  }
}


void __fastcall DiggingPointRewardDialogComponent__OnClickSwitchShowMode(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  _BOOL4 isShowPossessionNum; // w8
  UIButton_o *viewChangeButton; // x0
  System_String_o **v8; // x8
  UISprite_o *v9; // x20
  System_String_o *normalSprite; // x21
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x9
  unsigned int max_length; // w8
  float *p_g; // x8
  float *p_b; // x10
  float *p_a; // x11
  float *p_r; // x9
  int32_t v17; // w20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5F32F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&StringLiteral_24065/*"treasurechest_btn"*/);
    sub_1B885B0(&StringLiteral_24067/*"treasurechest_btn_on"*/);
    byte_4A5F32F = 1;
  }
  v3 = Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24065/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24067/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0LL);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v9, normalSprite, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1B8880C(viewChangeButton, v5);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1B88814(viewChangeButton, v5);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[2].fields.r;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v18.fields.a = *p_r;
  v18.fields.b = *p_a;
  v18.fields.g = *p_b;
  v18.fields.r = *p_g;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v18, 0LL);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v17 = 0;
  while ( v17 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v17,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession(
          (ItemIconComponent_o *)viewChangeButton,
          this->fields.isShowPossessionNum,
          0LL);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v17;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void __fastcall DiggingPointRewardDialogComponent__Open(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *diggingRewards,
        int32_t eventId,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v11; // x22
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Component_object; // x23
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x24
  Il2CppObject *v27; // x25
  UILabel_o *v28; // x26
  Il2CppObject *ComponentInChildren_object; // x27
  UILabel_o *titleLabel; // x26
  System_String_o *v31; // x0
  UILabel_o *titleNextItemLabel; // x26
  UILabel_o *titleAtLabel; // x26
  int64_t v34; // x25
  EventRewardEntity_o *v35; // x21
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  int32_t v38; // w3
  System_Action_o *v39; // x20

  if ( (byte_4A5F32A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__);
    sub_1B885B0(&DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13429/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_24065/*"treasurechest_btn"*/);
    sub_1B885B0(&StringLiteral_24071/*"treasurechest_img_bg_reward"*/);
    sub_1B885B0(&StringLiteral_5041/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1B885B0(&StringLiteral_5036/*"DIGGING_EVENT_POINT_REWARD"*/);
    sub_1B885B0(&StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_1B885B0(&StringLiteral_5034/*"DIGGING_EVENT_POINT"*/);
    sub_1B885B0(&StringLiteral_11072/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4A5F32A = 1;
  }
  v11 = sub_1B887FC(DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_31;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = diggingRewards;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)diggingRewards, v16, v17);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventRootMaskSetActiveAction,
    (int32_t)setMaskMethod,
    v18,
    v19);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_31;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       viewChangeButton,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24065/*"treasurechest_btn"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_31;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24065/*"treasurechest_btn"*/, 0LL);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_31;
  if ( !viewChangeButtonLabelEffectColors->max_length )
    sub_1B88814(viewChangeButton, v13);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_31;
  UILabel__set_effectColor(
    (UILabel_o *)viewChangeButton,
    *(UnityEngine_Color_o *)&viewChangeButtonLabelEffectColors->m_Items[0].fields.g,
    0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v22, v23, v24);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)viewChangeButton,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_31;
  viewChangeButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)viewChangeButton,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
             eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5034/*"DIGGING_EVENT_POINT"*/, 0LL);
  if ( !this->fields.viewChangeButton )
    goto LABEL_31;
  v27 = (Il2CppObject *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_31;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  if ( !this->fields.closeButton )
    goto LABEL_31;
  v28 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0LL);
  if ( !viewChangeButton )
    goto LABEL_31;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 viewChangeButton,
                                 1,
                                 (const MethodInfo_2E76830 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____76107248);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5041/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0LL);
  if ( !v28 )
    goto LABEL_31;
  UILabel__set_text(v28, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11072/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0LL);
  titleLabel = this->fields.titleLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13429/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v31, v27, 0LL);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0LL);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0LL);
  if ( !titleNextItemLabel )
    goto LABEL_31;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0LL);
  titleAtLabel = this->fields.titleAtLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5036/*"DIGGING_EVENT_POINT_REWARD"*/, 0LL);
  if ( !titleAtLabel )
    goto LABEL_31;
  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !viewChangeButton )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v27, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !viewChangeButton )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_24071/*"treasurechest_img_bg_reward"*/, 0LL);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24071/*"treasurechest_img_bg_reward"*/, 0LL);
  viewChangeButton = (UnityEngine_Component_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0LL);
  if ( !MasterData_object )
    goto LABEL_31;
  v34 = (int64_t)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                  (EventRewardMaster_o *)MasterData_object,
                                                  eventId,
                                                  (int64_t)viewChangeButton,
                                                  0LL);
  if ( !Entity
    || (v35 = (EventRewardEntity_o *)viewChangeButton,
        AtlasManager__SetItem(this->fields.eventPointSprite, (int32_t)Entity[2].klass, 0LL),
        AtlasManager__SetItem(this->fields.titleIcon, (int32_t)Entity[2].klass, 0LL),
        DiggingPointRewardDialogComponent__SetNextItemLabel(this, v34, v35, v36),
        this->fields.closeCallbackFunc = closeCallback,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
          (int32_t)closeCallback,
          v37,
          v38),
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL) )
  {
LABEL_31:
    sub_1B8880C(viewChangeButton, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0LL);
  v39 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v11,
    Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetNextItemLabel(
        DiggingPointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v14; // x1
  char v15; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v18; // x1
  int64_t v19; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5F32C & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1B885B0(&StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1B885B0(&StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F32C = 1;
  }
  nameText = 0LL;
  countText = 0LL;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2941/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0LL);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0LL);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0LL);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0LL);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_16:
          v18 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B8880C(nextItemNameLabel, v14);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0LL);
  v7 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2943/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0LL);
  v19 = eventRewardEnt->fields.point - userEventPoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19, v9, v10, v11);
  nextItemNameLabel = System_String__Format(v8, v12, 0LL);
  if ( !v7 )
    goto LABEL_20;
  UILabel__set_text(v7, nextItemNameLabel, 0LL);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0LL);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v15 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0LL);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v15 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( !nextItemNameLabel )
    goto LABEL_20;
  v18 = nameText;
LABEL_19:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v18, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetPossession(
        DiggingPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F330 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F330 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  entity = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_12:
    sub_1B8880C(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent__SetResultData(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingPointRewardDialogComponent_o *v4; // x20
  signed int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v10; // x10
  int v11; // w29
  Il2CppObject *prefabResultItem; // x22
  DiggingPointRewardDialogComponent_o *v13; // x22
  DiggingPointRewardDialogComponent_o *v14; // x25
  int32_t v15; // w3
  ItemIconComponent_o *v16; // x25
  DiggingPointRewardDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5F32B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingPointRewardDialogComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F32B = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1B88814(this, rewards);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          goto LABEL_31;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v10 = 44LL;
        if ( v7->fields.originalNum > 0 )
          v10 = 52LL;
        v11 = *(_DWORD *)((char *)&v7->klass + v10);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        prefabResultItem,
                                                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v13 = this;
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0LL);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        0LL);
        v14 = this;
        if ( !byte_4A55CE1 )
        {
          this = (DiggingPointRewardDialogComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        0LL);
        if ( !this )
          goto LABEL_31;
        v25.fields.x = v4->fields.iconScale;
        v25.fields.y = v25.fields.x;
        v25.fields.z = v25.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v25, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v11 <= 1 ? -1 : v11;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, type, objectId, v15, 0, 0LL);
        DiggingPointRewardDialogComponent__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0LL);
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        v21 = *(_QWORD *)&this->fields.m_CachedPtr;
        v22 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v21 )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v24 + 32) = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v13, v19, v20);
        }
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0LL )
        {
LABEL_31:
          sub_1B8880C(this, rewards);
        }
        this = (DiggingPointRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingPointRewardDialogComponent_o *, void *))this->klass[1]._1.namespaze)(
                                                        this,
                                                        this->klass[1]._1.byval_arg.data);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *__fastcall DiggingPointRewardDialogComponent__get_closeBtnObject(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5F331 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F331 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingPointRewardDialogComponent___c__DisplayClass29_0___Open_b__0(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingPointRewardDialogComponent_o *_4__this; // x0
  struct DiggingPointRewardDialogComponent_o *v5; // x8

  if ( (byte_4A5F333 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A5F333 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingPointRewardDialogComponent__SetResultData(_4__this, this->fields.diggingRewards, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}