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


void __fastcall WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD85C8 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD85C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__EndShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BD85C6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__);
    byte_4BD85C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1C22094(v7, v8);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0LL);
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
  _QWORD *monitor; // x8
  __int64 v4; // x8
  _QWORD *v5; // x8
  __int64 v6; // x8
  bool v7; // w0
  _QWORD *v8; // x8
  bool v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x8
  __int64 v12; // x8
  int64_t v13; // x21
  CommonUI_o *v14; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  _QWORD *v16; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4BD85C7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C21E38(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    byte_4BD85C7 = 1;
  }
  entity = 0LL;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_26;
  if ( !monitor[3] )
    goto LABEL_22;
  v4 = monitor[5];
  if ( !v4 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_27;
  if ( *(__int64 *)(v4 + 32) > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
    v5 = v2[7].monitor;
    if ( !v5 )
      goto LABEL_26;
    v6 = v5[5];
    if ( !v6 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v6 + 24) )
      goto LABEL_27;
    if ( !this )
      goto LABEL_26;
    v7 = DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *(_QWORD *)(v6 + 32),
           (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v8 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v9 = v7;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C21E50(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
    if ( v9 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v11 = v2[7].monitor;
      if ( !v11 )
        goto LABEL_26;
      v12 = v11[5];
      if ( !v12 )
        goto LABEL_26;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)(v12 + 32);
        v14 = (CommonUI_o *)this;
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v15, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v14 )
        {
          CommonUI__OpenServantEquipStatusDialog(v14, 11, v13, 1, v15, 0LL, 0LL);
          return;
        }
LABEL_26:
        sub_1C22094(this, method);
      }
LABEL_27:
      sub_1C2209C(this, method);
    }
  }
  else
  {
LABEL_22:
    v16 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C21E50(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  _QWORD *v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  void *v9; // x8
  System_Int64_array *v10; // x22
  Il2CppObject *v11; // x21
  QuestRestrictionInfo_o *klass; // x23
  CommonUI_o *v13; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v14; // x24
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4BD85C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_WaveBattleWaveServantInfoItem_EndShowServant__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C21E38(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
    byte_4BD85C5 = 1;
  }
  entity = 0LL;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
    v4 = v2[7].monitor;
    if ( !v4 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v4[3],
           (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
          goto LABEL_12;
        v7 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C21E50(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = v2[7].monitor;
        if ( v9 )
        {
          v10 = (System_Int64_array *)*((_QWORD *)v9 + 5);
          v11 = entity;
          klass = (QuestRestrictionInfo_o *)v2[8].klass;
          v13 = (CommonUI_o *)this;
          v14 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C22084(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v14,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v13 )
          {
            CommonUI__OpenServantStatusDialog_31139356(v13, 1, (UserServantEntity_o *)v11, v10, klass, v14, 1, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1C22094(this, method);
    }
  }
LABEL_12:
  v5 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
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
  DeckServantData_o *v17; // x0
  struct DeckServantData_o **p_servantData; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UISprite_o *numberSprite; // x25
  System_String_o *v38; // x0
  Il2CppObject *Master_object; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v41; // x25
  const MethodInfo *v42; // x4
  struct DeckServantData_o *v43; // x22
  struct System_Int64_array *v44; // x8
  PartyOrganizationUtility_o *v45; // x22
  struct System_Int64_array *v46; // t1
  __int64 v47; // x9
  int64_t v48; // x2
  char v49; // w8
  struct DeckServantData_o *v50; // x8
  struct DeckServantData_o *v51; // x22
  struct System_Int64_array *v52; // x8
  PartyOrganizationUtility_o *v53; // x22
  struct System_Int64_array *v54; // t1
  __int64 v55; // x9
  int64_t v56; // x2
  bool v57; // w23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v59; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  PartyOrganizationUtility_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v62; // x0
  int64_t v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Int64_array *v70; // x8
  BalanceConfig_c *v71; // x0
  int64_t v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_Int64_array *v79; // x9
  BalanceConfig_c *v80; // x0
  int64_t v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Int64_array *v88; // x8
  UserServantCollectionEntity_o *v89; // x21
  UserServantEntity_o *v90; // x22
  const MethodInfo *v91; // x4
  UILabel_o *maskServantLabel; // x20
  UserServantCollectionEntity_o *v93; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *v94; // [xsp+8h] [xbp-68h] BYREF
  int v95; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_4BD85C3 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_19913/*"formation_select_small"*/);
    sub_1C21E38(&StringLiteral_15773/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C21E38(&StringLiteral_21771/*"member_txt_"*/);
    byte_4BD85C3 = 1;
  }
  entity = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_93;
  v17 = DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = v17;
  p_servantData = &v16->fields.servantData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->fields.servantData, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v16->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v16->fields.callbackFunc = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->fields.callbackFunc, (int64_t)callback, v31, v32, v33, v34, v35, v36);
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
  v95 = idx + 1;
  v38 = System_Int32__ToString((int32_t)&v95, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_63115476(
                                              (System_String_o *)StringLiteral_21771/*"member_txt_"*/,
                                              v38,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_93;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_93;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v41 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_37;
  if ( !Master_object )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_37:
    if ( !isInterruption )
      goto LABEL_47;
    v50 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_93;
    if ( v50->fields.userSvtId < 1 || v50->fields.svtId < 1 )
      goto LABEL_47;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
    }
    if ( !*p_servantData || !v41 )
      goto LABEL_93;
    if ( !UserServantCollectionMaster__TryGetEntity(
            v41,
            &v93,
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
                                                        (System_String_o *)StringLiteral_19913/*"formation_select_small"*/,
                                                        0LL);
          }
          v59 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (PartyOrganizationUtility_o *)&v59->fields.userSvtEquipIds;
            userSvtEquipIds = v59->fields.userSvtEquipIds;
            v59->fields.userSvtId = 0LL;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_97;
            }
            v62 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v62 = BalanceConfig_TypeInfo;
            }
            v63 = sub_1C21EE0(long___TypeInfo, (unsigned int)v62->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (PartyOrganizationUtility_c *)v63;
            sub_1C21DDC(p_userSvtEquipIds, v63, v64, v65, v66, v67, v68, v69);
            v59 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_97:
              v70 = v59->fields.userSvtEquipIds;
              if ( v70 )
              {
                if ( !v70->max_length )
                  goto LABEL_94;
                v70->m_Items[0] = 0LL;
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
      sub_1C22094(this, *(_QWORD *)&idx);
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
    v51 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_93;
    v54 = v51->fields.userSvtEquipIds;
    v53 = (PartyOrganizationUtility_o *)&v51->fields.userSvtEquipIds;
    v52 = v54;
    if ( v54 && (v55 = *(_QWORD *)&v52->max_length) != 0 )
    {
      if ( !(_DWORD)v55 )
        goto LABEL_94;
      v56 = v52->m_Items[0];
      if ( v56 < 1 )
      {
        v57 = 0;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_93;
        v57 = !DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v94,
                 v56,
                 (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
    }
    else
    {
      v80 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v80 = BalanceConfig_TypeInfo;
      }
      v81 = sub_1C21EE0(long___TypeInfo, (unsigned int)v80->static_fields->SvtEquipMax);
      v53->klass = (PartyOrganizationUtility_c *)v81;
      sub_1C21DDC(v53, v81, v82, v83, v84, v85, v86, v87);
      if ( !*p_servantData )
        goto LABEL_93;
      v88 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v88 )
        goto LABEL_93;
      if ( !v88->max_length )
        goto LABEL_94;
      v57 = 0;
      v88->m_Items[0] = 0LL;
    }
    v89 = v93;
    v90 = (UserServantEntity_o *)sub_1C22084(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_41466424(v90, v89, 0LL);
    entity = (Il2CppObject *)v90;
    WaveBattleWaveServantInfoItem__SetServant(v16, v90, classIds, v57, v91);
    goto LABEL_84;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v43 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_93;
  v46 = v43->fields.userSvtEquipIds;
  v45 = (PartyOrganizationUtility_o *)&v43->fields.userSvtEquipIds;
  v44 = v46;
  if ( !v46 || (v47 = *(_QWORD *)&v44->max_length) == 0 )
  {
    v71 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v71 = BalanceConfig_TypeInfo;
    }
    v72 = sub_1C21EE0(long___TypeInfo, (unsigned int)v71->static_fields->SvtEquipMax);
    v45->klass = (PartyOrganizationUtility_c *)v72;
    sub_1C21DDC(v45, v72, v73, v74, v75, v76, v77, v78);
LABEL_69:
    if ( !*p_servantData )
      goto LABEL_93;
    v79 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v79 )
      goto LABEL_93;
    if ( v79->max_length )
    {
      v49 = 0;
      v79->m_Items[0] = 0LL;
      goto LABEL_73;
    }
LABEL_94:
    sub_1C2209C(this, *(_QWORD *)&idx);
  }
  if ( !(_DWORD)v47 )
    goto LABEL_94;
  v48 = v44->m_Items[0];
  if ( v48 < 1 )
  {
    v49 = 0;
    goto LABEL_73;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v94,
                                              v48,
                                              (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v49 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_69;
LABEL_73:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v49 & 1, v42);
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
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15773/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
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
  IconLabelInfo_o *v9; // x23
  void *LevelMax; // x0
  __int64 v11; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v15; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v17; // x23
  UserServantEntity_o *v18; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4BD85C4 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserServantEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_15771/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C21E38(&StringLiteral_20679/*"img_frames_mask14"*/);
    byte_4BD85C4 = 1;
  }
  entity = 0LL;
  v9 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  if ( !userServantEntity )
    goto LABEL_36;
  lv = userServantEntity->fields.lv;
  LevelMax = (void *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v9 )
    goto LABEL_36;
  IconLabelInfo__Set_39381772(v9, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL);
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
    v9,
    0LL,
    0LL);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    LevelMax = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      LevelMax = NetworkManager_TypeInfo;
    }
    v15 = this->fields.servantData;
    if ( !v15 )
      goto LABEL_36;
    svtEquipIds = v15->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_36;
    if ( !svtEquipIds->max_length )
      sub_1C2209C(LevelMax, v11);
    if ( !Master_object )
      goto LABEL_36;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(*((_QWORD *)LevelMax + 23) + 64LL),
           svtEquipIds->m_Items[1],
           0LL) )
    {
      v17 = entity;
      v18 = (UserServantEntity_o *)sub_1C22084(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_41466424(v18, v17, 0LL);
      LevelMax = this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v18, 0LL);
        LevelMax = this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20679/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_15771/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_29;
          }
        }
      }
LABEL_36:
      sub_1C22094(LevelMax, v11);
    }
  }
LABEL_29:
  LevelMax = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v23;
  *(_QWORD *)&v26.fields.fakeValue = v22;
  LevelMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v26, 0LL);
  if ( !v24 )
    goto LABEL_36;
  LevelMax = DataMasterBase_object__object__int___GetEntity(
               v24,
               (int32_t)LevelMax,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4BD85C1 & 1) == 0 )
  {
    sub_1C21E38(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_4BD85C1 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C22354(v8);
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

  if ( (byte_4BD85C2 & 1) == 0 )
  {
    sub_1C21E38(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_4BD85C2 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C22354(v8);
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5E38C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5E334;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_4BD85C9 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4BD85C9 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&n,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v13, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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