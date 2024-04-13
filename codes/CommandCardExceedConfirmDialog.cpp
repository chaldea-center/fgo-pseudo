void __fastcall CommandCardExceedConfirmDialog___ctor(CommandCardExceedConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8BB3 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BB3 = 1;
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
  BattleServantConfConponent_o *p_onRequest; // x20
  System_Action_int__o *v11; // x21
  struct System_Action_int__o *onRequest; // t1

  if ( (byte_42E8BB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, itemUseCount, (_DWORD)method, v3);
    byte_42E8BB1 = 1;
  }
  onRequest = this->fields.onRequest;
  p_onRequest = (BattleServantConfConponent_o *)&this->fields.onRequest;
  v11 = onRequest;
  if ( onRequest )
  {
    p_onRequest->klass = 0LL;
    sub_B5D560(p_onRequest, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_int___Invoke(v11, itemUseCount, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
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
    sub_B5D69C(this, itemUseCount);
  return this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount;
}


int32_t __fastcall CommandCardExceedConfirmDialog__GetItemUsableCount(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t Instance; // x0
  __int64 v12; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  struct ItemEntity_o *v15; // x8
  int v16; // w8

  if ( (byte_42E8BB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8BB0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    || (v15 = this->fields.exceedItemEntity) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Instance, v12);
  }
  v16 = (this->fields.constantMaxStatus - this->fields.nowCommandCardParam) / v15->fields.value;
  if ( *(_DWORD *)(Instance + 28) >= v16 )
    return v16;
  else
    return *(_DWORD *)(Instance + 28);
}


System_String_o *__fastcall CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
        CommandCardExceedConfirmDialog_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o **v8; // x8

  if ( (byte_42E8BAD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3278/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/, isOk, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3273/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/, v5, v6, v7);
    byte_42E8BAD = 1;
  }
  v8 = (System_String_o **)&StringLiteral_3273/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_MESSAGE_OK"*/;
  if ( !isOk )
    v8 = (System_String_o **)&StringLiteral_3278/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_WARNING_QP"*/;
  return *v8;
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
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
      sub_B5D69C(UseQp, v9);
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  System_String_o *v10; // x20
  Il2CppObject *NumberFormat; // x1

  if ( (byte_42E8BAC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, requiredQp, isOk, method);
    sub_B5D5C4(&StringLiteral_3275/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, v6, v7, v8);
    byte_42E8BAC = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP_WARNING"*/, 0LL);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(requiredQp, 0LL);
    return System_String__Format(v10, NumberFormat, 0LL);
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
    sub_B5D69C(this, param);
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
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8BAF & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BAF = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UISliderWithButton_o *sliderWithButton; // x0
  int32_t v7; // w0
  const MethodInfo *v8; // x2

  if ( (byte_42E8BAE & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BAE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlaySystemSe(8, 0LL);
    sliderWithButton = this->fields.sliderWithButton;
    if ( !sliderWithButton )
      sub_B5D69C(0LL, v5);
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
    sub_B5D69C(0LL, method);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  System_Action_o *v57; // x26
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int64_t Instance; // x0
  const MethodInfo *v71; // x1
  struct ItemEntity_o *Entity; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x24
  struct UserItemEntity_o *EntityDefinitely; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct UserCommandCodeMaster_o *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct CommandCardRankParamMaster_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  CommandCardExceedConfirmDialog_o *v101; // x0
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x2
  CommandCardRankParamMaster_o *commandCardRankParamMaster; // x8
  CommandCardRankParamEntity_o *RankParamEntity; // x0
  const MethodInfo *v106; // x2
  struct CommandCardRankParamEntity_array *BeyondEntities; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  BalanceConfig_c *v114; // x0
  int32_t ItemUsableCount; // w20
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // x2
  const MethodInfo *v118; // x2
  const MethodInfo *v119; // x2
  struct UISliderWithButton_o *sliderWithButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v122; // x21
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v125; // x21
  struct UICommonButton_o *cancelButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v127; // x20
  EventDelegate_Callback_o *v128; // x21

  if ( (byte_42E8BA8 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Action_TypeInfo,
      (_DWORD)userServantCommandCardEntity,
      (_DWORD)previousCommandData,
      userCommandCodeId);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_CommandCardExceedConfirmDialog_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&Method_CommandCardExceedConfirmDialog_OnClickCancel__, v24, v25, v26);
    sub_B5D5C4(&Method_CommandCardExceedConfirmDialog_OnClickDecide__, v27, v28, v29);
    sub_B5D5C4(&Method_CommandCardExceedConfirmDialog_OnSliderValueChange__, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCardRankParamMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v42, v43, v44);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v45, v46, v47);
    sub_B5D5C4(&EventDelegate_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&NetworkManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    byte_42E8BA8 = 1;
  }
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
  this->fields.isButtonEnable = 0;
  this->fields.onRequest = onRequest;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onRequest,
    (System_Int32_array **)onRequest,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.previousCommandData = previousCommandData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.previousCommandData,
    (System_Int32_array **)previousCommandData,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_28;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    exceedItemId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.exceedItemEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.exceedItemEntity,
    (System_Int32_array **)Entity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userExceedItemEntity,
    (System_Int32_array **)EntityDefinitely,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v87 = (struct UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  this->fields.userCommandCodeMaster = v87;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeMaster,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  this->fields.userCommandCodeId = userCommandCodeId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v94 = (struct CommandCardRankParamMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCardRankParamMaster___);
  this->fields.commandCardRankParamMaster = v94;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandCardRankParamMaster,
    (System_Int32_array **)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = CommandCardExceedConfirmDialog__GetNowCommandCardParam(v101, userServantCommandCardEntity, cardIndex, v102);
  commandCardRankParamMaster = this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParam = Instance;
  if ( !commandCardRankParamMaster )
    goto LABEL_28;
  RankParamEntity = CommandCardRankParamMaster__GetRankParamEntity(commandCardRankParamMaster, Instance, v103);
  v71 = RankParamEntity ? (const MethodInfo *)(unsigned int)RankParamEntity->fields.rank : 0LL;
  Instance = (int64_t)this->fields.commandCardRankParamMaster;
  this->fields.nowCommandCardParamRank = (int)v71;
  if ( !Instance )
    goto LABEL_28;
  BeyondEntities = CommandCardRankParamMaster__GetBeyondEntities(
                     (CommandCardRankParamMaster_o *)Instance,
                     (int32_t)v71,
                     v106);
  this->fields.beyondRankParamEntities = BeyondEntities;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.beyondRankParamEntities,
    (System_Int32_array **)BeyondEntities,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v114 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v114 = BalanceConfig_TypeInfo;
  }
  this->fields.constantMaxStatus = v114->static_fields->CommandCardParamUpMax;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_28;
  this->fields.userQp = *(_DWORD *)(Instance + 96);
  ItemUsableCount = CommandCardExceedConfirmDialog__GetItemUsableCount(this, v71);
  CommandCardExceedConfirmDialog__SetStaticLabels(this, ItemUsableCount, v116);
  CommandCardExceedConfirmDialog__SetCommandCard(this, 1, v117);
  CommandCardExceedConfirmDialog__SetValueLabels(this, 1, v118);
  CommandCardExceedConfirmDialog__SetSliderWithButton(this, ItemUsableCount, v119);
  sliderWithButton = this->fields.sliderWithButton;
  if ( !sliderWithButton )
    goto LABEL_28;
  onChange = sliderWithButton->fields.onChange;
  v122 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v122,
    (Il2CppObject *)this,
    Method_CommandCardExceedConfirmDialog_OnSliderValueChange__,
    0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  Instance = (int64_t)EventDelegate__Set_29826436(onChange, v122, 0LL);
  decideButton = this->fields.decideButton;
  if ( !decideButton
    || (onClick = decideButton->fields.onClick,
        v125 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v125,
          (Il2CppObject *)this,
          Method_CommandCardExceedConfirmDialog_OnClickDecide__,
          0LL),
        Instance = (int64_t)EventDelegate__Set_29826436(onClick, v125, 0LL),
        (cancelButton = this->fields.cancelButton) == 0LL) )
  {
LABEL_28:
    sub_B5D69C(Instance, v71);
  }
  v127 = cancelButton->fields.onClick;
  v128 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v128, (Il2CppObject *)this, Method_CommandCardExceedConfirmDialog_OnClickCancel__, 0LL);
  EventDelegate__Set_29826436(v127, v128, 0LL);
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
    sub_B5D69C(0LL, isOk);
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
  __int64 v3; // x3
  CombineCommandCardComponent_o *previousCommandCard; // x0
  BattleCommandData_o *previousCommandData; // x22
  BattleCommandData_o *v8; // x21
  struct ItemEntity_o *exceedItemEntity; // x8
  int32_t v10; // w3

  if ( (byte_42E8BA9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, itemUseCount, (_DWORD)method, v3);
    byte_42E8BA9 = 1;
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
  v8 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18916004(v8, previousCommandData, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity
    || !v8
    || (v10 = this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
        v8->fields.commandCardParam = v10,
        (previousCommandCard = this->fields.afterCommandCard) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(previousCommandCard, *(_QWORD *)&itemUseCount);
  }
  CombineCommandCardComponent__DispCommandCard(previousCommandCard, v8, this->fields.userCommandCodeId, v10, 0, 0, 0LL);
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
    sub_B5D69C(sliderWithButton, *(_QWORD *)&itemUsableCount);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *gameObject; // x0
  __int64 v23; // x1
  UILabel_o *descriptionLabel; // x21
  UILabel_o *itemNameLabel; // x20
  struct ItemEntity_o *exceedItemEntity; // x8
  UILabel_o *decideButtonLabel; // x20
  UILabel_o *cancelButtonLabel; // x19

  if ( (byte_42E8BAA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, itemUsableCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3277/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3279/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3268/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3280/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3269/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, v18, v19, v20);
    byte_42E8BAA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3279/*"COMMAND_CARD_EXCEED_CONFIRM_DIRLOG_MULTI_DESCRIPTION"*/, 0LL);
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
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USE_ITEM"*/, 0LL);
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
    sub_B5D69C(gameObject, v23);
  }
LABEL_17:
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3269/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_DECIDE_BUTTON"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_23;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3268/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_23;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
}


void __fastcall CommandCardExceedConfirmDialog__SetValueLabels(
        CommandCardExceedConfirmDialog_o *this,
        int32_t itemUseCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UILabel_o *previousStatusLabel; // x21
  System_String_o *v25; // x22
  Il2CppObject *NumberFormat; // x23
  Il2CppObject *v27; // x0
  System_String_o *decideButton; // x0
  __int64 v29; // x1
  UILabel_o *afterStatusLabel; // x21
  struct ItemEntity_o *exceedItemEntity; // x8
  System_String_o *v32; // x22
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x0
  UILabel_o *itemCountLabel; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x2
  int32_t RequiredQp; // w0
  UILabel_o *requiredQpLabel; // x21
  int32_t v41; // w20
  UILabel_o *requiredQpText; // x21
  CommandCardExceedConfirmDialog_o *v43; // x0
  const MethodInfo *v44; // x3
  UILabel_o *userQpLabel; // x21
  UILabel_o *userQpText; // x21
  UILabel_o *messageLabel; // x21
  CommandCardExceedConfirmDialog_o *v48; // x0
  const MethodInfo *v49; // x2
  System_String_o *MessageLocalizationKey; // x0
  __int64 v51; // x1
  int32_t v52; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8BAB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, itemUseCount, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3270/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3274/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3272/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3276/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3271/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, v21, v22, v23);
    byte_42E8BAB = 1;
  }
  previousStatusLabel = this->fields.previousStatusLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3271/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_PREVIOUS"*/, 0LL);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.nowCommandCardParam, 0LL);
  v27 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.constantMaxStatus, 0LL);
  decideButton = System_String__Format_44573324(v25, NumberFormat, v27, 0LL);
  if ( !previousStatusLabel )
    goto LABEL_20;
  UILabel__set_text(previousStatusLabel, decideButton, 0LL);
  afterStatusLabel = this->fields.afterStatusLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3270/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_EXCEED_AFTER"*/, 0LL);
  exceedItemEntity = this->fields.exceedItemEntity;
  if ( !exceedItemEntity )
    goto LABEL_20;
  v32 = decideButton;
  v33 = (Il2CppObject *)LocalizationManager__GetNumberFormat(
                          this->fields.nowCommandCardParam + exceedItemEntity->fields.value * itemUseCount,
                          0LL);
  v34 = (Il2CppObject *)LocalizationManager__GetNumberFormat(this->fields.constantMaxStatus, 0LL);
  decideButton = System_String__Format_44573324(v32, v33, v34, 0LL);
  if ( !afterStatusLabel )
    goto LABEL_20;
  UILabel__set_text(afterStatusLabel, decideButton, 0LL);
  itemCountLabel = this->fields.itemCountLabel;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3272/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_ITEM_COUNT"*/, 0LL);
  v52 = itemUseCount;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  decideButton = System_String__Format(v36, v37, 0LL);
  if ( !itemCountLabel )
    goto LABEL_20;
  UILabel__set_text(itemCountLabel, decideButton, 0LL);
  RequiredQp = CommandCardExceedConfirmDialog__GetRequiredQp(this, itemUseCount, v38);
  requiredQpLabel = this->fields.requiredQpLabel;
  v41 = RequiredQp;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_REQUIRED_QP"*/, 0LL);
  if ( !requiredQpLabel )
    goto LABEL_20;
  UILabel__set_text(requiredQpLabel, decideButton, 0LL);
  requiredQpText = this->fields.requiredQpText;
  decideButton = CommandCardExceedConfirmDialog__GetRequiredQpText(v43, v41, v41 <= this->fields.userQp, v44);
  if ( !requiredQpText )
    goto LABEL_20;
  UILabel__set_text(requiredQpText, decideButton, 0LL);
  userQpLabel = this->fields.userQpLabel;
  decideButton = LocalizationManager__Get((System_String_o *)StringLiteral_3276/*"COMMAND_CARD_EXCEED_CONFIRM_DIALOG_USER_QP"*/, 0LL);
  if ( !userQpLabel )
    goto LABEL_20;
  UILabel__set_text(userQpLabel, decideButton, 0LL);
  userQpText = this->fields.userQpText;
  decideButton = LocalizationManager__GetNumberFormat(this->fields.userQp, 0LL);
  if ( !userQpText
    || (UILabel__set_text(userQpText, decideButton, 0LL),
        messageLabel = this->fields.messageLabel,
        MessageLocalizationKey = CommandCardExceedConfirmDialog__GetMessageLocalizationKey(
                                   v48,
                                   v41 <= this->fields.userQp,
                                   v49),
        decideButton = LocalizationManager__Get(MessageLocalizationKey, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, decideButton, 0LL),
        (decideButton = (System_String_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(decideButton, v29);
  }
  if ( v41 <= this->fields.userQp )
    v51 = 0LL;
  else
    v51 = 3LL;
  ((void (__fastcall *)(System_String_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_System_IConvertible_ToUInt32.method)(
    decideButton,
    v51,
    1LL,
    decideButton->klass->vtable._15_System_IConvertible_ToInt64.methodPtr);
}


UnityEngine_GameObject_o *__fastcall CommandCardExceedConfirmDialog__get_closeBtnObject(
        CommandCardExceedConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E8BB2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8BB2 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}