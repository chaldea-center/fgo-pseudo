void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_421480A & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421480A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  BattleServantConfConponent_o *p_onRequest; // x20
  System_Action_int__o *v11; // x21
  struct System_Action_int__o *onRequest; // t1

  if ( (byte_4214808 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&itemUseCount);
    byte_4214808 = 1;
  }
  onRequest = this->fields.onRequest;
  p_onRequest = (BattleServantConfConponent_o *)&this->fields.onRequest;
  v11 = onRequest;
  if ( onRequest )
  {
    p_onRequest->klass = 0LL;
    sub_B0D840(p_onRequest, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, itemUseCount, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  }
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
    sub_B0D97C(this);
  return this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetItemUsableCount(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  struct ItemEntity_o *v8; // x8
  int v9; // w8

  if ( (byte_4214807 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4214807 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v8 = this->fields.exceedItemEntity) == 0LL )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  v9 = (this->fields.constantMaxStatus - this->fields.nowCommandCardParam) / v8->fields.value;
  if ( *(_DWORD *)(Instance + 28) >= v9 )
    return v9;
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
  System_String_o **v5; // x8

  if ( (byte_4214804 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3225/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/, isOk);
    sub_B0D8A4(&StringLiteral_3220/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/, v4);
    byte_4214804 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_3220/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  if ( !isOk )
    v5 = (System_String_o **)&StringLiteral_3225/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v5;
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
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
      sub_B0D97C(UseQp);
    v6 += UseQp;
    nowCommandCardParam += exceedItemEntity->fields.value;
  }
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

  if ( (byte_4214803 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    sub_B0D8A4(&StringLiteral_3222/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, v6);
    byte_4214803 = 1;
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3222/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0LL);
    return System_String__Format(v8, NumberFormat, 0LL);
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
    sub_B0D97C(this);
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
      v11 = sub_B0D9A8(this);
      sub_B0D948(v11, 0LL);
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
  if ( (byte_4214806 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_4214806 = 1;
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
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v4; // w0
  const MethodInfo *v5; // x2

  if ( (byte_4214805 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_4214805 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlaySystemSe(8, 0LL);
    sliderWithButton = this->fields.sliderWithButton;
    if ( !sliderWithButton )
      sub_B0D97C(0LL);
    v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
    CommandCardExceedConfirmDialog__CallOnRequest(this, v4, v5);
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
    sub_B0D97C(0LL);
  v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
  CommandCardExceedConfirmDialog__SetCommandCard(this, v4, v5);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v4, v6);
}


void __fastcall CommandCardExceedConfirmDialog__Open(
        CommandCardExceedConfirmDialog_o *this,
        UserServantCommandCardEntity_o *userServantCommandCardEntity,
        BattleCommandData_o *previousCommandData,
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Action_o *v29; // x26
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int64_t Instance; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  struct UserItemEntity_o *EntityDefinitely; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UserCommandCodeMaster_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct CommandCardRankParamMaster_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  CommandCardExceedConfirmDialog_o *v72; // x0
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x2
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  const MethodInfo *v77; // x2
  int32_t v78; // w1
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  BalanceConfig_c *v86; // x0
  const MethodInfo *v87; // x1
  int32_t ItemUsableCount; // w20
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v97; // x21
  __int64 v98; // x1
  __int64 v99; // x2
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v102; // x21
  __int64 v103; // x1
  __int64 v104; // x2
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v106; // x20
  EventDelegate_Callback_o *v107; // x21

  if ( (byte_42147FF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, userServantCommandCardEntity);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v15);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v16);
    sub_B0D8A4(&Method_CommandCardExceedConfirmDialog_EndOpen__, v17);
    sub_B0D8A4(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, v18);
    sub_B0D8A4(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, v19);
    sub_B0D8A4(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v24);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v25);
    sub_B0D8A4(&EventDelegate_TypeInfo, v26);
    sub_B0D8A4(&NetworkManager_TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_42147FF = 1;
  }
  v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, userServantCommandCardEntity, previousCommandData);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onRequest,
    (System_Int32_array **)onRequest,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.previousCommandData = previousCommandData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.previousCommandData,
    (System_Int32_array **)previousCommandData,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_28;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    exceedItemId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.exceedItemEntity = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.exceedItemEntity,
    (System_Int32_array **)Entity,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userExceedItemEntity,
    (System_Int32_array **)EntityDefinitely,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v58 = (struct UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  this->fields.userCommandCodeMaster = v58;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.userCommandCodeId = userCommandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v65 = (struct CommandCardRankParamMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = v65;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandCardRankParamMaster,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Instance = CommandCardExceedConfirmDialog__GetNowCommandCardParam(v72, userServantCommandCardEntity, cardIndex, v73);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = Instance;
  if ( !commandCardRankParamMaster )
    goto LABEL_28;
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(commandCardRankParamMaster, Instance, v74);
  v78 = RankParamEntity ? RankParamEntity->fields.rank : 0;
  Instance = (int64_t)this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = v78;
  if ( !Instance )
    goto LABEL_28;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities((CommandCardRankParamMaster_o *)Instance, v78, v77);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.beyondRankParamEntities,
    (System_Int32_array **)BeyondEntities,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v86 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v86->static_fields->CommandCardParamUpMax;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_28;
  this->fields.userQp = *(_DWORD *)(Instance + 96);
  ItemUsableCount = CommandCardExceedConfirmDialog__GetItemUsableCount(this, v87);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, ItemUsableCount, v89);
  CommandCardExceedConfirmDialog__SetCommandCard(this, 1, v90);
  CommandCardExceedConfirmDialog__SetValueLabels(this, 1, v91);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, ItemUsableCount, v92);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_28;
  onChange = sliderWithButton->fields.onChange;
  v97 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v93, v94);
  EventDelegate_Callback___ctor(
    v97,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  Instance = (int64_t)EventDelegate__Set_28893376(onChange, v97, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (onClick = decideButton->fields.onClick,
        v102 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v98, v99),
        EventDelegate_Callback___ctor(
          v102,
          (Il2CppObject *)this,
          Method_CommandCardExceedConfirmDialog_OnClickDecide__,
          0LL),
        Instance = (int64_t)EventDelegate__Set_28893376(onClick, v102, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
LABEL_28:
    sub_B0D97C(Instance);
  }
  v106 = cancelButton->fields.onClick;
  v107 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v103, v104);
  EventDelegate_Callback___ctor(v107, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_OnClickCancel__, 0LL);
  EventDelegate__Set_28893376(v106, v107, 0LL);
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
    sub_B0D97C(0LL);
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
  CombineCommandCardComponent_o *previousCommandCard; // x0
  BattleCommandData_o *previousCommandData; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  BattleCommandData_o *v9; // x21
  struct ItemEntity_o *exceedItemEntity; // x8
  int32_t v11; // w3

  if ( (byte_4214800 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandData_TypeInfo, *(_QWORD *)&itemUseCount);
    byte_4214800 = 1;
  }
  previousCommandCard = this->fields.previousCommandCard;
  if ( !previousCommandCard )
    goto LABEL_8;
  CombineCommandCardComponent__DispCommandCard(
    previousCommandCard,
    this->fields.previousCommandData,
    this->fields.userCommandCodeId,
    this->fields.nowCommandCardParam,
    0,
    0,
    0LL);
  previousCommandData = this->fields.previousCommandData;
  v9 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v7, v8);
  BattleCommandData___ctor_18508280(v9, previousCommandData, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !v9
    || (v11 = this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
        v9->fields.commandCardParam = v11,
        (previousCommandCard = this->fields.afterCommandCard) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(previousCommandCard);
  }
  CombineCommandCardComponent__DispCommandCard(previousCommandCard, v9, this->fields.userCommandCodeId, v11, 0, 0, 0LL);
}


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
    sub_B0D97C(sliderWithButton);
  }
  if ( itemUsableCount < 2 )
    UISliderWithButton__grayMode(sliderWithButton, 0LL);
  else
    UISliderWithButton__normalMode(sliderWithButton, 0LL);
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
  UILabel_o *descriptionLabel; // x21
  UILabel_o *itemNameLabel; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x19

  if ( (byte_4214801 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&itemUsableCount);
    sub_B0D8A4(&StringLiteral_3224/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, v5);
    sub_B0D8A4(&StringLiteral_3226/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, v6);
    sub_B0D8A4(&StringLiteral_3215/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v7);
    sub_B0D8A4(&StringLiteral_3227/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, v8);
    sub_B0D8A4(&StringLiteral_3216/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v9);
    byte_4214801 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3227/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3226/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0LL);
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3224/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, 0LL);
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
    sub_B0D97C(gameObject);
  }
