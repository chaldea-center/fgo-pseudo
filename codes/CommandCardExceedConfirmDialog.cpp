void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19A64 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19A64 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_onRequest, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleCommandData_o *v14; // x23
  struct ItemEntity_o *exceedItemEntity; // x8
  int32_t v16; // w3

  v10 = this;
  if ( (byte_4B19A63 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1BCA7E0(&BattleCommandData_TypeInfo, previousCard, afterCard);
    byte_4B19A63 = 1;
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
        v14 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v11, v12, v13),
        BattleCommandData___ctor_44073012(v14, data, 0LL),
        (exceedItemEntity = v10->fields.exceedItemEntity) == 0LL)
    || !v14
    || (v16 = v10->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
        v14->fields.commandCardParam = v16,
        !afterCard) )
  {
    sub_1BCAA3C(this, previousCard);
  }
  CombineCommandCardComponent__DispCommandCard(afterCard, v14, v10->fields.userCommandCodeId, v16, 0, 0, 0LL);
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
  struct ItemEntity_o *exceedItemEntity; // x8

  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    sub_1BCAA3C(this, *(_QWORD *)&itemUseCount);
  return this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetItemUsableCount(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  struct ItemEntity_o *v13; // x8
  int v14; // w8

  if ( (byte_4B19A60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B19A60 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = NetworkManager__get_UserId(0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !MasterData_object
    || (Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                              (UserItemMaster_o *)MasterData_object,
                              Instance,
                              exceedItemEntity->fields.id,
                              0LL)) == 0
    || (v13 = this->fields.exceedItemEntity) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v9);
  }
  v14 = (this->fields.constantMaxStatus - this->fields.nowCommandCardParam) / v13->fields.value;
  if ( *(_DWORD *)(Instance + 28) >= v14 )
    return v14;
  else
    return *(_DWORD *)(Instance + 28);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o **v6; // x8

  if ( (byte_4B19A5D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3737/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/, isOk, method);
    sub_1BCA7E0(&StringLiteral_3732/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/, v4, v5);
    byte_4B19A5D = 1;
  }
  if ( isOk )
    v6 = (System_String_o **)&StringLiteral_3732/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  else
    v6 = (System_String_o **)&StringLiteral_3737/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v6;
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
    sub_1BCAA44(this, entity);
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
      sub_1BCAA3C(UseQp, v8);
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
  __int64 v7; // x2
  System_String_o *v9; // x20
  Il2CppObject *NumberFormat; // x1

  if ( (byte_4B19A5C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp, isOk);
    sub_1BCA7E0(&StringLiteral_3734/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, v6, v7);
    byte_4B19A5C = 1;
  }
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isOk )
      return LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    if ( isOk )
      return LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  return System_String__Format(v9, NumberFormat, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&param);
  max_length = beyondRankParamEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCAA44(this, param);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19A5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, method, v2);
    byte_4B19A5F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v4 = Method_CommandCardExceedConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnClickDecide(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v8; // w0
  const MethodInfo *v9; // x2

  if ( (byte_4B19A5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, method, v2);
    byte_4B19A5E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v4 = Method_CommandCardExceedConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommandCardExceedConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    sliderWithButton = this->fields.sliderWithButton;
    if ( !sliderWithButton )
      sub_1BCAA3C(0LL, v6);
    v8 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
    CommandCardExceedConfirmDialog__CallOnRequest(this, v8, v9);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  void *Instance; // x0
  const MethodInfo *v51; // x1
  Il2CppObject *Entity; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *MasterData_object; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x0
  __int64 v67; // x1
  struct System_Int32_array *commandCardParam; // x8
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  BalanceConfig_c *v78; // x0
  int32_t ItemUsableCount; // w20
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x2
  __int64 v85; // x2
  __int64 v86; // x3
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v89; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v95; // x21
  __int64 v96; // x2
  __int64 v97; // x3
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v99; // x20
  EventDelegate_Callback_o *v100; // x21

  if ( (byte_4B19A59 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userServantCommandCardEntity, previousCommandData);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_CommandCardExceedConfirmDialog_EndOpen__, v19, v20);
    sub_1BCA7E0(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, v21, v22);
    sub_1BCA7E0(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, v23, v24);
    sub_1BCA7E0(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    byte_4B19A59 = 1;
  }
  v37 = (System_Action_o *)sub_1BCAA2C(
                             System_Action_TypeInfo,
                             userServantCommandCardEntity,
                             previousCommandData,
                             userCommandCodeId);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onRequest, (int64_t)onRequest, v38, v39, v40, v41, v42, v43);
  this->fields.previousCommandDataList = previousCommandData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.previousCommandDataList,
    (int64_t)previousCommandData,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             exceedItemId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.exceedItemEntity = (struct ItemEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.exceedItemEntity,
    (int64_t)Entity,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.userCommandCodeId = userCommandCodeId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = (struct CommandCardRankParamMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandCardRankParamMaster,
    (int64_t)MasterData_object,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( userServantCommandCardEntity && (commandCardParam = userServantCommandCardEntity->fields.commandCardParam) != 0LL )
  {
    if ( commandCardParam->max_length <= cardIndex )
      sub_1BCAA44(v66, v67);
    v51 = (const MethodInfo *)(unsigned int)commandCardParam->m_Items[cardIndex + 1];
  }
  else
  {
    v51 = 0LL;
  }
  Instance = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = (int)v51;
  if ( !Instance )
    goto LABEL_22;
  Instance = (void *)CommandCardRankParamMaster__GetParamRank(
                       (CommandCardRankParamMaster_o *)Instance,
                       (int32_t)v51,
                       0LL);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = (int)Instance;
  if ( !commandCardRankParamMaster )
    goto LABEL_22;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(commandCardRankParamMaster, (int32_t)Instance, 0LL);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.beyondRankParamEntities,
    (int64_t)BeyondEntities,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v78 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v77);
    v78 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v78->static_fields->CommandCardParamUpMax;
  Instance = UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_22;
  this->fields.userQp = *((_DWORD *)Instance + 24);
  ItemUsableCount = CommandCardExceedConfirmDialog__GetItemUsableCount(this, v51);
  CommandCardExceedConfirmDialog__UpdateDisplay(this, v80);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, ItemUsableCount, v81);
  CommandCardExceedConfirmDialog__SetCommandCard(this, 1, v82);
  CommandCardExceedConfirmDialog__SetValueLabels(this, 1, v83);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, ItemUsableCount, v84);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_22;
  onChange = sliderWithButton->fields.onChange;
  v89 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v51, v85, v86);
  EventDelegate_Callback___ctor(
    v89,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v90);
  Instance = EventDelegate__Set_47333340(onChange, v89, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (onClick = decideButton->fields.onClick,
        v95 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v51, v91, v92),
        EventDelegate_Callback___ctor(
          v95,
          (Il2CppObject *)this,
          (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickDecide__,
          0LL),
        Instance = EventDelegate__Set_47333340(onClick, v95, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v51);
  }
  v99 = cancelButton->fields.onClick;
  v100 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v51, v96, v97);
  EventDelegate_Callback___ctor(
    v100,
    (Il2CppObject *)this,
    (intptr_t)Method_CommandCardExceedConfirmDialog_OnClickCancel__,
    0LL);
  EventDelegate__Set_47333340(v99, v100, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetButtonState(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  struct UICommonButton_o *decideButton; // x0
  __int64 v4; // x1

  decideButton = this->fields.decideButton;
  if ( !decideButton )
    sub_1BCAA3C(0LL, isOk);
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
      sub_1BCAA44(this, *(_QWORD *)&itemUseCount);
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
    sub_1BCAA3C(this, *(_QWORD *)&itemUseCount);
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
    sub_1BCAA3C(sliderWithButton, *(_QWORD *)&itemUsableCount);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *gameObject; // x0
  __int64 v17; // x1
  UILabel_o *descriptionLabel; // x21
  __int64 v19; // x1
  UILabel_o *itemNameLabel; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x19

  if ( (byte_4B19A5A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&itemUsableCount, method);
    sub_1BCA7E0(&StringLiteral_3736/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_3738/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3727/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3739/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3728/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v13, v14);
    byte_4B19A5A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemUsableCount);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || (gameObject = System_String__Format(gameObject, (Il2CppObject *)exceedItemEntity->fields.name, 0LL),
        !itemNameLabel) )
  {
LABEL_20:
    sub_1BCAA3C(gameObject, v17);
  }
  UILabel__set_text(itemNameLabel, gameObject, 0LL);
LABEL_15:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3728/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_20;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
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
  __int64 v6; // x2
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
  struct BattleCommandData_array *previousCommandDataList; // x8
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v19; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v21; // x0
  UILabel_o *afterStatusLabel; // x21
  UILabel_o *previousStatusLabel2Sprites; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  struct ItemEntity_o *exceedItemEntity; // x8
  CommandCardExceedConfirmDialog_o *v28; // x22
  Il2CppObject *v29; // x23
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  UILabel_o *itemCountLabel; // x21
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x21
  int32_t v38; // w20
  UILabel_o *requiredQpText; // x21
  CommandCardExceedConfirmDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  UILabel_o *userQpLabel; // x21
  UILabel_o *userQpText; // x21
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v45; // x0
  const MethodInfo *v46; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v48; // x1
  int32_t v49; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B19A5B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&itemUseCount, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3729/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3733/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3731/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3735/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, v13, v14);
    this = (CommandCardExceedConfirmDialog_o *)sub_1BCA7E0(&StringLiteral_3730/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v15, v16);
    byte_4B19A5B = 1;
  }
  previousCommandDataList = v4->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_28;
  if ( (int)previousCommandDataList->max_length < 2 )
  {
    previousStatusLabel = v4->fields.previousStatusLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemUseCount);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
    v21 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62415592(v19, NumberFormat, v21, 0LL);
    if ( previousStatusLabel )
    {
      UILabel__set_text(previousStatusLabel, (System_String_o *)this, 0LL);
      afterStatusLabel = v4->fields.afterStatusLabel;
      goto LABEL_13;
    }
