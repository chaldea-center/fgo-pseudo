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

  if ( (byte_4AFDE2F & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFDE2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
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

  if ( (byte_4AFDE2D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v6);
    byte_4AFDE2D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1BC3264(v9, v10);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _QWORD *monitor; // x8
  __int64 v11; // x8
  _QWORD *v12; // x8
  __int64 v13; // x8
  bool v14; // w0
  _QWORD *v15; // x8
  bool v16; // w20
  System_Reflection_MethodBase_o *v17; // x0
  _QWORD *v18; // x8
  __int64 v19; // x8
  int64_t v20; // x21
  CommonUI_o *v21; // x20
  ServantStatusDialog_EndDelegate_o *v22; // x22
  _QWORD *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_4AFDE2E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v8);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1BC3008(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__, v9);
    byte_4AFDE2E = 1;
  }
  entity = 0LL;
  monitor = v3[7].monitor;
  if ( !monitor )
    goto LABEL_26;
  if ( !monitor[3] )
    goto LABEL_22;
  v11 = monitor[5];
  if ( !v11 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_27;
  if ( *(__int64 *)(v11 + 32) > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
    v12 = v3[7].monitor;
    if ( !v12 )
      goto LABEL_26;
    v13 = v12[5];
    if ( !v13 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v13 + 24) )
      goto LABEL_27;
    if ( !this )
      goto LABEL_26;
    v14 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
            &entity,
            *(_QWORD *)(v13 + 32),
            (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v15 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    v16 = v14;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BC3020(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
    if ( v16 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = v3[7].monitor;
      if ( !v18 )
        goto LABEL_26;
      v19 = v18[5];
      if ( !v19 )
        goto LABEL_26;
      if ( *(_DWORD *)(v19 + 24) )
      {
        v20 = *(_QWORD *)(v19 + 32);
        v21 = (CommonUI_o *)this;
        v22 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v22, v3, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v21 )
        {
          CommonUI__OpenServantEquipStatusDialog(v21, 11, v20, 1, v22, 0LL, 0LL);
          return;
        }
LABEL_26:
        sub_1BC3264(this, method);
      }
LABEL_27:
      sub_1BC326C(this, method, v2);
    }
  }
  else
  {
LABEL_22:
    v23 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1BC3020(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v23, v23[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0LL);
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
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4AFDE2C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1BC3008(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v7);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1BC3008(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__, v8);
    byte_4AFDE2C = 1;
  }
  entity = 0LL;
  monitor = v2[7].monitor;
  if ( !monitor )
    goto LABEL_20;
  if ( monitor[3] )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
    v10 = v2[7].monitor;
    if ( !v10 || !this )
      goto LABEL_20;
    if ( DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           v10[3],
           (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)entity, 0LL) )
          goto LABEL_12;
        v13 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BC3020(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = v2[7].monitor;
        if ( v15 )
        {
          v16 = (System_Int64_array *)*((_QWORD *)v15 + 5);
          v17 = entity;
          klass = (QuestRestrictionInfo_o *)v2[8].klass;
          v19 = (CommonUI_o *)this;
          v20 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BC3254(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v20,
            v2,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v19 )
          {
            CommonUI__OpenServantStatusDialog_30742116(
              v19,
              1,
              (UserServantEntity_o *)v17,
              v16,
              klass,
              v20,
              1,
              0LL,
              0,
              0,
              0LL);
            return;
          }
        }
      }
LABEL_20:
      sub_1BC3264(this, method);
    }
  }
