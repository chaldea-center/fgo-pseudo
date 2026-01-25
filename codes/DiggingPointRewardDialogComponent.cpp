void DiggingPointRewardDialogComponent___ctor(DiggingPointRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Color_array *v3; // x0

  if ( (byte_4CE8E0F & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Color___TypeInfo);
    byte_4CE8E0F = 1;
  }
  this->fields.iconScale = 0.85;
  v3 = (struct UnityEngine_Color_array *)sub_1C7BB90(UnityEngine_Color___TypeInfo, 2);
  this->fields.viewChangeButtonLabelEffectColors = v3;
  sub_1C7BA8C(&this->fields.viewChangeButtonLabelEffectColors, v3);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DiggingPointRewardDialogComponent__EndClose(DiggingPointRewardDialogComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4CE8E0B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_bool___);
    byte_4CE8E0B = 1;
  }
  DiggingPointRewardDialogComponent__Init(this, method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_30B92A0 *)Method_ActionExtensions_Call_bool___);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void DiggingPointRewardDialogComponent__Init(DiggingPointRewardDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.state = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DiggingPointRewardDialogComponent__OnClickCloseButton(
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

  if ( (byte_4CE8E0A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_bool___);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DiggingPointRewardDialogComponent_EndClose__);
    sub_1C7BAE8(&Method_DiggingPointRewardDialogComponent_OnClickCloseButton__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8E0A = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    ActionExtensions__Call_bool_(
      (System_Action_T__o *)this->fields.eventRootMaskSetActiveAction,
      1,
      (const MethodInfo_30B92A0 *)Method_ActionExtensions_Call_bool___);
    v3 = Method_DiggingPointRewardDialogComponent_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_DiggingPointRewardDialogComponent_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_DiggingPointRewardDialogComponent_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    resultItemObjList = this->fields.resultItemObjList;
    if ( !resultItemObjList )
      sub_1C7BD40(0, v5);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)resultItemObjList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71870148((UnityEngine_Object_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_DiggingPointRewardDialogComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v8, 0);
  }
}


void DiggingPointRewardDialogComponent__OnClickSwitchShowMode(
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
  float *p_r; // x8
  float *p_g; // x10
  float *p_b; // x11
  float *p_a; // x9
  int32_t v17; // w20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CE8E0C & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&StringLiteral_24441/*"treasurechest_btn"*/);
    sub_1C7BAE8(&StringLiteral_24443/*"treasurechest_btn_on"*/);
    byte_4CE8E0C = 1;
  }
  v3 = Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__;
  if ( (*((_BYTE *)Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_DiggingPointRewardDialogComponent_OnClickSwitchShowMode__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isShowPossessionNum = this->fields.isShowPossessionNum;
  viewChangeButton = this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = !isShowPossessionNum;
  if ( !viewChangeButton )
    goto LABEL_26;
  v8 = isShowPossessionNum ? (System_String_o **)&StringLiteral_24441/*"treasurechest_btn"*/ : (System_String_o **)&StringLiteral_24443/*"treasurechest_btn_on"*/;
  UIButton__set_normalSprite(viewChangeButton, *v8, 0);
  viewChangeButton = this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_26;
  viewChangeButton = (UIButton_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)viewChangeButton,
                                     (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.viewChangeButton )
    goto LABEL_26;
  v9 = (UISprite_o *)viewChangeButton;
  normalSprite = UIButton__get_normalSprite(this->fields.viewChangeButton, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  viewChangeButton = (UIButton_o *)AtlasManager__SetEventUI(v9, normalSprite, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
LABEL_26:
    sub_1C7BD40(viewChangeButton, v5);
  viewChangeButton = (UIButton_o *)this->fields.viewChangeButtonLabel;
  max_length = viewChangeButtonLabelEffectColors->max_length;
  if ( !this->fields.isShowPossessionNum )
  {
    if ( max_length )
    {
      p_r = &viewChangeButtonLabelEffectColors->m_Items[0].fields.r;
      p_g = &viewChangeButtonLabelEffectColors->m_Items[0].fields.g;
      p_b = &viewChangeButtonLabelEffectColors->m_Items[0].fields.b;
      p_a = &viewChangeButtonLabelEffectColors->m_Items[0].fields.a;
      if ( !viewChangeButton )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_28:
    sub_1C7BD48(viewChangeButton);
  }
  if ( max_length <= 1 )
    goto LABEL_28;
  p_r = &viewChangeButtonLabelEffectColors->m_Items[1].fields.r;
  p_g = &viewChangeButtonLabelEffectColors->m_Items[1].fields.g;
  p_b = &viewChangeButtonLabelEffectColors->m_Items[1].fields.b;
  p_a = &viewChangeButtonLabelEffectColors->m_Items[1].fields.a;
  if ( !viewChangeButton )
    goto LABEL_26;
LABEL_20:
  v18.fields.a = *p_a;
  v18.fields.b = *p_b;
  v18.fields.g = *p_g;
  v18.fields.r = *p_r;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, v18, 0);
  viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
  if ( !viewChangeButton )
    goto LABEL_26;
  v17 = 0;
  while ( v17 < SLODWORD(viewChangeButton->fields.m_CancellationTokenSource) )
  {
    viewChangeButton = (UIButton_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)viewChangeButton,
                                       v17,
                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( viewChangeButton )
    {
      viewChangeButton = (UIButton_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)viewChangeButton,
                                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
      if ( viewChangeButton )
      {
        ItemIconComponent__ShowPossession((ItemIconComponent_o *)viewChangeButton, this->fields.isShowPossessionNum, 0);
        viewChangeButton = (UIButton_o *)this->fields.resultItemObjList;
        ++v17;
        if ( viewChangeButton )
          continue;
      }
    }
    goto LABEL_26;
  }
}


void DiggingPointRewardDialogComponent__Open(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *diggingRewards,
        int32_t eventId,
        System_Action_bool__o *setMaskMethod,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  Il2CppObject *v11; // x22
  UnityEngine_Component_o *viewChangeButton; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x23
  struct UnityEngine_Color_array *viewChangeButtonLabelEffectColors; // x8
  System_Collections_Generic_List_object__o *v16; // x23
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x24
  Il2CppObject *v19; // x25
  UILabel_o *v20; // x26
  Il2CppObject *ComponentInChildren_object; // x27
  UILabel_o *titleLabel; // x26
  System_String_o *v23; // x0
  UILabel_o *titleNextItemLabel; // x26
  UILabel_o *titleAtLabel; // x26
  int64_t v26; // x25
  EventRewardEntity_o *v27; // x21
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x20

  if ( (byte_4CE8E07 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____78814056);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDiggingMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRewardMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__);
    sub_1C7BAE8(&DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13579/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_24441/*"treasurechest_btn"*/);
    sub_1C7BAE8(&StringLiteral_24447/*"treasurechest_img_bg_reward"*/);
    sub_1C7BAE8(&StringLiteral_5013/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/);
    sub_1C7BAE8(&StringLiteral_5008/*"DIGGING_EVENT_POINT_REWARD"*/);
    sub_1C7BAE8(&StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/);
    sub_1C7BAE8(&StringLiteral_5006/*"DIGGING_EVENT_POINT"*/);
    sub_1C7BAE8(&StringLiteral_11139/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/);
    byte_4CE8E07 = 1;
  }
  v11 = (Il2CppObject *)sub_1C7BD34(DiggingPointRewardDialogComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_31;
  v11[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v11[1], this);
  v11[1].monitor = diggingRewards;
  sub_1C7BA8C(&v11[1].monitor, diggingRewards);
  this->fields.state = 1;
  this->fields.eventRootMaskSetActiveAction = setMaskMethod;
  sub_1C7BA8C(&this->fields.eventRootMaskSetActiveAction, setMaskMethod);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  if ( !viewChangeButton )
    goto LABEL_31;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       viewChangeButton,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI((UISprite_o *)Component_object, (System_String_o *)StringLiteral_24441/*"treasurechest_btn"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButton;
  this->fields.isShowPossessionNum = 0;
  if ( !viewChangeButton )
    goto LABEL_31;
  UIButton__set_normalSprite((UIButton_o *)viewChangeButton, (System_String_o *)StringLiteral_24441/*"treasurechest_btn"*/, 0);
  viewChangeButtonLabelEffectColors = this->fields.viewChangeButtonLabelEffectColors;
  if ( !viewChangeButtonLabelEffectColors )
    goto LABEL_31;
  if ( !LODWORD(viewChangeButtonLabelEffectColors->max_length) )
    sub_1C7BD48(viewChangeButton);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.viewChangeButtonLabel;
  if ( !viewChangeButton )
    goto LABEL_31;
  UILabel__set_effectColor((UILabel_o *)viewChangeButton, viewChangeButtonLabelEffectColors->m_Items[0], 0);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1C7BA8C(&this->fields.resultItemObjList, v16);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)viewChangeButton,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRewardMaster___);
  viewChangeButton = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !viewChangeButton )
    goto LABEL_31;
  viewChangeButton = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)viewChangeButton,
                                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDiggingMaster___);
  if ( !viewChangeButton )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)viewChangeButton,
             eventId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDiggingMaster__EventDiggingEntity__int__GetEntity__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5006/*"DIGGING_EVENT_POINT"*/, 0);
  if ( !this->fields.viewChangeButton )
    goto LABEL_31;
  v19 = (Il2CppObject *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.viewChangeButton,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_31;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object_(
                                                  viewChangeButton,
                                                  1,
                                                  (const MethodInfo_3167048 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78814056);
  if ( !this->fields.closeButton )
    goto LABEL_31;
  v20 = (UILabel_o *)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)this->fields.closeButton,
                                                  0);
  if ( !viewChangeButton )
    goto LABEL_31;
  ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                 viewChangeButton,
                                 1,
                                 (const MethodInfo_3167048 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel____78814056);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5013/*"DIGGING_REWARD_DIALOG_VIEW_CHANGE"*/, 0);
  if ( !v20 )
    goto LABEL_31;
  UILabel__set_text(v20, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RESET_DIGGING_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !ComponentInChildren_object )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)ComponentInChildren_object, (System_String_o *)viewChangeButton, 0);
  titleLabel = this->fields.titleLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13579/*"TREASURE_BOX_EVENT_POINT_REWARD_GET_DIALOG_TITLE"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)System_String__Format(v23, v19, 0);
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, (System_String_o *)viewChangeButton, 0);
  titleNextItemLabel = this->fields.titleNextItemLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RESULEVENTTITEM_AT_ITEM"*/, 0);
  if ( !titleNextItemLabel )
    goto LABEL_31;
  UILabel__set_text(titleNextItemLabel, (System_String_o *)viewChangeButton, 0);
  titleAtLabel = this->fields.titleAtLabel;
  viewChangeButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5008/*"DIGGING_EVENT_POINT_REWARD"*/, 0);
  if ( !titleAtLabel )
    goto LABEL_31;
  UILabel__set_text(titleAtLabel, (System_String_o *)viewChangeButton, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.atNameLabel;
  if ( !viewChangeButton )
    goto LABEL_31;
  UILabel__set_text((UILabel_o *)viewChangeButton, (System_String_o *)v19, 0);
  viewChangeButton = (UnityEngine_Component_o *)this->fields.pointRewardRoot;
  if ( !viewChangeButton )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  AtlasManager__SetEventUI(this->fields.eventPointBg, (System_String_o *)StringLiteral_24447/*"treasurechest_img_bg_reward"*/, 0);
  AtlasManager__SetEventUI(this->fields.eventPointRewardBg, (System_String_o *)StringLiteral_24447/*"treasurechest_img_bg_reward"*/, 0);
  viewChangeButton = (UnityEngine_Component_o *)UserEventPointMaster__GetEventPointNoGroup(eventId, 0);
  if ( !MasterData_object )
    goto LABEL_31;
  v26 = (int64_t)viewChangeButton;
  viewChangeButton = (UnityEngine_Component_o *)EventRewardMaster__GetNextEventRewardEntity(
                                                  (EventRewardMaster_o *)MasterData_object,
                                                  eventId,
                                                  (int64_t)viewChangeButton,
                                                  0);
  if ( !Entity
    || (v27 = (EventRewardEntity_o *)viewChangeButton,
        AtlasManager__SetItem(this->fields.eventPointSprite, (int32_t)Entity[2].klass, 0),
        AtlasManager__SetItem(this->fields.titleIcon, (int32_t)Entity[2].klass, 0),
        DiggingPointRewardDialogComponent__SetNextItemLabel(this, v26, v27, v28),
        this->fields.closeCallbackFunc = closeCallback,
        sub_1C7BA8C(&this->fields.closeCallbackFunc, closeCallback),
        (viewChangeButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0)) == 0) )
  {
LABEL_31:
    sub_1C7BD40(viewChangeButton, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)viewChangeButton, 1, 0);
  v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v29, v11, Method_DiggingPointRewardDialogComponent___c__DisplayClass29_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, 0);
}


