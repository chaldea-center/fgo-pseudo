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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E739C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E739C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__EndShowServant(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  char v5; // w1
  char v6; // w2
  __int64 v7; // x3
  char v8; // w1
  char v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E739A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, v8, v9, v10);
    byte_42E739A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  Il2CppClass *klass; // x8
  __int64 v24; // x8
  Il2CppClass *v25; // x8
  __int64 v26; // x8
  bool v27; // w20
  _QWORD *v28; // x8
  System_Reflection_MethodBase_o *v29; // x0
  Il2CppClass *v30; // x8
  __int64 v31; // x8
  int64_t v32; // x21
  CommonUI_o *v33; // x20
  ServantStatusDialog_EndDelegate_o *v34; // x22
  _QWORD *v35; // x0
  __int64 v36; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_42E739B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__, v17, v18, v19);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B5D5C4(
                                                &Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__,
                                                v20,
                                                v21,
                                                v22);
    byte_42E739B = 1;
  }
  entity = 0LL;
  klass = v4[7].klass;
  if ( !klass )
    goto LABEL_28;
  if ( !klass->_1.namespaze )
    goto LABEL_23;
  v24 = *(_QWORD *)&klass->_1.byval_arg.bits;
  if ( !v24 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_29;
  if ( *(__int64 *)(v24 + 32) > 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    v25 = v4[7].klass;
    if ( !v25 )
      goto LABEL_28;
    v26 = *(_QWORD *)&v25->_1.byval_arg.bits;
    if ( !v26 )
      goto LABEL_28;
    if ( !*(_DWORD *)(v26 + 24) )
      goto LABEL_29;
    if ( !this )
      goto LABEL_28;
    v27 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
            &entity,
            *(_QWORD *)(v26 + 32),
            (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v28 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
      v28 = (_QWORD *)sub_B5D5CC(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v29 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v28, v28[3]);
    if ( v27 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = v4[7].klass;
      if ( !v30 )
        goto LABEL_28;
      v31 = *(_QWORD *)&v30->_1.byval_arg.bits;
      if ( !v31 )
        goto LABEL_28;
      if ( *(_DWORD *)(v31 + 24) )
      {
        v32 = *(_QWORD *)(v31 + 32);
        v33 = (CommonUI_o *)this;
        v34 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v34, v4, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v33 )
        {
          CommonUI__OpenServantEquipStatusDialog(v33, 11, v32, 1, v34, 0LL, 0LL);
          return;
        }
LABEL_28:
        sub_B5D69C(this, method);
      }
LABEL_29:
      v36 = sub_B5D6C8(this);
      sub_B5D668(v36, 0LL);
    }
  }
  else
  {
LABEL_23:
    v35 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
    if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B5D5CC(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    v29 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v35, v35[3]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  Il2CppClass *klass; // x8
  Il2CppClass *v24; // x8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  Il2CppClass *v29; // x8
  System_Int64_array *v30; // x22
  UserServantEntity_o *v31; // x21
  QuestRestrictionInfo_o *monitor; // x23
  CommonUI_o *v33; // x20
  ServantStatusDialog_EndIndividualityDelegate_o *v34; // x24
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_42E7399 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_WaveBattleWaveServantInfoItem_EndShowServant__, v17, v18, v19);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B5D5C4(
                                                &Method_WaveBattleWaveServantInfoItem_OpenServantDetail__,
                                                v20,
                                                v21,
                                                v22);
    byte_42E7399 = 1;
  }
  entity = 0LL;
  klass = v4[7].klass;
  if ( !klass )
    goto LABEL_22;
  if ( klass->_1.namespaze )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
    v24 = v4[7].klass;
    if ( !v24 || !this )
      goto LABEL_22;
    if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
           &entity,
           (int64_t)v24->_1.namespaze,
           (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      this = (WaveBattleWaveServantInfoItem_o *)entity;
      if ( entity )
      {
        if ( UserServantEntity__IsWithdrawal(entity, 0LL) )
          goto LABEL_13;
        v27 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
        if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
          v27 = (_QWORD *)sub_B5D5CC(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
        v28 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v27, v27[3]);
        OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
        this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v29 = v4[7].klass;
        if ( v29 )
        {
          v30 = *(System_Int64_array **)&v29->_1.byval_arg.bits;
          v31 = entity;
          monitor = (QuestRestrictionInfo_o *)v4[7].monitor;
          v33 = (CommonUI_o *)this;
          v34 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B5D694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
          ServantStatusDialog_EndIndividualityDelegate___ctor(
            v34,
            v4,
            Method_WaveBattleWaveServantInfoItem_EndShowServant__,
            0LL);
          if ( v33 )
          {
            CommonUI__OpenServantStatusDialog_18213636(v33, 1, v31, v30, monitor, v34, 1, 0LL);
            return;
          }
        }
      }
LABEL_22:
      sub_B5D69C(this, method);
    }
  }