LABEL_12:
  v11 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BC3020(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v11, v11[4]);
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
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UISprite_o *numberSprite; // x25
  System_String_o *v39; // x0
  Il2CppObject *Master_object; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v42; // x25
  __int64 v43; // x2
  const MethodInfo *v44; // x4
  struct DeckServantData_o *v45; // x22
  struct System_Int64_array *v46; // x8
  CGThumbnailListItem_o *v47; // x22
  struct System_Int64_array *v48; // t1
  __int64 v49; // x9
  int64_t v50; // x2
  char v51; // w8
  struct DeckServantData_o *v52; // x8
  struct DeckServantData_o *v53; // x22
  struct System_Int64_array *v54; // x8
  CGThumbnailListItem_o *v55; // x22
  struct System_Int64_array *v56; // t1
  __int64 v57; // x9
  int64_t v58; // x2
  bool v59; // w23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v61; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  CGThumbnailListItem_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v64; // x0
  __int64 v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Int64_array *v68; // x8
  BalanceConfig_c *v69; // x0
  __int64 v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Int64_array *v73; // x9
  BalanceConfig_c *v74; // x0
  __int64 v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Int64_array *v78; // x8
  UserServantCollectionEntity_o *v79; // x21
  UserServantEntity_o *v80; // x22
  const MethodInfo *v81; // x4
  UILabel_o *maskServantLabel; // x20
  UserServantCollectionEntity_o *v83; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *v84; // [xsp+8h] [xbp-68h] BYREF
  int v85; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  if ( (byte_4AFDE2A & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&idx);
    sub_1BC3008(&BalanceConfig_TypeInfo, v17);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v19);
    sub_1BC3008(&DataManager_TypeInfo, v20);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v21);
    sub_1BC3008(&long___TypeInfo, v22);
    sub_1BC3008(&LocalizationManager_TypeInfo, v23);
    sub_1BC3008(&NetworkManager_TypeInfo, v24);
    sub_1BC3008(&string_TypeInfo, v25);
    sub_1BC3008(&UserServantEntity_TypeInfo, v26);
    sub_1BC3008(&StringLiteral_19429/*"formation_select_small"*/, v27);
    sub_1BC3008(&StringLiteral_15360/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v28);
    this = (WaveBattleWaveServantInfoItem_o *)sub_1BC3008(&StringLiteral_21320/*"member_txt_"*/, v29);
    byte_4AFDE2A = 1;
  }
  entity = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_93;
  v30 = DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = v30;
  p_servantData = &v16->fields.servantData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.servantData, (int32_t)v30, v32, v33);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v34, v35);
  v16->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->fields.callbackFunc, (int32_t)callback, v36, v37);
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
  v85 = idx + 1;
  v39 = System_Int32__ToString((int32_t)&v85, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_62348648(
                                              (System_String_o *)StringLiteral_21320/*"member_txt_"*/,
                                              v39,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_93;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_93;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v42 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_37;
  if ( !Master_object )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_37:
    if ( !isInterruption )
      goto LABEL_47;
    v52 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_93;
    if ( v52->fields.userSvtId < 1 || v52->fields.svtId < 1 )
      goto LABEL_47;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&idx);
      byte_4AFC1F1 = 1;
    }
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WaveBattleWaveServantInfoItem_o *)NetworkManager_TypeInfo;
    }
    if ( !*p_servantData || !v42 )
      goto LABEL_93;
    if ( !UserServantCollectionMaster__TryGetEntity(
            v42,
            &v83,
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
                                                        (System_String_o *)StringLiteral_19429/*"formation_select_small"*/,
                                                        0LL);
          }
          v61 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (CGThumbnailListItem_o *)&v61->fields.userSvtEquipIds;
            userSvtEquipIds = v61->fields.userSvtEquipIds;
            v61->fields.userSvtId = 0LL;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_97;
            }
            v64 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v64 = BalanceConfig_TypeInfo;
            }
            v65 = sub_1BC30B0(long___TypeInfo, (unsigned int)v64->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (CGThumbnailListItem_c *)v65;
            sub_1BC2FAC(p_userSvtEquipIds, v65, v66, v67);
            v61 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_97:
              v68 = v61->fields.userSvtEquipIds;
              if ( v68 )
              {
                if ( !v68->max_length )
                  goto LABEL_94;
                v68->m_Items[0] = 0LL;
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
      sub_1BC3264(this, *(_QWORD *)&idx);
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
    v53 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_93;
    v56 = v53->fields.userSvtEquipIds;
    v55 = (CGThumbnailListItem_o *)&v53->fields.userSvtEquipIds;
    v54 = v56;
    if ( v56 && (v57 = *(_QWORD *)&v54->max_length) != 0 )
    {
      if ( !(_DWORD)v57 )
        goto LABEL_94;
      v58 = v54->m_Items[0];
      if ( v58 < 1 )
      {
        v59 = 0;
      }
      else
      {
        if ( !Master_object )
          goto LABEL_93;
        v59 = !DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v84,
                 v58,
                 (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
    }
    else
    {
      v74 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v74 = BalanceConfig_TypeInfo;
      }
      v75 = sub_1BC30B0(long___TypeInfo, (unsigned int)v74->static_fields->SvtEquipMax);
      v55->klass = (CGThumbnailListItem_c *)v75;
      sub_1BC2FAC(v55, v75, v76, v77);
      if ( !*p_servantData )
        goto LABEL_93;
      v78 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v78 )
        goto LABEL_93;
      if ( !v78->max_length )
        goto LABEL_94;
      v59 = 0;
      v78->m_Items[0] = 0LL;
    }
    v79 = v83;
    v80 = (UserServantEntity_o *)sub_1BC3254(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_42132492(v80, v79, 0LL);
    entity = (Il2CppObject *)v80;
    WaveBattleWaveServantInfoItem__SetServant(v16, v80, classIds, v59, v81);
    goto LABEL_84;
  }
  this = (WaveBattleWaveServantInfoItem_o *)v16->fields.servantSetSprite;
  if ( !this )
    goto LABEL_93;
  this = (WaveBattleWaveServantInfoItem_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v45 = *p_servantData;
  if ( !*p_servantData )
    goto LABEL_93;
  v48 = v45->fields.userSvtEquipIds;
  v47 = (CGThumbnailListItem_o *)&v45->fields.userSvtEquipIds;
  v46 = v48;
  if ( !v48 || (v49 = *(_QWORD *)&v46->max_length) == 0 )
  {
    v69 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v69 = BalanceConfig_TypeInfo;
    }
    v70 = sub_1BC30B0(long___TypeInfo, (unsigned int)v69->static_fields->SvtEquipMax);
    v47->klass = (CGThumbnailListItem_c *)v70;
    sub_1BC2FAC(v47, v70, v71, v72);
LABEL_69:
    if ( !*p_servantData )
      goto LABEL_93;
    v73 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v73 )
      goto LABEL_93;
    if ( v73->max_length )
    {
      v51 = 0;
      v73->m_Items[0] = 0LL;
      goto LABEL_73;
    }
LABEL_94:
    sub_1BC326C(this, *(_QWORD *)&idx, v43);
  }
  if ( !(_DWORD)v49 )
    goto LABEL_94;
  v50 = v46->m_Items[0];
  if ( v50 < 1 )
  {
    v51 = 0;
    goto LABEL_73;
  }
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_object__object__long___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                              &v84,
                                              v50,
                                              (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  v51 = (unsigned __int8)this ^ 1;
  if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    goto LABEL_69;
LABEL_73:
  WaveBattleWaveServantInfoItem__SetServant(v16, (UserServantEntity_o *)entity, classIds, v51 & 1, v44);
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
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15360/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
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
  __int64 v26; // x2
  Il2CppObject *Master_object; // x22
  struct DeckServantData_o *v28; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v30; // x23
  UserServantEntity_o *v31; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v35; // x22
  __int64 v36; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  UserServantCollectionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4AFDE2B & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, userServantEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BC3008(&UserServantEntity_TypeInfo, v18);
    sub_1BC3008(&StringLiteral_15358/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v19);
    sub_1BC3008(&StringLiteral_20204/*"img_frames_mask14"*/, v20);
    byte_4AFDE2B = 1;
  }
  entity = 0LL;
  v21 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0LL);
  if ( !userServantEntity )
    goto LABEL_36;
  lv = userServantEntity->fields.lv;
  LevelMax = (void *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v21 )
    goto LABEL_36;
  IconLabelInfo__Set_39947860(v21, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0LL);
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
    0,
    0,
    0,
    0LL);
  if ( isSetEquip )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v23);
      byte_4AFC1F1 = 1;
    }
    LevelMax = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      LevelMax = NetworkManager_TypeInfo;
    }
    v28 = this->fields.servantData;
    if ( !v28 )
      goto LABEL_36;
    svtEquipIds = v28->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_36;
    if ( !svtEquipIds->max_length )
      sub_1BC326C(LevelMax, v23, v26);
    if ( !Master_object )
      goto LABEL_36;
    if ( UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           *(_QWORD *)(*((_QWORD *)LevelMax + 23) + 64LL),
           svtEquipIds->m_Items[1],
           0LL) )
    {
      v30 = entity;
      v31 = (UserServantEntity_o *)sub_1BC3254(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_42132492(v31, v30, 0LL);
      LevelMax = this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v31, 0LL);
        LevelMax = this->fields.maskEquipObj;
        if ( LevelMax )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)LevelMax, 1, 0LL);
          maskEquipSprite = this->fields.maskEquipSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_20204/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_15358/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_29;
          }
        }
      }
LABEL_36:
      sub_1BC3264(LevelMax, v23);
    }
  }
LABEL_29:
  LevelMax = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)LevelMax,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v35 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v36;
  *(_QWORD *)&v39.fields.fakeValue = v35;
  LevelMax = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v39, 0LL);
  if ( !v37 )
    goto LABEL_36;
  LevelMax = DataMasterBase_object__object__int___GetEntity(
               v37,
               (int32_t)LevelMax,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4AFDE28 & 1) == 0 )
  {
    sub_1BC3008(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4AFDE28 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1BC3524(v8);
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

  if ( (byte_4AFDE29 & 1) == 0 )
  {
    sub_1BC3008(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, value);
    byte_4AFDE29 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_1BC3524(v8);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A08584;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0852C;
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
  if ( (byte_4AFDE30 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9);
    byte_4AFDE30 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&n,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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