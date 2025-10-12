void CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B8A9 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3B8A9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CommandCardExceedConfirmDialog__CallOnRequest(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUseCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int____o *onRequest; // x20
  CGThumbnailListItem_o *p_onRequest; // x0

  onRequest = this->fields.onRequest;
  if ( onRequest )
  {
    p_onRequest = (CGThumbnailListItem_o *)&this->fields.onRequest;
    p_onRequest->klass = 0;
    sub_1C32BC4(p_onRequest, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, System_Int32_array *, intptr_t))onRequest->fields.invoke_impl)(
      onRequest->fields.method_code,
      itemUseCount,
      onRequest->fields.method);
  }
}


void CommandCardExceedConfirmDialog__ChangeUseItemValue(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v4; // w0
  UnityEngine_Object_o *sliderWithButton2; // x21
  int32_t v6; // w20
  const MethodInfo *v7; // x2
  int32_t v8; // w0
  int32_t v9; // w20
  const MethodInfo *v10; // x2

  if ( (byte_4C3B8A2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B8A2 = 1;
  }
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_11;
  v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  v6 = v4;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(sliderWithButton2, 0, 0) )
  {
    v8 = 0;
    goto LABEL_10;
  }
  sliderWithButton = this->fields.sliderWithButton2;
  if ( !sliderWithButton )
LABEL_11:
    sub_1C32E7C(sliderWithButton);
  v8 = UISliderWithButton__sliderValueChange(sliderWithButton, 0);
LABEL_10:
  v9 = v8 + v6;
  CommandCardExceedConfirmDialog__SetCommandCard(this, v9, v7);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v9, v10);
}


void CommandCardExceedConfirmDialog__DisplayCommandCards(
        CommandCardExceedConfirmDialog_o *this,
        CombineCommandCardComponent_o *previousCard,
        CombineCommandCardComponent_o *afterCard,
        BattleCommandData_o *data,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  CommandCardExceedConfirmDialog_o *v11; // x20
  BattleCommandData_o *v12; // x23
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x6

  v11 = this;
  if ( (byte_4C3B8A8 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1C32C20(&BattleCommandData_TypeInfo);
    byte_4C3B8A8 = 1;
  }
  if ( !previousCard
    || (CombineCommandCardComponent__DispCommandCard(
          previousCard,
          data,
          v11->fields.userCommandCodeId,
          v11->fields.nowCommandCardParam,
          0,
          0,
          v6),
        v12 = (BattleCommandData_o *)sub_1C32E6C(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_46475288(v12, data, 0),
        this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetAfterCommandCardParam(
                                                     v11,
                                                     itemUseCount,
                                                     v13),
        !v12)
    || (v12->fields.commandCardParam = (int)this, !afterCard) )
  {
    sub_1C32E7C(this);
  }
  CombineCommandCardComponent__DispCommandCard(afterCard, v12, v11->fields.userCommandCodeId, (int32_t)this, 0, 0, v14);
}


void CommandCardExceedConfirmDialog__EndOpen(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t CommandCardExceedConfirmDialog__GetAfterCommandCardParam(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v4; // x8

  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_5;
  if ( !LODWORD(exceedItemEntities->max_length) )
    sub_1C32E84(this);
  v4 = exceedItemEntities->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1C32E7C(this);
  return this->fields.nowCommandCardParam + v4->fields.value * itemUseCount;
}


System_Int32_array *CommandCardExceedConfirmDialog__GetItemUsableCounts(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v2; // x19
  struct ItemEntity_array *exceedItemEntities; // x8
  __int64 v4; // x20
  struct ItemEntity_array *v5; // x8
  UserItemMaster_o *v6; // x21
  int v7; // w23
  struct ItemEntity_array *v8; // x8
  __int64 v9; // x26
  ItemEntity_o *v10; // x8
  struct ItemEntity_array *v11; // x9
  il2cpp_array_size_t max_length; // x8
  ItemEntity_o *v13; // x9
  int m_CancellationTokenSource_high; // w9

  v2 = this;
  if ( (byte_4C3B8A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3B8A5 = 1;
  }
  exceedItemEntities = v2->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_29;
  v4 = sub_1C32CC8(int___TypeInfo, LODWORD(exceedItemEntities->max_length));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
  v5 = v2->fields.exceedItemEntities;
  if ( !v5 )
    goto LABEL_29;
  if ( SLODWORD(v5->max_length) >= 1 )
  {
    v6 = (UserItemMaster_o *)this;
    v7 = 0;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      this = (CommandCardExceedConfirmDialog_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (CommandCardExceedConfirmDialog_o *)NetworkManager_TypeInfo;
      }
      v8 = v2->fields.exceedItemEntities;
      if ( !v8 )
        break;
      if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
        goto LABEL_30;
      v9 = v7;
      v10 = v8->m_Items[v7];
      if ( !v10 )
        break;
      if ( !v6 )
        break;
      this = (CommandCardExceedConfirmDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                   v6,
                                                   (int64_t)this->fields.afterCommandCard->fields.facetex,
                                                   v10->fields.id,
                                                   0);
      if ( !this )
        break;
      v11 = v2->fields.exceedItemEntities;
      if ( !v11 )
        break;
      max_length = v11->max_length;
      if ( v7 >= (unsigned int)max_length )
        goto LABEL_30;
      v13 = v11->m_Items[v7];
      if ( !v13 )
        break;
      m_CancellationTokenSource_high = (v2->fields.constantMaxStatus - v2->fields.nowCommandCardParam)
                                     / v13->fields.value;
      if ( SHIDWORD(this->fields.m_CancellationTokenSource) < m_CancellationTokenSource_high )
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v4 )
        break;
      if ( (unsigned int)v7 >= *(_DWORD *)(v4 + 24) )
LABEL_30:
        sub_1C32E84(this);
      ++v7;
      *(_DWORD *)(v4 + 4 * v9 + 32) = m_CancellationTokenSource_high;
      if ( v7 >= (int)max_length )
        return (System_Int32_array *)v4;
    }
LABEL_29:
    sub_1C32E7C(this);
  }
  return (System_Int32_array *)v4;
}


System_String_o *CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4C3B8A0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3633/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/);
    sub_1C32C20(&StringLiteral_3626/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/);
    byte_4C3B8A0 = 1;
  }
  if ( isOk )
    v4 = (System_String_o **)&StringLiteral_3626/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  else
    v4 = (System_String_o **)&StringLiteral_3633/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v4;
}


