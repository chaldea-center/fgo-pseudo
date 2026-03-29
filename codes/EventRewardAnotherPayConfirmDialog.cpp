void EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v2; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v3; // x10
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v9; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v10; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v11; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v12; // x8

  if ( (byte_4D2B103 & 1) == 0 )
  {
    sub_1C93AD4(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4D2B103 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CancelButtonReconfirmPos.fields.x = 0xC3600000C3200000LL;
  static_fields->CancelButtonReconfirmPos.fields.z = 0.0;
  v2 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  v3 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(int32x2_t *)&v3->CancelButtonChoicePos.fields.x = vdup_n_s32(0xC3600000);
  v3->CancelButtonChoicePos.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->CancelButtonChoiceMultiPos.fields.x = 0xC35A000000000000LL;
  v4->CancelButtonChoiceMultiPos.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->CancelButtonPurchasedPos.fields.x = 0xC3700000C3200000LL;
  v5->CancelButtonPurchasedPos.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->CancelButtonResultPos.fields.x = 0xC31B000000000000LL;
  v6->CancelButtonResultPos.fields.z = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->CancelButtonChoiceMultiSkillsItemPos.fields.x = 0xC327000000000000LL;
  v7->CancelButtonChoiceMultiSkillsItemPos.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->CancelButtonSelectSkillPos.fields.x = 0xC35A0000C3200000LL;
  v8->CancelButtonSelectSkillPos.fields.z = 0.0;
  v9 = v2->static_fields;
  *(_QWORD *)&v9->DecideButtonReconfirmPos.fields.x = 0xC360000043200000LL;
  v9->DecideButtonReconfirmPos.fields.z = 0.0;
  v10 = v2->static_fields;
  *(_QWORD *)&v10->DecideButtonPurchasedPos.fields.x = -4363988037795840000LL;
  v10->DecideButtonPurchasedPos.fields.z = 0.0;
  v11 = v2->static_fields;
  *(_QWORD *)&v11->DecideButtonSelectSkillPos.fields.x = 0xC35A000043200000LL;
  v11->DecideButtonSelectSkillPos.fields.z = 0.0;
  v2->static_fields->ConfirmWindowSize = (struct UnityEngine_Vector2_o)0x4416000044430000LL;
  v2->static_fields->ResultWindowSize = (struct UnityEngine_Vector2_o)0x43F0000044430000LL;
  v2->static_fields->ChoiceMultiWindowSize = (struct UnityEngine_Vector2_o)0x440E800044548000LL;
  v2->static_fields->SelectSkillWindowSize = (struct UnityEngine_Vector2_o)0x440C000044548000LL;
  v2->static_fields->ChoiceMultiSkillsItemWindowSize = (struct UnityEngine_Vector2_o)0x43FA000044560000LL;
  v2->static_fields->CancelButtonChoiceMultiSize = (struct UnityEngine_Vector2_o)0x42600000435A0000LL;
  v2->static_fields->CancelButtonCommonSize = (struct UnityEngine_Vector2_o)0x425C000043580000LL;
  v12 = v2->static_fields;
  *(_OWORD *)&v12->MultiSkillsItemViewBgWidthOnlyAnotherItem = xmmword_D01E50;
  *(_OWORD *)&v12->MultiSkillsItemViewBgPosYtWithOnlyAnotherItem = xmmword_D02010;
}


void EventRewardAnotherPayConfirmDialog___ctor(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B102 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B102 = 1;
  }
  this->fields.isDecideButtonEnable = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardAnotherPayConfirmDialog__Close(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2B0FB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_Init__);
    byte_4D2B0FB = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


System_String_o *EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *ServantLimitCountSealAfter; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  int64_t userIdNumber; // x21
  Il2CppObject *v10; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  ServantLimitImageMaster_o *v13; // x20
  int32_t v14; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4D2B100 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B100 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  }
  if ( !svtEntity )
    goto LABEL_28;
  v8 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = ServantLimitCountSealAfter->static_fields->userIdNumber;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                     v17,
                                                     0);
  if ( !Master_object )
    goto LABEL_28;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)Master_object,
          &entity,
          userIdNumber,
          (int32_t)ServantLimitCountSealAfter,
          0) )
  {
    v14 = -1;
    return ServantEntity__getName(svtEntity, v14, -1, 1, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v12 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v13 = (ServantLimitImageMaster_o *)v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                     v18,
                                                     0);
  if ( !entity
    || !v13
    || (ServantLimitCountSealAfter = (NetworkManager_c *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                           v13,
                                                           (int32_t)ServantLimitCountSealAfter,
                                                           entity->fields.maxLimitCount,
                                                           0),
        !entity) )
  {
LABEL_28:
    sub_1C93D2C(ServantLimitCountSealAfter, v4);
  }
  if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v14 = -1;
  else
    v14 = (int)ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v14, -1, 1, 0);
}


void EventRewardAnotherPayConfirmDialog__Init(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0) )
  {
    sub_1C93D2C(itemIcon, method);
  }
  SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0);
  this->fields.onClickButton = 0;
  sub_1C93A78(&this->fields.onClickButton, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventRewardAnotherPayConfirmDialog__OnClickAnotherBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4D2B0FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    byte_4D2B0FF = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C93D2C(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      3,
      (unsigned int)this->fields.buyAnotherItemId,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickCancel(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *decideButton; // x0
  int32_t v4; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4D2B0FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    byte_4D2B0FC = 1;
  }
  if ( this->fields.state == 1 )
  {
    decideButton = this->fields.decideButton;
    *(_QWORD *)&this->fields.buyAnotherItemId = 0;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0) )
      goto LABEL_10;
    decideButton = this->fields.normalBuyButton;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0) )
      goto LABEL_10;
    decideButton = this->fields.anotherBuyButton;
    if ( !decideButton )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeSelf(decideButton, 0) )
LABEL_10:
      v4 = 1;
    else
      v4 = 0;
    v5 = Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, v4, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        0,
        0,
        onClickButton->fields.method);
      return;
    }