void DiggingPointRewardDialogComponent__SetNextItemLabel(
        DiggingPointRewardDialogComponent_o *this,
        int64_t userEventPoint,
        EventRewardEntity_o *eventRewardEnt,
        const MethodInfo *method)
{
  UILabel_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *nextItemNameLabel; // x0
  __int64 v11; // x1
  char v12; // w20
  UILabel_o *atLabel; // x20
  UILabel_o *nextItemLabel; // x20
  System_String_o *v15; // x1
  int64_t v16; // [xsp+0h] [xbp-50h] BYREF
  System_String_o *countText; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CE8E09 & 1) == 0 )
  {
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/);
    sub_1C7BAE8(&StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/);
    sub_1C7BAE8(&StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8E09 = 1;
  }
  nameText = 0;
  countText = 0;
  if ( !eventRewardEnt )
  {
    atLabel = this->fields.atLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2821/*"BATTLE_RESULEVENTTITEM_AT_POINT_NONE"*/, 0);
    if ( atLabel )
    {
      UILabel__set_text(atLabel, nextItemNameLabel, 0);
      nextItemLabel = this->fields.nextItemLabel;
      nextItemNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_2819/*"BATTLE_RESULEVENTTITEM_AT_ITEM_NONE"*/, 0);
      if ( nextItemLabel )
      {
        UILabel__set_text(nextItemLabel, nextItemNameLabel, 0);
        nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
        if ( nextItemNameLabel )
        {
LABEL_16:
          v15 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C7BD40(nextItemNameLabel, v11);
  }
  EventRewardEntity__GetInfo(eventRewardEnt, &nameText, &countText, 0);
  v7 = this->fields.atLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_RESULEVENTTITEM_NEXT_POINT"*/, 0);
  v16 = eventRewardEnt->fields.point - userEventPoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  nextItemNameLabel = System_String__Format(v8, v9, 0);
  if ( !v7 )
    goto LABEL_20;
  UILabel__set_text(v7, nextItemNameLabel, 0);
  nextItemNameLabel = (System_String_o *)EventRewardEntity__isQp(eventRewardEnt, 0);
  if ( !this->fields.nextItemLabel )
    goto LABEL_20;
  v12 = (char)nextItemNameLabel;
  UILabel__set_text(this->fields.nextItemLabel, countText, 0);
  nextItemNameLabel = (System_String_o *)this->fields.nextItemNameLabel;
  if ( (v12 & 1) != 0 )
  {
    if ( !nextItemNameLabel )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( !nextItemNameLabel )
    goto LABEL_20;
  v15 = nameText;
LABEL_19:
  UILabel__set_text((UILabel_o *)nextItemNameLabel, v15, 0);
}


void DiggingPointRewardDialogComponent__SetPossession(
        DiggingPointRewardDialogComponent_o *this,
        ItemIconComponent_o *item,
        int32_t objectId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CE8E0D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8E0D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  entity = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                objectId,
                                0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity || !item )
LABEL_16:
    sub_1C7BD40(Instance, v7);
  ItemIconComponent__SetPossession(item, entity->fields.num, 0);
}