int32_t CommandCardExceedConfirmDialog__GetNowCommandCardParam(
        CommandCardExceedConfirmDialog_o *this,
        UserServantCommandCardEntity_o *entity,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *commandCardParam; // x8

  if ( !entity )
    return 0;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  if ( LODWORD(commandCardParam->max_length) <= index )
    sub_1C32E84(this);
  return commandCardParam->m_Items[index];
}


int32_t CommandCardExceedConfirmDialog__GetRequiredQp(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  int32_t nowCommandCardParam; // w21
  int32_t v4; // w19
  int32_t v6; // w22
  __int64 UseQp; // x0
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v9; // x8

  if ( itemUseCount < 1 )
    return 0;
  nowCommandCardParam = this->fields.nowCommandCardParam;
  v4 = itemUseCount;
  v6 = 0;
  do
  {
    UseQp = CommandCardExceedConfirmDialog__GetUseQp(this, nowCommandCardParam, method);
    exceedItemEntities = this->fields.exceedItemEntities;
    if ( !exceedItemEntities )
      goto LABEL_10;
    if ( !LODWORD(exceedItemEntities->max_length) )
      sub_1C32E84(UseQp);
    v9 = exceedItemEntities->m_Items[0];
    if ( !v9 )
LABEL_10:
      sub_1C32E7C(UseQp);
    v6 += UseQp;
    --v4;
    nowCommandCardParam += v9->fields.value;
  }
  while ( v4 );
  return v6;
}


System_String_o *CommandCardExceedConfirmDialog__GetRequiredQpText(
        CommandCardExceedConfirmDialog_o *this,
        int32_t requiredQp,
        bool isOk,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4C3B89F & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3628/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/);
    byte_4C3B89F = 1;
  }
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isOk )
      return LocalizationManager__GetNumberFormat(requiredQp, 0);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOk )
      return LocalizationManager__GetNumberFormat(requiredQp, 0);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3628/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0);
  return System_String__Format(v7, NumberFormat, 0);
}


int32_t CommandCardExceedConfirmDialog__GetUseQp(
        CommandCardExceedConfirmDialog_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct CommandCardRankParamEntity_array *beyondRankParamEntities; // x8
  int max_length; // w9
  int v5; // w10
  int32_t v6; // w12
  CommandCardRankParamEntity_o *v7; // x11
  int32_t rankMaxParam; // w12

  beyondRankParamEntities = this->fields.beyondRankParamEntities;
  if ( !beyondRankParamEntities )
LABEL_14:
    sub_1C32E7C(this);
  max_length = beyondRankParamEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C32E84(this);
    v7 = beyondRankParamEntities->m_Items[v5];
    if ( v6 <= param )
      break;
    if ( !v7 )
      goto LABEL_14;
LABEL_11:
    ++v5;
    v6 = v7->fields.rankMaxParam + 1;
    if ( max_length == v5 )
      return 0;
  }
  if ( !v7 )
    goto LABEL_14;
  rankMaxParam = v7->fields.rankMaxParam;
  if ( rankMaxParam < param && rankMaxParam != -1 )
    goto LABEL_11;
  return v7->fields.useQp;
}


void CommandCardExceedConfirmDialog__OnClickCancel(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C3B8A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    byte_4C3B8A4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void CommandCardExceedConfirmDialog__OnClickDecide(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UISliderWithButton_o *v5; // x0
  UISliderWithButton_o *v6; // x20
  UnityEngine_Object_o *sliderWithButton2; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4C3B8A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B8A3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (UISliderWithButton_o *)sub_1C32CC8(int___TypeInfo, 2);
    if ( this->fields.sliderWithButton )
    {
      v6 = v5;
      v5 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(this->fields.sliderWithButton, 0);
      if ( v6 )
      {
        if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
          goto LABEL_19;
        LODWORD(v6->fields.onDragFinished) = (_DWORD)v5;
        sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Implicit(sliderWithButton2, 0) )
        {
          v5 = 0;
LABEL_16:
          if ( LODWORD(v6->fields.m_CancellationTokenSource) > 1 )
          {
            HIDWORD(v6->fields.onDragFinished) = (_DWORD)v5;
            CommandCardExceedConfirmDialog__CallOnRequest(this, (System_Int32_array *)v6, v8);
            BaseDialog__Close((BaseDialog_o *)this, 0, 0);
            return;
          }
LABEL_19:
          sub_1C32E84(v5);
        }
        v5 = this->fields.sliderWithButton2;
        if ( v5 )
        {
          v5 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(v5, 0);
          goto LABEL_16;
        }
      }
    }
    sub_1C32E7C(v5);
  }
}


