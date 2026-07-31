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
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x9

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
  __int64 v4; // x1

  if ( (byte_59342DB & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59342DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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
  __int64 v8; // x1

  if ( (byte_59342D9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__);
    byte_59342D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_21FFECC(v7, v8);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void WaveBattleWaveServantInfoItem__OnClickEquip(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x9

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
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // x9

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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  _QWORD *monitor; // x8
  __int64 v5; // x8
  _QWORD *v6; // x8
  __int64 v7; // x8
  bool v8; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x8
  __int64 v12; // x8
  CommonUI_o *v13; // x20
  int64_t v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_59342DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_21FFC50(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    byte_59342DA = 1;
  }
  monitor = v3[7].monitor;
  entity = 0;
  if ( !monitor )
    goto LABEL_28;
  if ( !monitor[3] )
    goto LABEL_22;
  v5 = monitor[5];
  if ( !v5 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_29;
  if ( *(__int64 *)(v5 + 32) > 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    v6 = v3[7].monitor;
    if ( !v6 )
      goto LABEL_28;
    v7 = v6[5];
    if ( !v7 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_29;
    if ( !this )
      goto LABEL_28;
    v8 = DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           *(_QWORD *)(v7 + 32),
           (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v9 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( v8 )
    {
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
      v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v11 = v3[7].monitor;
      if ( !v11 )
        goto LABEL_28;
      v12 = v11[5];
      if ( !v12 )
        goto LABEL_28;
      if ( *(_DWORD *)(v12 + 24) )
      {
        v13 = (CommonUI_o *)this;
        v14 = *(_QWORD *)(v12 + 32);
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v15, v3, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0);
        if ( v13 )
        {
          CommonUI__OpenServantEquipStatusDialog(v13, 11, v14, 1, v15, 0, 0, 0);
          return;
        }
LABEL_28:
        sub_21FFECC(this, method);
      }
LABEL_29:
      sub_21FFED4(this);
    }
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0);
  }
  else
  {
LABEL_22:
    v16 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0);
  }
}


void WaveBattleWaveServantInfoItem__OpenServantDetail(WaveBattleWaveServantInfoItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WaveBattleWaveServantInfoItem_o *v3; // x19
  struct DeckServantData_o *servantData; // x8
  struct DeckServantData_o *v5; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct DeckServantData_o *v12; // x8
  CommonUI_o *v13; // x20
  Il2CppObject *v14; // x21
  System_Int64_array *userSvtEquipIds; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  ServantStatusDialog_EndIndividualityDelegate_o *v17; // x24
  struct DeckServantData_o *v18; // x8
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_59342D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_WaveBattleWaveServantInfoItem_EndShowServant__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_21FFC50(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
    byte_59342D8 = 1;
  }
  servantData = v3->fields.servantData;
  entity = 0;
  if ( !servantData )
    goto LABEL_26;
  if ( servantData->fields.userSvtId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
    v5 = v3->fields.servantData;
    if ( v5 && this )
    {
      if ( !DataMasterBase_object__object__long___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v5->fields.userSvtId,
              (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
      {
LABEL_12:
        v6 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
        return;
      }
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0) )
          goto LABEL_12;
        v10 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = v3->fields.servantData;
        if ( v12 )
        {
          v13 = (CommonUI_o *)this;
          v14 = entity;
          userSvtEquipIds = v12->fields.userSvtEquipIds;
          questRestrictionInfo = v3->fields.questRestrictionInfo;
          v17 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v17,
            (Il2CppObject *)v3,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0);
          this = (WaveBattleWaveServantInfoItem_o *)v3->fields.questRestrictionInfo;
          if ( this )
          {
            v18 = v3->fields.servantData;
            if ( !v18 )
              goto LABEL_26;
            this = (WaveBattleWaveServantInfoItem_o *)QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(
                                                        (QuestRestrictionInfo_o *)this,
                                                        v18->fields.svtId,
                                                        0);
          }
          if ( v13 )
          {
            CommonUI__OpenServantStatusDialog_37302900(
              v13,
              1,
              (UserServantEntity_o *)v14,
              userSvtEquipIds,
              questRestrictionInfo,
              v17,
              1,
              0,
              0,
              0,
              0,
              (int32_t)this,
              0);
            return;
          }
        }
      }
    }
LABEL_26:
    sub_21FFECC(this, method);
  }
  v8 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveServantInfoItem__SetBlank(
        WaveBattleWaveServantInfoItem_o *this,
        bool isSelectWaveFlag,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantSetSprite; // x0
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UISprite_o *v9; // x20
  struct DeckServantData_o *servantData; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  MissionNaviTransitionBoardItem_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v13; // x0
  __int64 v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Int64_array *v21; // x8

  if ( (byte_59342D6 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&StringLiteral_20503/*"formation_select_small"*/);
    byte_59342D6 = 1;
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
    v9 = this->fields.servantSetSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
    servantSetSprite = (UnityEngine_Component_o *)AtlasManager__SetPartyOrganizationImage(
                                                    v9,
                                                    (System_String_o *)StringLiteral_20503/*"formation_select_small"*/,
                                                    0);
  }
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_22;
  p_userSvtEquipIds = (MissionNaviTransitionBoardItem_o *)&servantData->fields.userSvtEquipIds;
  userSvtEquipIds = servantData->fields.userSvtEquipIds;
  servantData->fields.userSvtId = 0;
  if ( !userSvtEquipIds || !userSvtEquipIds->max_length )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isSelectWaveFlag, v6);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = sub_21FFD10(long___TypeInfo, (unsigned int)v13->static_fields->SvtEquipMax);
    p_userSvtEquipIds->klass = (MissionNaviTransitionBoardItem_c *)v14;
    sub_21FFBF4(p_userSvtEquipIds, v14, v15, v16, v17, v18, v19, v20);
    servantData = this->fields.servantData;
    if ( !servantData )
      goto LABEL_22;
  }
  v21 = servantData->fields.userSvtEquipIds;
  if ( !v21 )
    goto LABEL_22;
  if ( !LODWORD(v21->max_length) )
    sub_21FFED4(servantSetSprite);
  servantSetSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  v21->m_Items[0] = 0;
  if ( !servantSetSprite
    || (ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)servantSetSprite, 0),
        (servantSetSprite = (UnityEngine_Component_o *)this->fields.classCompatibilityIcon) == 0) )
  {
LABEL_22:
    sub_21FFECC(servantSetSprite, isSelectWaveFlag);
  }
  ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)servantSetSprite, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  UISprite_o *numberSprite; // x26
  System_String_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  Il2CppObject *Master_object; // x25
  const MethodInfo *userSvtId; // x2
  UserServantCollectionMaster_o *v43; // x26
  __int64 v44; // x2
  const MethodInfo *v45; // x4
  struct DeckServantData_o *v46; // x21
  struct System_Int64_array *v47; // x8
  MissionNaviTransitionBoardItem_o *v48; // x21
  struct System_Int64_array *v49; // t1
  il2cpp_array_size_t v50; // x9
  int64_t v51; // x2
  char v52; // w8
  struct DeckServantData_o *v53; // x8
  __int64 v54; // x2
  struct DeckServantData_o *v55; // x23
  struct System_Int64_array *v56; // x8
  MissionNaviTransitionBoardItem_o *p_userSvtEquipIds; // x23
  struct System_Int64_array *userSvtEquipIds; // t1
  il2cpp_array_size_t max_length; // x9
  int64_t v60; // x2
  bool v61; // w23
  BalanceConfig_c *v62; // x0
  __int64 v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Int64_array *v70; // x9
  BalanceConfig_c *v71; // x0
  __int64 v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_Int64_array *v79; // x8
  const MethodInfo *v80; // x4
  Il2CppObject *v81; // x21
  UserServantCollectionEntity_o *v82; // x22
  __int64 v83; // x1
  __int64 v84; // x2
  UILabel_o *maskServantLabel; // x20
  Il2CppObject *v86; // [xsp+8h] [xbp-88h] BYREF
  UserServantCollectionEntity_o *v87; // [xsp+10h] [xbp-80h] BYREF
  Il2CppObject *v88; // [xsp+18h] [xbp-78h] BYREF
  int v89; // [xsp+24h] [xbp-6Ch] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v16 = this;
  if ( (byte_59342D5 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UserServantEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_16076/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/);
    this = (WaveBattleWaveServantInfoItem_o *)sub_21FFC50(&StringLiteral_22582/*"member_txt_"*/);
    byte_59342D5 = 1;
  }
  entity = 0;
  v89 = 0;
  v87 = 0;
  v88 = 0;
  v86 = 0;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_84;
  v17 = DeckServantData__Clone(servantData, 0);
  v16->fields.servantData = v17;
  p_servantData = &v16->fields.servantData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->fields.servantData, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v16->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v16->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v16->fields.callbackFunc,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantObj;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskServantLabel;
  if ( !this )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)this, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipObj;
  if ( !this )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.maskEquipLabel;
  if ( !this )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)this, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  numberSprite = v16->fields.numberSprite;
  v89 = idx + 1;
  v38 = System_Int32__ToString((int32_t)&v89, 0);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_75438412(
                                              (System_String_o *)StringLiteral_22582/*"member_txt_"*/,
                                              v38,
                                              0);
  if ( !numberSprite )
    goto LABEL_84;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39, v40);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_84;
  userSvtId = (const MethodInfo *)(*p_servantData)->fields.userSvtId;
  v43 = (UserServantCollectionMaster_o *)this;
  if ( (__int64)userSvtId < 1 )
    goto LABEL_40;
  if ( !Master_object )
    goto LABEL_84;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              (int64_t)userSvtId,
                                              (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_40:
    if ( isInterruption )
    {
      v53 = *p_servantData;
      if ( !*p_servantData )
        goto LABEL_84;
      if ( v53->fields.userSvtId >= 1 && v53->fields.svtId >= 1 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&idx, userSvtId);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&idx, userSvtId);
          this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
        }
        if ( !*p_servantData || !v43 )
          goto LABEL_84;
        if ( UserServantCollectionMaster__TryGetEntity(
               v43,
               &v87,
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
          v55 = *p_servantData;
          if ( !*p_servantData )
            goto LABEL_84;
          userSvtEquipIds = v55->fields.userSvtEquipIds;
          p_userSvtEquipIds = (MissionNaviTransitionBoardItem_o *)&v55->fields.userSvtEquipIds;
          v56 = userSvtEquipIds;
          if ( userSvtEquipIds && (max_length = v56->max_length) != 0 )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_85;
            v60 = v56->m_Items[0];
            if ( v60 < 1 )
            {
              v61 = 0;
            }
            else
            {
              if ( !Master_object )
                goto LABEL_84;
              v61 = !DataMasterBase_object__object__long___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       &v88,
                       v60,
                       (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            }
          }
          else
          {
            v71 = BalanceConfig_TypeInfo;
            if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&idx, v54);
              v71 = BalanceConfig_TypeInfo;
            }
            v72 = sub_21FFD10(long___TypeInfo, (unsigned int)v71->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (MissionNaviTransitionBoardItem_c *)v72;
            sub_21FFBF4(p_userSvtEquipIds, v72, v73, v74, v75, v76, v77, v78);
            if ( !*p_servantData )
              goto LABEL_84;
            v79 = (*p_servantData)->fields.userSvtEquipIds;
            if ( !v79 )
              goto LABEL_84;
            if ( !LODWORD(v79->max_length) )
              goto LABEL_85;
            v61 = 0;
            v79->m_Items[0] = 0;
          }
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&idx, v60);
          this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
          if ( !this )
            goto LABEL_84;
          if ( DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 &v86,
                 servantData->fields.userSvtId,
                 (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
          {
            v81 = v86;
          }
          else
          {
            v82 = v87;
            v81 = (Il2CppObject *)sub_21FFEBC(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_50110420((UserServantEntity_o *)v81, v82, 1, 0);
          }
          entity = v81;
          WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)v81, classIds, v61, v80);
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
  v46 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_84;
  v49 = v46->fields.userSvtEquipIds;
  v48 = (MissionNaviTransitionBoardItem_o *)&v46->fields.userSvtEquipIds;
  v47 = v49;
  if ( !v49 || (v50 = v47->max_length) == 0 )
  {
    v62 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&idx, v44);
      v62 = BalanceConfig_TypeInfo;
    }
    v63 = sub_21FFD10(long___TypeInfo, (unsigned int)v62->static_fields->SvtEquipMax);
    v48->klass = (MissionNaviTransitionBoardItem_c *)v63;
    sub_21FFBF4(v48, v63, v64, v65, v66, v67, v68, v69);
