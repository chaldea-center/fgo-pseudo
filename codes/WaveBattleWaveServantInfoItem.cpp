void __fastcall WaveBattleWaveServantInfoItem___ctor(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__Awake(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WaveBattleWaveServantInfoItem__EndCloseShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      8LL,
      (unsigned int)this->fields.partyIdx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BF97AE & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4BF97AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__EndShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BF97AC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isDecide);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C2E12C(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v6);
    byte_4BF97AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1C2E388(v9, v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OnClickEquip(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.partyIdx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall WaveBattleWaveServantInfoItem__OnClickServant(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.partyIdx,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


// attributes: thunk
void __fastcall WaveBattleWaveServantInfoItem__OnLongPressEquip(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem__OpenEquipDetail(this, method);
}


// attributes: thunk
void __fastcall WaveBattleWaveServantInfoItem__OnLongPressServant(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem__OpenServantDetail(this, method);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenEquipDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *monitor; // x8
  __int64 v10; // x8
  _QWORD *v11; // x8
  __int64 v12; // x8
  bool v13; // w0
  _QWORD *v14; // x8
  bool v15; // w20
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x8
  __int64 v18; // x8
  int64_t v19; // x21
  CommonUI_o *v20; // x20
  ServantStatusDialog_EndDelegate_o *v21; // x22
  _QWORD *v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4BF97AD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1C2E12C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v7);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C2E12C(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__, v8);
    byte_4BF97AD = 1;
  }
  entity = 0LL;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_26;
  if ( !monitor[3] )
    goto LABEL_22;
  v10 = monitor[5];
  if ( !v10 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_27;
  if ( *(__int64 *)(v10 + 32) > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantMaster___);
    v11 = v2[7].monitor;
    if ( !v11 )
      goto LABEL_26;
    v12 = v11[5];
    if ( !v12 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v12 + 24) )
      goto LABEL_27;
    if ( !this )
      goto LABEL_26;
    v13 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            *(_QWORD *)(v12 + 32),
            (const MethodInfo_327D728 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v14 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v15 = v13;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C2E144(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C2E110(v14, v14[4]);
    if ( v15 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = v2[7].monitor;
      if ( !v17 )
        goto LABEL_26;
      v18 = v17[5];
      if ( !v18 )
        goto LABEL_26;
      if ( *(_DWORD *)(v18 + 24) )
      {
        v19 = *(_QWORD *)(v18 + 32);
        v20 = (CommonUI_o *)this;
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v21, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v20 )
        {
          CommonUI__OpenServantEquipStatusDialog(v20, 11, v19, 1, v21, 0LL, 0LL);
          return;
        }
LABEL_26:
        sub_1C2E388(this, method);
      }
LABEL_27:
      sub_1C2E390(this, method);
    }
  }
  else
  {
LABEL_22:
    v22 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C2E144(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C2E110(v22, v22[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *monitor; // x8
  _QWORD *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  void *v15; // x8
  System_Int64_array *v16; // x22
  Il2CppObject *v17; // x21
  QuestRestrictionInfo_o *klass; // x23
  CommonUI_o *v19; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v20; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4BF97AB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1C2E12C(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C2E12C(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v7);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C2E12C(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__, v8);
    byte_4BF97AB = 1;
  }
  entity = 0LL;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantMaster___);
    v10 = v2[7].monitor;
    if ( !v10 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v10[3],
           (const MethodInfo_327D728 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
          goto LABEL_12;
        v13 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C2E144(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C2E110(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = v2[7].monitor;
        if ( v15 )
        {
          v16 = (System_Int64_array *)*((_QWORD *)v15 + 5);
          v17 = entity;
          klass = (QuestRestrictionInfo_o *)v2[8].klass;
          v19 = (CommonUI_o *)this;
          v20 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C2E378(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v20,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v19 )
          {
            CommonUI__OpenServantStatusDialog_31188120(v19, 1, (UserServantEntity_o *)v17, v16, klass, v20, 1, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1C2E388(this, method);
    }
  }
LABEL_12:
  v11 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C2E144(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C2E110(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__SetItem(
        WaveBattleWaveServantInfoItem_o *this,
        int32_t idx,
        DeckServantData_o *servantData,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *callback,
        bool isInterruption,
        bool isSelectWaveFlag,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem_o *v16; // x19
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
  __int64 v29; // x1
  DeckServantData_o *v30; // x0
  struct DeckServantData_o **p_servantData; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
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
  UISprite_o *numberSprite; // x25
  System_String_o *v51; // x0
  Il2CppObject *Master_object; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v54; // x25
  const MethodInfo *v55; // x4
  struct DeckServantData_o *v56; // x22
  struct System_Int64_array *v57; // x8
  PartyOrganizationUtility_o *v58; // x22
  struct System_Int64_array *v59; // t1
  __int64 v60; // x9
  int64_t v61; // x2
  char v62; // w8
  struct DeckServantData_o *v63; // x8
  struct DeckServantData_o *v64; // x22
  struct System_Int64_array *v65; // x8
  PartyOrganizationUtility_o *v66; // x22
  struct System_Int64_array *v67; // t1
  __int64 v68; // x9
  int64_t v69; // x2
  bool v70; // w23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v72; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  PartyOrganizationUtility_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v75; // x0
  int64_t v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Int64_array *v83; // x8
  BalanceConfig_c *v84; // x0
  int64_t v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Int64_array *v92; // x9
  BalanceConfig_c *v93; // x0
  int64_t v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_Int64_array *v101; // x8
  UserServantCollectionEntity_o *v102; // x21
  UserServantEntity_o *v103; // x22
  const MethodInfo *v104; // x4
  UILabel_o *maskServantLabel; // x20
  UserServantCollectionEntity_o *v106; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *v107; // [xsp+8h] [xbp-68h] BYREF
  int v108; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_4BF97A9 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1C2E12C(&BalanceConfig_TypeInfo, v17);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1C2E12C(&DataManager_TypeInfo, v20);
    sub_1C2E12C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v21);
    sub_1C2E12C(&long___TypeInfo, v22);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v23);
    sub_1C2E12C(&NetworkManager_TypeInfo, v24);
    sub_1C2E12C(&string_TypeInfo, v25);
    sub_1C2E12C(&UserServantEntity_TypeInfo, v26);
    sub_1C2E12C(&StringLiteral_19932/*"formation_select_small"*/, v27);
    sub_1C2E12C(&StringLiteral_15785/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v28);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C2E12C(&StringLiteral_21782/*"member_txt_"*/, v29);
    byte_4BF97A9 = 1;
  }
  entity = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_93;
  v30 = DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = v30;
  p_servantData = &v16->fields.servantData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v16->fields.servantData, (int64_t)v30, v32, v33, v34, v35, v36, v37);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v16->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v16->fields.callbackFunc = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v16->fields.callbackFunc, (int64_t)callback, v44, v45, v46, v47, v48, v49);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantLabel;
  if ( !this )
    goto LABEL_93;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipObj;
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipLabel;
  if ( !this )
    goto LABEL_93;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
  numberSprite = v16->fields.numberSprite;
  v108 = idx + 1;
  v51 = System_Int32__ToString((int32_t)&v108, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_63235584(
                                              (System_String_o *)StringLiteral_21782/*"member_txt_"*/,
                                              v51,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_93;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_93;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v54 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_37;
  if ( !Master_object )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_327D728 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_37:
    if ( !isInterruption )
      goto LABEL_47;
    v63 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_93;
    if ( v63->fields.userSvtId < 1 || v63->fields.svtId < 1 )
      goto LABEL_47;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, *(_QWORD *)&idx);
      byte_4BF81D5 = 1;
    }
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
    }
    if ( !*p_servantData || !v54 )
      goto LABEL_93;
    if ( !UserServantCollectionMaster__TryGetEntity(
            v54,
            &v106,
            *(_QWORD *)&this[1].fields.classCompatibilityIcon[1].fields.m_CachedPtr,
            (*p_servantData)->fields.svtId,
            0LL) )
    {
LABEL_47:
      this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
      if ( this )
      {
        this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          if ( !isSelectWaveFlag )
          {
            this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
            if ( !this )
              goto LABEL_93;
            this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
            if ( !this )
              goto LABEL_93;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            servantSetSprite = v16->fields.servantSetSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            this = (WaveBattleWaveServantInfoItem_o *)AtlasManager__SetPartyOrganizationImage(
                                                        servantSetSprite,
                                                        (System_String_o *)StringLiteral_19932/*"formation_select_small"*/,
                                                        0LL);
          }
          v72 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (PartyOrganizationUtility_o *)&v72->fields.userSvtEquipIds;
            userSvtEquipIds = v72->fields.userSvtEquipIds;
            v72->fields.userSvtId = 0LL;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_97;
            }
            v75 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v75 = BalanceConfig_TypeInfo;
            }
            v76 = sub_1C2E1D4(long___TypeInfo, (unsigned int)v75->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (PartyOrganizationUtility_c *)v76;
            sub_1C2E0D0(p_userSvtEquipIds, v76, v77, v78, v79, v80, v81, v82);
            v72 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_97:
              v83 = v72->fields.userSvtEquipIds;
              if ( v83 )
              {
                if ( !v83->max_length )
                  goto LABEL_94;
                v83->m_Items[0] = 0LL;
                this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
                if ( this )
                {
                  ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
                  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.classCompatibilityIcon;
                  if ( this )
                  {
                    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
                    goto LABEL_89;
                  }
                }
              }
            }
          }
        }
      }
LABEL_93:
      sub_1C2E388(this, *(_QWORD *)&idx);
    }
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
    if ( !this )
      goto LABEL_93;
    this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v64 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_93;
    v67 = v64->fields.userSvtEquipIds;
    v66 = (PartyOrganizationUtility_o *)&v64->fields.userSvtEquipIds;
    v65 = v67;
    if ( v67 && (v68 = *(_QWORD *)&v65->max_length) != 0 )
    {
      if ( !(_DWORD)v68 )
        goto LABEL_94;
      v69 = v65->m_Items[0];
      if ( v69 < 1 )
      {
        v70 = 0;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_93;
        v70 = !DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v107,
                 v69,
                 (const MethodInfo_327D728 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
    }
    else
    {
      v93 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v93 = BalanceConfig_TypeInfo;
      }
      v94 = sub_1C2E1D4(long___TypeInfo, (unsigned int)v93->static_fields->SvtEquipMax);
      v66->klass = (PartyOrganizationUtility_c *)v94;
      sub_1C2E0D0(v66, v94, v95, v96, v97, v98, v99, v100);
      if ( !*p_servantData )
        goto LABEL_93;
      v101 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v101 )
        goto LABEL_93;
      if ( !v101->max_length )
        goto LABEL_94;
      v70 = 0;
      v101->m_Items[0] = 0LL;
    }
    v102 = v106;
    v103 = (UserServantEntity_o *)sub_1C2E378(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_41549860(v103, v102, 0LL);
    entity = (Il2CppObject *)v103;
    WaveBattleWaveServantInfoItem__SetServant(v16, v103, classIds, v70, v104);
    goto LABEL_84;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v56 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_93;
  v59 = v56->fields.userSvtEquipIds;
  v58 = (PartyOrganizationUtility_o *)&v56->fields.userSvtEquipIds;
  v57 = v59;
  if ( !v59 || (v60 = *(_QWORD *)&v57->max_length) == 0 )
  {
    v84 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v84 = BalanceConfig_TypeInfo;
    }
    v85 = sub_1C2E1D4(long___TypeInfo, (unsigned int)v84->static_fields->SvtEquipMax);
    v58->klass = (PartyOrganizationUtility_c *)v85;
    sub_1C2E0D0(v58, v85, v86, v87, v88, v89, v90, v91);
LABEL_69:
    if ( !*p_servantData )
      goto LABEL_93;
    v92 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v92 )
      goto LABEL_93;
    if ( v92->max_length )
    {
      v62 = 0;
      v92->m_Items[0] = 0LL;
      goto LABEL_73;
    }
LABEL_94:
    sub_1C2E390(this, *(_QWORD *)&idx);
  }
  if ( !(_DWORD)v60 )
    goto LABEL_94;
  v61 = v57->m_Items[0];
  if ( v61 < 1 )
  {
    v62 = 0;
    goto LABEL_73;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v107,
                                              v61,
                                              (const MethodInfo_327D728 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v62 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_69;
LABEL_73:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v62 & 1, v55);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_93;
  if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
  {
LABEL_84:
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskServantLabel = v16->fields.maskServantLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15785/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
      if ( maskServantLabel )
      {
        UILabel__set_text(maskServantLabel, (System_String_o *)this, 0LL);
        goto LABEL_89;
      }
    }
    goto LABEL_93;
  }
LABEL_89:
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__SetServant(
        WaveBattleWaveServantInfoItem_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int32_array *classIds,
        bool isSetEquip,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  IconLabelInfo_o *v21; // x23
  void *LevelMax; // x0
  __int64 v23; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v27; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v29; // x23
  UserServantEntity_o *v30; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v34; // x22
  __int64 v35; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x21
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4BF97AA & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, userServantEntity);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1C2E12C(&DataManager_TypeInfo, v11);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C2E12C(&IconLabelInfo_TypeInfo, v13);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v14);
    sub_1C2E12C(&NetworkManager_TypeInfo, v15);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C2E12C(&UserServantEntity_TypeInfo, v18);
    sub_1C2E12C(&StringLiteral_15783/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v19);
    sub_1C2E12C(&StringLiteral_20690/*"img_frames_mask14"*/, v20);
    byte_4BF97AA = 1;
  }
  entity = 0LL;
  v21 = (IconLabelInfo_o *)sub_1C2E378(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  if ( !userServantEntity )
    goto LABEL_36;
  lv = userServantEntity->fields.lv;
  LevelMax = (void *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v21 )
    goto LABEL_36;
  IconLabelInfo__Set_39452344(v21, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL);
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_36;
  LevelMax = this->fields.servantFaceIcon;
  if ( !LevelMax )
    goto LABEL_36;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)LevelMax,
    userServantEntity,
    servantData->fields.userSvtEquipIds,
    this->fields.questRestrictionInfo,
    v21,
    0LL,
    0LL);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v23);
      byte_4BF81D5 = 1;
    }
    LevelMax = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      LevelMax = NetworkManager_TypeInfo;
    }
    v27 = this->fields.servantData;
    if ( !v27 )
      goto LABEL_36;
    svtEquipIds = v27->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_36;
    if ( !svtEquipIds->max_length )
      sub_1C2E390(LevelMax, v23);
    if ( !Master_object )
      goto LABEL_36;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(*((_QWORD *)LevelMax + 23) + 64LL),
           svtEquipIds->m_Items[1],
           0LL) )
    {
      v29 = entity;
      v30 = (UserServantEntity_o *)sub_1C2E378(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41549860(v30, v29, 0LL);
      LevelMax = this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v30, 0LL);
        LevelMax = this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20690/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_15783/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_29;
          }
        }
      }
