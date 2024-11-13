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

  if ( (byte_4B1231A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1231A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B12318 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v7, v8);
    byte_4B12318 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *monitor; // x8
  __int64 v17; // x8
  _QWORD *v18; // x8
  __int64 v19; // x8
  bool v20; // w0
  _QWORD *v21; // x8
  bool v22; // w20
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  _QWORD *v26; // x8
  __int64 v27; // x8
  int64_t v28; // x21
  CommonUI_o *v29; // x20
  ServantStatusDialog_EndDelegate_o *v30; // x22
  _QWORD *v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_4B12319 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v12, v13);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1BCA7E0(
                                                &Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__,
                                                v14,
                                                v15);
    byte_4B12319 = 1;
  }
  entity = 0LL;
  monitor = v3[7].monitor;
  if ( !monitor )
    goto LABEL_26;
  if ( !monitor[3] )
    goto LABEL_22;
  v17 = monitor[5];
  if ( !v17 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  if ( *(__int64 *)(v17 + 32) > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    v18 = v3[7].monitor;
    if ( !v18 )
      goto LABEL_26;
    v19 = v18[5];
    if ( !v19 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v19 + 24) )
      goto LABEL_27;
    if ( !this )
      goto LABEL_26;
    v20 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            *(_QWORD *)(v19 + 32),
            (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v21 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v22 = v20;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
    if ( v22 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = v3[7].monitor;
      if ( !v26 )
        goto LABEL_26;
      v27 = v26[5];
      if ( !v27 )
        goto LABEL_26;
      if ( *(_DWORD *)(v27 + 24) )
      {
        v28 = *(_QWORD *)(v27 + 32);
        v29 = (CommonUI_o *)this;
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     method,
                                                     v24,
                                                     v25);
        ServantStatusDialog_EndDelegate___ctor(v30, v3, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v29 )
        {
          CommonUI__OpenServantEquipStatusDialog(v29, 11, v28, 1, v30, 0LL, 0LL);
          return;
        }
LABEL_26:
        sub_1BCAA3C(this, method);
      }
LABEL_27:
      sub_1BCAA44(this, method);
    }
  }
  else
  {
LABEL_22:
    v31 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v31 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v31, v31[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _QWORD *monitor; // x8
  _QWORD *v17; // x8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x8
  System_Int64_array *v25; // x22
  Il2CppObject *v26; // x21
  QuestRestrictionInfo_o *klass; // x23
  CommonUI_o *v28; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v29; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_4B12317 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v12, v13);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1BCA7E0(
                                                &Method_WaveBattleWaveServantInfoItem_OpenServantDetail__,
                                                v14,
                                                v15);
    byte_4B12317 = 1;
  }
  entity = 0LL;
  monitor = v3[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
    v17 = v3[7].monitor;
    if ( !v17 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v17[3],
           (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
          goto LABEL_12;
        v20 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v24 = v3[7].monitor;
        if ( v24 )
        {
          v25 = (System_Int64_array *)*((_QWORD *)v24 + 5);
          v26 = entity;
          klass = (QuestRestrictionInfo_o *)v3[8].klass;
          v28 = (CommonUI_o *)this;
          v29 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BCAA2C(
                                                                    ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                    method,
                                                                    v22,
                                                                    v23);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v29,
            v3,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v28 )
          {
            CommonUI__OpenServantStatusDialog_30777496(v28, 1, (UserServantEntity_o *)v26, v25, klass, v29, 1, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1BCAA3C(this, method);
    }
  }
LABEL_12:
  v18 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0LL);
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
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  DeckServantData_o *v43; // x0
  struct DeckServantData_o **p_servantData; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  UISprite_o *numberSprite; // x25
  System_String_o *v64; // x0
  __int64 v65; // x1
  Il2CppObject *Master_object; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v68; // x25
  const MethodInfo *v69; // x4
  struct DeckServantData_o *v70; // x22
  struct System_Int64_array *v71; // x8
  PartyOrganizationUtility_o *v72; // x22
  struct System_Int64_array *v73; // t1
  __int64 v74; // x9
  int64_t v75; // x2
  char v76; // w8
  struct DeckServantData_o *v77; // x8
  __int64 v78; // x3
  struct DeckServantData_o *v79; // x22
  struct System_Int64_array *v80; // x8
  PartyOrganizationUtility_o *v81; // x22
  struct System_Int64_array *v82; // t1
  __int64 v83; // x9
  int64_t v84; // x2
  bool v85; // w23
  __int64 v86; // x1
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v88; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  PartyOrganizationUtility_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v91; // x0
  int64_t v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Int64_array *v99; // x8
  BalanceConfig_c *v100; // x0
  int64_t v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Int64_array *v108; // x9
  BalanceConfig_c *v109; // x0
  int64_t v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Int64_array *v117; // x8
  UserServantCollectionEntity_o *v118; // x21
  UserServantEntity_o *v119; // x22
  const MethodInfo *v120; // x4
  __int64 v121; // x1
  UILabel_o *maskServantLabel; // x20
  UserServantCollectionEntity_o *v123; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *v124; // [xsp+8h] [xbp-68h] BYREF
  int v125; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_4B12315 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&idx, servantData);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&long___TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&string_TypeInfo, v33, v34);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_19781/*"formation_select_small"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_15674/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v39, v40);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1BCA7E0(&StringLiteral_21618/*"member_txt_"*/, v41, v42);
    byte_4B12315 = 1;
  }
  entity = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_89;
  v43 = DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = v43;
  p_servantData = &v16->fields.servantData;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.servantData, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v16->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v16->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.callbackFunc, (int64_t)callback, v57, v58, v59, v60, v61, v62);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantLabel;
  if ( !this )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipObj;
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipLabel;
  if ( !this )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
  numberSprite = v16->fields.numberSprite;
  v125 = idx + 1;
  v64 = System_Int32__ToString((int32_t)&v125, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_62401220(
                                              (System_String_o *)StringLiteral_21618/*"member_txt_"*/,
                                              v64,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_89;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_89;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v68 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_33;
  if ( !Master_object )
    goto LABEL_89;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_33:
    if ( !isInterruption )
      goto LABEL_43;
    v77 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_89;
    if ( v77->fields.userSvtId < 1 || v77->fields.svtId < 1 )
      goto LABEL_43;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&idx);
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager__get_UserId(0LL);
    if ( !*p_servantData || !v68 )
      goto LABEL_89;
    if ( !UserServantCollectionMaster__TryGetEntity(v68, &v123, (int64_t)this, (*p_servantData)->fields.svtId, 0LL) )
    {
LABEL_43:
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
              goto LABEL_89;
            this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
            if ( !this )
              goto LABEL_89;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            servantSetSprite = v16->fields.servantSetSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v86);
            this = (WaveBattleWaveServantInfoItem_o *)AtlasManager__SetPartyOrganizationImage(
                                                        servantSetSprite,
                                                        (System_String_o *)StringLiteral_19781/*"formation_select_small"*/,
                                                        0LL);
          }
          v88 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (PartyOrganizationUtility_o *)&v88->fields.userSvtEquipIds;
            userSvtEquipIds = v88->fields.userSvtEquipIds;
            v88->fields.userSvtId = 0LL;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_93;
            }
            v91 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&idx);
              v91 = BalanceConfig_TypeInfo;
            }
            v92 = sub_1BCA888(long___TypeInfo, (unsigned int)v91->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (PartyOrganizationUtility_c *)v92;
            sub_1BCA784(p_userSvtEquipIds, v92, v93, v94, v95, v96, v97, v98);
            v88 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_93:
              v99 = v88->fields.userSvtEquipIds;
              if ( v99 )
              {
                if ( !v99->max_length )
                  goto LABEL_90;
                v99->m_Items[0] = 0LL;
                this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
                if ( this )
                {
                  ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
                  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.classCompatibilityIcon;
                  if ( this )
                  {
                    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
                    goto LABEL_85;
                  }
                }
              }
            }
          }
        }
      }
