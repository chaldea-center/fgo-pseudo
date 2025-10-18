void WaveBattleWaveServantInfoItem___ctor(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void WaveBattleWaveServantInfoItem__Awake(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  ;
}


void WaveBattleWaveServantInfoItem__EndCloseShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      8,
      (unsigned int)this->fields.partyIdx,
      callbackFunc->fields.method);
}


void WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3EDFB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3EDFB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void WaveBattleWaveServantInfoItem__EndShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C3EDF9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__);
    byte_4C3EDF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_1C372B4(v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void WaveBattleWaveServantInfoItem__OnClickEquip(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.partyIdx,
      callbackFunc->fields.method);
}


void WaveBattleWaveServantInfoItem__OnClickServant(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.partyIdx,
      callbackFunc->fields.method);
}


// attributes: thunk
void WaveBattleWaveServantInfoItem__OnLongPressEquip(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem__OpenEquipDetail(this, method);
}


// attributes: thunk
void WaveBattleWaveServantInfoItem__OnLongPressServant(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem__OpenServantDetail(this, method);
}


void WaveBattleWaveServantInfoItem__OpenEquipDetail(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
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
  if ( (byte_4C3EDFA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C37058(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    byte_4C3EDFA = 1;
  }
  entity = 0;
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
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
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
           (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v8 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v9 = v7;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C37070(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
    if ( v9 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v15, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0);
        if ( v14 )
        {
          CommonUI__OpenServantEquipStatusDialog(v14, 11, v13, 1, v15, 0, 0, 0);
          return;
        }
LABEL_26:
        sub_1C372B4(this);
      }
LABEL_27:
      sub_1C372BC(this);
    }
  }
  else
  {
LABEL_22:
    v16 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C37070(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
}


void WaveBattleWaveServantInfoItem__OpenServantDetail(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
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
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4C3EDF8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_WaveBattleWaveServantInfoItem_EndShowServant__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C37058(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
    byte_4C3EDF8 = 1;
  }
  entity = 0;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
    v4 = v2[7].monitor;
    if ( !v4 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v4[3],
           (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
          goto LABEL_12;
        v7 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C37070(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = v2[7].monitor;
        if ( v9 )
        {
          v10 = (System_Int64_array *)*((_QWORD *)v9 + 5);
          v11 = entity;
          klass = (QuestRestrictionInfo_o *)v2[8].klass;
          v13 = (CommonUI_o *)this;
          v14 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C372A4(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v14,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0);
          if ( v13 )
          {
            CommonUI__OpenServantStatusDialog_31219336(
              v13,
              1,
              (UserServantEntity_o *)v11,
              v10,
              klass,
              v14,
              1,
              0,
              0,
              0,
              0,
              0);
            return;
          }
        }
      }
LABEL_20:
      sub_1C372B4(this);
    }
  }
LABEL_12:
  v5 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
}


void WaveBattleWaveServantInfoItem__SetBlank(
        WaveBattleWaveServantInfoItem_o *this,
        bool isSelectWaveFlag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantSetSprite; // x0
  UISprite_o *v6; // x20
  struct DeckServantData_o *servantData; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  CGThumbnailListItem_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v10; // x0
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Int64_array *v14; // x8

  if ( (byte_4C3EDF6 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&StringLiteral_19615/*"formation_select_small"*/);
    byte_4C3EDF6 = 1;
  }
  servantSetSprite = (UnityEngine_Component_o *)this->fields.servantSetSprite;
  if ( !servantSetSprite )
    goto LABEL_22;
  servantSetSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantSetSprite, 0);
  if ( !servantSetSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSetSprite, 1, 0);
  if ( !isSelectWaveFlag )
  {
    servantSetSprite = (UnityEngine_Component_o *)this->fields.servantSetSprite;
    if ( !servantSetSprite )
      goto LABEL_22;
    servantSetSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantSetSprite, 0);
    if ( !servantSetSprite )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantSetSprite, 1, 0);
    v6 = this->fields.servantSetSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    servantSetSprite = (UnityEngine_Component_o *)AtlasManager__SetPartyOrganizationImage(
                                                    v6,
                                                    (System_String_o *)StringLiteral_19615/*"formation_select_small"*/,
                                                    0);
  }
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_22;
  p_userSvtEquipIds = (CGThumbnailListItem_o *)&servantData->fields.userSvtEquipIds;
  userSvtEquipIds = servantData->fields.userSvtEquipIds;
  servantData->fields.userSvtId = 0;
  if ( !userSvtEquipIds || !userSvtEquipIds->max_length )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    v11 = sub_1C37100(long___TypeInfo, (unsigned int)v10->static_fields->SvtEquipMax);
    p_userSvtEquipIds->klass = (CGThumbnailListItem_c *)v11;
    sub_1C36FFC(p_userSvtEquipIds, v11, v12, v13);
    servantData = this->fields.servantData;
    if ( !servantData )
      goto LABEL_22;
  }
  v14 = servantData->fields.userSvtEquipIds;
  if ( !v14 )
    goto LABEL_22;
  if ( !LODWORD(v14->max_length) )
    sub_1C372BC(servantSetSprite);
  v14->m_Items[0] = 0;
  servantSetSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !servantSetSprite
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)servantSetSprite, 0),
        (servantSetSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon) == 0) )
  {
LABEL_22:
    sub_1C372B4(servantSetSprite);
  }
  ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)servantSetSprite, 0);
}


