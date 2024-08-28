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

  if ( (byte_4A1BCCB & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A1BCCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v4);
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

  if ( (byte_4A1BCC9 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, isDecide);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B715CC(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v6);
    byte_4A1BCC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1B71828(v9, v10);
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
  if ( (byte_4A1BCCA & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    sub_1B715CC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B715CC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B715CC(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v7);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1B715CC(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__, v8);
    byte_4A1BCCA = 1;
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
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
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
            (const MethodInfo_30F8960 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v14 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v15 = v13;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B715E4(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B715B0(v14, v14[4]);
    if ( v15 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1B71818(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v21, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v20 )
        {
          CommonUI__OpenServantEquipStatusDialog(v20, 11, v19, 1, v21, 0LL, 0LL);
          return;
        }
LABEL_26:
        sub_1B71828(this, method);
      }
LABEL_27:
      sub_1B71830(this, method);
    }
  }
  else
  {
LABEL_22:
    v22 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1B715E4(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B715B0(v22, v22[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0LL);
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
  if ( (byte_4A1BCC8 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    sub_1B715CC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B715CC(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B715CC(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v7);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1B715CC(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__, v8);
    byte_4A1BCC8 = 1;
  }
  entity = 0LL;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
    v10 = v2[7].monitor;
    if ( !v10 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v10[3],
           (const MethodInfo_30F8960 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
          goto LABEL_12;
        v13 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1B715E4(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v14 = (System_Reflection_MethodBase_o *)sub_1B715B0(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = v2[7].monitor;
        if ( v15 )
        {
          v16 = (System_Int64_array *)*((_QWORD *)v15 + 5);
          v17 = entity;
          klass = (QuestRestrictionInfo_o *)v2[8].klass;
          v19 = (CommonUI_o *)this;
          v20 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B71818(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v20,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v19 )
          {
            CommonUI__OpenServantStatusDialog_30410780(v19, 1, (UserServantEntity_o *)v17, v16, klass, v20, 1, 0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1B71828(this, method);
    }
  }
LABEL_12:
  v11 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B715E4(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B715B0(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
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
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  UISprite_o *numberSprite; // x25
  System_String_o *v39; // x0
  Il2CppObject *Master_object; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v42; // x25
  const MethodInfo *v43; // x4
  struct DeckServantData_o *v44; // x22
  struct System_Int64_array *v45; // x8
  ServantStatusBattleListViewItem_o *v46; // x22
  struct System_Int64_array *v47; // t1
  __int64 v48; // x9
  int64_t v49; // x2
  char v50; // w8
  struct DeckServantData_o *v51; // x8
  struct DeckServantData_o *v52; // x22
  struct System_Int64_array *v53; // x8
  ServantStatusBattleListViewItem_o *v54; // x22
  struct System_Int64_array *v55; // t1
  __int64 v56; // x9
  int64_t v57; // x2
  bool v58; // w23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v60; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  ServantStatusBattleListViewItem_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v63; // x0
  __int64 v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Int64_array *v67; // x8
  BalanceConfig_c *v68; // x0
  __int64 v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Int64_array *v72; // x9
  BalanceConfig_c *v73; // x0
  __int64 v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Int64_array *v77; // x8
  UserServantCollectionEntity_o *v78; // x21
  UserServantEntity_o *v79; // x22
  const MethodInfo *v80; // x4
  UILabel_o *maskServantLabel; // x20
  UserServantCollectionEntity_o *v82; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *v83; // [xsp+8h] [xbp-68h] BYREF
  int v84; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_4A1BCC6 & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1B715CC(&BalanceConfig_TypeInfo, v17);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v18);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1B715CC(&DataManager_TypeInfo, v20);
    sub_1B715CC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v21);
    sub_1B715CC(&long___TypeInfo, v22);
    sub_1B715CC(&LocalizationManager_TypeInfo, v23);
    sub_1B715CC(&NetworkManager_TypeInfo, v24);
    sub_1B715CC(&string_TypeInfo, v25);
    sub_1B715CC(&UserServantEntity_TypeInfo, v26);
    sub_1B715CC(&StringLiteral_19528/*"formation_select_small"*/, v27);
    sub_1B715CC(&StringLiteral_15457/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v28);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1B715CC(&StringLiteral_21334/*"member_txt_"*/, v29);
    byte_4A1BCC6 = 1;
  }
  entity = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_89;
  v30 = DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = v30;
  p_servantData = &v16->fields.servantData;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v16->fields.servantData, (int32_t)v30, v32, v33);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&v16->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v34,
    v35);
  v16->fields.callbackFunc = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v16->fields.callbackFunc, (int32_t)callback, v36, v37);
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
  v84 = idx + 1;
  v39 = System_Int32__ToString((int32_t)&v84, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_61505504(
                                              (System_String_o *)StringLiteral_21334/*"member_txt_"*/,
                                              v39,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_89;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_89;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v42 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_33;
  if ( !Master_object )
    goto LABEL_89;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_30F8960 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_33:
    if ( !isInterruption )
      goto LABEL_43;
    v51 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_89;
    if ( v51->fields.userSvtId < 1 || v51->fields.svtId < 1 )
      goto LABEL_43;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager__get_UserId(0LL);
    if ( !*p_servantData || !v42 )
      goto LABEL_89;
    if ( !UserServantCollectionMaster__TryGetEntity(v42, &v82, (int64_t)this, (*p_servantData)->fields.svtId, 0LL) )
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
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            this = (WaveBattleWaveServantInfoItem_o *)AtlasManager__SetPartyOrganizationImage(
                                                        servantSetSprite,
                                                        (System_String_o *)StringLiteral_19528/*"formation_select_small"*/,
                                                        0LL);
          }
          v60 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (ServantStatusBattleListViewItem_o *)&v60->fields.userSvtEquipIds;
            userSvtEquipIds = v60->fields.userSvtEquipIds;
            v60->fields.userSvtId = 0LL;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_93;
            }
            v63 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v63 = BalanceConfig_TypeInfo;
            }
            v64 = sub_1B71674(long___TypeInfo, (unsigned int)v63->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (ServantStatusBattleListViewItem_c *)v64;
            sub_1B71570(p_userSvtEquipIds, v64, v65, v66);
            v60 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_93:
              v67 = v60->fields.userSvtEquipIds;
              if ( v67 )
              {
                if ( !v67->max_length )
                  goto LABEL_90;
                v67->m_Items[0] = 0LL;
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
      sub_1B71828(this, *(_QWORD *)&idx);
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
    v52 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_89;
    v55 = v52->fields.userSvtEquipIds;
    v54 = (ServantStatusBattleListViewItem_o *)&v52->fields.userSvtEquipIds;
    v53 = v55;
    if ( v55 && (v56 = *(_QWORD *)&v53->max_length) != 0 )
    {
      if ( !(_DWORD)v56 )
        goto LABEL_90;
      v57 = v53->m_Items[0];
      if ( v57 < 1 )
      {
        v58 = 0;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_89;
        v58 = !DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v83,
                 v57,
                 (const MethodInfo_30F8960 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
    }
    else
    {
      v73 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v73 = BalanceConfig_TypeInfo;
      }
      v74 = sub_1B71674(long___TypeInfo, (unsigned int)v73->static_fields->SvtEquipMax);
      v54->klass = (ServantStatusBattleListViewItem_c *)v74;
      sub_1B71570(v54, v74, v75, v76);
      if ( !*p_servantData )
        goto LABEL_89;
      v77 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v77 )
        goto LABEL_89;
      if ( !v77->max_length )
        goto LABEL_90;
      v58 = 0;
      v77->m_Items[0] = 0LL;
    }
    v78 = v82;
    v79 = (UserServantEntity_o *)sub_1B71818(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_39980432(v79, v78, 0LL);
    entity = (Il2CppObject *)v79;
    WaveBattleWaveServantInfoItem__SetServant(v16, v79, classIds, v58, v80);
    goto LABEL_80;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_89;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v44 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_89;
  v47 = v44->fields.userSvtEquipIds;
  v46 = (ServantStatusBattleListViewItem_o *)&v44->fields.userSvtEquipIds;
  v45 = v47;
  if ( !v47 || (v48 = *(_QWORD *)&v45->max_length) == 0 )
  {
    v68 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v68 = BalanceConfig_TypeInfo;
    }
    v69 = sub_1B71674(long___TypeInfo, (unsigned int)v68->static_fields->SvtEquipMax);
    v46->klass = (ServantStatusBattleListViewItem_c *)v69;
    sub_1B71570(v46, v69, v70, v71);
LABEL_65:
    if ( !*p_servantData )
      goto LABEL_89;
    v72 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v72 )
      goto LABEL_89;
    if ( v72->max_length )
    {
      v50 = 0;
      v72->m_Items[0] = 0LL;
      goto LABEL_69;
    }
LABEL_90:
    sub_1B71830(this, *(_QWORD *)&idx);
  }
  if ( !(_DWORD)v48 )
    goto LABEL_90;
  v49 = v45->m_Items[0];
  if ( v49 < 1 )
  {
    v50 = 0;
    goto LABEL_69;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v83,
                                              v49,
                                              (const MethodInfo_30F8960 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v50 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_65;
LABEL_69:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v50 & 1, v43);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15457/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
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
  int64_t LevelMax; // x0
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

  if ( (byte_4A1BCC7 & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, userServantEntity);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1B715CC(&DataManager_TypeInfo, v11);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B715CC(&IconLabelInfo_TypeInfo, v13);
    sub_1B715CC(&LocalizationManager_TypeInfo, v14);
    sub_1B715CC(&NetworkManager_TypeInfo, v15);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B715CC(&UserServantEntity_TypeInfo, v18);
    sub_1B715CC(&StringLiteral_15455/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v19);
    sub_1B715CC(&StringLiteral_20263/*"img_frames_mask14"*/, v20);
    byte_4A1BCC7 = 1;
  }
  entity = 0LL;
  v21 = (IconLabelInfo_o *)sub_1B71818(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  if ( !userServantEntity )
    goto LABEL_32;
  lv = userServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v21 )
    goto LABEL_32;
  IconLabelInfo__Set_37935228(v21, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
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
    v21,
    0LL,
    0LL);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    LevelMax = NetworkManager__get_UserId(0LL);
    v27 = this->fields.servantData;
    if ( !v27 )
      goto LABEL_32;
    svtEquipIds = v27->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_32;
    if ( !svtEquipIds->max_length )
      sub_1B71830(LevelMax, v23);
    if ( !Master_object )
      goto LABEL_32;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           LevelMax,
           svtEquipIds->m_Items[1],
           0LL) )
    {
      v29 = entity;
      v30 = (UserServantEntity_o *)sub_1B71818(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_39980432(v30, v29, 0LL);
      LevelMax = (int64_t)this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v30, 0LL);
        LevelMax = (int64_t)this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20263/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15455/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_25;
          }
        }
      }
LABEL_32:
      sub_1B71828(LevelMax, v23);
    }
  }
LABEL_25:
  LevelMax = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v35;
  *(_QWORD *)&v38.fields.fakeValue = v34;
  LevelMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v38, 0LL);
  if ( !v36 )
    goto LABEL_32;
  LevelMax = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        v36,
                        LevelMax,
                        (const MethodInfo_30F8760 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4A1BCC4 & 1) == 0 )
  {
    sub_1B715CC(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4A1BCC4 = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1B71AE8(v8);
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

  if ( (byte_4A1BCC5 & 1) == 0 )
  {
    sub_1B715CC(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4A1BCC5 = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1B71AE8(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B7168C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B71844(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B716F4(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B43AC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B4354;
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
  if ( (byte_4A1BCCC & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B715CC(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_4A1BCCC = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&n,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B71580(this, v14, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B71584(result, 0LL, method);
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