void DiggingPointRewardDialogComponent__SetResultData(
        DiggingPointRewardDialogComponent_o *this,
        BattleDropItem_array *rewards,
        const MethodInfo *method)
{
  DiggingPointRewardDialogComponent_o *v4; // x20
  int max_length; // w8
  __int64 v6; // x26
  BattleDropItem_o *v7; // x8
  int32_t objectId; // w23
  int32_t type; // w24
  __int64 v10; // x10
  int v11; // w29
  Il2CppObject *prefabResultItem; // x22
  DiggingPointRewardDialogComponent_o *v13; // x22
  DiggingPointRewardDialogComponent_o *v14; // x25
  int v15; // w8
  ItemIconComponent_o *v16; // x25
  DiggingPointRewardDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v22; // x8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CE8E08 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (DiggingPointRewardDialogComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8E08 = 1;
  }
  if ( rewards )
  {
    max_length = rewards->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( (unsigned int)v6 >= max_length )
          sub_1C7BD48(this);
        v7 = rewards->m_Items[v6];
        if ( !v7 )
          goto LABEL_31;
        type = v7->fields.type;
        objectId = v7->fields.objectId;
        v10 = 44;
        if ( v7->fields.originalNum > 0 )
          v10 = 52;
        v11 = *(_DWORD *)((char *)&v7->klass + v10);
        prefabResultItem = (Il2CppObject *)v4->fields.prefabResultItem;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Object__Instantiate_object_(
                                                        prefabResultItem,
                                                        (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !this )
          goto LABEL_31;
        v13 = this;
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)this,
                                                        0);
        if ( !this )
          goto LABEL_31;
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.listRoot, 0);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        0);
        v14 = this;
        if ( !byte_4CE7E59 )
        {
          this = (DiggingPointRewardDialogComponent_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E59 = 1;
        }
        if ( !v14 )
          goto LABEL_31;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v14,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        0);
        if ( !this )
          goto LABEL_31;
        v23.fields.x = v4->fields.iconScale;
        v23.fields.y = v23.fields.x;
        v23.fields.z = v23.fields.x;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v23, 0);
        this = (DiggingPointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                        (UnityEngine_GameObject_o *)v13,
                                                        (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconComponent___);
        if ( !this )
          goto LABEL_31;
        v15 = v11 <= 1 ? -1 : v11;
        v16 = (ItemIconComponent_o *)this;
        ItemIconComponent__SetGift_41487788((ItemIconComponent_o *)this, type, objectId, v15, 0, 0);
        DiggingPointRewardDialogComponent__SetPossession(v17, v16, objectId, v18);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0);
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.resultItemObjList;
        if ( !this )
          goto LABEL_31;
        m_CachedPtr = this->fields.m_CachedPtr;
        v20 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_31;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v13;
          sub_1C7BA8C(v22 + 32, v13);
        }
        this = (DiggingPointRewardDialogComponent_o *)v4->fields.listRoot;
        if ( !this
          || (this = (DiggingPointRewardDialogComponent_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIGrid___)) == 0 )
        {
LABEL_31:
          sub_1C7BD40(this, rewards);
        }
        this = (DiggingPointRewardDialogComponent_o *)((__int64 (__fastcall *)(DiggingPointRewardDialogComponent_o *, const char *))this->klass[1]._1.name)(
                                                        this,
                                                        this->klass[1]._1.namespaze);
        max_length = rewards->max_length;
        ++v6;
      }
      while ( (int)v6 < max_length );
    }
  }
}


UnityEngine_GameObject_o *DiggingPointRewardDialogComponent__get_closeBtnObject(
        DiggingPointRewardDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CE8E0E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8E0E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void DiggingPointRewardDialogComponent___c__DisplayClass29_0___ctor(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingPointRewardDialogComponent___c__DisplayClass29_0___Open_b__0(
        DiggingPointRewardDialogComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DiggingPointRewardDialogComponent_o *_4__this; // x0
  struct DiggingPointRewardDialogComponent_o *v5; // x8

  if ( (byte_4CE8E10 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ActionExtensions_Call_bool___);
    byte_4CE8E10 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (DiggingPointRewardDialogComponent__SetResultData(_4__this, this->fields.diggingRewards, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C7BD40(_4__this, method);
  }
  v5->fields.state = 2;
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)v5->fields.eventRootMaskSetActiveAction,
    0,
    (const MethodInfo_30B92A0 *)Method_ActionExtensions_Call_bool___);
}