void WaveBattleWaveServantInfoItem__SetItem(
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
  struct DeckServantData_o **p_servantData; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UISprite_o *numberSprite; // x26
  System_String_o *v26; // x0
  Il2CppObject *Master_object; // x25
  const MethodInfo *userSvtId; // x2
  UserServantCollectionMaster_o *v29; // x26
  const MethodInfo *v30; // x4
  struct DeckServantData_o *v31; // x21
  struct System_Int64_array *v32; // x8
  CGThumbnailListItem_o *v33; // x21
  struct System_Int64_array *v34; // t1
  il2cpp_array_size_t v35; // x9
  int64_t v36; // x2
  char v37; // w8
  struct DeckServantData_o *v38; // x8
  struct DeckServantData_o *v39; // x23
  struct System_Int64_array *v40; // x8
  CGThumbnailListItem_o *p_userSvtEquipIds; // x23
  struct System_Int64_array *userSvtEquipIds; // t1
  il2cpp_array_size_t max_length; // x9
  int64_t v44; // x2
  bool v45; // w23
  BalanceConfig_c *v46; // x0
  __int64 v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Int64_array *v50; // x9
  BalanceConfig_c *v51; // x0
  __int64 v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Int64_array *v55; // x8
  const MethodInfo *v56; // x4
  Il2CppObject *v57; // x21
  UserServantCollectionEntity_o *v58; // x22
  UILabel_o *maskServantLabel; // x20
  Il2CppObject *v60; // [xsp+8h] [xbp-88h] BYREF
  UserServantCollectionEntity_o *v61; // [xsp+10h] [xbp-80h] BYREF
  Il2CppObject *v62; // [xsp+18h] [xbp-78h] BYREF
  int v63; // [xsp+24h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v16 = this;
  if ( (byte_4C3EDF5 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&UserServantEntity_TypeInfo);
    sub_1C37058(&StringLiteral_15496/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1C37058(&StringLiteral_21531/*"member_txt_"*/);
    byte_4C3EDF5 = 1;
  }
  entity = 0;
  v63 = 0;
  v61 = 0;
  v62 = 0;
  v60 = 0;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_84;
  v17 = DeckServantData__Clone(servantData, 0);
  v16->fields.servantData = v17;
  p_servantData = &v16->fields.servantData;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.servantData, (int32_t)v17, v19, v20);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v21, v22);
  v16->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.callbackFunc, (int32_t)callback, v23, v24);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantLabel;
  if ( !this )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipObj;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipLabel;
  if ( !this )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
  numberSprite = v16->fields.numberSprite;
  v63 = idx + 1;
  v26 = System_Int32__ToString((int32_t)&v63, 0);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_63561656(
                                              (System_String_o *)StringLiteral_21531/*"member_txt_"*/,
                                              v26,
                                              0);
  if ( !numberSprite )
    goto LABEL_84;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_84;
  userSvtId = (const MethodInfo *)(*p_servantData)->fields.userSvtId;
  v29 = (UserServantCollectionMaster_o *)this;
  if ( (__int64)userSvtId < 1 )
    goto LABEL_40;
  if ( !Master_object )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              (int64_t)userSvtId,
                                              (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_40:
    if ( isInterruption )
    {
      v38 = *p_servantData;
      if ( !*p_servantData )
        goto LABEL_84;
      if ( v38->fields.userSvtId >= 1 && v38->fields.svtId >= 1 )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
        }
        if ( !*p_servantData || !v29 )
          goto LABEL_84;
        if ( UserServantCollectionMaster__TryGetEntity(
               v29,
               &v61,
               this[1].fields.classCompatibilityIcon[1].fields.m_CachedPtr,
               (*p_servantData)->fields.svtId,
               0) )
        {
          this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
          if ( !this )
            goto LABEL_84;
          this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
          if ( !this )
            goto LABEL_84;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          v39 = *p_servantData;
          if ( !*p_servantData )
            goto LABEL_84;
          userSvtEquipIds = v39->fields.userSvtEquipIds;
          p_userSvtEquipIds = (CGThumbnailListItem_o *)&v39->fields.userSvtEquipIds;
          v40 = userSvtEquipIds;
          if ( userSvtEquipIds && (max_length = v40->max_length) != 0 )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_85;
            v44 = v40->m_Items[0];
            if ( v44 < 1 )
            {
              v45 = 0;
            }
            else
            {
              if ( !Master_object )
                goto LABEL_84;
              v45 = !DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       &v62,
                       v44,
                       (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            }
          }
          else
          {
            v51 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v51 = BalanceConfig_TypeInfo;
            }
            v52 = sub_1C37100(long___TypeInfo, (unsigned int)v51->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (CGThumbnailListItem_c *)v52;
            sub_1C36FFC(p_userSvtEquipIds, v52, v53, v54);
            if ( !*p_servantData )
              goto LABEL_84;
            v55 = (*p_servantData)->fields.userSvtEquipIds;
            if ( !v55 )
              goto LABEL_84;
            if ( !LODWORD(v55->max_length) )
              goto LABEL_85;
            v45 = 0;
            v55->m_Items[0] = 0;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
          if ( !this )
            goto LABEL_84;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &v60,
                 servantData->fields.userSvtId,
                 (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
          {
            v57 = v60;
          }
          else
          {
            v58 = v61;
            v57 = (Il2CppObject *)sub_1C372A4(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_43157536((UserServantEntity_o *)v57, v58, 1, 0);
          }
          entity = v57;
          WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)v57, classIds, v45, v56);
          goto LABEL_75;
        }
      }
    }
