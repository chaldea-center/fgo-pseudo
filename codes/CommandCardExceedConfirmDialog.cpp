void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B48764 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B48764 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__CallOnRequest(
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
    p_onRequest->klass = 0LL;
    sub_1BDB81C(p_onRequest, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Int32_array *, _QWORD))onRequest->fields.m_target)(
      onRequest->fields.original_method_info,
      itemUseCount,
      *(_QWORD *)&onRequest->fields.extra_arg);
  }
}


void __fastcall CommandCardExceedConfirmDialog__ChangeUseItemValue(
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

  if ( (byte_4B4875D & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4875D = 1;
  }
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_11;
  v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  v6 = v4;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(sliderWithButton2, 0LL, 0LL) )
  {
    v8 = 0;
    goto LABEL_10;
  }
  sliderWithButton = this->fields.sliderWithButton2;
  if ( !sliderWithButton )
LABEL_11:
    sub_1BDBAD4(sliderWithButton, method);
  v8 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
LABEL_10:
  v9 = v8 + v6;
  CommandCardExceedConfirmDialog__SetCommandCard(this, v9, v7);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v9, v10);
}


void __fastcall CommandCardExceedConfirmDialog__DisplayCommandCards(
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
  if ( (byte_4B48763 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1BDB878(&BattleCommandData_TypeInfo, previousCard);
    byte_4B48763 = 1;
  }
  if ( !previousCard
    || (CombineCommandCardComponent__DispCommandCard(
          previousCard,
          data,
          v10->fields.userCommandCodeId,
          v10->fields.nowCommandCardParam,
          0,
          0,
          0LL),
        v11 = (BattleCommandData_o *)sub_1BDBAC4(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_45403300(v11, data, 0LL),
        this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetAfterCommandCardParam(
                                                     v10,
                                                     itemUseCount,
                                                     v12),
        !v11)
    || (v11->fields.commandCardParam = (int)this, !afterCard) )
  {
    sub_1BDBAD4(this, previousCard);
  }
  CombineCommandCardComponent__DispCommandCard(afterCard, v11, v10->fields.userCommandCodeId, (int32_t)this, 0, 0, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__EndOpen(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommandCardExceedConfirmDialog__GetAfterCommandCardParam(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v4; // x8

  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_5;
  if ( !exceedItemEntities->max_length )
    sub_1BDBADC(this, *(_QWORD *)&itemUseCount, method);
  v4 = exceedItemEntities->m_Items[0];
  if ( !v4 )
LABEL_5:
    sub_1BDBAD4(this, itemUseCount);
  return this->fields.nowCommandCardParam + v4->fields.value * itemUseCount;
}


System_Int32_array *__fastcall CommandCardExceedConfirmDialog__GetItemUsableCounts(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ItemEntity_array *exceedItemEntities; // x8
  System_Int32_array *v7; // x20
  __int64 v8; // x2
  struct ItemEntity_array *v9; // x8
  UserItemMaster_o *v10; // x21
  int v11; // w23
  struct ItemEntity_array *v12; // x8
  __int64 v13; // x26
  ItemEntity_o *v14; // x8
  struct ItemEntity_array *v15; // x9
  __int64 v16; // x8
  ItemEntity_o *v17; // x9
  int m_CancellationTokenSource_high; // w9

  v2 = this;
  if ( (byte_4B48760 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&int___TypeInfo, v4);
    this = (CommandCardExceedConfirmDialog_o *)sub_1BDB878(&NetworkManager_TypeInfo, v5);
    byte_4B48760 = 1;
  }
  exceedItemEntities = v2->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_29;
  v7 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, exceedItemEntities->max_length);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
  v9 = v2->fields.exceedItemEntities;
  if ( !v9 )
    goto LABEL_29;
  if ( (int)v9->max_length >= 1 )
  {
    v10 = (UserItemMaster_o *)this;
    v11 = 0;
    while ( 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, method);
        byte_4B3ED56 = 1;
      }
      this = (CommandCardExceedConfirmDialog_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (CommandCardExceedConfirmDialog_o *)NetworkManager_TypeInfo;
      }
      v12 = v2->fields.exceedItemEntities;
      if ( !v12 )
        break;
      if ( v11 >= v12->max_length )
        goto LABEL_30;
      v13 = v11;
      v14 = v12->m_Items[v11];
      if ( !v14 )
        break;
      if ( !v10 )
        break;
      this = (CommandCardExceedConfirmDialog_o *)UserItemMaster__GetEntityDefinitely(
                                                   v10,
                                                   (int64_t)this->fields.afterCommandCard->fields.facetex,
                                                   v14->fields.id,
                                                   0LL);
      if ( !this )
        break;
      v15 = v2->fields.exceedItemEntities;
      if ( !v15 )
        break;
      v16 = *(_QWORD *)&v15->max_length;
      if ( v11 >= (unsigned int)v16 )
        goto LABEL_30;
      v17 = v15->m_Items[v11];
      if ( !v17 )
        break;
      m_CancellationTokenSource_high = (v2->fields.constantMaxStatus - v2->fields.nowCommandCardParam)
                                     / v17->fields.value;
      if ( SHIDWORD(this->fields.m_CancellationTokenSource) < m_CancellationTokenSource_high )
        m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v7 )
        break;
      if ( v11 >= v7->max_length )
LABEL_30:
        sub_1BDBADC(this, method, v8);
      ++v11;
      v7->m_Items[v13 + 1] = m_CancellationTokenSource_high;
      if ( v11 >= (int)v16 )
        return v7;
    }
LABEL_29:
    sub_1BDBAD4(this, method);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_4B4875B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_3665/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/, isOk);
    sub_1BDB878(&StringLiteral_3658/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/, v4);
    byte_4B4875B = 1;
  }
  if ( isOk )
    v5 = (System_String_o **)&StringLiteral_3658/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3665/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommandCardExceedConfirmDialog__GetNowCommandCardParam(
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
  if ( commandCardParam->max_length <= index )
    sub_1BDBADC(this, entity, *(_QWORD *)&index);
  return commandCardParam->m_Items[index + 1];
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetRequiredQp(
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
    if ( !exceedItemEntities->max_length )
      sub_1BDBADC(UseQp, v8, method);
    v10 = exceedItemEntities->m_Items[0];
    if ( !v10 )
LABEL_10:
      sub_1BDBAD4(UseQp, v8);
    v6 += UseQp;
    --v4;
    nowCommandCardParam += v10->fields.value;
  }
  while ( v4 );
  return v6;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedConfirmDialog__GetRequiredQpText(
        CommandCardExceedConfirmDialog_o *this,
        int32_t requiredQp,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_String_o *v8; // x20
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4B4875A & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    sub_1BDB878(&StringLiteral_3660/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, v6);
    byte_4B4875A = 1;
  }
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isOk )
      return LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOk )
      return LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3660/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  return System_String__Format(v8, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommandCardExceedConfirmDialog__GetUseQp(
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
    sub_1BDBAD4(this, param);
  max_length = beyondRankParamEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BDBADC(this, *(_QWORD *)&param, method);
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


void __fastcall CommandCardExceedConfirmDialog__OnClickCancel(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B4875F & 1) == 0 )
  {
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, method);
    byte_4B4875F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnClickDecide(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UISliderWithButton_o *v7; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x20
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *sliderWithButton2; // x21

  if ( (byte_4B4875E & 1) == 0 )
  {
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, method);
    sub_1BDB878(&int___TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B4875E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v5 = Method_CommandCardExceedConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (UISliderWithButton_o *)sub_1BDB920(int___TypeInfo, 2LL);
    if ( this->fields.sliderWithButton )
    {
      v9 = (System_Int32_array *)v7;
      v7 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(this->fields.sliderWithButton, 0LL);
      if ( v9 )
      {
        if ( !v9->max_length )
          goto LABEL_19;
        v9->m_Items[1] = (int)v7;
        sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Implicit(sliderWithButton2, 0LL) )
        {
          v7 = 0LL;
LABEL_16:
          if ( v9->max_length > 1 )
          {
            v9->m_Items[2] = (int)v7;
            CommandCardExceedConfirmDialog__CallOnRequest(this, v9, v10);
            BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
            return;
          }
LABEL_19:
          sub_1BDBADC(v7, v8, v10);
        }
        v7 = this->fields.sliderWithButton2;
        if ( v7 )
        {
          v7 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(v7, 0LL);
          goto LABEL_16;
        }
      }
    }
    sub_1BDBAD4(v7, v8);
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnSliderValueChange(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sliderWithButton2; // x20
  UISliderWithButton_o *sliderWithButton; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v8; // x8
  int32_t constantMaxStatus; // w20
  int32_t nowCommandCardParam; // w21
  int32_t value; // w22
  struct UISliderWithButton_o *v12; // x19

  if ( (byte_4B4875C & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4875C = 1;
  }
  CommandCardExceedConfirmDialog__ChangeUseItemValue(this, method);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sliderWithButton = (UISliderWithButton_o *)UnityEngine_Object__op_Inequality(sliderWithButton2, 0LL, 0LL);
  if ( ((unsigned __int8)sliderWithButton & 1) != 0 )
  {
    exceedItemEntities = this->fields.exceedItemEntities;
    if ( !exceedItemEntities )
      goto LABEL_13;
    if ( exceedItemEntities->max_length <= 1 )
      sub_1BDBADC(sliderWithButton, v5, v6);
    v8 = exceedItemEntities->m_Items[1];
    if ( !v8
      || (sliderWithButton = this->fields.sliderWithButton) == 0LL
      || (constantMaxStatus = this->fields.constantMaxStatus,
          nowCommandCardParam = this->fields.nowCommandCardParam,
          value = v8->fields.value,
          v12 = this->fields.sliderWithButton2,
          sliderWithButton = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(sliderWithButton, 0LL),
          !v12) )
    {
LABEL_13:
      sub_1BDBAD4(sliderWithButton, v5);
    }
    v12->fields.maxConfigurableStep = (constantMaxStatus - nowCommandCardParam) / value - (_DWORD)sliderWithButton;
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnSliderValueChange2(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton2; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct ItemEntity_array *exceedItemEntities; // x8
  ItemEntity_o *v7; // x8
  int32_t constantMaxStatus; // w20
  int32_t nowCommandCardParam; // w21
  int32_t value; // w22
  struct UISliderWithButton_o *sliderWithButton; // x19

  CommandCardExceedConfirmDialog__ChangeUseItemValue(this, method);
  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_7;
  if ( !exceedItemEntities->max_length )
    sub_1BDBADC(sliderWithButton2, v4, v5);
  v7 = exceedItemEntities->m_Items[0];
  if ( !v7
    || (sliderWithButton2 = this->fields.sliderWithButton2) == 0LL
    || (constantMaxStatus = this->fields.constantMaxStatus,
        nowCommandCardParam = this->fields.nowCommandCardParam,
        value = v7->fields.value,
        sliderWithButton = this->fields.sliderWithButton,
        sliderWithButton2 = (UISliderWithButton_o *)UISliderWithButton__sliderValueChange(sliderWithButton2, 0LL),
        !sliderWithButton) )
  {
LABEL_7:
    sub_1BDBAD4(sliderWithButton2, v4);
  }
  sliderWithButton->fields.maxConfigurableStep = (constantMaxStatus - nowCommandCardParam) / value
                                               - (_DWORD)sliderWithButton2;
}


void __fastcall CommandCardExceedConfirmDialog__Open(
        CommandCardExceedConfirmDialog_o *this,
        UserServantCommandCardEntity_o *userServantCommandCardEntity,
        BattleCommandData_array *previousCommandData,
        int64_t userCommandCodeId,
        System_Int32_array *exceedItemIds,
        int32_t cardIndex,
        System_Action_int____o *onRequest,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Action_o *v29; // x26
  UnityEngine_Object_o *blackoutBoardBase; // x26
  const MethodInfo *v31; // x1
  __int64 Master_object; // x0
  UnityEngine_Object_o *blackoutBoardBase2; // x26
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  struct UnityEngine_GameObject_array *classOnlyObjects; // x26
  int max_length; // w8
  unsigned int v38; // w20
  int64_t v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct ItemEntity_array *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x25
  __int64 v47; // x27
  __int64 v48; // x29
  struct ItemEntity_array *exceedItemEntities; // x22
  const MethodInfo *v50; // x3
  Il2CppClass *v51; // x26
  __int64 v52; // x9
  Il2CppObject *MasterData_object; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Int32_array *commandCardParam; // x8
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  BalanceConfig_c *v61; // x0
  System_Int32_array *v62; // x20
  _BOOL4 v63; // w21
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x1
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v71; // x21
  UnityEngine_Object_o *sliderWithButton2; // x20
  struct UISliderWithButton_o *v73; // x8
  System_Collections_Generic_List_EventDelegate__o *v74; // x20
  EventDelegate_Callback_o *v75; // x21
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v78; // x21
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v80; // x20
  EventDelegate_Callback_o *v81; // x21
  __int64 v82; // x0
  UserServantCommandCardEntity_o *v84; // [xsp+8h] [xbp-68h]

  if ( (byte_4B48756 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, userServantCommandCardEntity);
    sub_1BDB878(&BalanceConfig_TypeInfo, v14);
    sub_1BDB878(&EventDelegate_Callback_TypeInfo, v15);
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_EndOpen__, v16);
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, v17);
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, v18);
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange2__, v19);
    sub_1BDB878(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__, v20);
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v21);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v22);
    sub_1BDB878(&DataManager_TypeInfo, v23);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v24);
    sub_1BDB878(&EventDelegate_TypeInfo, v25);
    sub_1BDB878(&ItemEntity___TypeInfo, v26);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v27);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_4B48756 = 1;
  }
  v29 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
  blackoutBoardBase = (UnityEngine_Object_o *)this->fields.blackoutBoardBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardBase, 0LL, 0LL) )
  {
    Master_object = (__int64)this->fields.blackoutBoardBase;
    if ( !Master_object )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  blackoutBoardBase2 = (UnityEngine_Object_o *)this->fields.blackoutBoardBase2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Inequality(blackoutBoardBase2, 0LL, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)this->fields.blackoutBoardBase2;
    if ( !Master_object )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  classOnlyObjects = this->fields.classOnlyObjects;
  if ( !classOnlyObjects )
    goto LABEL_62;
  max_length = classOnlyObjects->max_length;
  if ( max_length >= 1 )
  {
    v38 = 0;
    while ( v38 < max_length )
    {
      Master_object = (__int64)classOnlyObjects->m_Items[v38];
      if ( !Master_object )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      max_length = classOnlyObjects->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_19;
    }
LABEL_63:
    sub_1BDBADC(Master_object, v31, v34);
  }
LABEL_19:
  if ( !this->fields.classOnlyLabels )
    goto LABEL_62;
  v84 = userServantCommandCardEntity;
  v39 = userCommandCodeId;
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onRequest, (int32_t)onRequest, v34, v35);
  this->fields.previousCommandDataList = previousCommandData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.previousCommandDataList, (int32_t)previousCommandData, v40, v41);
  if ( !exceedItemIds )
    goto LABEL_62;
  v42 = (struct ItemEntity_array *)sub_1BDB920(ItemEntity___TypeInfo, exceedItemIds->max_length);
  this->fields.exceedItemEntities = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.exceedItemEntities, (int32_t)v42, v43, v44);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
  v45 = *(_QWORD *)&exceedItemIds->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v47 = 8LL;
    v48 = 32LL;
    while ( v47 - 8 < (unsigned __int64)(unsigned int)v45 )
    {
      if ( !v46 )
        goto LABEL_62;
      exceedItemEntities = this->fields.exceedItemEntities;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 v46,
                                 *((_DWORD *)&exceedItemIds->obj.klass + v47),
                                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !exceedItemEntities )
        goto LABEL_62;
      v51 = (Il2CppClass *)Master_object;
      if ( Master_object )
      {
        Master_object = sub_1BDB9B4(Master_object, exceedItemEntities->obj.klass->_1.element_class);
        if ( !Master_object )
        {
          v82 = sub_1BDBAF8(0LL);
          sub_1BDB9A0(v82, 0LL);
        }
      }
      if ( v47 - 8 >= (unsigned __int64)exceedItemEntities->max_length )
        break;
      *(Il2CppClass **)((char *)&exceedItemEntities->obj.klass + v48) = v51;
      sub_1BDB81C((CGThumbnailListItem_o *)((char *)exceedItemEntities + v48), (int32_t)v51, v34, v50);
      LODWORD(v45) = exceedItemIds->max_length;
      v52 = v47 - 7;
      ++v47;
      v48 += 8LL;
      if ( v52 >= (int)v45 )
        goto LABEL_32;
    }
    goto LABEL_63;
  }
