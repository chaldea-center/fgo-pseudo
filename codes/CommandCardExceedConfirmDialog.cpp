void CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5974A9F & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5974A9F = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CommandCardExceedConfirmDialog__CallOnRequest(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUseCount,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int____o *onRequest; // x20

  onRequest = this->fields.onRequest;
  if ( onRequest )
  {
    this->fields.onRequest = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onRequest,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  __int64 v5; // x1
  UnityEngine_Object_o *sliderWithButton2; // x21
  int32_t v7; // w20
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  const MethodInfo *v10; // x2

  if ( (byte_5974A98 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A98 = 1;
  }
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_11;
  v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  v7 = v4;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Inequality(sliderWithButton2, 0, 0) )
  {
    v9 = 0;
    goto LABEL_10;
  }
  sliderWithButton = this->fields.sliderWithButton2;
  if ( !sliderWithButton )
LABEL_11:
    sub_2213CDC(sliderWithButton, method);
  v9 = UISliderWithButton__sliderValueChange(sliderWithButton, 0);
LABEL_10:
  CommandCardExceedConfirmDialog__SetCommandCard(this, v9 + v7, v8);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v9 + v7, v10);
}


void CommandCardExceedConfirmDialog__DisplayCommandCards(
        CommandCardExceedConfirmDialog_o *this,
        CombineCommandCardComponent_o *previousCard,
        CombineCommandCardComponent_o *afterCard,
        BattleCommandData_o *data,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v10; // x20
  BattleCommandData_o *v11; // x23
  const MethodInfo *v12; // x2

  v10 = this;
  if ( (byte_5974A9E & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_2213A60(&BattleCommandData_TypeInfo);
    byte_5974A9E = 1;
  }
  if ( !previousCard
    || (CombineCommandCardComponent__DispCommandCard(
          previousCard,
          data,
          v10->fields.userCommandCodeId,
          v10->fields.nowCommandCardParam,
          0,
          0,
          0),
        v11 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_53637512(v11, data, 0),
        this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetAfterCommandCardParam(
                                                     v10,
                                                     itemUseCount,
                                                     v12),
        !v11)
    || (v11->fields.commandCardParam = (int)this, !afterCard) )
  {
    sub_2213CDC(this, previousCard);
  }
  CombineCommandCardComponent__DispCommandCard(afterCard, v11, v10->fields.userCommandCodeId, (int32_t)this, 0, 0, 0);
}


void CommandCardExceedConfirmDialog__EndOpen(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CE4(this);
  v4 = exceedItemEntities->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_2213CDC(this, *(_QWORD *)&itemUseCount);
  return this->fields.nowCommandCardParam + v4->fields.value * itemUseCount;
}


System_Int32_array *CommandCardExceedConfirmDialog__GetItemUsableCounts(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v2; // x19
  struct ItemEntity_array *exceedItemEntities; // x8
  __int64 v4; // x1
  __int64 v5; // x20
  struct ItemEntity_array *v6; // x8
  UserItemMaster_o *v7; // x21
  int v8; // w23
  struct ItemEntity_array *v9; // x8
  __int64 v10; // x26
  ItemEntity_o *v11; // x8
  struct ItemEntity_array *v12; // x9
  il2cpp_array_size_t max_length; // x8
  ItemEntity_o *v14; // x9
  int m_CancellationTokenSource_high; // w9

  v2 = this;
  if ( (byte_5974A9B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_5974A9B = 1;
  }
  exceedItemEntities = v2->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_29;
  v5 = sub_2213B20(int___TypeInfo, LODWORD(exceedItemEntities->max_length));
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  this = (CommandCardExceedConfirmDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  v6 = v2->fields.exceedItemEntities;
  if ( !v6 )
    goto LABEL_29;
  if ( SLODWORD(v6->max_length) >= 1 )
  {
    v7 = (UserItemMaster_o *)this;
    v8 = 0;
    while ( 1 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      this = (CommandCardExceedConfirmDialog_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
        this = (CommandCardExceedConfirmDialog_o *)NetworkManager_TypeInfo;
      }
      v9 = v2->fields.exceedItemEntities;
      if ( !v9 )
        break;
      if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
        goto LABEL_30;
      v10 = v8;
      v11 = v9->m_Items[v8];
      if ( !v11 )
        break;
      if ( !v7 )
        break;
      this = (CommandCardExceedConfirmDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                   v7,
                                                   (int64_t)this->fields.afterCommandCard->fields.facetex,
                                                   v11->fields.id,
                                                   0);
      if ( !this )
        break;
      v12 = v2->fields.exceedItemEntities;
      if ( !v12 )
        break;
      max_length = v12->max_length;
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_30;
      v14 = v12->m_Items[v8];
      if ( !v14 )
        break;
      m_CancellationTokenSource_high = (v2->fields.constantMaxStatus - v2->fields.nowCommandCardParam)
                                     / v14->fields.value;
      if ( SHIDWORD(this->fields.m_CancellationTokenSource) < m_CancellationTokenSource_high )
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v5 )
        break;
      if ( (unsigned int)v8 >= *(_DWORD *)(v5 + 24) )
LABEL_30:
        sub_2213CE4(this);
      ++v8;
      *(_DWORD *)(v5 + 4 * v10 + 32) = m_CancellationTokenSource_high;
      if ( v8 >= (int)max_length )
        return (System_Int32_array *)v5;
    }
LABEL_29:
    sub_2213CDC(this, method);
  }
  return (System_Int32_array *)v5;
}


System_String_o *CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_5974A96 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3775/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/);
    sub_2213A60(&StringLiteral_3768/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/);
    byte_5974A96 = 1;
  }
  if ( isOk )
    v4 = (System_String_o **)&StringLiteral_3768/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  else
    v4 = (System_String_o **)&StringLiteral_3775/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
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
    sub_2213CE4(this);
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
  __int64 v8; // x1
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v10; // x8

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
      sub_2213CE4(UseQp);
    v10 = exceedItemEntities->m_Items[0];
    if ( !v10 )