void CommandCardExceedConfirmDialog__OnSliderValueChange(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sliderWithButton2; // x20
  UISliderWithButton_o *sliderWithButton; // x0
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v6; // x8
  int32_t constantMaxStatus; // w20
  int32_t nowCommandCardParam; // w21
  int32_t value; // w22
  struct UISliderWithButton_o *v10; // x19

  if ( (byte_4C3B8A1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B8A1 = 1;
  }
  CommandCardExceedConfirmDialog__ChangeUseItemValue(this, method);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sliderWithButton = (UISliderWithButton_o *)UnityEngine_Object__op_Inequality(sliderWithButton2, 0, 0);
  if ( ((unsigned __int8)sliderWithButton & 1) != 0 )
  {
    exceedItemEntities = this->fields.exceedItemEntities;
    if ( !exceedItemEntities )
      goto LABEL_13;
    if ( LODWORD(exceedItemEntities->max_length) <= 1 )
      sub_1C32E84(sliderWithButton);
    v6 = exceedItemEntities->m_Items[1];
    if ( !v6
      || (sliderWithButton = this->fields.sliderWithButton) == 0
      || (constantMaxStatus = this->fields.constantMaxStatus,
          nowCommandCardParam = this->fields.nowCommandCardParam,
          value = v6->fields.value,
          v10 = this->fields.sliderWithButton2,
          sliderWithButton = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(sliderWithButton, 0),
          !v10) )
    {
LABEL_13:
      sub_1C32E7C(sliderWithButton);
    }
    v10->fields.maxConfigurableStep = (constantMaxStatus - nowCommandCardParam) / value - (_DWORD)sliderWithButton;
  }
}


void CommandCardExceedConfirmDialog__OnSliderValueChange2(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton2; // x0
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v5; // x8
  int32_t constantMaxStatus; // w20
  int32_t nowCommandCardParam; // w21
  int32_t value; // w22
  struct UISliderWithButton_o *sliderWithButton; // x19

  CommandCardExceedConfirmDialog__ChangeUseItemValue(this, method);
  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_7;
  if ( !LODWORD(exceedItemEntities->max_length) )
    sub_1C32E84(sliderWithButton2);
  v5 = exceedItemEntities->m_Items[0];
  if ( !v5
    || (sliderWithButton2 = this->fields.sliderWithButton2) == 0
    || (constantMaxStatus = this->fields.constantMaxStatus,
        nowCommandCardParam = this->fields.nowCommandCardParam,
        value = v5->fields.value,
        sliderWithButton = this->fields.sliderWithButton,
        sliderWithButton2 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(sliderWithButton2, 0),
        !sliderWithButton) )
  {
LABEL_7:
    sub_1C32E7C(sliderWithButton2);
  }
  sliderWithButton->fields.maxConfigurableStep = (constantMaxStatus - nowCommandCardParam) / value
                                               - (_DWORD)sliderWithButton2;
}


void CommandCardExceedConfirmDialog__Open(
        CommandCardExceedConfirmDialog_o *this,
        UserServantCommandCardEntity_o *userServantCommandCardEntity,
        BattleCommandData_array *previousCommandData,
        int64_t userCommandCodeId,
        System_Int32_array *exceedItemIds,
        int32_t cardIndex,
        System_Action_int____o *onRequest,
        const MethodInfo *method)
{
  System_Action_o *v14; // x26
  UnityEngine_Object_o *blackoutBoardBase; // x26
  __int64 Master_object; // x0
  UnityEngine_Object_o *blackoutBoardBase2; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UnityEngine_GameObject_array *classOnlyObjects; // x26
  int max_length; // w8
  unsigned int v22; // w20
  int64_t v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct ItemEntity_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  il2cpp_array_size_t v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x25
  __int64 v31; // x27
  __int64 v32; // x29
  unsigned int *exceedItemEntities; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x26
  __int64 v37; // x9
  Il2CppObject *MasterData_object; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Int32_array *commandCardParam; // x8
  int32_t v42; // w1
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  BalanceConfig_c *v47; // x0
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  System_Int32_array *v50; // x20
  int32_t v51; // w21
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v59; // x21
  UnityEngine_Object_o *sliderWithButton2; // x20
  struct UISliderWithButton_o *v61; // x8
  System_Collections_Generic_List_EventDelegate__o *v62; // x20
  EventDelegate_Callback_o *v63; // x21
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v66; // x21
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v68; // x20
  EventDelegate_Callback_o *v69; // x21
  __int64 v70; // x0
  UserServantCommandCardEntity_o *v72; // [xsp+8h] [xbp-68h]

  if ( (byte_4C3B89B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_EndOpen__);
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange2__);
    sub_1C32C20(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&ItemEntity___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B89B = 1;
  }
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0, 0);
  blackoutBoardBase = (UnityEngine_Object_o *)this->fields.blackoutBoardBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardBase, 0, 0) )
  {
    Master_object = (__int64)this->fields.blackoutBoardBase;
    if ( !Master_object )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  blackoutBoardBase2 = (UnityEngine_Object_o *)this->fields.blackoutBoardBase2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Inequality(blackoutBoardBase2, 0, 0);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)this->fields.blackoutBoardBase2;
    if ( !Master_object )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  classOnlyObjects = this->fields.classOnlyObjects;
  if ( !classOnlyObjects )
    goto LABEL_62;
  max_length = classOnlyObjects->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( v22 < max_length )
    {
      Master_object = (__int64)classOnlyObjects->m_Items[v22];
      if ( !Master_object )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      max_length = classOnlyObjects->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_19;
    }
LABEL_63:
    sub_1C32E84(Master_object);
  }
LABEL_19:
  if ( !this->fields.classOnlyLabels )
    goto LABEL_62;
  v72 = userServantCommandCardEntity;
  v23 = userCommandCodeId;
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onRequest, (int32_t)onRequest, v18, v19);
  this->fields.previousCommandDataList = previousCommandData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.previousCommandDataList, (int32_t)previousCommandData, v24, v25);
  if ( !exceedItemIds )
    goto LABEL_62;
  v26 = (struct ItemEntity_array *)sub_1C32CC8(ItemEntity___TypeInfo, LODWORD(exceedItemIds->max_length));
  this->fields.exceedItemEntities = v26;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exceedItemEntities, (int32_t)v26, v27, v28);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
  v29 = exceedItemIds->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v31 = 8;
    v32 = 8;
    while ( v31 - 8 < (unsigned __int64)(unsigned int)v29 )
    {
      if ( !v30 )
        goto LABEL_62;
      exceedItemEntities = (unsigned int *)this->fields.exceedItemEntities;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 v30,
                                 *((_DWORD *)&exceedItemIds->obj.klass + v31),
                                 (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !exceedItemEntities )
        goto LABEL_62;
      v36 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_1C32D5C(Master_object, *(_QWORD *)(*(_QWORD *)exceedItemEntities + 64LL));
        if ( !Master_object )
        {
          v70 = sub_1C32EA0(0);
          sub_1C32D48(v70, 0);
        }
      }
      if ( v31 - 8 >= (unsigned __int64)exceedItemEntities[6] )
        break;
      *(_QWORD *)&exceedItemEntities[v32] = v36;
      sub_1C32BC4((CGThumbnailListItem_o *)&exceedItemEntities[v32], v36, v34, v35);
      LODWORD(v29) = exceedItemIds->max_length;
      v37 = v31 - 7;
      ++v31;
      v32 += 2;
      if ( v37 >= (int)v29 )
        goto LABEL_32;
    }
    goto LABEL_63;
  }