LABEL_32:
  this->fields.userCommandCodeId = v39;
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Master_object,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = (struct CommandCardRankParamMaster_o *)MasterData_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commandCardRankParamMaster, (int32_t)MasterData_object, v54, v55);
  if ( v84 && (commandCardParam = v84->fields.commandCardParam) != 0LL )
  {
    if ( commandCardParam->max_length <= cardIndex )
      goto LABEL_63;
    v31 = (const MethodInfo *)(unsigned int)commandCardParam->m_Items[cardIndex + 1];
  }
  else
  {
    v31 = 0LL;
  }
  Master_object = (__int64)this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = (int)v31;
  if ( !Master_object )
    goto LABEL_62;
  Master_object = CommandCardRankParamMaster__GetParamRank(
                    (CommandCardRankParamMaster_o *)Master_object,
                    (int32_t)v31,
                    0LL);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = Master_object;
  if ( !commandCardRankParamMaster )
    goto LABEL_62;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(commandCardRankParamMaster, Master_object, 0LL);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.beyondRankParamEntities, (int32_t)BeyondEntities, v59, v60);
  v61 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v61->static_fields->CommandCardParamUpMax;
  Master_object = (__int64)UserGameMaster__getSelfUserGame(0LL);
  if ( !Master_object )
    goto LABEL_62;
  this->fields.userQp = *(_QWORD *)(Master_object + 96);
  Master_object = (__int64)CommandCardExceedConfirmDialog__GetItemUsableCounts(this, v31);
  if ( !Master_object )
    goto LABEL_62;
  v62 = (System_Int32_array *)Master_object;
  v63 = *(int *)(Master_object + 24) < 2
     || System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)Master_object, 0LL) < 2;
  CommandCardExceedConfirmDialog__UpdateDisplay(this, v31);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, v62, v64);
  CommandCardExceedConfirmDialog__SetCommandCard(this, v63, v65);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, v62, v66);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v63, v67);
  CommandCardExceedConfirmDialog__SetUseItemIcon(this, v68);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_62;
  onChange = sliderWithButton->fields.onChange;
  v71 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v71,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_48553224(onChange, v71, 0LL);
  sliderWithButton2 = (UnityEngine_Object_o *)this->fields.sliderWithButton2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = UnityEngine_Object__op_Inequality(sliderWithButton2, 0LL, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    v73 = this->fields.sliderWithButton2;
    if ( !v73 )
      goto LABEL_62;
    v74 = v73->fields.onChange;
    v75 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v75,
      (Il2CppObject *)this,
      Method_CommandCardExceedConfirmDialog_OnSliderValueChange2__,
      0LL);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    Master_object = (__int64)EventDelegate__Set_48553224(v74, v75, 0LL);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_62;
  onClick = decideButton->fields.onClick;
  v78 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v78,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickDecide__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  Master_object = (__int64)EventDelegate__Set_48553224(onClick, v78, 0LL);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
