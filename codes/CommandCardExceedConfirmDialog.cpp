void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4354657 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4354657 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__CallOnRequest(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *onRequest; // x21

  if ( (byte_4354653 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__Invoke__);
    byte_4354653 = 1;
  }
  onRequest = this->fields.onRequest;
  if ( onRequest )
  {
    this->fields.onRequest = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.onRequest,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(onRequest, itemUseCount, (const MethodInfo_264ABCC *)Method_System_Action_int__Invoke__);
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
  if ( (byte_4354656 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_B70694(&BattleCommandData_TypeInfo);
    byte_4354656 = 1;
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
        v11 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo),
        BattleCommandData___ctor_18955368(v11, data, 0LL),
        (exceedItemEntity = v10->fields.exceedItemEntity) == 0LL)
    || !v11
    || (v13 = v10->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
        v11->fields.commandCardParam = v13,
        !afterCard) )
  {
    sub_B7076C(this, previousCard);
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
    sub_B7076C(this, itemUseCount);
  return this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetItemUsableCount(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  struct ItemEntity_o *v7; // x8
  int v8; // w8

  if ( (byte_4354652 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354652 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !MasterData_WarQuestSelectionMaster
    || (Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                              MasterData_WarQuestSelectionMaster,
                              Instance,
                              exceedItemEntity->fields.id,
                              0LL)) == 0
    || (v7 = this->fields.exceedItemEntity) == 0LL )
  {
LABEL_14:
    sub_B7076C(Instance, v4);
  }
  v8 = (this->fields.constantMaxStatus - this->fields.nowCommandCardParam) / v7->fields.value;
  if ( *(_DWORD *)(Instance + 28) >= v8 )
    return v8;
  else
    return *(_DWORD *)(Instance + 28);
}


System_String_o *__fastcall CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_435464F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3287/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/);
    sub_B70694(&StringLiteral_3282/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/);
    byte_435464F = 1;
  }
  v4 = (System_String_o **)&StringLiteral_3282/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  if ( !isOk )
    v4 = (System_String_o **)&StringLiteral_3287/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v4;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetNowCommandCardParam(
        CommandCardExceedConfirmDialog_o *this,
        UserServantCommandCardEntity_o *entity,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Int32_array *commandCardParam; // x8
  __int64 v6; // x0

  if ( !entity )
    return 0;
  commandCardParam = entity->fields.commandCardParam;
  if ( !commandCardParam )
    return 0;
  if ( commandCardParam->max_length <= index )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  return commandCardParam->m_Items[index + 1];
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetRequiredQp(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  int32_t nowCommandCardParam; // w22
  int32_t v6; // w20
  int32_t i; // w23
  __int64 UseQp; // x0
  __int64 v9; // x1
  struct ItemEntity_o *exceedItemEntity; // x8

  if ( itemUseCount < 1 )
    return 0;
  nowCommandCardParam = this->fields.nowCommandCardParam;
  v6 = 0;
  for ( i = 0; i < itemUseCount; ++i )
  {
    UseQp = CommandCardExceedConfirmDialog__GetUseQp(this, nowCommandCardParam, method);
    exceedItemEntity = this->fields.exceedItemEntity;
    if ( !exceedItemEntity )
      sub_B7076C(UseQp, v9);
    v6 += UseQp;
    nowCommandCardParam += exceedItemEntity->fields.value;
  }
  return v6;
}


System_String_o *__fastcall CommandCardExceedConfirmDialog__GetRequiredQpText(
        CommandCardExceedConfirmDialog_o *this,
        int32_t requiredQp,
        bool isOk,
        const MethodInfo *method)
{
  System_String_o *v7; // x20
  Il2CppObject *NumberFormat; // x1

  if ( (byte_435464E & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3284/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/);
    byte_435464E = 1;
  }
  if ( isOk )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__GetNumberFormat(requiredQp, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3284/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0LL);
    return System_String__Format(v7, NumberFormat, 0LL);
  }
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetUseQp(
        CommandCardExceedConfirmDialog_o *this,
        int32_t param,
        const MethodInfo *method)
{
  struct CommandCardRankParamEntity_array *beyondRankParamEntities; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t v6; // w12
  CommandCardRankParamEntity_o **m_Items; // x10
  CommandCardRankParamEntity_o *v8; // x11
  int32_t rankMaxParam; // w12
  __int64 v11; // x0

  beyondRankParamEntities = this->fields.beyondRankParamEntities;
  if ( !beyondRankParamEntities )
LABEL_15:
    sub_B7076C(this, param);
  max_length = beyondRankParamEntities->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  v6 = 0;
  m_Items = beyondRankParamEntities->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    v8 = m_Items[v5];
    if ( v6 <= param )
      break;
    if ( !v8 )
      goto LABEL_15;
LABEL_11:
    ++v5;
    v6 = v8->fields.rankMaxParam + 1;
    if ( (int)v5 >= max_length )
      return 0;
  }
  if ( !v8 )
    goto LABEL_15;
  rankMaxParam = v8->fields.rankMaxParam;
  if ( rankMaxParam < param && rankMaxParam != -1 )
    goto LABEL_11;
  return v8->fields.useQp;
}


