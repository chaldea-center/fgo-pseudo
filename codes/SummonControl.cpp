void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct SummonControl_StaticFields *static_fields; // x0
  int64_t v8; // x1

  if ( (byte_4BD8C2F & 1) == 0 )
  {
    sub_1C21E38(&SummonControl_TypeInfo);
    sub_1C21E38(&StringLiteral_3370/*"BonusSelectSummonSaveKey"*/);
    byte_4BD8C2F = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v8 = StringLiteral_3370/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3370/*"BonusSelectSummonSaveKey"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v8, v1, v2, v3, v4, v5, v6);
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
}


void __fastcall SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BD8C2E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GachaSubEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_1C21E38(&StringLiteral_20038/*"gachaIds"*/);
    sub_1C21E38(&StringLiteral_7014/*"FrequencyType"*/);
    byte_4BD8C2E = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFF1E0;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFF590;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BFF320;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v9 = StringLiteral_20038/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_20038/*"gachaIds"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.DETAIL_SCRIPT_IDS, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_7014/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_7014/*"FrequencyType"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.DETAIL_SCRIPT_TYPE, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.vaildGachaList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaSubEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v31;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.gachaSubEntityList,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  int64_t v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_String_o *name; // x1
  int8x16_t v17; // q0
  System_String_o *WebViewAddress_39819560; // x0
  System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int32_t gachaGroupId; // w8
  int32_t gachaListGroupId; // w8
  int32_t maxDrawNum; // w8
  int64_t v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x22
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v46; // x8
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8

  if ( (byte_4BD8BBC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaSubEntity__Add__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&VaildGachaInfo_TypeInfo);
    byte_4BD8BBC = 1;
  }
  v7 = sub_1C22084(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v7, 0LL);
  if ( !data || !v7 )
    goto LABEL_25;
  *(_DWORD *)(v7 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v7 + 24) = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)name, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = data->fields.beforeGachaId;
  v17 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCuLL));
  *(int8x16_t *)(v7 + 36) = vextq_s8(v17, v17, 0xCuLL);
  *(_DWORD *)(v7 + 52) = data->fields.type;
  *(_DWORD *)(v7 + 60) = data->fields.ticketItemId;
  *(_BYTE *)(v7 + 64) = 1;
  *(_BYTE *)(v7 + 84) = data->fields.freeDrawFlag > 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_39819560 = NetworkManager__getWebViewAddress_39819560(1, 0LL);
  v19 = System_String__Concat_63115476(WebViewAddress_39819560, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v7 + 88) = v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 88), (int64_t)v19, v20, v21, v22, v23, v24, v25);
  gachaGroupId = data->fields.gachaGroupId;
  *(_DWORD *)(v7 + 96) = gachaGroupId;
  *(_BYTE *)(v7 + 100) = gachaGroupId > 0;
  *(_BYTE *)(v7 + 101) = data->fields.pickupId > 0;
  gachaListGroupId = data->fields.gachaListGroupId;
  *(_DWORD *)(v7 + 104) = gachaListGroupId;
  *(_BYTE *)(v7 + 108) = gachaListGroupId > 0;
  maxDrawNum = data->fields.maxDrawNum;
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 68) = 0;
  *(_DWORD *)(v7 + 112) = maxDrawNum;
  v29 = sub_1C21EE0(int___TypeInfo, 0LL);
  *(_QWORD *)(v7 + 72) = v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 72), v29, v30, v31, v32, v33, v34, v35);
  *(_OWORD *)(v7 + 128) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v7 + 144) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v42 = (int64_t)Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_25;
      v43 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v44 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v43 )
        goto LABEL_25;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v43 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v42,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = v43 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v46 + 32) = v42;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v46 + 32), v42, v36, v37, v38, v39, v40, v41);
      }
      *(_DWORD *)(v7 + 80) = *(_DWORD *)(v42 + 20);
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(v42 + 28);
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_25;
    *(_DWORD *)(v7 + 40) = targetEntity->fields.imageId;
    *(_DWORD *)(v7 + 68) = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_QWORD *)(v7 + 72) = adjustIds;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 72), (int64_t)adjustIds, v36, v37, v38, v39, v40, v41);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v49 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v50 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v49) )
  {
LABEL_25:
    sub_1C22094(Instance, v9);
  }
  v51 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v7,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * v51;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v51 + 1;
    *(_QWORD *)(v52 + 32) = v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 32), v7, v36, v37, v38, v39, v40, v41);
  }
}


void __fastcall SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  SummonInfoDlgComponent_CallbackFunc_o *v9; // x23

  if ( (byte_4BD8BF6 & 1) == 0 )
  {
    sub_1C21E38(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_4BD8BF6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0LL)) == 0LL
    || (v6 = (System_String_o *)*((_QWORD *)Instance + 3),
        v7 = (System_String_o *)*((_QWORD *)Instance + 4),
        infoDlgInfo = this->fields.infoDlgInfo,
        v9 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C22084(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1C22094(Instance, v4);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v6, v7, v9, 0LL);
}


void __fastcall SummonControl__BonusSelectBuyChargeStoneCheck(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonControl_o *v3; // x19
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9

  v3 = this;
  if ( (byte_4BD8C28 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_3099/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_4BD8C28 = 1;
  }
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_9;
  v3->fields.haveStone = summonInfoCtr->fields.haveStoneNum;
  v3->fields.haveFreeStone = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  gachaParamData = v3->fields.gachaParamData;
  v3->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  if ( !gachaParamData )
    goto LABEL_9;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  v3->fields.needStone = gachaResourceNum;
  if ( HaveChargeStoneNum_k__BackingField < gachaResourceNum )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3099/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
  SummonControl__BonusSelectSummonConfirmResult(v3, 1, v2);
}


void __fastcall SummonControl__BonusSelectBuyNotHaveChargeStone(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectNotHaveChargeStoneDialog(this, 1, v2);
}


void __fastcall SummonControl__BonusSelectCheckChargeStone(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9
  __int64 *v7; // x8

  v2 = this;
  if ( (byte_4BD8C27 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3513/*"CHECK_STONE"*/);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_3099/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_4BD8C27 = 1;
  }
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  v2->fields.haveStone = summonInfoCtr->fields.haveStoneNum;
  v2->fields.haveFreeStone = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  gachaParamData = v2->fields.gachaParamData;
  v2->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  if ( !gachaParamData
    || (gachaResourceNum = gachaParamData->fields.gachaResourceNum,
        this = (SummonControl_o *)v2->fields.fsm,
        v2->fields.needStone = gachaResourceNum,
        !this) )
  {
LABEL_10:
    sub_1C22094(this, method);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v7 = &StringLiteral_3513/*"CHECK_STONE"*/;
  else
    v7 = &StringLiteral_3099/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectCloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BD8C2D & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_1C21E38(&StringLiteral_7112/*"GO_BUY_STONE"*/);
    byte_4BD8C2D = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v6 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_7112/*"GO_BUY_STONE"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1C22094(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  SummonControl__BonusSelectServantSelectDialog(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectNotHaveChargeStoneDialog(
        SummonControl_o *this,
        bool res,
        const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v8; // x23
  const MethodInfo *v9; // x3
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v11; // x5

  if ( (byte_4BD8C2B & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SummonControl_GoBuyStone__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8C2B = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_GoBuyStone__,
      v9);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        confirmDlgInfo,
        res,
        haveChargeStone,
        haveFreeStone,
        v8,
        v11);
      return;
    }
LABEL_8:
    sub_1C22094(fsm, res);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall SummonControl__BonusSelectServantSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o *v14; // x21

  if ( (byte_4BD8C29 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BonusSelectSummonAssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__BonusSelectServantSelectDialog_b__303_0__);
    byte_4BD8C29 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v7 = (BonusSelectSummonAssetManager_o *)sub_1C22084(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v7, 0LL);
        this->fields.bonusSelectAssetManager = v7;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.bonusSelectAssetManager,
          (int64_t)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__303_0__,
        0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v14, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C22094(Master_object, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectSummonConfirmResult(
        SummonControl_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v4; // w20
  SummonControl_o *v5; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v4 = result;
  v5 = this;
  if ( (byte_4BD8BEB & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BEB = 1;
  }
  selectBonusData = 0LL;
  if ( v4 )
  {
    gachaParamData = v5->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_14;
    this = (SummonControl_o *)SummonControl__TryGetSelectBonusDataInfo(
                                v5,
                                &selectBonusData,
                                gachaParamData->fields.gachaId,
                                v3);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_10;
    if ( !selectBonusData )
      goto LABEL_14;
    *(_QWORD *)&result = selectBonusData->fields.selectBonusDatas;
    if ( !result )
    {
LABEL_10:
      SummonControl__showConfirmDlg_34164004(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        result,
        (int64_t)v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      goto LABEL_10;
    }
LABEL_14:
    sub_1C22094(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v6; // x8

  if ( (byte_4BD8C2A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3100/*"BONUS_SELECT_SERVANT_SELECT"*/);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8C2A = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C22094(confirmDlgInfo, res);
  }
  v6 = (System_String_o **)&StringLiteral_3100/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v6 = (System_String_o **)&StringLiteral_3583/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, *v6, 0LL);
}


bool __fastcall SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  System_Collections_Generic_List_object__o *gachaSubEntityList; // x21
  Il2CppObject *v8; // x20
  System_Predicate_object__o *v9; // x22
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  System_Action_o *v14; // x25

  if ( (byte_4BD8BEE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaSubEntity__Find__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Predicate_GachaSubEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_SummonSceneRefresh__);
    sub_1C21E38(&Method_SummonControl__CheckFriendPointSummonUpdate_b__221_0__);
    sub_1C21E38(&StringLiteral_15073/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/);
    sub_1C21E38(&StringLiteral_15072/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/);
    byte_4BD8BEE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v8 = (Il2CppObject *)OpenEntity;
  v9 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_GachaSubEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)this,
    Method_SummonControl__CheckFriendPointSummonUpdate_b__221_0__,
    0LL);
  if ( !gachaSubEntityList )
    goto LABEL_13;
  v10 = System_Collections_Generic_List_object___Find(
          gachaSubEntityList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v8 != v10 )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_15073/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15072/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
    v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
    if ( v11 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v11, v12, v13, v14, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return v8 != v10;
    }
LABEL_13:
    sub_1C22094(Instance, v4);
  }
  return v8 != v10;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1C22094(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1C2209C(this, ids);
      this = (SummonControl_o *)SummonControl__getUserGachaData(this, ids->m_Items[v6 + 1], method);
      if ( this && SHIDWORD(this->fields.m_CancellationTokenSource) > 0 )
        break;
      LODWORD(v3) = ids->max_length;
      v5 = (__int64)++v6 < (int)v3;
    }
    while ( (__int64)v6 < (int)v3 );
  }
  return v5;
}


void __fastcall SummonControl__CheckIncIdx(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x9
  int v4; // w8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4BD8C0D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9433/*"NEXT_SVT"*/);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_6552/*"FINAL_SVT"*/);
    byte_4BD8C0D = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v4 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v4;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_1C22094(this, method);
  if ( v4 >= (signed int)gachaResInfoList->max_length )
    v5 = &StringLiteral_6552/*"FINAL_SVT"*/;
  else
    v5 = &StringLiteral_9433/*"NEXT_SVT"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


bool __fastcall SummonControl__CheckLastDrawGachaId(SummonControl_o *this, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  gachaParamData = this->fields.gachaParamData;
  return gachaParamData && gachaParamData->fields.gachaId == this->fields.lastMaxDrawGachaId;
}


bool __fastcall SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  UserGameEntity_o *v5; // x20
  BalanceConfig_c *v6; // x8
  int v7; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int32_t QpMax; // w9
  struct BalanceConfig_StaticFields *v12; // x10
  int32_t v13; // w23
  int32_t qp; // w21
  struct BalanceConfig_StaticFields *v15; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v19; // x21
  System_Action_o *v20; // x22
  SummonLimitWarningDlgComponent_o *v21; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v22; // x21
  System_Action_o *v23; // x22
  SummonLimitWarningDlgComponent_o *v24; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v25; // x21
  System_Action_o *v26; // x22

  if ( (byte_4BD8BEF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SummonControl_autoSellSettingChange__);
    sub_1C21E38(&Method_SummonControl_limitManaConfirmResult__);
    sub_1C21E38(&Method_SummonControl_limitQpConfirmResult__);
    sub_1C21E38(&Method_SummonControl_showConfirmDlg__);
    byte_4BD8BEF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  v5 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v6 = BalanceConfig_TypeInfo;
  v7 = (int)SelfUserGame;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  static_fields = v6->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
      v12 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v12->QpMax;
      FriendPointSummonQpWarning = v12->FriendPointSummonQpWarning;
    }
    v13 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v7 )
      return 0;
  }
  else
  {
    v13 = QpMax + gachaParamData->fields.gachaResourceNum / -200 * FriendPointSummonQpWarning;
    if ( !v7 )
      return 0;
  }
  qp = v5->fields.qp;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = BalanceConfig_TypeInfo;
  }
  v15 = v6->static_fields;
  if ( qp >= v15->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v19 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C22084(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v19, v20, 0LL);
  }
  else
  {
    if ( v5->fields.qp < v13 )
    {
      mana = v5->fields.mana;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v15 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v15->UserItemMax )
        return 0;
      v24 = this->fields.limitWarningDlgInfo;
      v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C22084(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v24 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v24, v25, v26, 0LL);
        return 1;
      }
LABEL_28:
      sub_1C22094(SelfUserGame, v4);
    }
    v21 = this->fields.limitWarningDlgInfo;
    v22 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C22084(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v23 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v21 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v21, v22, v23, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4BD8C26 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11328/*"RETURN_MAIN"*/);
    sub_1C21E38(&StringLiteral_11330/*"RETURN_RESULT"*/);
    byte_4BD8C26 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  if ( this->fields.isResult )
    v4 = (System_String_o **)&StringLiteral_11330/*"RETURN_RESULT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11328/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, *v4, 0LL);
}


void __fastcall SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_c *v2; // x0
  Il2CppObject *String_70827888; // x19
  System_Object_array *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD8BEA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&SummonControl_TypeInfo);
    byte_4BD8BEA = 1;
  }
  v2 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v2 = SummonControl_TypeInfo;
  }
  String_70827888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70827888(
                                      v2->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_70827888, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__DeserializeArray_object_(
           String_70827888,
           (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v4 )
      sub_1C22094(v6, v7);
  }
}


bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BD8BB9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8BB9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v7);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CheckValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_GachaSubEntity__o *gachaSubEntityList; // x8
  int32_t v7; // w2
  int v8; // w9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v13; // x3
  StoryGachaAdjustData_o *v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  System_Comparison_T__o *v16; // x21
  StoryGachaAdjustData_o *v17; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4BD8BB8 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    this = (SummonControl_o *)sub_1C21E38(&Method_SummonControl_SlotCompare__);
    byte_4BD8BB8 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0LL;
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_21;
  size = vaildGachaList->fields._size;
  v5 = vaildGachaList->fields._version + 1;
  vaildGachaList->fields._size = 0;
  vaildGachaList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  gachaSubEntityList = v2->fields.gachaSubEntityList;
  if ( !gachaSubEntityList )
    goto LABEL_21;
  v7 = gachaSubEntityList->fields._size;
  v8 = gachaSubEntityList->fields._version + 1;
  gachaSubEntityList->fields._size = 0;
  gachaSubEntityList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v7, 0LL);
  this = (SummonControl_o *)v2->fields.gachaMst;
  if ( !this )
    goto LABEL_21;
  this = (SummonControl_o *)GachaMaster__GetValidGachaEntityList((GachaMaster_o *)this, 0LL);
  if ( !this )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C22094(v9, v10);
    if ( SummonControl__CheckStoryGachaAdjustData(
           (SummonControl_o *)v9,
           &v17,
           (int32_t)v18.fields._current[1].klass,
           v11) )
    {
      v14 = v17;
    }
    else
    {
      v14 = 0LL;
      v17 = 0LL;
    }
    SummonControl__AddVaildGachaInfoList(v2, (GachaEntity_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
  v15 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v16 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v16, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0LL);
  if ( !v15 )
LABEL_21:
    sub_1C22094(this, method);
  System_Collections_Generic_List_object___Sort_56953720(
    v15,
    v16,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD8BE6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8BE6 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  if ( isStoneFragmentsBulkDialog )
    CommonUI__CloseFragmentsBulkExchangeDialog((CommonUI_o *)Instance, 0LL);
  else
    CommonUI__CloseFragmentsExchangeDialog((CommonUI_o *)Instance, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BD8BC4 & 1) == 0 )
  {
    sub_1C21E38(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_TypeInfo);
    byte_4BD8BC4 = 1;
  }
  v3 = sub_1C22084(SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__176___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct GachaRqParamData_o *v8; // x8
  Il2CppObject *Entity; // x21
  struct GachaRqParamData_o *v10; // x8
  System_String_o *basePanel; // x20
  SummonConfirmDlgComponent_o *v12; // x22
  int v13; // w23
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  float v19; // s8
  int32_t fontSize; // w27
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v22; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v25; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v26; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v27; // x24
  bool isCustomLayOut; // w28
  struct GachaRqParamData_o *v29; // x8
  SummonCautionDlgComponent_o *cautionDlgInfo; // x23
  System_String_o *m_CancellationTokenSource; // x22
  int klass; // w29
  int64_t v33; // x21
  char v34; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v35; // x24
  const MethodInfo *v36; // x3
  struct GachaRqParamData_o *v37; // x8
  int32_t v38; // w25
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v39; // x26
  const MethodInfo *v40; // [xsp+18h] [xbp-78h]
  int v41; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BD8BF3 & 1) == 0 )
  {
    sub_1C21E38(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C21E38(&Method_SummonControl_ConfirmMessageOpen__);
    sub_1C21E38(&Method_SummonControl_SetDispBtn__);
    sub_1C21E38(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C21E38(&Method_SummonControl_confirmCautionResult__);
    sub_1C21E38(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C21E38(&StringLiteral_23740/*"showGroupRemainingDrawNum"*/);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BF3 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method);
  v6 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SummonControl_ConfirmMessageOpen__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( confirmDlgInfo )
        {
          if ( GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL) )
          {
            confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.bonusSelectSummonConfirmDialog;
            if ( confirmDlgInfo )
            {
              BonusSelectSummonConfirmDialog__Init(
                (BonusSelectSummonConfirmDialog_o *)confirmDlgInfo,
                this->fields.bonusSelectAssetManager,
                0LL);
              v22 = this->fields.gachaParamData;
              if ( v22 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v22->fields.gachaId;
                v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v25,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v26 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v27 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v27,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v25, v26, v27, 0LL, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
            if ( confirmDlgInfo )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_43;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  v8 = this->fields.gachaParamData;
  if ( !v8 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v8->fields.gachaId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  v10 = this->fields.gachaParamData;
  if ( !v10 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailMaster__GetGachaDetailEntity(
                                                    (GachaDetailMaster_o *)confirmDlgInfo,
                                                    v10->fields.gachaId,
                                                    0LL);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  basePanel = (System_String_o *)confirmDlgInfo->fields.basePanel;
  v12 = confirmDlgInfo;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailEntity__GetScriptInt(
                                                    (GachaDetailEntity_o *)confirmDlgInfo,
                                                    (System_String_o *)StringLiteral_23740/*"showGroupRemainingDrawNum"*/,
                                                    -1,
                                                    0LL);
  v13 = (int)confirmDlgInfo;
  if ( (int)confirmDlgInfo < 1 )
  {
    fontSize = 0;
    v19 = 0.0;
  }
  else
  {
    if ( !Entity )
      goto LABEL_43;
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.gachaMst;
    if ( !confirmDlgInfo )
      goto LABEL_43;
    v14 = (System_String_o *)v12->fields.basePanel;
    v41 = GachaMaster__GetGroupRemainingDrawNum((GachaMaster_o *)confirmDlgInfo, (int32_t)Entity[9].klass, 0LL)
        / SLODWORD(Entity[4].klass);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v15, v16, v17);
    basePanel = System_String__Format(v14, v18, 0LL);
    v19 = 26.0;
    fontSize = 22;
  }
  isCustomLayOut = v13 > 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  v29 = this->fields.gachaParamData;
  if ( !v29 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v29->fields.gachaId,
                                                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL);
  if ( !Entity )
    goto LABEL_43;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  m_CancellationTokenSource = (System_String_o *)v12->fields.m_CancellationTokenSource;
  klass = (int)Entity[9].klass;
  v33 = (int64_t)Entity[7].klass;
  v34 = (char)confirmDlgInfo;
  v35 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1C22084(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v35,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    v36);
  if ( (v34 & 1) != 0 )
  {
    v37 = this->fields.gachaParamData;
    if ( !v37 )
      goto LABEL_43;
    v38 = v37->fields.gachaId;
  }
  else
  {
    v38 = 0;
  }
  v39 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v39,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_1C22094(confirmDlgInfo, result);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    m_CancellationTokenSource,
    basePanel,
    klass > 0,
    v33,
    v35,
    v38,
    v39,
    this->fields.bonusSelectAssetManager,
    isCustomLayOut,
    v19,
    fontSize,
    v40);
}


void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BD8C07 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__DialogCallBack_b__255_0__);
    byte_4BD8C07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__255_0__, 0LL);
  if ( !v6 )
    sub_1C22094(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8C08 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    byte_4BD8C08 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3632/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BD8BE5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BD8BE5 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    SummonControl__CloseStoneFragmentsExchangeDialog(this, v5);
  }
  else
  {
    SummonControl__resetStoneInfo(this, v5);
    SummonControl__OpenStoneFragmentExchangeResultDialog(this, this->fields.stoneExchangeCount, v6);
  }
}


void __fastcall SummonControl__ExtractVaildGachaInfoOnPriority(
        SummonControl_o *this,
        System_Collections_Generic_List_VaildGachaInfo__o **baseGachaList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t Item; // x0
  int32_t v13; // w21
  System_Collections_Generic_List_object__o *v14; // x8
  int64_t v15; // x23
  int32_t v16; // w24
  int64_t v17; // x22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4BD8C23 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    byte_4BD8C23 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (int64_t)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1C22094(Item, v5);
  v13 = 0;
  while ( v13 < *(_DWORD *)(Item + 24) )
  {
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      v13,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v14 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v15 = Item;
      v16 = 0;
      v17 = Item;
      while ( v16 < v14->fields._size )
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v14,
                          v16,
                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v15 && Item )
        {
          if ( *(_DWORD *)(v15 + 16) != *(_DWORD *)(Item + 16) && *(_DWORD *)(v15 + 48) == *(_DWORD *)(Item + 48) )
          {
            if ( !v17 )
              goto LABEL_25;
            if ( *(_DWORD *)(v17 + 36) < *(_DWORD *)(Item + 36) )
              v17 = Item;
          }
          v14 = (System_Collections_Generic_List_object__o *)*baseGachaList;
          ++v16;
          if ( *baseGachaList )
            continue;
        }
        goto LABEL_25;
      }
      if ( v4 )
      {
        Item = System_Collections_Generic_List_object___Contains(
                 v4,
                 (Il2CppObject *)v17,
                 (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( (Item & 1) == 0 )
        {
          items = v4->fields._items;
          v19 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v17,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v17, v6, v7, v8, v9, v10, v11);
          }
        }
        Item = (int64_t)*baseGachaList;
        ++v13;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)baseGachaList, (int64_t)v4, v6, v7, v8, v9, v10, v11);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BD8BA9 & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD8BA9 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(54.0, 0, 0LL);
}


