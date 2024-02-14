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

  if ( (byte_4213F9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4213F9A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4213F98 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v6);
    byte_4213F98 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *monitor; // x8
  __int64 v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x8
  __int64 v13; // x8
  int64_t v14; // x21
  CommonUI_o *v15; // x20
  ServantStatusDialog_EndDelegate_o *v16; // x22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4213F99 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v4);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B0D8A4(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__, v5);
    byte_4213F99 = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    goto LABEL_18;
  if ( monitor[3] )
  {
    v7 = monitor[4];
    if ( !v7 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_19;
    if ( *(__int64 *)(v7 + 32) > 0 )
    {
      v8 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
        v8 = (_QWORD *)sub_B0D8AC(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
      v9 = (System_Reflection_MethodBase_o *)sub_B0D888(v8, v8[3]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = v2[4].monitor;
      if ( !v12 )
        goto LABEL_18;
      v13 = v12[4];
      if ( !v13 )
        goto LABEL_18;
      if ( *(_DWORD *)(v13 + 24) )
      {
        v14 = *(_QWORD *)(v13 + 32);
        v15 = (CommonUI_o *)this;
        v16 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
        ServantStatusDialog_EndDelegate___ctor(v16, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v15 )
        {
          CommonUI__OpenServantEquipStatusDialog(v15, 11, v14, 1, v16, 0LL, 0LL);
          return;
        }
LABEL_18:
        sub_B0D97C(this);
      }
LABEL_19:
      v19 = sub_B0D9A8(this);
      sub_B0D948(v19, 0LL);
    }
  }
  v17 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
    v17 = (_QWORD *)sub_B0D8AC(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
  v18 = (System_Reflection_MethodBase_o *)sub_B0D888(v17, v17[3]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
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
  UserServantEntity_o *Entity; // x20
  _QWORD *v12; // x8
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  void *v16; // x8
  System_Int64_array *v17; // x22
  QuestRestrictionInfo_o *klass; // x23
  CommonUI_o *v19; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v20; // x24
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4213F97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B0D8A4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v7);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B0D8A4(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__, v8);
    byte_4213F97 = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    goto LABEL_18;
  if ( monitor[3] )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
    v10 = v2[4].monitor;
    if ( v10 && this )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                 v10[3],
                 (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v12 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
        v12 = (_QWORD *)sub_B0D8AC(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
      v13 = (System_Reflection_MethodBase_o *)sub_B0D888(v12, v12[3]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = v2[4].monitor;
      if ( v16 )
      {
        v17 = (System_Int64_array *)*((_QWORD *)v16 + 4);
        klass = (QuestRestrictionInfo_o *)v2[5].klass;
        v19 = (CommonUI_o *)this;
        v20 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B0D974(
                                                                  ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                  v14,
                                                                  v15);
        ServantStatusDialog_EndIndividualityDelegate___ctor(
          v20,
          v2,
          Method_WaveBattleWaveServantInfoItem_EndShowServant__,
          0LL);
        if ( v19 )
        {
          CommonUI__OpenServantStatusDialog_17028448(v19, 1, Entity, v17, klass, v20, 1, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B0D97C(this);
  }
  v21 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
    v21 = (_QWORD *)sub_B0D8AC(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v22 = (System_Reflection_MethodBase_o *)sub_B0D888(v21, v21[3]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
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
  WaveBattleWaveServantInfoItem_o *v12; // x19
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
  System_Int32_array **v25; // x0
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
  int64_t userSvtId; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v48; // x23
  __int64 v49; // x1
  struct System_Int64_array *v50; // x8
  int64_t v51; // x2
  struct System_Int64_array *v52; // x8
  IconLabelInfo_o *v53; // x21
  int32_t lv; // w23
  WaveBattleWaveServantInfoItem_o **p_servantFaceIcon; // x24
  struct DeckServantData_o *v56; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x21
  __int64 v58; // x22
  __int64 v59; // x23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v61; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  BattleServantConfConponent_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v64; // x0
  System_Int32_array **v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Int64_array *v72; // x8
  __int64 v73; // x0
  UserServantEntity_o *v74; // [xsp+10h] [xbp-50h] BYREF
  int v75; // [xsp+1Ch] [xbp-44h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  v12 = this;
  if ( (byte_4213F96 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v15);
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v19);
    sub_B0D8A4(&long___TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&StringLiteral_18903/*"formation_select_small"*/, v23);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B0D8A4(&StringLiteral_20527/*"member_txt_"*/, v24);
    byte_4213F96 = 1;
  }
  entity = 0LL;
  v75 = 0;
  v74 = 0LL;
  v12->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_57;
  v25 = (System_Int32_array **)DeckServantData__Clone(servantData, 0LL);
  v12->fields.servantData = (struct DeckServantData_o *)v25;
  p_servantData = &v12->fields.servantData;
  sub_B0D840((BattleServantConfConponent_o *)&v12->fields.servantData, v25, v27, v28, v29, v30, v31, v32);
  v12->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v12->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  numberSprite = v12->fields.numberSprite;
  v75 = idx + 1;
  v46 = System_Int32__ToString((int32_t)&v75, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_43849904(
                                              (System_String_o *)StringLiteral_20527/*"member_txt_"*/,
                                              v46,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_57;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !*p_servantData )
    goto LABEL_57;
  userSvtId = (*p_servantData)->fields.userSvtId;
  if ( userSvtId < 1 )
    goto LABEL_36;
  v48 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
  if ( !this )
    goto LABEL_57;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
          &entity,
          userSvtId,
          (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
LABEL_36:
    this = (WaveBattleWaveServantInfoItem_o *)v12->fields.servantSetSprite;
    if ( this )
    {
      this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        servantSetSprite = v12->fields.servantSetSprite;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        this = (WaveBattleWaveServantInfoItem_o *)AtlasManager__SetPartyOrganizationImage(
                                                    servantSetSprite,
                                                    (System_String_o *)StringLiteral_18903/*"formation_select_small"*/,
                                                    0LL);
        if ( *p_servantData )
        {
          (*p_servantData)->fields.userSvtId = 0LL;
          v61 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (BattleServantConfConponent_o *)&v61->fields.userSvtEquipIds;
            userSvtEquipIds = v61->fields.userSvtEquipIds;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_49;
            }
            v64 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v64 = BalanceConfig_TypeInfo;
            }
            v65 = (System_Int32_array **)sub_B0D8BC(long___TypeInfo, (unsigned int)v64->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (BattleServantConfConponent_c *)v65;
            sub_B0D840(p_userSvtEquipIds, v65, v66, v67, v68, v69, v70, v71);
            v61 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_49:
              v72 = v61->fields.userSvtEquipIds;
              if ( v72 )
              {
                if ( !v72->max_length )
                  goto LABEL_58;
                v72->m_Items[0] = 0LL;
                p_servantFaceIcon = (WaveBattleWaveServantInfoItem_o **)&v12->fields.servantFaceIcon;
                this = (WaveBattleWaveServantInfoItem_o *)v12->fields.servantFaceIcon;
                if ( this )
                {
                  ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)this, 0LL);
                  this = (WaveBattleWaveServantInfoItem_o *)v12->fields.classCompatibilityIcon;
                  if ( this )
                  {
                    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
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
    sub_B0D97C(this);
  }
  this = (WaveBattleWaveServantInfoItem_o *)v12->fields.servantSetSprite;
  if ( !this )
    goto LABEL_57;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !*p_servantData )
    goto LABEL_57;
  v50 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v50 )
    goto LABEL_57;
  if ( !v50->max_length )
    goto LABEL_58;
  v51 = v50->m_Items[0];
  if ( v51 < 1 )
    goto LABEL_23;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                              v48,
                                              &v74,
                                              v51,
                                              (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_23;
  if ( !*p_servantData )
    goto LABEL_57;
  v52 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v52 )
    goto LABEL_57;
  if ( !v52->max_length )
  {
LABEL_58:
    v73 = sub_B0D9A8(this);
    sub_B0D948(v73, 0LL);
  }
  v52->m_Items[0] = 0LL;
LABEL_23:
  v53 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v49, v51);
  IconLabelInfo___ctor(v53, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_57;
  lv = entity->fields.lv;
  this = (WaveBattleWaveServantInfoItem_o *)UserServantEntity__getLevelMax(entity, 0LL);
  if ( !v53 )
    goto LABEL_57;
  IconLabelInfo__Set_26821248(v53, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
  p_servantFaceIcon = (WaveBattleWaveServantInfoItem_o **)&v12->fields.servantFaceIcon;
  this = (WaveBattleWaveServantInfoItem_o *)v12->fields.servantFaceIcon;
  v56 = v12->fields.servantData;
  if ( !v56 )
    goto LABEL_57;
  if ( !this )
    goto LABEL_57;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    entity,
    v56->fields.userSvtEquipIds,
    v12->fields.questRestrictionInfo,
    v53,
    0LL,
    0LL);
  this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !entity )
    goto LABEL_57;
  v57 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v59 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v77.fields.currentCryptoKey = v59;
  *(_QWORD *)&v77.fields.fakeValue = v58;
  this = (WaveBattleWaveServantInfoItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                              v77,
                                              0LL);
  if ( !v57 )
    goto LABEL_57;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v57,
                                              (int32_t)this,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !this || !v12->fields.classCompatibilityIcon )
    goto LABEL_57;
  ServantClassCompatibilityIconComponent__SetIcon(
    v12->fields.classCompatibilityIcon,
    (int32_t)this->fields.questRestrictionInfo,
    classIds,
    0,
    0LL);
LABEL_54:
  this = *p_servantFaceIcon;
  if ( !*p_servantFaceIcon )
    goto LABEL_57;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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

  if ( (byte_4213F94 & 1) == 0 )
  {
    sub_B0D8A4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4213F94 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B0DC70(v8);
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

  if ( (byte_4213F95 & 1) == 0 )
  {
    sub_B0D8A4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4213F95 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B0DC70(v8);
  WaveBattleWaveServantInfoItem__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc___ctor(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  if ( (byte_4211F3E & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_4211F3E = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
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
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
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
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
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
            v16 = sub_AA67A0(v21, class_0, v10);
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