LABEL_10:
      sub_2213CDC(UseQp, v8);
    --v4;
    v6 += UseQp;
    nowCommandCardParam += v10->fields.value;
  }
  while ( v4 );
  return v6;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CommandCardExceedConfirmDialog__GetRequiredQpText(
        CommandCardExceedConfirmDialog_o *this,
        int32_t requiredQp,
        bool isOk,
        const MethodInfo *method)
{
  int v6; // w8
  System_String_o *v8; // x20
  Il2CppObject *NumberFormat; // x1

  if ( (byte_5974A95 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3770/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/);
    byte_5974A95 = 1;
  }
  v6 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isOk )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    return LocalizationManager__GetNumberFormat(requiredQp, 0);
  }
  else
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3770/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0);
    return System_String__Format(v8, NumberFormat, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t CommandCardExceedConfirmDialog__GetUseQp(
        CommandCardExceedConfirmDialog_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct CommandCardRankParamEntity_array *beyondRankParamEntities; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v5; // x8
  int32_t v6; // w11
  __int64 v7; // x9
  CommandCardRankParamEntity_o **i; // x10
  CommandCardRankParamEntity_o *v9; // x12
  int32_t rankMaxParam; // w11

  beyondRankParamEntities = this->fields.beyondRankParamEntities;
  if ( !beyondRankParamEntities )
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&param);
  max_length = beyondRankParamEntities->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v5 = (unsigned int)max_length & ~((int)max_length >> 31);
  v6 = 0;
  v7 = (unsigned int)beyondRankParamEntities->max_length;
  for ( i = beyondRankParamEntities->m_Items; ; ++i )
  {
    if ( !v7 )
      sub_2213CE4(this);
    v9 = *i;
    if ( v6 <= param )
      break;
    if ( !v9 )
      goto LABEL_14;
    rankMaxParam = v9->fields.rankMaxParam;
LABEL_11:
    --v5;
    v6 = rankMaxParam + 1;
    --v7;
    if ( !v5 )
      return 0;
  }
  if ( !v9 )
    goto LABEL_14;
  rankMaxParam = v9->fields.rankMaxParam;
  if ( rankMaxParam < param && rankMaxParam != -1 )
    goto LABEL_11;
  return v9->fields.useQp;
}


void CommandCardExceedConfirmDialog__OnClickCancel(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5974A9A & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    byte_5974A9A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, 0, 0);
  }
}


