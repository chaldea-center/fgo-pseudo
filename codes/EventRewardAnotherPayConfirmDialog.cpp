void EventRewardAnotherPayConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x9
  EventRewardAnotherPayConfirmDialog_c *v2; // x8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v3; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v4; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v5; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v6; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v7; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v8; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v9; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v10; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v11; // x9
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v12; // x8

  if ( (byte_596AAD3 & 1) == 0 )
  {
    sub_2213A60(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_596AAD3 = 1;
  }
  static_fields = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CancelButtonReconfirmPos.fields.x = 0xC3600000C3200000LL;
  v2 = EventRewardAnotherPayConfirmDialog_TypeInfo;
  static_fields->CancelButtonReconfirmPos.fields.z = 0.0;
  v3 = v2->static_fields;
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
  *(_OWORD *)&v12->MultiSkillsItemViewBgWidthOnlyAnotherItem = xmmword_E9CDA0;
  *(_OWORD *)&v12->MultiSkillsItemViewBgPosYtWithOnlyAnotherItem = xmmword_E9C310;
}


void EventRewardAnotherPayConfirmDialog___ctor(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596AAD2 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AAD2 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.isDecideButtonEnable = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardAnotherPayConfirmDialog__Close(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596AACB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_Init__);
    byte_596AACB = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 2;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


System_String_o *EventRewardAnotherPayConfirmDialog__GetName(
        EventRewardAnotherPayConfirmDialog_o *this,
        ServantEntity_o *svtEntity,
        const MethodInfo *method)
{
  int v4; // w8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  NetworkManager_c *ServantLimitCountSealAfter; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  int64_t userIdNumber; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  __int64 v18; // x22
  ServantLimitImageMaster_o *v19; // x20
  int32_t v20; // w1
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_596AAD0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AAD0 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtEntity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    ServantLimitCountSealAfter = NetworkManager_TypeInfo;
  }
  if ( !svtEntity )
    goto LABEL_28;
  v9 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  userIdNumber = ServantLimitCountSealAfter->static_fields->userIdNumber;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
  *(_QWORD *)&v23.fields.currentCryptoKey = v9;
  *(_QWORD *)&v23.fields.fakeValue = v10;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v23,
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
    v20 = -1;
    return ServantEntity__getName(svtEntity, v20, -1, 1, 0, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&svtEntity->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&svtEntity->fields.id.fields.fakeValue;
  v19 = (ServantLimitImageMaster_o *)v14;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
  *(_QWORD *)&v24.fields.currentCryptoKey = v17;
  *(_QWORD *)&v24.fields.fakeValue = v18;
  ServantLimitCountSealAfter = (NetworkManager_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v24,
                                                     0);
  if ( !entity
    || !v19
    || (ServantLimitCountSealAfter = (NetworkManager_c *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                           v19,
                                                           (int32_t)ServantLimitCountSealAfter,
                                                           entity->fields.maxLimitCount,
                                                           0),
        !entity) )
  {
LABEL_28:
    sub_2213CDC(ServantLimitCountSealAfter, v5);
  }
  if ( (_DWORD)ServantLimitCountSealAfter == entity->fields.maxLimitCount )
    v20 = -1;
  else
    v20 = (int)ServantLimitCountSealAfter;
  return ServantEntity__getName(svtEntity, v20, -1, 1, 0, 0);
}


void EventRewardAnotherPayConfirmDialog__Init(EventRewardAnotherPayConfirmDialog_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon
    || (ItemIconComponent__Clear(itemIcon, 0), (itemIcon = (ItemIconComponent_o *)this->fields.skillIcon) == 0) )
  {
    sub_2213CDC(itemIcon, method);
  }
  SkillIconComponent__Clear((SkillIconComponent_o *)itemIcon, 0);
  this->fields.onClickButton = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton, 0, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_596AACF & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    byte_596AACF = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickAnotherBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596AACC & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    byte_596AACC = 1;
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
      v5 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
    sub_2213CDC(decideButton, method);
  }
}


void EventRewardAnotherPayConfirmDialog__OnClickDecide(
        EventRewardAnotherPayConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8
  intptr_t method_code; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_596AACD & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    byte_596AACD = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__;
    if ( this->fields.isDecideButtonEnable )
    {
      if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
      onClickButton = this->fields.onClickButton;
      if ( this->fields.selectedSkillId < 1 )
      {
        if ( onClickButton )
        {
          method_code = onClickButton->fields.method_code;
          goto LABEL_16;
        }
      }
      else if ( onClickButton )
      {
        method_code = onClickButton->fields.method_code;
LABEL_16:
        ((void (__fastcall *)(intptr_t, __int64))onClickButton->fields.invoke_impl)(method_code, 1);
        return;
      }
      sub_2213CDC(v5, v6);
    }
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
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

  if ( (byte_596AAC8 & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___91766488);
    byte_596AAC8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    this->fields.buyAnotherItemId = anotherItemId;
    v7 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___91766488;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___91766488 + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___91766488);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_2213CDC(v9, v10);
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


void EventRewardAnotherPayConfirmDialog__OnClickListViewItemAction_38684432(
        EventRewardAnotherPayConfirmDialog_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596AAC9 & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_596AAC9 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.selectedSkillId = skillId;
    v5 = Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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

  if ( (byte_596AACE & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    byte_596AACE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__;
    if ( (*((_BYTE *)Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardAnotherPayConfirmDialog_OnClickNormalBuy__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onClickButton = this->fields.onClickButton;
    if ( !onClickButton )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
      onClickButton->fields.method_code,
      2,
      0,
      onClickButton->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__Open(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *buttonAction,
        bool isReconfirm,
        int32_t selectedAnotherItemId,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  int revision; // w22
  __int64 v13; // x1
  __int64 v14; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  ItemEntity_o *v19; // x22
  System_Int32_array *SkillList; // x23
  ServantEntity_o *RelateServantEntity; // x24
  _BOOL4 v22; // w23
  _BOOL4 v23; // w26
  char v24; // w25
  int32_t v25; // w8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x28
  __int64 v29; // x29
  int32_t eventId; // w27
  int32_t v31; // w0
  const MethodInfo *v32; // x4
  const MethodInfo *v33; // x5
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8
  System_String_o *name; // x27
  System_String_o *AnotherPayName; // x28
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x5
  System_Action_o *v41; // x20
  const MethodInfo *v42; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  revision = selectedAnotherItemId;
  if ( (byte_596AABF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog__Open_b__106_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AABF = 1;
  }
  this->fields.onClickButton = buttonAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton,
    (int32_t)buttonAction,
    (System_String_o *)buttonAction,
    (System_String_o *)isReconfirm,
    selectedAnotherItemId,
    (int32_t)method,
    v6,
    v7);
  if ( !isReconfirm )
    this->fields.selectedSkillId = 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !shopEntity )
    goto LABEL_42;
  v17 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetAnotherPayItemIds(shopEntity, 0);
  v18 = Master_object;
  if ( revision <= 0 )
  {
    if ( !Master_object )
      goto LABEL_42;
    if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
      sub_2213CE4(Master_object);
    revision = Master_object->fields.revision;
  }
  if ( !v17
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v17,
                                                                        revision,
                                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
LABEL_42:
    sub_2213CDC(Master_object, v16);
  }
  v19 = (ItemEntity_o *)Master_object;
  SkillList = ItemEntity__GetSkillList((ItemEntity_o *)Master_object, 0);
  RelateServantEntity = ShopEntity__GetRelateServantEntity(shopEntity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)SkillList,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v22 = 0;
  }
  else
  {
    if ( !SkillList )
      goto LABEL_42;
    v22 = SLODWORD(SkillList->max_length) > 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)v18,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v23 = 0;
  }
  else
  {
    if ( !v18 )
      goto LABEL_42;
    v23 = SLODWORD(v18->fields._MasterName_k__BackingField) > 1;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__IsSoldOut(shopEntity, 0);
  this->fields.buyAnotherItemId = v19->fields.id;
  if ( !RelateServantEntity )
  {
    onClickButton = this->fields.onClickButton;
    if ( onClickButton )
    {
      ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))onClickButton->fields.invoke_impl)(
        onClickButton->fields.method_code,
        2,
        0,
        onClickButton->fields.method);
      return;
    }
    goto LABEL_42;
  }
  v24 = (char)Master_object;
  if ( isReconfirm )
  {
    v25 = 6;
    goto LABEL_25;
  }
  if ( !v22 && !v23 )
  {
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      v25 = 4;
    else
      v25 = 3;
LABEL_25:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
    this->fields.state = v25;
    if ( Master_object )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
        if ( Master_object )
        {
          ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v19->fields.id, -1, 1, 0);
          v28 = *(_QWORD *)&RelateServantEntity->fields.id.fields.currentCryptoKey;
          v29 = *(_QWORD *)&RelateServantEntity->fields.id.fields.fakeValue;
          eventId = shopEntity->fields.eventId;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
          *(_QWORD *)&v43.fields.currentCryptoKey = v28;
          *(_QWORD *)&v43.fields.fakeValue = v29;
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v43, 0);
          EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v31, v19, v32);
          goto LABEL_38;
        }
      }
    }
    goto LABEL_42;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIcon;
  this->fields.state = 5;
  if ( !Master_object )
    goto LABEL_42;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
  if ( !Master_object )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.skill;
  if ( !Master_object )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