LABEL_13:
  v25 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
    v25 = (_QWORD *)sub_B5D5CC(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v26 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v25, v25[3]);
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
        bool isInterruption,
        bool isSelectWaveFlag,
        const MethodInfo *method)
{
  WaveBattleWaveServantInfoItem_o *v16; // x19
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_Int32_array **v56; // x0
  struct DeckServantData_o **p_servantData; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UISprite_o *numberSprite; // x25
  System_String_o *v77; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x24
  int64_t userSvtId; // x2
  UserServantCollectionMaster_o *v80; // x25
  const MethodInfo *v81; // x4
  struct System_Int64_array *v82; // x8
  int64_t v83; // x2
  char v84; // w8
  struct System_Int64_array *v85; // x9
  struct DeckServantData_o *v86; // x8
  struct System_Int64_array *v87; // x8
  int64_t v88; // x2
  bool v89; // w23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v91; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  BattleServantConfConponent_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v94; // x0
  System_Int32_array **v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct System_Int64_array *v102; // x8
  UserServantCollectionEntity_o *v103; // x21
  UserServantEntity_o *v104; // x22
  const MethodInfo *v105; // x4
  UILabel_o *maskServantLabel; // x20
  __int64 v107; // x0
  UserServantCollectionEntity_o *v108; // [xsp+8h] [xbp-68h] BYREF
  UserServantEntity_o *v109; // [xsp+10h] [xbp-60h] BYREF
  int v110; // [xsp+1Ch] [xbp-54h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF

  v16 = this;
  if ( (byte_42E7397 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, idx, (_DWORD)servantData, questRestrictionInfo);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v29, v30, v31);
    sub_B5D5C4(&long___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&string_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_19081/*"formation_select_small"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_15514/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, v50, v51, v52);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B5D5C4(&StringLiteral_20724/*"member_txt_"*/, v53, v54, v55);
    byte_42E7397 = 1;
  }
  entity = 0LL;
  v110 = 0;
  v108 = 0LL;
  v109 = 0LL;
  v16->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_83;
  v56 = (System_Int32_array **)DeckServantData__Clone(servantData, 0LL);
  v16->fields.servantData = (struct DeckServantData_o *)v56;
  p_servantData = &v16->fields.servantData;
  sub_B5D560((BattleServantConfConponent_o *)&v16->fields.servantData, v56, v58, v59, v60, v61, v62, v63);
  v16->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v16->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v16->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v16->fields.callbackFunc,
    (System_Int32_array **)callback,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
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
  v110 = idx + 1;
  v77 = System_Int32__ToString((int32_t)&v110, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_44577788(
                                              (System_String_o *)StringLiteral_20724/*"member_txt_"*/,
                                              v77,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_83;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*p_servantData )
    goto LABEL_83;
  userSvtId = (*p_servantData)->fields.userSvtId;
  v80 = (UserServantCollectionMaster_o *)this;
  if ( userSvtId < 1 )
    goto LABEL_37;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_83;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                              Master_WarQuestSelectionMaster,
                                              &entity,
                                              userSvtId,
                                              (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_37:
    if ( !isInterruption )
      goto LABEL_46;
    v86 = *p_servantData;
    if ( !*p_servantData )
      goto LABEL_83;
    if ( v86->fields.userSvtId < 1 || v86->fields.svtId < 1 )
      goto LABEL_46;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (WaveBattleWaveServantInfoItem_o *)NetworkManager__get_UserId(0LL);
    if ( !*p_servantData || !v80 )
      goto LABEL_83;
    if ( !UserServantCollectionMaster__TryGetEntity(v80, &v108, (int64_t)this, (*p_servantData)->fields.svtId, 0LL) )
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
                                                        (System_String_o *)StringLiteral_19081/*"formation_select_small"*/,
                                                        0LL);
          }
          if ( *p_servantData )
          {
            (*p_servantData)->fields.userSvtId = 0LL;
            v91 = *p_servantData;
            if ( *p_servantData )
            {
              p_userSvtEquipIds = (BattleServantConfConponent_o *)&v91->fields.userSvtEquipIds;
              userSvtEquipIds = v91->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                if ( *(_QWORD *)&userSvtEquipIds->max_length )
                  goto LABEL_63;
              }
              v94 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v94 = BalanceConfig_TypeInfo;
              }
              v95 = (System_Int32_array **)sub_B5D5DC(long___TypeInfo, (unsigned int)v94->static_fields->SvtEquipMax);
              p_userSvtEquipIds->klass = (BattleServantConfConponent_c *)v95;
              sub_B5D560(p_userSvtEquipIds, v95, v96, v97, v98, v99, v100, v101);
              v91 = *p_servantData;
              if ( *p_servantData )
              {
LABEL_63:
                v102 = v91->fields.userSvtEquipIds;
                if ( v102 )
                {
                  if ( !v102->max_length )
                    goto LABEL_84;
                  v102->m_Items[0] = 0LL;
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
      sub_B5D69C(this, *(_QWORD *)&idx);
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
    v87 = (*p_servantData)->fields.userSvtEquipIds;
    if ( !v87 )
      goto LABEL_83;
    if ( v87->max_length )
    {
      v88 = v87->m_Items[0];
      if ( v88 < 1 )
      {
        v89 = 0;
      }
      else
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_83;
        v89 = !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 Master_WarQuestSelectionMaster,
                 &v109,
                 v88,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
      }
      v103 = v108;
      v104 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21827392(v104, v103, 0LL);
      entity = v104;
      WaveBattleWaveServantInfoItem__SetServant(v16, v104, classIds, v89, v105);
      goto LABEL_74;
    }
LABEL_84:
    v107 = sub_B5D6C8(this);
    sub_B5D668(v107, 0LL);
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
  v82 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v82 )
    goto LABEL_83;
  if ( !v82->max_length )
    goto LABEL_84;
  v83 = v82->m_Items[0];
  if ( v83 < 1 )
  {
    v84 = 0;
  }
  else
  {
    this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                Master_WarQuestSelectionMaster,
                                                &v109,
                                                v83,
                                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    v84 = (unsigned __int8)this ^ 1;
    if ( ((unsigned __int8)this & 1) == 0 && !isInterruption )
    {
      if ( !*p_servantData )
        goto LABEL_83;
      v85 = (*p_servantData)->fields.userSvtEquipIds;
      if ( !v85 )
        goto LABEL_83;
      if ( v85->max_length )
      {
        v84 = 0;
        v85->m_Items[0] = 0LL;
        goto LABEL_69;
      }
      goto LABEL_84;
    }
  }
