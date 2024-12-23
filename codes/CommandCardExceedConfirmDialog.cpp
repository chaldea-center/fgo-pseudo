void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B6A4E3 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6A4E3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__CallOnRequest(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o *onRequest; // x20
  PartyOrganizationUtility_o *p_onRequest; // x0

  onRequest = this->fields.onRequest;
  if ( onRequest )
  {
    p_onRequest = (PartyOrganizationUtility_o *)&this->fields.onRequest;
    p_onRequest->klass = 0LL;
    sub_1BE4A70(p_onRequest, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onRequest->fields.m_target)(
      onRequest->fields.original_method_info,
      (unsigned int)itemUseCount,
      *(_QWORD *)&onRequest->fields.extra_arg);
  }
}


void __fastcall CommandCardExceedConfirmDialog__DisplayCommandCards(
        CommandCardExceedConfirmDialog_o *this,
        CombineCommandCardComponent_o *previousCard,
        CombineCommandCardComponent_o *afterCard,
        BattleCommandData_o *data,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v10; // x21
  BattleCommandData_o *v11; // x23
  struct ItemEntity_o *exceedItemEntity; // x8
  int32_t v13; // w3

  v10 = this;
  if ( (byte_4B6A4E2 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1BE4ACC(&BattleCommandData_TypeInfo, previousCard);
    byte_4B6A4E2 = 1;
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
        v11 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_44330188(v11, data, 0LL),
        (exceedItemEntity = v10->fields.exceedItemEntity) == 0LL)
    || !v11
    || (v13 = v10->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
        v11->fields.commandCardParam = v13,
        !afterCard) )
  {
    sub_1BE4D28(this, previousCard);
  }
  CombineCommandCardComponent__DispCommandCard(afterCard, v11, v10->fields.userCommandCodeId, v13, 0, 0, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__EndOpen(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetAfterCommandCardParam(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  struct ItemEntity_o *exceedItemEntity; // x8

  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    sub_1BE4D28(this, itemUseCount);
  return this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetItemUsableCount(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  struct ItemEntity_o *v9; // x8
  int v10; // w8

  if ( (byte_4B6A4DF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B6A4DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    byte_4B61717 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !MasterData_object
    || (Instance = UserItemMaster__GetEntityDefinitely(
                     (UserItemMaster_o *)MasterData_object,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     exceedItemEntity->fields.id,
                     0LL)) == 0LL
    || (v9 = this->fields.exceedItemEntity) == 0LL )
  {
LABEL_17:
    sub_1BE4D28(Instance, v6);
  }
  v10 = (this->fields.constantMaxStatus - this->fields.nowCommandCardParam) / v9->fields.value;
  if ( *((_DWORD *)Instance + 7) >= v10 )
    return v10;
  else
    return *((_DWORD *)Instance + 7);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_4B6A4DC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3746/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/, isOk);
    sub_1BE4ACC(&StringLiteral_3741/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/, v4);
    byte_4B6A4DC = 1;
  }
  if ( isOk )
    v5 = (System_String_o **)&StringLiteral_3741/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  else
    v5 = (System_String_o **)&StringLiteral_3746/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v5;
}


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
    sub_1BE4D30(this, entity);
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
  struct ItemEntity_o *exceedItemEntity; // x8

  if ( itemUseCount < 1 )
    return 0;
  nowCommandCardParam = this->fields.nowCommandCardParam;
  v4 = itemUseCount;
  v6 = 0;
  do
  {
    UseQp = CommandCardExceedConfirmDialog__GetUseQp(this, nowCommandCardParam, method);
    exceedItemEntity = this->fields.exceedItemEntity;
    if ( !exceedItemEntity )
      sub_1BE4D28(UseQp, v8);
    v6 += UseQp;
    --v4;
    nowCommandCardParam += exceedItemEntity->fields.value;
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

  if ( (byte_4B6A4DB & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    sub_1BE4ACC(&StringLiteral_3743/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, v6);
    byte_4B6A4DB = 1;
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
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3743/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0LL);
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
    sub_1BE4D28(this, param);
  max_length = beyondRankParamEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BE4D30(this, *(_QWORD *)&param);
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

  if ( (byte_4B6A4DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, method);
    byte_4B6A4DE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnClickDecide(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v7; // w0
  const MethodInfo *v8; // x2

  if ( (byte_4B6A4DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, method);
    byte_4B6A4DD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_CommandCardExceedConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    sliderWithButton = this->fields.sliderWithButton;
    if ( !sliderWithButton )
      sub_1BE4D28(0LL, v5);
    v7 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
    CommandCardExceedConfirmDialog__CallOnRequest(this, v7, v8);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnSliderValueChange(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v4; // w20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    sub_1BE4D28(0LL, method);
  v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
  CommandCardExceedConfirmDialog__SetCommandCard(this, v4, v5);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v4, v6);
}


void __fastcall CommandCardExceedConfirmDialog__Open(
        CommandCardExceedConfirmDialog_o *this,
        UserServantCommandCardEntity_o *userServantCommandCardEntity,
        BattleCommandData_array *previousCommandData,
        int64_t userCommandCodeId,
        int32_t exceedItemId,
        int32_t cardIndex,
        System_Action_int__o *onRequest,
        const MethodInfo *method)
{
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
  System_Action_o *v26; // x26
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *Instance; // x0
  const MethodInfo *v40; // x1
  Il2CppObject *Entity; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *MasterData_object; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x0
  __int64 v56; // x1
  struct System_Int32_array *commandCardParam; // x8
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  BalanceConfig_c *v66; // x0
  int32_t ItemUsableCount; // w20
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x2
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v75; // x21
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v78; // x21
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v80; // x20
  EventDelegate_Callback_o *v81; // x21

  if ( (byte_4B6A4D8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, userServantCommandCardEntity);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v15);
    sub_1BE4ACC(&EventDelegate_Callback_TypeInfo, v16);
    sub_1BE4ACC(&Method_CommandCardExceedConfirmDialog_EndOpen__, v17);
    sub_1BE4ACC(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, v18);
    sub_1BE4ACC(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, v19);
    sub_1BE4ACC(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__, v20);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v21);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v22);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v23);
    sub_1BE4ACC(&EventDelegate_TypeInfo, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_4B6A4D8 = 1;
  }
  v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.onRequest, (int64_t)onRequest, v27, v28, v29, v30, v31, v32);
  this->fields.previousCommandDataList = previousCommandData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.previousCommandDataList,
    (int64_t)previousCommandData,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             exceedItemId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.exceedItemEntity = (struct ItemEntity_o *)Entity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.exceedItemEntity,
    (int64_t)Entity,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.userCommandCodeId = userCommandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = (struct CommandCardRankParamMaster_o *)MasterData_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.commandCardRankParamMaster,
    (int64_t)MasterData_object,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( userServantCommandCardEntity && (commandCardParam = userServantCommandCardEntity->fields.commandCardParam) != 0LL )
  {
    if ( commandCardParam->max_length <= cardIndex )
      sub_1BE4D30(v55, v56);
    v40 = (const MethodInfo *)(unsigned int)commandCardParam->m_Items[cardIndex + 1];
  }
  else
  {
    v40 = 0LL;
  }
  Instance = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = (int)v40;
  if ( !Instance )
    goto LABEL_22;
  Instance = (void *)CommandCardRankParamMaster__GetParamRank(
                       (CommandCardRankParamMaster_o *)Instance,
                       (int32_t)v40,
                       0LL);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = (int)Instance;
  if ( !commandCardRankParamMaster )
    goto LABEL_22;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(commandCardRankParamMaster, (int32_t)Instance, 0LL);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.beyondRankParamEntities,
    (int64_t)BeyondEntities,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v66->static_fields->CommandCardParamUpMax;
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_22;
  this->fields.userQp = *((_DWORD *)Instance + 24);
  ItemUsableCount = CommandCardExceedConfirmDialog__GetItemUsableCount(this, v40);
  CommandCardExceedConfirmDialog__UpdateDisplay(this, v68);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, ItemUsableCount, v69);
  CommandCardExceedConfirmDialog__SetCommandCard(this, 1, v70);
  CommandCardExceedConfirmDialog__SetValueLabels(this, 1, v71);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, ItemUsableCount, v72);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_22;
  onChange = sliderWithButton->fields.onChange;
  v75 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v75,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  Instance = EventDelegate__Set_47620976(onChange, v75, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (onClick = decideButton->fields.onClick,
        v78 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v78,
          (Il2CppObject *)this,
          (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickDecide__,
          0LL),
        Instance = EventDelegate__Set_47620976(onClick, v78, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
LABEL_22:
    sub_1BE4D28(Instance, v40);
  }
  v80 = cancelButton->fields.onClick;
  v81 = (EventDelegate_Callback_o *)sub_1BE4D18(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v81,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickCancel__,
    0LL);
  EventDelegate__Set_47620976(v80, v81, 0LL);
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
    sub_1BE4D28(0LL, isOk);
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
      sub_1BE4D30(this, *(_QWORD *)&itemUseCount);
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
    sub_1BE4D28(this, *(_QWORD *)&itemUseCount);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetSliderWithButton(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUsableCount,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton; // x0

  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton
    || (UISliderWithButton__init(sliderWithButton, itemUsableCount, 0, 1, 0LL),
        (sliderWithButton = this->fields.sliderWithButton) == 0LL) )
  {
    sub_1BE4D28(sliderWithButton, *(_QWORD *)&itemUsableCount);
  }
  if ( itemUsableCount >= 2 )
    UISliderWithButton__normalMode(sliderWithButton, 0LL);
  else
    UISliderWithButton__grayMode(sliderWithButton, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetStaticLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUsableCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *gameObject; // x0
  __int64 v12; // x1
  UILabel_o *descriptionLabel; // x21
  UILabel_o *itemNameLabel; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x19

  if ( (byte_4B6A4D9 & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, *(_QWORD *)&itemUsableCount);
    sub_1BE4ACC(&StringLiteral_3745/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, v5);
    sub_1BE4ACC(&StringLiteral_3747/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, v6);
    sub_1BE4ACC(&StringLiteral_3736/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v7);
    sub_1BE4ACC(&StringLiteral_3748/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, v8);
    sub_1BE4ACC(&StringLiteral_3737/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v9);
    byte_4B6A4D9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3748/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3747/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_20;
  UILabel__set_text(descriptionLabel, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.descriptionLabel;
  if ( !gameObject )
    goto LABEL_20;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, itemUsableCount > 1, 0LL);
  if ( !this->fields.exceedItemEntity )
    goto LABEL_15;
  itemNameLabel = this->fields.itemNameLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3745/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || (gameObject = System_String__Format(gameObject, (Il2CppObject *)exceedItemEntity->fields.name, 0LL),
        !itemNameLabel) )
  {
LABEL_20:
    sub_1BE4D28(gameObject, v12);
  }
  UILabel__set_text(itemNameLabel, gameObject, 0LL);
LABEL_15:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_20;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_20;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetValueLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleCommandData_array *previousCommandDataList; // x8
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v13; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v15; // x0
  UILabel_o *afterStatusLabel; // x21
  UILabel_o *previousStatusLabel2Sprites; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  struct ItemEntity_o *exceedItemEntity; // x8
  CommandCardExceedConfirmDialog_o *v22; // x22
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x21
  int32_t v34; // w20
  UILabel_o *requiredQpText; // x21
  CommandCardExceedConfirmDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  UILabel_o *userQpLabel; // x21
  UILabel_o *userQpText; // x21
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v41; // x0
  const MethodInfo *v42; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v44; // x1
  int32_t v45; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B6A4DA & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&itemUseCount);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_3738/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v6);
    sub_1BE4ACC(&StringLiteral_3742/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, v7);
    sub_1BE4ACC(&StringLiteral_3740/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, v8);
    sub_1BE4ACC(&StringLiteral_3744/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, v9);
    this = (CommandCardExceedConfirmDialog_o *)sub_1BE4ACC(&StringLiteral_3739/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v10);
    byte_4B6A4DA = 1;
  }
  previousCommandDataList = v4->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_28;
  if ( (int)previousCommandDataList->max_length < 2 )
  {
    previousStatusLabel = v4->fields.previousStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
    v15 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62713180(v13, NumberFormat, v15, 0LL);
    if ( previousStatusLabel )
    {
      UILabel__set_text(previousStatusLabel, (System_String_o *)this, 0LL);
      afterStatusLabel = v4->fields.afterStatusLabel;
      goto LABEL_13;
    }
LABEL_28:
    sub_1BE4D28(this, *(_QWORD *)&itemUseCount);
  }
  previousStatusLabel2Sprites = v4->fields.previousStatusLabel2Sprites;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
  v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62713180(v18, v19, v20, 0LL);
  if ( !previousStatusLabel2Sprites )
    goto LABEL_28;
  UILabel__set_text(previousStatusLabel2Sprites, (System_String_o *)this, 0LL);
  afterStatusLabel = v4->fields.afterStatusLabel2Sprites;
LABEL_13:
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL);
  exceedItemEntity = v4->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    goto LABEL_28;
  v22 = this;
  v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                          v4->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
                          0LL);
  v24 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62713180((System_String_o *)v22, v23, v24, 0LL);
  if ( !afterStatusLabel )
    goto LABEL_28;
  UILabel__set_text(afterStatusLabel, (System_String_o *)this, 0LL);
  itemCountLabel = v4->fields.itemCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
  v45 = itemUseCount;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v27, v28, v29);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format(v26, v30, 0LL);
  if ( !itemCountLabel )
    goto LABEL_28;
  UILabel__set_text(itemCountLabel, (System_String_o *)this, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(v4, itemUseCount, v31);
  requiredQpLabel = v4->fields.requiredQpLabel;
  v34 = RequiredQp;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_28;
  UILabel__set_text(requiredQpLabel, (System_String_o *)this, 0LL);
  requiredQpText = v4->fields.requiredQpText;
  this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetRequiredQpText(
                                               v36,
                                               v34,
                                               v34 <= v4->fields.userQp,
                                               v37);
  if ( !requiredQpText )
    goto LABEL_28;
  UILabel__set_text(requiredQpText, (System_String_o *)this, 0LL);
  userQpLabel = v4->fields.userQpLabel;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0LL);
  if ( !userQpLabel )
    goto LABEL_28;
  UILabel__set_text(userQpLabel, (System_String_o *)this, 0LL);
  userQpText = v4->fields.userQpText;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__GetNumberFormat(v4->fields.userQp, 0LL);
  if ( !userQpText )
    goto LABEL_28;
  UILabel__set_text(userQpText, (System_String_o *)this, 0LL);
  messageLabel = v4->fields.messageLabel;
  MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(v41, v34 <= v4->fields.userQp, v42);
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get(MessageLocalizationKey, 0LL);
  if ( !messageLabel )
    goto LABEL_28;
  UILabel__set_text(messageLabel, (System_String_o *)this, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_28;
  if ( v34 <= v4->fields.userQp )
    v44 = 0LL;
  else
    v44 = 3LL;
  ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, __int64, void *))this->klass[1]._1.klass)(
    this,
    v44,
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
  if ( (byte_4B6A4E1 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A4E1 = 1;
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
    sub_1BE4D28(this, method);
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

  if ( (byte_4B6A4E0 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A4E0 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}