float __fastcall SummonControl__FSMenuOffsetY(SummonControl_o *this, const MethodInfo *method)
{
  return 33.0;
}


int32_t __fastcall SummonControl__GetGachaIdFromSelectedBannerEntity(SummonControl_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  __int64 v4; // x8
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_String_array *v11; // x19
  TerminalPramsManager_c *v12; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD8BCD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8BCD = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8C44 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C44 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( !v2->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_4BD8C44 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C44 = 1;
  }
  v3 = (System_String_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = (System_String_o *)TerminalPramsManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*(_QWORD *)&v3[7].fields + 48LL);
  if ( !v4 )
    goto LABEL_31;
  v3 = *(System_String_o **)(v4 + 56);
  if ( !v3 )
    goto LABEL_31;
  v11 = System_String__Split(v3, 0x2Fu, 0, 0LL);
  if ( !byte_4BD8C45 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C45 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !v11 )
    goto LABEL_31;
  if ( (int)v11->max_length < 2 )
    return 0;
  v3 = v11->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_31:
    sub_1C22094(v3, method);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1C2209C(v3, method);
  System_Int32__TryParse((System_String_o *)v3[1].monitor, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SummonControl__GetGachaIndex(
        SummonControl_o *this,
        int32_t gachaId,
        int32_t extraGroupId,
        int32_t gachaGroupId,
        int32_t defaultIndex,
        const MethodInfo *method)
{
  void *vaildGachaList; // x0
  int32_t v12; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x25
  int monitor; // w9
  int klass; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BD8C19 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_4BD8C19 = 1;
  }
  entity = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_16:
    sub_1C22094(vaildGachaList, *(_QWORD *)&gachaId);
  v12 = 0;
  while ( v12 < *((_DWORD *)vaildGachaList + 6) )
  {
    gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v12,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList || !gachaMst )
      goto LABEL_16;
    vaildGachaList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               gachaMst,
                               &entity,
                               *((_DWORD *)vaildGachaList + 4),
                               (const MethodInfo_325BE14 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)vaildGachaList & 1) == 0 )
      return -1;
    if ( !entity )
      goto LABEL_16;
    monitor = (int)entity[4].monitor;
    if ( monitor && monitor == extraGroupId )
      return v12;
    klass = (int)entity[9].klass;
    if ( klass )
    {
      if ( klass == gachaGroupId )
        return v12;
    }
    if ( LODWORD(entity[1].klass) == gachaId )
      return v12;
    vaildGachaList = this->fields.vaildGachaList;
    ++v12;
    if ( !vaildGachaList )
      goto LABEL_16;
  }
  return defaultIndex;
}


int32_t __fastcall SummonControl__GetGroupRemainingDrawNum(
        SummonControl_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  GachaMaster_o *gachaMst; // x0

  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_1C22094(0LL, groupId);
  return GachaMaster__GetGroupRemainingDrawNum(gachaMst, groupId, 0LL);
}


int64_t __fastcall SummonControl__GetSummonSceneInTime(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.summonSceneInTime;
}


void __fastcall SummonControl__GoBuyStone(SummonControl_o *this, bool res, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w25
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v18; // x27
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4BD8C2C & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_1C21E38(&Method_SummonControl_GoBuyStone__);
    sub_1C21E38(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C21E38(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    byte_4BD8C2C = 1;
  }
  if ( res )
  {
    v5 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_SummonControl_GoBuyStone__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_BonusSelectCloseShotStoneDlg__,
      v9);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || (gachaId = gachaParamData->fields.gachaId,
          haveStone = this->fields.haveStone,
          haveFreeStone = this->fields.haveFreeStone,
          haveChargeStone = this->fields.haveChargeStone,
          bonusSelectAssetManager = this->fields.bonusSelectAssetManager,
          v18 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v18,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0LL),
          !confirmDlgInfo) )
    {
      sub_1C22094(v10, v11);
    }
    SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
      confirmDlgInfo,
      v8,
      haveStone,
      haveFreeStone,
      haveChargeStone,
      gachaId,
      bonusSelectAssetManager,
      v18,
      v19);
  }
}


void __fastcall SummonControl__GoFriendPointSummon(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  SummonControl__loadAssetsForSummon(this, v3);
}


bool __fastcall SummonControl__IsRankUpClassId(SummonControl_o *this, int32_t classId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *canRankUpClassIds; // x0

  if ( (byte_4BD8C00 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4BD8C00 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_4BD8BB3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6529/*"FAIL_LOAD"*/);
    sub_1C21E38(&StringLiteral_17840/*"btn_sumonhistory"*/);
    sub_1C21E38(&StringLiteral_5591/*"END_LOAD"*/);
    sub_1C21E38(&StringLiteral_17839/*"btn_summon_list"*/);
    byte_4BD8BB3 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_10;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6529/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.bannerAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v11);
  SummonControl__setPositionByWarId(this, v12);
  SummonControl__ResetArrowTween(this, v13);
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17840/*"btn_sumonhistory"*/, v14);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17840/*"btn_sumonhistory"*/,
          0LL),
        fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17839/*"btn_summon_list"*/, v15),
        !this->fields.summonInfoCtr)
    || (SummonInfoControl__SetSummonListSprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17839/*"btn_summon_list"*/,
          0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_10:
    sub_1C22094(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5591/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__NotHaveChargeStoneCheckSvtSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectcloseShotStoneDlg(this, 1, v2);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x21
  float x; // w20
  float y; // w24
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  v2 = this;
  if ( (byte_4BD8BC0 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_3481/*"CHANGE_BANNER"*/);
    byte_4BD8BC0 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_26;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_26;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_26;
  v10 = *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v13 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_29;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v13, currentBannerComp, 0LL)
    || (struct VaildGachaInfo_o *)v10 != v2->fields.currentGachaInfo
    || LODWORD(x) != v2->fields.currentIdx
    || LODWORD(y) != v2->fields.currentMoveIdx )
  {
LABEL_29:
    if ( v2->fields.isDoneTutorial )
    {
      this = (SummonControl_o *)v2->fields.leftArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.rightArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.summonMBannerLeftArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.summonMBannerRightArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    v2->fields.isDragging = 0;
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.currentBannerComp, (int64_t)v13, v4, v5, v6, v7, v8, v9);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.currentGachaInfo, v10, v15, v16, v17, v18, v19, v20);
    *(float *)&v2->fields.currentIdx = x;
    *(float *)&v2->fields.currentMoveIdx = y;
    SummonControl__setSliderIcon(v2, SLODWORD(x), v21);
    this = (SummonControl_o *)v2->fields.summonMBannerLoopCtr;
    if ( this )
    {
      summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v2->fields.currentMoveIdx,
                                    0LL);
        if ( summonMBannerCenterChild )
        {
          UICenterOnChild__CenterOn_47836756(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          this = (SummonControl_o *)v2->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
            SummonControl__UpdateSummonInfoControlLayout(v2, v23);
            SummonControl__showHelpImg(v2, v24);
            this = (SummonControl_o *)v2->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3481/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1C22094(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x20
  float m_Width; // w23
  float m_Height; // w24
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  bool *p_isNotCenterOnSync; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_4BD8BC1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    this = (SummonControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8BC1 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_20;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_20;
  v10 = *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v13 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_14;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v13, currentSummonMBannerComponent, 0LL)
    || (struct VaildGachaInfo_o *)v10 != v2->fields.currentGachaInfo
    || LODWORD(m_Width) != v2->fields.currentIdx
    || LODWORD(m_Height) != v2->fields.currentMoveIdx )
  {
LABEL_14:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v13;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v2->fields.currentSummonMBannerComponent,
      (int64_t)v13,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.currentGachaInfo, v10, v16, v17, v18, v19, v20, v21);
    p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
    if ( v2->fields.isNotCenterOnSync )
      goto LABEL_19;
    this = (SummonControl_o *)v2->fields.bannerLoopCtr;
    *(float *)&v2->fields.currentIdx = m_Width;
    *(float *)&v2->fields.currentMoveIdx = m_Height;
    if ( this )
    {
      centerChild = v2->fields.centerChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v2->fields.currentMoveIdx,
                                    0LL);
        if ( centerChild )
        {
          UICenterOnChild__CenterOn_47836756(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1C22094(this, method);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_19:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4BD8C1C & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3578/*"CLICK_BACK"*/);
    byte_4BD8C1C = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C22094(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3578/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Item; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v8; // x0
  System_Collections_Generic_List_object__o *EventTutorialEntity; // x19
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int64_t v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4BD8C1F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C21E38(&Method_SummonControl_OnClickHelp__);
    byte_4BD8C1F = 1;
  }
  v3 = Method_SummonControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_18;
  v8 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Collections_Generic_List_object__o *)EventTutorialMaster__GetEventTutorialEntity(
                                                                       0,
                                                                       34,
                                                                       v8,
                                                                       0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
    goto LABEL_18;
  if ( EventTutorialEntity->fields._size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               EventTutorialEntity,
               v11,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( !LODWORD(Item[3].klass) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 EventTutorialEntity,
                 v11,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !v10 )
          break;
        items = v10->fields._items;
        v19 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        v21 = (int64_t)Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            Item,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 4), v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( ++v11 >= EventTutorialEntity->fields._size )
        goto LABEL_17;
    }
LABEL_18:
    sub_1C22094(Item, v6);
  }
LABEL_17:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v10,
    0LL,
    0LL);
}


void __fastcall SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4BD8C20 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_GachaHistoryRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SummonControl_OnClickHisotry__);
    sub_1C21E38(&Method_SummonControl__OnClickHisotry_b__288_0__);
    byte_4BD8C20 = 1;
  }
  v3 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickHisotry__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__288_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1C22094(Request_object, v7);
  GachaHistoryRequest__beginRequest((GachaHistoryRequest_o *)Request_object, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(
        SummonControl_o *this,
        int32_t moveIdx,
        bool isPlaySe,
        const MethodInfo *method)
{
  SummonControl_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  v6 = this;
  if ( (byte_4BD8BC5 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_OnClickMiniBanner__);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_12934/*"SetBannerCenter"*/);
    byte_4BD8BC5 = 1;
  }
  if ( v6->fields.currentMoveIdx != moveIdx )
  {
    this = (SummonControl_o *)v6->fields.leftArrowBtn;
    if ( this )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      this = (SummonControl_o *)v6->fields.rightArrowBtn;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        this = (SummonControl_o *)v6->fields.summonMBannerLeftArrowBtn;
        if ( this )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
          this = (SummonControl_o *)v6->fields.summonMBannerRightArrowBtn;
          if ( this )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
            UnityEngine_MonoBehaviour__CancelInvoke_70854192(
              (UnityEngine_MonoBehaviour_o *)v6,
              (System_String_o *)StringLiteral_12934/*"SetBannerCenter"*/,
              0LL);
            if ( isPlaySe )
            {
              v7 = Method_SummonControl_OnClickMiniBanner__;
              if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
                v7 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickMiniBanner__);
              v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
              OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0LL);
            }
            this = (SummonControl_o *)v6->fields.summonInfoCtr;
            if ( this )
            {
              SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 0, 0LL);
              this = (SummonControl_o *)v6->fields.titleInfo;
              if ( this )
              {
                TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 0, 0LL);
                MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
                this = (SummonControl_o *)v6->fields.bannerLoopCtr;
                v6->fields.isDragging = 1;
                if ( this )
                {
                  centerChild = v6->fields.centerChild;
                  this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                  if ( this )
                  {
                    this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)this,
                                                moveIdx,
                                                0LL);
                    if ( centerChild )
                    {
                      UICenterOnChild__CenterOn_47836756(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
                      this = (SummonControl_o *)v6->fields.summonMBannerLoopCtr;
                      if ( this )
                      {
                        summonMBannerCenterChild = v6->fields.summonMBannerCenterChild;
                        this = (SummonControl_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
                        if ( this )
                        {
                          this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)this,
                                                      moveIdx,
                                                      0LL);
                          if ( summonMBannerCenterChild )
                          {
                            UICenterOnChild__CenterOn_47836756(
                              summonMBannerCenterChild,
                              (UnityEngine_Transform_o *)this,
                              1,
                              0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  if ( v6->fields.isDragging )
    return;
  currentGachaInfo = v6->fields.currentGachaInfo;
  if ( !currentGachaInfo )
LABEL_26:
    sub_1C22094(this, *(_QWORD *)&moveIdx);
  if ( currentGachaInfo->fields.isDispSummonListDialog )
    SummonControl__OnClickSummonListBtn(v6, *(const MethodInfo **)&moveIdx);
}


void __fastcall SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PossessionInfoDialog_o *possessionInfoDialog; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4BD8C21 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_OnClickPossessionInfo__);
    byte_4BD8C21 = 1;
  }
  v3 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickPossessionInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo
    || (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL
    || (PossessionInfoDialog__Init(possessionInfoDialog, currentGachaInfo->fields.id, v7),
        (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL) )
  {
    sub_1C22094(possessionInfoDialog, v6);
  }
  PossessionInfoDialog__Open(possessionInfoDialog, v6);
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BD8BE1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BE1 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, v6),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C22094(confirmDlgInfo, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v8);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BD8BE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_OnClickStoneFragmentsInfo__);
    byte_4BD8BE2 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD8C1E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SummonControl_reDispSummonBannerList__);
    byte_4BD8C1E = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_1C22094(v5, v6);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v4, 0LL);
}


void __fastcall SummonControl__OnClickSummonListBtn(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *vaildGachaList; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *useGachaData; // x20
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_ICollection_o *v10; // x20
  SummonListDialog_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *current; // x1
  int32x2_t **v23; // x20
  System_Collections_Generic_List_object__o *v24; // x22
  System_Predicate_object__o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  GachaMaster_o *gachaMst; // x0
  int64_t v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32x2_t *v40; // x8
  signed __int32 v41; // w9
  System_Collections_Generic_List_object__o *v42; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  SummonControl_o *v47; // x0
  const MethodInfo *v48; // x2
  System_Collections_Generic_List_object__o *v49; // x20
  System_Comparison_T__o *v50; // x21
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v52; // x9
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_object__o *v55; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BD8C22 & 1) == 0 )
  {
    sub_1C21E38(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_GachaEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GachaEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C21E38(&System_Func_GachaEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor___77593088);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_1C21E38(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C21E38(&Method_SummonControl_OnClickSummonListBtn__);
    sub_1C21E38(&Method_SummonControl_SlotCompare__);
    sub_1C21E38(&Method_SummonControl__OnClickSummonListBtn_b__290_0__);
    sub_1C21E38(&Method_SummonControl___c__DisplayClass290_0__OnClickSummonListBtn_b__1__);
    sub_1C21E38(&SummonControl___c__DisplayClass290_0_TypeInfo);
    sub_1C21E38(&VaildGachaInfo_TypeInfo);
    byte_4BD8C22 = 1;
  }
  v3 = Method_SummonControl_OnClickSummonListBtn__;
  memset(&v54, 0, sizeof(v54));
  if ( (*((_BYTE *)Method_SummonControl_OnClickSummonListBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonControl_OnClickSummonListBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  vaildGachaList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.vaildGachaList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v6,
    vaildGachaList,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor___77593088);
  v55 = v6;
  useGachaData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.useGachaData;
  v8 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GachaEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_SummonControl__OnClickSummonListBtn_b__290_0__, 0LL);
  v9 = System_Linq_Enumerable__Where_object_(
         useGachaData,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v10 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v9,
                                              (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_GachaEntity___);
  IsNullOrEmpty = (SummonListDialog_o *)BasicHelper__IsNullOrEmpty(v10, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !v10 )
      goto LABEL_33;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v53,
      (System_Collections_Generic_List_object__o *)v10,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v54 = v53;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__) )
    {
      v13 = sub_1C22084(SummonControl___c__DisplayClass290_0_TypeInfo);
      SummonControl___c__DisplayClass290_0___ctor((SummonControl___c__DisplayClass290_0_o *)v13, 0LL);
      if ( !v13 )
        sub_1C22094(v14, v15);
      current = v54.fields._current;
      *(_QWORD *)(v13 + 16) = v54.fields._current;
      v23 = (int32x2_t **)(v13 + 16);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)current, v16, v17, v18, v19, v20, v21);
      v24 = v55;
      v25 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_VaildGachaInfo__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v13,
        Method_SummonControl___c__DisplayClass290_0__OnClickSummonListBtn_b__1__,
        0LL);
      if ( !v24 )
        sub_1C22094(v26, v27);
      v28 = System_Collections_Generic_List_object___Exists(
              v24,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_364F6E0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
      if ( !v28 )
      {
        if ( !*v23 )
          sub_1C22094(v28, v29);
        gachaMst = this->fields.gachaMst;
        if ( !gachaMst )
          sub_1C22094(0LL, v29);
        if ( GachaMaster__GetGroupRemainingDrawNum(gachaMst, (*v23)[18].n64_i32[0], 0LL) )
        {
          v31 = sub_1C22084(VaildGachaInfo_TypeInfo);
          VaildGachaInfo___ctor((VaildGachaInfo_o *)v31, 0LL);
          v40 = *v23;
          if ( !*v23 )
            sub_1C22094(v32, v33);
          if ( !v31 )
            sub_1C22094(v32, v33);
          *(_DWORD *)(v31 + 16) = v40[2].n64_u32[0];
          *(_DWORD *)(v31 + 48) = v40[5].n64_u32[1];
          *(int32x2_t *)(v31 + 36) = vrev64_s32(v40[4]);
          v41 = v40[18].n64_i32[1];
          *(_DWORD *)(v31 + 104) = v41;
          *(_BYTE *)(v31 + 108) = v41 > 0;
          *(_DWORD *)(v31 + 112) = v40[11].n64_u32[1];
          *(_DWORD *)(v31 + 144) = v40[19].n64_u32[1];
          v42 = v55;
          if ( !v55 )
            sub_1C22094(0LL, v33);
          items = v55->fields._items;
          v44 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v55->fields._version;
          if ( !items )
            sub_1C22094(v42, v33);
          size = v42->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v31,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v42->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v31;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v46 + 4), v31, v34, v35, v36, v37, v38, v39);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v54,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    SummonControl__ExtractVaildGachaInfoOnPriority(v47, (System_Collections_Generic_List_VaildGachaInfo__o **)&v55, v48);
    v49 = v55;
    v50 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_VaildGachaInfo__TypeInfo);
    System_Comparison_object____ctor(v50, (Il2CppObject *)this, Method_SummonControl_SlotCompare__, 0LL);
    if ( !v49 )
LABEL_33:
      sub_1C22094(IsNullOrEmpty, v12);
    System_Collections_Generic_List_object___Sort_56953720(
      v49,
      v50,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_33;
  v52 = this->fields.vaildGachaList;
  if ( !v52 )
    goto LABEL_33;
  IsNullOrEmpty = this->fields.summonListDialog;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  SummonListDialog__Init(
    IsNullOrEmpty,
    this->fields.currentMoveIdx,
    currentGachaInfo->fields.summonListGroupId,
    v52->fields._size,
    (System_Collections_Generic_List_VaildGachaInfo__o *)v55,
    0LL);
  IsNullOrEmpty = this->fields.summonListDialog;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  SummonListDialog__Open(IsNullOrEmpty, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD8BE8 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8BE8 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4BD8BBF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12934/*"SetBannerCenter"*/);
    byte_4BD8BBF = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70854192(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12934/*"SetBannerCenter"*/,
    0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 0, 0LL),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0LL),
        MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonBannerScrollView) == 0LL)
    || (UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0LL),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerScrollView) == 0LL) )
  {
    sub_1C22094(summonInfoCtr, v3);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0LL);
  this->fields.isDragging = 1;
}


void __fastcall SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BD8C1D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__OnEndSummonEffect_b__285_0__);
    byte_4BD8C1D = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__285_0__, 0LL);
  if ( !v6 )
    sub_1C22094(v9, v10);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v7; // w22
  Il2CppObject *Instance; // x21
  const MethodInfo *v9; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  System_Action_int__o *v11; // x24

  if ( (byte_4BD8BE3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl_RequestStoneFragmentsShop__);
    byte_4BD8BE3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v7 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v9),
        v11 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo),
        System_Action_int____ctor(v11, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0LL),
        !Instance) )
  {
LABEL_11:
    sub_1C22094(Master_object, v4);
  }
  if ( v7 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v11, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v11, 0LL);
}


void __fastcall SummonControl__OpenStoneFragmentExchangeResultDialog(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x22
  const MethodInfo *v10; // x1
  ShopEntity_o *v11; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v13; // x1
  ShopEntity_o *v14; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v16; // x1
  ShopEntity_o *v17; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *Instance; // x23
  System_Action_bool__o *v20; // x24

  if ( (byte_4BD8BE7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl_OnCloseResultDialog__);
    byte_4BD8BE7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v6);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v11 = SummonControl__get_StoneFragmentsShopEntity(this, v10);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v11,
                                               buyCount,
                                               0LL);
  v14 = SummonControl__get_StoneFragmentsShopEntity(this, v13);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v14,
                                           (ItemEntity_o *)Entity,
                                           buyCount,
                                           0LL);
  v17 = SummonControl__get_StoneFragmentsShopEntity(this, v16);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v17,
                                          (ItemEntity_o *)Entity,
                                          0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1C22094(StoneFragmentsShopEntity, v8);
  CommonUI__OpenItemExchangeResultDialog(
    (CommonUI_o *)Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v20,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__RequestStoneFragmentsShop(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v7; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v9; // x1

  if ( (byte_4BD8BE4 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SummonControl_EndRequestStoneFragmentsShop__);
    byte_4BD8BE4 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v7);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1C22094(StoneFragmentsShopEntity, v9);
    PurchaseRequest__beginRequest(
      (PurchaseRequest_o *)Request_object,
      StoneFragmentsShopEntity->fields.id,
      this->fields.stoneExchangeCount,
      0,
      0,
      0LL);
  }
  else
  {
    SummonControl__CloseStoneFragmentsExchangeDialog(this, *(const MethodInfo **)&buyCount);
  }
}


void __fastcall SummonControl__ResetArrowTween(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v4; // x22
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *v6; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_4BD8BB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8BB6 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v4, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v6, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v5, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( Component_object )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_object, 0LL);
      return;
    }