LABEL_62:
    sub_1BDBAD4(Master_object, v31);
  v80 = cancelButton->fields.onClick;
  v81 = (EventDelegate_Callback_o *)sub_1BDBAC4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v81,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickCancel__,
    0LL);
  EventDelegate__Set_48553224(v80, v81, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__SetButtonState(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  __int64 v4; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton )
    sub_1BDBAD4(0LL, isOk);
  if ( isOk )
    v4 = 0LL;
  else
    v4 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v4,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetCommandCard(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct BattleCommandData_array *previousCommandDataList; // x8
  int max_length; // w9
  struct CombineCommandCardComponent_array *previousCommandCard2Sprites; // x8
  __int64 v9; // x21
  unsigned __int64 v10; // x10
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
      sub_1BDBADC(this, *(_QWORD *)&itemUseCount, method);
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
    sub_1BDBAD4(this, *(_QWORD *)&itemUseCount);
  v9 = 4LL;
  while ( 1 )
  {
    v10 = previousCommandCard2Sprites->max_length;
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)v10 )
      break;
    if ( v11 >= v10 )
      goto LABEL_16;
    afterCommandCard2Sprites = this->fields.afterCommandCard2Sprites;
    if ( afterCommandCard2Sprites )
    {
      if ( v11 >= afterCommandCard2Sprites->max_length )
        goto LABEL_16;
      v13 = this->fields.previousCommandDataList;
      if ( v13 )
      {
        if ( v11 >= v13->max_length )
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


void __fastcall CommandCardExceedConfirmDialog__SetSliderWithButton(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUsableCounts,
        const MethodInfo *method)
{
  signed int max_length; // w8
  UISliderWithButton_o *sliderWithButton; // x22
  int32_t v6; // w21
  CommandCardExceedConfirmDialog_o **v7; // x20
  _BOOL4 v8; // w3
  UISliderWithButton_o *v9; // x21
  int32_t v10; // w22
  _BOOL4 v11; // w3

  if ( !itemUsableCounts )
    goto LABEL_39;
  max_length = itemUsableCounts->max_length;
  if ( !max_length )
    goto LABEL_38;
  sliderWithButton = this->fields.sliderWithButton;
  v6 = itemUsableCounts->m_Items[1];
  v7 = (CommandCardExceedConfirmDialog_o **)this;
  if ( max_length < 2 )
  {
    if ( !sliderWithButton )
      goto LABEL_39;
    UISliderWithButton__init(this->fields.sliderWithButton, v6, 0, 1, 0LL);
    if ( itemUsableCounts->max_length )
    {
      this = v7[39];
      if ( this )
      {
        if ( itemUsableCounts->m_Items[1] < 2 )
        {
          UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0LL);
          return;
        }
        goto LABEL_37;
      }
LABEL_39:
      sub_1BDBAD4(this, itemUsableCounts);
    }
    goto LABEL_38;
  }
  this = (CommandCardExceedConfirmDialog_o *)System_Linq_Enumerable__Sum(
                                               (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                               0LL);
  if ( (_DWORD)this == 1 )
  {
    if ( !itemUsableCounts->max_length )
      goto LABEL_38;
    v8 = itemUsableCounts->m_Items[1] == 1;
  }
  else
  {
    v8 = 0;
  }
  if ( !sliderWithButton )
    goto LABEL_39;
  UISliderWithButton__init(sliderWithButton, v6, 0, v8, 0LL);
  if ( itemUsableCounts->max_length <= 1 )
    goto LABEL_38;
  v9 = (UISliderWithButton_o *)v7[40];
  v10 = itemUsableCounts->m_Items[2];
  this = (CommandCardExceedConfirmDialog_o *)System_Linq_Enumerable__Sum(
                                               (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                               0LL);
  if ( (_DWORD)this == 1 )
  {
    if ( itemUsableCounts->max_length <= 1 )
      goto LABEL_38;
    v11 = itemUsableCounts->m_Items[2] == 1;
  }
  else
  {
    v11 = 0;
  }
  if ( !v9 )
    goto LABEL_39;
  UISliderWithButton__init(v9, v10, 0, v11, 0LL);
  if ( !itemUsableCounts->max_length )
LABEL_38:
    sub_1BDBADC(this, itemUsableCounts, method);
  if ( itemUsableCounts->m_Items[1] >= 1
    && System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts, 0LL) >= 2 )
  {
    this = v7[39];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0LL);
  }
  else
  {
    this = v7[39];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0LL);
    if ( !itemUsableCounts->max_length )
      goto LABEL_38;
    this = v7[41];
    if ( !this )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, itemUsableCounts->m_Items[1] == 0, 0LL);
  }
  if ( itemUsableCounts->max_length <= 1 )
    goto LABEL_38;
  if ( itemUsableCounts->m_Items[2] < 1
    || System_Linq_Enumerable__Sum((System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts, 0LL) < 2 )
  {
    this = v7[40];
    if ( !this )
      goto LABEL_39;
    UISliderWithButton__grayMode((UISliderWithButton_o *)this, 0LL);
    if ( itemUsableCounts->max_length > 1 )
    {
      this = v7[43];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, itemUsableCounts->m_Items[2] == 0, 0LL);
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
  UISliderWithButton__normalMode((UISliderWithButton_o *)this, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__SetStaticLabels(
        CommandCardExceedConfirmDialog_o *this,
        System_Int32_array *itemUsableCounts,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  UILabel_o *titleLabel; // x21
  System_String_o *IsNullOrEmpty; // x0
  _BOOL8 v19; // x1
  System_String_o *v20; // x21
  System_String_o *v21; // x1
  UILabel_o *descriptionLabel; // x22
  struct UILabel_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *useItemLabel; // x21
  UILabel_o *v27; // x21
  UnityEngine_Object_o *useItemLabel2; // x21
  __int64 v29; // x2
  UILabel_o *v30; // x21
  struct ItemEntity_array *exceedItemEntities; // x8
  signed int max_length; // w8
  System_String_o **v33; // x9
  UILabel_o *itemNameLabel; // x20
  System_String_o *v35; // x21
  struct ItemEntity_array *v36; // x8
  ItemEntity_o *v37; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x20
  struct UILabel_array *classOnlyLabels; // x20
  int v41; // w8
  unsigned int v42; // w21
  UILabel_o *v43; // x19

  if ( (byte_4B48757 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, itemUsableCounts);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v6);
    sub_1BDB878(&StringLiteral_3663/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, v7);
    sub_1BDB878(&StringLiteral_3653/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_ITEM"*/, v8);
    sub_1BDB878(&StringLiteral_3652/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_DESCRIPTION"*/, v9);
    sub_1BDB878(&StringLiteral_3727/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, v10);
    sub_1BDB878(&StringLiteral_3666/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, v11);
    sub_1BDB878(&StringLiteral_3664/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM_TOTAL"*/, v12);
    sub_1BDB878(&StringLiteral_1/*""*/, v13);
    sub_1BDB878(&StringLiteral_3651/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v14);
    sub_1BDB878(&StringLiteral_3667/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, v15);
    sub_1BDB878(&StringLiteral_3654/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v16);
    byte_4B48757 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3667/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_66;
  UILabel__set_text(titleLabel, IsNullOrEmpty, 0LL);
  IsNullOrEmpty = (System_String_o *)System_Linq_Enumerable__Sum(
                                       (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                       0LL);
  if ( (int)IsNullOrEmpty <= 1 )
  {
    v20 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3666/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0LL);
    v20 = IsNullOrEmpty;
  }
  if ( !itemUsableCounts )
    goto LABEL_66;
  if ( (int)itemUsableCounts->max_length <= 1 )
  {
    v21 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3652/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_DESCRIPTION"*/, 0LL);
  }
  descriptionLabel = this->fields.descriptionLabel;
  IsNullOrEmpty = System_String__Concat_62572260(v20, v21, 0LL);
  if ( !descriptionLabel )
    goto LABEL_66;
  UILabel__set_text(descriptionLabel, IsNullOrEmpty, 0LL);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v20, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v23 = this->fields.descriptionLabel;
    if ( !v23 )
      goto LABEL_66;
    IsNullOrEmpty = v23->fields.mText;
    if ( !IsNullOrEmpty )
      goto LABEL_66;
    v24 = System_String__Replace_62618808(
            IsNullOrEmpty,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    UILabel__set_text(v23, v24, 0LL);
  }
  IsNullOrEmpty = (System_String_o *)this->fields.descriptionLabel;
  if ( !IsNullOrEmpty )
    goto LABEL_66;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL);
  IsNullOrEmpty = (System_String_o *)System_Linq_Enumerable__Sum(
                                       (System_Collections_Generic_IEnumerable_int__o *)itemUsableCounts,
                                       0LL);
  v19 = (int)IsNullOrEmpty > 1 || (unsigned __int64)((signed int)itemUsableCounts->max_length > 1);
  if ( !gameObject )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(gameObject, v19, 0LL);
  useItemLabel = (UnityEngine_Object_o *)this->fields.useItemLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useItemLabel, 0LL, 0LL) )
  {
    v27 = this->fields.useItemLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, 0LL);
    if ( !v27 )
      goto LABEL_66;
    UILabel__set_text(v27, IsNullOrEmpty, 0LL);
  }
  useItemLabel2 = (UnityEngine_Object_o *)this->fields.useItemLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(useItemLabel2, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v30 = this->fields.useItemLabel2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"COMMON_CONSUME_DESCRIPTION_TITLE2"*/, 0LL);
    if ( !v30 )
      goto LABEL_66;
    UILabel__set_text(v30, IsNullOrEmpty, 0LL);
  }
  exceedItemEntities = this->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_66;
  if ( !exceedItemEntities->max_length )
    goto LABEL_67;
  if ( exceedItemEntities->m_Items[0] )
  {
    max_length = itemUsableCounts->max_length;
    v33 = (System_String_o **)&StringLiteral_3664/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM_TOTAL"*/;
    itemNameLabel = this->fields.itemNameLabel;
    if ( max_length <= 1 )
      v33 = (System_String_o **)&StringLiteral_3663/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/;
    v35 = *v33;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get(v35, 0LL);
    v36 = this->fields.exceedItemEntities;
    if ( v36 )
    {
      if ( !v36->max_length )
        goto LABEL_67;
      v37 = v36->m_Items[0];
      if ( v37 )
      {
        IsNullOrEmpty = System_String__Format(IsNullOrEmpty, (Il2CppObject *)v37->fields.name, 0LL);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, IsNullOrEmpty, 0LL);
          goto LABEL_53;
        }
      }
    }
LABEL_66:
    sub_1BDBAD4(IsNullOrEmpty, v19);
  }
LABEL_53:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3654/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_66;
  UILabel__set_text(decideButtonLabel, IsNullOrEmpty, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_66;
  UILabel__set_text(cancelButtonLabel, IsNullOrEmpty, 0LL);
  classOnlyLabels = this->fields.classOnlyLabels;
  if ( !classOnlyLabels )
    goto LABEL_66;
  v41 = classOnlyLabels->max_length;
  if ( v41 >= 1 )
  {
    v42 = 0;
    while ( v42 < v41 )
    {
      v43 = classOnlyLabels->m_Items[v42];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CLASS_ONLY_ITEM"*/, 0LL);
      if ( !v43 )
        goto LABEL_66;
      UILabel__set_text(v43, IsNullOrEmpty, 0LL);
      v41 = classOnlyLabels->max_length;
      if ( (int)++v42 >= v41 )
        return;
    }
LABEL_67:
    sub_1BDBADC(IsNullOrEmpty, v19, v29);
  }
}


void __fastcall CommandCardExceedConfirmDialog__SetUseItemIcon(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommandCardExceedConfirmDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct ItemEntity_array *exceedItemEntities; // x8
  UnityEngine_Object_o *useItemIcon; // x20
  struct ItemEntity_array *v8; // x8
  struct ItemIconComponent_o *v9; // x8
  UnityEngine_Object_o *iconSprite; // x20
  struct ItemIconComponent_o *v11; // x8
  UnityEngine_Object_o *useItemIcon2; // x20
  struct ItemEntity_array *v13; // x8
  struct ItemIconComponent_o *v14; // x8
  UnityEngine_Object_o *v15; // x20
  struct ItemIconComponent_o *v16; // x8
  struct ItemEntity_array *v17; // x8
  __int64 v18; // x23
  unsigned __int64 max_length; // x11
  unsigned __int64 v20; // x10
  struct UnityEngine_GameObject_array *classOnlyObjects; // x9
  unsigned __int64 v22; // x12
  __int64 v23; // x11
  UnityEngine_GameObject_o *v24; // x20

  v3 = this;
  if ( (byte_4B48759 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    this = (CommandCardExceedConfirmDialog_o *)sub_1BDB878(&StringLiteral_24693/*"validClassIds"*/, v5);
    byte_4B48759 = 1;
  }
  exceedItemEntities = v3->fields.exceedItemEntities;
  if ( !exceedItemEntities )
    goto LABEL_43;
  if ( (int)exceedItemEntities->max_length < 2 )
    goto LABEL_31;
  useItemIcon = (UnityEngine_Object_o *)v3->fields.useItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(useItemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v3->fields.exceedItemEntities;
    if ( !v8 )
      goto LABEL_43;
    if ( !v8->max_length )
      goto LABEL_45;
    this = (CommandCardExceedConfirmDialog_o *)v3->fields.useItemIcon;
    if ( !this )
      goto LABEL_43;
    ItemIconComponent__SetItem_39931520((ItemIconComponent_o *)this, v8->m_Items[0], -1, 1, 0LL);
    v9 = v3->fields.useItemIcon;
    if ( !v9 )
      goto LABEL_43;
    iconSprite = (UnityEngine_Object_o *)v9->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v3->fields.useItemIcon;
      if ( !v11 )
        goto LABEL_43;
      this = (CommandCardExceedConfirmDialog_o *)v11->fields.iconSprite;
      if ( !this )
        goto LABEL_43;
      ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, void *))this->klass[2]._1.klass)(
        this,
        1LL,
        this->klass[2]._1.fields);
    }
  }
  useItemIcon2 = (UnityEngine_Object_o *)v3->fields.useItemIcon2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(useItemIcon2, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_31;
  v13 = v3->fields.exceedItemEntities;
  if ( !v13 )
    goto LABEL_43;
  if ( v13->max_length <= 1 )
LABEL_45:
    sub_1BDBADC(this, method, v2);
  this = (CommandCardExceedConfirmDialog_o *)v3->fields.useItemIcon2;
  if ( !this )
    goto LABEL_43;
  ItemIconComponent__SetItem_39931520((ItemIconComponent_o *)this, v13->m_Items[1], -1, 1, 0LL);
  v14 = v3->fields.useItemIcon2;
  if ( !v14 )
    goto LABEL_43;
  v15 = (UnityEngine_Object_o *)v14->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = v3->fields.useItemIcon2;
    if ( v16 )
    {
      this = (CommandCardExceedConfirmDialog_o *)v16->fields.iconSprite;
      if ( this )
      {
        this = (CommandCardExceedConfirmDialog_o *)((__int64 (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, void *))this->klass[2]._1.klass)(
                                                     this,
                                                     1LL,
                                                     this->klass[2]._1.fields);
        goto LABEL_31;
      }
    }
LABEL_43:
    sub_1BDBAD4(this, method);
  }