LABEL_17:
    sub_1C93D2C(decideButton, method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _BOOL4 isDecideButtonEnable; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4D2B0FD & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    byte_4D2B0FD = 1;
  }
  if ( this->fields.state == 1 )
  {
    isDecideButtonEnable = this->fields.isDecideButtonEnable;
    v4 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    if ( isDecideButtonEnable )
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
      onClickButton = this->fields.onClickButton;
      if ( this->fields.selectedSkillId < 1 )
      {
        if ( !onClickButton )
          goto LABEL_14;
      }
      else if ( !onClickButton )
      {
LABEL_14:
        sub_1C93D2C(v6, v7);
      }
      ((void (__fastcall *)(intptr_t, __int64))onClickButton->fields.invoke_impl)(onClickButton->fields.method_code, 1);
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
    }
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickListViewItemAction(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isAnotherPay,
        int32_t anotherItemId,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8
  __int64 v12; // x1

  if ( (byte_4D2B0F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___79113744);
    byte_4D2B0F8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.buyAnotherItemId = anotherItemId;
    this->fields.state = 2;
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___79113744;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___79113744 + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___79113744);
    v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C93D2C(v9, v10);
    if ( isAnotherPay )
      v12 = 3;
    else
      v12 = 2;
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      v12,
      (unsigned int)anotherItemId,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickListViewItemAction_32923864(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2B0F9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4D2B0F9 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.selectedSkillId = skillId;
    v5 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    EventRewardAnotherPayConfirmDialog__SetDecideButtonEnable(this, this->fields.selectedSkillId > 0, v7);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickNormalBuy(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8

  if ( (byte_4D2B0FE & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    byte_4D2B0FE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_1C93D2C(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      2,
      0,
      onClickButton->fields.method);
  }
}


void EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *buttonAction,
        bool isReconfirm,
        int32_t selectedAnotherItemId,
        const MethodInfo *method)
{
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  ItemEntity_o *v16; // x22
  System_Int32_array *SkillList; // x23
  ServantEntity_o *RelateServantEntity; // x24
  _BOOL4 v19; // w23
  _BOOL4 v20; // w25
  char v21; // w27
  int v22; // w26
  int32_t v23; // w8
  const MethodInfo *v24; // x5
  int32_t eventId; // w26
  __int64 v26; // x28
  __int64 v27; // x29
  int32_t v28; // w0
  const MethodInfo *v29; // x4
  System_String_o *name; // x28
  System_String_o *AnotherPayName; // x29
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x5
  System_Action_o *v36; // x20
  const MethodInfo *v37; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4D2B0EF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog__Open_b__106_0__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B0EF = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  this->fields.onClickButton = buttonAction;
  sub_1C93A78(&this->fields.onClickButton, buttonAction);
  if ( !isReconfirm )
    this->fields.selectedSkillId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !shopEntity )
    goto LABEL_43;
  v14 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetAnotherPayItemIds(shopEntity, 0);
  v15 = Master_object;
  if ( selectedAnotherItemId <= 0 )
  {
    if ( !Master_object )
      goto LABEL_43;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      sub_1C93D34(Master_object);
    selectedAnotherItemId = Master_object->fields.revision;
  }
  if ( !v14
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v14,
                                                                        selectedAnotherItemId,
                                                                        (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
LABEL_43:
    sub_1C93D2C(Master_object, v13);
  }
  v16 = (ItemEntity_o *)Master_object;
  SkillList = ItemEntity__GetSkillList((ItemEntity_o *)Master_object, 0);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(shopEntity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)SkillList,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v19 = 0;
  }
  else
  {
    if ( !SkillList )
      goto LABEL_43;
    v19 = SLODWORD(SkillList->max_length) > 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)v15,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v20 = 0;
  }
  else
  {
    if ( !v15 )
      goto LABEL_43;
    v20 = SLODWORD(v15->fields._MasterName_k__BackingField) > 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__IsSoldOut(shopEntity, 0);
  this->fields.buyAnotherItemId = v16->fields.id;
  if ( !RelateServantEntity )
  {
    if ( *p_onClickButton )
    {
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))(*p_onClickButton)->fields.invoke_impl)(
        (*p_onClickButton)->fields.method_code,
        2,
        0,
        (*p_onClickButton)->fields.method);
      return;
    }
    goto LABEL_43;
  }
  v21 = (char)Master_object;
  if ( isReconfirm )
  {
    v22 = 0;
    v23 = 6;
LABEL_32:
    this->fields.state = v23;
    goto LABEL_33;
  }
  if ( !v19 && !v20 )
  {
    v22 = 0;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      v23 = 4;
    else
      v23 = 3;
    goto LABEL_32;
  }
  this->fields.state = 5;
  v22 = 1;
LABEL_33:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_43;
  if ( !v22 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
    if ( Master_object )
    {
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v16->fields.id, -1, 1, 0);
      eventId = shopEntity->fields.eventId;
      v27 = *(_QWORD *)&RelateServantEntity->fields.id.fields.currentCryptoKey;
      v26 = *(_QWORD *)&RelateServantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v38.fields.currentCryptoKey = v27;
      *(_QWORD *)&v38.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v38, 0);
      EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v28, v16, v29);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skill;
  if ( !Master_object )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
LABEL_42:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, v20, v21 & 1, v19, v24);
  name = v16->fields.name;
  AnotherPayName = ItemEntity__GetAnotherPayName(v16, 0);
  v32 = ShopEntity__getName(shopEntity, 0);
  EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
    this,
    RelateServantEntity,
    name,
    AnotherPayName,
    v32,
    v20,
    v21 & 1,
    v19,
    shopEntity->fields.eventId,
    v37);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v19 & v21, v33);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v16, v19 & v21, v34);
  EventRewardAnotherPayConfirmDialog__SetListView(this, shopEntity, (System_Int32_array *)v15, v21 & 1, v19, v35);
  v36 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__Open_b__106_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        bool isAnotherItemOnly,
        int32_t usedAnotherItemId,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onDecide,
        const MethodInfo *method)
{
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o **p_onClickButton; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  ItemEntity_o *v14; // x21
  ServantEntity_o *v15; // x23
  int32_t eventId; // w24
  struct System_String_o *MasterName_k__BackingField; // x25
  __int64 v18; // x26
  int32_t v19; // w0
  const MethodInfo *v20; // x4
  UILabel_o *titleLabel; // x24
  UILabel_o *upperLabel; // x26
  UILabel_o *downerLabel; // x27
  System_String_o *Empty; // x25
  EventRewardAnotherPayConfirmDialog_o *v25; // x0
  const MethodInfo *v26; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  UILabel_o *resultLabel; // x23
  Il2CppObject *v30; // x25
  __int64 *v31; // x8
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x5
  bool v35; // w1
  UILabel_o *v36; // x20
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_Action_o *v39; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4D2B0F1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__108_0__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_1975/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_1C93AD4(&StringLiteral_1974/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_1C93AD4(&StringLiteral_1976/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_4D2B0F1 = 1;
  }
  p_onClickButton = &this->fields.onClickButton;
  entity = 0;
  this->fields.onClickButton = onDecide;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C93A78(&this->fields.onClickButton, onDecide);
  if ( !shopEntity )
  {
    if ( *p_onClickButton )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))(*p_onClickButton)->fields.invoke_impl)(
        (*p_onClickButton)->fields.method_code,
        0,
        0,
        (*p_onClickButton)->fields.method);
      return;
    }
    goto LABEL_37;
  }
  this->fields.state = 7;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_37;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  usedAnotherItemId,
                                                                  (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this->fields.itemIcon )
    goto LABEL_37;
  v14 = (ItemEntity_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this->fields.itemIcon,
                                                                  0);
  if ( !Master_object )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0);
  if ( !Master_object )
    goto LABEL_37;
  v15 = (ServantEntity_o *)Master_object;
  eventId = shopEntity->fields.eventId;
  v18 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v18;
  *(_QWORD *)&v41.fields.fakeValue = MasterName_k__BackingField;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v41, 0);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v19, v14, v20);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.warnLabel;
  this->fields.selectedSkillId = 0;
  if ( !Master_object )
    goto LABEL_37;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_text((UILabel_o *)Master_object, Empty, 0);
  if ( !downerLabel )
    goto LABEL_37;
  UILabel__set_text(downerLabel, Empty, 0);
  if ( !upperLabel )
    goto LABEL_37;
  UILabel__set_text(upperLabel, Empty, 0);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, Empty, 0);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v25, v15, v26);
  ClassName = ServantEntity__getClassName(v15, 0);
  resultLabel = this->fields.resultLabel;
  v30 = (Il2CppObject *)ClassName;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isAnotherItemOnly )
      goto LABEL_18;
LABEL_22:
    v31 = &StringLiteral_1976/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
    goto LABEL_23;
  }
  if ( !isAnotherItemOnly )
    goto LABEL_22;
LABEL_18:
  v31 = &StringLiteral_1975/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