LABEL_28:
    sub_1C22094(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4BD8BFB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11272/*"REQUEST_NG"*/);
    sub_1C21E38(&StringLiteral_11273/*"REQUEST_NG_RESULT"*/);
    byte_4BD8BFB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  if ( this->fields.isResult )
    v4 = (System_String_o **)&StringLiteral_11273/*"REQUEST_NG_RESULT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11272/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, *v4, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  Il2CppObject *Component_object; // x20
  float v5; // s8
  UICenterOnChild_o *centerChild; // x20
  Il2CppObject *v7; // x20
  float v8; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4BD8BC2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8BC2 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_35;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_35;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) >= 1 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
    if ( !bannerLoopCtr )
      goto LABEL_35;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         bannerLoopCtr,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v5 = *(float *)&Component_object[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v5 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
        if ( !bannerLoopCtr )
          goto LABEL_35;
        centerChild = this->fields.centerChild;
        bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
        if ( !bannerLoopCtr )
          goto LABEL_35;
        bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)bannerLoopCtr,
                                                     this->fields.currentMoveIdx,
                                                     0LL);
        if ( !centerChild )
          goto LABEL_35;
        UICenterOnChild__CenterOn_47836756(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
      }
    }
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_35;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_35;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) >= 1 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
    if ( !bannerLoopCtr )
      goto LABEL_35;
    v7 = UnityEngine_Component__GetComponent_object_(
           bannerLoopCtr,
           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v8 = *(float *)&v7[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v8 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
        if ( bannerLoopCtr )
        {
          summonMBannerCenterChild = this->fields.summonMBannerCenterChild;
          bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
          if ( bannerLoopCtr )
          {
            bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)bannerLoopCtr,
                                                         this->fields.currentMoveIdx,
                                                         0LL);
            if ( summonMBannerCenterChild )
            {
              UICenterOnChild__CenterOn_47836756(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_35:
        sub_1C22094(bannerLoopCtr, method);
      }
    }
    else
    {
      v10 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
    }
  }
}


void __fastcall SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  char *bgRoot; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  char *v13; // x20
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  __int64 v57; // x8
  unsigned __int64 v58; // x23
  bool v59; // w21
  System_String_o *v60; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BD8BFE & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_18099/*"center_glow"*/);
    sub_1C21E38(&StringLiteral_23366/*"ring_gard1_3"*/);
    sub_1C21E38(&StringLiteral_23367/*"ring_gard2_1"*/);
    sub_1C21E38(&StringLiteral_23368/*"ring_gard2_2"*/);
    sub_1C21E38(&StringLiteral_23365/*"ring_gard1_2"*/);
    sub_1C21E38(&StringLiteral_23369/*"ring_gard2_3"*/);
    sub_1C21E38(&StringLiteral_23364/*"ring_gard1_1"*/);
    byte_4BD8BFE = 1;
  }
  bgRoot = (char *)sub_1C21EE0(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_19:
    sub_1C22094(bgRoot, v6);
  v13 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v14 = StringLiteral_23364/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_23364/*"ring_gard1_1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(bgRoot + 32), v14, v7, v8, v9, v10, v11, v12);
  if ( *((_DWORD *)v13 + 6) <= 1u )
    goto LABEL_20;
  v21 = StringLiteral_23365/*"ring_gard1_2"*/;
  *((_QWORD *)v13 + 5) = StringLiteral_23365/*"ring_gard1_2"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( *((_DWORD *)v13 + 6) <= 2u )
    goto LABEL_20;
  v28 = StringLiteral_23366/*"ring_gard1_3"*/;
  *((_QWORD *)v13 + 6) = StringLiteral_23366/*"ring_gard1_3"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  if ( *((_DWORD *)v13 + 6) <= 3u )
    goto LABEL_20;
  v35 = StringLiteral_23367/*"ring_gard2_1"*/;
  *((_QWORD *)v13 + 7) = StringLiteral_23367/*"ring_gard2_1"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  if ( *((_DWORD *)v13 + 6) <= 4u
    || (v42 = StringLiteral_23368/*"ring_gard2_2"*/,
        *((_QWORD *)v13 + 8) = StringLiteral_23368/*"ring_gard2_2"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41),
        *((_DWORD *)v13 + 6) <= 5u)
    || (v49 = StringLiteral_23369/*"ring_gard2_3"*/,
        *((_QWORD *)v13 + 9) = StringLiteral_23369/*"ring_gard2_3"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48),
        *((_DWORD *)v13 + 6) <= 6u) )
  {
LABEL_20:
    sub_1C2209C(bgRoot, v6);
  }
  v56 = StringLiteral_18099/*"center_glow"*/;
  *((_QWORD *)v13 + 10) = StringLiteral_18099/*"center_glow"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  v57 = *((_QWORD *)v13 + 3);
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    v59 = isDisp;
    while ( v58 < (unsigned int)v57 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v60 = *(System_String_o **)&v13[8 * v58 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0LL);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v60, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, v59, 0LL);
      LODWORD(v57) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v58 >= (int)v57 )
        return;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__SetDispBtn(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (v5 = isDisp,
        SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, isDisp, 0LL),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo) == 0LL) )
  {
    sub_1C22094(summonInfoCtr, isDisp);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, v5, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(v5, 0, 0LL);
  SummonControl__setDispSummonInfo(this, v5, v6);
  MainMenuBar__setMenuActive(v5, 0LL, 0LL);
}


void __fastcall SummonControl__SetGachaTime(SummonControl_o *this, int32_t num, int32_t type, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8
  int v5; // w9

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    sub_1C22094(this, num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_C383A8[type - 1];
  gachaParamData->fields.gachaResourceNum = v5 * num;
}


void __fastcall SummonControl__SetupFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  Il2CppObject *Component_object; // x20
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v7; // w21
  MasterMissionComponent_c *v8; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v11; // w1
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD8BE0 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&MasterMissionComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_17799/*"btn_event_3"*/);
    byte_4BD8BE0 = 1;
  }
  v12 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17799/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0LL);
  v7 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v7 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  v13 = v7;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, this->fields.haveStone + v7 >= this->fields.needStone, 0LL);
  v8 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v8 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v8->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v7 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v13, 0LL);
    if ( fragmentsCount )
    {
      UILabel__set_text(fragmentsCount, (System_String_o *)fragmentsExchangeButton, 0LL);
      fragmentsExchangeButton = (UnityEngine_GameObject_o *)this->fields.fragmentsLimit;
      if ( fragmentsExchangeButton )
      {
        fragmentsExchangeButton = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)fragmentsExchangeButton,
                                    0LL);
        if ( fragmentsExchangeButton )
        {
          v11 = 0;
          goto LABEL_27;
        }
      }
    }
LABEL_28:
    sub_1C22094(fragmentsExchangeButton, method);
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v12 = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !fragmentsCount )
    goto LABEL_28;
  UILabel__set_text(fragmentsCount, (System_String_o *)fragmentsExchangeButton, 0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)this->fields.fragmentsLimit;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  fragmentsExchangeButton = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)fragmentsExchangeButton,
                              0LL);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  v11 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, v11, 0LL);
}


int32_t __fastcall SummonControl__SlotCompare(
        SummonControl_o *this,
        VaildGachaInfo_o *a,
        VaildGachaInfo_o *b,
        const MethodInfo *method)
{
  int32_t slotId; // w8
  int32_t v5; // w9
  int32_t id; // w8
  int32_t v8; // w9

  if ( !b || !a )
    sub_1C22094(this, a);
  slotId = b->fields.slotId;
  v5 = a->fields.slotId;
  if ( slotId < v5 )
    return -1;
  if ( slotId > v5 )
    return 1;
  id = b->fields.id;
  v8 = a->fields.id;
  if ( id >= v8 )
    return id > v8;
  else
    return -1;
}


void __fastcall SummonControl__SummonSceneRefresh(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD8BF2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__SummonSceneRefresh_b__229_0__);
    byte_4BD8BF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__229_0__, 0LL);
  if ( !Instance )
    sub_1C22094(v5, v6);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, v4, 0LL);
}


bool __fastcall SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  SummonControl_c *v12; // x0
  System_String_o *String_70827888; // x21
  System_Object_array *v14; // x0
  SelectBonusData_o *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int max_length; // w8
  __int64 v23; // x9

  if ( (byte_4BD8BE9 & 1) == 0 )
  {
    sub_1C21E38(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    this = (SummonControl_o *)sub_1C21E38(&SummonControl_TypeInfo);
    byte_4BD8BE9 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)selectBonusData, 0LL, v6, v7, v8, v9, v10, v11);
  v12 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v12 = SummonControl_TypeInfo;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888(v12->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_70827888, 0LL) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_70827888,
          (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v14 )
  {
    max_length = v14->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v14) = 0;
      return (char)v14;
    }
    v23 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= max_length )
        sub_1C2209C(v14, v15);
      v15 = (SelectBonusData_o *)v14->m_Items[v23];
      if ( !v15 )
        sub_1C22094(v14, 0LL);
      if ( v15->fields.gachaId == gachaId )
        break;
      if ( (int)++v23 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)selectBonusData, (int64_t)v15, v16, v17, v18, v19, v20, v21);
    LOBYTE(v14) = 1;
  }
  return (char)v14;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  void *vaildGachaList; // x0
  GachaAppendMaster_o *v4; // x20
  GachaAppendEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8BC3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_4BD8BC3 = 1;
  }
  entity = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_20;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList )
    goto LABEL_20;
  if ( VaildGachaInfo__HasFlag((VaildGachaInfo_o *)vaildGachaList, 2, 0LL) )
  {
    vaildGachaList = this->fields.summonInfoCtr;
    if ( !vaildGachaList )
      goto LABEL_20;
    vaildGachaList = SummonInfoControl__get_SummonInfoLayout((SummonInfoControl_o *)vaildGachaList, 0LL);
    if ( !vaildGachaList )
      goto LABEL_20;
    goto LABEL_17;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  vaildGachaList = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !this->fields.vaildGachaList
    || (v4 = (GachaAppendMaster_o *)vaildGachaList,
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0LL)
    || !v4
    || (vaildGachaList = (void *)GachaAppendMaster__TryGetHundredSummon(
                                   v4,
                                   &entity,
                                   *((_DWORD *)vaildGachaList + 4),
                                   0LL),
        !this->fields.summonInfoCtr) )
  {
LABEL_20:
    sub_1C22094(vaildGachaList, method);
  }
  if ( ((unsigned __int8)vaildGachaList & 1) != 0 )
  {
    vaildGachaList = SummonInfoControl__get_MultiExSummonInfoLayout(this->fields.summonInfoCtr, 0LL);
    if ( !vaildGachaList )
      goto LABEL_20;
LABEL_17:
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)vaildGachaList, 0LL);
    return;
  }
  vaildGachaList = SummonInfoControl__get_SummonInfoLayout(this->fields.summonInfoCtr, 0LL);
  if ( !vaildGachaList )
    goto LABEL_20;
  SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)vaildGachaList, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BD8C04 & 1) == 0 )
  {
    sub_1C21E38(&SummonControl__WaitBattleChrLoad_d__251_TypeInfo);
    byte_4BD8C04 = 1;
  }
  v3 = sub_1C22084(SummonControl__WaitBattleChrLoad_d__251_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__251___ctor((SummonControl__WaitBattleChrLoad_d__251_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SummonControl___BonusSelectServantSelectDialog_b__303_0(
        SummonControl_o *this,
        const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v16; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v17; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v18; // x24
  System_Action_o *v19; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v2 = this;
  if ( (byte_4BD8C3F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__);
    sub_1C21E38(&Method_SummonControl_SetDispBtn__);
    sub_1C21E38(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__303_1__);
    this = (SummonControl_o *)sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8C3F = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__50551272(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init(
    (BonusSelectSummonConfirmDialog_o *)this,
    v2->fields.bonusSelectAssetManager,
    0LL);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v16 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v17 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0LL);
  v18 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v18,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  v19 = *(System_Action_o **)&this->fields.confirmDlgInfo->fields.refuseInit;
  if ( !v19 )
  {
    if ( !LODWORD(this->fields.limitWarningDlgInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v19, klass, Method_SummonControl___c__BonusSelectServantSelectDialog_b__303_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__303_1 = v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__303_1, (int64_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1C22094(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v16, v17, v18, v19, 0LL);
}


bool __fastcall SummonControl___CheckFriendPointSummonUpdate_b__221_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0LL )
    sub_1C22094(this, ent);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void __fastcall SummonControl___DialogCallBack_b__255_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4BD8C3A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl_EndCloseDialogCallBack__);
    byte_4BD8C3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0LL);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1C22094(v5, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__288_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1C22094(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


bool __fastcall SummonControl___OnClickSummonListBtn_b__290_0(
        SummonControl_o *this,
        GachaEntity_o *x,
        const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( !x )
    goto LABEL_6;
  if ( x->fields.gachaGroupId >= 1 )
  {
    currentGachaInfo = this->fields.currentGachaInfo;
    if ( currentGachaInfo )
      return x->fields.gachaListGroupId == currentGachaInfo->fields.summonListGroupId;
LABEL_6:
    sub_1C22094(this, x);
  }
  return 0;
}


void __fastcall SummonControl___OnEndSummonEffect_b__285_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8C3E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5590/*"END_FADE"*/);
    byte_4BD8C3E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5590/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__229_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4BD8C36 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD8C36 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        SummonControl__quit(this, v5),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v4);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__152_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD8C31 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__exeFormation_b__152_2__);
    byte_4BD8C31 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__152_2__, 0LL);
  if ( !Instance )
    sub_1C22094(v5, v6);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v4, 0LL);
}


void __fastcall SummonControl___exeFormation_b__152_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4BD8C32 & 1) == 0 )
  {
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD8C32 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


void __fastcall SummonControl___executeEnhanceTresureDevice_b__272_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4BD8C3D & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_5589/*"END_EFFECT"*/);
    byte_4BD8C3D = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_1C22094(Instance, v5);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5589/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__235_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8C37 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12479/*"START_GACHA"*/);
    byte_4BD8C37 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12479/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__151_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD8C30 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__openAfterSummonInfo_b__151_2__);
    byte_4BD8C30 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__151_2__, 0LL);
  if ( !Instance )
    sub_1C22094(v5, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31153776((CommonUI_o *)Instance, v4, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__151_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__267_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4BD8C3C & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_5608/*"END_SUMMON"*/);
    byte_4BD8C3C = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_10;
  SummonResultComponent__clearResultList(summonResultInfo, 0LL);
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_10;
  SummonResultComponent__SetActive(summonResultInfo, 0, 0LL);
  summonResultInfo = (SummonResultComponent_o *)this->fields.fsm;
  if ( !summonResultInfo )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5608/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
LABEL_10:
    sub_1C22094(summonResultInfo, method);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__182_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4BD8C34 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12934/*"SetBannerCenter"*/);
    byte_4BD8C34 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12934/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1C22094(0LL, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


void __fastcall SummonControl___setUserResourceDisp_b__159_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD8C33 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_25415/*"{0:N0}"*/);
    byte_4BD8C33 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v11 = stoneCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v8, 0LL);
  if ( !currentStoneNumLb )
    sub_1C22094(v9, v10);
  UILabel__set_text(currentStoneNumLb, v9, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__218_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v16; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v17; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v18; // x24
  System_Action_o *basePanel; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v2 = this;
  if ( (byte_4BD8C35 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C21E38(&Method_SummonControl_SetDispBtn__);
    sub_1C21E38(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__showConfirmDlg_b__218_1__);
    this = (SummonControl_o *)sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8C35 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__50551272(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init(
    (BonusSelectSummonConfirmDialog_o *)this,
    v2->fields.bonusSelectAssetManager,
    0LL);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v16 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v17 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v18 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v18,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  basePanel = (System_Action_o *)this->fields.confirmDlgInfo->fields.basePanel;
  if ( !basePanel )
  {
    if ( !LODWORD(this->fields.limitWarningDlgInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    basePanel = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(basePanel, klass, Method_SummonControl___c__showConfirmDlg_b__218_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__218_1 = basePanel;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__218_1,
      (int64_t)basePanel,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1C22094(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v16, v17, v18, basePanel, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__242_0(SummonControl_o *this, const MethodInfo *method)
{
  void *maskObject; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  Il2CppObject *Component_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v16; // x9
  char v17; // w10
  Il2CppObject *v18; // x23
  System_String_o *Value; // x0
  System_String_array *v20; // x0
  SummonControl___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x24
  System_Func_object__int__o *_9__242_1; // x25
  Il2CppObject *v24; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_int__o *v33; // x24
  float v34; // s0
  struct GachaInfos_array *v35; // x8
  int max_length; // w21
  float v37; // s8
  il2cpp_array_size_t v38; // w22
  GachaInfos_o *v39; // x20
  int32_t v40; // w26
  char v41; // w25
  int32_t Data; // w28
  int32_t v43; // w29
  bool isNew; // w27
  int v45; // w28
  _DWORD *v46; // x25
  bool IsServant; // w27
  const MethodInfo *v48; // x2
  int v49; // w8
  bool v50; // w28
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  _BOOL4 v54; // w27
  WeightRate_int__o *v55; // x28
  int32_t v56; // w0
  int32_t v57; // w0
  ServantLimitMaster_o *v58; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_4BD8C38 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&System_Func_string__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__showSummonEffect_b__242_1__);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    sub_1C21E38(&StringLiteral_5603/*"END_PREPARATION"*/);
    sub_1C21E38(&StringLiteral_12617/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/);
    sub_1C21E38(&StringLiteral_3068/*"BGM_SUMMON_1"*/);
    byte_4BD8C38 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v4);
  SummonControl__setDispSummonInfo(this, 0, v5);
  maskObject = this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_84;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  SummonControl__clearResultList(this, v6);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_3068/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.summonComp,
    (int64_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  maskObject = this->fields.summonComp;
  if ( !maskObject )
    goto LABEL_84;
  SummonEffectComponent__Initialize((SummonEffectComponent_o *)maskObject, 0LL);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_84;
  if ( gachaParamData->fields.gachaTime != 1 )
    goto LABEL_15;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_84;
  if ( gachaResInfoList->max_length == 2 )
  {
    v16 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v17 = 1;
  }
  else
  {
LABEL_15:
    v16 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v17 = 0;
  }
  v16->fields.isNoSkip = v17;
  v16->fields.gachaId = gachaParamData->fields.gachaId;
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v58 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12617/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v20 = System_String__Split(Value, 0x2Cu, 0, 0LL);
    v21 = SummonControl___c_TypeInfo;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
    if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v21 = SummonControl___c_TypeInfo;
    }
    _9__242_1 = (System_Func_object__int__o *)v21->static_fields->__9__242_1;
    if ( !_9__242_1 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = SummonControl___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__242_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__242_1, v24, Method_SummonControl___c__showSummonEffect_b__242_1__, 0LL);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__242_1 = (struct System_Func_string__int__o *)_9__242_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__242_1,
        (int64_t)_9__242_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v22,
                                                                 (System_Func_TSource__TResult__o *)_9__242_1,
                                                                 (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_string__int___);
    v33 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v32,
                                                      (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v33 = 0LL;
  }
  v34 = UnityEngine_Random__get_value(0LL);
  v35 = this->fields.gachaResInfoList;
  if ( v35 )
  {
    max_length = v35->max_length;
    if ( max_length >= 1 )
    {
      v37 = v34;
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= v35->max_length )
          sub_1C2209C(maskObject, method);
        v39 = v35->m_Items[v38];
        if ( !v39 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v39->fields.type, 0LL);
        method = (const MethodInfo *)(unsigned int)v39->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v18 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                       (int32_t)method,
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v40 = *((_DWORD *)maskObject + 16);
        v41 = 0;
LABEL_40:
        Data = 0;
        v43 = 3;
        isNew = v39->fields.isNew;
        if ( v33 )
          goto LABEL_76;
LABEL_80:
        maskObject = 0LL;
LABEL_81:
        if ( !*p_summonComp )
          goto LABEL_84;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v39->fields.objectId,
          v39->fields.limitCount,
          v41,
          isNew,
          Data,
          v40,
          v43,
          (unsigned __int8)maskObject & 1,
          v39->fields.userSvtId,
          0LL);
        if ( max_length == ++v38 )
          goto LABEL_85;
        v35 = this->fields.gachaResInfoList;
        if ( !v35 )
          goto LABEL_84;
      }
      maskObject = MasterData_object;
      if ( !MasterData_object )
        goto LABEL_84;
      maskObject = DataMasterBase_object__object__int___GetEntity(
                     MasterData_object,
                     (int32_t)method,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v45 = *((_DWORD *)maskObject + 21);
      v46 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = v58;
      if ( !v58 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v58, v39->fields.objectId, v39->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_84;
      v40 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v46[20], v48) )
        goto LABEL_51;
      if ( v40 == 5 )
      {
        if ( v37 >= 0.2 )
        {
LABEL_51:
          v41 = 0;
          goto LABEL_52;
        }
      }
      else if ( v40 != 4 || v37 >= 0.4 )
      {
        goto LABEL_51;
      }
      v41 = 1;
LABEL_52:
      v49 = v45 - 3;
      v43 = 0;
      Data = 0;
      isNew = 0;
      switch ( v49 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v50 = v39->fields.isNew;
          isNew = v50;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v39->fields.objectId,
                         0LL);
          if ( maskObject != 0LL && v50 )
          {
            if ( !v33 )
            {
              v33 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v33,
                (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v33 )
                goto LABEL_84;
            }
            method = (const MethodInfo *)(unsigned int)v39->fields.objectId;
            items = v33->fields._items;
            v52 = Method_System_Collections_Generic_List_int__Add__;
            ++v33->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v33->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v33,
                (int32_t)method,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v33->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
            v43 = 1;
          }
          else
          {
            Data = 0;
            v43 = 1;
LABEL_75:
            if ( !v33 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v43 = 1;
          if ( !v33 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v54 = v39->fields.isNew;
          v55 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v55, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
          if ( v40 == 4 )
          {
            if ( !v55 )
              goto LABEL_84;
            WeightRate_int___setWeight(v55, 60, 0, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v55, 40, 1, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
            v56 = UnityEngine_Random__Range_70829352(0, v55->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v55, v56, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
            v43 = 2;
            isNew = v54;
            v41 &= Data == 0;
            v40 = 4;
            if ( v33 )
              break;
          }
          else
          {
            isNew = v54;
            if ( v40 == 5 )
            {
              if ( !v55 )
                goto LABEL_84;
              WeightRate_int___setWeight(v55, 60, 0, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v55, 20, 1, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
              v43 = 2;
              WeightRate_int___setWeight(v55, 20, 2, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
              v57 = UnityEngine_Random__Range_70829352(0, v55->fields.totalweight, 0LL);
              Data = WeightRate_int___getData(v55, v57, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
              v41 &= Data == 0;
              v40 = 5;
              if ( v33 )
                break;
            }
            else
            {
              Data = 0;
              v43 = 2;
              if ( v33 )
                break;
            }
          }
          goto LABEL_80;
      }
LABEL_76:
      maskObject = (void *)System_Collections_Generic_List_int___Contains(
                             v33,
                             v39->fields.objectId,
                             (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1C22094(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5603/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__258_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl___c_c *v3; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__258_1; // x21
  Il2CppObject *v7; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD8C3B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__showSummonResultInfo_b__258_1__);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8C3B = 1;
  }
  v3 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v3 = SummonControl___c_TypeInfo;
  }
  _9__258_1 = v3->static_fields->__9__258_1;
  if ( !_9__258_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SummonControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__258_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__258_1, v7, Method_SummonControl___c__showSummonResultInfo_b__258_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__258_1 = _9__258_1;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__258_1,
      (int64_t)_9__258_1,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !overflowSvtCoinInfo )
    sub_1C22094(v3, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__258_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__249_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8C39 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3610/*"CLICK_OK"*/);
    byte_4BD8C39 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3610/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1C22094(0LL, v4);
  if ( UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL) )
    SummonControl__friendPointQpManaCheck(this, v5);
  else
    SummonControl__showConfirmDlg(this, v5);
}


void __fastcall SummonControl__autoSellSettingChange2(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1C22094(0LL, v4);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v5) )
  {
    SummonControl__showConfirmDlg(this, v5);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD8BF7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_4BD8BF7 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1C22094(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  SummonControl__showConfirmDlg_34164004(this, 0, v6);
}


void __fastcall SummonControl__callbackGachaDraw(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  SummonControl_o *v13; // x20
  __int64 v14; // x8
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x8
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x8
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  int64_t v47; // x1

  v4 = this;
  if ( (byte_4BD8BFA & 1) == 0 )
  {
    sub_1C21E38(&Method_JsonManager_DeserializeArray_SummonControl_resData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BD8BFA = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_63123792(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL)
    || System_String__Equals_63123792(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_63126736(
                         (System_String_o *)StringLiteral_16086/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16345/*"]"*/,
                         0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v6,
                              (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_22;
  v13 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v14 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v14 )
    goto LABEL_22;
  v15 = *(_QWORD *)(v14 + 16);
  v4->fields.gachaResInfoList = (struct GachaInfos_array *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.gachaResInfoList, v15, v7, v8, v9, v10, v11, v12);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v22 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v22 )
    goto LABEL_22;
  v23 = *(_QWORD *)(v22 + 24);
  v4->fields.canRankUpClassIds = (struct System_Int32_array *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.canRankUpClassIds, v23, v16, v17, v18, v19, v20, v21);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v30 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v30 )
    goto LABEL_22;
  v31 = *(_QWORD *)(v30 + 32);
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.overflowSvtCoinInfos, v31, v24, v25, v26, v27, v28, v29);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v38 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v38 )
    goto LABEL_22;
  v39 = *(_QWORD *)(v38 + 40);
  v4->fields.extraGiftIds = (struct System_Int32_array *)v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.extraGiftIds, v39, v32, v33, v34, v35, v36, v37);
  if ( !LODWORD(v13->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1C2209C(this, result);
  v46 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v46
    || (v47 = *(_QWORD *)(v46 + 48),
        v4->fields.GachaExtraGiftList = (struct GachaExtraGifts_array *)v47,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.GachaExtraGiftList, v47, v40, v41, v42, v43, v44, v45),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_22:
    sub_1C22094(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8BFD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BD8BFD = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  PlayMakerFSM_o *fsm; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4BD8C14 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl___c__DisplayClass271_0__checkEnhanceTresureDevice_b__0__);
    sub_1C21E38(&SummonControl___c__DisplayClass271_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9494/*"NO_EXIST"*/);
    byte_4BD8C14 = 1;
  }
  v3 = sub_1C22084(SummonControl___c__DisplayClass271_0_TypeInfo);
  SummonControl___c__DisplayClass271_0___ctor((SummonControl___c__DisplayClass271_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v3 + 24), v12) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass271_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v16, 0LL);
      return;
    }
LABEL_11:
    sub_1C22094(fsm, v5);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9494/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8C12 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9494/*"NO_EXIST"*/);
    byte_4BD8C12 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C22094(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9494/*"NO_EXIST"*/, 0LL);
  }
  else
  {
    SummonControl__checkEnhanceTresureDevice(this, method);
  }
}


void __fastcall SummonControl__checkEnhanceTresureDeviceSingle(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v14; // x8
  int32_t objectId; // w21
  Il2CppObject *v16; // x19
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4BD8C13 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl___c__DisplayClass270_0__checkEnhanceTresureDeviceSingle_b__0__);
    sub_1C21E38(&SummonControl___c__DisplayClass270_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9494/*"NO_EXIST"*/);
    byte_4BD8C13 = 1;
  }
  v3 = sub_1C22084(SummonControl___c__DisplayClass270_0_TypeInfo);
  SummonControl___c__DisplayClass270_0___ctor((SummonControl___c__DisplayClass270_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v3 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1C2209C(Instance, v5);
  v14 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v14 )
    goto LABEL_16;
  objectId = v14->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v3 + 24) = objectId;
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass270_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v16 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v16, 1, DEFAULT_FADE_TIME, v19, 0LL);
      return;
    }
LABEL_16:
    sub_1C22094(Instance, v5);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9494/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v6; // x8
  struct GachaRqParamData_o *v7; // x8
  __int64 *v8; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_4BD8BD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&StringLiteral_3513/*"CHECK_STONE"*/);
    sub_1C21E38(&StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/);
    sub_1C21E38(&StringLiteral_3510/*"CHECK_POINT"*/);
    sub_1C21E38(&StringLiteral_3096/*"BONUS_SELECT_CHECK_STONE"*/);
    byte_4BD8BD9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v6 = this->fields.gachaParamData;
    if ( !v6 )
      goto LABEL_25;
    if ( v6->fields.gachaType == 7 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3096/*"BONUS_SELECT_CHECK_STONE"*/, 0LL);
    }
  }
  v7 = this->fields.gachaParamData;
  if ( !v7 )
LABEL_25:
    sub_1C22094(Master_object, v4);
  switch ( v7->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v8 = &StringLiteral_3513/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v8 = &StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/;
      else
        v8 = (__int64 *)&StringLiteral_3510/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v8 = &StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)*v8, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4BD8C01 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_7096/*"GET_MULTI"*/);
    byte_4BD8C01 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1C22094(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_7096/*"GET_MULTI"*/, 0LL);
}