LABEL_32:
  this->fields.userCommandCodeId = v23;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = (struct CommandCardRankParamMaster_o *)MasterData_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commandCardRankParamMaster, (int32_t)MasterData_object, v39, v40);
  if ( v72 && (commandCardParam = v72->fields.commandCardParam) != 0 )
  {
    if ( LODWORD(commandCardParam->max_length) <= cardIndex )
      goto LABEL_63;
    v42 = commandCardParam->m_Items[cardIndex];
  }
  else
  {
    v42 = 0;
  }
  Master_object = (__int64)this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = v42;
  if ( !Master_object )
    goto LABEL_62;
  Master_object = CommandCardRankParamMaster__GetParamRank((CommandCardRankParamMaster_o *)Master_object, v42, 0);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = Master_object;
  if ( !commandCardRankParamMaster )
    goto LABEL_62;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(commandCardRankParamMaster, Master_object, 0);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.beyondRankParamEntities, (int32_t)BeyondEntities, v45, v46);
  v47 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v47->static_fields->CommandCardParamUpMax;
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_62;
  this->fields.userQp = *(_QWORD *)(Master_object + 96);
  Master_object = (__int64)CommandCardExceedConfirmDialog__GetItemUsableCounts(this, v48);
  if ( !Master_object )
    goto LABEL_62;
  v50 = (System_Int32_array *)Master_object;
  v51 = *(int *)(Master_object + 24) < 2
     || System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)Master_object, 0) < 2;
  CommandCardExceedConfirmDialog__UpdateDisplay(this, v49);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, v50, v52);
  CommandCardExceedConfirmDialog__SetCommandCard(this, v51, v53);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, v50, v54);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v51, v55);
  CommandCardExceedConfirmDialog__SetUseItemIcon(this, v56);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_62;
  onChange = sliderWithButton->fields.onChange;
  v59 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v59,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49215508(onChange, v59, 0);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Inequality(sliderWithButton2, 0, 0);
  if ( (Master_object & 1) != 0 )
  {
    v61 = this->fields.sliderWithButton2;
    if ( !v61 )
      goto LABEL_62;
    v62 = v61->fields.onChange;
    v63 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v63,
      (Il2CppObject *)this,
      Method_CommandCardExceedConfirmDialog_OnSliderValueChange2__,
      0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    Master_object = (__int64)EventDelegate__Set_49215508(v62, v63, 0);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_62;
  onClick = decideButton->fields.onClick;
  v66 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v66,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickDecide__,
    0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  Master_object = (__int64)EventDelegate__Set_49215508(onClick, v66, 0);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_62:
    sub_1C32E7C(Master_object);
  v68 = cancelButton->fields.onClick;
  v69 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v69,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickCancel__,
    0);
  EventDelegate__Set_49215508(v68, v69, 0);
}


void CommandCardExceedConfirmDialog__SetButtonState(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  __int64 v4; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton )
    sub_1C32E7C(0);
  if ( isOk )
    v4 = 0;
  else
    v4 = 3;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))decideButton->klass->vtable._14_SetState.methodPtr)(
    decideButton,
    v4,
    1,
    decideButton->klass->vtable._14_SetState.method);
}


void CommandCardExceedConfirmDialog__SetCommandCard(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct BattleCommandData_array *previousCommandDataList; // x8
  int max_length; // w9
  struct CombineCommandCardComponent_array *previousCommandCard2Sprites; // x8
  __int64 v9; // x21
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v11; // x9
  struct CombineCommandCardComponent_array *afterCommandCard2Sprites; // x10
  struct BattleCommandData_array *v13; // x11

  previousCommandDataList = this->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_14;
  max_length = previousCommandDataList->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
LABEL_16:
      sub_1C32E84(this);
    CommandCardExceedConfirmDialog__DisplayCommandCards(
      this,
      this->fields.previousCommandCard,
      this->fields.afterCommandCard,
      previousCommandDataList->m_Items[0],
      itemUseCount,
      v3);
    return;
  }
  previousCommandCard2Sprites = this->fields.previousCommandCard2Sprites;
  if ( !previousCommandCard2Sprites )
LABEL_14:
    sub_1C32E7C(this);
  v9 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(previousCommandCard2Sprites->max_length);
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)max_length_low )
      break;
    if ( v11 >= max_length_low )
      goto LABEL_16;
    afterCommandCard2Sprites = this->fields.afterCommandCard2Sprites;
    if ( afterCommandCard2Sprites )
    {
      if ( v11 >= LODWORD(afterCommandCard2Sprites->max_length) )
        goto LABEL_16;
      v13 = this->fields.previousCommandDataList;
      if ( v13 )
      {
        if ( v11 >= LODWORD(v13->max_length) )
          goto LABEL_16;
        CommandCardExceedConfirmDialog__DisplayCommandCards(
          this,
          *((CombineCommandCardComponent_o **)&previousCommandCard2Sprites->obj.klass + v9),
          *((CombineCommandCardComponent_o **)&afterCommandCard2Sprites->obj.klass + v9),
          *((BattleCommandData_o **)&v13->obj.klass + v9),
          itemUseCount,
          v3);
        previousCommandCard2Sprites = this->fields.previousCommandCard2Sprites;
        ++v9;
        if ( previousCommandCard2Sprites )
          continue;
      }
    }
    goto LABEL_14;
  }
}