LABEL_50:
    WaveBattleWaveServantInfoItem__SetBlank(v16, isSelectWaveFlag, userSvtId);
    goto LABEL_80;
  }
  if ( !isInterruption )
  {
    this = (WaveBattleWaveServantInfoItem_o *)entity;
    if ( !entity )
      goto LABEL_84;
    if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
      goto LABEL_50;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v31 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_84;
  v34 = v31->fields.userSvtEquipIds;
  v33 = (CGThumbnailListItem_o *)&v31->fields.userSvtEquipIds;
  v32 = v34;
  if ( !v34 || (v35 = v32->max_length) == 0 )
  {
    v46 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    v47 = sub_1C37100(long___TypeInfo, (unsigned int)v46->static_fields->SvtEquipMax);
    v33->klass = (CGThumbnailListItem_c *)v47;
    sub_1C36FFC(v33, v47, v48, v49);
LABEL_54:
    if ( !*p_servantData )
      goto LABEL_84;
    v50 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v50 )
      goto LABEL_84;
    if ( LODWORD(v50->max_length) )
    {
      v37 = 0;
      v50->m_Items[0] = 0;
      goto LABEL_58;
    }
LABEL_85:
    sub_1C372BC(this);
  }
  if ( !(_DWORD)v35 )
    goto LABEL_85;
  v36 = v32->m_Items[0];
  if ( v36 < 1 )
  {
    v37 = 0;
    goto LABEL_58;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v62,
                                              v36,
                                              (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v37 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_54;
LABEL_58:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v37 & 1, v30);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_84;
  if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
  {
LABEL_75:
    this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      maskServantLabel = v16->fields.maskServantLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15496/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
      if ( maskServantLabel )
      {
        UILabel__set_text(maskServantLabel, (System_String_o *)this, 0);
        goto LABEL_80;
      }
    }
LABEL_84:
    sub_1C372B4(this);
  }