LABEL_36:
      sub_1C2E388(LevelMax, v23);
    }
  }
LABEL_29:
  LevelMax = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v35;
  *(_QWORD *)&v38.fields.fakeValue = v34;
  LevelMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v38, 0LL);
  if ( !v36 )
    goto LABEL_36;
  LevelMax = DataMasterBase_object__object__int___GetEntity(
               v36,
               (int32_t)LevelMax,
               (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LevelMax || !this->fields.classCompatibilityIcon )
    goto LABEL_36;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    *((_DWORD *)LevelMax + 20),
    classIds,
    0,
    0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__add_callbackFunc(
        WaveBattleWaveServantInfoItem_o *this,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveServantInfoItem_o *v11; // x0
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BF97A7 & 1) == 0 )
  {
    sub_1C2E12C(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4BF97A7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v8->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C2E648(v8);
  WaveBattleWaveServantInfoItem__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WaveBattleWaveServantInfoItem__remove_callbackFunc(
        WaveBattleWaveServantInfoItem_o *this,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveServantInfoItem_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BF97A8 & 1) == 0 )
  {
    sub_1C2E12C(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4BF97A8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v8->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C2E648(v8);
  WaveBattleWaveServantInfoItem__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A6A82C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6A7D4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleWaveServantInfoItem_CallbackFunc__BeginInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = n;
  v16 = result;
  if ( (byte_4BF97AF & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_4BF97AF = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&n,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v14, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}