void CommandCardExceedConfirmDialog__OnClickDecide(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UISliderWithButton_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *v7; // x20
  UnityEngine_Object_o *sliderWithButton2; // x21
  const MethodInfo *v9; // x2

  if ( (byte_5974A99 & 1) == 0 )
  {
    sub_2213A60(&Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A99 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (UISliderWithButton_o *)sub_2213B20(int___TypeInfo, 2);
    if ( this->fields.sliderWithButton )
    {
      v7 = v5;
      v5 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(this->fields.sliderWithButton, 0);
      if ( v7 )
      {
        if ( !LODWORD(v7->fields.m_CancellationTokenSource) )
          goto LABEL_19;
        LODWORD(v7->fields.onDragFinished) = (_DWORD)v5;
        sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        if ( !UnityEngine_Object__op_Implicit(sliderWithButton2, 0) )
        {
          v5 = 0;
LABEL_16:
          if ( ((__int64)v7->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
          {
            HIDWORD(v7->fields.onDragFinished) = (_DWORD)v5;
            CommandCardExceedConfirmDialog__CallOnRequest(this, (System_Int32_array *)v7, v9);
            BaseDialog__SafeClose((BaseDialog_o *)this, 0, 0);
            return;
          }
LABEL_19:
          sub_2213CE4(v5);
        }
        v5 = this->fields.sliderWithButton2;
        if ( v5 )
        {
          v5 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(v5, 0);
          goto LABEL_16;
        }
      }
    }
    sub_2213CDC(v5, v6);
  }
}


void CommandCardExceedConfirmDialog__OnSliderValueChange(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *sliderWithButton2; // x20
  UISliderWithButton_o *sliderWithButton; // x0
  __int64 v6; // x1
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v8; // x8
  int32_t constantMaxStatus; // w20
  int32_t nowCommandCardParam; // w21
  int32_t value; // w22
  struct UISliderWithButton_o *v12; // x19

  if ( (byte_5974A97 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A97 = 1;
  }
  CommandCardExceedConfirmDialog__ChangeUseItemValue(this, method);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  sliderWithButton = (UISliderWithButton_o *)UnityEngine_Object__op_Inequality(sliderWithButton2, 0, 0);
  if ( ((unsigned __int8)sliderWithButton & 1) != 0 )
  {
    exceedItemEntities = this->fields.exceedItemEntities;
    if ( !exceedItemEntities )
      goto LABEL_13;
    if ( (exceedItemEntities->max_length & 0xFFFFFFFE) == 0 )
      sub_2213CE4(sliderWithButton);
    v8 = exceedItemEntities->m_Items[1];
    if ( !v8
      || (sliderWithButton = this->fields.sliderWithButton) == 0
      || (constantMaxStatus = this->fields.constantMaxStatus,
          nowCommandCardParam = this->fields.nowCommandCardParam,
          value = v8->fields.value,
          v12 = this->fields.sliderWithButton2,
          sliderWithButton = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(sliderWithButton, 0),
          !v12) )
    {
LABEL_13:
      sub_2213CDC(sliderWithButton, v6);
    }
    v12->fields.maxConfigurableStep = (constantMaxStatus - nowCommandCardParam) / value - (_DWORD)sliderWithButton;
  }
}


void CommandCardExceedConfirmDialog__OnSliderValueChange2(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton2; // x0
  __int64 v4; // x1
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v6; // x8
  int32_t constantMaxStatus; // w20
  int32_t nowCommandCardParam; // w21
  int32_t value; // w22
  struct UISliderWithButton_o *sliderWithButton; // x19

  CommandCardExceedConfirmDialog__ChangeUseItemValue(this, method);
  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_7;
  if ( !LODWORD(exceedItemEntities->max_length) )
    sub_2213CE4(sliderWithButton2);
  v6 = exceedItemEntities->m_Items[0];
  if ( !v6
    || (sliderWithButton2 = this->fields.sliderWithButton2) == 0
    || (constantMaxStatus = this->fields.constantMaxStatus,
        nowCommandCardParam = this->fields.nowCommandCardParam,
        value = v6->fields.value,
        sliderWithButton = this->fields.sliderWithButton,
        sliderWithButton2 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(sliderWithButton2, 0),
        !sliderWithButton) )
  {
LABEL_7:
    sub_2213CDC(sliderWithButton2, v4);
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
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  __int64 v16; // x27
  __int64 Master_object; // x0
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Action_o *v31; // x26
  __int64 v32; // x1
  UnityEngine_Object_o *blackoutBoardBase; // x26
  UnityEngine_Object_o *blackoutBoardBase2; // x26
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UnityEngine_GameObject_array *classOnlyObjects; // x26
  int max_length; // w8
  __int64 v43; // x27
  struct UILabel_array *classOnlyLabels; // x8
  int v45; // w8
  int v46; // w9
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct ItemEntity_array *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x1
  il2cpp_array_size_t v61; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x24
  __int64 v63; // x29
  __int64 v64; // x27
  unsigned int *exceedItemEntities; // x20
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x25
  __int64 v73; // x1
  __int64 v74; // x9
  Il2CppObject *MasterData_object; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct System_Int32_array *commandCardParam; // x8
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x1
  BalanceConfig_c *v92; // x0
  System_Int32_array *v93; // x20
  int32_t v94; // w21
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x2
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x1
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v102; // x21
  __int64 v103; // x1
  __int64 v104; // x1
  UnityEngine_Object_o *sliderWithButton2; // x20
  struct UISliderWithButton_o *v106; // x8
  System_Collections_Generic_List_EventDelegate__o *v107; // x20
  EventDelegate_Callback_o *v108; // x21
  __int64 v109; // x1
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v112; // x21
  __int64 v113; // x1
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v115; // x20
  EventDelegate_Callback_o *v116; // x21
  __int64 v117; // x0

  if ( (byte_5974A91 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    sub_2213A60(&Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    sub_2213A60(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange2__);
    sub_2213A60(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&ItemEntity___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CommandCardExceedConfirmDialog___c__DisplayClass51_0__Open_b__0__);
    sub_2213A60(&CommandCardExceedConfirmDialog___c__DisplayClass51_0_TypeInfo);
    byte_5974A91 = 1;
  }
  v16 = sub_2213CCC(CommandCardExceedConfirmDialog___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  if ( !v16 )
    goto LABEL_69;
  *(_QWORD *)(v16 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 16), (int32_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = onOpen;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)onOpen, v25, v26, v27, v28, v29, v30);
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v16,
    Method_CommandCardExceedConfirmDialog___c__DisplayClass51_0__Open_b__0__,
    0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v31, 0, 0);
  blackoutBoardBase = (UnityEngine_Object_o *)this->fields.blackoutBoardBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardBase, 0, 0) )
  {
    Master_object = (__int64)this->fields.blackoutBoardBase;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  blackoutBoardBase2 = (UnityEngine_Object_o *)this->fields.blackoutBoardBase2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  Master_object = UnityEngine_Object__op_Inequality(blackoutBoardBase2, 0, 0);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)this->fields.blackoutBoardBase2;
    if ( !Master_object )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  }
  classOnlyObjects = this->fields.classOnlyObjects;
  if ( !classOnlyObjects )
    goto LABEL_69;
  max_length = classOnlyObjects->max_length;
  if ( max_length >= 1 )
  {
    v43 = 0;
    while ( (unsigned int)v43 < max_length )
    {
      Master_object = (__int64)classOnlyObjects->m_Items[v43];
      if ( !Master_object )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      max_length = classOnlyObjects->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_20;
    }
LABEL_68:
    sub_2213CE4(Master_object);
  }
LABEL_20:
  classOnlyLabels = this->fields.classOnlyLabels;
  if ( !classOnlyLabels )
    goto LABEL_69;
  v45 = classOnlyLabels->max_length;
  if ( v45 >= 1 )
  {
    v46 = v45 & ~(v45 >> 31);
    while ( v45 )
    {
      --v46;
      --v45;
      if ( !v46 )
        goto LABEL_25;
    }
    goto LABEL_68;
  }
LABEL_25:
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onRequest,
    (int32_t)onRequest,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.previousCommandDataList = previousCommandData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.previousCommandDataList,
    (int32_t)previousCommandData,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( !exceedItemIds )
    goto LABEL_69;
  v53 = (struct ItemEntity_array *)sub_2213B20(ItemEntity___TypeInfo, LODWORD(exceedItemIds->max_length));
  this->fields.exceedItemEntities = v53;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exceedItemEntities,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  v61 = exceedItemIds->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v63 = 8;
    v64 = 8;
    while ( v63 - 8 < (unsigned __int64)(unsigned int)v61 )
    {
      if ( !v62 )
        goto LABEL_69;
      exceedItemEntities = (unsigned int *)this->fields.exceedItemEntities;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 v62,
                                 *((_DWORD *)&exceedItemIds->obj.klass + v63),
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !exceedItemEntities )
        goto LABEL_69;
      v72 = Master_object;
      if ( Master_object )
      {
        Master_object = sub_2213BB4(Master_object, *(_QWORD *)(*(_QWORD *)exceedItemEntities + 64LL));
        if ( !Master_object )
        {
          v117 = sub_2213D00(0, v73);
          sub_2213BA0(v117, 0);
        }
      }
      if ( v63 - 8 >= (unsigned __int64)exceedItemEntities[6] )
        break;
      *(_QWORD *)&exceedItemEntities[v64] = v72;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&exceedItemEntities[v64], v72, v66, v67, v68, v69, v70, v71);
      LODWORD(v61) = exceedItemIds->max_length;
      v74 = v63 - 7;
      ++v63;
      v64 += 2;
      if ( v74 >= (int)v61 )
        goto LABEL_37;
    }
    goto LABEL_68;
  }
LABEL_37:
  this->fields.userCommandCodeId = userCommandCodeId;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = (struct CommandCardRankParamMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandCardRankParamMaster,
    (int32_t)MasterData_object,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  if ( userServantCommandCardEntity )
  {
    commandCardParam = userServantCommandCardEntity->fields.commandCardParam;
    if ( commandCardParam )
    {
      if ( LODWORD(commandCardParam->max_length) <= cardIndex )
        goto LABEL_68;
      v18 = (const MethodInfo *)(unsigned int)commandCardParam->m_Items[cardIndex];
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = 0;
  }
  Master_object = (__int64)this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = (int)v18;
  if ( !Master_object )
    goto LABEL_69;
  Master_object = CommandCardRankParamMaster__GetParamRank(
                    (CommandCardRankParamMaster_o *)Master_object,
                    (int32_t)v18,
                    0);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = Master_object;
  if ( !commandCardRankParamMaster )
    goto LABEL_69;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(commandCardRankParamMaster, Master_object, 0);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beyondRankParamEntities,
    (int32_t)BeyondEntities,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v92 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v91);
    v92 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v92->static_fields->CommandCardParamUpMax;
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0);
  if ( !Master_object )
    goto LABEL_69;
  this->fields.userQp = *(_QWORD *)(Master_object + 96);
  Master_object = (__int64)CommandCardExceedConfirmDialog__GetItemUsableCounts(this, v18);
  if ( !Master_object )
    goto LABEL_69;
  v93 = (System_Int32_array *)Master_object;
  v94 = *(int *)(Master_object + 24) < 2
     || System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)Master_object, 0) < 2;
  CommandCardExceedConfirmDialog__UpdateDisplay(this, v18);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, v93, v95);
  CommandCardExceedConfirmDialog__SetCommandCard(this, v94, v96);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, v93, v97);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v94, v98);
  CommandCardExceedConfirmDialog__SetUseItemIcon(this, v99);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_69;
  onChange = sliderWithButton->fields.onChange;
  v102 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v102,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v103);
  EventDelegate__Set_56322328(onChange, v102, 0);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104);
  Master_object = UnityEngine_Object__op_Inequality(sliderWithButton2, 0, 0);
  if ( (Master_object & 1) != 0 )
  {
    v106 = this->fields.sliderWithButton2;
    if ( !v106 )
      goto LABEL_69;
    v107 = v106->fields.onChange;
    v108 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v108,
      (Il2CppObject *)this,
      Method_CommandCardExceedConfirmDialog_OnSliderValueChange2__,
      0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v109);
    Master_object = (__int64)EventDelegate__Set_56322328(v107, v108, 0);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_69;
  onClick = decideButton->fields.onClick;
  v112 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v112,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickDecide__,
    0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v113);
  Master_object = (__int64)EventDelegate__Set_56322328(onClick, v112, 0);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_69:
    sub_2213CDC(Master_object, v18);
  v115 = cancelButton->fields.onClick;
  v116 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v116,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickCancel__,
    0);
  EventDelegate__Set_56322328(v115, v116, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedConfirmDialog__SetButtonState(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0

  decideButton = this->fields.decideButton;
  if ( !decideButton )
    sub_2213CDC(0, isOk);
  decideButton->klass->vtable._14_SetState.methodPtr();
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CE4(this);
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
    sub_2213CDC(this, *(_QWORD *)&itemUseCount);
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
  UISliderWithButton_o *sliderWithButton; // x21
  CommandCardExceedConfirmDialog_o **v6; // x20
  int32_t v7; // w22
  int32_t v8; // w3
  UISliderWithButton_o *v9; // x21
  int32_t v10; // w22
  int32_t v11; // w3

  if ( !itemUsableCounts )
    goto LABEL_39;
  max_length = itemUsableCounts->max_length;
  sliderWithButton = this->fields.sliderWithButton;
  v6 = (CommandCardExceedConfirmDialog_o **)this;
  if ( max_length < 2 )
  {
    if ( max_length )
    {
      if ( !sliderWithButton )
        goto LABEL_39;
      UISliderWithButton__init(this->fields.sliderWithButton, itemUsableCounts->m_Items[0], 0, 1, 0);
      if ( LODWORD(itemUsableCounts->max_length) )
      {
        this = v6[39];
        if ( itemUsableCounts->m_Items[0] < 2 )
        {
          if ( this )
          {
            UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0);
            return;
          }
LABEL_39:
          sub_2213CDC(this, itemUsableCounts);
        }
        goto LABEL_37;
      }
    }
    goto LABEL_40;
  }
  v7 = itemUsableCounts->m_Items[0];
  this = (CommandCardExceedConfirmDialog_o *)System_Linq_Enumerable__Sum(
                                               (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                               0);
  if ( (_DWORD)this == 1 )
  {
    if ( !LODWORD(itemUsableCounts->max_length) )
      goto LABEL_40;
    v8 = itemUsableCounts->m_Items[0] == 1;
  }
  else
  {
    v8 = 0;
  }
  if ( !sliderWithButton )
    goto LABEL_39;
  UISliderWithButton__init(sliderWithButton, v7, 0, v8, 0);
  if ( (itemUsableCounts->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_40;
  v9 = (UISliderWithButton_o *)v6[40];
  v10 = itemUsableCounts->m_Items[1];
  this = (CommandCardExceedConfirmDialog_o *)System_Linq_Enumerable__Sum(
                                               (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                               0);
  if ( (_DWORD)this == 1 )
  {
    if ( (itemUsableCounts->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_40;
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
LABEL_40:
    sub_2213CE4(this);
  if ( itemUsableCounts->m_Items[0] >= 1
    && System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts, 0) >= 2 )
  {
    this = v6[39];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0);
  }
  else
  {
    this = v6[39];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0);
    if ( !LODWORD(itemUsableCounts->max_length) )
      goto LABEL_40;
    this = v6[41];
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, itemUsableCounts->m_Items[0] == 0, 0);
  }
  if ( (itemUsableCounts->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_40;
  if ( itemUsableCounts->m_Items[1] < 1
    || System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts, 0) < 2 )
  {
    this = v6[40];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0);
    if ( (itemUsableCounts->max_length & 0xFFFFFFFE) != 0 )
    {
      this = v6[43];
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, itemUsableCounts->m_Items[1] == 0, 0);
      return;
    }
    goto LABEL_40;
  }
  this = v6[40];
LABEL_37:
  if ( !this )
    goto LABEL_39;
  UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0);
}


void CommandCardExceedConfirmDialog__SetStaticLabels(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUsableCounts,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *IsNullOrEmpty; // x0
  _BOOL8 v7; // x1
  System_String_o *v8; // x21
  System_String_o *v9; // x1
  UILabel_o *descriptionLabel; // x22
  struct UILabel_o *v11; // x21
  System_String_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *useItemLabel; // x21
  __int64 v16; // x1
  UILabel_o *v17; // x21
  UnityEngine_Object_o *useItemLabel2; // x21
  UILabel_o *v19; // x21
  struct ItemEntity_array *exceedItemEntities; // x8
  System_String_o **v21; // x8
  int max_length; // w9
  UILabel_o *itemNameLabel; // x20
  System_String_o *v24; // x21
  struct ItemEntity_array *v25; // x8
  ItemEntity_o *v26; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  struct UILabel_array *classOnlyLabels; // x20
  int v30; // w8
  unsigned int v31; // w22
  UILabel_o *v32; // x19

  if ( (byte_5974A92 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3773/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/);
    sub_2213A60(&StringLiteral_3763/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_ITEM"*/);
    sub_2213A60(&StringLiteral_3762/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_3838/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/);
    sub_2213A60(&StringLiteral_3776/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_3774/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM_TOTAL"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3761/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_2213A60(&StringLiteral_3777/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3764/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    byte_5974A92 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemUsableCounts);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3777/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_Linq_Enumerable__Sum(
                                       (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                       0);
  if ( (int)IsNullOrEmpty <= 1 )
  {
    v8 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3776/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0);
    v8 = IsNullOrEmpty;
  }
  if ( !itemUsableCounts )
    goto LABEL_66;
  if ( SLODWORD(itemUsableCounts->max_length) <= 1 )
  {
    v9 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_DESCRIPTION"*/, 0);
  }
  descriptionLabel = this->fields.descriptionLabel;
  IsNullOrEmpty = System_String__Concat_75651716(v8, v9, 0);
  if ( !descriptionLabel )
    goto LABEL_66;
  UILabel__set_text(descriptionLabel, IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v11 = this->fields.descriptionLabel;
    if ( !v11 )
      goto LABEL_66;
    IsNullOrEmpty = v11->fields.mText;
    if ( !IsNullOrEmpty )
      goto LABEL_66;
    v12 = System_String__Replace_75703400(
            IsNullOrEmpty,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    UILabel__set_text(v11, v12, 0);
  }
  IsNullOrEmpty = (System_String_o *)this->fields.descriptionLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  IsNullOrEmpty = (System_String_o *)System_Linq_Enumerable__Sum(
                                       (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                       0);
  v7 = (int)IsNullOrEmpty > 1 || (unsigned __int64)(SLODWORD(itemUsableCounts->max_length) > 1);
  if ( !gameObject )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(gameObject, v7, 0);
  useItemLabel = (UnityEngine_Object_o *)this->fields.useItemLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(useItemLabel, 0, 0) )
  {
    v17 = this->fields.useItemLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3838/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, 0);
    if ( !v17 )
      goto LABEL_66;
    UILabel__set_text(v17, IsNullOrEmpty, 0);
  }
  useItemLabel2 = (UnityEngine_Object_o *)this->fields.useItemLabel2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(useItemLabel2, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v19 = this->fields.useItemLabel2;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3838/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, 0);
    if ( !v19 )
      goto LABEL_66;
    UILabel__set_text(v19, IsNullOrEmpty, 0);
  }
  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_66;
  if ( !LODWORD(exceedItemEntities->max_length) )
    goto LABEL_67;
  if ( exceedItemEntities->m_Items[0] )
  {
    v21 = (System_String_o **)&StringLiteral_3774/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM_TOTAL"*/;
    max_length = itemUsableCounts->max_length;
    itemNameLabel = this->fields.itemNameLabel;
    if ( max_length <= 1 )
      v21 = (System_String_o **)&StringLiteral_3773/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/;
    v24 = *v21;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    IsNullOrEmpty = LocalizationManager__Get(v24, 0);
    v25 = this->fields.exceedItemEntities;
    if ( v25 )
    {
      if ( !LODWORD(v25->max_length) )
        goto LABEL_67;
      v26 = v25->m_Items[0];
      if ( v26 )
      {
        IsNullOrEmpty = System_String__Format(IsNullOrEmpty, (Il2CppObject *)v26->fields.name, 0);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, IsNullOrEmpty, 0);
          goto LABEL_53;
        }
      }
    }
LABEL_66:
    sub_2213CDC(IsNullOrEmpty, v7);
  }
LABEL_53:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_66;
  UILabel__set_text(decideButtonLabel, IsNullOrEmpty, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_66;
  UILabel__set_text(cancelButtonLabel, IsNullOrEmpty, 0);
  classOnlyLabels = this->fields.classOnlyLabels;
  if ( !classOnlyLabels )
    goto LABEL_66;
  v30 = classOnlyLabels->max_length;
  if ( v30 >= 1 )
  {
    v31 = 0;
    while ( v31 < v30 )
    {
      v32 = classOnlyLabels->m_Items[v31];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_ITEM"*/, 0);
      if ( !v32 )
        goto LABEL_66;
      UILabel__set_text(v32, IsNullOrEmpty, 0);
      v30 = classOnlyLabels->max_length;
      if ( (int)++v31 >= v30 )
        return;
    }
LABEL_67:
    sub_2213CE4(IsNullOrEmpty);
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
  if ( (byte_5974A94 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)sub_2213A60(&StringLiteral_25987/*"validClassIds"*/);
    byte_5974A94 = 1;
  }
  exceedItemEntities = v2->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_43;
  if ( SLODWORD(exceedItemEntities->max_length) < 2 )
    goto LABEL_31;
  useItemIcon = (UnityEngine_Object_o *)v2->fields.useItemIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    ItemIconComponent__SetItem_47881372((ItemIconComponent_o *)this, v5->m_Items[0], -1, 1, 0);
    v6 = v2->fields.useItemIcon;
    if ( !v6 )
      goto LABEL_43;
    iconSprite = (UnityEngine_Object_o *)v6->fields.iconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(useItemIcon2, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_31;
  v10 = v2->fields.exceedItemEntities;
  if ( !v10 )
    goto LABEL_43;
  if ( (v10->max_length & 0xFFFFFFFE) == 0 )
LABEL_45:
    sub_2213CE4(this);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.useItemIcon2;
  if ( !this )
    goto LABEL_43;
  ItemIconComponent__SetItem_47881372((ItemIconComponent_o *)this, v10->m_Items[1], -1, 1, 0);
  v11 = v2->fields.useItemIcon2;
  if ( !v11 )
    goto LABEL_43;
  v12 = (UnityEngine_Object_o *)v11->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(this, method);
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
                                                   (Il2CppObject *)StringLiteral_25987/*"validClassIds"*/,
                                                   (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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


// local variable allocation has failed, the output may be wrong!
void CommandCardExceedConfirmDialog__SetValueLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v4; // x20
  struct BattleCommandData_array *previousCommandDataList; // x8
  int max_length; // w9
  int v7; // w8
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v9; // x22
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x0
  UILabel_o *afterStatusLabel2Sprites; // x21
  UILabel_o *previousStatusLabel2Sprites; // x21
  System_String_o *v14; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  const MethodInfo *v18; // x2
  int32_t v19; // w0
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *useItemText; // x21
  __int64 v24; // x1
  UILabel_o *v25; // x21
  CommandCardExceedConfirmDialog_o *v26; // x22
  Il2CppObject *v27; // x0
  UnityEngine_Object_o *useItemText2; // x21
  __int64 v29; // x1
  UILabel_o *v30; // x21
  CommandCardExceedConfirmDialog_o *v31; // x22
  Il2CppObject *v32; // x0
  UnityEngine_Object_o *blackoutBoardText; // x21
  __int64 v34; // x1
  UILabel_o *v35; // x21
  __int64 v36; // x1
  System_String_o *v37; // x22
  long double v38; // q0
  _QWORD *v39; // x23
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  UnityEngine_Object_o *blackoutBoardText2; // x21
  __int64 v44; // x1
  UILabel_o *v45; // x21
  __int64 v46; // x1
  System_String_o *v47; // x22
  long double v48; // q0
  _QWORD *v49; // x23
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v54; // x22
  Il2CppObject *v55; // x0
  const MethodInfo *v56; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x22
  int32_t v59; // w21
  UILabel_o *requiredQpText; // x22
  CommandCardExceedConfirmDialog_o *v61; // x0
  const MethodInfo *v62; // x3
  UILabel_o *userQpLabel; // x22
  UILabel_o *userQpText; // x22
  int64_t v65; // x23
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v67; // x0
  const MethodInfo *v68; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v71; // x1
  int32_t v72; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v73; // [xsp+8h] [xbp-58h] BYREF
  int32_t v74; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_5974A93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3765/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_2213A60(&StringLiteral_3769/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/);
    sub_2213A60(&StringLiteral_3767/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/);
    sub_2213A60(&StringLiteral_3771/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/);
    sub_2213A60(&StringLiteral_3772/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/);
    this = (CommandCardExceedConfirmDialog_o *)sub_2213A60(&StringLiteral_3766/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_5974A93 = 1;
  }
  previousCommandDataList = v4->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_76;
  max_length = previousCommandDataList->max_length;
  v7 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( max_length >= 2 )
  {
    previousStatusLabel2Sprites = v4->fields.previousStatusLabel2Sprites;
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemUseCount);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0);
    v16 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_75697880(v14, NumberFormat, v16, 0);
    if ( !previousStatusLabel2Sprites )
      goto LABEL_76;
    UILabel__set_text(previousStatusLabel2Sprites, (System_String_o *)this, 0);
    afterStatusLabel2Sprites = v4->fields.afterStatusLabel2Sprites;
  }
  else
  {
    previousStatusLabel = v4->fields.previousStatusLabel;
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemUseCount);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0);
    v10 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0);
    v11 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_75697880(v9, v10, v11, 0);
    if ( !previousStatusLabel )
      goto LABEL_76;
    UILabel__set_text(previousStatusLabel, (System_String_o *)this, 0);
    afterStatusLabel2Sprites = v4->fields.afterStatusLabel;
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0);
  v19 = CommandCardExceedConfirmDialog__GetAfterCommandCardParam(v4, itemUseCount, v18);
  v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v19, 0);
  v21 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_75697880(v17, v20, v21, 0);
  if ( !afterStatusLabel2Sprites )
    goto LABEL_76;
  UILabel__set_text(afterStatusLabel2Sprites, (System_String_o *)this, 0);
  useItemText = (UnityEngine_Object_o *)v4->fields.useItemText;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(useItemText, 0, 0) )
  {
    v25 = v4->fields.useItemText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0);
    if ( !v4->fields.sliderWithButton )
      goto LABEL_76;
    v26 = this;
    v74 = UISliderWithButton__sliderValueChange(v4->fields.sliderWithButton, 0);
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v74);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format((System_String_o *)v26, v27, 0);
    if ( !v25 )
      goto LABEL_76;
    UILabel__set_text(v25, (System_String_o *)this, 0);
  }
  useItemText2 = (UnityEngine_Object_o *)v4->fields.useItemText2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(useItemText2, 0, 0) )
  {
    v30 = v4->fields.useItemText2;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0);
    if ( !v4->fields.sliderWithButton2 )
      goto LABEL_76;
    v31 = this;
    v73 = UISliderWithButton__sliderValueChange(v4->fields.sliderWithButton2, 0);
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v73);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format((System_String_o *)v31, v32, 0);
    if ( !v30 )
      goto LABEL_76;
    UILabel__set_text(v30, (System_String_o *)this, 0);
  }
  blackoutBoardText = (UnityEngine_Object_o *)v4->fields.blackoutBoardText;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardText, 0, 0) )
  {
    v35 = v4->fields.blackoutBoardText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, 0);
    v39 = Method_System_Array_Empty_object___;
    v40 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v40 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v40 = v39[7];
    }
    v41 = *(_QWORD *)(v40 + 16);
    if ( (*(_WORD *)(v41 + 309) & 1) == 0 )
      v41 = sub_224B908(v38);
    if ( !*(_DWORD *)(v41 + 228) )
      *(__n128 *)&v38 = j_il2cpp_runtime_class_init_0(v41, v36);
    v42 = *(_QWORD *)(v39[7] + 16LL);
    if ( (*(_WORD *)(v42 + 309) & 1) == 0 )
      v42 = sub_224B908(v38);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_75698016(
                                                 v37,
                                                 **(System_Object_array ***)(v42 + 184),
                                                 0);
    if ( !v35 )
      goto LABEL_76;
    UILabel__set_text(v35, (System_String_o *)this, 0);
  }
  blackoutBoardText2 = (UnityEngine_Object_o *)v4->fields.blackoutBoardText2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardText2, 0, 0) )
  {
    v45 = v4->fields.blackoutBoardText2;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, 0);
    v49 = Method_System_Array_Empty_object___;
    v50 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v50 )
    {
      sub_224B964(Method_System_Array_Empty_object___);
      v50 = v49[7];
    }
    v51 = *(_QWORD *)(v50 + 16);
    if ( (*(_WORD *)(v51 + 309) & 1) == 0 )
      v51 = sub_224B908(v48);
    if ( !*(_DWORD *)(v51 + 228) )
      *(__n128 *)&v48 = j_il2cpp_runtime_class_init_0(v51, v46);
    v52 = *(_QWORD *)(v49[7] + 16LL);
    if ( (*(_WORD *)(v52 + 309) & 1) == 0 )
      v52 = sub_224B908(v48);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_75698016(
                                                 v47,
                                                 **(System_Object_array ***)(v52 + 184),
                                                 0);
    if ( v45 )
    {
      UILabel__set_text(v45, (System_String_o *)this, 0);
      goto LABEL_60;
    }
