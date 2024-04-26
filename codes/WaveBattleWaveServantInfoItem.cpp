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
  WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(callbackFunc, 8, this->fields.partyIdx, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4350143 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4350143 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__EndShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4350141 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__);
    byte_4350141 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B7076C(v7, v8);
  CommonUI__CloseServantStatusDialog(Instance, v6, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OnClickEquip(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(callbackFunc, 0, this->fields.partyIdx, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OnClickServant(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(callbackFunc, 0, this->fields.partyIdx, 0LL);
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
  Il2CppClass *klass; // x8
  __int64 v4; // x8
  Il2CppClass *v5; // x8
  __int64 v6; // x8
  bool v7; // w20
  _QWORD *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppClass *v10; // x8
  __int64 v11; // x8
  int64_t v12; // x21
  CommonUI_o *v13; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  _QWORD *v15; // x0
  __int64 v16; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4350142 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B70694(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    byte_4350142 = 1;
  }
  entity = 0LL;
  klass = v2[7].klass;
  if ( !klass )
    goto LABEL_28;
  if ( !klass->_1.namespaze )
    goto LABEL_23;
  v4 = *(_QWORD *)&klass->_1.byval_arg.bits;
  if ( !v4 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_29;
  if ( *(__int64 *)(v4 + 32) > 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
    v5 = v2[7].klass;
    if ( !v5 )
      goto LABEL_28;
    v6 = *(_QWORD *)&v5->_1.byval_arg.bits;
    if ( !v6 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v6 + 24) )
      goto LABEL_29;
    if ( !this )
      goto LABEL_28;
    v7 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
           &entity,
           *(_QWORD *)(v6 + 32),
           (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v8 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B7069C(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v9 = (System_Reflection_MethodBase_o *)sub_B70678(v8, v8[3]);
    if ( v7 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = v2[7].klass;
      if ( !v10 )
        goto LABEL_28;
      v11 = *(_QWORD *)&v10->_1.byval_arg.bits;
      if ( !v11 )
        goto LABEL_28;
      if ( *(_DWORD *)(v11 + 24) )
      {
        v12 = *(_QWORD *)(v11 + 32);
        v13 = (CommonUI_o *)this;
        v14 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v14, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v13 )
        {
          CommonUI__OpenServantEquipStatusDialog(v13, 11, v12, 1, v14, 0LL, 0LL);
          return;
        }
LABEL_28:
        sub_B7076C(this, method);
      }
LABEL_29:
      v16 = sub_B70798(this);
      sub_B70738(v16, 0LL);
    }
  }
  else
  {
LABEL_23:
    v15 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
      v15 = (_QWORD *)sub_B7069C(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v9 = (System_Reflection_MethodBase_o *)sub_B70678(v15, v15[3]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass *v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppClass *v9; // x8
  System_Int64_array *v10; // x22
  UserServantEntity_o *v11; // x21
  QuestRestrictionInfo_o *monitor; // x23
  CommonUI_o *v13; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v14; // x24
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4350140 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WaveBattleWaveServantInfoItem_EndShowServant__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B70694(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
    byte_4350140 = 1;
  }
  entity = 0LL;
  klass = v2[7].klass;
  if ( !klass )
    goto LABEL_22;
  if ( klass->_1.namespaze )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
    v4 = v2[7].klass;
    if ( !v4 || !this )
      goto LABEL_22;
    if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
           &entity,
           (int64_t)v4->_1.namespaze,
           (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal(entity, 0LL) )
          goto LABEL_13;
        v7 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
          v7 = (_QWORD *)sub_B7069C(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_B70678(v7, v7[3]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = v2[7].klass;
        if ( v9 )
        {
          v10 = *(System_Int64_array **)&v9->_1.byval_arg.bits;
          v11 = entity;
          monitor = (QuestRestrictionInfo_o *)v2[7].monitor;
          v13 = (CommonUI_o *)this;
          v14 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B70764(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v14,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v13 )
          {
            CommonUI__OpenServantStatusDialog_17915812(v13, 1, v11, v10, monitor, v14, 1, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_B7076C(this, method);
    }
  }
LABEL_13:
  v5 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B7069C(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
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
  System_Int32_array **v17; // x0
  struct DeckServantData_o **p_servantData; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UISprite_o *numberSprite; // x25
  System_String_o *v38; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v41; // x25
  const MethodInfo *v42; // x4
  struct System_Int64_array *v43; // x8
  int64_t v44; // x2
  char v45; // w8
  struct System_Int64_array *v46; // x9
  struct DeckServantData_o *v47; // x8
  struct System_Int64_array *v48; // x8
  int64_t v49; // x2
  bool v50; // w23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v52; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  BattleServantConfConponent_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v55; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Int64_array *v63; // x8
  UserServantCollectionEntity_o *v64; // x21
  UserServantEntity_o *v65; // x22
  const MethodInfo *v66; // x4
  UILabel_o *maskServantLabel; // x20
  __int64 v68; // x0
  UserServantCollectionEntity_o *v69; // [xsp+8h] [xbp-68h] BYREF
  UserServantEntity_o *v70; // [xsp+10h] [xbp-60h] BYREF
  int v71; // [xsp+1Ch] [xbp-54h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v16 = this;
  if ( (byte_435013E & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&UserServantEntity_TypeInfo);
    sub_B70694(&StringLiteral_19136/*"formation_select_small"*/);
    sub_B70694(&StringLiteral_15545/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B70694(&StringLiteral_20784/*"member_txt_"*/);
    byte_435013E = 1;
  }
  entity = 0LL;
  v71 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_83;
  v17 = (System_Int32_array **)DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = (struct DeckServantData_o *)v17;
  p_servantData = &v16->fields.servantData;
  sub_B70630((BattleServantConfConponent_o *)&v16->fields.servantData, v17, v19, v20, v21, v22, v23, v24);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&v16->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v16->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&v16->fields.callbackFunc,
    (System_Int32_array **)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantLabel;
  if ( !this )
    goto LABEL_83;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipObj;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipLabel;
  if ( !this )
    goto LABEL_83;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
  numberSprite = v16->fields.numberSprite;
  v71 = idx + 1;
  v38 = System_Int32__ToString((int32_t)&v71, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_44758168(
                                              (System_String_o *)StringLiteral_20784/*"member_txt_"*/,
                                              v38,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_83;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_83;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v41 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_37;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_83;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                              Master_WarQuestSelectionMaster,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_37:
    if ( !isInterruption )
      goto LABEL_46;
    v47 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_83;
    if ( v47->fields.userSvtId < 1 || v47->fields.svtId < 1 )
      goto LABEL_46;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager__get_UserId(0LL);
    if ( !*p_servantData || !v41 )
      goto LABEL_83;
    if ( !UserServantCollectionMaster__TryGetEntity(v41, &v69, (int64_t)this, (*p_servantData)->fields.svtId, 0LL) )
    {
LABEL_46:
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
              goto LABEL_83;
            this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
            if ( !this )
              goto LABEL_83;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            servantSetSprite = v16->fields.servantSetSprite;
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            this = (WaveBattleWaveServantInfoItem_o *)AtlasManager__SetPartyOrganizationImage(
                                                        servantSetSprite,
                                                        (System_String_o *)StringLiteral_19136/*"formation_select_small"*/,
                                                        0LL);
          }
          if ( *p_servantData )
          {
            (*p_servantData)->fields.userSvtId = 0LL;
            v52 = *p_servantData;
            if ( *p_servantData )
            {
              p_userSvtEquipIds = (BattleServantConfConponent_o *)&v52->fields.userSvtEquipIds;
              userSvtEquipIds = v52->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                if ( *(_QWORD *)&userSvtEquipIds->max_length )
                  goto LABEL_63;
              }
              v55 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v55 = BalanceConfig_TypeInfo;
              }
              v56 = (System_Int32_array **)sub_B706AC(long___TypeInfo, (unsigned int)v55->static_fields->SvtEquipMax);
              p_userSvtEquipIds->klass = (BattleServantConfConponent_c *)v56;
              sub_B70630(p_userSvtEquipIds, v56, v57, v58, v59, v60, v61, v62);
              v52 = *p_servantData;
              if ( *p_servantData )
              {
LABEL_63:
                v63 = v52->fields.userSvtEquipIds;
                if ( v63 )
                {
                  if ( !v63->max_length )
                    goto LABEL_84;
                  v63->m_Items[0] = 0LL;
                  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
                  if ( this )
                  {
                    ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
                    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.classCompatibilityIcon;
                    if ( this )
                    {
                      ServantClassCompatibilityIconComponent__Clear(
                        (ServantClassCompatibilityIconComponent_o *)this,
                        0LL);
                      goto LABEL_80;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_83:
      sub_B7076C(this, *(_QWORD *)&idx);
    }
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
    if ( !this )
      goto LABEL_83;
    this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !*p_servantData )
      goto LABEL_83;
    v48 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v48 )
      goto LABEL_83;
    if ( v48->max_length )
    {
      v49 = v48->m_Items[0];
      if ( v49 < 1 )
      {
        v50 = 0;
      }
      else
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_83;
        v50 = !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 Master_WarQuestSelectionMaster,
                 &v70,
                 v49,
                 (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
      v64 = v69;
      v65 = (UserServantEntity_o *)sub_B70764(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21610796(v65, v64, 0LL);
      entity = v65;
      WaveBattleWaveServantInfoItem__SetServant(v16, v65, classIds, v50, v66);
      goto LABEL_74;
    }
LABEL_84:
    v68 = sub_B70798(this);
    sub_B70738(v68, 0LL);
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_83;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !*p_servantData )
    goto LABEL_83;
  v43 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v43 )
    goto LABEL_83;
  if ( !v43->max_length )
    goto LABEL_84;
  v44 = v43->m_Items[0];
  if ( v44 < 1 )
  {
    v45 = 0;
  }
  else
  {
    this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                Master_WarQuestSelectionMaster,
                                                &v70,
                                                v44,
                                                (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v45 = (unsigned __int8)this ^ 1;
    if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    {
      if ( !*p_servantData )
        goto LABEL_83;
      v46 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v46 )
        goto LABEL_83;
      if ( v46->max_length )
      {
        v45 = 0;
        v46->m_Items[0] = 0LL;
        goto LABEL_69;
      }
      goto LABEL_84;
    }
  }
LABEL_69:
  WaveBattleWaveServantInfoItem__SetServant(v16, entity, classIds, v45 & 1, v42);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_83;
  if ( UserServantEntity__IsWithdrawal(entity, 0LL) )
  {
LABEL_74:
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskServantLabel = v16->fields.maskServantLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15545/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
      if ( maskServantLabel )
      {
        UILabel__set_text(maskServantLabel, (System_String_o *)this, 0LL);
        goto LABEL_80;
      }
    }
    goto LABEL_83;
  }
LABEL_80:
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_83;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_83;
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
  int64_t LevelMax; // x0
  __int64 v11; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  struct DeckServantData_o *v15; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v17; // x23
  UserServantEntity_o *v18; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x21
  __int64 v25; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_435013F & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&IconLabelInfo_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserServantEntity_TypeInfo);
    sub_B70694(&StringLiteral_15543/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_B70694(&StringLiteral_19796/*"img_frames_mask14"*/);
    byte_435013F = 1;
  }
  entity = 0LL;
  v9 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  if ( !userServantEntity )
    goto LABEL_37;
  lv = userServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v9 )
    goto LABEL_37;
  IconLabelInfo__Set_27789840(v9, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_37;
  LevelMax = (int64_t)this->fields.servantFaceIcon;
  if ( !LevelMax )
    goto LABEL_37;
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
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    LevelMax = NetworkManager__get_UserId(0LL);
    v15 = this->fields.servantData;
    if ( !v15 )
      goto LABEL_37;
    svtEquipIds = v15->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_37;
    if ( !svtEquipIds->max_length )
    {
      v25 = sub_B70798(LevelMax);
      sub_B70738(v25, 0LL);
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_37;
    if ( UserServantCollectionMaster__TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           LevelMax,
           svtEquipIds->m_Items[1],
           0LL) )
    {
      v17 = entity;
      v18 = (UserServantEntity_o *)sub_B70764(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21610796(v18, v17, 0LL);
      LevelMax = (int64_t)this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v18, 0LL);
        LevelMax = (int64_t)this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_19796/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15543/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_29;
          }
        }
      }
LABEL_37:
      sub_B7076C(LevelMax, v11);
    }
  }
LABEL_29:
  LevelMax = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)LevelMax,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v23;
  *(_QWORD *)&v27.fields.fakeValue = v22;
  LevelMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL);
  if ( !v24 )
    goto LABEL_37;
  LevelMax = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v24,
                        LevelMax,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LevelMax || !this->fields.classCompatibilityIcon )
    goto LABEL_37;
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

  if ( (byte_435013C & 1) == 0 )
  {
    sub_B70694(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_435013C = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B70A60(v8);
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

  if ( (byte_435013D & 1) == 0 )
  {
    sub_B70694(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_435013D = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B70A60(v8);
  WaveBattleWaveServantInfoItem__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = n;
  v13 = result;
  if ( (byte_434FCD1 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_434FCD1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v13, *(_QWORD *)&n);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, v9);
  return (System_IAsyncResult_o *)sub_B70638(this, v11, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  WaveBattleWaveServantInfoItem_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (WaveBattleWaveServantInfoItem_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)n, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)n, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B706BC(v22);
      v25 = sub_B70AC0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_B08590(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B70744(v17, v22);
        (*v19)(v21, v26, (unsigned int)n, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_B08590(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)n,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)n,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)n, v22);
    goto LABEL_38;
  }
}