bool __fastcall SummonControl__checkIsMaxDrawNum(
        SummonControl_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o *drawGachaEnt,
        const MethodInfo *method)
{
  GachaMaster_o *gachaMst; // x0
  GachaEntity_o *drawGachaEnta; // [xsp+8h] [xbp-8h] BYREF

  drawGachaEnta = drawGachaEnt;
  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_1C22094(0LL, drawUsrGachaEnt);
  return GachaMaster__CheckIsMaxDrawNum(gachaMst, drawUsrGachaEnt, &drawGachaEnta, 0LL);
}


void __fastcall SummonControl__checkIsNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SummonControl_o *v3; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x2
  GachaInfos_o *v6; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4BD8C02 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9431/*"NEW_SVT"*/);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_7110/*"GO_BACK"*/);
    byte_4BD8C02 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1C2209C(this, method);
  v6 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v6 )
    goto LABEL_14;
  if ( v6->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v6->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9431/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C22094(this, method);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v7 = &StringLiteral_7110/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall SummonControl__checkIsNewSvtMulti(SummonControl_o *this, const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w9
  unsigned int v4; // w10
  GachaInfos_o *v5; // x11

  gachaResInfoList = this->fields.gachaResInfoList;
  this->fields.resType = 1;
  if ( !gachaResInfoList )
LABEL_13:
    sub_1C22094(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C2209C(this, method);
      v5 = gachaResInfoList->m_Items[v4];
      if ( !v5 )
        goto LABEL_13;
      if ( v5->fields.isNew && !v5->fields.sellMana && !v5->fields.sellQp )
        break;
      if ( (int)++v4 >= max_length )
        return;
    }
    this->fields.resType = 2;
  }
}


void __fastcall SummonControl__checkIsNewSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonControl_o *v3; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned int max_length; // w10
  __int64 getSvtIdx; // x9
  __int64 *v7; // x8
  GachaInfos_o *v8; // x8
  int32_t objectId; // w20
  System_String_o *v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v3 = this;
  if ( (byte_4BD8C0B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&StringLiteral_9813/*"OLD_SVT"*/);
    sub_1C21E38(&StringLiteral_6552/*"FINAL_SVT"*/);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_9431/*"NEW_SVT"*/);
    byte_4BD8C0B = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_22;
  max_length = gachaResInfoList->max_length;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (int)getSvtIdx > (int)(max_length - 1) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_6552/*"FINAL_SVT"*/;
LABEL_15:
      v10 = (System_String_o *)*v7;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1C2209C(this, method);
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_22;
  if ( !v8->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9813/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1C22094(this, method);
  }
  objectId = v8->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v10 = (System_String_o *)StringLiteral_9813/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v10, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9431/*"NEW_SVT"*/, 0LL);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_22;
  v11 = *(_QWORD *)&this->fields.m_CachedPtr;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v11 )
    goto LABEL_22;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      objectId,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v11 + 4 * m_CancellationTokenSource_low + 32) = objectId;
  }
}


bool __fastcall SummonControl__checkMaxDrawNum(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w20
  UserGachaEntity_o *UserGachaData; // x21
  const MethodInfo *v7; // x2
  GachaEntity_o *CurrentGachaData; // x0
  __int64 v9; // x1
  int maxDrawNum; // w8
  bool result; // w0

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    return 0;
  gachaId = gachaParamData->fields.gachaId;
  UserGachaData = SummonControl__getUserGachaData(this, gachaId, v2);
  CurrentGachaData = SummonControl__getCurrentGachaData(this, gachaId, v7);
  if ( !UserGachaData )
    return 0;
  if ( !CurrentGachaData )
    sub_1C22094(0LL, v9);
  maxDrawNum = CurrentGachaData->fields.maxDrawNum;
  if ( maxDrawNum < 1 || UserGachaData->fields.num < maxDrawNum )
    return 0;
  result = 1;
  this->fields.lastMaxDrawGachaId = gachaId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4BD8C0C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BD8C0C = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C22094(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v7 = size - 1;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v8,
               (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v7 == v8 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v8;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v6; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  int32_t v9; // w8
  CommonUI_o *v10; // x19

  if ( (byte_4BD8BAC & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_3576/*"CLEAR_TUTORIAL"*/);
    sub_1C21E38(&StringLiteral_11331/*"RETURN_TUTORIAL"*/);
    byte_4BD8BAC = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
    goto LABEL_52;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38930984(101, 0LL) )
  {
    this->fields.isDoneTutorial = 0;
    v9 = 1;
  }
  else
  {
LABEL_52:
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_38930984(101, 0LL) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_49;
        v6 = &StringLiteral_11331/*"RETURN_TUTORIAL"*/;
LABEL_41:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v6, 0LL);
        goto LABEL_45;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38930984(101, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38930984(107, 0LL) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v7);
      fsm = (PlayMakerFSM_o *)this->fields.summonInfoCtr;
      if ( !fsm )
        goto LABEL_49;
      SummonInfoControl__SetTutorialBtnEnable((SummonInfoControl_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.summonInfoCtr;
      if ( !fsm )
        goto LABEL_49;
      SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.titleInfo;
      if ( !fsm )
        goto LABEL_49;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)fsm, 1, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.indexPanel;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.leftArrowBtn;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.rightArrowBtn;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.summonHelpInfo;
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.detailInfo;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.summonListInfo;
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      this->fields.isResult = 0;
      SummonControl__showHelpImg(this, v8);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_49;
      v6 = &StringLiteral_3576/*"CLEAR_TUTORIAL"*/;
      goto LABEL_41;
    }
    v9 = 4;
  }
  this->fields.tutorialKind = v9;
  SummonControl__progTutorial(this, v3);
LABEL_45:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_49:
    sub_1C22094(fsm, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtKeep; // w21
  int32_t svtEquipKeep; // w24
  BalanceConfig_c *v7; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w20
  int v10; // w8
  int32_t v11; // w25
  int32_t v12; // w24
  int32_t v13; // w21
  int32_t Count; // w0
  int32_t v15; // w20
  SummonControl_o *v16; // x21
  BalanceConfig_c *v17; // x0
  int32_t v18; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v19; // x23
  int32_t v20; // w3
  CommonUI_o *v21; // x0
  int32_t v22; // w1
  struct UserGameEntity_o *v23; // x8
  int32_t v24; // w22
  int32_t v25; // w21
  SummonControl_o *v26; // x20
  int32_t v27; // w2
  struct UserGameEntity_o *v28; // x8
  int32_t v29; // w21
  SummonControl_o *v30; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BD8BD1 & 1) == 0 )
  {
    sub_1C21E38(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_1C21E38(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_1C21E38(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_1C21E38(&StringLiteral_6667/*"FRIEND_GACHA_ADD_LIMIT"*/);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_3511/*"CHECK_RESOURCE"*/);
    byte_4BD8BD1 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_40;
  if ( gachaParamData->fields.gachaType != 3 )
    goto LABEL_19;
  userGameEntity = v2->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_40;
  svtKeep = userGameEntity->fields.svtKeep;
  svtEquipKeep = userGameEntity->fields.svtEquipKeep;
  if ( !byte_4BD7514 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD7514 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v7->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6667/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_40;
  v10 = Value & ~(Value >> 31);
  v11 = v10 + CommandCodeFrameMax;
  v12 = v10 + svtEquipKeep;
  v13 = v10 + svtKeep;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0LL);
  v15 = Count;
  if ( Count < v11 && servantEquipSum[1] < v13 && servantEquipSum[0] < v12 )
  {
LABEL_19:
    this = (SummonControl_o *)v2->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3511/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_40:
    sub_1C22094(this, method);
  }
  if ( servantEquipSum[1] >= v13 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = v2->fields.userGameEntity;
    if ( !v23 )
      goto LABEL_40;
    v24 = v23->fields.svtKeep;
    v25 = servantEquipSum[1];
    v26 = this;
    v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C22084(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v26 )
      goto LABEL_40;
    v21 = (CommonUI_o *)v26;
    v22 = v25;
    v27 = v24;
    v20 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= v12 )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = v2->fields.userGameEntity;
      if ( !v28 )
        goto LABEL_40;
      v18 = v28->fields.svtEquipKeep;
      v29 = servantEquipSum[0];
      v30 = this;
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C22084(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v30 )
        goto LABEL_40;
      v20 = 1;
      v21 = (CommonUI_o *)v30;
      v22 = v29;
    }
    else
    {
      if ( Count < v11 )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v16 = this;
      if ( !byte_4BD7514 )
      {
        sub_1C21E38(&BalanceConfig_TypeInfo);
        byte_4BD7514 = 1;
      }
      v17 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      v18 = v17->static_fields->CommandCodeFrameMax;
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C22084(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v16 )
        goto LABEL_40;
      v20 = 2;
      v21 = (CommonUI_o *)v16;
      v22 = v15;
    }
    v27 = v18;
  }
  CommonUI__OpenSvtFrameShortDlg(v21, v22, v27, v20, 0, v19, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t v8; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( (byte_4BD8BDA & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SummonControl_closeShotPointDlg__);
    sub_1C21E38(&StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/);
    byte_4BD8BDA = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C73D14(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C73D14(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TblUserMaster___);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_17;
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = TblUserMaster__getUserData(
                        (TblUserMaster_o *)MasterData_object,
                        userGameEntity->fields.userId,
                        0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  v8 = *((_DWORD *)MasterData_object + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v8;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v8 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_closeShotPointDlg__,
      v13);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v8, v12, v14);
      return;
    }
LABEL_17:
    sub_1C22094(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/, 0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  int32_t haveStoneNum; // w20
  int32_t gachaType; // w10
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w20
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x24
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x5
  struct GachaRqParamData_o *v15; // x8
  int v16; // w8
  SummonConfirmDlgComponent_o *v17; // x20
  int32_t v18; // w21
  int32_t v19; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v20; // x23
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4

  v2 = this;
  if ( (byte_4BD8BDC & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&Method_SummonControl_closeShotStoneDlg__);
    this = (SummonControl_o *)sub_1C21E38(&StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/);
    byte_4BD8BDC = 1;
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_17;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  gachaType = gachaParamData->fields.gachaType;
  v2->fields.haveStone = haveStoneNum;
  v2->fields.haveFreeStone = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  v2->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  if ( gachaType == 7 )
  {
    gachaResourceNum = gachaParamData->fields.gachaResourceNum;
    v2->fields.needStone = gachaResourceNum;
    if ( HaveChargeStoneNum_k__BackingField < gachaResourceNum )
    {
      confirmDlgInfo = v2->fields.confirmDlgInfo;
      haveChargeStone = v2->fields.haveChargeStone;
      haveFreeStone = v2->fields.haveFreeStone;
      v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v13);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          haveChargeStone,
          haveFreeStone,
          v12,
          v14);
        return;
      }
LABEL_17:
      sub_1C22094(this, method);
    }
  }
  else
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = (SummonControl_o *)System_Math__Max_63934620(haveStoneNum, HaveChargeStoneNum_k__BackingField, 0LL);
    v15 = v2->fields.gachaParamData;
    if ( !v15 )
      goto LABEL_17;
    v16 = v15->fields.gachaResourceNum;
    v2->fields.needStone = v16;
    if ( (int)this < v16 )
    {
      SummonControl__SetupFragmentsExchangeButton(v2, method);
      v17 = v2->fields.confirmDlgInfo;
      v18 = v2->fields.haveFreeStone;
      v19 = v2->fields.haveChargeStone;
      v20 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v21);
      if ( !v17 )
        goto LABEL_17;
      SummonConfirmDlgComponent__OpenShortStone(v17, v18, v19, v20, v22);
      return;
    }
  }
  this = (SummonControl_o *)v2->fields.fsm;
  if ( !this )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12371/*"SHOW_CONFIRM_DLG"*/, 0LL);
}


void __fastcall SummonControl__clearBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int v4; // w21
  int32_t childCount; // w20
  int v6; // w23
  UnityEngine_Object_o *gameObject; // x21
  int v8; // w21
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4BD8BCF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8BCF = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)bannerLoopCtr,
                                               0LL);
  if ( !this->fields.sliderGrid )
    goto LABEL_33;
  v4 = (int)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid,
                                               0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( v4 >= 1 )
  {
    v6 = v4 + 1;
    while ( 1 )
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v6 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_33:
    sub_1C22094(bannerLoopCtr, method);
  }