LABEL_31:
  v17 = v3->fields.exceedItemEntities;
  if ( !v17 )
    goto LABEL_43;
  v18 = 4LL;
  while ( 1 )
  {
    max_length = v17->max_length;
    v20 = v18 - 4;
    if ( v18 - 4 >= (int)max_length )
      break;
    classOnlyObjects = v3->fields.classOnlyObjects;
    if ( !classOnlyObjects )
      goto LABEL_43;
    v22 = classOnlyObjects->max_length;
    if ( (__int64)v20 >= (int)v22 )
      break;
    if ( v20 >= max_length )
      goto LABEL_45;
    v23 = *((_QWORD *)&v17->obj.klass + v18);
    if ( v23 )
    {
      if ( v20 >= v22 )
        goto LABEL_45;
      this = *(CommandCardExceedConfirmDialog_o **)(v23 + 104);
      if ( !this )
        goto LABEL_43;
      v24 = (UnityEngine_GameObject_o *)*((_QWORD *)&classOnlyObjects->obj.klass + v18);
      this = (CommandCardExceedConfirmDialog_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                   (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                   (Il2CppObject *)StringLiteral_24693/*"validClassIds"*/,
                                                   (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( !v24 )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive(v24, (unsigned __int8)this & 1, 0LL);
      v17 = v3->fields.exceedItemEntities;
    }
    ++v18;
    if ( !v17 )
      goto LABEL_43;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetValueLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleCommandData_array *previousCommandDataList; // x8
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v16; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x0
  UILabel_o *afterStatusLabel2Sprites; // x21
  UILabel_o *previousStatusLabel2Sprites; // x21
  System_String_o *v21; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x22
  const MethodInfo *v25; // x2
  int32_t v26; // w0
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *useItemText; // x21
  UILabel_o *v30; // x21
  CommandCardExceedConfirmDialog_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *useItemText2; // x21
  UILabel_o *v37; // x21
  CommandCardExceedConfirmDialog_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UnityEngine_Object_o *blackoutBoardText; // x21
  UILabel_o *v44; // x21
  System_String_o *v45; // x22
  long double inited; // q0
  _QWORD *v47; // x23
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0
  UnityEngine_Object_o *blackoutBoardText2; // x21
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  long double v54; // q0
  _QWORD *v55; // x23
  __int64 v56; // x8
  __int64 v57; // x0
  __int64 v58; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
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
  if ( (byte_4B48758 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_object___, *(_QWORD *)&itemUseCount);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_3655/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v8);
    sub_1BDB878(&StringLiteral_3659/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, v9);
    sub_1BDB878(&StringLiteral_3657/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, v10);
    sub_1BDB878(&StringLiteral_3661/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, v11);
    sub_1BDB878(&StringLiteral_3662/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, v12);
    this = (CommandCardExceedConfirmDialog_o *)sub_1BDB878(&StringLiteral_3656/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v13);
    byte_4B48758 = 1;
  }
  previousCommandDataList = v4->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_76;
  if ( (int)previousCommandDataList->max_length >= 2 )
  {
    previousStatusLabel2Sprites = v4->fields.previousStatusLabel2Sprites;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
    v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62613552(v21, NumberFormat, v23, 0LL);
    if ( !previousStatusLabel2Sprites )
      goto LABEL_76;
    UILabel__set_text(previousStatusLabel2Sprites, (System_String_o *)this, 0LL);
    afterStatusLabel2Sprites = v4->fields.afterStatusLabel2Sprites;
  }
  else
  {
    previousStatusLabel = v4->fields.previousStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
    v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
    v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62613552(v16, v17, v18, 0LL);
    if ( !previousStatusLabel )
      goto LABEL_76;
    UILabel__set_text(previousStatusLabel, (System_String_o *)this, 0LL);
    afterStatusLabel2Sprites = v4->fields.afterStatusLabel;
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3655/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL);
  v26 = CommandCardExceedConfirmDialog__GetAfterCommandCardParam(v4, itemUseCount, v25);
  v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v26, 0LL);
  v28 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62613552(v24, v27, v28, 0LL);
  if ( !afterStatusLabel2Sprites )
    goto LABEL_76;
  UILabel__set_text(afterStatusLabel2Sprites, (System_String_o *)this, 0LL);
  useItemText = (UnityEngine_Object_o *)v4->fields.useItemText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useItemText, 0LL, 0LL) )
  {
    v30 = v4->fields.useItemText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
    if ( !v4->fields.sliderWithButton )
      goto LABEL_76;
    v31 = this;
    v83 = UISliderWithButton__sliderValueChange(v4->fields.sliderWithButton, 0LL);
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v32, v33, v34);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format((System_String_o *)v31, v35, 0LL);
    if ( !v30 )
      goto LABEL_76;
    UILabel__set_text(v30, (System_String_o *)this, 0LL);
  }
  useItemText2 = (UnityEngine_Object_o *)v4->fields.useItemText2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(useItemText2, 0LL, 0LL) )
  {
    v37 = v4->fields.useItemText2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
    if ( !v4->fields.sliderWithButton2 )
      goto LABEL_76;
    v38 = this;
    v82 = UISliderWithButton__sliderValueChange(v4->fields.sliderWithButton2, 0LL);
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v39, v40, v41);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format((System_String_o *)v38, v42, 0LL);
    if ( !v37 )
      goto LABEL_76;
    UILabel__set_text(v37, (System_String_o *)this, 0LL);
  }
  blackoutBoardText = (UnityEngine_Object_o *)v4->fields.blackoutBoardText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardText, 0LL, 0LL) )
  {
    v44 = v4->fields.blackoutBoardText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3661/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, 0LL);
    v47 = Method_System_Array_Empty_object___;
    v48 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v48 )
    {
      sub_1C2BF64(Method_System_Array_Empty_object___);
      v48 = v47[7];
    }
    v49 = *(_QWORD *)(v48 + 16);
    if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
      v49 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v49 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v49);
    v50 = *(_QWORD *)(v47[7] + 16LL);
    if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
      v50 = sub_1C2BF08(inited);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62613688(
                                                 v45,
                                                 **(System_Object_array ***)(v50 + 184),
                                                 0LL);
    if ( !v44 )
      goto LABEL_76;
    UILabel__set_text(v44, (System_String_o *)this, 0LL);
  }
  blackoutBoardText2 = (UnityEngine_Object_o *)v4->fields.blackoutBoardText2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blackoutBoardText2, 0LL, 0LL) )
  {
    v52 = v4->fields.blackoutBoardText2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3661/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_SHORT_ITEM_INFO_MSG"*/, 0LL);
    v55 = Method_System_Array_Empty_object___;
    v56 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
    if ( !v56 )
    {
      sub_1C2BF64(Method_System_Array_Empty_object___);
      v56 = v55[7];
    }
    v57 = *(_QWORD *)(v56 + 16);
    if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
      v57 = sub_1C2BF08(v54);
    if ( !*(_DWORD *)(v57 + 224) )
      v54 = j_il2cpp_runtime_class_init_0(v57);
    v58 = *(_QWORD *)(v55[7] + 16LL);
    if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
      v58 = sub_1C2BF08(v54);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62613688(
                                                 v53,
                                                 **(System_Object_array ***)(v58 + 184),
                                                 0LL);
    if ( v52 )
    {
      UILabel__set_text(v52, (System_String_o *)this, 0LL);
      goto LABEL_60;
    }
LABEL_76:
    sub_1BDBAD4(this, *(_QWORD *)&itemUseCount);
  }
