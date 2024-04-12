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


void __fastcall WaveBattleWaveServantInfoItem__EndShowEquip(
        WaveBattleWaveServantInfoItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AF980 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF980 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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

  if ( (byte_42AF97E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__);
    byte_42AF97E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WaveBattleWaveServantInfoItem_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B52A5C(v7, v8);
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
  _QWORD *monitor; // x8
  __int64 v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x8
  __int64 v8; // x8
  int64_t v9; // x21
  CommonUI_o *v10; // x20
  ServantStatusDialog_EndDelegate_o *v11; // x22
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_42AF97F & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_WaveBattleWaveServantInfoItem_EndShowEquip__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B52984(&Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
    byte_42AF97F = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    goto LABEL_18;
  if ( monitor[3] )
  {
    v4 = monitor[4];
    if ( !v4 )
      goto LABEL_18;
    if ( !*(_DWORD *)(v4 + 24) )
      goto LABEL_19;
    if ( *(__int64 *)(v4 + 32) > 0 )
    {
      v5 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B5298C(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = v2[4].monitor;
      if ( !v7 )
        goto LABEL_18;
      v8 = v7[4];
      if ( !v8 )
        goto LABEL_18;
      if ( *(_DWORD *)(v8 + 24) )
      {
        v9 = *(_QWORD *)(v8 + 32);
        v10 = (CommonUI_o *)this;
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(v11, v2, Method_WaveBattleWaveServantInfoItem_EndShowEquip__, 0LL);
        if ( v10 )
        {
          CommonUI__OpenServantEquipStatusDialog(v10, 11, v9, 1, v11, 0LL, 0LL);
          return;
        }
LABEL_18:
        sub_B52A5C(this, method);
      }
LABEL_19:
      v14 = sub_B52A88(this);
      sub_B52A28(v14, 0LL);
    }
  }
  v12 = Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__ + 75) & 2) != 0 )
    v12 = (_QWORD *)sub_B5298C(Method_WaveBattleWaveServantInfoItem_OpenEquipDetail__);
  v13 = (System_Reflection_MethodBase_o *)sub_B52968(v12, v12[3]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
}


void __fastcall WaveBattleWaveServantInfoItem__OpenServantDetail(
        WaveBattleWaveServantInfoItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  _QWORD *v4; // x8
  UserServantEntity_o *Entity; // x20
  _QWORD *v6; // x8
  System_Reflection_MethodBase_o *v7; // x0
  void *v8; // x8
  System_Int64_array *v9; // x22
  QuestRestrictionInfo_o *klass; // x23
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v12; // x24
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_42AF97D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_WaveBattleWaveServantInfoItem_EndShowServant__);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B52984(&Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
    byte_42AF97D = 1;
  }
  monitor = v2[4].monitor;
  if ( !monitor )
    goto LABEL_18;
  if ( monitor[3] )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
    v4 = v2[4].monitor;
    if ( v4 && this )
    {
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                 v4[3],
                 (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v6 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
      if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
        v6 = (_QWORD *)sub_B5298C(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
      v7 = (System_Reflection_MethodBase_o *)sub_B52968(v6, v6[3]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = v2[4].monitor;
      if ( v8 )
      {
        v9 = (System_Int64_array *)*((_QWORD *)v8 + 4);
        klass = (QuestRestrictionInfo_o *)v2[5].klass;
        v11 = (CommonUI_o *)this;
        v12 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B52A54(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
        ServantStatusDialog_EndIndividualityDelegate___ctor(
          v12,
          v2,
          Method_WaveBattleWaveServantInfoItem_EndShowServant__,
          0LL);
        if ( v11 )
        {
          CommonUI__OpenServantStatusDialog_18169700(v11, 1, Entity, v9, klass, v12, 1, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B52A5C(this, method);
  }
  v13 = Method_WaveBattleWaveServantInfoItem_OpenServantDetail__;
  if ( (*((_BYTE *)Method_WaveBattleWaveServantInfoItem_OpenServantDetail__ + 75) & 2) != 0 )
    v13 = (_QWORD *)sub_B5298C(Method_WaveBattleWaveServantInfoItem_OpenServantDetail__);
  v14 = (System_Reflection_MethodBase_o *)sub_B52968(v13, v13[3]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
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
  System_Int32_array **v13; // x0
  struct DeckServantData_o **p_servantData; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UISprite_o *numberSprite; // x24
  System_String_o *v34; // x0
  int64_t userSvtId; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v36; // x23
  struct System_Int64_array *v37; // x8
  int64_t v38; // x2
  struct System_Int64_array *v39; // x8
  IconLabelInfo_o *v40; // x21
  int32_t lv; // w23
  WaveBattleWaveServantInfoItem_o **p_servantFaceIcon; // x24
  struct DeckServantData_o *v43; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x21
  __int64 v45; // x22
  __int64 v46; // x23
  UISprite_o *servantSetSprite; // x20
  struct DeckServantData_o *v48; // x8
  struct System_Int64_array *userSvtEquipIds; // x9
  BattleServantConfConponent_o *p_userSvtEquipIds; // x20
  BalanceConfig_c *v51; // x0
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct System_Int64_array *v59; // x8
  __int64 v60; // x0
  UserServantEntity_o *v61; // [xsp+10h] [xbp-50h] BYREF
  int v62; // [xsp+1Ch] [xbp-44h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v12 = this;
  if ( (byte_42AF97C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_18986/*"formation_select_small"*/);
    this = (WaveBattleWaveServantInfoItem_o *)sub_B52984(&StringLiteral_20619/*"member_txt_"*/);
    byte_42AF97C = 1;
  }
  entity = 0LL;
  v62 = 0;
  v61 = 0LL;
  v12->fields.partyIdx = idx;
  if ( !servantData )
    goto LABEL_57;
  v13 = (System_Int32_array **)DeckServantData__Clone(servantData, 0LL);
  v12->fields.servantData = (struct DeckServantData_o *)v13;
  p_servantData = &v12->fields.servantData;
  sub_B52920((BattleServantConfConponent_o *)&v12->fields.servantData, v13, v15, v16, v17, v18, v19, v20);
  v12->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&v12->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v12->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  numberSprite = v12->fields.numberSprite;
  v62 = idx + 1;
  v34 = System_Int32__ToString((int32_t)&v62, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)System_String__Concat_44568316(
                                              (System_String_o *)StringLiteral_20619/*"member_txt_"*/,
                                              v34,
                                              0LL);
  if ( !numberSprite )
    goto LABEL_57;
  UISprite__set_spriteName(numberSprite, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !*p_servantData )
    goto LABEL_57;
  userSvtId = (*p_servantData)->fields.userSvtId;
  if ( userSvtId < 1 )
    goto LABEL_36;
  v36 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this;
  if ( !this )
    goto LABEL_57;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
          &entity,
          userSvtId,
          (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
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
                                                    (System_String_o *)StringLiteral_18986/*"formation_select_small"*/,
                                                    0LL);
        if ( *p_servantData )
        {
          (*p_servantData)->fields.userSvtId = 0LL;
          v48 = *p_servantData;
          if ( *p_servantData )
          {
            p_userSvtEquipIds = (BattleServantConfConponent_o *)&v48->fields.userSvtEquipIds;
            userSvtEquipIds = v48->fields.userSvtEquipIds;
            if ( userSvtEquipIds )
            {
              if ( *(_QWORD *)&userSvtEquipIds->max_length )
                goto LABEL_49;
            }
            v51 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v51 = BalanceConfig_TypeInfo;
            }
            v52 = (System_Int32_array **)sub_B5299C(long___TypeInfo, (unsigned int)v51->static_fields->SvtEquipMax);
            p_userSvtEquipIds->klass = (BattleServantConfConponent_c *)v52;
            sub_B52920(p_userSvtEquipIds, v52, v53, v54, v55, v56, v57, v58);
            v48 = *p_servantData;
            if ( *p_servantData )
            {
LABEL_49:
              v59 = v48->fields.userSvtEquipIds;
              if ( v59 )
              {
                if ( !v59->max_length )
                  goto LABEL_58;
                v59->m_Items[0] = 0LL;
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
    sub_B52A5C(this, *(_QWORD *)&idx);
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
  v37 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v37 )
    goto LABEL_57;
  if ( !v37->max_length )
    goto LABEL_58;
  v38 = v37->m_Items[0];
  if ( v38 < 1 )
    goto LABEL_23;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                              v36,
                                              &v61,
                                              v38,
                                              (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_23;
  if ( !*p_servantData )
    goto LABEL_57;
  v39 = (*p_servantData)->fields.userSvtEquipIds;
  if ( !v39 )
    goto LABEL_57;
  if ( !v39->max_length )
  {
LABEL_58:
    v60 = sub_B52A88(this);
    sub_B52A28(v60, 0LL);
  }
  v39->m_Items[0] = 0LL;
LABEL_23:
  v40 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v40, 0LL);
  this = (WaveBattleWaveServantInfoItem_o *)entity;
  if ( !entity )
    goto LABEL_57;
  lv = entity->fields.lv;
  this = (WaveBattleWaveServantInfoItem_o *)UserServantEntity__getLevelMax(entity, 0LL);
  if ( !v40 )
    goto LABEL_57;
  IconLabelInfo__Set_28274368(v40, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
  p_servantFaceIcon = (WaveBattleWaveServantInfoItem_o **)&v12->fields.servantFaceIcon;
  this = (WaveBattleWaveServantInfoItem_o *)v12->fields.servantFaceIcon;
  v43 = v12->fields.servantData;
  if ( !v43 )
    goto LABEL_57;
  if ( !this )
    goto LABEL_57;
  ServantFaceIconComponent__Set(
    (ServantFaceIconComponent_o *)this,
    entity,
    v43->fields.userSvtEquipIds,
    v12->fields.questRestrictionInfo,
    v40,
    0LL,
    0LL);
  this = (WaveBattleWaveServantInfoItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (WaveBattleWaveServantInfoItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !entity )
    goto LABEL_57;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v46 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v46;
  *(_QWORD *)&v64.fields.fakeValue = v45;
  this = (WaveBattleWaveServantInfoItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                              v64,
                                              0LL);
  if ( !v44 )
    goto LABEL_57;
  this = (WaveBattleWaveServantInfoItem_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v44,
                                              (int32_t)this,
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_42AF97A & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_42AF97A = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B52D50(v8);
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

  if ( (byte_42AF97B & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveServantInfoItem_CallbackFunc_TypeInfo);
    byte_42AF97B = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveServantInfoItem_o *)sub_B52D50(v8);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattleWaveServantInfoItem_CallbackFunc__BeginInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = n;
  v12 = result;
  if ( (byte_42AD784 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_42AD784 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall WaveBattleWaveServantInfoItem_CallbackFunc__EndInvoke(
        WaveBattleWaveServantInfoItem_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
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
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
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
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
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
            v17 = sub_AEB880(v22, class_0, v10, v12);
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