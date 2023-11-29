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
    WaveBattleWaveServantInfoItem_CallbackFunc__Invoke(callbackFunc, 7, this->fields.partyIdx, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F6778 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F6778 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
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
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F6776 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v6);
    byte_40F6776 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *monitor; // x8
  __int64 v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x3
  __int64 v12; // x4
  _QWORD *v13; // x8
  __int64 v14; // x8
  int64_t v15; // x21
  CommonUI_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *v17; // x22
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  v3 = (Il2CppObject *)this;
  if ( (byte_40F6777 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v5);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B16FFC(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__, v6);
    byte_40F6777 = 1;
  }
  monitor = v3[4].monitor;
  if ( !monitor )
    goto LABEL_18;
  if ( monitor[3] )
  {
    v8 = monitor[4];
    if ( !v8 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v8 + 24) )
      goto LABEL_19;
    if ( *(__int64 *)(v8 + 32) > 0 )
    {
      v9 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
        v9 = (_QWORD *)sub_B17004(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
      v10 = (System_Reflection_MethodBase_o *)sub_B16FE0(v9, v9[3]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v13 = v3[4].monitor;
      if ( !v13 )
        goto LABEL_18;
      v14 = v13[4];
      if ( !v14 )
        goto LABEL_18;
      if ( *(_DWORD *)(v14 + 24) )
      {
        v15 = *(_QWORD *)(v14 + 32);
        v16 = (CommonUI_o *)this;
        v17 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     method,
                                                     v2,
                                                     v11,
                                                     v12);
        ServantStatusDialog_EndDelegate___ctor(v17, v3, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v16 )
        {
          CommonUI__OpenServantEquipStatusDialog(v16, 11, v15, 1, v17, 0LL, 0LL);
          return;
        }
LABEL_18:
        sub_B170D4();
      }
LABEL_19:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
  }
  v18 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
    v18 = (_QWORD *)sub_B17004(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
  v19 = (System_Reflection_MethodBase_o *)sub_B16FE0(v18, v18[3]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct DeckServantData_o *servantData; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  struct DeckServantData_o *v11; // x8
  UserServantEntity_o *Entity; // x20
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct DeckServantData_o *v20; // x8
  System_Int64_array *userSvtEquipIds; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  CommonUI_o *v23; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v24; // x24
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0

  if ( (byte_40F6775 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B16FFC(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v7);
    sub_B16FFC(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__, v8);
    byte_40F6775 = 1;
  }
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_18;
  if ( servantData->fields.userSvtId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
    v11 = this->fields.servantData;
    if ( v11 && Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 Master_WarQuestSelectionMaster,
                 v11->fields.userSvtId,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v13 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
        v13 = (_QWORD *)sub_B17004(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
      v14 = (System_Reflection_MethodBase_o *)sub_B16FE0(v13, v13[3]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v20 = this->fields.servantData;
      if ( v20 )
      {
        userSvtEquipIds = v20->fields.userSvtEquipIds;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        v23 = (CommonUI_o *)Instance;
        v24 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B170CC(
                                                                  ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                  v16,
                                                                  v17,
                                                                  v18,
                                                                  v19);
        ServantStatusDialog_EndIndividualityDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_WaveBattleWaveServantInfoItem_EndShowServant__,
          0LL);
        if ( v23 )
        {
          CommonUI__OpenServantStatusDialog_18249048(v23, 1, Entity, userSvtEquipIds, questRestrictionInfo, v24, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
  v25 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
    v25 = (_QWORD *)sub_B17004(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v26 = (System_Reflection_MethodBase_o *)sub_B16FE0(v25, v25[3]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__SetItem(
        WaveBattleWaveServantInfoItem_o *this,
        int32_t idx,
        DeckServantData_o *servantData,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
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
  struct DeckServantData_o *v25; // x0
  struct DeckServantData_o **p_servantData; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UISprite_o *numberSprite; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  int64_t userSvtId; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // x23
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  _BOOL8 v53; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  struct System_Int64_array *v58; // x8
  struct System_Int64_array *v59; // x8
  IconLabelInfo_o *v60; // x21
  int32_t lv; // w23
  int32_t LevelMax; // w0
  ServantFaceIconComponent_o *v63; // x0
  UnityEngine_Component_o **p_servantFaceIcon; // x24
  struct DeckServantData_o *v65; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x21
  __int64 v69; // x22
  __int64 v70; // x23
  int32_t v71; // w0
  WarEntity_o *v72; // x0
  UnityEngine_Component_o *servantSetSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v75; // x20
  struct DeckServantData_o *v76; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  BattleServantConfConponent_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v79; // x0
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct System_Int64_array *v87; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  ServantClassCompatibilityIconComponent_o *classCompatibilityIcon; // x0
  UnityEngine_GameObject_o *v90; // x0
  UserServantEntity_o *v91; // [xsp+10h] [xbp-50h] BYREF
  int v92; // [xsp+1Ch] [xbp-44h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_40F6774 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&BalanceConfig_TypeInfo, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v19);
    sub_B16FFC(&long___TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_18773, v23);
    sub_B16FFC(&StringLiteral_20381, v24);
    byte_40F6774 = 1;
  }
  entity = 0LL;
  v92 = 0;
  v91 = 0LL;
  this->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_57;
  v25 = DeckServantData__Clone(servantData, 0LL);
  this->fields.servantData = v25;
  p_servantData = &this->fields.servantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantData,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  numberSprite = this->fields.numberSprite;
  v92 = idx + 1;
  v46 = System_Int32__ToString((int32_t)&v92, 0LL);
  v47 = System_String__Concat_43743732((System_String_o *)StringLiteral_20381, v46, 0LL);
  if ( !numberSprite )
    goto LABEL_57;
  UISprite__set_spriteName(numberSprite, v47, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !*p_servantData )
    goto LABEL_57;
  userSvtId = (*p_servantData)->fields.userSvtId;
  if ( userSvtId < 1 )
    goto LABEL_36;
  v50 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          userSvtId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_36:
    servantSetSprite = (UnityEngine_Component_o *)this->fields.servantSetSprite;
    if ( servantSetSprite )
    {
      gameObject = UnityEngine_Component__get_gameObject(servantSetSprite, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v75 = this->fields.servantSetSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        v53 = AtlasManager__SetPartyOrganizationImage(v75, (System_String_o *)StringLiteral_18773, 0LL);
        if ( *p_servantData )
        {
          (*p_servantData)->fields.userSvtId = 0LL;
          v76 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (BattleServantConfConponent_o *)&v76->fields.userSvtEquipIds;
            userSvtEquipIds = v76->fields.userSvtEquipIds;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_49;
            }
            v79 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v79 = BalanceConfig_TypeInfo;
            }
            v80 = (System_Int32_array **)sub_B17014(long___TypeInfo, (unsigned int)v79->static_fields->SvtEquipMax, v55);
            p_userSvtEquipIds->klass = (BattleServantConfConponent_c *)v80;
            sub_B16F98(p_userSvtEquipIds, v80, v81, v82, v83, v84, v85, v86);
            v76 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_49:
              v87 = v76->fields.userSvtEquipIds;
              if ( v87 )
              {
                if ( !v87->max_length )
                  goto LABEL_58;
                v87->m_Items[0] = 0LL;
                p_servantFaceIcon = (UnityEngine_Component_o **)&this->fields.servantFaceIcon;
                servantFaceIcon = this->fields.servantFaceIcon;
                if ( servantFaceIcon )
                {
                  ServantFaceIconComponent__Clear(servantFaceIcon, 0LL);
                  classCompatibilityIcon = this->fields.classCompatibilityIcon;
                  if ( classCompatibilityIcon )
                  {
                    ServantClassCompatibilityIconComponent__Clear(classCompatibilityIcon, 0LL);
                    goto LABEL_54;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_B170D4();
  }
  v51 = (UnityEngine_Component_o *)this->fields.servantSetSprite;
  if ( !v51 )
    goto LABEL_57;
  v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
  if ( !v52 )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(v52, 0, 0LL);
  if ( !*p_servantData )
    goto LABEL_57;
  v58 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v58 )
    goto LABEL_57;
  if ( !v58->max_length )
    goto LABEL_58;
  v55 = v58->m_Items[0];
  if ( v55 < 1 )
    goto LABEL_23;
  v53 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v50,
          &v91,
          v55,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( v53 )
    goto LABEL_23;
  if ( !*p_servantData )
    goto LABEL_57;
  v59 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v59 )
    goto LABEL_57;
  if ( !v59->max_length )
  {
LABEL_58:
    sub_B17100(v53, v54, v55);
    sub_B170A0();
  }
  v59->m_Items[0] = 0LL;
LABEL_23:
  v60 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v54, v55, v56, v57);
  IconLabelInfo___ctor(v60, 0LL);
  if ( !entity )
    goto LABEL_57;
  lv = entity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(entity, 0LL);
  if ( !v60 )
    goto LABEL_57;
  IconLabelInfo__Set_28888132(v60, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  p_servantFaceIcon = (UnityEngine_Component_o **)&this->fields.servantFaceIcon;
  v63 = this->fields.servantFaceIcon;
  v65 = this->fields.servantData;
  if ( !v65 )
    goto LABEL_57;
  if ( !v63 )
    goto LABEL_57;
  ServantFaceIconComponent__Set(
    v63,
    entity,
    v65->fields.userSvtEquipIds,
    this->fields.questRestrictionInfo,
    v60,
    0LL,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !entity )
    goto LABEL_57;
  v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v70 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v94.fields.currentCryptoKey = v70;
  *(_QWORD *)&v94.fields.fakeValue = v69;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
  if ( !v68 )
    goto LABEL_57;
  v72 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v68,
          v71,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v72 || !this->fields.classCompatibilityIcon )
    goto LABEL_57;
  ServantClassCompatibilityIconComponent__SetIcon(
    this->fields.classCompatibilityIcon,
    v72->fields.startType,
    classIds,
    0,
    0LL);
LABEL_54:
  if ( !*p_servantFaceIcon )
    goto LABEL_57;
  v90 = UnityEngine_Component__get_gameObject(*p_servantFaceIcon, 0LL);
  if ( !v90 )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(v90, 1, 0LL);
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

  if ( (byte_40F6772 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_40F6772 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B173C8(v8);
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

  if ( (byte_40F6773 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_40F6773 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B173C8(v8);
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
  sub_B16F98(
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = n;
  v13 = result;
  if ( (byte_40F78A1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_40F78A1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v10);
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