LABEL_69:
  WaveBattleWaveServantInfoItem__SetServant(v16, entity, classIds, v84 & 1, v81);
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
      this = (WaveBattleWaveServantInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15514/*"WAVE_BATTLE_DISAPPEAR_SERVANT_SMALL"*/, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveServantInfoItem__SetServant(
        WaveBattleWaveServantInfoItem_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int32_array *classIds,
        bool isSetEquip,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  IconLabelInfo_o *v45; // x23
  int64_t LevelMax; // x0
  __int64 v47; // x1
  int32_t lv; // w24
  struct DeckServantData_o *servantData; // x8
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  struct DeckServantData_o *v51; // x8
  struct System_Int32_array *svtEquipIds; // x8
  UserServantCollectionEntity_o *v53; // x23
  UserServantEntity_o *v54; // x22
  UISprite_o *maskEquipSprite; // x22
  UILabel_o *maskEquipLabel; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v58; // x22
  __int64 v59; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v60; // x21
  __int64 v61; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_42E7398 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)userServantEntity, (_DWORD)classIds, isSetEquip);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_15512/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_19737/*"img_frames_mask14"*/, v42, v43, v44);
    byte_42E7398 = 1;
  }
  entity = 0LL;
  v45 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v45, 0LL);
  if ( !userServantEntity )
    goto LABEL_37;
  lv = userServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v45 )
    goto LABEL_37;
  IconLabelInfo__Set_28463004(v45, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
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
    v45,
    0LL,
    0LL);
  if ( isSetEquip )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    LevelMax = NetworkManager__get_UserId(0LL);
    v51 = this->fields.servantData;
    if ( !v51 )
      goto LABEL_37;
    svtEquipIds = v51->fields.svtEquipIds;
    if ( !svtEquipIds )
      goto LABEL_37;
    if ( !svtEquipIds->max_length )
    {
      v61 = sub_B5D6C8(LevelMax);
      sub_B5D668(v61, 0LL);
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
      v53 = entity;
      v54 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21827392(v54, v53, 0LL);
      LevelMax = (int64_t)this->fields.servantFaceIcon;
      if ( LevelMax )
      {
        ServantFaceIconComponent__SetEquip((ServantFaceIconComponent_o *)LevelMax, v54, 0LL);
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
          AtlasManager__SetEventSprite(maskEquipSprite, (System_String_o *)StringLiteral_19737/*"img_frames_mask14"*/, 0LL);
          maskEquipLabel = this->fields.maskEquipLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          LevelMax = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15512/*"WAVE_BATTLE_DISAPPEAR_EQUIP"*/, 0LL);
          if ( maskEquipLabel )
          {
            UILabel__set_text(maskEquipLabel, (System_String_o *)LevelMax, 0LL);
            goto LABEL_29;
          }
        }
      }