LABEL_60:
  itemCountLabel = v4->fields.itemCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
  v81 = itemUseCount;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v61, v62, v63);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format(v60, v64, 0LL);
  if ( !itemCountLabel )
    goto LABEL_76;
  UILabel__set_text(itemCountLabel, (System_String_o *)this, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(v4, itemUseCount, v65);
  requiredQpLabel = v4->fields.requiredQpLabel;
  v68 = RequiredQp;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3659/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_76;
  UILabel__set_text(requiredQpLabel, (System_String_o *)this, 0LL);
  requiredQpText = v4->fields.requiredQpText;
  this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetRequiredQpText(
                                               v70,
                                               v68,
                                               v4->fields.userQp >= v68,
                                               v71);
  if ( !requiredQpText )
    goto LABEL_76;
  UILabel__set_text(requiredQpText, (System_String_o *)this, 0LL);
  userQpLabel = v4->fields.userQpLabel;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0LL);
  if ( !userQpLabel )
    goto LABEL_76;
  UILabel__set_text(userQpLabel, (System_String_o *)this, 0LL);
  userQpText = v4->fields.userQpText;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__GetNumberFormatLong(v4->fields.userQp, 0LL);
  if ( !userQpText )
    goto LABEL_76;
  v74 = v68;
  UILabel__set_text(userQpText, (System_String_o *)this, 0LL);
  messageLabel = v4->fields.messageLabel;
  MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(v76, v4->fields.userQp >= v74, v77);
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get(MessageLocalizationKey, 0LL);
  if ( !messageLabel )
    goto LABEL_76;
  UILabel__set_text(messageLabel, (System_String_o *)this, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_76;
  if ( v4->fields.userQp < v74 || itemUseCount <= 0 )
    v80 = 3LL;
  else
    v80 = 0LL;
  ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, __int64, void *))this->klass[1]._1.klass)(
    this,
    v80,
    1LL,
    this->klass[1]._1.fields);
}


void __fastcall CommandCardExceedConfirmDialog__UpdateDisplay(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v2; // x19
  struct BattleCommandData_array *previousCommandDataList; // x8
  int max_length; // w21
  UnityEngine_Object_o *bgSprite; // x20
  int32_t v6; // w1

  v2 = this;
  if ( (byte_4B48762 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48762 = 1;
  }
  previousCommandDataList = v2->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_17;
  max_length = previousCommandDataList->max_length;
  bgSprite = (UnityEngine_Object_o *)v2->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    this = (CommandCardExceedConfirmDialog_o *)v2->fields.bgSprite;
    if ( !this )
      goto LABEL_17;
    if ( max_length <= 1 )
      v6 = 668;
    else
      v6 = 730;
    UIWidget__set_width((UIWidget_o *)this, v6, 0LL);
  }
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousBase;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousBase2Sprite) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterBase2Sprite) == 0LL) )
  {
LABEL_17:
    sub_1BDBAD4(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B48761 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48761 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}