LABEL_38:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, v23, v24 & 1, v22, v33);
  name = v19->fields.name;
  AnotherPayName = ItemEntity__GetAnotherPayName(v19, 0);
  v37 = ShopEntity__getName(shopEntity, 0);
  EventRewardAnotherPayConfirmDialog__SetConfirmLabel(
    this,
    RelateServantEntity,
    name,
    AnotherPayName,
    v37,
    v23,
    v24 & 1,
    v22,
    shopEntity->fields.eventId,
    v42);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, v22 & v24, v38);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v19, v22 & v24, v39);
  EventRewardAnotherPayConfirmDialog__SetListView(this, shopEntity, (System_Int32_array *)v18, v24 & 1, v22, v40);
  v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__Open_b__106_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__OpenResult(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        bool isAnotherItemOnly,
        int32_t usedAnotherItemId,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onDecide,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_c *v16; // x0
  int v17; // w8
  ItemEntity_o *v18; // x21
  __int64 v19; // x2
  ServantEntity_o *v20; // x23
  __int64 v21; // x25
  struct System_String_o *MasterName_k__BackingField; // x26
  int32_t eventId; // w24
  int32_t v24; // w0
  const MethodInfo *v25; // x4
  UILabel_o *titleLabel; // x24
  UILabel_o *upperLabel; // x26
  UILabel_o *downerLabel; // x27
  System_String_o *v29; // x25
  EventRewardAnotherPayConfirmDialog_o *v30; // x0
  const MethodInfo *v31; // x2
  Il2CppObject *Name; // x24
  System_String_o *ClassName; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *resultLabel; // x23
  Il2CppObject *v37; // x25
  int v38; // w9
  __int64 *v39; // x8
  struct System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onClickButton; // x8
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  const MethodInfo *v45; // x5
  __int64 v46; // x1
  __int64 v47; // x2
  bool v48; // w1
  UILabel_o *v49; // x20
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x3
  System_Action_o *v52; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_596AAC1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__108_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_2061/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_2060/*"ANOTHER_PAY_PERIOD_END_MSG"*/);
    sub_2213A60(&StringLiteral_2062/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/);
    byte_596AAC1 = 1;
  }
  entity = 0;
  this->fields.onClickButton = onDecide;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton,
    (int32_t)onDecide,
    (System_String_o *)isAnotherItemOnly,
    *(System_String_o **)&usedAnotherItemId,
    (int32_t)onDecide,
    (int32_t)method,
    v6,
    v7);
  if ( !shopEntity )
  {
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
    goto LABEL_39;
  }
  v16 = DataManager_TypeInfo;
  v17 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.state = 7;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(v16, v14, v15);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  usedAnotherItemId,
                                                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !this->fields.itemIcon )
    goto LABEL_39;
  v18 = (ItemEntity_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this->fields.itemIcon,
                                                                  0);
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ShopEntity__GetRelateServantEntity(shopEntity, 0);
  if ( !Master_object )
    goto LABEL_39;
  v20 = (ServantEntity_o *)Master_object;
  v21 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  eventId = shopEntity->fields.eventId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v19);
  *(_QWORD *)&v54.fields.currentCryptoKey = v21;
  *(_QWORD *)&v54.fields.fakeValue = MasterName_k__BackingField;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v54, 0);
  EventRewardAnotherPayConfirmDialog__SetSvtPassiveSkillInfo(this, eventId, v24, v18, v25);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.warnLabel;
  this->fields.selectedSkillId = 0;
  if ( !Master_object )
    goto LABEL_39;
  titleLabel = this->fields.titleLabel;
  upperLabel = this->fields.upperLabel;
  downerLabel = this->fields.downerLabel;
  v29 = **(System_String_o ***)(qword_5984390 + 184);
  UILabel__set_text((UILabel_o *)Master_object, v29, 0);
  if ( !downerLabel )
    goto LABEL_39;
  UILabel__set_text(downerLabel, v29, 0);
  if ( !upperLabel )
    goto LABEL_39;
  UILabel__set_text(upperLabel, v29, 0);
  if ( !titleLabel )
    goto LABEL_39;
  UILabel__set_text(titleLabel, v29, 0);
  Name = (Il2CppObject *)EventRewardAnotherPayConfirmDialog__GetName(v30, v20, v31);
  ClassName = ServantEntity__getClassName(v20, 0);
  resultLabel = this->fields.resultLabel;
  v37 = (Il2CppObject *)ClassName;
  v38 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isAnotherItemOnly )
  {
    if ( !v38 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
    v39 = &StringLiteral_2061/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/;
  }
  else
  {
    if ( !v38 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
    v39 = &StringLiteral_2062/*"ANOTHER_PAY_PURCHASED_EFFECT_CONFIRM_MSG"*/;
  }
  v41 = LocalizationManager__Get((System_String_o *)*v39, 0);
  v42 = (Il2CppObject *)ShopEntity__getName(shopEntity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format_75697948(v41, v42, v37, Name, 0);
  if ( !resultLabel )
    goto LABEL_39;
  UILabel__set_text(resultLabel, (System_String_o *)Master_object, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43, v44);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_39;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         Master_object,
         &entity,
         shopEntity->fields.eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( entity )
    {
      if ( EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0) )
        goto LABEL_32;
      v49 = this->fields.downerLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_2060/*"ANOTHER_PAY_PERIOD_END_MSG"*/,
                                                                      0);
      if ( v49 )
      {
        UILabel__set_text(v49, (System_String_o *)Master_object, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel;
        if ( Master_object )
        {
          UILabel__set_fontSize((UILabel_o *)Master_object, 22, 0);
          v48 = 0;
          goto LABEL_38;
        }
      }
    }
LABEL_39:
    sub_2213CDC(Master_object, v14);
  }
LABEL_32:
  v48 = 1;
LABEL_38:
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, v48, 0, 0, 0, v45);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, 0, v50);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, v18, 0, v51);
  v52 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_EventRewardAnotherPayConfirmDialog__OpenResult_b__108_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__OpenSelectSkill(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        System_Action_EventRewardAnotherPayConfirmDialog_BuyState__int__o *onDecide,
        int32_t selectedAnotherItemId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_c *v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *titleLabel; // x23
  System_String_o *v21; // x24
  Il2CppObject *AnotherPayName; // x0
  UILabel_o *upperLabel; // x23
  System_String_o *v24; // x24
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x5
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  System_Action_o *v30; // x20

  if ( (byte_596AAC0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog__OpenSelectSkill_b__107_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2064/*"ANOTHER_PAY_SELECT_SKILL_INFO"*/);
    sub_2213A60(&StringLiteral_2065/*"ANOTHER_PAY_SELECT_SKILL_TITLE"*/);
    byte_596AAC0 = 1;
  }
  this->fields.onClickButton = onDecide;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickButton,
    (int32_t)onDecide,
    (System_String_o *)onDecide,
    *(System_String_o **)&selectedAnotherItemId,
    (int32_t)method,
    v5,
    v6,
    v7);
  v14 = DataManager_TypeInfo;
  this->fields.selectedSkillId = 0;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v12, v13);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             selectedAnotherItemId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_2065/*"ANOTHER_PAY_SELECT_SKILL_TITLE"*/,
                                                                  0);
  if ( !Entity )
    goto LABEL_19;
  v21 = (System_String_o *)Master_object;
  AnotherPayName = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)Entity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v21, AnotherPayName, 0);
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2064/*"ANOTHER_PAY_SELECT_SKILL_INFO"*/, 0);
  v25 = (Il2CppObject *)ItemEntity__GetAnotherPayName((ItemEntity_o *)Entity, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v24, v25, 0);
  if ( !upperLabel
    || (UILabel__set_text(upperLabel, (System_String_o *)Master_object, 0),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.downerLabel) == 0)
    || (UILabel__set_text((UILabel_o *)Master_object, **(System_String_o ***)(qword_5984390 + 184), 0),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.warnLabel) == 0) )
  {
LABEL_19:
    sub_2213CDC(Master_object, v16);
  }
  UILabel__set_text((UILabel_o *)Master_object, **(System_String_o ***)(qword_5984390 + 184), 0);
  EventRewardAnotherPayConfirmDialog__SetUIPosition(this, 1, 0, 0, 0, v26);
  EventRewardAnotherPayConfirmDialog__SetWindowSize(this, 0, v27);
  EventRewardAnotherPayConfirmDialog__SetButtonDisp(this, (ItemEntity_o *)Entity, 0, v28);
  EventRewardAnotherPayConfirmDialog__SetListView_38682080(this, shopEntity, selectedAnotherItemId, v29);
  v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)this,
    Method_EventRewardAnotherPayConfirmDialog__OpenSelectSkill_b__107_0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetButtonDisp(
        EventRewardAnotherPayConfirmDialog_o *this,
        ItemEntity_o *itemEntity,
        bool isOnlyMultiSkillsItem,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  UILabel_o *cancelLabel; // x22
  System_String_o *v9; // x23
  System_String_o *decideButton; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *decideLabel; // x22
  System_String_o **v15; // x8
  System_String_o *v16; // x23
  UILabel_o *normalBuyLabel; // x22
  UILabel_o *anotherBuyLabel; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x1
  __int64 v21; // x2
  UIWidget_o *cancelButtonSp; // x21
  int v23; // w8
  float *v24; // x8
  int32_t v25; // w1
  __int64 v26; // x2
  UIWidget_o *v27; // x21
  int v28; // w8
  float *v29; // x8
  int32_t v30; // w1
  int32_t state; // w8
  __int64 v32; // x1
  __int64 v33; // x2
  struct UnityEngine_GameObject_o *v34; // x21
  EventRewardAnotherPayConfirmDialog_c *v35; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  EventRewardAnotherPayConfirmDialog_c *v40; // x0
  UnityEngine_GameObject_o *v41; // x20
  int v42; // w8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v43; // x10
  float *v44; // x8
  float *v45; // x9
  float *v46; // x10
  __int64 v47; // x1
  __int64 v48; // x2
  EventRewardAnotherPayConfirmDialog_c *v49; // x0
  struct UnityEngine_GameObject_o *cancelButton; // x19
  __int64 v51; // x1
  __int64 v52; // x2
  EventRewardAnotherPayConfirmDialog_c *v53; // x0
  UnityEngine_GameObject_o *v54; // x20
  const MethodInfo *v55; // x2
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v56; // x10
  __int64 v57; // x1
  __int64 v58; // x2
  EventRewardAnotherPayConfirmDialog_c *v59; // x0
  int32_t v60; // w9
  int v61; // w8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v62; // x10
  float *v63; // x8
  float *v64; // x9
  float *v65; // x10
  UnityEngine_GameObject_o *v66; // x0
  EventRewardAnotherPayConfirmDialog_c *v67; // x0
  int v68; // w8
  struct EventRewardAnotherPayConfirmDialog_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct EventRewardAnotherPayConfirmDialog_StaticFields *v73; // x10
  UnityEngine_Vector3_o CancelButtonChoicePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596AAC5 & 1) == 0 )
  {
    sub_2213A60(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9719/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/);
    sub_2213A60(&StringLiteral_2036/*"ANOTHER_PAY_ANOTHER_BUY"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2063/*"ANOTHER_PAY_SELECT_SKILL_DECIDE_BTN"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_2059/*"ANOTHER_PAY_NORMAL_BUY"*/);
    byte_596AAC5 = 1;
  }
  if ( this->fields.state == 7 )
    v7 = &StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/;
  else
    v7 = &StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/;
  cancelLabel = this->fields.cancelLabel;
  v9 = (System_String_o *)*v7;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemEntity, isOnlyMultiSkillsItem);
  decideButton = LocalizationManager__Get(v9, 0);
  if ( !cancelLabel )
    goto LABEL_98;
  UILabel__set_text(cancelLabel, decideButton, 0);
  decideLabel = this->fields.decideLabel;
  if ( this->fields.state == 8 )
    v15 = (System_String_o **)&StringLiteral_2063/*"ANOTHER_PAY_SELECT_SKILL_DECIDE_BTN"*/;
  else
    v15 = (System_String_o **)&StringLiteral_9719/*"NO_QUEST_EVENT_SHOP_DECIDE_BUTTON"*/;
  v16 = *v15;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  decideButton = LocalizationManager__Get(v16, 0);
  if ( !decideLabel )
    goto LABEL_98;
  UILabel__set_text(decideLabel, decideButton, 0);
  normalBuyLabel = this->fields.normalBuyLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"ANOTHER_PAY_NORMAL_BUY"*/, 0);
  if ( !normalBuyLabel )
    goto LABEL_98;
  UILabel__set_text(normalBuyLabel, decideButton, 0);
  anotherBuyLabel = this->fields.anotherBuyLabel;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2036/*"ANOTHER_PAY_ANOTHER_BUY"*/, 0);
  v20 = itemEntity ? (Il2CppObject *)ItemEntity__GetAnotherPayName(itemEntity, 0) : 0LL;
  decideButton = System_String__Format(v19, v20, 0);
  if ( !anotherBuyLabel )
    goto LABEL_98;
  UILabel__set_text(anotherBuyLabel, decideButton, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  cancelButtonSp = (UIWidget_o *)this->fields.cancelButtonSp;
  v23 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.state == 5 )
  {
    if ( !v23 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v11, v21);
      decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v24 = (float *)(*(_QWORD *)&decideButton[7].fields + 160LL);
  }
  else
  {
    if ( !v23 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v11, v21);
      decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v24 = (float *)(*(_QWORD *)&decideButton[7].fields + 168LL);
  }
  if ( !cancelButtonSp )
    goto LABEL_98;
  v25 = *v24 == INFINITY ? 0x80000000 : (int)*v24;
  UIWidget__set_width(cancelButtonSp, v25, 0);
  decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  v27 = (UIWidget_o *)this->fields.cancelButtonSp;
  v28 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.state == 5 )
  {
    if ( !v28 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v11, v26);
      decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v29 = (float *)(*(_QWORD *)&decideButton[7].fields + 164LL);
  }
  else
  {
    if ( !v28 )
    {
      j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v11, v26);
      decideButton = (System_String_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    }
    v29 = (float *)(*(_QWORD *)&decideButton[7].fields + 172LL);
  }
  if ( !v27 )
    goto LABEL_98;
  if ( *v29 == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)*v29;
  UIWidget__set_height(v27, v30, 0);
  state = this->fields.state;
  if ( state <= 5 )
  {
    if ( state == 3 )
    {
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      v49 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      cancelButton = this->fields.cancelButton;
      if ( !*(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v47, v48);
        v49 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      CancelButtonChoicePos = v49->static_fields->CancelButtonChoicePos;
LABEL_87:
      v66 = cancelButton;
LABEL_97:
      GameObjectExtensions__SetLocalPosition(v66, CancelButtonChoicePos, 0);
      return;
    }
    if ( state != 4 )
    {
      if ( state != 5 )
        return;
LABEL_50:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( decideButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
        decideButton = (System_String_o *)this->fields.normalBuyButton;
        if ( decideButton )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
          decideButton = (System_String_o *)this->fields.anotherBuyButton;
          if ( decideButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
            v34 = this->fields.cancelButton;
            if ( isOnlyMultiSkillsItem )
            {
              v35 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              if ( !*(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v32, v33);
                v35 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              }
              CancelButtonChoicePos = v35->static_fields->CancelButtonChoiceMultiSkillsItemPos;
            }
            else
            {
              v67 = EventRewardAnotherPayConfirmDialog_TypeInfo;
              v68 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
              if ( this->fields.state == 7 )
              {
                if ( !v68 )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v32, v33);
                  v67 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                static_fields = v67->static_fields;
                p_x = &static_fields->CancelButtonResultPos.fields.x;
                p_y = &static_fields->CancelButtonResultPos.fields.y;
                p_z = &static_fields->CancelButtonResultPos.fields.z;
              }
              else
              {
                if ( !v68 )
                {
                  j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v32, v33);
                  v67 = EventRewardAnotherPayConfirmDialog_TypeInfo;
                }
                v73 = v67->static_fields;
                p_x = &v73->CancelButtonChoiceMultiPos.fields.x;
                p_y = &v73->CancelButtonChoiceMultiPos.fields.y;
                p_z = &v73->CancelButtonChoiceMultiPos.fields.z;
              }
              CancelButtonChoicePos.fields.x = *p_x;
              CancelButtonChoicePos.fields.y = *p_y;
              CancelButtonChoicePos.fields.z = *p_z;
            }
            v66 = v34;
            goto LABEL_97;
          }
        }
      }