LABEL_89:
      sub_1BCAA3C(this, *(_QWORD *)&idx);
    }
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
    if ( !this )
      goto LABEL_89;
    this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v79 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_89;
    v82 = v79->fields.userSvtEquipIds;
    v81 = (PartyOrganizationUtility_o *)&v79->fields.userSvtEquipIds;
    v80 = v82;
    if ( v82 && (v83 = *(_QWORD *)&v80->max_length) != 0 )
    {
      if ( !(_DWORD)v83 )
        goto LABEL_90;
      v84 = v80->m_Items[0];
      if ( v84 < 1 )
      {
        v85 = 0;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_89;
        v85 = !DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v124,
                 v84,
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
    }
    else
    {
      v109 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&idx);
        v109 = BalanceConfig_TypeInfo;
      }
      v110 = sub_1BCA888(long___TypeInfo, (unsigned int)v109->static_fields->SvtEquipMax);
      v81->klass = (PartyOrganizationUtility_c *)v110;
      sub_1BCA784(v81, v110, v111, v112, v113, v114, v115, v116);
      if ( !*p_servantData )
        goto LABEL_89;
      v117 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v117 )
        goto LABEL_89;
      if ( !v117->max_length )
        goto LABEL_90;
      v85 = 0;
      v117->m_Items[0] = 0LL;
    }
    v118 = v123;
    v119 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, *(_QWORD *)&idx, v84, v78);
    UserServantEntity___ctor_40924048(v119, v118, 0LL);
    entity = (Il2CppObject *)v119;
    WaveBattleWaveServantInfoItem__SetServant(v16, v119, classIds, v85, v120);
    goto LABEL_80;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_89;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v70 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_89;
  v73 = v70->fields.userSvtEquipIds;
  v72 = (PartyOrganizationUtility_o *)&v70->fields.userSvtEquipIds;
  v71 = v73;
  if ( !v73 || (v74 = *(_QWORD *)&v71->max_length) == 0 )
  {
    v100 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&idx);
      v100 = BalanceConfig_TypeInfo;
    }
    v101 = sub_1BCA888(long___TypeInfo, (unsigned int)v100->static_fields->SvtEquipMax);
    v72->klass = (PartyOrganizationUtility_c *)v101;
    sub_1BCA784(v72, v101, v102, v103, v104, v105, v106, v107);