LABEL_54:
    if ( !*p_servantData )
      goto LABEL_84;
    v70 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v70 )
      goto LABEL_84;
    if ( LODWORD(v70->max_length) )
    {
      v52 = 0;
      v70->m_Items[0] = 0;
      goto LABEL_58;
    }
LABEL_85:
    sub_21FFED4(this);
  }
  if ( !(_DWORD)v50 )
    goto LABEL_85;
  v51 = v47->m_Items[0];
  if ( v51 < 1 )
  {
    v52 = 0;
    goto LABEL_58;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v88,
                                              v51,
                                              (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v52 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_54;
LABEL_58:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v52 & 1, v45);
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16076/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0);
      if ( maskServantLabel )
      {
        UILabel__set_text(maskServantLabel, (System_String_o *)this, 0);
        goto LABEL_80;
      }
    }
LABEL_84:
    sub_21FFECC(this, *(_QWORD *)&idx);
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
  __int64 v11; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v18; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v20; // x23
  UserServantEntity_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  UISprite_o *maskEquipSprite; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *maskEquipLabel; // x22
  UserServantCollectionEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_59342D7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UserServantEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_16074/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/);
    sub_21FFC50(&StringLiteral_21346/*"img_frames_mask14"*/);
    byte_59342D7 = 1;
  }
  entity = 0;
  v9 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  if ( !userServantEntity )
    goto LABEL_32;
  lv = userServantEntity->fields.lv;
  LevelMax = (void *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v9 )
    goto LABEL_32;
  IconLabelInfo__Set_47932852(v9, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0);
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_32;
  LevelMax = this->fields.servantFaceIcon;
  if ( !LevelMax )
    goto LABEL_32;
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
    0,
    0);
  if ( isSetEquip )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v16);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    LevelMax = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v16);
      LevelMax = NetworkManager_TypeInfo;
    }
    v18 = this->fields.servantData;
    if ( !v18 )
      goto LABEL_32;
    svtEquipIds = v18->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_32;
    if ( !LODWORD(svtEquipIds->max_length) )
      sub_21FFED4(LevelMax);
    if ( !Master_object )
      goto LABEL_32;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(*((_QWORD *)LevelMax + 23) + 64LL),
           svtEquipIds->m_Items[0],
           0) )
    {
      v20 = entity;
      v21 = (UserServantEntity_o *)sub_21FFEBC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_50110420(v21, v20, 0, 0);
      LevelMax = this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v21, 0);
        LevelMax = this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22, v23);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_21346/*"img_frames_mask14"*/, 0);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
          LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_16074/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0);
            goto LABEL_29;
          }
        }
      }
LABEL_32:
      sub_21FFECC(LevelMax, v11);
    }
  }
LABEL_29:
  LevelMax = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  if ( !LevelMax || !this->fields.classCompatibilityIcon )
    goto LABEL_32;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleWaveServantInfoItem_o *v13; // x0
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59342D3 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_59342D3 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleWaveServantInfoItem_o *)sub_220024C(v8, WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleWaveServantInfoItem__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleWaveServantInfoItem_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59342D4 & 1) == 0 )
  {
    sub_21FFC50(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_59342D4 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleWaveServantInfoItem_o *)sub_220024C(v8, WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleWaveServantInfoItem__Awake(v13, v14);
}


void WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF2494;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF243C;
}


System_IAsyncResult_o *WaveBattleWaveServantInfoItem_CallbackFunc__BeginInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = n;
  if ( (byte_59342DC & 1) == 0 )
  {
    sub_21FFC50(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_59342DC = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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