LABEL_37:
      sub_B5D69C(LevelMax, v47);
    }
  }
LABEL_29:
  LevelMax = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !LevelMax )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)LevelMax,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v59 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v60 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v59;
  *(_QWORD *)&v63.fields.fakeValue = v58;
  LevelMax = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v63, 0LL);
  if ( !v60 )
    goto LABEL_37;
  LevelMax = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        v60,
                        LevelMax,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  __int64 v3; // x3
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleWaveServantInfoItem_o *v12; // x0
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7395 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7395 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v9->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleWaveServantInfoItem_o *)sub_B5D990(v9);
  WaveBattleWaveServantInfoItem__remove_callbackFunc(v12, v13, v14);
}


void __fastcall WaveBattleWaveServantInfoItem__remove_callbackFunc(
        WaveBattleWaveServantInfoItem_o *this,
        WaveBattleWaveServantInfoItem_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleWaveServantInfoItem_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleWaveServantInfoItem_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E7396 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7396 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleWaveServantInfoItem_CallbackFunc_c *)v9->klass != WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleWaveServantInfoItem_o *)sub_B5D990(v9);
  WaveBattleWaveServantInfoItem__Awake(v12, v13);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattleWaveServantInfoItem_CallbackFunc__BeginInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_42E6006 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, callback);
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E6006 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  WaveBattleWaveServantInfoItem_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)n, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)n, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)n, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)n,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)n,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)n, v23);
    goto LABEL_38;
  }
}