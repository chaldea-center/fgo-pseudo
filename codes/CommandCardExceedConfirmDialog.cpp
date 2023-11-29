void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FA57F & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA57F = 1;
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

  if ( (byte_40FA57D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&itemUseCount);
    byte_40FA57D = 1;
  }
  onRequest = this->fields.onRequest;
  p_onRequest = (BattleServantConfConponent_o *)&this->fields.onRequest;
  v11 = onRequest;
  if ( onRequest )
  {
    p_onRequest->klass = 0LL;
    sub_B16F98(p_onRequest, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, itemUseCount, (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
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
    sub_B170D4();
  return this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetItemUsableCount(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct ItemEntity_o *exceedItemEntity; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  struct ItemEntity_o *v10; // x8
  int v11; // w8

  if ( (byte_40FA57C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA57C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !MasterData_WarQuestSelectionMaster
    || (EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                             MasterData_WarQuestSelectionMaster,
                             UserId,
                             exceedItemEntity->fields.id,
                             0LL)) == 0LL
    || (v10 = this->fields.exceedItemEntity) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  v11 = (this->fields.constantMaxStatus - this->fields.nowCommandCardParam) / v10->fields.value;
  if ( EntityDefinitely->fields.num >= v11 )
    return v11;
  else
    return EntityDefinitely->fields.num;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o **v5; // x8

  if ( (byte_40FA579 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3204, isOk);
    sub_B16FFC(&StringLiteral_3199, v4);
    byte_40FA579 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_3199;
  if ( !isOk )
    v5 = (System_String_o **)&StringLiteral_3204;
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
  {
    sub_B17100(this, entity, *(_QWORD *)&index);
    sub_B170A0();
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
  int32_t UseQp; // w0
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
      sub_B170D4();
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

  if ( (byte_40FA578 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&requiredQp);
    sub_B16FFC(&StringLiteral_3201, v6);
    byte_40FA578 = 1;
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
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3201, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0LL);
    return System_String__Format(v8, NumberFormat, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  beyondRankParamEntities = this->fields.beyondRankParamEntities;
  if ( !beyondRankParamEntities )
LABEL_15:
    sub_B170D4();
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
      sub_B17100(this, *(_QWORD *)&param, method);
      sub_B170A0();
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
  if ( (byte_40FA57B & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FA57B = 1;
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

  if ( (byte_40FA57A & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FA57A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlaySystemSe(8, 0LL);
    sliderWithButton = this->fields.sliderWithButton;
    if ( !sliderWithButton )
      sub_B170D4();
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
    sub_B170D4();
  v4 = UISliderWithButton__sliderValueChange(sliderWithButton, 0LL);
  CommandCardExceedConfirmDialog__SetCommandCard(this, v4, v5);
  CommandCardExceedConfirmDialog__SetValueLabels(this, v4, v6);
}


// local variable allocation has failed, the output may be wrong!
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  WebViewManager_o *v51; // x0
  UserItemMaster_o *v52; // x24
  int64_t UserId; // x0
  struct UserItemEntity_o *EntityDefinitely; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  WebViewManager_o *v61; // x0
  struct UserCommandCodeMaster_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  WebViewManager_o *v69; // x0
  struct CommandCardRankParamMaster_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  CommandCardExceedConfirmDialog_o *v77; // x0
  const MethodInfo *v78; // x3
  int32_t NowCommandCardParam; // w0
  const MethodInfo *v80; // x2
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  const MethodInfo *v83; // x2
  int32_t v84; // w1
  CommandCardRankParamMaster_o *v85; // x0
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  BalanceConfig_c *v93; // x0
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v95; // x1
  int32_t ItemUsableCount; // w20
  const MethodInfo *v97; // x2
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v107; // x21
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v114; // x21
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v120; // x20
  EventDelegate_Callback_o *v121; // x21

  if ( (byte_40FA574 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userServantCommandCardEntity);
    sub_B16FFC(&BalanceConfig_TypeInfo, v15);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v16);
    sub_B16FFC(&Method_CommandCardExceedConfirmDialog_EndOpen__, v17);
    sub_B16FFC(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, v18);
    sub_B16FFC(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, v19);
    sub_B16FFC(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v24);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v25);
    sub_B16FFC(&EventDelegate_TypeInfo, v26);
    sub_B16FFC(&NetworkManager_TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_40FA574 = 1;
  }
  v29 = (System_Action_o *)sub_B170CC(
                             System_Action_TypeInfo,
                             userServantCommandCardEntity,
                             previousCommandData,
                             userCommandCodeId,
                             *(_QWORD *)&exceedItemId);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onRequest,
    (System_Int32_array **)onRequest,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.previousCommandData = previousCommandData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.previousCommandData,
    (System_Int32_array **)previousCommandData,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    exceedItemId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.exceedItemEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.exceedItemEntity,
    (System_Int32_array **)Entity,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v51 )
    goto LABEL_28;
  v52 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v51,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v52 )
    goto LABEL_28;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(v52, UserId, exceedItemId, 0LL);
  this->fields.userExceedItemEntity = EntityDefinitely;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userExceedItemEntity,
    (System_Int32_array **)EntityDefinitely,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v61 )
    goto LABEL_28;
  v62 = (struct UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v61,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  this->fields.userCommandCodeMaster = v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.userCommandCodeId = userCommandCodeId;
  v69 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v69 )
    goto LABEL_28;
  v70 = (struct CommandCardRankParamMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v69,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = v70;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardRankParamMaster,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  NowCommandCardParam = CommandCardExceedConfirmDialog__GetNowCommandCardParam(
                          v77,
                          userServantCommandCardEntity,
                          cardIndex,
                          v78);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = NowCommandCardParam;
  if ( !commandCardRankParamMaster )
    goto LABEL_28;
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(commandCardRankParamMaster, NowCommandCardParam, v80);
  v84 = RankParamEntity ? RankParamEntity->fields.rank : 0;
  v85 = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = v84;
  if ( !v85 )
    goto LABEL_28;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(v85, v84, v83);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.beyondRankParamEntities,
    (System_Int32_array **)BeyondEntities,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  v93 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v93 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v93->static_fields->CommandCardParamUpMax;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  this->fields.userQp = SelfUserGame->fields.qp;
  ItemUsableCount = CommandCardExceedConfirmDialog__GetItemUsableCount(this, v95);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, ItemUsableCount, v97);
  CommandCardExceedConfirmDialog__SetCommandCard(this, 1, v98);
  CommandCardExceedConfirmDialog__SetValueLabels(this, 1, v99);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, ItemUsableCount, v100);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_28;
  onChange = sliderWithButton->fields.onChange;
  v107 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v101, v102, v103, v104);
  EventDelegate_Callback___ctor(
    v107,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onChange, v107, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (onClick = decideButton->fields.onClick,
        v114 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v108, v109, v110, v111),
        EventDelegate_Callback___ctor(
          v114,
          (Il2CppObject *)this,
          Method_CommandCardExceedConfirmDialog_OnClickDecide__,
          0LL),
        EventDelegate__Set_29416612(onClick, v114, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
LABEL_28:
    sub_B170D4();
  }
  v120 = cancelButton->fields.onClick;
  v121 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v115, v116, v117, v118);
  EventDelegate_Callback___ctor(v121, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_OnClickCancel__, 0LL);
  EventDelegate__Set_29416612(v120, v121, 0LL);
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
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  BattleCommandData_o *v11; // x21
  struct ItemEntity_o *exceedItemEntity; // x8
  int32_t v13; // w3
  CombineCommandCardComponent_o *afterCommandCard; // x0

  if ( (byte_40FA575 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, *(_QWORD *)&itemUseCount);
    byte_40FA575 = 1;
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
  v11 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v7, v8, v9, v10);
  BattleCommandData___ctor_18726640(v11, previousCommandData, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !v11
    || (v13 = this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
        v11->fields.commandCardParam = v13,
        (afterCommandCard = this->fields.afterCommandCard) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  CombineCommandCardComponent__DispCommandCard(afterCommandCard, v11, this->fields.userCommandCodeId, v13, 0, 0, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__SetSliderWithButton(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUsableCount,
        const MethodInfo *method)
{
  UISliderWithButton_o *sliderWithButton; // x0
  UISliderWithButton_o *v6; // x0

  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton
    || (UISliderWithButton__init(sliderWithButton, itemUsableCount, 0, 1, 0LL),
        (v6 = this->fields.sliderWithButton) == 0LL) )
  {
    sub_B170D4();
  }
  if ( itemUsableCount < 2 )
    UISliderWithButton__grayMode(v6, 0LL);
  else
    UISliderWithButton__normalMode(v6, 0LL);
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
  System_String_o *v11; // x0
  UILabel_o *descriptionLabel; // x21
  System_String_o *v13; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *itemNameLabel; // x20
  System_String_o *v17; // x0
  struct ItemEntity_o *exceedItemEntity; // x8
  System_String_o *v19; // x0
  UILabel_o *decideButtonLabel; // x20
  System_String_o *v21; // x0
  UILabel_o *cancelButtonLabel; // x19
  System_String_o *v23; // x0

  if ( (byte_40FA576 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&itemUsableCount);
    sub_B16FFC(&StringLiteral_3203, v5);
    sub_B16FFC(&StringLiteral_3205, v6);
    sub_B16FFC(&StringLiteral_3194, v7);
    sub_B16FFC(&StringLiteral_3206, v8);
    sub_B16FFC(&StringLiteral_3195, v9);
    byte_40FA576 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3206, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, v11, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3205, 0LL);
  if ( !descriptionLabel )
    goto LABEL_23;
  UILabel__set_text(descriptionLabel, v13, 0LL);
  v14 = (UnityEngine_Component_o *)this->fields.descriptionLabel;
  if ( !v14 )
    goto LABEL_23;
  gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, itemUsableCount > 1, 0LL);
  if ( this->fields.exceedItemEntity )
  {
    itemNameLabel = this->fields.itemNameLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3203, 0LL);
    exceedItemEntity = this->fields.exceedItemEntity;
    if ( exceedItemEntity )
    {
      v19 = System_String__Format(v17, (Il2CppObject *)exceedItemEntity->fields.name, 0LL);
      if ( itemNameLabel )
      {
        UILabel__set_text(itemNameLabel, v19, 0LL);
        goto LABEL_17;
      }
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_17:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3195, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, v21, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3194, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_23;
  UILabel__set_text(cancelButtonLabel, v23, 0LL);
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
  System_String_o *v15; // x0
  UILabel_o *afterStatusLabel; // x21
  System_String_o *v17; // x0
  struct ItemEntity_o *exceedItemEntity; // x8
  System_String_o *v19; // x22
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x21
  int32_t v30; // w20
  System_String_o *v31; // x0
  UILabel_o *requiredQpText; // x21
  CommandCardExceedConfirmDialog_o *v33; // x0
  const MethodInfo *v34; // x3
  System_String_o *v35; // x0
  UILabel_o *userQpLabel; // x21
  System_String_o *v37; // x0
  UILabel_o *userQpText; // x21
  System_String_o *v39; // x0
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v41; // x0
  const MethodInfo *v42; // x2
  System_String_o *MessageLocalizationKey; // x0
  System_String_o *v44; // x0
  struct UICommonButton_o *decideButton; // x0
  __int64 v46; // x1
  int32_t v47; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA577 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&itemUseCount);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3196, v6);
    sub_B16FFC(&StringLiteral_3200, v7);
    sub_B16FFC(&StringLiteral_3198, v8);
    sub_B16FFC(&StringLiteral_3202, v9);
    sub_B16FFC(&StringLiteral_3197, v10);
    byte_40FA577 = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3197, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.nowCommandCardParam, 0LL);
  v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.constantMaxStatus, 0LL);
  v15 = System_String__Format_43739268(v12, NumberFormat, v14, 0LL);
  if ( !previousStatusLabel )
    goto LABEL_20;
  UILabel__set_text(previousStatusLabel, v15, 0LL);
  afterStatusLabel = this->fields.afterStatusLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3196, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    goto LABEL_20;
  v19 = v17;
  v20 = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                          this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
                          0LL);
  v21 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.constantMaxStatus, 0LL);
  v22 = System_String__Format_43739268(v19, v20, v21, 0LL);
  if ( !afterStatusLabel )
    goto LABEL_20;
  UILabel__set_text(afterStatusLabel, v22, 0LL);
  itemCountLabel = this->fields.itemCountLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3198, 0LL);
  v47 = itemUseCount;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v26 = System_String__Format(v24, v25, 0LL);
  if ( !itemCountLabel )
    goto LABEL_20;
  UILabel__set_text(itemCountLabel, v26, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(this, itemUseCount, v27);
  requiredQpLabel = this->fields.requiredQpLabel;
  v30 = RequiredQp;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3200, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_20;
  UILabel__set_text(requiredQpLabel, v31, 0LL);
  requiredQpText = this->fields.requiredQpText;
  v35 = CommandCardExceedConfirmDialog__GetRequiredQpText(v33, v30, v30 <= this->fields.userQp, v34);
  if ( !requiredQpText )
    goto LABEL_20;
  UILabel__set_text(requiredQpText, v35, 0LL);
  userQpLabel = this->fields.userQpLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3202, 0LL);
  if ( !userQpLabel )
    goto LABEL_20;
  UILabel__set_text(userQpLabel, v37, 0LL);
  userQpText = this->fields.userQpText;
  v39 = LocalizationManager__GetNumberFormat(this->fields.userQp, 0LL);
  if ( !userQpText
    || (UILabel__set_text(userQpText, v39, 0LL),
        messageLabel = this->fields.messageLabel,
        MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
                                   v41,
                                   v30 <= this->fields.userQp,
                                   v42),
        v44 = LocalizationManager__Get(MessageLocalizationKey, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, v44, 0LL), (decideButton = this->fields.decideButton) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  if ( v30 <= this->fields.userQp )
    v46 = 0LL;
  else
    v46 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
    decideButton,
    v46,
    1LL,
    decideButton->klass->vtable._15_OnPress.methodPtr);
}


UnityEngine_GameObject_o *__fastcall CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FA57E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA57E = 1;
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
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}