LABEL_28:
    sub_1BCAA3C(this, *(_QWORD *)&itemUseCount);
  }
  previousStatusLabel2Sprites = v4->fields.previousStatusLabel2Sprites;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&itemUseCount);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3730/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
  v26 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62415592(v24, v25, v26, 0LL);
  if ( !previousStatusLabel2Sprites )
    goto LABEL_28;
  UILabel__set_text(previousStatusLabel2Sprites, (System_String_o *)this, 0LL);
  afterStatusLabel = v4->fields.afterStatusLabel2Sprites;
LABEL_13:
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL);
  exceedItemEntity = v4->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    goto LABEL_28;
  v28 = this;
  v29 = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                          v4->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
                          0LL);
  v30 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_62415592((System_String_o *)v28, v29, v30, 0LL);
  if ( !afterStatusLabel )
    goto LABEL_28;
  UILabel__set_text(afterStatusLabel, (System_String_o *)this, 0LL);
  itemCountLabel = v4->fields.itemCountLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3731/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
  v49 = itemUseCount;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format(v33, v34, 0LL);
  if ( !itemCountLabel )
    goto LABEL_28;
  UILabel__set_text(itemCountLabel, (System_String_o *)this, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(v4, itemUseCount, v35);
  requiredQpLabel = v4->fields.requiredQpLabel;
  v38 = RequiredQp;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_28;
  UILabel__set_text(requiredQpLabel, (System_String_o *)this, 0LL);
  requiredQpText = v4->fields.requiredQpText;
  this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetRequiredQpText(
                                               v40,
                                               v38,
                                               v38 <= v4->fields.userQp,
                                               v41);
  if ( !requiredQpText )
    goto LABEL_28;
  UILabel__set_text(requiredQpText, (System_String_o *)this, 0LL);
  userQpLabel = v4->fields.userQpLabel;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0LL);
  if ( !userQpLabel )
    goto LABEL_28;
  UILabel__set_text(userQpLabel, (System_String_o *)this, 0LL);
  userQpText = v4->fields.userQpText;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__GetNumberFormat(v4->fields.userQp, 0LL);
  if ( !userQpText )
    goto LABEL_28;
  UILabel__set_text(userQpText, (System_String_o *)this, 0LL);
  messageLabel = v4->fields.messageLabel;
  MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(v45, v38 <= v4->fields.userQp, v46);
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get(MessageLocalizationKey, 0LL);
  if ( !messageLabel )
    goto LABEL_28;
  UILabel__set_text(messageLabel, (System_String_o *)this, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_28;
  if ( v38 <= v4->fields.userQp )
    v48 = 0LL;
  else
    v48 = 3LL;
  ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, __int64, void *))this->klass[1]._1.klass)(
    this,
    v48,
    1LL,
    this->klass[1]._1.fields);
}


void __fastcall CommandCardExceedConfirmDialog__UpdateDisplay(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommandCardExceedConfirmDialog_o *v3; // x19
  struct BattleCommandData_array *previousCommandDataList; // x8
  int max_length; // w21
  UnityEngine_Object_o *bgSprite; // x20
  int32_t v7; // w1

  v3 = this;
  if ( (byte_4B19A62 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A62 = 1;
  }
  previousCommandDataList = v3->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_17;
  max_length = previousCommandDataList->max_length;
  bgSprite = (UnityEngine_Object_o *)v3->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    this = (CommandCardExceedConfirmDialog_o *)v3->fields.bgSprite;
    if ( !this )
      goto LABEL_17;
    if ( max_length <= 1 )
      v7 = 668;
    else
      v7 = 730;
    UIWidget__set_width((UIWidget_o *)this, v7, 0LL);
  }
  this = (CommandCardExceedConfirmDialog_o *)v3->fields.previousBase;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v3->fields.afterBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v3->fields.previousBase2Sprite) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v3->fields.afterBase2Sprite) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B19A61 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19A61 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}