LABEL_17:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3216/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3215/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v12; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v14; // x0
  System_String_o *decideButton; // x0
  UILabel_o *afterStatusLabel; // x21
  struct ItemEntity_o *exceedItemEntity; // x8
  System_String_o *v18; // x22
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x21
  int32_t v27; // w20
  UILabel_o *requiredQpText; // x21
  CommandCardExceedConfirmDialog_o *v29; // x0
  const MethodInfo *v30; // x3
  UILabel_o *userQpLabel; // x21
  UILabel_o *userQpText; // x21
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v34; // x0
  const MethodInfo *v35; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v37; // x1
  int32_t v38; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214802 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&itemUseCount);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3217/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v6);
    sub_B0D8A4(&StringLiteral_3221/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, v7);
    sub_B0D8A4(&StringLiteral_3219/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, v8);
    sub_B0D8A4(&StringLiteral_3223/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, v9);
    sub_B0D8A4(&StringLiteral_3218/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v10);
    byte_4214802 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3218/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.nowCommandCardParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.constantMaxStatus, 0LL);
  decideButton = System_String__Format_43845440(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel )
    goto LABEL_20;
  UILabel__set_text(previousStatusLabel, decideButton, 0LL);
  afterStatusLabel = this->fields.afterStatusLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3217/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    goto LABEL_20;
  v18 = decideButton;
  v19 = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                          this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
                          0LL);
  v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.constantMaxStatus, 0LL);
  decideButton = System_String__Format_43845440(v18, v19, v20, 0LL);
  if ( !afterStatusLabel )
    goto LABEL_20;
  UILabel__set_text(afterStatusLabel, decideButton, 0LL);
  itemCountLabel = this->fields.itemCountLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3219/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
  v38 = itemUseCount;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  decideButton = System_String__Format(v22, v23, 0LL);
  if ( !itemCountLabel )
    goto LABEL_20;
  UILabel__set_text(itemCountLabel, decideButton, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(this, itemUseCount, v24);
  requiredQpLabel = this->fields.requiredQpLabel;
  v27 = RequiredQp;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3221/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_20;
  UILabel__set_text(requiredQpLabel, decideButton, 0LL);
  requiredQpText = this->fields.requiredQpText;
  decideButton = CommandCardExceedConfirmDialog__GetRequiredQpText(v29, v27, v27 <= this->fields.userQp, v30);
  if ( !requiredQpText )
    goto LABEL_20;
  UILabel__set_text(requiredQpText, decideButton, 0LL);
  userQpLabel = this->fields.userQpLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3223/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0LL);
  if ( !userQpLabel )
    goto LABEL_20;
  UILabel__set_text(userQpLabel, decideButton, 0LL);
  userQpText = this->fields.userQpText;
  decideButton = LocalizationManager__GetNumberFormat(this->fields.userQp, 0LL);
  if ( !userQpText
    || (UILabel__set_text(userQpText, decideButton, 0LL),
        messageLabel = this->fields.messageLabel,
        MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
                                   v34,
                                   v27 <= this->fields.userQp,
                                   v35),
        decideButton = LocalizationManager__Get(MessageLocalizationKey, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, decideButton, 0LL),
        (decideButton = (System_String_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_20:
    sub_B0D97C(decideButton);
  }
  if ( v27 <= this->fields.userQp )
    v37 = 0LL;
  else
    v37 = 3LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    decideButton,
    v37,
    1LL,
    decideButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
}


UnityEngine_GameObject_o *__fastcall CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4214809 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214809 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}