LABEL_80:
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void WaveBattleWaveServantInfoItem__SetServant(
        WaveBattleWaveServantInfoItem_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int32_array *classIds,
        bool isSetEquip,
        const MethodInfo *method)
{
  IconLabelInfo_o *v9; // x23
  void *LevelMax; // x0
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v14; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v16; // x23
  UserServantEntity_o *v17; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x22
  __int64 v22; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C3EDF7 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserServantEntity_TypeInfo);
    sub_1C37058(&StringLiteral_15494/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_1C37058(&StringLiteral_20404/*"img_frames_mask14"*/);
    byte_4C3EDF7 = 1;
  }
  entity = 0;
  v9 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  if ( !userServantEntity )
    goto LABEL_36;
  lv = userServantEntity->fields.lv;
  LevelMax = (void *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v9 )
    goto LABEL_36;
  IconLabelInfo__Set_40917868(v9, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0);
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
    0,
    0,
    0,
    0,
    0);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    LevelMax = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      LevelMax = NetworkManager_TypeInfo;
    }
    v14 = this->fields.servantData;
    if ( !v14 )
      goto LABEL_36;
    svtEquipIds = v14->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_36;
    if ( !LODWORD(svtEquipIds->max_length) )
      sub_1C372BC(LevelMax);
    if ( !Master_object )
      goto LABEL_36;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(*((_QWORD *)LevelMax + 23) + 64LL),
           svtEquipIds->m_Items[0],
           0) )
    {
      v16 = entity;
      v17 = (UserServantEntity_o *)sub_1C372A4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_43157536(v17, v16, 0, 0);
      LevelMax = this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v17, 0);
        LevelMax = this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20404/*"img_frames_mask14"*/, 0);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_15494/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0);
            goto LABEL_29;
          }
        }
      }
LABEL_36:
      sub_1C372B4(LevelMax);
    }
  }
LABEL_29:
  LevelMax = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v22;
  *(_QWORD *)&v25.fields.fakeValue = v21;
  LevelMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v25, 0);
  if ( !v23 )
    goto LABEL_36;
  LevelMax = DataMasterBase_object__object__int___GetEntity(
               v23,
               (int32_t)LevelMax,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !LevelMax || !this->fields.classCompatibilityIcon )
    goto LABEL_36;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    *((_DWORD *)LevelMax + 20),
    classIds,
    0,
    0);
}


void WaveBattleWaveServantInfoItem__add_callbackFunc(
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

  if ( (byte_4C3EDF3 & 1) == 0 )
  {
    sub_1C37058(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_4C3EDF3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v8->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C37574(v8);
  WaveBattleWaveServantInfoItem__remove_callbackFunc(v11, v12, v13);
}


void WaveBattleWaveServantInfoItem__remove_callbackFunc(
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

  if ( (byte_4C3EDF4 & 1) == 0 )
  {
    sub_1C37058(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_4C3EDF4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v8->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1C37574(v8);
  WaveBattleWaveServantInfoItem__Awake(v11, v12);
}


void WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A769C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76970;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *WaveBattleWaveServantInfoItem_CallbackFunc__BeginInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = n;
  v20 = result;
  if ( (byte_4C3EDFC & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4C3EDFC = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&n,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    this->fields.method);
}