LABEL_98:
      sub_2213CDC(decideButton, v11);
    }
LABEL_57:
    decideButton = (System_String_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
    decideButton = (System_String_o *)this->fields.normalBuyButton;
    if ( !decideButton )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
    decideButton = (System_String_o *)this->fields.anotherBuyButton;
    if ( !decideButton )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
    v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v41 = this->fields.decideButton;
    v42 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.state == 4 )
    {
      if ( !v42 )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v38, v39);
        v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v43 = v40->static_fields;
      v44 = &v43->DecideButtonPurchasedPos.fields.x;
      v45 = &v43->DecideButtonPurchasedPos.fields.y;
      v46 = &v43->DecideButtonPurchasedPos.fields.z;
    }
    else
    {
      if ( !v42 )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v38, v39);
        v40 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v56 = v40->static_fields;
      v44 = &v56->DecideButtonReconfirmPos.fields.x;
      v45 = &v56->DecideButtonReconfirmPos.fields.y;
      v46 = &v56->DecideButtonReconfirmPos.fields.z;
    }
    v75.fields.x = *v44;
    v75.fields.y = *v45;
    v75.fields.z = *v46;
    GameObjectExtensions__SetLocalPosition(v41, v75, 0);
    v59 = EventRewardAnotherPayConfirmDialog_TypeInfo;
    v60 = this->fields.state;
    cancelButton = this->fields.cancelButton;
    v61 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
    if ( v60 == 4 )
    {
      if ( !v61 )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v57, v58);
        v59 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v62 = v59->static_fields;
      v63 = &v62->CancelButtonPurchasedPos.fields.x;
      v64 = &v62->CancelButtonPurchasedPos.fields.y;
      v65 = &v62->CancelButtonPurchasedPos.fields.z;
    }
    else
    {
      if ( !v61 )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v57, v58);
        v59 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v63 = &v59->static_fields->CancelButtonReconfirmPos.fields.x;
      v64 = v63 + 1;
      v65 = v63 + 2;
    }
    CancelButtonChoicePos.fields.x = *v63;
    CancelButtonChoicePos.fields.y = *v64;
    CancelButtonChoicePos.fields.z = *v65;
    goto LABEL_87;
  }
  switch ( state )
  {
    case 6:
      goto LABEL_57;
    case 8:
      decideButton = (System_String_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 1, 0);
      decideButton = (System_String_o *)this->fields.normalBuyButton;
      if ( !decideButton )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      decideButton = (System_String_o *)this->fields.anotherBuyButton;
      if ( !decideButton )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, 0, 0);
      v53 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      v54 = this->fields.decideButton;
      if ( !*(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v51, v52);
        v53 = EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(v54, v53->static_fields->DecideButtonSelectSkillPos, 0);
      GameObjectExtensions__SetLocalPosition(
        this->fields.cancelButton,
        EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->CancelButtonSelectSkillPos,
        0);
      EventRewardAnotherPayConfirmDialog__SetDecideButtonEnable(this, 0, v55);
      break;
    case 7:
      goto LABEL_50;
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
  ServantEntity_o *v16; // x24
  UILabel_o *resultLabel; // x0
  EventRewardAnotherPayConfirmDialog_o *v19; // x0
  const MethodInfo *v20; // x2
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x24
  int32_t v23; // w1
  __int64 v24; // x2
  UILabel_o *titleLabel; // x28
  int32_t v26; // w1
  int32_t v27; // w21
  UILabel_o *v28; // x21
  __int64 v29; // x22
  Il2CppObject *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UILabel_o *v49; // x27
  System_String_o *v50; // x0
  UILabel_o *upperLabel; // x21
  System_String_o *v52; // x0
  UILabel_o *downerLabel; // x21
  System_String_o *v54; // x0
  UILabel_o *warnLabel; // x20
  System_String_o *v56; // x0
  __int64 v57; // x28
  Il2CppObject *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  int32_t v71; // w1
  __int64 v72; // x1
  __int64 v73; // x2
  System_String_o *IfExists; // x0
  UILabel_o *v75; // x27
  __int64 v76; // x28
  Il2CppObject *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int32_t v90; // w1
  System_String_o *v91; // x0
  int32_t state; // w27
  __int64 v93; // x0
  bool v94; // zf
  __int64 v95; // x27
  Il2CppObject *v96; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  int32_t v109; // w1
  __int64 v110; // x1
  __int64 v111; // x2
  System_String_o *v112; // x0
  ServantEntity_o *v113; // x0
  Il2CppObject *v114; // x0
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  int32_t v127; // w1
  __int64 v128; // x1
  __int64 v129; // x2
  System_String_o *v130; // x0
  UILabel_o *v131; // x21
  __int64 v132; // x22
  Il2CppObject *v133; // x0
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  int32_t v146; // w1
  __int64 v147; // x1
  __int64 v148; // x2
  System_String_o *v149; // x0
  System_String_o *v150; // x1
  Il2CppObject *v151; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  int32_t v164; // w1
  __int64 v165; // x1
  __int64 v166; // x2
  System_String_o *v167; // x27
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  System_Object_array *v174; // x28
  __int64 v175; // x1
  System_String_o *v176; // x2
  System_String_o *v177; // x3
  int32_t v178; // w4
  int32_t v179; // w5
  bool v180; // w6
  bool v181; // w7
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  System_String_o *v188; // x2
  System_String_o *v189; // x3
  int32_t v190; // w4
  int32_t v191; // w5
  bool v192; // w6
  bool v193; // w7
  __int64 v194; // x1
  __int64 v195; // x2
  System_String_o *v196; // x0
  __int64 v197; // x21
  Il2CppObject *v198; // x0
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  int32_t v211; // w1
  __int64 v212; // x1
  __int64 v213; // x2
  struct UILabel_o *v214; // x20
  __int64 v215; // x0
  int32_t v216; // [xsp+8h] [xbp-68h] BYREF
  int32_t v217; // [xsp+Ch] [xbp-64h] BYREF

  v16 = svtEntity;
  if ( (byte_596AAC3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_2055/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG{0}"*/);
    sub_2213A60(&StringLiteral_2048/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO{0}"*/);
    sub_2213A60(&StringLiteral_2056/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/);
    sub_2213A60(&StringLiteral_2046/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/);
    sub_2213A60(&StringLiteral_2037/*"ANOTHER_PAY_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_2040/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/);
    sub_2213A60(&StringLiteral_2045/*"ANOTHER_PAY_ITEM_CONFIRM_MSG{0}"*/);
    sub_2213A60(&StringLiteral_2049/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/);
    sub_2213A60(&StringLiteral_2052/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG{0}"*/);
    sub_2213A60(&StringLiteral_2058/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_2038/*"ANOTHER_PAY_CONFIRM_TITLE{0}"*/);
    sub_2213A60(&StringLiteral_2043/*"ANOTHER_PAY_ITEM_CONFIRM_INFO{0}"*/);
    sub_2213A60(&StringLiteral_2047/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/);
    sub_2213A60(&StringLiteral_2050/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO{0}"*/);
    sub_2213A60(&StringLiteral_2054/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/);
    sub_2213A60(&StringLiteral_2057/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO{0}"*/);
    sub_2213A60(&StringLiteral_2044/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/);
    sub_2213A60(&StringLiteral_2041/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/);
    sub_2213A60(&StringLiteral_2039/*"ANOTHER_PAY_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_2042/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/);
    sub_2213A60(&StringLiteral_2051/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/);
    byte_596AAC3 = 1;
  }
  resultLabel = this->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_107;
  UILabel__set_text(resultLabel, **(System_String_o ***)(qword_5984390 + 184), 0);
  resultLabel = (UILabel_o *)EventRewardAnotherPayConfirmDialog__GetName(v19, v16, v20);
  if ( !v16 )
    goto LABEL_107;
  v21 = (Il2CppObject *)resultLabel;
  resultLabel = (UILabel_o *)ServantEntity__getClassName(v16, 0);
  if ( !this->fields.warnLabel )
    goto LABEL_107;
  v22 = (Il2CppObject *)resultLabel;
  if ( this->fields.state == 5 )
    v23 = 18;
  else
    v23 = 20;
  UILabel__set_fontSize(this->fields.warnLabel, v23, 0);
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
    v49 = this->fields.titleLabel;
    if ( this->fields.state == 3 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2039/*"ANOTHER_PAY_INFO_TITLE"*/, 0);
      resultLabel = (UILabel_o *)System_String__Format(v50, (Il2CppObject *)anotherName, 0);
      if ( v49 )
      {
        UILabel__set_text(v49, (System_String_o *)resultLabel, 0);
        upperLabel = this->fields.upperLabel;
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2040/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_INFO"*/, 0);
        resultLabel = (UILabel_o *)System_String__Format(v52, (Il2CppObject *)anotherName, 0);
        if ( upperLabel )
        {
          UILabel__set_text(upperLabel, (System_String_o *)resultLabel, 0);
          downerLabel = this->fields.downerLabel;
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2041/*"ANOTHER_PAY_ITEM_CONFIRM_CHOICES_MSG"*/, 0);
          resultLabel = (UILabel_o *)System_String__Format(v54, (Il2CppObject *)anotherName, 0);
          if ( downerLabel )
          {
            UILabel__set_text(downerLabel, (System_String_o *)resultLabel, 0);
            warnLabel = this->fields.warnLabel;
            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2046/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0);
            resultLabel = (UILabel_o *)System_String__Format(v56, (Il2CppObject *)anotherName, 0);
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
    v57 = sub_2213B20(string___TypeInfo, 2);
    v217 = eventId;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
    resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2038/*"ANOTHER_PAY_CONFIRM_TITLE{0}"*/, v58, 0);
    if ( !v57 )
      goto LABEL_107;
    if ( !*(_DWORD *)(v57 + 24) )
      goto LABEL_108;
    *(_QWORD *)(v57 + 32) = resultLabel;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 32), (int32_t)resultLabel, v59, v60, v61, v62, v63, v64);
    if ( (*(_DWORD *)(v57 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_108;
    v71 = StringLiteral_2037/*"ANOTHER_PAY_CONFIRM_TITLE"*/;
    *(_QWORD *)(v57 + 40) = StringLiteral_2037/*"ANOTHER_PAY_CONFIRM_TITLE"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 40), v71, v65, v66, v67, v68, v69, v70);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72, v73);
    IfExists = LocalizationManager__GetIfExists((System_String_array *)v57, 0);
    resultLabel = (UILabel_o *)System_String__Format(IfExists, (Il2CppObject *)anotherName, 0);
    if ( v49 )
    {
      UILabel__set_text(v49, (System_String_o *)resultLabel, 0);
      v75 = this->fields.downerLabel;
      v76 = sub_2213B20(string___TypeInfo, 2);
      v216 = eventId;
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v216);
      resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2045/*"ANOTHER_PAY_ITEM_CONFIRM_MSG{0}"*/, v77, 0);
      if ( v76 )
      {
        if ( !*(_DWORD *)(v76 + 24) )
          goto LABEL_108;
        *(_QWORD *)(v76 + 32) = resultLabel;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 32), (int32_t)resultLabel, v78, v79, v80, v81, v82, v83);
        if ( (*(_DWORD *)(v76 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_108;
        v90 = StringLiteral_2044/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/;
        *(_QWORD *)(v76 + 40) = StringLiteral_2044/*"ANOTHER_PAY_ITEM_CONFIRM_MSG"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 40), v90, v84, v85, v86, v87, v88, v89);
        v91 = LocalizationManager__GetIfExists((System_String_array *)v76, 0);
        resultLabel = (UILabel_o *)System_String__Format(v91, (Il2CppObject *)itemName, 0);
        if ( !v75 )
          goto LABEL_107;
        UILabel__set_text(v75, (System_String_o *)resultLabel, 0);
        state = this->fields.state;
        v93 = sub_2213B20(string___TypeInfo, 2);
        v94 = state == 6;
        v95 = v93;
        if ( v94 )
        {
          v217 = eventId;
          v96 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
          resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2057/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO{0}"*/, v96, 0);
          if ( !v95 )
            goto LABEL_107;
          if ( !*(_DWORD *)(v95 + 24) )
            goto LABEL_108;
          *(_QWORD *)(v95 + 32) = resultLabel;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v95 + 32),
            (int32_t)resultLabel,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102);
          if ( (*(_DWORD *)(v95 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_108;
          v109 = StringLiteral_2056/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/;
          *(_QWORD *)(v95 + 40) = StringLiteral_2056/*"ANOTHER_PAY_ITEM_RECONFIRM_INFO"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v95 + 40), v109, v103, v104, v105, v106, v107, v108);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v110, v111);
          v112 = LocalizationManager__GetIfExists((System_String_array *)v95, 0);
          v113 = (ServantEntity_o *)System_String__Format_75697948(v112, (Il2CppObject *)itemName, v22, v21, 0);
LABEL_92:
          svtEntity = v113;
          resultLabel = this->fields.upperLabel;
          if ( !resultLabel )
            goto LABEL_107;
          UILabel__set_text(resultLabel, (System_String_o *)svtEntity, 0);
          if ( isMultiAnotherPayItem || isMultSkillsItem )
          {
            v197 = sub_2213B20(string___TypeInfo, 2);
            v217 = eventId;
            v198 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
            resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2055/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG{0}"*/, v198, 0);
            if ( !v197 )
              goto LABEL_107;
            if ( !*(_DWORD *)(v197 + 24) )
              goto LABEL_108;
            *(_QWORD *)(v197 + 32) = resultLabel;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v197 + 32),
              (int32_t)resultLabel,
              v199,
              v200,
              v201,
              v202,
              v203,
              v204);
            if ( (*(_DWORD *)(v197 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_108;
            v211 = StringLiteral_2054/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
            *(_QWORD *)(v197 + 40) = StringLiteral_2054/*"ANOTHER_PAY_ITEM_MULTI_RECONFIRM_WARN_MSG"*/;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v197 + 40), v211, v205, v206, v207, v208, v209, v210);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v212, v213);
            v196 = LocalizationManager__GetIfExists((System_String_array *)v197, 0);
          }
          else
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v194, v195);
            v196 = LocalizationManager__Get((System_String_o *)StringLiteral_2046/*"ANOTHER_PAY_ITEM_CONFIRM_WARN_MSG"*/, 0);
          }
          v214 = this->fields.warnLabel;
          resultLabel = (UILabel_o *)System_String__Format(v196, (Il2CppObject *)anotherName, 0);
          if ( v214 )
          {
            v150 = (System_String_o *)resultLabel;
            resultLabel = v214;
            goto LABEL_106;
          }
          goto LABEL_107;
        }
        v217 = eventId;
        v151 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
        resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2043/*"ANOTHER_PAY_ITEM_CONFIRM_INFO{0}"*/, v151, 0);
        if ( !v95 )
          goto LABEL_107;
        if ( !*(_DWORD *)(v95 + 24) )
          goto LABEL_108;
        *(_QWORD *)(v95 + 32) = resultLabel;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v95 + 32),
          (int32_t)resultLabel,
          v152,
          v153,
          v154,
          v155,
          v156,
          v157);
        if ( (*(_DWORD *)(v95 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_108;
        v164 = StringLiteral_2042/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/;
        *(_QWORD *)(v95 + 40) = StringLiteral_2042/*"ANOTHER_PAY_ITEM_CONFIRM_INFO"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v95 + 40), v164, v158, v159, v160, v161, v162, v163);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v165, v166);
        v167 = LocalizationManager__GetIfExists((System_String_array *)v95, 0);
        resultLabel = (UILabel_o *)sub_2213B20(object___TypeInfo, 4);
        if ( resultLabel )
        {
          v174 = (System_Object_array *)resultLabel;
          if ( itemName )
          {
            resultLabel = (UILabel_o *)sub_2213BB4(itemName, resultLabel->klass->_1.element_class);
            if ( !resultLabel )
              goto LABEL_109;
          }
          if ( !LODWORD(v174->max_length) )
            goto LABEL_108;
          v174->m_Items[0] = (Il2CppObject *)itemName;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)v174->m_Items,
            (int32_t)itemName,
            v168,
            v169,
            v170,
            v171,
            v172,
            v173);
          if ( v22 )
          {
            resultLabel = (UILabel_o *)sub_2213BB4(v22, v174->obj.klass->_1.element_class);
            if ( !resultLabel )
              goto LABEL_109;
          }
          if ( (v174->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_108;
          v174->m_Items[1] = v22;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v174->m_Items[1],
            (int32_t)v22,
            v176,
            v177,
            v178,
            v179,
            v180,
            v181);
          if ( v21 )
          {
            resultLabel = (UILabel_o *)sub_2213BB4(v21, v174->obj.klass->_1.element_class);
            if ( !resultLabel )
              goto LABEL_109;
          }
          if ( LODWORD(v174->max_length) <= 2 )
            goto LABEL_108;
          v174->m_Items[2] = v21;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v174->m_Items[2],
            (int32_t)v21,
            v182,
            v183,
            v184,
            v185,
            v186,
            v187);
          if ( shopName )
          {
            resultLabel = (UILabel_o *)sub_2213BB4(shopName, v174->obj.klass->_1.element_class);
            if ( !resultLabel )
            {
LABEL_109:
              v215 = sub_2213D00(resultLabel, v175);
              sub_2213BA0(v215, 0);
            }
          }
          if ( (v174->max_length & 0xFFFFFFFC) == 0 )
            goto LABEL_108;
          v174->m_Items[3] = (Il2CppObject *)shopName;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v174->m_Items[3],
            (int32_t)shopName,
            v188,
            v189,
            v190,
            v191,
            v192,
            v193);
          v113 = (ServantEntity_o *)System_String__Format_75698016(v167, v174, 0);
          goto LABEL_92;
        }
      }
    }
LABEL_107:
    sub_2213CDC(resultLabel, svtEntity);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, svtEntity, v24);
  resultLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"ANOTHER_PAY_MULTI_INFO_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_107;
  UILabel__set_text(titleLabel, (System_String_o *)resultLabel, 0);
  resultLabel = this->fields.titleLabel;
  if ( !resultLabel )
    goto LABEL_107;
  v26 = isOnlyAnotherItem && isMultSkillsItem ? 28 : 26;
  v27 = isOnlyAnotherItem && isMultSkillsItem ? 20 : 18;
  UILabel__set_fontSize(resultLabel, v26, 0);
  resultLabel = this->fields.upperLabel;
  if ( !resultLabel )
    goto LABEL_107;
  UILabel__set_fontSize(resultLabel, v27, 0);
  resultLabel = this->fields.warnLabel;
  if ( !resultLabel )
    goto LABEL_107;
  UILabel__set_fontSize(resultLabel, v27, 0);
  v28 = this->fields.upperLabel;
  v29 = sub_2213B20(string___TypeInfo, 2);
  if ( isOnlyAnotherItem )
  {
    v217 = eventId;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
    resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2050/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO{0}"*/, v30, 0);
    if ( !v29 )
      goto LABEL_107;
    if ( !*(_DWORD *)(v29 + 24) )
      goto LABEL_108;
    *(_QWORD *)(v29 + 32) = resultLabel;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)resultLabel, v31, v32, v33, v34, v35, v36);
    if ( (*(_DWORD *)(v29 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_108;
    v43 = StringLiteral_2049/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/;
    *(_QWORD *)(v29 + 40) = StringLiteral_2049/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_PURCHASED_INFO"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 40), v43, v37, v38, v39, v40, v41, v42);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
    v46 = LocalizationManager__GetIfExists((System_String_array *)v29, 0);
    resultLabel = (UILabel_o *)System_String__Format_75697948(v46, (Il2CppObject *)anotherName, v22, v21, 0);
  }
  else
  {
    v217 = eventId;
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
    resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2048/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO{0}"*/, v114, 0);
    if ( !v29 )
      goto LABEL_107;
    if ( !*(_DWORD *)(v29 + 24) )
      goto LABEL_108;
    *(_QWORD *)(v29 + 32) = resultLabel;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v29 + 32),
      (int32_t)resultLabel,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
    if ( (*(_DWORD *)(v29 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_108;
    v127 = StringLiteral_2047/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/;
    *(_QWORD *)(v29 + 40) = StringLiteral_2047/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_CHOICES_INFO"*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 40), v127, v121, v122, v123, v124, v125, v126);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128, v129);
    v130 = LocalizationManager__GetIfExists((System_String_array *)v29, 0);
    resultLabel = (UILabel_o *)System_String__Format(v130, (Il2CppObject *)anotherName, 0);
  }
  svtEntity = (ServantEntity_o *)resultLabel;
  if ( !v28 )
    goto LABEL_107;
  UILabel__set_text(v28, (System_String_o *)resultLabel, 0);
  v131 = this->fields.warnLabel;
  v132 = sub_2213B20(string___TypeInfo, 2);
  v217 = eventId;
  v133 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v217);
  resultLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_2052/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG{0}"*/, v133, 0);
  if ( !v132 )
    goto LABEL_107;
  if ( !*(_DWORD *)(v132 + 24)
    || (*(_QWORD *)(v132 + 32) = resultLabel,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v132 + 32),
          (int32_t)resultLabel,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139),
        (*(_DWORD *)(v132 + 24) & 0xFFFFFFFE) == 0) )
  {
LABEL_108:
    sub_2213CE4(resultLabel);
  }
  v146 = StringLiteral_2051/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/;
  *(_QWORD *)(v132 + 40) = StringLiteral_2051/*"ANOTHER_PAY_ITEM_MULTI_CONFIRM_WARN_MSG"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v132 + 40), v146, v140, v141, v142, v143, v144, v145);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v147, v148);
  v149 = LocalizationManager__GetIfExists((System_String_array *)v132, 0);
  resultLabel = (UILabel_o *)System_String__Format(v149, (Il2CppObject *)anotherName, 0);
  if ( !v131 )
    goto LABEL_107;
  UILabel__set_text(v131, (System_String_o *)resultLabel, 0);
  resultLabel = this->fields.downerLabel;
  if ( !resultLabel )
    goto LABEL_107;
  v150 = **(System_String_o ***)(qword_5984390 + 184);
LABEL_106:
  UILabel__set_text(resultLabel, v150, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetDecideButtonEnable(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  bool v5; // w21
  UnityEngine_GameObject_o *decideButton; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1

  v5 = enable;
  if ( (byte_596AACA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AACA = 1;
  }
  decideButton = this->fields.decideButton;
  this->fields.isDecideButtonEnable = v5;
  if ( !decideButton )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       decideButton,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  decideButton = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
  if ( ((unsigned __int8)decideButton & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( enable )
        v10 = 0;
      else
        v10 = 3;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))Component_object->klass->vtable[14].methodPtr)(
        Component_object,
        v10,
        1,
        Component_object->klass->vtable[14].method);
      return;
    }
LABEL_13:
    sub_2213CDC(decideButton, enable);
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
  __int64 v12; // x2
  struct EventRewardAnotherPayListViewManager_o **p_listViewManager; // x8
  UnityEngine_Component_o *v14; // x23
  UIWidget_o *multiSkillsItemViewBg; // x24
  int v16; // w8
  int32_t *v17; // x8
  __int64 v18; // x2
  UIWidget_o *v19; // x24
  int v20; // w8
  int32_t *v21; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  EventRewardAnotherPayConfirmDialog_c *v24; // x0
  UnityEngine_Component_o *v25; // x24
  int v26; // w8
  __int64 v27; // x1
  __int64 v28; // x2
  EventRewardAnotherPayConfirmDialog_c *v29; // x0
  UnityEngine_GameObject_o *multiSkillsItemRoot; // x24
  float *p_MultiSkillsItemViewRootPosYtWithOnlyAnotherItem; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  EventRewardAnotherPayConfirmDialog_c *v34; // x0
  struct System_Int32_array *itemIds; // x8
  int32_t eventId; // w22
  int32_t v37; // w24
  System_Action_bool__int__o *v38; // x25

  if ( (byte_596AAC6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__int__TypeInfo);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___91766488);
    sub_2213A60(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_596AAC6 = 1;
  }
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_48;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  listViewManager = (UnityEngine_Component_o *)this->fields.listViewManagerWithMultiSkillsItem;
  if ( !listViewManager )
    goto LABEL_48;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  listViewManager = (UnityEngine_Component_o *)this->fields.selectSkillListViewManager;
  if ( !listViewManager )
    goto LABEL_48;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listViewManager, 0);
  if ( !listViewManager )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
  if ( this->fields.state != 5 )
    return;
  p_listViewManager = &this->fields.listViewManager;
  if ( isMultiSkillsItem )
    p_listViewManager = &this->fields.listViewManagerWithMultiSkillsItem;
  v14 = (UnityEngine_Component_o *)*p_listViewManager;
  if ( isMultiSkillsItem )
  {
    multiSkillsItemViewBg = this->fields.multiSkillsItemViewBg;
    listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
    v16 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
    if ( isOnlyAnotherItem )
    {
      if ( !v16 )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, shopEntity, v12);
        listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v17 = (int32_t *)(listViewManager[7].fields.m_CachedPtr + 176);
    }
    else
    {
      if ( !v16 )
      {
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, shopEntity, v12);
        listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      }
      v17 = (int32_t *)(listViewManager[7].fields.m_CachedPtr + 180);
    }
    if ( multiSkillsItemViewBg )
    {
      UIWidget__set_width(multiSkillsItemViewBg, *v17, 0);
      listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
      v19 = this->fields.multiSkillsItemViewBg;
      v20 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
      if ( isOnlyAnotherItem )
      {
        if ( !v20 )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, shopEntity, v18);
          listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        v21 = (int32_t *)(listViewManager[7].fields.m_CachedPtr + 184);
      }
      else
      {
        if ( !v20 )
        {
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, shopEntity, v18);
          listViewManager = (UnityEngine_Component_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
        }
        v21 = (int32_t *)(listViewManager[7].fields.m_CachedPtr + 188);
      }
      if ( v19 )
      {
        UIWidget__set_height(v19, *v21, 0);
        v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
        v25 = (UnityEngine_Component_o *)this->fields.multiSkillsItemViewBg;
        v26 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
        if ( isOnlyAnotherItem )
        {
          if ( !v26 )
          {
            j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v22, v23);
            v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
          }
          ComponentHelper__SetLocalPositionY(v25, v24->static_fields->MultiSkillsItemViewBgPosYtWithOnlyAnotherItem, 0);
          v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
          multiSkillsItemRoot = this->fields.multiSkillsItemRoot;
          if ( !*(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v27, v28);
            v29 = EventRewardAnotherPayConfirmDialog_TypeInfo;
          }
          p_MultiSkillsItemViewRootPosYtWithOnlyAnotherItem = &v29->static_fields->MultiSkillsItemViewRootPosYtWithOnlyAnotherItem;
        }
        else
        {
          if ( !v26 )
          {
            j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v22, v23);
            v24 = EventRewardAnotherPayConfirmDialog_TypeInfo;
          }
          ComponentHelper__SetLocalPositionY(v25, v24->static_fields->MultiSkillsItemViewBgPosYtWithNormalItem, 0);
          v34 = EventRewardAnotherPayConfirmDialog_TypeInfo;
          multiSkillsItemRoot = this->fields.multiSkillsItemRoot;
          if ( !*(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, v32, v33);
            v34 = EventRewardAnotherPayConfirmDialog_TypeInfo;
          }
          p_MultiSkillsItemViewRootPosYtWithOnlyAnotherItem = &v34->static_fields->MultiSkillsItemViewRootPosYtWithNormalItem;
        }
        GameObjectExtensions__SetLocalPositionY(
          multiSkillsItemRoot,
          *p_MultiSkillsItemViewRootPosYtWithOnlyAnotherItem,
          0);
        goto LABEL_42;
      }
    }
LABEL_48:
    sub_2213CDC(listViewManager, shopEntity);
  }
LABEL_42:
  if ( !v14 )
    goto LABEL_48;
  listViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v14, 0);
  if ( !listViewManager )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 1, 0);
  if ( !shopEntity )
    goto LABEL_48;
  itemIds = shopEntity->fields.itemIds;
  if ( !itemIds )
    goto LABEL_48;
  if ( !LODWORD(itemIds->max_length) )
    sub_2213CE4(listViewManager);
  eventId = shopEntity->fields.eventId;
  v37 = itemIds->m_Items[0];
  v38 = (System_Action_bool__int__o *)sub_2213CCC(System_Action_bool__int__TypeInfo);
  System_Action_bool__int____ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction___91766488,
    0);
  EventRewardAnotherPayListViewManager__CreateList(
    (EventRewardAnotherPayListViewManager_o *)v14,
    eventId,
    v37,
    anotherItemIds,
    isOnlyAnotherItem,
    v38,
    0);
}


void EventRewardAnotherPayConfirmDialog__SetListView_38682080(
        EventRewardAnotherPayConfirmDialog_o *this,
        ShopEntity_o *shopEntity,
        int32_t anotherItemId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *listViewManager; // x0
  EventRewardAnotherPayListViewManager_o *selectSkillListViewManager; // x22
  int32_t eventId; // w21
  System_Action_int__o *v10; // x23

  if ( (byte_596AAC7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__);
    byte_596AAC7 = 1;
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
          v10 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_EventRewardAnotherPayConfirmDialog_OnClickListViewItemAction__,
            0);
          if ( selectSkillListViewManager )
          {
            EventRewardAnotherPayListViewManager__CreateList_38848320(
              selectSkillListViewManager,
              eventId,
              anotherItemId,
              v10,
              0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_2213CDC(listViewManager, shopEntity);
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
  EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_o *v9; // x22
  UnityEngine_GameObject_o *skill; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w20
  Il2CppObject *Master_object; // x22
  SkillLvMaster_o *v20; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  SkillLvEntity_o *v24; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596AAC2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    sub_2213A60(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_2213A60(&Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0__SetSvtPassiveSkillInfo_b__0__);
    sub_2213A60(&EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_TypeInfo);
    byte_596AAC2 = 1;
  }
  v24 = 0;
  entity = 0;
  v9 = (EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_o *)sub_2213CCC(EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0_TypeInfo);
  EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_27;
  skill = this->fields.skill;
  v9->fields.eventId = eventId;
  if ( !skill )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(skill, 1, 0);
  if ( anotherItemEntity && anotherItemEntity->fields.type == 40 )
  {
    v14 = this->fields.selectedSkillId <= 0 ? &anotherItemEntity->fields.value : &this->fields.selectedSkillId;
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
    skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    if ( !skill )
      goto LABEL_27;
    ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                              (ServantPassiveSkillMaster_o *)skill,
                                                                              svtId,
                                                                              0);
    v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v9,
      Method_EventRewardAnotherPayConfirmDialog___c__DisplayClass110_0__SetSvtPassiveSkillInfo_b__0__,
      0);
    v17 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            ServantSkillList,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantPassiveSkillEntity___);
    if ( !v17 )
      return;
    v14 = (int32_t *)&v17[1].monitor + 1;
  }
  v18 = *v14;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  skill = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_27;
  v20 = (SkillLvMaster_o *)skill;
  skill = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v18,
                                        (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)skill & 1) == 0 )
    return;
  if ( !v20 )
    goto LABEL_27;
  if ( !SkillLvMaster__TryGetEntity(v20, &v24, v18, 1, 0) )
    return;
  skill = (UnityEngine_GameObject_o *)entity;
  if ( !entity )
    goto LABEL_27;
  skillNameLabel = this->fields.skillNameLabel;
  skill = (UnityEngine_GameObject_o *)SkillEntity__getName((SkillEntity_o *)entity, 0);
  if ( !skillNameLabel
    || (UILabel__set_text(skillNameLabel, (System_String_o *)skill, 0), (skill = (UnityEngine_GameObject_o *)v24) == 0)
    || (skillDetailLabel = this->fields.skillDetailLabel,
        Detail = SkillLvEntity__getDetail(v24, 0, 0, 0),
        WrapControlText__textAdjust(skillDetailLabel, Detail, 18, 0, 0),
        (skill = (UnityEngine_GameObject_o *)this->fields.skillIcon) == 0) )
  {
LABEL_27:
    sub_2213CDC(skill, v11);
  }
  SkillIconComponent__Set((SkillIconComponent_o *)skill, v18, 0);
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
  int32_t state; // w8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  float v21; // s0
  UnityEngine_GameObject_o *v22; // x0
  float v23; // s0
  UnityEngine_GameObject_o *v24; // x0
  float v25; // s0
  UnityEngine_GameObject_o *v26; // x0
  float v27; // s0
  UnityEngine_GameObject_o *v28; // x0
  float v29; // s0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  int v33; // w8
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_58;
  gameObject = UnityEngine_Component__get_gameObject(titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 255.0, 0);
  titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
  if ( !titleLabel )
    goto LABEL_58;
  UIWidget__set_width((UIWidget_o *)titleLabel, 750, 0);
  state = this->fields.state;
  if ( state > 5 )
  {
    switch ( state )
    {
      case 8:
        titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v34 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(v34, 238.0, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v28 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        v33 = 1129840640;
        break;
      case 7:
        GameObjectExtensions__SetLocalPositionY(this->fields.skill, -30.0, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v38 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(v38, 100.0, 0);
        if ( isEventPeriod )
          return;
        GameObjectExtensions__SetLocalPositionY(this->fields.skill, 0.0, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.resultLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v39 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(v39, 120.0, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v28 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        v33 = -1027080192;
        break;
      case 6:
        v21 = 5.0;
        if ( isMultiAnotherPayItem )
          v21 = 10.0;
        GameObjectExtensions__SetLocalPositionY(this->fields.skill, v21, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
        if ( !titleLabel )
          goto LABEL_58;
        v22 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        v23 = 175.0;
        if ( isMultiAnotherPayItem )
          v23 = 188.0;
        GameObjectExtensions__SetLocalPositionY(v22, v23, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v24 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        v25 = 125.0;
        if ( isMultiAnotherPayItem )
          v25 = 132.0;
        GameObjectExtensions__SetLocalPositionY(v24, v25, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v26 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        v27 = -95.0;
        if ( isMultiAnotherPayItem )
          v27 = -106.0;
        GameObjectExtensions__SetLocalPositionY(v26, v27, 0);
        titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
        if ( !titleLabel )
          goto LABEL_58;
        v28 = UnityEngine_Component__get_gameObject(titleLabel, 0);
        v29 = -145.0;
        if ( isMultiAnotherPayItem )
          v29 = -166.0;
LABEL_57:
        GameObjectExtensions__SetLocalPositionY(v28, v29, 0);
        return;
      default:
        return;
    }
LABEL_56:
    v29 = *(float *)&v33;
    goto LABEL_57;
  }
  switch ( state )
  {
    case 3:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, 10.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_58;
      v30 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v30, 180.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v31 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v31, 120.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v32 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v32, -100.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v28 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v33 = -1021640704;
      goto LABEL_56;
    case 4:
      GameObjectExtensions__SetLocalPositionY(this->fields.skill, -25.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.itemIcon;
      if ( !titleLabel )
        goto LABEL_58;
      v35 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v35, 185.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v36 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v36, 135.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v37 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v37, -125.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.downerLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v28 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v33 = -1020329984;
      goto LABEL_56;
    case 5:
      titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v14 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v14, 238.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v15 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v15, 212.0, 0);
      titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
      if ( !titleLabel )
        goto LABEL_58;
      v16 = UnityEngine_Component__get_gameObject(titleLabel, 0);
      v17 = -154.0;
      if ( isMultiSkillsItem )
        v17 = -169.0;
      GameObjectExtensions__SetLocalPositionY(v16, v17, 0);
      if ( isOnlyAnotherItem && isMultiSkillsItem )
      {
        titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
        if ( titleLabel )
        {
          v18 = UnityEngine_Component__get_gameObject(titleLabel, 0);
          GameObjectExtensions__SetLocalPositionY(v18, 202.0, 0);
          titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
          if ( titleLabel )
          {
            v19 = UnityEngine_Component__get_gameObject(titleLabel, 0);
            GameObjectExtensions__SetLocalPositionY(v19, 176.0, 0);
            titleLabel = (UnityEngine_Component_o *)this->fields.warnLabel;
            if ( titleLabel )
            {
              v20 = UnityEngine_Component__get_gameObject(titleLabel, 0);
              GameObjectExtensions__SetLocalPositionY(v20, -112.0, 0);
              titleLabel = (UnityEngine_Component_o *)this->fields.upperLabel;
              if ( titleLabel )
              {
                UIWidget__set_width((UIWidget_o *)titleLabel, 762, 0);
                return;
              }
            }
          }
        }
LABEL_58:
        sub_2213CDC(titleLabel, isEventPeriod);
      }
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayConfirmDialog__SetWindowSize(
        EventRewardAnotherPayConfirmDialog_o *this,
        bool isOnlyMultiSkillsItem,
        const MethodInfo *method)
{
  UIWidget_o *v5; // x0
  int32_t state; // w9
  UIWidget_o *window; // x20
  int v8; // w8
  float v9; // s0
  int32_t v10; // w1
  float *p_y; // x8
  float v12; // s0
  int32_t v13; // w1
  float x; // s0
  int32_t v15; // w1
  float v16; // s0
  int32_t v17; // w1
  float v18; // s0
  int32_t v19; // w1
  int32_t v20; // w1

  if ( (byte_596AAC4 & 1) == 0 )
  {
    sub_2213A60(&EventRewardAnotherPayConfirmDialog_TypeInfo);
    byte_596AAC4 = 1;
  }
  v5 = (UIWidget_o *)EventRewardAnotherPayConfirmDialog_TypeInfo;
  state = this->fields.state;
  window = this->fields.window;
  v8 = *(&EventRewardAnotherPayConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  switch ( state )
  {
    case 8:
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isOnlyMultiSkillsItem, method);
      if ( !window )
        goto LABEL_51;
      x = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->SelectSkillWindowSize.fields.x;
      v15 = x == INFINITY ? 0x80000000 : (int)x;
      UIWidget__set_width(window, v15, 0);
      v5 = this->fields.window;
      if ( !v5 )
        goto LABEL_51;
      p_y = &EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->SelectSkillWindowSize.fields.y;
      break;
    case 7:
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isOnlyMultiSkillsItem, method);
      if ( !window )
        goto LABEL_51;
      v12 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ResultWindowSize.fields.x;
      v13 = v12 == INFINITY ? 0x80000000 : (int)v12;
      UIWidget__set_width(window, v13, 0);
      v5 = this->fields.window;
      if ( !v5 )
        goto LABEL_51;
      p_y = &EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ResultWindowSize.fields.y;
      break;
    case 5:
      if ( isOnlyMultiSkillsItem )
      {
        if ( !v8 )
          j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isOnlyMultiSkillsItem, method);
        if ( window )
        {
          v9 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ChoiceMultiSkillsItemWindowSize.fields.x;
          v10 = v9 == INFINITY ? 0x80000000 : (int)v9;
          UIWidget__set_width(window, v10, 0);
          v5 = this->fields.window;
          if ( v5 )
          {
            p_y = &EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ChoiceMultiSkillsItemWindowSize.fields.y;
            break;
          }
        }
LABEL_51:
        sub_2213CDC(v5, isOnlyMultiSkillsItem);
      }
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isOnlyMultiSkillsItem, method);
      if ( !window )
        goto LABEL_51;
      v18 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ChoiceMultiWindowSize.fields.x;
      v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
      UIWidget__set_width(window, v19, 0);
      v5 = this->fields.window;
      if ( !v5 )
        goto LABEL_51;
      p_y = &EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ChoiceMultiWindowSize.fields.y;
      break;
    default:
      if ( !v8 )
        j_il2cpp_runtime_class_init_0(EventRewardAnotherPayConfirmDialog_TypeInfo, isOnlyMultiSkillsItem, method);
      if ( !window )
        goto LABEL_51;
      v16 = EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ConfirmWindowSize.fields.x;
      v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
      UIWidget__set_width(window, v17, 0);
      v5 = this->fields.window;
      if ( !v5 )
        goto LABEL_51;
      p_y = &EventRewardAnotherPayConfirmDialog_TypeInfo->static_fields->ConfirmWindowSize.fields.y;
      break;
  }
  if ( *p_y == INFINITY )
    v20 = 0x80000000;
  else
    v20 = (int)*p_y;
  UIWidget__set_height(v5, v20, 0);
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
  if ( (byte_596AAD1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596AAD1 = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
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
    sub_2213CDC(this, 0);
  return ent->fields.eventId == this->fields.eventId && ent->fields.commonReleaseId > 0;
}