LABEL_15:
  if ( childCount >= 1 )
  {
    v8 = childCount + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !bannerLoopCtr )
        goto LABEL_33;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v8 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v9, 0LL);
    }
    while ( --v8 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  v10 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v10,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v11, 0LL);
      if ( --v10 < 0 )
        return;
    }
    goto LABEL_33;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BD8C0F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD8C0F = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL) )
  {
    sub_1C22094(summonResultInfo, method);
  }
  SummonResultComponent__SetActive(summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall SummonControl__closeShotCommandCodeFrameDlg(
        SummonControl_o *this,
        int32_t res,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20

  if ( (byte_4BD8BD4 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BD4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  v7 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918344(v10, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 2, 0LL);
      if ( v9 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, 22, 1, (Il2CppObject *)v10, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C22094(Instance, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4BD8BDB & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_closeShotPointDlg__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BDB = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method);
  v5 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotPointDlg__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1C22094(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4BD8BDD & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_closeShotStoneDlg__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    sub_1C21E38(&StringLiteral_7112/*"GO_BUY_STONE"*/);
    byte_4BD8BDD = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v6 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v8 = &StringLiteral_3583/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C22094(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v8 = &StringLiteral_7112/*"GO_BUY_STONE"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v8, 0LL);
}


void __fastcall SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20
  int32_t v11; // w1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_4BD8BD3 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_1C21E38(&StringLiteral_12874/*"ServantEquipList"*/);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    sub_1C21E38(&StringLiteral_12873/*"ServantEQCombine"*/);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BD3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v12 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39918344(v10, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 1, 0LL);
        if ( v9 )
        {
          v11 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1C22094(Instance, v6);
    case 1:
      v14 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39918256(v10, (System_String_o *)StringLiteral_12874/*"ServantEquipList"*/, 0LL);
        if ( v9 )
        {
          v11 = 71;
          goto LABEL_22;
        }
      }
      goto LABEL_27;
    case 0:
      v7 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39918256(v10, (System_String_o *)StringLiteral_12873/*"ServantEQCombine"*/, 0LL);
        if ( v9 )
        {
          v11 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, (Il2CppObject *)v10, 0LL);
          return;
        }
      }
      goto LABEL_27;
  }
  v16 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20
  int32_t v11; // w1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_4BD8BD2 & 1) == 0 )
  {
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    sub_1C21E38(&StringLiteral_12870/*"ServantCombine"*/);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BD2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v12 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtFrameDlg__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39918344(v10, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 0, 0LL);
        if ( v9 )
        {
          v11 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1C22094(Instance, v6);
    case 1:
      v15 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtFrameDlg__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v11 = 71;
          v14 = 0LL;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    case 0:
      v7 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtFrameDlg__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39918256(v10, (System_String_o *)StringLiteral_12870/*"ServantCombine"*/, 0LL);
        if ( v9 )
        {
          v11 = 32;
LABEL_17:
          Instance = (CommonUI_o *)v9;
          v14 = (Il2CppObject *)v10;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v11, 1, v14, 0LL);
          return;
        }
      }
      goto LABEL_28;
  }
  v17 = Method_SummonControl_closeShotSvtFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C21E50(Method_SummonControl_closeShotSvtFrameDlg__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonCautionDlgComponent_o *cautionDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v12; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v15; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v16; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v17; // x24

  if ( (byte_4BD8BF5 & 1) == 0 )
  {
    sub_1C21E38(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C21E38(&Method_SummonControl_SetDispBtn__);
    sub_1C21E38(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C21E38(&Method_SummonControl_confirmCautionResult__);
    sub_1C21E38(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BF5 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C21E50(Method_SummonControl_confirmCautionResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( cautionDlgInfo )
        {
          if ( GachaEntity__HasFlag((GachaEntity_o *)cautionDlgInfo, 8, 0LL) )
          {
            cautionDlgInfo = (SummonCautionDlgComponent_o *)this->fields.bonusSelectSummonConfirmDialog;
            if ( cautionDlgInfo )
            {
              BonusSelectSummonConfirmDialog__Init(
                (BonusSelectSummonConfirmDialog_o *)cautionDlgInfo,
                this->fields.bonusSelectAssetManager,
                0LL);
              v12 = this->fields.gachaParamData;
              if ( v12 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v12->fields.gachaId;
                v15 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v15,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v16 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C22084(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v16,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v17 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v17,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v15, v16, v17, 0LL, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            cautionDlgInfo = (SummonCautionDlgComponent_o *)this->fields.fsm;
            if ( cautionDlgInfo )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C22094(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v6 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SummonControl_confirmCautionResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
  SummonControl__loadAssetsForSummon(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4BD8BF4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_confirmResult__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BF4 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C21E50(Method_SummonControl_confirmResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1C22094(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v6 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SummonControl_confirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
  SummonControl__loadAssetsForSummon(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **v2; // x24
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x19
  UnityEngine_GameObject_o *noneGachaInfo; // x0
  Il2CppObject *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct UICenterOnChild_o *v38; // x21
  PartyOrganizationUtility_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v41; // x22
  System_Delegate_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x8
  SpringPanel_OnFinished_c *v50; // x1
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v53; // x22
  System_Delegate_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UIScrollView_OnDragNotification_c *v61; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  float v64; // s0
  UnityEngine_Component_o *v65; // x20
  float v66; // s2
  float v67; // s8
  float v68; // s0
  int v69; // w8
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  Il2CppObject *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  Il2CppObject *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct UICenterOnChild_o *v87; // x21
  System_Delegate_o *v88; // t1
  SpringPanel_OnFinished_o *v89; // x22
  System_Delegate_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  SpringPanel_OnFinished_c *v97; // x1
  struct UIScrollView_o *summonMBannerScrollView; // x21
  System_Delegate_o *v99; // t1
  UIScrollView_OnDragNotification_o *v100; // x22
  System_Delegate_o *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  UIScrollView_OnDragNotification_c *v108; // x1
  int32_t v109; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v112; // x27
  UnityEngine_Transform_o *v113; // x20
  UnityEngine_Transform_o *v114; // x21
  int v115; // s0
  int v118; // w25
  System_String_o *v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  System_Collections_Generic_List_object__o *v126; // x8
  struct System_Object_array *items; // x9
  _QWORD *v128; // x10
  __int64 size; // x11
  GachaBannerComponent_o *v130; // x29
  Il2CppClass **v131; // x0
  int v132; // w8
  int v133; // w9
  int32_t v134; // w26
  System_String_o *v135; // x0
  System_String_o *v136; // x21
  const MethodInfo *v137; // x2
  UnityEngine_Object_o *v138; // x22
  Il2CppObject *Item; // x20
  System_String_o *v140; // x5
  VaildGachaInfo_o *v141; // x19
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x29
  UnityEngine_Transform_o *v145; // x20
  UnityEngine_Transform_o *v146; // x21
  int v147; // s0
  System_String_o *name; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  System_Collections_Generic_List_object__o *v157; // x8
  struct System_Object_array *v158; // x9
  _QWORD *v159; // x10
  __int64 v160; // x11
  SummonMiniBannerComponent_o *v161; // x27
  Il2CppClass **v162; // x0
  System_String_o *v163; // x0
  System_String_o *v164; // x21
  const MethodInfo *v165; // x2
  UnityEngine_Object_o *v166; // x29
  const MethodInfo *v167; // x2
  Il2CppObject *Component_object; // x22
  SummonMiniBannerComponent_CallbackFunc_o *v169; // x20
  float v170; // s8
  int v171; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v173; // x0
  UnityEngine_Transform_o *v174; // x20
  const MethodInfo *v175; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v177; // x21
  SummonInfoControl_ClickDelegate_o *v178; // x22
  const MethodInfo *v179; // x2
  const MethodInfo *v180; // x1
  int v181; // [xsp+Ch] [xbp-94h]
  int v182; // [xsp+10h] [xbp-90h]
  unsigned int v183; // [xsp+14h] [xbp-8Ch]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+20h] [xbp-80h]
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // [xsp+28h] [xbp-78h]
  int v187; // [xsp+38h] [xbp-68h]
  int v188; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v189; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (UnityEngine_Component_o **)&byte_4BD8000;
  if ( (byte_4BD8BBD & 1) == 0 )
  {
    sub_1C21E38(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C21E38(&SpringPanel_OnFinished_TypeInfo);
    sub_1C21E38(&Method_SummonControl_OnCenterOnChildFinishedMBanner__);
    sub_1C21E38(&Method_SummonControl_OnCenterOnChildFinished__);
    sub_1C21E38(&Method_SummonControl_OnClickMiniBanner__);
    sub_1C21E38(&Method_SummonControl_OnDragStarted__);
    sub_1C21E38(&Method_SummonControl_exeSummon__);
    sub_1C21E38(&StringLiteral_5096/*"D5"*/);
    sub_1C21E38(&StringLiteral_20843/*"img_summon_"*/);
    sub_1C21E38(&StringLiteral_20845/*"img_summon_mini_236"*/);
    sub_1C21E38(&StringLiteral_20844/*"img_summon_mini_"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8BBD = 1;
  }
  v188 = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v4;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bannerInfoList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v11;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.summonMBannerInfoList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !this->fields.vaildGachaList )
  {
    noneGachaInfo = this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_126;
    UnityEngine_GameObject__SetActive(noneGachaInfo, 1, 0LL);
    return;
  }
  bannerLoopCtr = (UnityEngine_Object_o *)this->fields.bannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.summonBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_126;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v22 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.bannerLoopCtr, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  }
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( ((unsigned __int8)noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
    if ( !*p_bannerLoopCtr )
      goto LABEL_126;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v31 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v31;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.centerChild, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  }
  v38 = *p_centerChild;
  if ( !v38 )
    goto LABEL_126;
  onFinished = (System_Delegate_o *)v38->fields.onFinished;
  p_onFinished = (PartyOrganizationUtility_o *)&v38->fields.onFinished;
  v41 = (SpringPanel_OnFinished_o *)sub_1C22084(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v41, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
  v42 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v41, 0LL);
  v49 = (int64_t)v42;
  if ( v42 )
  {
    v50 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v42->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v42;
    if ( (SpringPanel_OnFinished_c *)v42->klass != v50 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1C21DDC(p_onFinished, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_126;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (PartyOrganizationUtility_o *)&summonBannerScrollView->fields.onDragStarted;
  v53 = (UIScrollView_OnDragNotification_o *)sub_1C22084(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v53, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v54 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v53, 0LL);
  v49 = (int64_t)v54;
  if ( v54 )
  {
    v61 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v54->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v54;
    if ( (UIScrollView_OnDragNotification_c *)v54->klass != v61 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1C21DDC(p_onFinished, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_126;
  LODWORD(v2) = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0LL);
  v64 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v65 = *p_bannerLoopCtr;
  v66 = (float)((float)(fminf(v64, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v64 < 1.7778 )
    v67 = 1028.0;
  else
    v67 = v66;
  if ( !byte_4BD6BB0 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB0 = 1;
  }
  noneGachaInfo = (UnityEngine_GameObject_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v65 )
    goto LABEL_126;
  v68 = floorf(v67);
  if ( v68 == INFINITY )
    v69 = 0x80000000;
  else
    v69 = (int)v68;
  LODWORD(v65[1].monitor) = v69;
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_126;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v71 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v71;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.summonMBannerLoopCtr,
      (int64_t)v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  p_summonMBannerLoopCtr = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
  summonMBannerCenterChild = (UnityEngine_Object_o *)this->fields.summonMBannerCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonMBannerCenterChild = &this->fields.summonMBannerCenterChild;
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(summonMBannerCenterChild, 0LL, 0LL);
  if ( ((unsigned __int8)noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)*p_summonMBannerLoopCtr;
    if ( !*p_summonMBannerLoopCtr )
      goto LABEL_126;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v80 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v80;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.summonMBannerCenterChild,
      (int64_t)v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  v87 = *p_summonMBannerCenterChild;
  if ( !v87 )
    goto LABEL_126;
  v88 = (System_Delegate_o *)v87->fields.onFinished;
  p_onFinished = (PartyOrganizationUtility_o *)&v87->fields.onFinished;
  v89 = (SpringPanel_OnFinished_o *)sub_1C22084(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v89, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
  v90 = System_Delegate__Combine(v88, (System_Delegate_o *)v89, 0LL);
  v49 = (int64_t)v90;
  if ( v90 )
  {
    v97 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v90->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v90;
    if ( (SpringPanel_OnFinished_c *)v90->klass != v97 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1C21DDC(p_onFinished, (int64_t)v90, v91, v92, v93, v94, v95, v96);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_126;
  v99 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (PartyOrganizationUtility_o *)&summonMBannerScrollView->fields.onDragStarted;
  v100 = (UIScrollView_OnDragNotification_o *)sub_1C22084(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v100, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v101 = System_Delegate__Combine(v99, (System_Delegate_o *)v100, 0LL);
  v49 = (int64_t)v101;
  if ( !v101 )
    goto LABEL_65;
  v108 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v101->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (PartyOrganizationUtility_c *)v101;
    if ( (UIScrollView_OnDragNotification_c *)v101->klass == v108 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1C22354(v49);
LABEL_65:
  p_onFinished->klass = (PartyOrganizationUtility_c *)v49;
LABEL_66:
  sub_1C21DDC(p_onFinished, v49, v102, v103, v104, v105, v106, v107);
  v187 = 2 * (_DWORD)v2;
  if ( 2 * (int)v2 >= 1 )
  {
    v109 = 0;
    v182 = (_DWORD)v2 - 1;
    v183 = (unsigned int)v2 & 0x80000000;
    v181 = (int)v2;
    while ( 1 )
    {
      noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        break;
      summonBannerPrefab = this->fields.summonBannerPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = BaseMonoBehaviour__createObject(
                        (BaseMonoBehaviour_o *)this,
                        summonBannerPrefab,
                        transform,
                        0LL,
                        0LL);
      if ( !noneGachaInfo )
        break;
      v112 = noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0LL);
      v113 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4BD6BB6 )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v113 )
        break;
      UnityEngine_Transform__set_localScale(v113, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v112, 0LL);
      if ( !*p_bannerLoopCtr )
        break;
      v114 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v115 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v114 )
        break;
      UnityEngine_Transform__set_localPosition(v114, *(UnityEngine_Vector3_o *)&v115, 0LL);
      v118 = v109 + 1;
      v188 = v109 + 1;
      v119 = System_Int32__ToString_63921084((int32_t)&v188, (System_String_o *)StringLiteral_5096/*"D5"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v112, v119, 0LL);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v112,
                                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v126 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v126->fields._items;
      v128 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v126->fields._version;
      if ( !items )
        break;
      size = v126->fields._size;
      v130 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v126,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
      }
      else
      {
        v131 = &items->obj.klass + size;
        v126->fields._size = size + 1;
        v131[4] = (Il2CppClass *)v130;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v131 + 4), (int64_t)v130, v120, v121, v122, v123, v124, v125);
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
      v132 = v109 | v183;
      v133 = (int)(v109 | v183) <= v182 ? 0 : (int)v2;
      if ( !noneGachaInfo )
        break;
      v134 = v132 - v133;
      noneGachaInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                                    v132 - v133,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v2 = p_bannerLoopCtr;
      v135 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v136 = System_String__Concat_63115476((System_String_o *)StringLiteral_20843/*"img_summon_"*/, v135, 0LL);
      noneGachaInfo = SummonControl__searchBannerImg(this, v136, v137);
      if ( !this->fields.vaildGachaList )
        break;
      v138 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
               v134,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v138, 0LL, 0LL);
      if ( !v130 )
        break;
      v140 = ((unsigned __int8)noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v136;
      v141 = (VaildGachaInfo_o *)Item;
      GachaBannerComponent__setBannerGachaInfo(
        v130,
        (VaildGachaInfo_o *)Item,
        v134,
        v109,
        (UnityEngine_GameObject_o *)v138,
        v140,
        0LL);
      noneGachaInfo = (UnityEngine_GameObject_o *)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v143 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, summonMBannerPrefab, v143, 0LL, 0LL);
      if ( !noneGachaInfo )
        break;
      v144 = noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0LL);
      v145 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4BD6BB6 )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v145 )
        break;
      UnityEngine_Transform__set_localScale(v145, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v144, 0LL);
      if ( !*p_summonMBannerLoopCtr )
        break;
      v146 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(*p_summonMBannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v147 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v146 )
        break;
      UnityEngine_Transform__set_localPosition(v146, *(UnityEngine_Vector3_o *)&v147, 0LL);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v112, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v144, name, 0LL);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v144,
                                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v157 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v158 = v157->fields._items;
      v159 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v157->fields._version;
      if ( !v158 )
        break;
      v160 = v157->fields._size;
      v161 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v160 >= v158->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v157,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
      }
      else
      {
        v162 = &v158->obj.klass + v160;
        v157->fields._size = v160 + 1;
        v162[4] = (Il2CppClass *)v161;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v162 + 4), (int64_t)v161, v151, v152, v153, v154, v155, v156);
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                                    v134,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v163 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v164 = System_String__Concat_63115476((System_String_o *)StringLiteral_20844/*"img_summon_mini_"*/, v163, 0LL);
      v166 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v164, v165);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v166, 0LL, 0LL) )
      {
        v164 = (System_String_o *)StringLiteral_20845/*"img_summon_mini_236"*/;
        v166 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20845/*"img_summon_mini_236"*/,
                                         v167);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v166, 0LL, 0LL) )
          v164 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v169 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1C22084(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v169,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0LL);
      if ( !v161 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v161,
        v141,
        v134,
        v109,
        (UnityEngine_GameObject_o *)v166,
        v164,
        v169,
        (UIPanel_o *)Component_object,
        0LL);
      p_bannerLoopCtr = v2;
      LODWORD(v2) = v181;
      ++v109;
      if ( v187 == v118 )
        goto LABEL_118;
    }
LABEL_126:
    sub_1C22094(noneGachaInfo, v18);
  }
LABEL_118:
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_126;
  v170 = fminf(640.0 / (float)(int)v2, 25.0);
  v171 = (_DWORD)v2 - 1;
  *(float *)&noneGachaInfo[2].klass = v170;
  if ( (int)v2 >= 1 )
  {
    do
    {
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v173 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slideIndexPrefab, v173, 0LL, 0LL);
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0LL);
      v174 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4BD6BB6 )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v174 )
        break;
      UnityEngine_Transform__set_localScale(v174, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      LODWORD(v2) = (_DWORD)v2 - 1;
      if ( !(_DWORD)v2 )
        goto LABEL_127;
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
    }
    while ( noneGachaInfo );
    goto LABEL_126;
  }
LABEL_127:
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_126;
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)noneGachaInfo,
                                                0LL);
  if ( !noneGachaInfo )
    goto LABEL_126;
  v189.fields.z = this->fields.center.fields.z;
  v189.fields.y = this->fields.center.fields.y;
  v189.fields.x = (float)(v170 * -0.5) * (float)v171;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noneGachaInfo, v189, 0LL);
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_126;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0LL);
  SummonControl__UpdateSummonInfoControlLayout(this, v175);
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_126;
  summonInfoCtr = this->fields.summonInfoCtr;
  v177 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v178 = (SummonInfoControl_ClickDelegate_o *)sub_1C22084(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v178, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr )
    goto LABEL_126;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v177, v178, 0LL);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v179);
  SummonControl__setResourceInfo(this, v180);
}


void __fastcall SummonControl__deleteBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t childCount; // w0
  int v5; // w21
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w0
  int v8; // w21
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4BD8C1A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8C1A = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v5 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_33:
    sub_1C22094(bannerLoopCtr, method);
  }
LABEL_13:
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( v7 >= 1 )
  {
    v8 = v7 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !bannerLoopCtr )
        goto LABEL_33;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v8 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(v9, 0LL);
    }
    while ( --v8 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  v10 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v10 >= 0 )
  {
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !bannerLoopCtr )
        goto LABEL_33;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v10,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(v11, 0LL);
    }
    while ( --v10 >= 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0LL;
}


void __fastcall SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_4BD8BDF & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_10700/*"PURCHASE_ERROR"*/);
    sub_1C21E38(&StringLiteral_10699/*"PURCHASE_CANCEL"*/);
    sub_1C21E38(&StringLiteral_10701/*"PURCHASE_OK"*/);
    byte_4BD8BDF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C22094(Instance, v6);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10699/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10700/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10701/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0LL);
}


void __fastcall SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_4BD8BD8 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_10700/*"PURCHASE_ERROR"*/);
    sub_1C21E38(&StringLiteral_10699/*"PURCHASE_CANCEL"*/);
    sub_1C21E38(&StringLiteral_10701/*"PURCHASE_OK"*/);
    byte_4BD8BD8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10699/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C22094(Instance, v6);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10700/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10701/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__endPurchaseSvtFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_4BD8BD6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_10700/*"PURCHASE_ERROR"*/);
    sub_1C21E38(&StringLiteral_10699/*"PURCHASE_CANCEL"*/);
    sub_1C21E38(&StringLiteral_10701/*"PURCHASE_OK"*/);
    byte_4BD8BD6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10699/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C22094(Instance, v6);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10700/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10701/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  SummonControl___c_c *v5; // x8
  float x; // s9
  float y; // s12
  float m_XMin; // s8
  float m_YMin; // s13
  float m_Height; // s10
  float m_Width; // s11
  CommonUI_o *v12; // x20
  System_Action_o *_9__152_0; // x21
  Il2CppObject *v14; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x20
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v24; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4BD8BB0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__exeFormation_b__152_1__);
    sub_1C21E38(&Method_SummonControl___c__exeFormation_b__152_0__);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8BB0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = SummonControl___c_TypeInfo;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  v12 = (CommonUI_o *)Instance;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v5 = SummonControl___c_TypeInfo;
  }
  _9__152_0 = v5->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonControl___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v5->static_fields->__9;
    _9__152_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__152_0, v14, Method_SummonControl___c__exeFormation_b__152_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__152_0,
      (int64_t)_9__152_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v12 )
    sub_1C22094(Instance, v4);
  v24.fields.m_YMin = m_YMin + 33.0;
  v23.fields.y = y + 33.0;
  v23.fields.x = x;
  v24.fields.m_XMin = m_XMin;
  v24.fields.m_Width = m_Width;
  v24.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v12, v23, 0.0, v24, _9__152_0, 0LL);
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__152_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v22, 0LL);
}


void __fastcall SummonControl__exeSummon(
        SummonControl_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v12; // x1
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_4BD8BD0 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3512/*"CHECK_SERVANT_FRAME"*/);
    byte_4BD8BD0 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.gachaParamData, (int64_t)paramData, v5, v6, v7, v8, v9, v10);
  if ( this->fields.tutorialKind == 1 )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    if ( !confirmDlgInfo
      || (closeBtn = (UnityEngine_GameObject_o *)confirmDlgInfo->fields.closeBtn) == 0LL
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))closeBtn->klass[1]._1.namespaze)(
            closeBtn,
            0LL,
            closeBtn->klass[1]._1.byval_arg.data),
          (closeBtn = this->fields.tutorialArrowObj) == 0LL) )
    {
LABEL_10:
      sub_1C22094(closeBtn, v12);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3512/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v5; // x21
  CombineResultEffectComponent_ClickDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BD8C15 & 1) == 0 )
  {
    sub_1C21E38(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__executeEnhanceTresureDevice_b__272_0__);
    byte_4BD8C15 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C22084(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__272_0__,
    0LL);
  if ( !v5 )
    sub_1C22094(v7, v8);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v5, npEnhanceSvtId, v6, 0LL);
}


void __fastcall SummonControl__fadeOut(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__friendPointQpManaCheck(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( !SummonControl__CheckQpManaOverCheck(this, method) && !SummonControl__CheckFriendPointSummonUpdate(this, v3) )
  {
    MainMenuBar__setMenuActive(0, 0LL, 0LL);
    SummonControl__loadAssetsForSummon(this, v4);
  }
}


void __fastcall SummonControl__friendPointSummonConfirm(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct SummonInfoControl_o *summonInfoCtr; // x8
  _BOOL4 isFree; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x4
  struct GachaRqParamData_o *gachaParamData; // x8
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct GachaRqParamData_o *v13; // x8
  Il2CppObject *gachaSubEntity; // x20
  System_String_o *SummonConfirmMessage; // x21
  struct GachaRqParamData_o *v16; // x8
  int32_t friendPoint; // w22
  SummonConfirmDlgComponent_o *v18; // x25
  int32_t gachaTime; // w23
  int32_t gachaResourceNum; // w28
  int32_t needPoint; // w24
  SummonConfirmDlgComponent_CallbackFunc_o *v22; // x26
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x27
  const MethodInfo *v25; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+30h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4BD8BF0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
    sub_1C21E38(&Method_SummonControl_autoSellSettingChange2__);
    this = (SummonControl_o *)sub_1C21E38(&Method_SummonControl_friendSummonConfirmResult__);
    byte_4BD8BF0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_22;
  isFree = summonInfoCtr->fields.isFree;
  v2->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v2->fields.confirmDlgInfo;
    v6 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v7);
    v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
    gachaParamData = v2->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v6, v8, gachaParamData->fields.gachaId, v9);
      return;
    }