void CommandCardExceedConfirmDialog__SetSliderWithButton(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUsableCounts,
        const MethodInfo *method)
{
  int max_length; // w8
  UISliderWithButton_o *sliderWithButton; // x22
  int32_t v6; // w21
  CommandCardExceedConfirmDialog_o **v7; // x20
  int32_t v8; // w3
  UISliderWithButton_o *v9; // x21
  int32_t v10; // w22
  int32_t v11; // w3

  if ( !itemUsableCounts )
    goto LABEL_39;
  max_length = itemUsableCounts->max_length;
  if ( !max_length )
    goto LABEL_38;
  sliderWithButton = this->fields.sliderWithButton;
  v6 = itemUsableCounts->m_Items[0];
  v7 = (CommandCardExceedConfirmDialog_o **)this;
  if ( max_length < 2 )
  {
    if ( !sliderWithButton )
      goto LABEL_39;
    UISliderWithButton__init(this->fields.sliderWithButton, v6, 0, 1, 0);
    if ( LODWORD(itemUsableCounts->max_length) )
    {
      this = v7[39];
      if ( this )
      {
        if ( itemUsableCounts->m_Items[0] < 2 )
        {
          UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0);
          return;
        }
        goto LABEL_37;
      }
LABEL_39:
      sub_1C32E7C(this);
    }
    goto LABEL_38;
  }
  this = (CommandCardExceedConfirmDialog_o *)System_Linq_Enumerable__Sum(
                                               (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                               0);
  if ( (_DWORD)this == 1 )
  {
    if ( !LODWORD(itemUsableCounts->max_length) )
      goto LABEL_38;
    v8 = itemUsableCounts->m_Items[0] == 1;
  }
  else
  {
    v8 = 0;
  }
  if ( !sliderWithButton )
    goto LABEL_39;
  UISliderWithButton__init(sliderWithButton, v6, 0, v8, 0);
  if ( LODWORD(itemUsableCounts->max_length) <= 1 )
    goto LABEL_38;
  v9 = (UISliderWithButton_o *)v7[40];
  v10 = itemUsableCounts->m_Items[1];
  this = (CommandCardExceedConfirmDialog_o *)System_Linq_Enumerable__Sum(
                                               (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                               0);
  if ( (_DWORD)this == 1 )
  {
    if ( LODWORD(itemUsableCounts->max_length) <= 1 )
      goto LABEL_38;
    v11 = itemUsableCounts->m_Items[1] == 1;
  }
  else
  {
    v11 = 0;
  }
  if ( !v9 )
    goto LABEL_39;
  UISliderWithButton__init(v9, v10, 0, v11, 0);
  if ( !LODWORD(itemUsableCounts->max_length) )
LABEL_38:
    sub_1C32E84(this);
  if ( itemUsableCounts->m_Items[0] >= 1
    && System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts, 0) >= 2 )
  {
    this = v7[39];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0);
  }
  else
  {
    this = v7[39];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0);
    if ( !LODWORD(itemUsableCounts->max_length) )
      goto LABEL_38;
    this = v7[41];
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, itemUsableCounts->m_Items[0] == 0, 0);
  }
  if ( LODWORD(itemUsableCounts->max_length) <= 1 )
    goto LABEL_38;
  if ( itemUsableCounts->m_Items[1] < 1
    || System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts, 0) < 2 )
  {
    this = v7[40];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0);
    if ( LODWORD(itemUsableCounts->max_length) > 1 )
    {
      this = v7[43];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, itemUsableCounts->m_Items[1] == 0, 0);
        return;
      }
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  this = v7[40];
  if ( !this )
    goto LABEL_39;
LABEL_37:
  UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0);
}