LABEL_23:
  v32 = LocalizationManager__Get((System_String_o *)*v31, 0);
  v33 = (Il2CppObject *)ShopEntity__getName(shopEntity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_64467100(v32, v33, v30, Name, 0);
  if ( !resultLabel )
    goto LABEL_37;
  UILabel__set_text(resultLabel, (System_String_o *)Master_object, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_37;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         shopEntity->fields.eventId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0) )
        goto LABEL_30;
      v36 = this->fields.downerLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_1974/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                                      0);
      if ( v36 )
      {
        UILabel__set_text(v36, (System_String_o *)Master_object, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel;
        if ( Master_object )
        {
          UILabel__set_fontSize((UILabel_o *)Master_object, 22, 0);
          v35 = 0;
          goto LABEL_36;
        }
      }
    }
LABEL_37:
    sub_1C93D2C(Master_object, v13);
  }
LABEL_30:
  v35 = 1;
LABEL_36:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, v35, 0, 0, 0, v34);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, 0, v37);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v14, 0, v38);
  v39 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__108_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__OpenSelectSkill(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onDecide,
        int32_t selectedAnotherItemId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x22
  UILabel_o *titleLabel; // x23
  System_String_o *v13; // x24
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *upperLabel; // x23
  System_String_o *v16; // x24
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20

  if ( (byte_4D2B0F0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog__OpenSelectSkill_b__107_0__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_1978/*"ANOTHER_PAY_SELECT_SKILL_INFO"*/);
    sub_1C93AD4(&StringLiteral_1979/*"ANOTHER_PAY_SELECT_SKILL_TITLE"*/);
    byte_4D2B0F0 = 1;
  }
  this->fields.onClickButton = onDecide;
  sub_1C93A78(&this->fields.onClickButton, onDecide);
  this->fields.selectedSkillId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             selectedAnotherItemId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  this->fields.state = 8;
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skill;
  if ( !Master_object )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_1979/*"ANOTHER_PAY_SELECT_SKILL_TITLE"*/,
                                                                  0);
  if ( !Entity )
    goto LABEL_19;
  v13 = (System_String_o *)Master_object;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)Entity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v13, AnotherPayName, 0);
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.titleLabel;
  if ( !Master_object )
    goto LABEL_19;
  UILabel__set_fontSize((UILabel_o *)Master_object, 26, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.upperLabel;
  if ( !Master_object )
    goto LABEL_19;
  UILabel__set_fontSize((UILabel_o *)Master_object, 18, 0);
  upperLabel = this->fields.upperLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1978/*"ANOTHER_PAY_SELECT_SKILL_INFO"*/, 0);
  v17 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)Entity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v16, v17, 0);
  if ( !upperLabel
    || (UILabel__set_text(upperLabel, (System_String_o *)Master_object, 0),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Master_object, string_TypeInfo->static_fields->Empty, 0),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.warnLabel) == 0) )
  {
LABEL_19:
    sub_1C93D2C(Master_object, v10);
  }
  UILabel__set_text((UILabel_o *)Master_object, string_TypeInfo->static_fields->Empty, 0);
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, 0, 0, 0, v18);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, 0, v19);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, (ItemEntity_o *)Entity, 0, v20);
  EventRewardAnotherPayConfirmDialog__SetListView_32920116(this, shopEntity, selectedAnotherItemId, v21);
  v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_EventRewardAnotherPayConfirmDialog__OpenSelectSkill_b__107_0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        ItemEntity_o *itemEntity,
        bool isOnlyMultiSkillsItem,
        const MethodInfo *method)
{
  UILabel_o *cancelLabel; // x22
  __int64 *v8; // x8
  System_String_o *v9; // x23
  System_String_o *decideButton; // x0
  __int64 v11; // x1
  UILabel_o *decideLabel; // x22
  System_String_o **v13; // x8
  System_String_o *v14; // x23
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v17; // x23
  Il2CppObject *v18; // x1
  UIWidget_o *cancelButtonSp; // x21
  int32_t state; // w22
  __int64 v21; // x8
  float v22; // s0
  int32_t v23; // w1
  UIWidget_o *v24; // x21
  int32_t v25; // w22
  __int64 v26; // x8
  float v27; // s0
  int32_t v28; // w1
  EventRewardAnotherPayConfirmDialog_c *v29; // x0
  UnityEngine_GameObject_o *v30; // x20
  int32_t v31; // w21
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v32; // x8
  __int64 v33; // x9
  __int64 v34; // x10
  __int64 v35; // x11
  EventRewardAnotherPayConfirmDialog_c *v36; // x0
  struct UnityEngine_GameObject_o *v37; // x20
  int32_t v38; // w19
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v39; // x8
  __int64 v40; // x9
  __int64 v41; // x10
  float *p_x; // x10
  UnityEngine_GameObject_o *v45; // x0
  struct UnityEngine_GameObject_o *v46; // x21
  EventRewardAnotherPayConfirmDialog_c *v47; // x0
  EventRewardAnotherPayConfirmDialog_c *v48; // x0
  struct UnityEngine_GameObject_o *cancelButton; // x19
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x8
  EventRewardAnotherPayConfirmDialog_c *v51; // x0
  UnityEngine_GameObject_o *v52; // x20
  const MethodInfo *v53; // x2
  EventRewardAnotherPayConfirmDialog_c *v54; // x0
  int32_t v55; // w19
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v56; // x8
  __int64 v57; // x9
  __int64 v58; // x11
  __int64 v59; // x10
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o CancelButtonChoicePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B0F5 & 1) == 0 )
  {
    sub_1C93AD4(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9387/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_1950/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_1977/*"ANOTHER_PAY_SELECT_SKILL_DECIDE_BTN"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_1973/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_4D2B0F5 = 1;
  }
  cancelLabel = this->fields.cancelLabel;
  if ( this->fields.state == 7 )
    v8 = &StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/;
  else
    v8 = &StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/;
  v9 = (System_String_o *)*v8;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get(v9, 0);
  if ( !cancelLabel )
    goto LABEL_85;
  UILabel__set_text(cancelLabel, decideButton, 0);
  decideLabel = this->fields.decideLabel;
  if ( this->fields.state == 8 )
    v13 = (System_String_o **)&StringLiteral_1977/*"ANOTHER_PAY_SELECT_SKILL_DECIDE_BTN"*/;
  else
    v13 = (System_String_o **)&StringLiteral_9387/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/;
  v14 = *v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__Get(v14, 0);
  if ( !decideLabel )
    goto LABEL_85;
  UILabel__set_text(decideLabel, decideButton, 0);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_1973/*"ANOTHER_PAY_NORMAL_BUY"*/, 0);
  if ( !normalBuyLabel )
    goto LABEL_85;
  UILabel__set_text(normalBuyLabel, decideButton, 0);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1950/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0);
  v18 = itemEntity ? (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0) : 0LL;
  decideButton = System_String__Format(v17, v18, 0);
  if ( !anotherBuyLabel )
    goto LABEL_85;
  UILabel__set_text(anotherBuyLabel, decideButton, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  cancelButtonSp = (UIWidget_o *)this->fields.cancelButtonSp;
  state = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v21 = 168;
  if ( state == 5 )
    v21 = 160;
  if ( !cancelButtonSp )
    goto LABEL_85;
  v22 = *(float *)(*(_QWORD *)&decideButton[7].fields + v21);
  if ( v22 == INFINITY )
    v23 = 0x80000000;
  else
    v23 = (int)v22;
  UIWidget__set_width(cancelButtonSp, v23, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  v24 = (UIWidget_o *)this->fields.cancelButtonSp;
  v25 = this->fields.state;
  if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  }
  v26 = 172;
  if ( v25 == 5 )
    v26 = 164;
  if ( !v24 )
LABEL_85:
    sub_1C93D2C(decideButton, v11);
  v27 = *(float *)(*(_QWORD *)&decideButton[7].fields + v26);
  if ( v27 == INFINITY )
    v28 = 0x80000000;
  else
    v28 = (int)v27;
  UIWidget__set_height(v24, v28, 0);
  switch ( this->fields.state )
  {
    case 3:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v48 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      static_fields = v48->static_fields;
      v45 = cancelButton;
      CancelButtonChoicePos = static_fields->CancelButtonChoicePos;
      goto LABEL_84;
    case 4:
    case 6:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v30 = this->fields.decideButton;
      v31 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v32 = v29->static_fields;
      v33 = 92;
      if ( v31 == 4 )
      {
        v33 = 104;
        v34 = 100;
      }
      else
      {
        v34 = 88;
      }
      if ( v31 == 4 )
        v35 = 96;
      else
        v35 = 84;
      v60.fields.x = *(float *)((char *)&v32->CancelButtonReconfirmPos.fields.x + v35);
      v60.fields.y = *(float *)((char *)&v32->CancelButtonReconfirmPos.fields.x + v34);
      v60.fields.z = *(float *)((char *)&v32->CancelButtonReconfirmPos.fields.x + v33);
      GameObjectExtensions__SetLocalPosition(v30, v60, 0);
      v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v37 = this->fields.cancelButton;
      v38 = this->fields.state;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v36 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v39 = v36->static_fields;
      v40 = 8;
      if ( v38 == 4 )
      {
        v40 = 44;
        v41 = 40;
      }
      else
      {
        v41 = 4;
      }
      CancelButtonChoicePos.fields.y = *(float *)((char *)&v39->CancelButtonReconfirmPos.fields.x + v41);
      if ( v38 == 4 )
        p_x = &v39->CancelButtonPurchasedPos.fields.x;
      else
        p_x = &v36->static_fields->CancelButtonReconfirmPos.fields.x;
      CancelButtonChoicePos.fields.x = *p_x;
      CancelButtonChoicePos.fields.z = *(float *)((char *)&v39->CancelButtonReconfirmPos.fields.x + v40);
      v45 = v37;
      goto LABEL_84;
    case 5:
    case 7:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      v46 = this->fields.cancelButton;
      if ( isOnlyMultiSkillsItem )
      {
        v47 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v47 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        CancelButtonChoicePos = v47->static_fields->CancelButtonChoiceMultiSkillsItemPos;
      }
      else
      {
        v54 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        v55 = this->fields.state;
        if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v54 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        v56 = v54->static_fields;
        v57 = 32;
        v58 = 28;
        if ( v55 == 7 )
          v57 = 56;
        v59 = 24;
        if ( v55 == 7 )
        {
          v58 = 52;
          v59 = 48;
        }
        CancelButtonChoicePos.fields.x = *(float *)((char *)&v56->CancelButtonReconfirmPos.fields.x + v59);
        CancelButtonChoicePos.fields.y = *(float *)((char *)&v56->CancelButtonReconfirmPos.fields.x + v58);
        CancelButtonChoicePos.fields.z = *(float *)((char *)&v56->CancelButtonReconfirmPos.fields.x + v57);
      }
      v45 = v46;
LABEL_84:
      GameObjectExtensions__SetLocalPosition(v45, CancelButtonChoicePos, 0);
      break;
    case 8:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      v51 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v52 = this->fields.decideButton;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v51 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(v52, v51->static_fields->DecideButtonSelectSkillPos, 0);
      GameObjectExtensions__SetLocalPosition(
        this->fields.cancelButton,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->CancelButtonSelectSkillPos,
        0);
      EventRewardAnotherPayConfirmDialog__SetDecideButtonEnable(this, 0, v53);
      break;
    default:
      return;
  }
}


void EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        System_String_o *itemName,
        System_String_o *anotherName,
        System_String_o *shopName,
        bool isMultiAnotherPayItem,
        bool isOnlyAnotherItem,
        bool isMultSkillsItem,
        int32_t eventId,
        const MethodInfo *method)
{
  ServantEntity_o *v15; // x24
  UILabel_o *resultLabel; // x0
  EventRewardAnotherPayConfirmDialog_o *v18; // x0
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x24
  int32_t v22; // w1
  UILabel_o *titleLabel; // x28
  int32_t v24; // w1
  int32_t v25; // w21
  UILabel_o *v26; // x21
  __int64 v27; // x22
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  Il2CppObject *v31; // x2
  Il2CppObject *v32; // x24
  UILabel_o *v33; // x27
  System_String_o *v34; // x0
  UILabel_o *upperLabel; // x21
  System_String_o *v36; // x0
  UILabel_o *downerLabel; // x21
  System_String_o *v38; // x0
  UILabel_o *warnLabel; // x20
  System_String_o *v40; // x0
  __int64 v41; // x28
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  System_String_o *IfExists; // x0
  UILabel_o *v45; // x27
  __int64 v46; // x28
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x0
  int32_t state; // w27
  __int64 v51; // x0
  bool v52; // zf
  __int64 v53; // x27
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  System_String_o *v56; // x0
  ServantEntity_o *v57; // x0
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x0
  UILabel_o *v62; // x21
  __int64 v63; // x22
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x0
  System_String_o *Empty; // x1
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  System_String_o *v70; // x27
  System_Object_array *v71; // x28
  System_String_o *v72; // x0
  __int64 v73; // x21
  Il2CppObject *v74; // x0
  __int64 v75; // x1
  struct UILabel_o *v76; // x20
  __int64 v77; // x0
  int32_t v79; // [xsp+18h] [xbp-68h] BYREF
  int32_t v80; // [xsp+1Ch] [xbp-64h] BYREF

  v15 = svtEntity;
  if ( (byte_4D2B0F3 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_1969/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG{0}"*/);
    sub_1C93AD4(&StringLiteral_1962/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO{0}"*/);
    sub_1C93AD4(&StringLiteral_1970/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_1C93AD4(&StringLiteral_1960/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_1C93AD4(&StringLiteral_1951/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1954/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_1C93AD4(&StringLiteral_1959/*"ANOTHER_PAY_ITEM_CONFIRM_MSG{0}"*/);
    sub_1C93AD4(&StringLiteral_1963/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/);
    sub_1C93AD4(&StringLiteral_1966/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG{0}"*/);
    sub_1C93AD4(&StringLiteral_1972/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1952/*"ANOTHER_PAY_CONFIRM_TITLE{0}"*/);
    sub_1C93AD4(&StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_INFO{0}"*/);
    sub_1C93AD4(&StringLiteral_1961/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/);
    sub_1C93AD4(&StringLiteral_1964/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO{0}"*/);
    sub_1C93AD4(&StringLiteral_1968/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/);
    sub_1C93AD4(&StringLiteral_1971/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO{0}"*/);
    sub_1C93AD4(&StringLiteral_1958/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_1C93AD4(&StringLiteral_1955/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_1C93AD4(&StringLiteral_1953/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    sub_1C93AD4(&StringLiteral_1965/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/);
    byte_4D2B0F3 = 1;
  }
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_107;
  UILabel__set_text(resultLabel, string_TypeInfo->static_fields->Empty, 0);
  resultLabel = (UILabel_o *)EventRewardAnotherPayConfirmDialog__GetName(v18, v15, v19);
  if ( !v15 )
    goto LABEL_107;
  v20 = (Il2CppObject *)resultLabel;
  resultLabel = (UILabel_o *)ServantEntity__getClassName(v15, 0);
  if ( !this->fields.warnLabel )
    goto LABEL_107;
  v21 = (Il2CppObject *)resultLabel;
  if ( this->fields.state == 5 )
    v22 = 18;
  else
    v22 = 20;
  UILabel__set_fontSize(this->fields.warnLabel, v22, 0);
  titleLabel = this->fields.titleLabel;
  if ( this->fields.state != 5 )
  {
    if ( !titleLabel )
      goto LABEL_107;
    UILabel__set_fontSize(this->fields.titleLabel, 24, 0);
    resultLabel = this->fields.downerLabel;
    if ( !resultLabel )
      goto LABEL_107;
    UILabel__set_fontSize(resultLabel, 20, 0);
    resultLabel = this->fields.upperLabel;
    if ( !resultLabel )
      goto LABEL_107;
    UILabel__set_fontSize(resultLabel, 20, 0);
    v33 = this->fields.titleLabel;
    if ( this->fields.state == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_1953/*"ANOTHER_PAY_INFO_TITLE"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v34, (Il2CppObject *)anotherName, 0);
      if ( v33 )
      {
        UILabel__set_text(v33, (System_String_o *)resultLabel, 0);
        upperLabel = this->fields.upperLabel;
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_1954/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0);
        resultLabel = (UILabel_o *)System_String__Format(v36, (Il2CppObject *)anotherName, 0);
        if ( upperLabel )
        {
          UILabel__set_text(upperLabel, (System_String_o *)resultLabel, 0);
          downerLabel = this->fields.downerLabel;
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_1955/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0);
          resultLabel = (UILabel_o *)System_String__Format(v38, (Il2CppObject *)anotherName, 0);
          if ( downerLabel )
          {
            UILabel__set_text(downerLabel, (System_String_o *)resultLabel, 0);
            warnLabel = this->fields.warnLabel;
            v40 = LocalizationManager__Get((System_String_o *)StringLiteral_1960/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0);
            resultLabel = (UILabel_o *)System_String__Format(v40, (Il2CppObject *)anotherName, 0);
            if ( warnLabel )
            {
              UILabel__set_text(warnLabel, (System_String_o *)resultLabel, 0);
              return;
            }
          }
        }
      }
      goto LABEL_107;
    }
    v41 = sub_1C93B7C(string___TypeInfo, 2);
    v80 = eventId;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1952/*"ANOTHER_PAY_CONFIRM_TITLE{0}"*/, v42, 0);
    if ( !v41 )
      goto LABEL_107;
    if ( !*(_DWORD *)(v41 + 24) )
      goto LABEL_108;
    *(_QWORD *)(v41 + 32) = resultLabel;
    resultLabel = (UILabel_o *)sub_1C93A78(v41 + 32, resultLabel);
    if ( *(_DWORD *)(v41 + 24) <= 1u )
      goto LABEL_108;
    v43 = StringLiteral_1951/*"ANOTHER_PAY_CONFIRM_TITLE"*/;
    *(_QWORD *)(v41 + 40) = StringLiteral_1951/*"ANOTHER_PAY_CONFIRM_TITLE"*/;
    sub_1C93A78(v41 + 40, v43);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IfExists = LocalizationManager__GetIfExists((System_String_array *)v41, 0);
    resultLabel = (UILabel_o *)System_String__Format(IfExists, (Il2CppObject *)anotherName, 0);
    if ( v33 )
    {
      UILabel__set_text(v33, (System_String_o *)resultLabel, 0);
      v45 = this->fields.downerLabel;
      v46 = sub_1C93B7C(string___TypeInfo, 2);
      v79 = eventId;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
      resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1959/*"ANOTHER_PAY_ITEM_CONFIRM_MSG{0}"*/, v47, 0);
      if ( v46 )
      {
        if ( !*(_DWORD *)(v46 + 24) )
          goto LABEL_108;
        *(_QWORD *)(v46 + 32) = resultLabel;
        resultLabel = (UILabel_o *)sub_1C93A78(v46 + 32, resultLabel);
        if ( *(_DWORD *)(v46 + 24) <= 1u )
          goto LABEL_108;
        v48 = StringLiteral_1958/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/;
        *(_QWORD *)(v46 + 40) = StringLiteral_1958/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/;
        sub_1C93A78(v46 + 40, v48);
        v49 = LocalizationManager__GetIfExists((System_String_array *)v46, 0);
        resultLabel = (UILabel_o *)System_String__Format(v49, (Il2CppObject *)itemName, 0);
        if ( !v45 )
          goto LABEL_107;
        UILabel__set_text(v45, (System_String_o *)resultLabel, 0);
        state = this->fields.state;
        v51 = sub_1C93B7C(string___TypeInfo, 2);
        v52 = state == 6;
        v53 = v51;
        if ( v52 )
        {
          v80 = eventId;
          v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
          resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1971/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO{0}"*/, v54, 0);
          if ( !v53 )
            goto LABEL_107;
          if ( !*(_DWORD *)(v53 + 24) )
            goto LABEL_108;
          *(_QWORD *)(v53 + 32) = resultLabel;
          resultLabel = (UILabel_o *)sub_1C93A78(v53 + 32, resultLabel);
          if ( *(_DWORD *)(v53 + 24) <= 1u )
            goto LABEL_108;
          v55 = StringLiteral_1970/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/;
          *(_QWORD *)(v53 + 40) = StringLiteral_1970/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/;
          sub_1C93A78(v53 + 40, v55);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v56 = LocalizationManager__GetIfExists((System_String_array *)v53, 0);
          v57 = (ServantEntity_o *)System_String__Format_64467100(v56, (Il2CppObject *)itemName, v21, v20, 0);
          v58 = (Il2CppObject *)anotherName;
LABEL_92:
          svtEntity = v57;
          resultLabel = this->fields.upperLabel;
          if ( !resultLabel )
            goto LABEL_107;
          UILabel__set_text(resultLabel, (System_String_o *)svtEntity, 0);
          if ( isMultiAnotherPayItem || isMultSkillsItem )
          {
            v73 = sub_1C93B7C(string___TypeInfo, 2);
            v80 = eventId;
            v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
            resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1969/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG{0}"*/, v74, 0);
            if ( !v73 )
              goto LABEL_107;
            if ( !*(_DWORD *)(v73 + 24) )
              goto LABEL_108;
            *(_QWORD *)(v73 + 32) = resultLabel;
            resultLabel = (UILabel_o *)sub_1C93A78(v73 + 32, resultLabel);
            if ( *(_DWORD *)(v73 + 24) <= 1u )
              goto LABEL_108;
            v75 = StringLiteral_1968/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
            *(_QWORD *)(v73 + 40) = StringLiteral_1968/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
            sub_1C93A78(v73 + 40, v75);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v72 = LocalizationManager__GetIfExists((System_String_array *)v73, 0);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v72 = LocalizationManager__Get((System_String_o *)StringLiteral_1960/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0);
          }
          v76 = this->fields.warnLabel;
          resultLabel = (UILabel_o *)System_String__Format(v72, v58, 0);
          if ( v76 )
          {
            Empty = (System_String_o *)resultLabel;
            resultLabel = v76;
            goto LABEL_106;
          }
          goto LABEL_107;
        }
        v80 = eventId;
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
        resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1957/*"ANOTHER_PAY_ITEM_CONFIRM_INFO{0}"*/, v68, 0);
        if ( !v53 )
          goto LABEL_107;
        if ( !*(_DWORD *)(v53 + 24) )
          goto LABEL_108;
        *(_QWORD *)(v53 + 32) = resultLabel;
        resultLabel = (UILabel_o *)sub_1C93A78(v53 + 32, resultLabel);
        if ( *(_DWORD *)(v53 + 24) <= 1u )
          goto LABEL_108;
        v69 = StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/;
        *(_QWORD *)(v53 + 40) = StringLiteral_1956/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/;
        sub_1C93A78(v53 + 40, v69);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v70 = LocalizationManager__GetIfExists((System_String_array *)v53, 0);
        resultLabel = (UILabel_o *)sub_1C93B7C(object___TypeInfo, 4);
        if ( resultLabel )
        {
          v71 = (System_Object_array *)resultLabel;
          if ( itemName )
          {
            resultLabel = (UILabel_o *)sub_1C93C10(itemName, resultLabel->klass->_1.element_class);
            if ( !resultLabel )
              goto LABEL_109;
          }
          if ( !LODWORD(v71->max_length) )
            goto LABEL_108;
          v71->m_Items[0] = (Il2CppObject *)itemName;
          resultLabel = (UILabel_o *)sub_1C93A78(v71->m_Items, itemName);
          if ( v21 )
          {
            resultLabel = (UILabel_o *)sub_1C93C10(v21, v71->obj.klass->_1.element_class);
            if ( !resultLabel )
              goto LABEL_109;
          }
          if ( LODWORD(v71->max_length) <= 1 )
            goto LABEL_108;
          v71->m_Items[1] = v21;
          resultLabel = (UILabel_o *)sub_1C93A78(&v71->m_Items[1], v21);
          if ( v20 )
          {
            resultLabel = (UILabel_o *)sub_1C93C10(v20, v71->obj.klass->_1.element_class);
            if ( !resultLabel )
              goto LABEL_109;
          }
          v58 = (Il2CppObject *)anotherName;
          if ( LODWORD(v71->max_length) <= 2 )
            goto LABEL_108;
          v71->m_Items[2] = v20;
          resultLabel = (UILabel_o *)sub_1C93A78(&v71->m_Items[2], v20);
          if ( shopName )
          {
            resultLabel = (UILabel_o *)sub_1C93C10(shopName, v71->obj.klass->_1.element_class);
            if ( !resultLabel )
            {
LABEL_109:
              v77 = sub_1C93D50();
              sub_1C93BFC(v77, 0);
            }
          }
          if ( LODWORD(v71->max_length) <= 3 )
            goto LABEL_108;
          v71->m_Items[3] = (Il2CppObject *)shopName;
          sub_1C93A78(&v71->m_Items[3], shopName);
          v57 = (ServantEntity_o *)System_String__Format_64467168(v70, v71, 0);
          goto LABEL_92;
        }
      }
    }
LABEL_107:
    sub_1C93D2C(resultLabel, svtEntity);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  resultLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1972/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_107;
  UILabel__set_text(titleLabel, (System_String_o *)resultLabel, 0);
  resultLabel = this->fields.titleLabel;
  if ( !resultLabel )
    goto LABEL_107;
  v24 = isOnlyAnotherItem && isMultSkillsItem ? 28 : 26;
  v25 = isOnlyAnotherItem && isMultSkillsItem ? 20 : 18;
  UILabel__set_fontSize(resultLabel, v24, 0);
  resultLabel = this->fields.upperLabel;
  if ( !resultLabel )
    goto LABEL_107;
  UILabel__set_fontSize(resultLabel, v25, 0);
  resultLabel = this->fields.warnLabel;
  if ( !resultLabel )
    goto LABEL_107;
  UILabel__set_fontSize(resultLabel, v25, 0);
  v26 = this->fields.upperLabel;
  v27 = sub_1C93B7C(string___TypeInfo, 2);
  if ( isOnlyAnotherItem )
  {
    v80 = eventId;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1964/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO{0}"*/, v28, 0);
    if ( !v27 )
      goto LABEL_107;
    if ( !*(_DWORD *)(v27 + 24) )
      goto LABEL_108;
    *(_QWORD *)(v27 + 32) = resultLabel;
    resultLabel = (UILabel_o *)sub_1C93A78(v27 + 32, resultLabel);
    if ( *(_DWORD *)(v27 + 24) <= 1u )
      goto LABEL_108;
    v29 = StringLiteral_1963/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/;
    *(_QWORD *)(v27 + 40) = StringLiteral_1963/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/;
    sub_1C93A78(v27 + 40, v29);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__GetIfExists((System_String_array *)v27, 0);
    v31 = v21;
    v32 = (Il2CppObject *)anotherName;
    resultLabel = (UILabel_o *)System_String__Format_64467100(v30, (Il2CppObject *)anotherName, v31, v20, 0);
  }
  else
  {
    v80 = eventId;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1962/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO{0}"*/, v59, 0);
    if ( !v27 )
      goto LABEL_107;
    v32 = (Il2CppObject *)anotherName;
    if ( !*(_DWORD *)(v27 + 24) )
      goto LABEL_108;
    *(_QWORD *)(v27 + 32) = resultLabel;
    resultLabel = (UILabel_o *)sub_1C93A78(v27 + 32, resultLabel);
    if ( *(_DWORD *)(v27 + 24) <= 1u )
      goto LABEL_108;
    v60 = StringLiteral_1961/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/;
    *(_QWORD *)(v27 + 40) = StringLiteral_1961/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/;
    sub_1C93A78(v27 + 40, v60);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = LocalizationManager__GetIfExists((System_String_array *)v27, 0);
    resultLabel = (UILabel_o *)System_String__Format(v61, (Il2CppObject *)anotherName, 0);
  }
  svtEntity = (ServantEntity_o *)resultLabel;
  if ( !v26 )
    goto LABEL_107;
  UILabel__set_text(v26, (System_String_o *)resultLabel, 0);
  v62 = this->fields.warnLabel;
  v63 = sub_1C93B7C(string___TypeInfo, 2);
  v80 = eventId;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_1966/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG{0}"*/, v64, 0);
  if ( !v63 )
    goto LABEL_107;
  if ( !*(_DWORD *)(v63 + 24)
    || (*(_QWORD *)(v63 + 32) = resultLabel,
        resultLabel = (UILabel_o *)sub_1C93A78(v63 + 32, resultLabel),
        *(_DWORD *)(v63 + 24) <= 1u) )
  {
LABEL_108:
    sub_1C93D34(resultLabel);
  }
  v65 = StringLiteral_1965/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/;
  *(_QWORD *)(v63 + 40) = StringLiteral_1965/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/;
  sub_1C93A78(v63 + 40, v65);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v66 = LocalizationManager__GetIfExists((System_String_array *)v63, 0);
  resultLabel = (UILabel_o *)System_String__Format(v66, v32, 0);
  if ( !v62 )
    goto LABEL_107;
  UILabel__set_text(v62, (System_String_o *)resultLabel, 0);
  resultLabel = this->fields.downerLabel;
  if ( !resultLabel )
    goto LABEL_107;
  Empty = string_TypeInfo->static_fields->Empty;
LABEL_106:
  UILabel__set_text(resultLabel, Empty, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetDecideButtonEnable(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_GameObject_o *decideButton; // x0
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1

  v5 = enable;
  if ( (byte_4D2B0FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B0FA = 1;
  }
  decideButton = this->fields.decideButton;
  this->fields.isDecideButtonEnable = v5;
  if ( !decideButton )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       decideButton,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  decideButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
  if ( ((unsigned __int8)decideButton & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( enable )
        v8 = 0;
      else
        v8 = 3;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))Component_object->klass->vtable[14].methodPtr)(
        Component_object,
        v8,
        1,
        Component_object->klass->vtable[14].method);
      return;
    }
LABEL_13:
    sub_1C93D2C(decideButton, enable);
  }
}


void EventRewardAnotherPayConfirmDialog__SetListView(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Int32_array *anotherItemIds,
        bool isOnlyAnotherItem,
        bool isMultiSkillsItem,
        const MethodInfo *method)
{
  UnityEngine_Component_o *listViewManager; // x0
  struct EventRewardAnotherPayListViewManager_o **p_listViewManager; // x8
  UnityEngine_Component_o *v13; // x23
  UIWidget_o *multiSkillsItemViewBg; // x24
  __int64 v15; // x9
  UIWidget_o *v16; // x24
  __int64 v17; // x9
  EventRewardAnotherPayConfirmDialog_c *v18; // x0
  UnityEngine_Component_o *v19; // x24
  __int64 v20; // x9
  EventRewardAnotherPayConfirmDialog_c *v21; // x0
  UnityEngine_GameObject_o *multiSkillsItemRoot; // x24
  __int64 v23; // x9
  struct System_Int32_array *itemIds; // x8
  int32_t v25; // w24
  int32_t eventId; // w22
  System_Action_bool__int__o *v27; // x25
  const MethodInfo *v28; // x6

  if ( (byte_4D2B0F6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__int__TypeInfo);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___79113744);
    sub_1C93AD4(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4D2B0F6 = 1;
  }
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_39;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManagerWithMultiSkillsItem;
  if ( !listViewManager )
    goto LABEL_39;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  listViewManager = (UnityEngine_Component_o *)this->fields.selectSkillListViewManager;
  if ( !listViewManager )
    goto LABEL_39;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  if ( this->fields.state != 5 )
    return;
  p_listViewManager = &this->fields.listViewManager;
  if ( isMultiSkillsItem )
    p_listViewManager = &this->fields.listViewManagerWithMultiSkillsItem;
  v13 = (UnityEngine_Component_o *)*p_listViewManager;
  if ( isMultiSkillsItem )
  {
    multiSkillsItemViewBg = this->fields.multiSkillsItemViewBg;
    listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
    if ( multiSkillsItemViewBg )
    {
      v15 = 180;
      if ( isOnlyAnotherItem )
        v15 = 176;
      UIWidget__set_width(
        multiSkillsItemViewBg,
        *(_DWORD *)((char *)&EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->CancelButtonReconfirmPos.fields.x
                  + v15),
        0);
      listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      v16 = this->fields.multiSkillsItemViewBg;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      if ( v16 )
      {
        v17 = 188;
        if ( isOnlyAnotherItem )
          v17 = 184;
        UIWidget__set_height(
          v16,
          *(_DWORD *)((char *)&EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->CancelButtonReconfirmPos.fields.x
                    + v17),
          0);
        v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        v19 = (UnityEngine_Component_o *)this->fields.multiSkillsItemViewBg;
        if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v18 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        v20 = 196;
        if ( isOnlyAnotherItem )
          v20 = 192;
        ComponentHelper__SetLocalPositionY(
          v19,
          *(float *)((char *)&v18->static_fields->CancelButtonReconfirmPos.fields.x + v20),
          0);
        v21 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        multiSkillsItemRoot = this->fields.multiSkillsItemRoot;
        if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
          v21 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        v23 = 204;
        if ( isOnlyAnotherItem )
          v23 = 200;
        GameObjectExtensions__SetLocalPositionY(
          multiSkillsItemRoot,
          *(float *)((char *)&v21->static_fields->CancelButtonReconfirmPos.fields.x + v23),
          0);
        goto LABEL_32;
      }
    }
LABEL_39:
    sub_1C93D2C(listViewManager, shopEntity);
  }
LABEL_32:
  if ( !v13 )
    goto LABEL_39;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v13, 0);
  if ( !listViewManager )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0);
  if ( !shopEntity )
    goto LABEL_39;
  itemIds = shopEntity->fields.itemIds;
  if ( !itemIds )
    goto LABEL_39;
  if ( !LODWORD(itemIds->max_length) )
    sub_1C93D34(listViewManager);
  v25 = itemIds->m_Items[0];
  eventId = shopEntity->fields.eventId;
  v27 = (System_Action_bool__int__o *)sub_1C93D20(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___79113744,
    0);
  EventRewardAnotherPayListViewManager__CreateList(
    (EventRewardAnotherPayListViewManager_o *)v13,
    eventId,
    v25,
    anotherItemIds,
    isOnlyAnotherItem,
    v27,
    v28);
}


void EventRewardAnotherPayConfirmDialog__SetListView_32920116(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        int32_t anotherItemId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *listViewManager; // x0
  EventRewardAnotherPayListViewManager_o *selectSkillListViewManager; // x22
  int32_t eventId; // w21
  System_Action_int__o *v10; // x23
  const MethodInfo *v11; // x4

  if ( (byte_4D2B0F7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_4D2B0F7 = 1;
  }
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_16;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManagerWithMultiSkillsItem;
  if ( !listViewManager )
    goto LABEL_16;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  listViewManager = (UnityEngine_Component_o *)this->fields.selectSkillListViewManager;
  if ( !listViewManager )
    goto LABEL_16;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  if ( this->fields.state == 8 )
  {
    listViewManager = (UnityEngine_Component_o *)this->fields.selectSkillListViewManager;
    if ( listViewManager )
    {
      listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
      if ( listViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0);
        if ( shopEntity )
        {
          selectSkillListViewManager = this->fields.selectSkillListViewManager;
          eventId = shopEntity->fields.eventId;
          v10 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__,
            0);
          if ( selectSkillListViewManager )
          {
            EventRewardAnotherPayListViewManager__CreateList_32923000(
              selectSkillListViewManager,
              eventId,
              anotherItemId,
              v10,
              v11);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1C93D2C(listViewManager, shopEntity);
  }
}


void EventRewardAnotherPayConfirmDialog__SetState(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isReconfirm,
        bool isMultiAnotherItem,
        bool isOnlyAnotherItem,
        bool isMultiSkillsItem,
        const MethodInfo *method)
{
  int32_t v6; // w8

  if ( isReconfirm )
  {
    v6 = 6;
  }
  else if ( isMultiAnotherItem || isMultiSkillsItem )
  {
    v6 = 5;
  }
  else if ( isOnlyAnotherItem )
  {
    v6 = 4;
  }
  else
  {
    v6 = 3;
  }
  this->fields.state = v6;
}


void EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t eventId,
        int32_t svtId,
        ItemEntity_o *anotherItemEntity,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_GameObject_o *skill; // x0
  __int64 v11; // x1
  int32_t *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // w20
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v18; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  SkillLvEntity_o *v22; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B0F2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_1C93AD4(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0__SetSvtPassiveSkillInfo_b__0__);
    sub_1C93AD4(&EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_TypeInfo);
    byte_4D2B0F2 = 1;
  }
  v22 = 0;
  entity = 0;
  v9 = sub_1C93D20(EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_DWORD *)(v9 + 16) = eventId;
  skill = this->fields.skill;
  if ( !skill )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(skill, 1, 0);
  if ( anotherItemEntity && anotherItemEntity->fields.type == 40 )
  {
    v12 = this->fields.selectedSkillId <= 0 ? &anotherItemEntity->fields.value : &this->fields.selectedSkillId;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( !skill )
      goto LABEL_27;
    ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                              (ServantPassiveSkillMaster_o *)skill,
                                                                              svtId,
                                                                              0);
    v14 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v9,
      Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0__SetSvtPassiveSkillInfo_b__0__,
      0);
    v15 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
            ServantSkillList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    if ( !v15 )
      return;
    v12 = (int32_t *)&v15[1].monitor + 1;
  }
  v16 = *v12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_27;
  v18 = (SkillLvMaster_o *)skill;
  skill = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v16,
                                        (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)skill & 1) == 0 )
    return;
  if ( !v18 )
    goto LABEL_27;
  if ( !SkillLvMaster__TryGetEntity(v18, &v22, v16, 1, 0) )
    return;
  skill = (UnityEngine_GameObject_o *)entity;
  if ( !entity )
    goto LABEL_27;
  skillNameLabel = this->fields.skillNameLabel;
  skill = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0);
  if ( !skillNameLabel
    || (UILabel__set_text(skillNameLabel, (System_String_o *)skill, 0), (skill = (UnityEngine_GameObject_o *)v22) == 0)
    || (skillDetailLabel = this->fields.skillDetailLabel,
        Detail = SkillLvEntity__getDetail(v22, 0, 0, 0),
        WrapControlText__textAdjust(skillDetailLabel, Detail, 18, 0, 0),
        (skill = (UnityEngine_GameObject_o *)this->fields.skillIcon) == 0) )
  {
LABEL_27:
    sub_1C93D2C(skill, v11);
  }
  SkillIconComponent__Set((SkillIconComponent_o *)skill, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetUIPosition(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isEventPeriod,
        bool isMultiAnotherPayItem,
        bool isOnlyAnotherItem,
        bool isMultiSkillsItem,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  int v17; // w8
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  float v28; // s0
  UnityEngine_GameObject_o *v29; // x0
  float v30; // s0
  UnityEngine_GameObject_o *v31; // x0
  float v32; // s0
  UnityEngine_GameObject_o *v33; // x0
  float v34; // s0
  float v35; // s0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel
    || (gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0),
        GameObjectExtensions__SetLocalPositionY(gameObject, 255.0, 0),
        (titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel) == 0) )
  {
LABEL_52:
    sub_1C93D2C(titleLabel, isEventPeriod);
  }
  UIWidget__set_width((UIWidget_o *)titleLabel, 750, 0);
  switch ( this->fields.state )
  {
    case 3:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 10.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_52;
      v13 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v13, 180.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v14 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v14, 120.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v15 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v15, -100.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v17 = -1021640704;
      goto LABEL_50;
    case 4:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -25.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_52;
      v18 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v18, 185.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v19 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v19, 135.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v20 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v20, -125.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v17 = -1020329984;
      goto LABEL_50;
    case 5:
      titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v21 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v21, 238.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v22 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v22, 212.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v23 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v24 = -154.0;
      if ( isMultiSkillsItem )
        v24 = -169.0;
      GameObjectExtensions__SetLocalPositionY(v23, v24, 0);
      if ( !isOnlyAnotherItem || !isMultiSkillsItem )
        return;
      titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v25 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v25, 202.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v26 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v26, 176.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v27 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v27, -112.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      UIWidget__set_width((UIWidget_o *)titleLabel, 762, 0);
      break;
    case 6:
      v28 = 5.0;
      if ( isMultiAnotherPayItem )
        v28 = 10.0;
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, v28, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_52;
      v29 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v30 = 175.0;
      if ( isMultiAnotherPayItem )
        v30 = 188.0;
      GameObjectExtensions__SetLocalPositionY(v29, v30, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v31 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v32 = 125.0;
      if ( isMultiAnotherPayItem )
        v32 = 132.0;
      GameObjectExtensions__SetLocalPositionY(v31, v32, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v33 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v34 = -95.0;
      if ( isMultiAnotherPayItem )
        v34 = -106.0;
      GameObjectExtensions__SetLocalPositionY(v33, v34, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v35 = -145.0;
      if ( isMultiAnotherPayItem )
        v35 = -166.0;
      goto LABEL_51;
    case 7:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -30.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v36 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v36, 100.0, 0);
      if ( isEventPeriod )
        return;
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 0.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v38 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v38, 120.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v17 = -1027080192;
LABEL_50:
      v35 = *(float *)&v17;
LABEL_51:
      GameObjectExtensions__SetLocalPositionY(v16, v35, 0);
      break;
    case 8:
      titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v37 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v37, 238.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_52;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v17 = 1129840640;
      goto LABEL_50;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetWindowSize(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isOnlyMultiSkillsItem,
        const MethodInfo *method)
{
  int32_t state; // w8
  UIWidget_o *v6; // x0
  UIWidget_o *v7; // x21
  struct UIWidget_OnDimensionsChanged_o *onChange; // x8
  float v9; // s0
  int32_t v10; // w1
  __int64 v11; // x8
  UIWidget_o *window; // x20
  float x; // s0
  int32_t v14; // w1
  UIWidget_o *v15; // x20
  float v16; // s0
  int32_t v17; // w1
  UIWidget_o *v18; // x20
  float v19; // s0
  int32_t v20; // w1
  float v21; // s0
  int32_t v22; // w1
  float v23; // s0
  int32_t v24; // w1

  if ( (byte_4D2B0F4 & 1) == 0 )
  {
    sub_1C93AD4(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_4D2B0F4 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 8:
      v6 = (UIWidget_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      window = this->fields.window;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      if ( !window )
        goto LABEL_49;
      x = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->SelectSkillWindowSize.fields.x;
      v14 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width(window, v14, 0);
      v6 = this->fields.window;
      if ( !v6 )
        goto LABEL_49;
      v11 = 148;
      break;
    case 7:
      v6 = (UIWidget_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      v15 = this->fields.window;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      if ( !v15 )
        goto LABEL_49;
      v16 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ResultWindowSize.fields.x;
      v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
      UIWidget__set_width(v15, v17, 0);
      v6 = this->fields.window;
      if ( !v6 )
        goto LABEL_49;
      v11 = 132;
      break;
    case 5:
      v6 = (UIWidget_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      v7 = this->fields.window;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
        v6 = (UIWidget_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      onChange = v6->fields.onChange;
      if ( isOnlyMultiSkillsItem )
      {
        if ( v7 )
        {
          v9 = *(float *)&onChange[1].fields.invoke_impl;
          v10 = v9 == INFINITY ? 0x80000000 : (int)v9;
          UIWidget__set_width(v7, v10, 0);
          v6 = this->fields.window;
          if ( v6 )
          {
            v11 = 156;
            break;
          }
        }
LABEL_49:
        sub_1C93D2C(v6, isOnlyMultiSkillsItem);
      }
      if ( !v7 )
        goto LABEL_49;
      v21 = *(float *)&onChange[1].monitor;
      v22 = v21 == INFINITY ? 0x80000000 : (int)v21;
      UIWidget__set_width(v7, v22, 0);
      v6 = this->fields.window;
      if ( !v6 )
        goto LABEL_49;
      v11 = 140;
      break;
    default:
      v6 = (UIWidget_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      v18 = this->fields.window;
      if ( !EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo);
      if ( !v18 )
        goto LABEL_49;
      v19 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ConfirmWindowSize.fields.x;
      v20 = v19 == INFINITY ? 0x80000000 : (int)v19;
      UIWidget__set_width(v18, v20, 0);
      v6 = this->fields.window;
      if ( !v6 )
        goto LABEL_49;
      v11 = 124;
      break;
  }
  v23 = *(float *)((char *)&EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->CancelButtonReconfirmPos.fields.x
                 + v11);
  if ( v23 == INFINITY )
    v24 = 0x80000000;
  else
    v24 = (int)v23;
  UIWidget__set_height(v6, v24, 0);
}


void EventRewardAnotherPayConfirmDialog___OpenResult_b__108_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void EventRewardAnotherPayConfirmDialog___OpenSelectSkill_b__107_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void EventRewardAnotherPayConfirmDialog___Open_b__106_0(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


System_String_o *EventRewardAnotherPayConfirmDialog__get_closeBtnPath(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B101 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15741/*"Window/CancelButton"*/);
    byte_4D2B101 = 1;
  }
  return (System_String_o *)StringLiteral_15741/*"Window/CancelButton"*/;
}


void EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0___ctor(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0___SetSvtPassiveSkillInfo_b__0(
        EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_o *this,
        ServantPassiveSkillEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C93D2C(this, 0);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}