LABEL_22:
    sub_1C22094(this, method);
  }
  this = (SummonControl_o *)v2->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v11 )
      break;
    v13 = v2->fields.gachaParamData;
    if ( !v13 )
      sub_1C22094(v11, v12);
    gachaSubEntity = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C22094(v11, v12);
    if ( v13->fields.gachaId == LODWORD(v27.fields._current[1].klass) )
    {
      SummonConfirmMessage = GachaSubEntity__GetSummonConfirmMessage((GachaSubEntity_o *)v27.fields._current, 0LL);
      goto LABEL_16;
    }
  }
  gachaSubEntity = 0LL;
  SummonConfirmMessage = 0LL;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v16 = v2->fields.gachaParamData;
  if ( !v16 )
    goto LABEL_22;
  friendPoint = v2->fields.friendPoint;
  v18 = v2->fields.confirmDlgInfo;
  gachaTime = v16->fields.gachaTime;
  gachaResourceNum = v16->fields.gachaResourceNum;
  needPoint = v2->fields.needPoint;
  v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v23);
  v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v18 )
    goto LABEL_22;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v18,
    friendPoint,
    gachaTime,
    needPoint,
    friendPoint - gachaResourceNum,
    v22,
    v24,
    SummonConfirmMessage,
    (GachaSubEntity_o *)gachaSubEntity,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BD8BF1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_friendSummonConfirmResult__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8BF1 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close_34129316(confirmDlgInfo, 0LL, method);
  v6 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SummonControl_friendSummonConfirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
    SummonControl__friendPointQpManaCheck(this, v8);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_10:
    sub_1C22094(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_4BD8BBB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4BD8BBB = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1C22094(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  int32_t v4; // w20

  if ( (byte_4BD8C18 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_4BD8C18 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_9:
    sub_1C22094(vaildGachaList, method);
  v4 = 0;
  while ( v4 < vaildGachaList->fields._size )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    vaildGachaList,
                                                                    v4,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_9;
    if ( HIDWORD(vaildGachaList[1].monitor) == 3 )
      return v4;
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
    ++v4;
    if ( !vaildGachaList )
      goto LABEL_9;
  }
  return 0;
}


UserGachaEntity_o *__fastcall SummonControl__getUserGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8BBA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8BBA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C22094(Instance, v5);
  UserGachaMaster__TryGetEntity(
    (UserGachaMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    gachaId,
    0LL);
  return entity;
}


int32_t __fastcall SummonControl__get_CurrentMoveIdx(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.currentMoveIdx;
}


GachaRqParamData_o *__fastcall SummonControl__get_GetNowGachaParamData(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.gachaParamData;
}


bool __fastcall SummonControl__get_IsResult(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.isResult;
}


ShopEntity_o *__fastcall SummonControl__get_StoneFragmentsShopEntity(SummonControl_o *this, const MethodInfo *method)
{
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  PartyOrganizationUtility_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BD8BAB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD8BAB = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1C22094(0LL, v5);
    p_stoneFragmentsShopEntity = (PartyOrganizationUtility_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0LL);
    p_stoneFragmentsShopEntity->klass = (PartyOrganizationUtility_c *)EntityOfFragmentsShop;
    sub_1C21DDC(p_stoneFragmentsShopEntity, (int64_t)EntityOfFragmentsShop, v8, v9, v10, v11, v12, v13);
    return (ShopEntity_o *)p_stoneFragmentsShopEntity->klass;
  }
  return result;
}


UnityEngine_Vector2_o __fastcall SummonControl__get_TUTORIAL_FORMATION_ARROW_POS_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float v3; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  v3 = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y + 33.0;
  result.fields.y = v3;
  result.fields.x = x;
  return result;
}


UnityEngine_Rect_o __fastcall SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s0
  float m_Width; // s2
  float m_Height; // s3
  float v5; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  v5 = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin + 33.0;
  result.fields.m_Height = m_Height;
  result.fields.m_Width = m_Width;
  result.fields.m_YMin = v5;
  result.fields.m_XMin = m_XMin;
  return result;
}


UnityEngine_Vector2_o __fastcall SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BD8BAA & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD8BAA = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Rect_o __fastcall SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s8
  float m_Height; // s11
  float v6; // s0
  float v7; // s1
  float v8; // s3
  float v9; // s2
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v6 = m_XMin + SummonControl__FSMenuOffsetX(this, method);
  v7 = m_YMin + 33.0;
  v8 = m_Height + 33.0;
  v9 = m_Width;
  result.fields.m_Height = v8;
  result.fields.m_Width = v9;
  result.fields.m_YMin = v7;
  result.fields.m_XMin = v6;
  return result;
}


void __fastcall SummonControl__incereIdx(SummonControl_o *this, const MethodInfo *method)
{
  ++this->fields.getSvtIdx;
}


bool __fastcall SummonControl__isEnhanceTresureDevice(SummonControl_o *this, int32_t *svtId, const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  ServantFlagReleaseMaster_o *v7; // x21
  il2cpp_array_size_t v8; // w25
  bool v9; // w24
  struct GachaInfos_array *v10; // x8
  GachaInfos_o *v11; // x8
  int32_t objectId; // w22
  bool result; // w0

  v4 = this;
  if ( (byte_4BD8C11 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    this = (SummonControl_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8C11 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length >= 1 )
  {
    v7 = (ServantFlagReleaseMaster_o *)this;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = v4->fields.gachaResInfoList;
      if ( !v10 )
        break;
      if ( v8 >= v10->max_length )
        sub_1C2209C(this, svtId);
      v11 = v10->m_Items[v8];
      if ( !v11 || !v7 )
        break;
      objectId = v11->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v7, objectId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_16;
      v9 = (int)++v8 < max_length;
      if ( max_length == v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C22094(this, svtId);
  }
  v9 = 0;
LABEL_15:
  objectId = 0;
LABEL_16:
  result = v9;
  *svtId = objectId;
  return result;
}


bool __fastcall SummonControl__isMultipleCheck(
        SummonControl_o *this,
        int32_t svtId,
        int32_t max,
        const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x8
  il2cpp_array_size_t v5; // w9
  bool v6; // w11
  GachaInfos_o *v7; // x12

  if ( max >= 1 )
  {
    gachaResInfoList = this->fields.gachaResInfoList;
    if ( gachaResInfoList )
    {
      v5 = 0;
      v6 = 1;
      while ( 1 )
      {
        if ( v5 >= gachaResInfoList->max_length )
          sub_1C2209C(this, svtId);
        v7 = gachaResInfoList->m_Items[v5];
        if ( !v7 )
          break;
        if ( v7->fields.objectId != svtId )
        {
          v6 = (int)++v5 < max;
          if ( max != v5 )
            continue;
        }
        return v6;
      }
    }
    sub_1C22094(this, svtId);
  }
  return 0;
}


bool __fastcall SummonControl__isSvtEqSummonResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  il2cpp_array_size_t v6; // w22
  bool v7; // w24
  struct GachaInfos_array *v8; // x8
  GachaInfos_o *v9; // x25

  v2 = this;
  if ( (byte_4BD8C05 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (SummonControl_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8C05 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length >= 1 )
  {
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      v8 = v2->fields.gachaResInfoList;
      if ( !v8 )
        break;
      if ( v6 >= v8->max_length )
        sub_1C2209C(this, method);
      v9 = v8->m_Items[v6];
      if ( !v9 || !v5 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v5,
                                  v9->fields.objectId,
                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !this
        || (this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL),
            ((unsigned __int8)this & 1) == 0)
        || !v9->fields.isNew )
      {
        v7 = (int)++v6 < max_length;
        if ( max_length != v6 )
          continue;
      }
      return v7;
    }
LABEL_18:
    sub_1C22094(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4BD8C25 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8C25 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1C22094(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  void *limitWarningDlgInfo; // x0
  _DWORD *v6; // x20
  int32_t v7; // w20
  BalanceConfig_c *v8; // x0
  const MethodInfo *v9; // x1
  SummonLimitWarningDlgComponent_o *v10; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v11; // x21
  System_Action_o *v12; // x22

  if ( (byte_4BD8C24 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_limitManaConfirmResult__);
    sub_1C21E38(&Method_SummonControl_showConfirmDlg__);
    sub_1C21E38(&StringLiteral_3583/*"CLICK_CANCEL"*/);
    byte_4BD8C24 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_21;
  SummonLimitWarningDlgComponent__Close((SummonLimitWarningDlgComponent_o *)limitWarningDlgInfo, 0LL);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, *(const MethodInfo **)&res) )
      {
        limitWarningDlgInfo = UserGameMaster__getSelfUserGame(0LL);
        if ( !limitWarningDlgInfo )
          goto LABEL_21;
        v6 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 62), 0LL) )
          goto LABEL_18;
        v7 = v6[46];
        v8 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = BalanceConfig_TypeInfo;
        }
        if ( v7 >= v8->static_fields->UserItemMax )
        {
          v10 = this->fields.limitWarningDlgInfo;
          v11 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C22084(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v10 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v10, v11, v12, 0LL);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v9);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_21:
      sub_1C22094(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3583/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  SummonRootComponent_o *klass; // x20
  System_Action_o *v6; // x21
  __int64 methodPtr_low; // x9
  SummonControl_o *v8; // x0
  bool v9; // w1
  const MethodInfo *v10; // x2

  if ( (byte_4BD8BF8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl__loadAssetsForSummon_b__235_0__);
    sub_1C21E38(&SummonRootComponent_TypeInfo);
    byte_4BD8BF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__235_0__, 0LL),
        !klass) )
  {
    sub_1C22094(Instance, v4);
  }
  methodPtr_low = LOBYTE(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v6, 0LL);
  }
  else
  {
    sub_1C22354(klass);
    SummonControl__friendSummonConfirmResult(v8, v9, v10);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v8; // w8
  int32_t v9; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4BD8BC7 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_onClickChangeBanner__);
    sub_1C21E38(&StringLiteral_12934/*"SetBannerCenter"*/);
    byte_4BD8BC7 = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_70854192(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12934/*"SetBannerCenter"*/,
      0LL);
    v4 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_SummonControl_onClickChangeBanner__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_25;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    currentMoveIdx = this->fields.currentMoveIdx;
    v8 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v9 = currentMoveIdx + 1 < v8 ? currentMoveIdx + 1 : 0;
    if ( !leftArrowBtn )
      goto LABEL_25;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.maskObject;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)leftArrowBtn, 1, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_25;
    centerChild = this->fields.centerChild;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v9,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47836756(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v9,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_25:
      sub_1C22094(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47836756(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t childCount; // w8
  int v7; // w8
  int32_t v8; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4BD8BC8 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonControl_onClickLeftChangeBanner__);
    sub_1C21E38(&StringLiteral_12934/*"SetBannerCenter"*/);
    byte_4BD8BC8 = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_70854192(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12934/*"SetBannerCenter"*/,
      0LL);
    v4 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_SummonControl_onClickLeftChangeBanner__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_25;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v7 = childCount - 1;
    v8 = this->fields.currentMoveIdx - 1 < 0 ? v7 : this->fields.currentMoveIdx - 1;
    if ( !leftArrowBtn )
      goto LABEL_25;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.maskObject;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)leftArrowBtn, 1, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_25;
    centerChild = this->fields.centerChild;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v8,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47836756(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v8,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_25:
      sub_1C22094(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47836756(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_String_o *v4; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s9
  float m_Height; // s14
  SummonControl_o *v11; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  float v14; // s0
  SummonControl___c_c *v15; // x0
  float v16; // s11
  System_Action_o *_9__151_0; // x22
  Il2CppObject *v18; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Action_o *v26; // x20
  UnityEngine_Rect_o v27; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BD8BAF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__openAfterSummonInfo_b__151_1__);
    sub_1C21E38(&Method_SummonControl___c__openAfterSummonInfo_b__151_0__);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_13760/*"TUTORIAL_MESSAGE_SUMMON2"*/);
    byte_4BD8BAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13760/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v5);
  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v14 = SummonControl__FSMenuOffsetX(v11, v12);
  v15 = SummonControl___c_TypeInfo;
  v16 = v14;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v15 = SummonControl___c_TypeInfo;
  }
  _9__151_0 = v15->static_fields->__9__151_0;
  if ( !_9__151_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = SummonControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__151_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__151_0, v18, Method_SummonControl___c__openAfterSummonInfo_b__151_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__151_0 = _9__151_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__151_0,
      (int64_t)_9__151_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !Instance )
    sub_1C22094(v15, v13);
  v27.fields.m_Height = m_Height + 33.0;
  v27.fields.m_YMin = m_YMin + 33.0;
  v27.fields.m_XMin = m_XMin + v16;
  v27.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v4,
    TUTORIAL_MENU_ARROW_POS_FS,
    v27,
    0.0,
    0LL,
    -1,
    _9__151_0,
    0LL);
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__151_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v26, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4BD8BAE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3576/*"CLEAR_TUTORIAL"*/);
    byte_4BD8BAE = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3576/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_1C22094(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  void *Item; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int32_t v22; // w21
  int64_t v23; // x21
  int64_t v24; // x0
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
  __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  System_Collections_Generic_List_object__o *v42; // x21
  System_Comparison_T__o *v43; // x22
  Il2CppObject *v44; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x22
  int32_t v53; // w21
  int32_t v54; // w22
  System_Action_o *v55; // x20

  if ( (byte_4BD8BB1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&System_Comparison_EventTutorialEntity__TypeInfo);
    sub_1C21E38(&EventTutorialEntity_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__openSvtEqInfo_b__153_1__);
    sub_1C21E38(&Method_SummonControl___c__DisplayClass153_0__openSvtEqInfo_b__0__);
    sub_1C21E38(&SummonControl___c__DisplayClass153_0_TypeInfo);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8BB1 = 1;
  }
  v3 = sub_1C22084(SummonControl___c__DisplayClass153_0_TypeInfo);
  SummonControl___c__DisplayClass153_0___ctor((SummonControl___c__DisplayClass153_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v13 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v13, 0LL);
  *(_QWORD *)(v3 + 16) = EventTutorialEntity;
  v15 = (void **)(v3 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)EventTutorialEntity, v16, v17, v18, v19, v20, v21);
  Item = *(void **)(v3 + 16);
  if ( !Item )
    goto LABEL_11;
  v22 = 0;
  while ( v22 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v22,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v15;
    ++v22;
    if ( !*v15 )
      goto LABEL_11;
  }
  v23 = sub_1C22084(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_11;
  *(_DWORD *)(v23 + 24) = 1;
  v24 = sub_1C21EE0(int___TypeInfo, 1LL);
  *(_QWORD *)(v23 + 80) = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 80), v24, v25, v26, v27, v28, v29, v30);
  v37 = *(_QWORD *)(v23 + 80);
  if ( !v37 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v37 + 24) )
    sub_1C2209C(Item, v5);
  *(_DWORD *)(v37 + 32) = 1;
  Item = *v15;
  if ( !*v15 )
    goto LABEL_11;
  v38 = *((_QWORD *)Item + 2);
  v39 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++*((_DWORD *)Item + 7);
  if ( !v38 )
    goto LABEL_11;
  v40 = *((int *)Item + 6);
  if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v23,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v38 + 8 * v40;
    *((_DWORD *)Item + 6) = v40 + 1;
    *(_QWORD *)(v41 + 32) = v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 32), v23, v31, v32, v33, v34, v35, v36);
  }
  Item = SummonControl___c_TypeInfo;
  v42 = (System_Collections_Generic_List_object__o *)*v15;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    Item = SummonControl___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = SummonControl___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v43 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(v43, v44, Method_SummonControl___c__openSvtEqInfo_b__153_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__153_1 = (struct System_Comparison_EventTutorialEntity__o *)v43;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__153_1, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v42 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_56953720(
    v42,
    v43,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v52 = (System_Collections_Generic_List_object__o *)*v15;
  if ( !*v15 )
LABEL_11:
    sub_1C22094(Item, v5);
  v53 = v52->fields._size - 1;
  if ( v53 >= 0 )
  {
    while ( v52 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v52,
               v53,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v15;
        if ( !*v15 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v53,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v54 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        Item = (void *)TutorialFlag__GetGachaFlg(v54, 0LL);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v15;
          if ( !*v15 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v53,
            (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v52 = (System_Collections_Generic_List_object__o *)*v15;
      if ( --v53 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v55 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)v3, Method_SummonControl___c__DisplayClass153_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v52,
    v55,
    0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_4BD8BFC & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_callbackTutorialSet__);
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BD8BFC = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0LL);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C22094(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__progTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  switch ( this->fields.tutorialKind )
  {
    case 1:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 1, 0LL);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonListInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      SummonControl__openSummonExeArrow(this, v6);
      break;
    case 2:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
      if ( !summonInfoCtr
        || (summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)summonInfoCtr,
                                                     0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonListInfo) == 0LL)
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.tutorialArrowObj) == 0LL)
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject) == 0LL) )
      {
LABEL_39:
        sub_1C22094(summonInfoCtr, v4);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      SummonControl__openAfterSummonInfo(this, v7);
      break;
    case 3:
      SummonControl__exeFormation(this, method);
      break;
    case 4:
      SummonControl__openSvtEqInfo(this, method);
      break;
    default:
      return;
  }
}


void __fastcall SummonControl__quit(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonBannerInfo; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_Collections_Generic_List_GachaSubEntity__o *gachaSubEntityList; // x8
  int32_t v10; // w2
  int v11; // w9
  int32_t VaildPayType; // w0
  const MethodInfo *v13; // x1
  int32_t v14; // w20
  TerminalPramsManager_c *v15; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_4BD8BB5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8BB5 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_23;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  SummonControl__clearBannerList(this, v4);
  SummonControl__clearResultList(this, v5);
  summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonResultInfo;
  if ( !summonBannerInfo )
    goto LABEL_23;
  SummonResultComponent__SetActive((SummonResultComponent_o *)summonBannerInfo, 0, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
  {
    size = vaildGachaList->fields._size;
    v8 = vaildGachaList->fields._version + 1;
    vaildGachaList->fields._size = 0;
    vaildGachaList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  }
  gachaSubEntityList = this->fields.gachaSubEntityList;
  if ( gachaSubEntityList )
  {
    v10 = gachaSubEntityList->fields._size;
    v11 = gachaSubEntityList->fields._version + 1;
    gachaSubEntityList->fields._size = 0;
    gachaSubEntityList->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v10, 0LL);
  }
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_23:
    sub_1C22094(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v14 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8C41 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C41 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_SummonType_k__BackingField = v14;
  SummonControl__releaseBannerData(this, v13);
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( bonusSelectAssetManager )
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0LL);
}


void __fastcall SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  void *Item; // x0
  int32_t v5; // w20
  int32_t v6; // w22
  int32_t v7; // w21
  char v8; // w23
  const MethodInfo *v9; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  int FriendPointIndex; // w4
  const MethodInfo *v16; // x5

  if ( (byte_4BD8C17 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8C17 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList
    || (method = (const MethodInfo *)(unsigned int)this->fields.currentIdx, vaildGachaList->fields._size <= (int)method) )
  {
    v5 = 0;
    goto LABEL_9;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           (int32_t)method,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !Item )
LABEL_28:
    sub_1C22094(Item, method);
  if ( *((_DWORD *)Item + 13) != 3 )
  {
    Item = this->fields.vaildGachaList;
    if ( Item )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               this->fields.currentIdx,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( Item )
      {
        v5 = *((_DWORD *)Item + 4);
        Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Item )
        {
          Item = DataManager__GetMasterData_object_(
                   (DataManager_o *)Item,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( Item )
          {
            Item = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                     v5,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Item )
            {
              v7 = *((_DWORD *)Item + 18);
              if ( v7 || *((_DWORD *)Item + 36) )
              {
                v6 = *((_DWORD *)Item + 36);
                goto LABEL_10;
              }
LABEL_9:
              v6 = 0;
              v7 = 0;
LABEL_10:
              v8 = 0;
              goto LABEL_11;
            }
          }
        }
      }
    }
    goto LABEL_28;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
LABEL_11:
  if ( !SummonControl__resetSummonVaildData(this, method)
    || ((gachaParamData = this->fields.gachaParamData) == 0LL
     || gachaParamData->fields.gachaId != this->fields.lastMaxDrawGachaId)
    && SummonControl__checkMaxDrawNum(this, v9) )
  {
    SummonControl__deleteBannerList(this, v9);
    SummonControl__CheckValidGachaList(this, v11);
    SummonControl__createSummonInfo(this, v12);
    FriendPointIndex = SummonControl__getFriendPointIndex(this, v13);
    if ( (v8 & 1) == 0 )
      FriendPointIndex = SummonControl__GetGachaIndex(this, v5, v7, v6, FriendPointIndex, v16);
    if ( FriendPointIndex >= 1 )
      SummonControl__setDispRePosition(this, FriendPointIndex, v14);
  }
}


void __fastcall SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  System_String_o *assetPath; // x20
  PartyOrganizationUtility_o *p_bannerAssetData; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BD8BB4 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD8BB4 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (PartyOrganizationUtility_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_1C21DDC(p_bannerAssetData, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  int32_t shopIdIdx; // w24
  Il2CppObject *p_obj; // x27
  GachaDrawRequest_o *v11; // x19
  __int64 v12; // x8
  System_String_o *v13; // x29
  unsigned __int64 v14; // x22
  int32_t v15; // w28
  System_String_o *v16; // x0
  System_String_o *selectBonusListData; // x28
  int32_t ticketItemId; // [xsp+14h] [xbp-6Ch]
  int32_t warId; // [xsp+18h] [xbp-68h]
  int32_t gachaTime; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4BD8BF9 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_GachaDrawRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_callbackGachaDraw__);
    sub_1C21E38(&StringLiteral_176/*" : "*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8BF9 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v4,
                                             (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_GachaDrawRequest___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_22;
  gachaId = gachaParamData->fields.gachaId;
  gachaSubId = gachaParamData->fields.gachaSubId;
  storyAdjustIds = gachaParamData->fields.storyAdjustIds;
  warId = gachaParamData->fields.warId;
  gachaTime = gachaParamData->fields.gachaTime;
  shopIdIdx = gachaParamData->fields.shopIdIdx;
  p_obj = &gachaParamData->fields.selectBonusList->obj;
  v11 = (GachaDrawRequest_o *)maskObject;
  ticketItemId = gachaParamData->fields.ticketItemId;
  if ( storyAdjustIds )
  {
    v12 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v12 )
    {
      if ( (int)v12 >= 1 )
      {
        v13 = (System_String_o *)StringLiteral_1/*""*/;
        v14 = 0LL;
        v15 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v14 >= (unsigned int)v12 )
            sub_1C2209C(maskObject, method);
          v16 = System_Int32__ToString(v15, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_63126736(
                                                     v13,
                                                     v16,
                                                     (System_String_o *)StringLiteral_176/*" : "*/,
                                                     0LL);
          LODWORD(v12) = storyAdjustIds->max_length;
          ++v14;
          v13 = (System_String_o *)maskObject;
          v15 += 4;
        }
        while ( (__int64)v14 < (int)v12 );
      }
    }
  }
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    selectBonusListData = JsonManager__toJson(p_obj, 0, 0, 0LL);
  }
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v11) )
LABEL_22:
    sub_1C22094(maskObject, method);
  GachaDrawRequest__beginRequest(
    v11,
    gachaId,
    gachaTime,
    warId,
    ticketItemId,
    shopIdIdx,
    gachaSubId,
    storyAdjustIds,
    selectBonusListData,
    0LL);
}


void __fastcall SummonControl__resetMainDisp(SummonControl_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *MainBgmName; // x20
  CommonUI_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD8C16 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD8C16 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MissionNotifyManager__EndPause(Instance, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.maskBgObject;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.maskObject;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    goto LABEL_27;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0LL, 37, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_38384144((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v7);
  SummonControl__setUserResourceDisp(this, v8);
  Instance = (MissionNotifyManager_o *)this->fields.summonInfoCtr;
  this->fields.getSvtIdx = 0;
  if ( !Instance )
    goto LABEL_27;
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)Instance, 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  if ( this->fields.tutorialKind == 2 )
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0LL);
    SummonControl__progTutorial(this, v9);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v10);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_27:
    sub_1C22094(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C22094(0LL, v11);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v13.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v12);
}


void __fastcall SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.userGameEntity, (int64_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  SummonControl__resetStoneInfo(this, v10);
}


void __fastcall SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4BD8C10 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__resetResultList_b__267_0__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD8C10 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__267_0__, 0LL);
  if ( !v7 )