void CommandCardExceedConfirmDialog__SetStaticLabels(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUsableCounts,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x1
  UILabel_o *descriptionLabel; // x22
  struct UILabel_o *v10; // x21
  System_String_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  bool v13; // w1
  UnityEngine_Object_o *useItemLabel; // x21
  UILabel_o *v15; // x21
  UnityEngine_Object_o *useItemLabel2; // x21
  UILabel_o *v17; // x21
  struct ItemEntity_array *exceedItemEntities; // x8
  int max_length; // w8
  System_String_o **v20; // x9
  UILabel_o *itemNameLabel; // x20
  System_String_o *v22; // x21
  struct ItemEntity_array *v23; // x8
  ItemEntity_o *v24; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  struct UILabel_array *classOnlyLabels; // x20
  int v28; // w8
  unsigned int v29; // w21
  UILabel_o *v30; // x19

  if ( (byte_4C3B89C & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_3631/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/);
    sub_1C32C20(&StringLiteral_3621/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_ITEM"*/);
    sub_1C32C20(&StringLiteral_3620/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_3695/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/);
    sub_1C32C20(&StringLiteral_3634/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_3632/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM_TOTAL"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_3619/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_1C32C20(&StringLiteral_3635/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_3622/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    byte_4C3B89C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3635/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_Linq_Enumerable__Sum(
                                       (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                       0);
  if ( (int)IsNullOrEmpty <= 1 )
  {
    v7 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3634/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0);
    v7 = IsNullOrEmpty;
  }
  if ( !itemUsableCounts )
    goto LABEL_66;
  if ( SLODWORD(itemUsableCounts->max_length) <= 1 )
  {
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3620/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_DESCRIPTION"*/, 0);
  }
  descriptionLabel = this->fields.descriptionLabel;
  IsNullOrEmpty = System_String__Concat_63518544(v7, v8, 0);
  if ( !descriptionLabel )
    goto LABEL_66;
  UILabel__set_text(descriptionLabel, IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v7, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v10 = this->fields.descriptionLabel;
    if ( !v10 )
      goto LABEL_66;
    IsNullOrEmpty = v10->fields.mText;
    if ( !IsNullOrEmpty )
      goto LABEL_66;
    v11 = System_String__Replace_63565092(
            IsNullOrEmpty,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    UILabel__set_text(v10, v11, 0);
  }
  IsNullOrEmpty = (System_String_o *)this->fields.descriptionLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_Linq_Enumerable__Sum(
                                       (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                       0);
  v13 = (int)IsNullOrEmpty > 1 || SLODWORD(itemUsableCounts->max_length) > 1;
  if ( !gameObject )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(gameObject, v13, 0);
  useItemLabel = (UnityEngine_Object_o *)this->fields.useItemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useItemLabel, 0, 0) )
  {
    v15 = this->fields.useItemLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3695/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, 0);
    if ( !v15 )
      goto LABEL_66;
    UILabel__set_text(v15, IsNullOrEmpty, 0);
  }
  useItemLabel2 = (UnityEngine_Object_o *)this->fields.useItemLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(useItemLabel2, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v17 = this->fields.useItemLabel2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3695/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, 0);
    if ( !v17 )
      goto LABEL_66;
    UILabel__set_text(v17, IsNullOrEmpty, 0);
  }
  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_66;
  if ( !LODWORD(exceedItemEntities->max_length) )
    goto LABEL_67;
  if ( exceedItemEntities->m_Items[0] )
  {
    max_length = itemUsableCounts->max_length;
    v20 = (System_String_o **)&StringLiteral_3632/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM_TOTAL"*/;
    itemNameLabel = this->fields.itemNameLabel;
    if ( max_length <= 1 )
      v20 = (System_String_o **)&StringLiteral_3631/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/;
    v22 = *v20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get(v22, 0);
    v23 = this->fields.exceedItemEntities;
    if ( v23 )
    {
      if ( !LODWORD(v23->max_length) )
        goto LABEL_67;
      v24 = v23->m_Items[0];
      if ( v24 )
      {
        IsNullOrEmpty = System_String__Format(IsNullOrEmpty, (Il2CppObject *)v24->fields.name, 0);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, IsNullOrEmpty, 0);
          goto LABEL_53;
        }
      }
    }
LABEL_66:
    sub_1C32E7C(IsNullOrEmpty);
  }
LABEL_53:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_66;
  UILabel__set_text(decideButtonLabel, IsNullOrEmpty, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3619/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_66;
  UILabel__set_text(cancelButtonLabel, IsNullOrEmpty, 0);
  classOnlyLabels = this->fields.classOnlyLabels;
  if ( !classOnlyLabels )
    goto LABEL_66;
  v28 = classOnlyLabels->max_length;
  if ( v28 >= 1 )
  {
    v29 = 0;
    while ( v29 < v28 )
    {
      v30 = classOnlyLabels->m_Items[v29];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3621/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_ITEM"*/, 0);
      if ( !v30 )
        goto LABEL_66;
      UILabel__set_text(v30, IsNullOrEmpty, 0);
      v28 = classOnlyLabels->max_length;
      if ( (int)++v29 >= v28 )
        return;
    }
LABEL_67:
    sub_1C32E84(IsNullOrEmpty);
  }
}


void CommandCardExceedConfirmDialog__SetUseItemIcon(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v2; // x19
  struct ItemEntity_array *exceedItemEntities; // x8
  UnityEngine_Object_o *useItemIcon; // x20
  struct ItemEntity_array *v5; // x8
  struct ItemIconComponent_o *v6; // x8
  UnityEngine_Object_o *iconSprite; // x20
  struct ItemIconComponent_o *v8; // x8
  UnityEngine_Object_o *useItemIcon2; // x20
  struct ItemEntity_array *v10; // x8
  struct ItemIconComponent_o *v11; // x8
  UnityEngine_Object_o *v12; // x20
  struct ItemIconComponent_o *v13; // x8
  struct ItemEntity_array *v14; // x8
  __int64 v15; // x23
  unsigned __int64 max_length_low; // x11
  unsigned __int64 v17; // x10
  struct UnityEngine_GameObject_array *classOnlyObjects; // x9
  unsigned __int64 v19; // x12
  __int64 v20; // x11
  UnityEngine_GameObject_o *v21; // x20

  v2 = this;
  if ( (byte_4C3B89E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)sub_1C32C20(&StringLiteral_24628/*"validClassIds"*/);
    byte_4C3B89E = 1;
  }
  exceedItemEntities = v2->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_43;
  if ( SLODWORD(exceedItemEntities->max_length) < 2 )
    goto LABEL_31;
  useItemIcon = (UnityEngine_Object_o *)v2->fields.useItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(useItemIcon, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.exceedItemEntities;
    if ( !v5 )
      goto LABEL_43;
    if ( !LODWORD(v5->max_length) )
      goto LABEL_45;
    this = (CommandCardExceedConfirmDialog_o *)v2->fields.useItemIcon;
    if ( !this )
      goto LABEL_43;
    ItemIconComponent__SetItem_40818828((ItemIconComponent_o *)this, v5->m_Items[0], -1, 1, 0);
    v6 = v2->fields.useItemIcon;
    if ( !v6 )
      goto LABEL_43;
    iconSprite = (UnityEngine_Object_o *)v6->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(iconSprite, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v2->fields.useItemIcon;
      if ( !v8 )
        goto LABEL_43;
      this = (CommandCardExceedConfirmDialog_o *)v8->fields.iconSprite;
      if ( !this )
        goto LABEL_43;
      ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        1,
        this->klass[2]._1.interopData);
    }
  }
  useItemIcon2 = (UnityEngine_Object_o *)v2->fields.useItemIcon2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(useItemIcon2, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_31;
  v10 = v2->fields.exceedItemEntities;
  if ( !v10 )
    goto LABEL_43;
  if ( LODWORD(v10->max_length) <= 1 )
LABEL_45:
    sub_1C32E84(this);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.useItemIcon2;
  if ( !this )
    goto LABEL_43;
  ItemIconComponent__SetItem_40818828((ItemIconComponent_o *)this, v10->m_Items[1], -1, 1, 0);
  v11 = v2->fields.useItemIcon2;
  if ( !v11 )
    goto LABEL_43;
  v12 = (UnityEngine_Object_o *)v11->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v2->fields.useItemIcon2;
    if ( v13 )
    {
      this = (CommandCardExceedConfirmDialog_o *)v13->fields.iconSprite;
      if ( this )
      {
        this = (CommandCardExceedConfirmDialog_o *)((__int64 (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, void *))this->klass[2]._1.typeMetadataHandle)(
                                                     this,
                                                     1,
                                                     this->klass[2]._1.interopData);
        goto LABEL_31;
      }
    }
LABEL_43:
    sub_1C32E7C(this);
  }