void __fastcall CommandCardExceedConfirmDialog__OnClickCancel(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4354651 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    byte_4354651 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlaySystemSe(1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CommandCardExceedConfirmDialog__OnClickDecide(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v5; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4354650 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    byte_4354650 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlaySystemSe(8, 0LL);
    sliderWithButton = this->fields.sliderWithButton;
    if ( !sliderWithButton )
      sub_B7076C(0LL, v3);
    v5 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
    CommandCardExceedConfirmDialog__CallOnRequest(this, v5, v6);
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
    sub_B7076C(0LL, method);
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
  System_Action_o *v15; // x26
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int64_t Instance; // x0
  const MethodInfo *v29; // x1
  struct ItemEntity_o *Entity; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  struct UserItemEntity_o *EntityDefinitely; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UserCommandCodeMaster_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct CommandCardRankParamMaster_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  CommandCardExceedConfirmDialog_o *v59; // x0
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x2
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  const MethodInfo *v64; // x2
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  BalanceConfig_c *v72; // x0
  int32_t ItemUsableCount; // w20
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v81; // x21
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v84; // x21
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v86; // x20
  EventDelegate_Callback_o *v87; // x21

  if ( (byte_435464B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_CommandCardExceedConfirmDialog_EndOpen__);
    sub_B70694(&Method_CommandCardExceedConfirmDialog_OnClickCancel__);
    sub_B70694(&Method_CommandCardExceedConfirmDialog_OnClickDecide__);
    sub_B70694(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&EventDelegate_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435464B = 1;
  }
  v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.onRequest,
    (System_Int32_array **)onRequest,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.previousCommandDataList = previousCommandData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.previousCommandDataList,
    (System_Int32_array **)previousCommandData,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_28;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    exceedItemId,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.exceedItemEntity = Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.exceedItemEntity,
    (System_Int32_array **)Entity,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       Instance,
                       exceedItemId,
                       0LL);
  this->fields.userExceedItemEntity = EntityDefinitely;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userExceedItemEntity,
    (System_Int32_array **)EntityDefinitely,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v45 = (struct UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  this->fields.userCommandCodeMaster = v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.userCommandCodeId = userCommandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v52 = (struct CommandCardRankParamMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardRankParamMaster,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = CommandCardExceedConfirmDialog__GetNowCommandCardParam(v59, userServantCommandCardEntity, cardIndex, v60);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = Instance;
  if ( !commandCardRankParamMaster )
    goto LABEL_28;
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(commandCardRankParamMaster, Instance, v61);
  v29 = RankParamEntity ? (const MethodInfo *)(unsigned int)RankParamEntity->fields.rank : 0LL;
  Instance = (int64_t)this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = (int)v29;
  if ( !Instance )
    goto LABEL_28;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(
                     (CommandCardRankParamMaster_o *)Instance,
                     (int32_t)v29,
                     v64);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.beyondRankParamEntities,
    (System_Int32_array **)BeyondEntities,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v72->static_fields->CommandCardParamUpMax;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_28;
  this->fields.userQp = *(_DWORD *)(Instance + 96);
  ItemUsableCount = CommandCardExceedConfirmDialog__GetItemUsableCount(this, v29);
  CommandCardExceedConfirmDialog__UpdateDisplay(this, v74);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, ItemUsableCount, v75);
  CommandCardExceedConfirmDialog__SetCommandCard(this, 1, v76);
  CommandCardExceedConfirmDialog__SetValueLabels(this, 1, v77);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, ItemUsableCount, v78);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_28;
  onChange = sliderWithButton->fields.onChange;
  v81 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v81,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  Instance = (int64_t)EventDelegate__Set_29879148(onChange, v81, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (onClick = decideButton->fields.onClick,
        v84 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v84,
          (Il2CppObject *)this,
          Method_CommandCardExceedConfirmDialog_OnClickDecide__,
          0LL),
        Instance = (int64_t)EventDelegate__Set_29879148(onClick, v84, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
LABEL_28:
    sub_B7076C(Instance, v29);
  }
  v86 = cancelButton->fields.onClick;
  v87 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v87, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_OnClickCancel__, 0LL);
  EventDelegate__Set_29879148(v86, v87, 0LL);
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
    sub_B7076C(0LL, isOk);
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
  __int64 v14; // x0

  previousCommandDataList = this->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_14;
  max_length = previousCommandDataList->max_length;
  if ( max_length < 2 )
  {
    if ( !max_length )
    {
LABEL_16:
      v14 = sub_B70798(this);
      sub_B70738(v14, 0LL);
    }
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
    sub_B7076C(this, *(_QWORD *)&itemUseCount);
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
    sub_B7076C(sliderWithButton, *(_QWORD *)&itemUsableCount);
  }
  if ( itemUsableCount < 2 )
    UISliderWithButton__grayMode(sliderWithButton, 0LL);
  else
    UISliderWithButton__normalMode(sliderWithButton, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__SetStaticLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUsableCount,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x21
  System_String_o *gameObject; // x0
  __int64 v7; // x1
  UILabel_o *descriptionLabel; // x21
  UILabel_o *itemNameLabel; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x19

  if ( (byte_435464C & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3286/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/);
    sub_B70694(&StringLiteral_3288/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_3277/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_B70694(&StringLiteral_3289/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/);
    sub_B70694(&StringLiteral_3278/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/);
    byte_435464C = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3289/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3288/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_23;
  UILabel__set_text(descriptionLabel, gameObject, 0LL);
  gameObject = (System_String_o *)this->fields.descriptionLabel;
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, itemUsableCount > 1, 0LL);
  if ( this->fields.exceedItemEntity )
  {
    itemNameLabel = this->fields.itemNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3286/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, 0LL);
    exceedItemEntity = this->fields.exceedItemEntity;
    if ( exceedItemEntity )
    {
      gameObject = System_String__Format(gameObject, (Il2CppObject *)exceedItemEntity->fields.name, 0LL);
      if ( itemNameLabel )
      {
        UILabel__set_text(itemNameLabel, gameObject, 0LL);
        goto LABEL_17;
      }
    }
LABEL_23:
    sub_B7076C(gameObject, v7);
  }
LABEL_17:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3278/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_23;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandCardExceedConfirmDialog__SetValueLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  CommandCardExceedConfirmDialog_o *v4; // x19
  struct BattleCommandData_array *previousCommandDataList; // x8
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v7; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v9; // x0
  UILabel_o *afterStatusLabel; // x21
  UILabel_o *previousStatusLabel2Sprites; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  struct ItemEntity_o *exceedItemEntity; // x8
  System_String_o *v16; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v20; // x22
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x21
  int32_t v26; // w20
  UILabel_o *requiredQpText; // x21
  CommandCardExceedConfirmDialog_o *v28; // x0
  const MethodInfo *v29; // x3
  UILabel_o *userQpLabel; // x21
  UILabel_o *userQpText; // x21
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v33; // x0
  const MethodInfo *v34; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v36; // x1
  int32_t v37; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_435464D & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3279/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/);
    sub_B70694(&StringLiteral_3283/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/);
    sub_B70694(&StringLiteral_3281/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/);
    sub_B70694(&StringLiteral_3285/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/);
    this = (CommandCardExceedConfirmDialog_o *)sub_B70694(&StringLiteral_3280/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/);
    byte_435464D = 1;
  }
  previousCommandDataList = v4->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_31;
  if ( (int)previousCommandDataList->max_length < 2 )
  {
    previousStatusLabel = v4->fields.previousStatusLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
    v9 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
    this = (CommandCardExceedConfirmDialog_o *)System_String__Format_44753704(v7, NumberFormat, v9, 0LL);
    if ( previousStatusLabel )
    {
      UILabel__set_text(previousStatusLabel, (System_String_o *)this, 0LL);
      afterStatusLabel = v4->fields.afterStatusLabel;
      goto LABEL_15;
    }
LABEL_31:
    sub_B7076C(this, *(_QWORD *)&itemUseCount);
  }
  previousStatusLabel2Sprites = v4->fields.previousStatusLabel2Sprites;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  v13 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.nowCommandCardParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_44753704(v12, v13, v14, 0LL);
  if ( !previousStatusLabel2Sprites )
    goto LABEL_31;
  UILabel__set_text(previousStatusLabel2Sprites, (System_String_o *)this, 0LL);
  afterStatusLabel = v4->fields.afterStatusLabel2Sprites;
LABEL_15:
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3279/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL);
  exceedItemEntity = v4->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    goto LABEL_31;
  v16 = (System_String_o *)this;
  v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                          v4->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
                          0LL);
  v18 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v4->fields.constantMaxStatus, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format_44753704(v16, v17, v18, 0LL);
  if ( !afterStatusLabel )
    goto LABEL_31;
  UILabel__set_text(afterStatusLabel, (System_String_o *)this, 0LL);
  itemCountLabel = v4->fields.itemCountLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3281/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
  v37 = itemUseCount;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v21);
  this = (CommandCardExceedConfirmDialog_o *)System_String__Format(v20, v22, 0LL);
  if ( !itemCountLabel )
    goto LABEL_31;
  UILabel__set_text(itemCountLabel, (System_String_o *)this, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(v4, itemUseCount, v23);
  requiredQpLabel = v4->fields.requiredQpLabel;
  v26 = RequiredQp;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3283/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_31;
  UILabel__set_text(requiredQpLabel, (System_String_o *)this, 0LL);
  requiredQpText = v4->fields.requiredQpText;
  this = (CommandCardExceedConfirmDialog_o *)CommandCardExceedConfirmDialog__GetRequiredQpText(
                                               v28,
                                               v26,
                                               v26 <= v4->fields.userQp,
                                               v29);
  if ( !requiredQpText )
    goto LABEL_31;
  UILabel__set_text(requiredQpText, (System_String_o *)this, 0LL);
  userQpLabel = v4->fields.userQpLabel;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3285/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0LL);
  if ( !userQpLabel )
    goto LABEL_31;
  UILabel__set_text(userQpLabel, (System_String_o *)this, 0LL);
  userQpText = v4->fields.userQpText;
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__GetNumberFormat(v4->fields.userQp, 0LL);
  if ( !userQpText )
    goto LABEL_31;
  UILabel__set_text(userQpText, (System_String_o *)this, 0LL);
  messageLabel = v4->fields.messageLabel;
  MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(v33, v26 <= v4->fields.userQp, v34);
  this = (CommandCardExceedConfirmDialog_o *)LocalizationManager__Get(MessageLocalizationKey, 0LL);
  if ( !messageLabel )
    goto LABEL_31;
  UILabel__set_text(messageLabel, (System_String_o *)this, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v4->fields.decideButton;
  if ( !this )
    goto LABEL_31;
  if ( v26 <= v4->fields.userQp )
    v36 = 0LL;
  else
    v36 = 3LL;
  ((void (__fastcall *)(CommandCardExceedConfirmDialog_o *, __int64, __int64, void *))this->klass[1]._1.klass)(
    this,
    v36,
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
  struct CombineCommandCardComponent_array *previousCommandCard2Sprites; // x8
  __int64 v8; // x20
  int v9; // w9
  unsigned int v10; // w22
  struct CombineCommandCardComponent_array *afterCommandCard2Sprites; // x8
  bool v12; // w20
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4354655 & 1) == 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354655 = 1;
  }
  previousCommandDataList = v2->fields.previousCommandDataList;
  if ( !previousCommandDataList )
    goto LABEL_42;
  max_length = previousCommandDataList->max_length;
  bgSprite = (UnityEngine_Object_o *)v2->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (CommandCardExceedConfirmDialog_o *)v2->fields.bgSprite;
    if ( !this )
      goto LABEL_42;
    if ( max_length <= 1 )
      v6 = 668;
    else
      v6 = 730;
    UIWidget__set_width((UIWidget_o *)this, v6, 0LL);
  }
  previousCommandCard2Sprites = v2->fields.previousCommandCard2Sprites;
  if ( !previousCommandCard2Sprites )
    goto LABEL_42;
  v8 = 4LL;
  while ( 1 )
  {
    v9 = previousCommandCard2Sprites->max_length;
    v10 = v8 - 4;
    if ( (int)v8 - 4 >= v9 )
      break;
    if ( v10 >= v9 )
      goto LABEL_43;
    this = (CommandCardExceedConfirmDialog_o *)*((_QWORD *)&previousCommandCard2Sprites->obj.klass + v8);
    if ( this )
    {
      this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL);
        afterCommandCard2Sprites = v2->fields.afterCommandCard2Sprites;
        if ( afterCommandCard2Sprites )
        {
          if ( v10 >= afterCommandCard2Sprites->max_length )
          {
LABEL_43:
            v13 = sub_B70798(this);
            sub_B70738(v13, 0LL);
          }
          this = (CommandCardExceedConfirmDialog_o *)*((_QWORD *)&afterCommandCard2Sprites->obj.klass + v8);
          if ( this )
          {
            this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL);
              previousCommandCard2Sprites = v2->fields.previousCommandCard2Sprites;
              ++v8;
              if ( previousCommandCard2Sprites )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_42;
  }
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousStatusLabel2Sprites;
  if ( !this )
    goto LABEL_42;
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterStatusLabel2Sprites;
  if ( !this )
    goto LABEL_42;
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length > 1, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousCommandCard;
  if ( !this )
    goto LABEL_42;
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_42;
  v12 = max_length < 2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, max_length < 2, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterCommandCard;
  if ( !this )
    goto LABEL_42;
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousStatusLabel;
  if ( !this )
    goto LABEL_42;
  this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL);
  this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterStatusLabel;
  if ( !this
    || (this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.previousExceedSprite) == 0LL)
    || (this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL),
        (this = (CommandCardExceedConfirmDialog_o *)v2->fields.afterExceedSprite) == 0LL)
    || (this = (CommandCardExceedConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_42:
    sub_B7076C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL);
}


UnityEngine_GameObject_o *__fastcall CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4354654 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354654 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B7076C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}