LABEL_76:
    sub_2213CDC(this, *(_QWORD *)&itemUseCount);
  }
LABEL_60:
  itemCountLabel = v4->fields.itemCountLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0);
  v72 = itemUseCount;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v72);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format(v54, v55, 0);
  if ( !itemCountLabel )
    goto LABEL_76;
  UILabel__set_text(itemCountLabel, (System_String_o *)this, 0);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(v4, itemUseCount, v56);
  requiredQpLabel = v4->fields.requiredQpLabel;
  v59 = RequiredQp;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3769/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0);
  if ( !requiredQpLabel )
    goto LABEL_76;
  UILabel__set_text(requiredQpLabel, (System_String_o *)this, 0);
  requiredQpText = v4->fields.requiredQpText;
  this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetRequiredQpText(
                                               v61,
                                               v59,
                                               v4->fields.userQp >= v59,
                                               v62);
  if ( !requiredQpText )
    goto LABEL_76;
  UILabel__set_text(requiredQpText, (System_String_o *)this, 0);
  userQpLabel = v4->fields.userQpLabel;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3772/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0);
  if ( !userQpLabel )
    goto LABEL_76;
  UILabel__set_text(userQpLabel, (System_String_o *)this, 0);
  userQpText = v4->fields.userQpText;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__GetNumberFormatLong(v4->fields.userQp, 0);
  if ( !userQpText )
    goto LABEL_76;
  v65 = v59;
  UILabel__set_text(userQpText, (System_String_o *)this, 0);
  messageLabel = v4->fields.messageLabel;
  MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(v67, v4->fields.userQp >= v65, v68);
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get(MessageLocalizationKey, 0);
  if ( !messageLabel )
    goto LABEL_76;
  UILabel__set_text(messageLabel, (System_String_o *)this, 0);
  this = (CommandCardExceedConfirmDialog_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_76;
  if ( v4->fields.userQp < v65 || itemUseCount <= 0 )
    v71 = 3;
  else
    v71 = 0;
  ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, __int64, Il2CppClass *))this->klass[1]._1.interopData)(
    this,
    v71,
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
  if ( (byte_5974A9D & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A9D = 1;
  }
  previousCommandDataList = v2->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_17;
  max_length = previousCommandDataList->max_length;
  bgSprite = (UnityEngine_Object_o *)v2->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0);
}


UnityEngine_GameObject_o *CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_5974A9C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974A9C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void CommandCardExceedConfirmDialog___c__DisplayClass51_0___ctor(
        CommandCardExceedConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommandCardExceedConfirmDialog___c__DisplayClass51_0___Open_b__0(
        CommandCardExceedConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  struct CommandCardExceedConfirmDialog_o *_4__this; // x8
  System_Action_o *onOpen; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, method);
  onOpen = this->fields.onOpen;
  _4__this->fields.isButtonEnable = 1;
  ActionExtensions__Call(onOpen, 0);
}