LABEL_13:
    sub_1C22094(Instance, v4);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_4BD8C1B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&StringLiteral_3097/*"BONUS_SELECT_GACHA"*/);
    byte_4BD8C1B = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0LL )
    {
LABEL_14:
      sub_1C22094(Master_object, v3);
    }
    if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_14;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3097/*"BONUS_SELECT_GACHA"*/, 0LL);
    }
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.summonInfoCtr;
  if ( !Master_object )
    goto LABEL_14;
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)Master_object, 0LL);
}


bool __fastcall SummonControl__resetSummonVaildData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 gachaMst; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct GachaEntity_array *useGachaData; // x8
  int64_t v11; // x19
  __int64 v12; // x9
  PartyOrganizationUtility_o *p_useGachaData; // x20
  unsigned int v14; // w10
  unsigned int v15; // w21

  gachaMst = (__int64)this->fields.gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  gachaMst = (__int64)GachaMaster__getListValidData((GachaMaster_o *)gachaMst, 0LL);
  useGachaData = this->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_15;
  v11 = gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  v12 = *(_QWORD *)&useGachaData->max_length;
  p_useGachaData = (PartyOrganizationUtility_o *)&this->fields.useGachaData;
  if ( (_DWORD)v12 == *(_DWORD *)(gachaMst + 24) )
  {
    if ( (int)v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12 || (v15 = v14, v14 >= *(_DWORD *)(v11 + 24)) )
          sub_1C2209C(gachaMst, method);
        gachaMst = (__int64)useGachaData->m_Items[v14];
        if ( !gachaMst )
          break;
        gachaMst = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gachaMst + 312LL))(
                     gachaMst,
                     *(_QWORD *)(v11 + 8LL * (int)v14 + 32),
                     *(_QWORD *)(*(_QWORD *)gachaMst + 320LL));
        if ( (gachaMst & 1) == 0 )
          goto LABEL_14;
        useGachaData = (struct GachaEntity_array *)p_useGachaData->klass;
        if ( !p_useGachaData->klass )
          break;
        LODWORD(v12) = useGachaData->max_length;
        v14 = v15 + 1;
        if ( (int)(v15 + 1) >= (int)v12 )
          return 1;
      }
LABEL_15:
      sub_1C22094(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (PartyOrganizationUtility_c *)v11;
    sub_1C21DDC(p_useGachaData, v11, v4, v5, v6, v7, v8, v9);
    return 0;
  }
}


void __fastcall SummonControl__returnTutorial(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 2;
  SummonControl__progTutorial(this, method);
}


UnityEngine_GameObject_o *__fastcall SummonControl__searchBannerImg(
        SummonControl_o *this,
        System_String_o *searchTarget,
        const MethodInfo *method)
{
  void *bannerAssetData; // x0
  int v6; // w8
  _DWORD *v7; // x20
  unsigned int v8; // w23
  char *v9; // x8
  UnityEngine_GameObject_o *v10; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4BD8BBE & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8BBE = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_2F92080 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_17;
  v6 = *((_DWORD *)bannerAssetData + 6);
  v7 = bannerAssetData;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C2209C(bannerAssetData, searchTarget);
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v9 + 4),
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bannerAssetData = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)bannerAssetData & 1) != 0 )
      {
        if ( !Component_object )
          break;
        bannerAssetData = UIAtlas__GetSprite((UIAtlas_o *)Component_object, searchTarget, 0LL);
        if ( bannerAssetData )
          return v10;
      }
      v6 = v7[6];
      if ( (int)++v8 >= v6 )
        return 0LL;
    }
LABEL_17:
    sub_1C22094(bannerAssetData, searchTarget);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *indexPanel; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_m_CachedPtr; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float v14; // s1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
  if ( !indexPanel
    || (indexPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))indexPanel->klass[1]._1.klass)(
                                                  indexPanel,
                                                  indexPanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1C22094(indexPanel, method);
  }
  klass = (unsigned int)indexPanel[1].klass;
  v5 = (float32x2_t *)indexPanel;
  v6 = 0LL;
  p_m_CachedPtr = (float *)&indexPanel[1].fields.m_CachedPtr;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
    if ( !indexPanel )
      goto LABEL_11;
    v8 = *(p_m_CachedPtr - 2);
    v9 = *(p_m_CachedPtr - 1);
    v10 = *p_m_CachedPtr;
    indexPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(indexPanel, 0LL);
    if ( !indexPanel )
      goto LABEL_11;
    v15.fields.x = v8;
    v15.fields.y = v9;
    v15.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)indexPanel,
                                       v15,
                                       0LL);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1C2209C(indexPanel, method);
  v14 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}


void __fastcall SummonControl__setChangeSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Item; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v14; // x22
  SummonInfoControl_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_4BD8BC9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&Method_SummonControl__setChangeSummonInfo_b__182_0__);
    sub_1C21E38(&Method_SummonControl_exeSummon__);
    byte_4BD8BC9 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
  if ( !maskObject )
    goto LABEL_8;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)maskObject,
           this->fields.currentIdx,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.currentGachaInfo, (int64_t)Item, v5, v6, v7, v8, v9, v10);
  SummonControl__setResourceInfo(this, v11);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v14 = (SummonInfoControl_ClickDelegate_o *)sub_1C22084(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v14, 0LL),
        v15 = this->fields.summonInfoCtr,
        v16 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__182_0__, 0LL),
        !v15) )
  {
LABEL_8:
    sub_1C22094(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v15, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4BD8BCE & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    byte_4BD8BCE = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_1C22094(this, *(_QWORD *)&currentIdx);
  }
  UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL);
  SummonControl__setSliderIcon(v4, currentIdx, v5);
  v4->fields.currentIdx = currentIdx;
  v4->fields.currentMoveIdx = currentIdx;
  SummonControl__setChangeSummonInfo(v4, v6);
  SummonControl__UpdateSummonInfoControlLayout(v4, v7);
}


void __fastcall SummonControl__setDispSummonForm(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispSummonInfo(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  bool v6; // w20

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_11;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.currentResourceInfo;
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.detailInfo;
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.summonListInfo;
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.summonBannerInfo;
  if ( !titleInfo
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.summonMBannerObject) == 0LL)
    || (v6 = isDisp,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.helpImgInfo) == 0LL) )
  {
LABEL_11:
    sub_1C22094(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1C22094(0LL, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x8
  int SummonId_k__BackingField; // w20
  int32_t GachaIdFromSelectedBannerEntity; // w0
  TerminalPramsManager_c *v8; // x0
  void *bannerInfoList; // x0
  int v10; // w22
  int32_t v11; // w21
  __int64 v12; // x1
  __int64 v13; // x8
  SummonControl_o *v14; // x0
  int32_t v15; // w1

  if ( (byte_4BD8BCC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8BCC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8C42 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C42 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_SummonId_k__BackingField <= 0 )
  {
    GachaIdFromSelectedBannerEntity = SummonControl__GetGachaIdFromSelectedBannerEntity((SummonControl_o *)v4, method);
    v5 = TerminalPramsManager_TypeInfo;
    SummonId_k__BackingField = GachaIdFromSelectedBannerEntity;
  }
  else
  {
    if ( !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_4BD8C42 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD8C42 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    SummonId_k__BackingField = v5->static_fields->_SummonId_k__BackingField;
  }
  if ( !v5->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v5);
  if ( !byte_4BD8C43 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C43 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SummonId_k__BackingField = 0;
  bannerInfoList = this->fields.bannerInfoList;
  if ( this->fields.summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_37;
  }
  else if ( bannerInfoList )
  {
    v10 = *((_DWORD *)bannerInfoList + 6);
    if ( v10 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        bannerInfoList = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)bannerInfoList,
                           v11,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !bannerInfoList )
LABEL_35:
          sub_1C22094(bannerInfoList, v12);
        v13 = *((_QWORD *)bannerInfoList + 11);
        if ( !v13 )
        {
          v15 = 1;
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v13 + 52) == this->fields.summonType
          && (SummonId_k__BackingField < 1 || *(_DWORD *)(v13 + 16) == SummonId_k__BackingField) )
        {
          break;
        }
        if ( v10 == ++v11 )
          goto LABEL_37;
        bannerInfoList = this->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_35;
      }
      v15 = *((_DWORD *)bannerInfoList + 24);
LABEL_41:
      v14 = this;
      goto LABEL_42;
    }
LABEL_37:
    v14 = this;
    v15 = 0;
LABEL_42:
    SummonControl__setDispRePosition(v14, v15, v2);
  }
}


void __fastcall SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  Il2CppObject *Item; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v13; // x25
  UIWidget_o *v14; // x22
  UIWidget_o *v15; // x23
  UIWidget_o *v16; // x20
  UIWidget_o *v17; // x24
  SummonControl_c *v18; // x8
  UIWidget_o *v19; // x21
  float COLOR_VAL; // s8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD8BCA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&SummonControl_TypeInfo);
    byte_4BD8BCA = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.currentGachaInfo, (int64_t)Item, v5, v6, v7, v8, v9, v10);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v14 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v15 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v16 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v17 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v18 = SummonControl_TypeInfo;
  v19 = (UIWidget_o *)vaildGachaList;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v18 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v18->static_fields->COLOR_VAL;
  if ( isPointSummon )
  {
    if ( !v13 )
      goto LABEL_34;
    v21.fields.a = 1.0;
    v21.fields.r = v18->static_fields->COLOR_VAL;
    v21.fields.g = v21.fields.r;
    v21.fields.b = v21.fields.r;
    UIWidget__set_color(v13, v21, 0LL);
    if ( !v14 )
      goto LABEL_34;
    v22.fields.a = 1.0;
    v22.fields.r = COLOR_VAL;
    v22.fields.g = COLOR_VAL;
    v22.fields.b = COLOR_VAL;
    UIWidget__set_color(v14, v22, 0LL);
    if ( !v17 )
      goto LABEL_34;
    v23.fields.a = 1.0;
    v23.fields.r = COLOR_VAL;
    v23.fields.g = COLOR_VAL;
    v23.fields.b = COLOR_VAL;
    UIWidget__set_color(v17, v23, 0LL);
    if ( !v19 )
      goto LABEL_34;
    v24.fields.a = 1.0;
    v24.fields.r = COLOR_VAL;
    v24.fields.g = COLOR_VAL;
    v24.fields.b = COLOR_VAL;
    UIWidget__set_color(v19, v24, 0LL);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0LL);
    if ( !v15 )
      goto LABEL_34;
    v25.fields.r = 1.0;
    v25.fields.g = 1.0;
    v25.fields.b = 1.0;
    v25.fields.a = 1.0;
    UIWidget__set_color(v15, v25, 0LL);
    if ( !v16 )
      goto LABEL_34;
    v26.fields.r = 1.0;
    v26.fields.g = 1.0;
    v26.fields.b = 1.0;
    v26.fields.a = 1.0;
    UIWidget__set_color(v16, v26, 0LL);
  }
  else
  {
    if ( !v15 )
      goto LABEL_34;
    v27.fields.a = 1.0;
    v27.fields.r = v18->static_fields->COLOR_VAL;
    v27.fields.g = v27.fields.r;
    v27.fields.b = v27.fields.r;
    UIWidget__set_color(v15, v27, 0LL);
    if ( !v16 )
      goto LABEL_34;
    v28.fields.a = 1.0;
    v28.fields.r = COLOR_VAL;
    v28.fields.g = COLOR_VAL;
    v28.fields.b = COLOR_VAL;
    UIWidget__set_color(v16, v28, 0LL);
    if ( !v13 )
      goto LABEL_34;
    v29.fields.r = 1.0;
    v29.fields.g = 1.0;
    v29.fields.b = 1.0;
    v29.fields.a = 1.0;
    UIWidget__set_color(v13, v29, 0LL);
    if ( !v14 )
      goto LABEL_34;
    v30.fields.r = 1.0;
    v30.fields.g = 1.0;
    v30.fields.b = 1.0;
    v30.fields.a = 1.0;
    UIWidget__set_color(v14, v30, 0LL);
    if ( !v17 )
      goto LABEL_34;
    v31.fields.r = 1.0;
    v31.fields.g = 1.0;
    v31.fields.b = 1.0;
    v31.fields.a = 1.0;
    UIWidget__set_color(v17, v31, 0LL);
    if ( !v19 )
      goto LABEL_34;
    v32.fields.r = 1.0;
    v32.fields.g = 1.0;
    v32.fields.b = 1.0;
    v32.fields.a = 1.0;
    UIWidget__set_color(v19, v32, 0LL);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 1, 0LL);
  }
  if ( (unsigned int)(this->fields.tutorialKind - 1) <= 2 )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( vaildGachaList )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0LL);
      return;
    }
LABEL_34:
    sub_1C22094(vaildGachaList, method);
  }
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BD8C0E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD8C0E = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0LL),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(summonResultInfo, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)summonResultInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setSliderIcon(SummonControl_o *this, int32_t idx, const MethodInfo *method)
{
  UnityEngine_Component_o *sliderGrid; // x0
  int32_t childCount; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  const MethodInfo *v9; // x2
  SelectBannerSliderIcon_o *v10; // x23
  const MethodInfo *v11; // x2

  if ( (byte_4BD8BCB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    byte_4BD8BCB = 1;
  }
  sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !sliderGrid )
    goto LABEL_15;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sliderGrid, 0LL);
  if ( !sliderGrid )
    goto LABEL_15;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)sliderGrid, 0LL);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    v8 = 0;
    while ( 1 )
    {
      sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !sliderGrid )
        break;
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sliderGrid, 0LL);
      if ( !sliderGrid )
        break;
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)sliderGrid,
                                                v8,
                                                0LL);
      if ( !sliderGrid )
        break;
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49965836(
                                                sliderGrid,
                                                (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !sliderGrid )
        break;
      v10 = (SelectBannerSliderIcon_o *)sliderGrid;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)sliderGrid, 0, v9);
      if ( idx == v8 )
        SelectBannerSliderIcon__setEnableOnImg(v10, 1, v11);
      if ( v7 == ++v8 )
        return;
    }
LABEL_15:
    sub_1C22094(sliderGrid, *(_QWORD *)&idx);
  }
}


void __fastcall SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *Time; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v6; // x2
  int64_t v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UILabel_o *summonHelpLabel; // x21
  TerminalPramsManager_c *v15; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  long double v24; // q0
  __int64 v25; // x0
  __int64 v26; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct GachaEntity_array *ListValidData; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v51; // x20
  AssetLoader_LoadEndDataHandler_o *v52; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8BB2 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SummonControl_LoadBannerEnd__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12592/*"SUMMON_HELP_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_13326/*"SummonBanners/DownloadSummonBanner"*/);
    sub_1C21E38(&StringLiteral_6529/*"FAIL_LOAD"*/);
    sub_1C21E38(&StringLiteral_20695/*"img_line_summon"*/);
    sub_1C21E38(&StringLiteral_20608/*"img_bg_banner"*/);
    byte_4BD8BB2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)NetworkManager__getTime(0LL);
  summonBannerInfo = this->fields.summonBannerInfo;
  this->fields.summonSceneInTime = (int64_t)Time;
  if ( !summonBannerInfo )
    goto LABEL_45;
  Time = UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !Time )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition(Time, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.maskBgObject;
  this->fields.initBannerPos = localPosition;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.maskObject;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v6);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 37, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_38384144((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  this->fields.isDoneTutorial = 1;
  v7 = StringLiteral_13326/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13326/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetPath, v7, v8, v9, v10, v11, v12, v13);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12592/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8C40 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C40 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v15->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  SummonControl__setUserResourceDisp(this, v23);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C73D14(v24);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C73D14(v24);
  Time = **(UnityEngine_Transform_o ***)(v26 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.gachaMst,
    (int64_t)MasterData_object,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.useGachaData,
    (int64_t)ListValidData,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  SummonControl__CheckValidGachaList(this, v41);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.vaildGachaList, 0LL, v42, v43, v44, v45, v46, v47);
  }
  Time = (UnityEngine_Transform_o *)this->fields.summonBannerScrollView;
  if ( !Time )
    goto LABEL_45;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonHelpInfo;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerObject;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
  summonMBannerLineSprite = this->fields.summonMBannerLineSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20695/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_20608/*"img_bg_banner"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerScrollView;
  if ( !Time )
    goto LABEL_45;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0LL);
  assetPath = this->fields.assetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(assetPath, 0LL) )
  {
    Time = (UnityEngine_Transform_o *)this->fields.fsm;
    if ( Time )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6529/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_45:
    sub_1C22094(Time, v4);
  }
  v51 = this->fields.assetPath;
  v52 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v52, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v51, v52, 1, 0LL);
}


void __fastcall SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SummonResultComponent_o *Instance; // x0
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  System_Action_o *_9__259_0; // x21
  Il2CppObject *v8; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD8C0A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__setSummonResultList_b__259_0__);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_9494/*"NO_EXIST"*/);
    sub_1C21E38(&StringLiteral_12374/*"SHOW_TALK"*/);
    byte_4BD8C0A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(107, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38930984(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v3) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = (CommonUI_o *)Instance;
      v6 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v6 = SummonControl___c_TypeInfo;
      }
      _9__259_0 = v6->static_fields->__9__259_0;
      if ( !_9__259_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = SummonControl___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__259_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__259_0, v8, Method_SummonControl___c__setSummonResultList_b__259_0__, 0LL);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__259_0 = _9__259_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__259_0,
          (int64_t)_9__259_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      if ( !v5 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_31154092(v5, 2, 108, _9__259_0, 0LL, 0LL, 0LL);
    }
  }
  Instance = this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_24;
  SummonResultComponent__initGachaResultList(
    Instance,
    this->fields.gachaResInfoList,
    this->fields.resType,
    this->fields.extraGiftIds,
    this->fields.GachaExtraGiftList,
    0LL);
  Instance = (SummonResultComponent_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.resType == 2 )
  {
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12374/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9494/*"NO_EXIST"*/, 0LL);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1C22094(Instance, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  System_Collections_Generic_List_object__o *bannerInfoList; // x0
  int32_t v6; // w21
  int32_t v7; // w21
  bool v8; // w20

  v3 = isEnable;
  if ( (byte_4BD8BAD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
    byte_4BD8BAD = 1;
  }
  if ( !this->fields.isDoneTutorial )
    v3 &= this->fields.tutorialKind != 2;
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_22;
  v6 = 0;
  while ( v6 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v6,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
      ++v6;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_22;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.leftArrowBtn;
  if ( !bannerInfoList )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v3 & 1, 0LL);
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.rightArrowBtn;
  if ( !bannerInfoList )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v3 & 1, 0LL);
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_22;
  v7 = 0;
  while ( v7 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v7,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerInfoList;
      ++v7;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_22;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !bannerInfoList
    || (v8 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v8, 0LL),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_22:
    sub_1C22094(bannerInfoList, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v8, 0LL);
}


void __fastcall SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_String_o *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UILabel_o *currentFragmentNumLb; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BD8BB7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SummonControl__setUserResourceDisp_b__159_0__);
    sub_1C21E38(&StringLiteral_25415/*"{0:N0}"*/);
    byte_4BD8BB7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v13, v14, v15);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v18, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
  System_Action_int____ctor(v20, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__159_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v20, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !*p_userGameEntity )
    goto LABEL_21;
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)TblUserMaster__getUserData(
                                       (TblUserMaster_o *)Master_object,
                                       (*p_userGameEntity)->fields.userId,
                                       0LL);
  if ( !Master_object )
    goto LABEL_21;
  currentPointNumLb = this->fields.currentPointNumLb;
  klass = (int)Master_object[1].klass;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v21, v22, v23);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v25, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v26, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v28, v29, v30);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25415/*"{0:N0}"*/, v31, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v32, 0LL)) == 0LL)
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        GameObjectExtensions__SetLocalPositionX(v33, -179.0, 0LL),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v34, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_1C22094(Master_object, v12);
  }
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v35, 179.0, 0LL);
}