LABEL_65:
    if ( !*p_servantData )
      goto LABEL_89;
    v108 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v108 )
      goto LABEL_89;
    if ( v108->max_length )
    {
      v76 = 0;
      v108->m_Items[0] = 0LL;
      goto LABEL_69;
    }
LABEL_90:
    sub_1BCAA44(this, *(_QWORD *)&idx);
  }
  if ( !(_DWORD)v74 )
    goto LABEL_90;
  v75 = v71->m_Items[0];
  if ( v75 < 1 )
  {
    v76 = 0;
    goto LABEL_69;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v124,
                                              v75,
                                              (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v76 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_65;
LABEL_69:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v76 & 1, v69);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_89;
  if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
  {
LABEL_80:
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskServantLabel = v16->fields.maskServantLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15674/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
      if ( maskServantLabel )
      {
        UILabel__set_text(maskServantLabel, (System_String_o *)this, 0LL);
        goto LABEL_85;
      }
    }
    goto LABEL_89;
  }
LABEL_85:
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_89;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__SetServant(
        WaveBattleWaveServantInfoItem_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int32_array *classIds,
        bool isSetEquip,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  IconLabelInfo_o *v33; // x23
  int64_t LevelMax; // x0
  __int64 v35; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  __int64 v38; // x1
  __int64 v39; // x1
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v41; // x8
  struct System_Int32_array *svtEquipIds; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  UserServantCollectionEntity_o *v46; // x23
  UserServantEntity_o *v47; // x22
  __int64 v48; // x1
  UISprite_o *maskEquipSprite; // x22
  __int64 v50; // x1
  UILabel_o *maskEquipLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x1
  __int64 v54; // x22
  __int64 v55; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x21
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4B12316 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, userServantEntity, classIds);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_15672/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_20534/*"img_frames_mask14"*/, v31, v32);
    byte_4B12316 = 1;
  }
  entity = 0LL;
  v33 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, userServantEntity, classIds, isSetEquip);
  IconLabelInfo___ctor(v33, 0LL);
  if ( !userServantEntity )
    goto LABEL_32;
  lv = userServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v33 )
    goto LABEL_32;
  IconLabelInfo__Set_38850420(v33, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_32;
  LevelMax = (int64_t)this->fields.servantFaceIcon;
  if ( !LevelMax )
    goto LABEL_32;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)LevelMax,
    userServantEntity,
    servantData->fields.userSvtEquipIds,
    this->fields.questRestrictionInfo,
    v33,
    0LL,
    0LL);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
    LevelMax = NetworkManager__get_UserId(0LL);
    v41 = this->fields.servantData;
    if ( !v41 )
      goto LABEL_32;
    svtEquipIds = v41->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_32;
    if ( !svtEquipIds->max_length )
      sub_1BCAA44(LevelMax, v35);
    if ( !Master_object )
      goto LABEL_32;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           LevelMax,
           svtEquipIds->m_Items[1],
           0LL) )
    {
      v46 = entity;
      v47 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v43, v44, v45);
      UserServantEntity___ctor_40924048(v47, v46, 0LL);
      LevelMax = (int64_t)this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v47, 0LL);
        LevelMax = (int64_t)this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v48);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20534/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
          LevelMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15672/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_25;
          }
        }
      }
LABEL_32:
      sub_1BCAA3C(LevelMax, v35);
    }
  }
LABEL_25:
  LevelMax = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
  *(_QWORD *)&v58.fields.currentCryptoKey = v55;
  *(_QWORD *)&v58.fields.fakeValue = v54;
  LevelMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
  if ( !v56 )
    goto LABEL_32;
  LevelMax = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        v56,
                        LevelMax,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LevelMax || !this->fields.classCompatibilityIcon )
    goto LABEL_32;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    *(_DWORD *)(LevelMax + 80),
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

  if ( (byte_4B12313 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value, method);
    byte_4B12313 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B12314 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value, method);
    byte_4B12314 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07FB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07F60;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = n;
  v14 = result;
  if ( (byte_4B1231B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9, v10);
    byte_4B1231B = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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