LABEL_31:
  v14 = v2->fields.exceedItemEntities;
  if ( !v14 )
    goto LABEL_43;
  v15 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(v14->max_length);
    v17 = v15 - 4;
    if ( v15 - 4 >= (int)max_length_low )
      break;
    classOnlyObjects = v2->fields.classOnlyObjects;
    if ( !classOnlyObjects )
      goto LABEL_43;
    v19 = LODWORD(classOnlyObjects->max_length);
    if ( (__int64)v17 >= (int)v19 )
      break;
    if ( v17 >= max_length_low )
      goto LABEL_45;
    v20 = *((_QWORD *)&v14->obj.klass + v15);
    if ( v20 )
    {
      if ( v17 >= v19 )
        goto LABEL_45;
      this = *(CommandCardExceedConfirmDialog_o **)(v20 + 104);
      if ( !this )
        goto LABEL_43;
      v21 = (UnityEngine_GameObject_o *)*((_QWORD *)&classOnlyObjects->obj.klass + v15);
      this = (CommandCardExceedConfirmDialog_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                   (Il2CppObject *)StringLiteral_24628/*"validClassIds"*/,
                                                   (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( !v21 )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive(v21, (unsigned __int8)this & 1, 0);
      v14 = v2->fields.exceedItemEntities;
    }
    ++v15;
    if ( !v14 )
      goto LABEL_43;
  }
}


void CommandCardExceedConfirmDialog__SetValueLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v4; // x20
  struct BattleCommandData_array *previousCommandDataList; // x8
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v7; // x22
  Il2CppObject *v8; // x23
  Il2CppObject *v9; // x0
  UILabel_o *afterStatusLabel2Sprites; // x21
  UILabel_o *previousStatusLabel2Sprites; // x21
  System_String_o *v12; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  const MethodInfo *v16; // x2
  int32_t v17; // w0
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *useItemText; // x21
  UILabel_o *v21; // x21
  CommandCardExceedConfirmDialog_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *useItemText2; // x21
  UILabel_o *v31; // x21
  CommandCardExceedConfirmDialog_o *v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  UnityEngine_Object_o *blackoutBoardText; // x21
  UILabel_o *v41; // x21
  System_String_o *v42; // x22
  long double inited; // q0
  _QWORD *v44; // x23
  __int64 v45; // x8
  __int64 v46; // x0
  __int64 v47; // x0
  UnityEngine_Object_o *blackoutBoardText2; // x21
  UILabel_o *v49; // x21
  System_String_o *v50; // x22
  long double v51; // q0
  _QWORD *v52; // x23
  __int64 v53; // x8
  __int64 v54; // x0
  __int64 v55; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v57; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x22
  int32_t v68; // w21
  UILabel_o *requiredQpText; // x22
  CommandCardExceedConfirmDialog_o *v70; // x0
  const MethodInfo *v71; // x3
  UILabel_o *userQpLabel; // x22
  UILabel_o *userQpText; // x22
  int64_t v74; // x23
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v76; // x0
  const MethodInfo *v77; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v80; // x1
  int32_t v81; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v82; // [xsp+8h] [xbp-58h] BYREF
  int32_t v83; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4C3B89D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_object___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3623/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_1C32C20(&StringLiteral_3627/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/);
    sub_1C32C20(&StringLiteral_3625/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/);
    sub_1C32C20(&StringLiteral_3629/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3630/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/);
    this = (CommandCardExceedConfirmDialog_o *)sub_1C32C20(&StringLiteral_3624/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_4C3B89D = 1;
  }
  previousCommandDataList = v4->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_76;
  if ( SLODWORD(previousCommandDataList->max_length) >= 2 )
  {
    previousStatusLabel2Sprites = v4->fields.previousStatusLabel2Sprites;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3624/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0);
    v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_63559836(v12, NumberFormat, v14, 0);
    if ( !previousStatusLabel2Sprites )
      goto LABEL_76;
    UILabel__set_text(previousStatusLabel2Sprites, (System_String_o *)this, 0);
    afterStatusLabel2Sprites = v4->fields.afterStatusLabel2Sprites;
  }
  else
  {
    previousStatusLabel = v4->fields.previousStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3624/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
    v8 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0);
    v9 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_63559836(v7, v8, v9, 0);
    if ( !previousStatusLabel )
      goto LABEL_76;
    UILabel__set_text(previousStatusLabel, (System_String_o *)this, 0);
    afterStatusLabel2Sprites = v4->fields.afterStatusLabel;
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3623/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0);
  v17 = CommandCardExceedConfirmDialog__GetAfterCommandCardParam(v4, itemUseCount, v16);
  v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v17, 0);
  v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_63559836(v15, v18, v19, 0);
  if ( !afterStatusLabel2Sprites )
    goto LABEL_76;
  UILabel__set_text(afterStatusLabel2Sprites, (System_String_o *)this, 0);
  useItemText = (UnityEngine_Object_o *)v4->fields.useItemText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useItemText, 0, 0) )
  {
    v21 = v4->fields.useItemText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3625/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0);
    if ( !v4->fields.sliderWithButton )
      goto LABEL_76;
    v22 = this;
    v83 = UISliderWithButton__sliderValueChange(v4->fields.sliderWithButton, 0);
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v23, v24, v25, v26, v27, v28);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format((System_String_o *)v22, v29, 0);
    if ( !v21 )
      goto LABEL_76;
    UILabel__set_text(v21, (System_String_o *)this, 0);
  }
  useItemText2 = (UnityEngine_Object_o *)v4->fields.useItemText2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useItemText2, 0, 0) )
  {
    v31 = v4->fields.useItemText2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3625/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0);
    if ( !v4->fields.sliderWithButton2 )
      goto LABEL_76;
    v32 = this;
    v82 = UISliderWithButton__sliderValueChange(v4->fields.sliderWithButton2, 0);
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v33, v34, v35, v36, v37, v38);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format((System_String_o *)v32, v39, 0);
    if ( !v31 )
      goto LABEL_76;
    UILabel__set_text(v31, (System_String_o *)this, 0);
  }
  blackoutBoardText = (UnityEngine_Object_o *)v4->fields.blackoutBoardText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardText, 0, 0) )
  {
    v41 = v4->fields.blackoutBoardText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3629/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, 0);
    v44 = Method_System_Array_Empty_object___;
    v45 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v45 )
    {
      sub_1C83390(Method_System_Array_Empty_object___);
      v45 = v44[7];
    }
    v46 = *(_QWORD *)(v45 + 16);
    if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
      v46 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v46 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v46);
    v47 = *(_QWORD *)(v44[7] + 16LL);
    if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
      v47 = sub_1C83334(inited);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_63559972(
                                                 v42,
                                                 **(System_Object_array ***)(v47 + 184),
                                                 0);
    if ( !v41 )
      goto LABEL_76;
    UILabel__set_text(v41, (System_String_o *)this, 0);
  }
  blackoutBoardText2 = (UnityEngine_Object_o *)v4->fields.blackoutBoardText2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardText2, 0, 0) )
  {
    v49 = v4->fields.blackoutBoardText2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3629/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, 0);
    v52 = Method_System_Array_Empty_object___;
    v53 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v53 )
    {
      sub_1C83390(Method_System_Array_Empty_object___);
      v53 = v52[7];
    }
    v54 = *(_QWORD *)(v53 + 16);
    if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
      v54 = sub_1C83334(v51);
    if ( !*(_DWORD *)(v54 + 224) )
      v51 = j_il2cpp_runtime_class_init_0(v54);
    v55 = *(_QWORD *)(v52[7] + 16LL);
    if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
      v55 = sub_1C83334(v51);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_63559972(
                                                 v50,
                                                 **(System_Object_array ***)(v55 + 184),
                                                 0);
    if ( v49 )
    {
      UILabel__set_text(v49, (System_String_o *)this, 0);
      goto LABEL_60;
    }