void __fastcall SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void __fastcall SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v6; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *v15; // x21

  if ( (byte_4BD8BEC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BonusSelectSummonAssetManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__showConfirmDlg_b__218_0__);
    byte_4BD8BEC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v8 = (BonusSelectSummonAssetManager_o *)sub_1C22084(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v8, 0LL);
        this->fields.bonusSelectAssetManager = v8;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.bonusSelectAssetManager,
          (int64_t)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__218_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v15, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C22094(Master_object, v4);
  }
  SummonControl__showConfirmDlg_34164004(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_34164004(
        SummonControl_o *this,
        bool beforeDetailFlag,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w23
  struct GachaRqParamData_o *v7; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x20
  int32_t *v9; // x22
  int32_t needStone; // w22
  int haveFreeStone; // w28
  int32_t haveChargeStone; // w29
  int v13; // w8
  struct SummonInfoControl_o *v14; // x8
  const MethodInfo *v15; // x1
  struct SummonInfoControl_o *v16; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v18; // x9
  struct GachaRqParamData_o *v19; // x8
  GachaDetailEntity_o *v20; // x22
  SummonConfirmDlgComponent_CallbackFunc_o *v21; // x20
  const MethodInfo *v22; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v23; // x0
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v26; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  struct GachaRqParamData_o *v29; // x8
  int32_t v30; // w21
  struct GachaRqParamData_o *v31; // x8
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x22
  SummonConfirmDlgComponent_o *v34; // x22
  const MethodInfo *v35; // x6
  int32_t v36; // w26
  int32_t v37; // w27
  int32_t v38; // w28
  struct GachaRqParamData_o *v39; // x8
  GachaDetailEntity_o *v40; // x24
  struct GachaRqParamData_o *v41; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  System_Int32_array *v45; // x25
  int32_t ScriptInt; // w0
  const MethodInfo *v47; // x3
  SummonControl_o *v48; // x0
  const MethodInfo *v49; // x2
  int32_t v50; // w21
  int afterChargeStoneNum; // w26
  SummonConfirmDlgComponent_o *v52; // x24
  struct SummonInfoControl_o *v53; // x9
  struct GachaRqParamData_o *v54; // x8
  struct SummonInfoControl_o *v55; // x10
  struct GachaRqParamData_o *v56; // x9
  SummonControl_o *v57; // x8
  System_String_o *v58; // x27
  int32_t v59; // w25
  int32_t v60; // w28
  int32_t v61; // w29
  SummonControl_o *v62; // x8
  int v63; // w25
  struct TitleInfoControl_o *summonCloseAt; // x28
  struct GachaRqParamData_o *v65; // x8
  int32_t gachaId; // w27
  int32_t haveStone; // w23
  struct GachaRqParamData_o *v68; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v70; // x24
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  System_Int32_array *ScriptIntArray; // x24
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x2
  struct GachaRqParamData_o *v76; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v78; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v80; // x21
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  struct SummonInfoControl_o *summonInfoCtr; // x9
  SummonControl_o *v83; // x8
  int32_t payGachaPrice; // w25
  int32_t v85; // w26
  int32_t v86; // w27
  int32_t v87; // w28
  SummonControl_o *v88; // x8
  int32_t v89; // w24
  int v90; // w29
  struct GachaRqParamData_o *v91; // x8
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v93; // x8
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-E0h]
  const MethodInfo *v95; // [xsp+60h] [xbp-A0h]
  System_String_o *title; // [xsp+70h] [xbp-90h]
  int32_t v97; // [xsp+7Ch] [xbp-84h]
  int32_t v98; // [xsp+80h] [xbp-80h]
  System_String_o *m_CancellationTokenSource; // [xsp+80h] [xbp-80h]
  _BOOL4 v100; // [xsp+8Ch] [xbp-74h]
  int32_t v101; // [xsp+8Ch] [xbp-74h]
  int32_t v102; // [xsp+90h] [xbp-70h]
  int32_t v103; // [xsp+94h] [xbp-6Ch]
  int32_t v104; // [xsp+94h] [xbp-6Ch]
  bool HasFlag; // [xsp+98h] [xbp-68h]
  SummonConfirmDlgComponent_CallbackFunc_o *v106; // [xsp+98h] [xbp-68h]

  v4 = this;
  if ( (byte_4BD8BED & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_ConfirmMessageOpen__);
    sub_1C21E38(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C21E38(&Method_SummonControl_confirmResult__);
    this = (SummonControl_o *)sub_1C21E38(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    byte_4BD8BED = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_112;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_112;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v7 = v4->fields.gachaParamData;
  if ( !v7 )
    goto LABEL_112;
  if ( !this )
    goto LABEL_112;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v7->fields.gachaId,
                         0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_112;
  v9 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_112;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v9[24], v9[46], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v4->fields.needStone;
      haveFreeStone = v4->fields.haveFreeStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v13 = haveFreeStone - needStone;
      if ( haveFreeStone >= needStone )
      {
        haveFreeStone -= needStone;
      }
      else if ( haveFreeStone < 1 )
      {
        haveChargeStone -= needStone;
      }
      else
      {
        haveFreeStone = 0;
        haveChargeStone += v13;
      }
      haveStone = v4->fields.haveStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v68 = v4->fields.gachaParamData;
      if ( !v68 || !this )
        goto LABEL_112;
      v104 = haveStone;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v68->fields.gachaId, 0LL);
      v70 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v70,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v71);
      if ( GachaDetailEntity )
      {
        v106 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v106,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v72);
        ScriptIntArray = GachaDetailEntity__GetScriptIntArray(GachaDetailEntity, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(
                                    GachaDetailEntity,
                                    v4->fields.DETAIL_SCRIPT_TYPE,
                                    0,
                                    0LL);
        if ( ScriptIntArray )
        {
          if ( (_DWORD)this == 1 )
          {
            v106 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v106,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v74);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v75);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
LABEL_82:
                SummonControl__BeforeConfirmMessageOpen(v4, (const MethodInfo *)beforeDetailFlag);
                return;
              }
            }
          }
        }
      }
      else
      {
        v106 = v70;
      }
      v76 = v4->fields.gachaParamData;
      if ( !v76 )
        goto LABEL_112;
      gachaTime = v76->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_97;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
      v78 = v4->fields.gachaParamData;
      if ( !v78 || !this )
        goto LABEL_112;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v78->fields.gachaId,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity && (v80 = Entity, LODWORD(Entity[4].monitor)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_112;
        if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v80[4].monitor, 0LL) == 9 )
          gachaTime = 2;
        else
          gachaTime = 1;
      }
      else
      {
        gachaTime = 1;
      }
LABEL_97:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( this )
      {
        confirmDlgInfo = v4->fields.confirmDlgInfo;
        this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this,
                                    v4->fields.currentIdx,
                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( this )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v83 = this;
            this = (SummonControl_o *)v4->fields.vaildGachaList;
            v101 = haveFreeStone;
            if ( this )
            {
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              v85 = v4->fields.haveStone;
              v86 = v4->fields.haveFreeStone;
              v87 = v4->fields.haveChargeStone;
              m_CancellationTokenSource = (System_String_o *)v83->fields.m_CancellationTokenSource;
              this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v4->fields.currentIdx,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
              if ( this )
              {
                v88 = this;
                this = (SummonControl_o *)v4->fields.vaildGachaList;
                if ( this )
                {
                  v89 = haveChargeStone;
                  v90 = BYTE1(v88->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
                  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v4->fields.currentIdx,
                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
                  if ( this )
                  {
                    v91 = v4->fields.gachaParamData;
                    if ( v91 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          m_CancellationTokenSource,
                          1,
                          payGachaPrice,
                          gachaTime,
                          v85,
                          v86,
                          v87,
                          v104 - needStone,
                          v101,
                          v89,
                          v106,
                          0,
                          v90 != 0,
                          (int64_t)this->fields.titleInfo,
                          0,
                          0LL,
                          0LL,
                          ListGachaExtraGift,
                          v91->fields.shopIdIdx,
                          v95);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_112;
    case 3:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v14 = v4->fields.summonInfoCtr;
      if ( !v14 )
        goto LABEL_112;
      v4->fields.isDailyGacha = v14->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v9[62], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v15) )
        SummonControl__friendPointSummonConfirm(v4, v15);
      return;
    case 5:
      v16 = v4->fields.summonInfoCtr;
      if ( !v16 )
        goto LABEL_112;
      ticketNum = v16->fields.ticketNum;
      v18 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v18 )
        goto LABEL_112;
      v4->fields.afterTicketNum = ticketNum - v18->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v19 = v4->fields.gachaParamData;
      if ( !v19 || !this )
        goto LABEL_112;
      v20 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v19->fields.gachaId, 0LL);
      v21 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v22);
      if ( v20 )
      {
        v23 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v24);
        v25 = GachaDetailEntity__GetScriptIntArray(v20, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v20, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v25 )
        {
          if ( (_DWORD)this == 1 )
          {
            v26 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v26,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v27);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v25, v28);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_82;
            }
          }
        }
      }
      v29 = v4->fields.gachaParamData;
      if ( !v29 )
        goto LABEL_112;
      v30 = v29->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
      v31 = v4->fields.gachaParamData;
      if ( !v31 || !this )
        goto LABEL_112;
      v32 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v31->fields.gachaId,
              (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v32 )
        goto LABEL_38;
      v33 = v32;
      if ( !LODWORD(v32[4].monitor) )
        goto LABEL_38;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_112;
      if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v33[4].monitor, 0LL) == 9 )
        ++v30;
LABEL_38:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      v34 = v4->fields.confirmDlgInfo;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this || !v34 )
        goto LABEL_112;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v34,
        (System_String_o *)this->fields.m_CancellationTokenSource,
        v30,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v21,
        v35);
      return;
    case 7:
      v36 = v4->fields.haveStone;
      v37 = v4->fields.needStone;
      v38 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v39 = v4->fields.gachaParamData;
      if ( !v39 || !this )
        goto LABEL_112;
      v40 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v39->fields.gachaId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
      v41 = v4->fields.gachaParamData;
      if ( !v41 )
        goto LABEL_112;
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v41->fields.gachaId,
                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_112;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v43);
      if ( v40 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v44);
        v45 = GachaDetailEntity__GetScriptIntArray(v40, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v40, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v45 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C22084(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v47);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v48, v45, v49) )
              goto LABEL_82;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_112;
      v50 = v36 - v37;
      afterChargeStoneNum = (v38 - v37) & ~((v38 - v37) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v52 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v53 = v4->fields.summonInfoCtr;
        if ( v53 )
        {
          v54 = v4->fields.gachaParamData;
          if ( v54 )
          {
            if ( v52 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v4->fields.confirmDlgInfo,
                (int32_t)this,
                v53->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v50,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                ListGachaExtraGift,
                v54->fields.shopIdIdx,
                isAppendSummon);
              return;
            }
          }
        }
        goto LABEL_112;
      }
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_112;
      v55 = v4->fields.summonInfoCtr;
      if ( !v55 )
        goto LABEL_112;
      v56 = v4->fields.gachaParamData;
      if ( !v56 )
        goto LABEL_112;
      v57 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      v58 = (System_String_o *)v57->fields.m_CancellationTokenSource;
      v59 = v55->fields.payGachaPrice;
      v60 = v56->fields.gachaTime;
      v102 = v4->fields.haveChargeStone;
      v103 = v4->fields.haveStone;
      v61 = v4->fields.haveFreeStone;
      v100 = v56->fields.isAppendSummon;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_112;
      v62 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      v97 = v60;
      v98 = v59;
      v63 = BYTE1(v62->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_112;
      summonCloseAt = this->fields.titleInfo;
      title = v58;
      if ( HasFlag )
      {
        v65 = v4->fields.gachaParamData;
        if ( !v65 )
          goto LABEL_112;
        gachaId = v65->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C22084(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v93 = v4->fields.gachaParamData;
      if ( !v93 || !v52 )
LABEL_112:
        sub_1C22094(this, beforeDetailFlag);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v52,
        title,
        7,
        v98,
        v97,
        v103,
        v61,
        v102,
        v50,
        v61,
        afterChargeStoneNum,
        callback,
        v100,
        v63 != 0,
        (int64_t)summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        ListGachaExtraGift,
        v93->fields.shopIdIdx,
        v95);
      return;
    default:
      return;
  }
}


void __fastcall SummonControl__showHelpImg(SummonControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v4; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  int32_t monitor; // w22
  _QWORD *v12; // x8
  _DWORD *v13; // x8
  int32_t v14; // w22
  int32_t klass; // w23
  int64_t klass_low; // x24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int64_t v26; // x1
  Il2CppClass **v27; // x0
  int32_t v28; // w22

  if ( (byte_4BD8BC6 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD8BC6 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v4 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v4, 0LL);
    if ( EventTutorialEntity )
    {
      v6 = (System_Collections_Generic_List_object__o *)EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v6->fields._size >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v6,
                     v8,
                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v6,
                       v8,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
              if ( !Item )
                break;
              monitor = (int32_t)Item[1].monitor;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              if ( !TutorialFlag__GetGachaFlg(monitor, 0LL) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                v12 = Item[3].monitor;
                if ( !v12 )
                  break;
                if ( v12[3] )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v13 = Item[3].monitor;
                  if ( !v13 )
                    break;
                  if ( !v13[6] )
                    sub_1C2209C(Item, v10);
                  v14 = v13[8];
                }
                else
                {
LABEL_23:
                  v14 = 0;
                }
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                if ( CondType__IsOpen(klass, v14, klass_low, 0, 0LL, 0LL) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v7 )
                    break;
                  items = v7->fields._items;
                  v24 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v7->fields._version;
                  if ( !items )
                    break;
                  size = v7->fields._size;
                  v26 = (int64_t)Item;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v7,
                      Item,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + size;
                    v7->fields._size = size + 1;
                    v27[4] = (Il2CppClass *)v26;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), v26, v17, v18, v19, v20, v21, v22);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v28 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                  TutorialFlag__SetGachaFlg(v28, 0LL);
                }
              }
            }
            if ( ++v8 >= v6->fields._size )
              goto LABEL_39;
          }
          sub_1C22094(Item, v10);
        }
LABEL_39:
        EventTutorialMaster__TutorialChainWithoutCheckStart(
          (System_Collections_Generic_List_EventTutorialEntity__o *)v7,
          0LL,
          0LL);
      }
    }
  }
}


void __fastcall SummonControl__showServantDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *_38930984; // x0
  const MethodInfo *v4; // x1
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  System_Action_o *_9__254_0; // x21
  Il2CppObject *v8; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v18; // x8
  struct GachaInfos_array *v19; // x8
  __int64 v20; // x9
  GachaInfos_o *v21; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v24; // x22
  struct GachaInfos_array *v25; // x8
  __int64 v26; // x9
  GachaInfos_o *v27; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v29; // x20
  ServantStatusDialog_EndDelegate_o *v30; // x22

  if ( (byte_4BD8C06 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl_DialogCallBack__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&Method_SummonControl___c__showServantDialog_b__254_0__);
    sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8C06 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38930984 = (Il2CppObject *)TutorialFlag__Get_38930984(107, 0LL);
  if ( ((unsigned __int8)_38930984 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _38930984 = (Il2CppObject *)TutorialFlag__Get_38930984(108, 0LL);
    if ( ((unsigned __int8)_38930984 & 1) == 0 )
    {
      _38930984 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v4);
      if ( ((unsigned __int8)_38930984 & 1) != 0 )
      {
        _38930984 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = (CommonUI_o *)_38930984;
        v6 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v6 = SummonControl___c_TypeInfo;
        }
        _9__254_0 = v6->static_fields->__9__254_0;
        if ( !_9__254_0 )
        {
          if ( !v6->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = SummonControl___c_TypeInfo;
          }
          v8 = (Il2CppObject *)v6->static_fields->__9;
          _9__254_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(_9__254_0, v8, Method_SummonControl___c__showServantDialog_b__254_0__, 0LL);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__254_0 = _9__254_0;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__254_0,
            (int64_t)_9__254_0,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
        }
        if ( !v5 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_31154092(v5, 2, 108, _9__254_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
LABEL_35:
    sub_1C2209C(_38930984, v4);
  v18 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v18 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v18->fields.type, 0LL) )
  {
    _38930984 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_38930984 )
      goto LABEL_34;
    _38930984 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_38930984,
                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v19 = this->fields.gachaResInfoList;
    if ( !v19 )
      goto LABEL_34;
    v20 = this->fields.getSvtIdx;
    if ( (unsigned int)v20 < v19->max_length )
    {
      v21 = v19->m_Items[v20];
      if ( v21 )
      {
        if ( _38930984 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_38930984,
                     v21->fields.userSvtId,
                     (const MethodInfo_325E324 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v24 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v24, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_31140820(
              (CommonUI_o *)Instance,
              0,
              (UserCommandCodeEntity_o *)Entity,
              v24,
              0LL,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      sub_1C22094(_38930984, v4);
    }
    goto LABEL_35;
  }
  _38930984 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = this->fields.gachaResInfoList;
  if ( !v25 )
    goto LABEL_34;
  v26 = this->fields.getSvtIdx;
  if ( (unsigned int)v26 >= v25->max_length )
    goto LABEL_35;
  v27 = v25->m_Items[v26];
  if ( !v27 )
    goto LABEL_34;
  userSvtId = v27->fields.userSvtId;
  v29 = (CommonUI_o *)_38930984;
  v30 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v30, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v29 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_31137496(v29, 6, userSvtId, v30, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD8BDE & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl_endPurchaseStone__);
    byte_4BD8BDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C22084(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_1C22094(v5, v6);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v4, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BD8BFF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__showSummonEffect_b__242_0__);
    byte_4BD8BFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__242_0__, 0LL);
  if ( !v5 )
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4BD8C09 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl__showSummonResultInfo_b__258_0__);
    byte_4BD8C09 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 0, 0LL, 37, 0LL);
  }
  else
  {
    titleInfo = (TitleInfoControl_o *)this->fields.maskBgObject;
    if ( !titleInfo )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0LL, 37, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setBackBtnSprite_38384144(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v7 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__258_0__, 0LL);
      if ( !Instance )
        goto LABEL_23;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v9, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v4);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_23;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo )
    goto LABEL_23;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_23;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)titleInfo, 0LL) )
    return;
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo )
LABEL_23:
    sub_1C22094(titleInfo, method);
  SummonResultComponent__SetActive((SummonResultComponent_o *)titleInfo, 1, 0LL);
}


void __fastcall SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD8BD7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl_endPurchaseSvtEqFrame__);
    sub_1C21E38(&Method_SummonControl_resetStoneInfo__);
    byte_4BD8BD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD8BD5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonControl_endPurchaseSvtFrame__);
    sub_1C21E38(&Method_SummonControl_resetStoneInfo__);
    byte_4BD8BD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1C22084(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  CommonUI__OpenServantFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0LL);
}


void __fastcall SummonControl__showSvtTalk(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v8; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  DataManager_o *v12; // x24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v14; // x22
  int32_t v15; // w24
  ServantVoiceEntity_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *summonScriptId; // x23
  Il2CppObject *v19; // x24
  System_Action_o *v20; // x25
  ServantAssetArgs_o *v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v29; // x23
  System_Action_o *v30; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BD8C03 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&ServantAssetArgs_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Method_SummonControl__showSvtTalk_b__249_0__);
    sub_1C21E38(&Method_SummonControl_close__);
    sub_1C21E38(&StringLiteral_3610/*"CLICK_OK"*/);
    byte_4BD8C03 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_40;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1C2209C(Instance, v5);
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_40;
  userSvtId = v8->fields.userSvtId;
  objectId = v8->fields.objectId;
  limitCount = v8->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v12 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v12,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_40;
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !MasterData_object )
      goto LABEL_40;
    if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity((ServantVoiceMaster_o *)MasterData_object, objectId, 0LL) )
      goto LABEL_17;
  }
  else
  {
LABEL_16:
    if ( entity && !ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL)
      || SvtType__IsCommandCode(v8->fields.type, 0LL) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3610/*"CLICK_OK"*/, 0LL);
        return;
      }
      goto LABEL_40;
    }
  }
  Instance = (DataManager_o *)this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_40;
    SummonResultComponent__SetActive((SummonResultComponent_o *)Instance, 0, 0LL);
  }
  if ( userSvtId < 1 )
  {
    v14 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v12,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_40;
    v14 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_object )
LABEL_40:
    sub_1C22094(Instance, v5);
  v15 = (int)Instance;
  v16 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v16 && (v17 = ServantVoiceEntity__GetSummonScriptId(v16, v15, 0LL)) != 0LL )
  {
    summonScriptId = v17;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__249_0__, 0LL);
    if ( !v19 )
      goto LABEL_40;
    ScriptManager__PlayGacha_42715072(
      (ScriptManager_o *)v19,
      (UserServantEntity_o *)v14,
      objectId,
      limitCount,
      0,
      1,
      v20,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v21 = (ServantAssetArgs_o *)sub_1C22084(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_44664732(v21, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v21;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.battleAssetArgs,
        (int64_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v29 )
      goto LABEL_40;
    ScriptManager__PlayGacha_42715072(
      (ScriptManager_o *)v29,
      (UserServantEntity_o *)v14,
      objectId,
      limitCount,
      0,
      1,
      v30,
      0,
      0,
      0LL,
      0LL);
  }
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__176___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__176__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *v8; // x19
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Object_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v8 = this;
  if ( (byte_4BD8C4C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8C4C = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    mBannerSpringPanelRetryCount = _4__this->fields.mBannerSpringPanelRetryCount;
    _4__this->fields.mBannerSpringPanelRetryCount = mBannerSpringPanelRetryCount + 1;
    if ( mBannerSpringPanelRetryCount >= 10 )
    {
LABEL_14:
      spring_5__2 = (UnityEngine_Object_o *)v8->fields._spring_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(spring_5__2, 0LL, 0LL) )
      {
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL)) == 0LL)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0LL),
              !summonMBannerCenterChild) )
        {
LABEL_22:
          sub_1C22094(this, method);
        }
        UICenterOnChild__CenterOn_47836756(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v8->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v8->fields._spring_5__2,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v19 = (UnityEngine_Object_o *)v8->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v19, 0LL, 0LL) )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v20, v21, v22, v23, v24, v25);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v8->fields._spring_5__2 = 0LL;
    v8->fields.__1__state = -1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._spring_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_22;
    goto LABEL_9;
  }
  return 0;
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__176__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__176__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__176__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__176__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__251___ctor(
        SummonControl__WaitBattleChrLoad_d__251_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__251__MoveNext(
        SummonControl__WaitBattleChrLoad_d__251_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  PlayMakerFSM_o *fsm; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BD8C4D & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&StringLiteral_3610/*"CLICK_OK"*/);
    byte_4BD8C4D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    this->fields._wait_5__2 = v5;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._wait_5__2, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)wait_5__2, v14, v15, v16, v17, v18, v19);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_19;
  battleAssetArgs = _4__this->fields.battleAssetArgs;
  if ( battleAssetArgs )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadServant(battleAssetArgs, 0LL);
    _4__this->fields.battleAssetArgs = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.battleAssetArgs, 0LL, v24, v25, v26, v27, v28, v29);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1C22094(fsm, v13);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3610/*"CLICK_OK"*/, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__251__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__251_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__251__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__251_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SummonControl__WaitBattleChrLoad_d__251_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__251__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__251_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__251__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__251_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8C46 & 1) == 0 )
  {
    sub_1C21E38(&SummonControl___c_TypeInfo);
    byte_4BD8C46 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SummonControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SummonControl___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___BonusSelectServantSelectDialog_b__303_1(
        SummonControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD8C48 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8C48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___exeFormation_b__152_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0LL);
}


void __fastcall SummonControl___c___openAfterSummonInfo_b__151_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


int32_t __fastcall SummonControl___c___openSvtEqInfo_b__153_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__259_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__218_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD8C47 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8C47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___showServantDialog_b__254_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__242_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__258_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c__DisplayClass153_0___ctor(
        SummonControl___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass153_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  void *Request_object; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  int32_t v6; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_4BD8C49 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_3576/*"CLEAR_TUTORIAL"*/);
    byte_4BD8C49 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_21;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0LL);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_21;
  v5 = 0;
  while ( v5 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v5,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Request_object )
      goto LABEL_21;
    if ( *((_DWORD *)Request_object + 6) != 1 )
    {
      Request_object = this->fields.tutoList;
      if ( !Request_object )
        goto LABEL_21;
      Request_object = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Request_object,
                         v5,
                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_21;
      v6 = *((_DWORD *)Request_object + 6);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetGachaFlg(v6, 0LL);
    }
    Request_object = this->fields.tutoList;
    ++v5;
    if ( !Request_object )
      goto LABEL_21;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0LL )
LABEL_21:
    sub_1C22094(Request_object, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3576/*"CLEAR_TUTORIAL"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass270_0___ctor(
        SummonControl___c__DisplayClass270_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass270_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass270_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass270_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4BD8C4A & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass270_0_o *)sub_1C21E38(&StringLiteral_5907/*"EXECUTE"*/);
    byte_4BD8C4A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass270_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1C22094(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5907/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass271_0___ctor(
        SummonControl___c__DisplayClass271_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass271_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass271_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass271_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4BD8C4B & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass271_0_o *)sub_1C21E38(&StringLiteral_5907/*"EXECUTE"*/);
    byte_4BD8C4B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass271_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1C22094(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5907/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass290_0___ctor(
        SummonControl___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonControl___c__DisplayClass290_0___OnClickSummonListBtn_b__1(
        SummonControl___c__DisplayClass290_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  struct GachaEntity_o *gachaInfo; // x8

  if ( !x || (gachaInfo = this->fields.gachaInfo) == 0LL )
    sub_1C22094(this, x);
  return x->fields.id == gachaInfo->fields.id;
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}