LABEL_76:
    sub_1C32E7C(this);
  }
LABEL_60:
  itemCountLabel = v4->fields.itemCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3625/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0);
  v81 = itemUseCount;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v58, v59, v60, v61, v62, v63);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format(v57, v64, 0);
  if ( !itemCountLabel )
    goto LABEL_76;
  UILabel__set_text(itemCountLabel, (System_String_o *)this, 0);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(v4, itemUseCount, v65);
  requiredQpLabel = v4->fields.requiredQpLabel;
  v68 = RequiredQp;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3627/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0);
  if ( !requiredQpLabel )
    goto LABEL_76;
  UILabel__set_text(requiredQpLabel, (System_String_o *)this, 0);
  requiredQpText = v4->fields.requiredQpText;
  this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetRequiredQpText(
                                               v70,
                                               v68,
                                               v4->fields.userQp >= v68,
                                               v71);
  if ( !requiredQpText )
    goto LABEL_76;
  UILabel__set_text(requiredQpText, (System_String_o *)this, 0);
  userQpLabel = v4->fields.userQpLabel;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3630/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0);
  if ( !userQpLabel )
    goto LABEL_76;
  UILabel__set_text(userQpLabel, (System_String_o *)this, 0);
  userQpText = v4->fields.userQpText;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__GetNumberFormatLong(v4->fields.userQp, 0);
  if ( !userQpText )
    goto LABEL_76;
  v74 = v68;
  UILabel__set_text(userQpText, (System_String_o *)this, 0);
  messageLabel = v4->fields.messageLabel;
  MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(v76, v4->fields.userQp >= v74, v77);
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get(MessageLocalizationKey, 0);
  if ( !messageLabel )
    goto LABEL_76;
  UILabel__set_text(messageLabel, (System_String_o *)this, 0);
  this = (CommandCardExceedConfirmDialog_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_76;
  if ( v4->fields.userQp < v74 || itemUseCount <= 0 )
    v80 = 3;
  else
    v80 = 0;
  ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, __int64, Il2CppClass *))this->klass[1]._1.interopData)(
    this,
    v80,
    1,
    this->klass[1]._1.klass);
}


void CommandCardExceedConfirmDialog__UpdateDisplay(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v2; // x19
  struct BattleCommandData_array *previousCommandDataList; // x8
  int max_length; // w21
  UnityEngine_Object_o *bgSprite; // x20
  int32_t v6; // w1

  v2 = this;
  if ( (byte_4C3B8A7 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B8A7 = 1;
  }
  previousCommandDataList = v2->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_17;
  max_length = previousCommandDataList->max_length;
  bgSprite = (UnityEngine_Object_o *)v2->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    this = (CommandCardExceedConfirmDialog_o *)v2->fields.bgSprite;
    if ( !this )
      goto LABEL_17;
    if ( max_length <= 1 )
      v6 = 668;
    else
      v6 = 730;
    UIWidget__set_width((UIWidget_o *)this, v6, 0);
  }
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousBase;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterBase) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousBase2Sprite) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterBase2Sprite) == 0) )
  {
LABEL_17:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0);
}


UnityEngine_GameObject_o *CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3B8A6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B8A6 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}