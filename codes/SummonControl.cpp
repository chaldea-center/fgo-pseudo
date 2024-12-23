void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  struct SummonControl_StaticFields *static_fields; // x0
  int64_t v10; // x1

  if ( (byte_4B632D0 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonControl_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_3355/*"BonusSelectSummonSaveKey"*/, v8);
    byte_4B632D0 = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v10 = StringLiteral_3355/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3355/*"BonusSelectSummonSaveKey"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x1
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B632CF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaSubEntity__TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_19965/*"gachaIds"*/, v14);
    sub_1BE4ACC(&StringLiteral_6981/*"FrequencyType"*/, v15);
    byte_4B632CF = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BE2E10;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BE31C0;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BE2F50;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v16 = StringLiteral_19965/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19965/*"gachaIds"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.DETAIL_SCRIPT_IDS, v16, v2, v3, v4, v5, v6, v7);
  v17 = StringLiteral_6981/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6981/*"FrequencyType"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.DETAIL_SCRIPT_TYPE, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.vaildGachaList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v31;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaSubEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v38;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.gachaSubEntityList,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x21
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_String_o *name; // x1
  int8x16_t v23; // q0
  System_String_o *WebViewAddress_39478212; // x0
  System_String_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t gachaGroupId; // w8
  int32_t gachaListGroupId; // w8
  int32_t maxDrawNum; // w8
  int64_t v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x22
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v52; // x8
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8

  if ( (byte_4B6325D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaSubMaster___, data);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaSubEntity__Add__, v9);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&VaildGachaInfo_TypeInfo, v12);
    byte_4B6325D = 1;
  }
  v13 = sub_1BE4D18(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v13, 0LL);
  if ( !data || !v13 )
    goto LABEL_25;
  *(_DWORD *)(v13 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v13 + 24) = name;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)name, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = data->fields.beforeGachaId;
  v23 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCuLL));
  *(int8x16_t *)(v13 + 36) = vextq_s8(v23, v23, 0xCuLL);
  *(_DWORD *)(v13 + 52) = data->fields.type;
  *(_DWORD *)(v13 + 60) = data->fields.ticketItemId;
  *(_BYTE *)(v13 + 64) = 1;
  *(_BYTE *)(v13 + 84) = data->fields.freeDrawFlag > 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_39478212 = NetworkManager__getWebViewAddress_39478212(1, 0LL);
  v25 = System_String__Concat_62698808(WebViewAddress_39478212, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v13 + 88) = v25;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 88), (int64_t)v25, v26, v27, v28, v29, v30, v31);
  gachaGroupId = data->fields.gachaGroupId;
  *(_DWORD *)(v13 + 96) = gachaGroupId;
  *(_BYTE *)(v13 + 100) = gachaGroupId > 0;
  *(_BYTE *)(v13 + 101) = data->fields.pickupId > 0;
  gachaListGroupId = data->fields.gachaListGroupId;
  *(_DWORD *)(v13 + 104) = gachaListGroupId;
  *(_BYTE *)(v13 + 108) = gachaListGroupId > 0;
  maxDrawNum = data->fields.maxDrawNum;
  *(_DWORD *)(v13 + 80) = 0;
  *(_DWORD *)(v13 + 68) = 0;
  *(_DWORD *)(v13 + 112) = maxDrawNum;
  v35 = sub_1BE4B74(int___TypeInfo, 0LL);
  *(_QWORD *)(v13 + 72) = v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 72), v35, v36, v37, v38, v39, v40, v41);
  *(_OWORD *)(v13 + 128) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v13 + 144) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v48 = (int64_t)Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_25;
      v49 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v50 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v49 )
        goto LABEL_25;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v49 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v48,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = v49 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v52 + 32) = v48;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v52 + 32), v48, v42, v43, v44, v45, v46, v47);
      }
      *(_DWORD *)(v13 + 80) = *(_DWORD *)(v48 + 20);
      *(_DWORD *)(v13 + 40) = *(_DWORD *)(v48 + 28);
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_25;
    *(_DWORD *)(v13 + 40) = targetEntity->fields.imageId;
    *(_DWORD *)(v13 + 68) = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_QWORD *)(v13 + 72) = adjustIds;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 72), (int64_t)adjustIds, v42, v43, v44, v45, v46, v47);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v55 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v56 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v55) )
  {
LABEL_25:
    sub_1BE4D28(Instance, v15);
  }
  v57 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v13,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = v55 + 8 * v57;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v57 + 1;
    *(_QWORD *)(v58 + 32) = v13;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v58 + 32), v13, v42, v43, v44, v45, v46, v47);
  }
}


void __fastcall SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  SummonInfoDlgComponent_CallbackFunc_o *v12; // x23

  if ( (byte_4B63297 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl_beforeConfirmCautionResult__, v5);
    byte_4B63297 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0LL)) == 0LL
    || (v9 = (System_String_o *)*((_QWORD *)Instance + 3),
        v10 = (System_String_o *)*((_QWORD *)Instance + 4),
        infoDlgInfo = this->fields.infoDlgInfo,
        v12 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1BE4D28(Instance, v7);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v9, v10, v12, 0LL);
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
  if ( (byte_4B632C9 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_3084/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, method);
    byte_4B632C9 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3084/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1BE4D28(this, method);
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
  __int64 v3; // x1
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9
  __int64 *v8; // x8

  v2 = this;
  if ( (byte_4B632C8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3498/*"CHECK_STONE"*/, method);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_3084/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, v3);
    byte_4B632C8 = 1;
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
    sub_1BE4D28(this, method);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v8 = &StringLiteral_3498/*"CHECK_STONE"*/;
  else
    v8 = &StringLiteral_3084/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectCloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B632CE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, res);
    sub_1BE4ACC(&StringLiteral_7079/*"GO_BUY_STONE"*/, v5);
    byte_4B632CE = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v7 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_7079/*"GO_BUY_STONE"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1BE4D28(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  SummonControl__BonusSelectServantSelectDialog(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectNotHaveChargeStoneDialog(
        SummonControl_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  int32_t needStone; // w21
  int32_t haveChargeStone; // w22
  int32_t haveFreeStone; // w23
  SummonConfirmDlgComponent_CallbackFunc_o *v11; // x24
  const MethodInfo *v12; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B632CC & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res);
    sub_1BE4ACC(&Method_SummonControl_GoBuyStone__, v5);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v6);
    byte_4B632CC = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    needStone = this->fields.needStone;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v11 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_GoBuyStone__,
      v12);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        confirmDlgInfo,
        needStone,
        haveChargeStone,
        haveFreeStone,
        v11,
        0LL);
      return;
    }
LABEL_8:
    sub_1BE4D28(fsm, res);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall SummonControl__BonusSelectServantSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x21

  if ( (byte_4B632CA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_SummonControl__BonusSelectServantSelectDialog_b__299_0__, v8);
    byte_4B632CA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v13 = (BonusSelectSummonAssetManager_o *)sub_1BE4D18(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v13, 0LL);
        this->fields.bonusSelectAssetManager = v13;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.bonusSelectAssetManager,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__299_0__,
        0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v20, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BE4D28(Master_object, v10);
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
  if ( (byte_4B6328C & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, result);
    byte_4B6328C = 1;
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
      SummonControl__showConfirmDlg_33853460(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_1BE4A70(
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
    sub_1BE4D28(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v7; // x8

  if ( (byte_4B632CB & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3085/*"BONUS_SELECT_SERVANT_SELECT"*/, res);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v5);
    byte_4B632CB = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BE4D28(confirmDlgInfo, res);
  }
  v7 = (System_String_o **)&StringLiteral_3085/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v7 = (System_String_o **)&StringLiteral_3568/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, *v7, 0LL);
}


bool __fastcall SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  System_Collections_Generic_List_object__o *gachaSubEntityList; // x21
  Il2CppObject *v18; // x20
  System_Predicate_object__o *v19; // x22
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x22
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  System_Action_o *v24; // x25

  if ( (byte_4B6328F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaSubMaster___, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaSubEntity__Find__, v4);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&System_Predicate_GachaSubEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BE4ACC(&Method_SummonControl_SummonSceneRefresh__, v9);
    sub_1BE4ACC(&Method_SummonControl__CheckFriendPointSummonUpdate_b__218_0__, v10);
    sub_1BE4ACC(&StringLiteral_15015/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v11);
    sub_1BE4ACC(&StringLiteral_15014/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v12);
    byte_4B6328F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v18 = (Il2CppObject *)OpenEntity;
  v19 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_GachaSubEntity__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_SummonControl__CheckFriendPointSummonUpdate_b__218_0__,
    0LL);
  if ( !gachaSubEntityList )
    goto LABEL_13;
  v20 = System_Collections_Generic_List_object___Find(
          gachaSubEntityList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v18 != v20 )
  {
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15015/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_15014/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
    v24 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
    if ( v21 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v21, v22, v23, v24, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return v18 != v20;
    }
LABEL_13:
    sub_1BE4D28(Instance, v14);
  }
  return v18 != v20;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1BE4D28(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BE4D30(this, ids);
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
  __int64 v3; // x1
  struct GachaInfos_array *gachaResInfoList; // x9
  int v5; // w8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_4B632AE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9393/*"NEXT_SVT"*/, method);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_6520/*"FINAL_SVT"*/, v3);
    byte_4B632AE = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v5 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v5;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_1BE4D28(this, method);
  if ( v5 >= (signed int)gachaResInfoList->max_length )
    v6 = &StringLiteral_6520/*"FINAL_SVT"*/;
  else
    v6 = &StringLiteral_9393/*"NEXT_SVT"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


bool __fastcall SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v10; // x1
  UserGameEntity_o *v11; // x20
  BalanceConfig_c *v12; // x8
  int v13; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int32_t QpMax; // w9
  struct BalanceConfig_StaticFields *v18; // x10
  int32_t v19; // w23
  int32_t qp; // w21
  struct BalanceConfig_StaticFields *v21; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v25; // x21
  System_Action_o *v26; // x22
  SummonLimitWarningDlgComponent_o *v27; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v28; // x21
  System_Action_o *v29; // x22
  SummonLimitWarningDlgComponent_o *v30; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v31; // x21
  System_Action_o *v32; // x22

  if ( (byte_4B63290 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v3);
    sub_1BE4ACC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&Method_SummonControl_autoSellSettingChange__, v5);
    sub_1BE4ACC(&Method_SummonControl_limitManaConfirmResult__, v6);
    sub_1BE4ACC(&Method_SummonControl_limitQpConfirmResult__, v7);
    sub_1BE4ACC(&Method_SummonControl_showConfirmDlg__, v8);
    byte_4B63290 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  v11 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v12 = BalanceConfig_TypeInfo;
  v13 = (int)SelfUserGame;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  static_fields = v12->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BalanceConfig_TypeInfo;
      v18 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v18->QpMax;
      FriendPointSummonQpWarning = v18->FriendPointSummonQpWarning;
    }
    v19 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v13 )
      return 0;
  }
  else
  {
    v19 = QpMax + gachaParamData->fields.gachaResourceNum / -200 * FriendPointSummonQpWarning;
    if ( !v13 )
      return 0;
  }
  qp = v11->fields.qp;
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = BalanceConfig_TypeInfo;
  }
  v21 = v12->static_fields;
  if ( qp >= v21->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v25, v26, 0LL);
  }
  else
  {
    if ( v11->fields.qp < v19 )
    {
      mana = v11->fields.mana;
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v21 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v21->UserItemMax )
        return 0;
      v30 = this->fields.limitWarningDlgInfo;
      v31 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v32 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v30 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v30, v31, v32, 0LL);
        return 1;
      }
LABEL_28:
      sub_1BE4D28(SelfUserGame, v10);
    }
    v27 = this->fields.limitWarningDlgInfo;
    v28 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v29 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v27 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v27, v28, v29, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v5; // x8

  if ( (byte_4B632C7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_11281/*"RETURN_MAIN"*/, method);
    sub_1BE4ACC(&StringLiteral_11283/*"RETURN_RESULT"*/, v3);
    byte_4B632C7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_11283/*"RETURN_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11281/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, *v5, 0LL);
}


void __fastcall SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  SummonControl_c *v14; // x0
  Il2CppObject *String_70410276; // x19
  System_Object_array *v16; // x19
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B6328B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v2);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v3);
    sub_1BE4ACC(&Method_JsonManager_DeserializeArray_SelectBonusData___, v4);
    sub_1BE4ACC(&JsonManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v10);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v11);
    sub_1BE4ACC(&string_TypeInfo, v12);
    sub_1BE4ACC(&SummonControl_TypeInfo, v13);
    byte_4B6328B = 1;
  }
  v14 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_70410276 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70410276(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_70410276, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_object_(
            String_70410276,
            (const MethodInfo_2FC092C *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v16 )
      sub_1BE4D28(v18, v19);
  }
}


bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B6325A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B6325A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v8);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CheckValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_GachaSubEntity__o *gachaSubEntityList; // x8
  int32_t v15; // w2
  int v16; // w9
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v21; // x3
  StoryGachaAdjustData_o *v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  System_Comparison_T__o *v24; // x21
  StoryGachaAdjustData_o *v25; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4B63259 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_VaildGachaInfo__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v9);
    this = (SummonControl_o *)sub_1BE4ACC(&Method_SummonControl_SlotCompare__, v10);
    byte_4B63259 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v25 = 0LL;
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_21;
  size = vaildGachaList->fields._size;
  v13 = vaildGachaList->fields._version + 1;
  vaildGachaList->fields._size = 0;
  vaildGachaList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  gachaSubEntityList = v2->fields.gachaSubEntityList;
  if ( !gachaSubEntityList )
    goto LABEL_21;
  v15 = gachaSubEntityList->fields._size;
  v16 = gachaSubEntityList->fields._version + 1;
  gachaSubEntityList->fields._size = 0;
  gachaSubEntityList->fields._version = v16;
  if ( v15 >= 1 )
    System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v15, 0LL);
  this = (SummonControl_o *)v2->fields.gachaMst;
  if ( !this )
    goto LABEL_21;
  this = (SummonControl_o *)GachaMaster__GetValidGachaEntityList((GachaMaster_o *)this, 0LL);
  if ( !this )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1BE4D28(v17, v18);
    if ( SummonControl__CheckStoryGachaAdjustData(
           (SummonControl_o *)v17,
           &v25,
           (int32_t)v26.fields._current[1].klass,
           v19) )
    {
      v22 = v25;
    }
    else
    {
      v22 = 0LL;
      v25 = 0LL;
    }
    SummonControl__AddVaildGachaInfoList(v2, (GachaEntity_o *)current, v22, v21);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
  v23 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v24 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v24, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0LL);
  if ( !v23 )
LABEL_21:
    sub_1BE4D28(this, method);
  System_Collections_Generic_List_object___Sort_56548584(
    v23,
    v24,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B63287 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B63287 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v5);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B63265 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_TypeInfo, method);
    byte_4B63265 = 1;
  }
  v3 = sub_1BE4D18(SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  struct GachaRqParamData_o *v23; // x8
  Il2CppObject *Entity; // x21
  struct GachaRqParamData_o *v25; // x8
  System_String_o *basePanel; // x20
  SummonConfirmDlgComponent_o *v27; // x22
  int v28; // w23
  System_String_o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  float v34; // s8
  int32_t fontSize; // w27
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v37; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v40; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v41; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v42; // x24
  bool isCustomLayOut; // w28
  struct GachaRqParamData_o *v44; // x8
  SummonCautionDlgComponent_o *cautionDlgInfo; // x23
  System_String_o *m_CancellationTokenSource; // x22
  int klass; // w29
  int64_t v48; // x21
  char v49; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v50; // x24
  struct GachaRqParamData_o *v51; // x8
  int32_t v52; // w25
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v53; // x26
  int v54; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B63294 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaDetailMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&int_TypeInfo, v10);
    sub_1BE4ACC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v11);
    sub_1BE4ACC(&Method_SummonControl_ConfirmMessageOpen__, v12);
    sub_1BE4ACC(&Method_SummonControl_SetDispBtn__, v13);
    sub_1BE4ACC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v14);
    sub_1BE4ACC(&Method_SummonControl_confirmCautionResult__, v15);
    sub_1BE4ACC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v16);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v17);
    sub_1BE4ACC(&StringLiteral_23647/*"showGroupRemainingDrawNum"*/, v18);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v19);
    byte_4B63294 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v21 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_ConfirmMessageOpen__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v22, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v37 = this->fields.gachaParamData;
              if ( v37 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v37->fields.gachaId;
                v40 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v40,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v41 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v41,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v42 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v42,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v40, v41, v42, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_43;
  }
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
  v23 = this->fields.gachaParamData;
  if ( !v23 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v23->fields.gachaId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaDetailMaster___);
  v25 = this->fields.gachaParamData;
  if ( !v25 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailMaster__GetGachaDetailEntity(
                                                    (GachaDetailMaster_o *)confirmDlgInfo,
                                                    v25->fields.gachaId,
                                                    0LL);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  basePanel = (System_String_o *)confirmDlgInfo->fields.basePanel;
  v27 = confirmDlgInfo;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailEntity__GetScriptInt(
                                                    (GachaDetailEntity_o *)confirmDlgInfo,
                                                    (System_String_o *)StringLiteral_23647/*"showGroupRemainingDrawNum"*/,
                                                    -1,
                                                    0LL);
  v28 = (int)confirmDlgInfo;
  if ( (int)confirmDlgInfo < 1 )
  {
    fontSize = 0;
    v34 = 0.0;
  }
  else
  {
    if ( !Entity )
      goto LABEL_43;
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.gachaMst;
    if ( !confirmDlgInfo )
      goto LABEL_43;
    v29 = (System_String_o *)v27->fields.basePanel;
    v54 = GachaMaster__GetGroupRemainingDrawNum((GachaMaster_o *)confirmDlgInfo, (int32_t)Entity[9].klass, 0LL)
        / SLODWORD(Entity[4].klass);
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v30, v31, v32);
    basePanel = System_String__Format(v29, v33, 0LL);
    v34 = 26.0;
    fontSize = 22;
  }
  isCustomLayOut = v28 > 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
  v44 = this->fields.gachaParamData;
  if ( !v44 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v44->fields.gachaId,
                                                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL);
  if ( !Entity )
    goto LABEL_43;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  m_CancellationTokenSource = (System_String_o *)v27->fields.m_CancellationTokenSource;
  klass = (int)Entity[9].klass;
  v48 = (int64_t)Entity[7].klass;
  v49 = (char)confirmDlgInfo;
  v50 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v50,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    0LL);
  if ( (v49 & 1) != 0 )
  {
    v51 = this->fields.gachaParamData;
    if ( !v51 )
      goto LABEL_43;
    v52 = v51->fields.gachaId;
  }
  else
  {
    v52 = 0;
  }
  v53 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v53,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_1BE4D28(confirmDlgInfo, result);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    m_CancellationTokenSource,
    basePanel,
    klass > 0,
    v48,
    v50,
    v52,
    v53,
    this->fields.bonusSelectAssetManager,
    isCustomLayOut,
    v34,
    fontSize,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B632A8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, flg);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SummonControl__DialogCallBack_b__252_0__, v6);
    byte_4B632A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__252_0__, 0LL);
  if ( !v9 )
    sub_1BE4D28(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B632A9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3617/*"CLOSE"*/, method);
    byte_4B632A9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3617/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B63286 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, result);
    byte_4B63286 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22370/*"ng"*/, 0LL) )
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t Item; // x0
  int32_t v18; // w21
  System_Collections_Generic_List_object__o *v19; // x8
  int64_t v20; // x23
  int32_t v21; // w24
  int64_t v22; // x22
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B632C4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v8);
    byte_4B632C4 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (int64_t)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1BE4D28(Item, v10);
  v18 = 0;
  while ( v18 < *(_DWORD *)(Item + 24) )
  {
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      v18,
                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v19 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v20 = Item;
      v21 = 0;
      v22 = Item;
      while ( v21 < v19->fields._size )
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v19,
                          v21,
                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v20 && Item )
        {
          if ( *(_DWORD *)(v20 + 16) != *(_DWORD *)(Item + 16) && *(_DWORD *)(v20 + 48) == *(_DWORD *)(Item + 48) )
          {
            if ( !v22 )
              goto LABEL_25;
            if ( *(_DWORD *)(v22 + 36) < *(_DWORD *)(Item + 36) )
              v22 = Item;
          }
          v19 = (System_Collections_Generic_List_object__o *)*baseGachaList;
          ++v21;
          if ( *baseGachaList )
            continue;
        }
        goto LABEL_25;
      }
      if ( v9 )
      {
        Item = System_Collections_Generic_List_object___Contains(
                 v9,
                 (Il2CppObject *)v22,
                 (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( (Item & 1) == 0 )
        {
          items = v9->fields._items;
          v24 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)v22,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v22;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v22, v11, v12, v13, v14, v15, v16);
          }
        }
        Item = (int64_t)*baseGachaList;
        ++v18;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v9;
  sub_1BE4A70((PartyOrganizationUtility_o *)baseGachaList, (int64_t)v9, v11, v12, v13, v14, v15, v16);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B6324A & 1) == 0 )
  {
    sub_1BE4ACC(&FSUtility_TypeInfo, method);
    byte_4B6324A = 1;
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
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_String_array *v12; // x19
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B6326E & 1) == 0 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B6326E = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B63302 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B63302 = 1;
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
  if ( !byte_4B63302 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B63302 = 1;
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
  v12 = System_String__Split(v3, 0x2Fu, 0, 0LL);
  if ( !byte_4B63303 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v5);
    byte_4B63303 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !v12 )
    goto LABEL_31;
  if ( (int)v12->max_length < 2 )
    return 0;
  v3 = v12->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_31:
    sub_1BE4D28(v3, method);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1BE4D30(v3, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  void *vaildGachaList; // x0
  int32_t v14; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x25
  int monitor; // w9
  int klass; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B632BA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    byte_4B632BA = 1;
  }
  entity = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_16:
    sub_1BE4D28(vaildGachaList, *(_QWORD *)&gachaId);
  v14 = 0;
  while ( v14 < *((_DWORD *)vaildGachaList + 6) )
  {
    gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v14,
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList || !gachaMst )
      goto LABEL_16;
    vaildGachaList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               gachaMst,
                               &entity,
                               *((_DWORD *)vaildGachaList + 4),
                               (const MethodInfo_31FD818 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)vaildGachaList & 1) == 0 )
      return -1;
    if ( !entity )
      goto LABEL_16;
    monitor = (int)entity[4].monitor;
    if ( monitor && monitor == extraGroupId )
      return v14;
    klass = (int)entity[9].klass;
    if ( klass )
    {
      if ( klass == gachaGroupId )
        return v14;
    }
    if ( LODWORD(entity[1].klass) == gachaId )
      return v14;
    vaildGachaList = this->fields.vaildGachaList;
    ++v14;
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
    sub_1BE4D28(0LL, groupId);
  return GachaMaster__GetGroupRemainingDrawNum(gachaMst, groupId, 0LL);
}


int64_t __fastcall SummonControl__GetSummonSceneInTime(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.summonSceneInTime;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__GoBuyStone(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w25
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v22; // x27

  if ( (byte_4B632CD & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res);
    sub_1BE4ACC(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, v5);
    sub_1BE4ACC(&Method_SummonControl_GoBuyStone__, v6);
    sub_1BE4ACC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v7);
    sub_1BE4ACC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v8);
    byte_4B632CD = 1;
  }
  if ( res )
  {
    v9 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_GoBuyStone__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_BonusSelectCloseShotStoneDlg__,
      v13);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || (gachaId = gachaParamData->fields.gachaId,
          haveStone = this->fields.haveStone,
          haveFreeStone = this->fields.haveFreeStone,
          haveChargeStone = this->fields.haveChargeStone,
          bonusSelectAssetManager = this->fields.bonusSelectAssetManager,
          v22 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v22,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0LL),
          !confirmDlgInfo) )
    {
      sub_1BE4D28(v14, v15);
    }
    SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
      confirmDlgInfo,
      v12,
      haveStone,
      haveFreeStone,
      haveChargeStone,
      gachaId,
      bonusSelectAssetManager,
      v22,
      0LL);
  }
}


void __fastcall SummonControl__GoFriendPointSummon(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  SummonControl__loadAssetsForSummon(this, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__IsRankUpClassId(SummonControl_o *this, int32_t classId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *canRankUpClassIds; // x0

  if ( (byte_4B632A1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId);
    byte_4B632A1 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B63254 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_6497/*"FAIL_LOAD"*/, data);
    sub_1BE4ACC(&StringLiteral_17771/*"btn_sumonhistory"*/, v10);
    sub_1BE4ACC(&StringLiteral_5564/*"END_LOAD"*/, v11);
    sub_1BE4ACC(&StringLiteral_17770/*"btn_summon_list"*/, v12);
    byte_4B63254 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_10;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6497/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.bannerAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v14);
  SummonControl__setPositionByWarId(this, v15);
  SummonControl__ResetArrowTween(this, v16);
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17771/*"btn_sumonhistory"*/, v17);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17771/*"btn_sumonhistory"*/,
          0LL),
        fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17770/*"btn_summon_list"*/, v18),
        !this->fields.summonInfoCtr)
    || (SummonInfoControl__SetSummonListSprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17770/*"btn_summon_list"*/,
          0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_10:
    sub_1BE4D28(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5564/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__NotHaveChargeStoneCheckSvtSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectcloseShotStoneDlg(this, 1, v2);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICenterOnChild_o *centerChild; // x8
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x21
  float x; // w20
  float y; // w24
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  v2 = this;
  if ( (byte_4B63261 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_3466/*"CHANGE_BANNER"*/, v4);
    byte_4B63261 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_26;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_26;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_26;
  v12 = *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v15 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_29;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v15, currentBannerComp, 0LL)
    || (struct VaildGachaInfo_o *)v12 != v2->fields.currentGachaInfo
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
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v15;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.currentBannerComp, (int64_t)v15, v6, v7, v8, v9, v10, v11);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v12;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.currentGachaInfo, v12, v17, v18, v19, v20, v21, v22);
    *(float *)&v2->fields.currentIdx = x;
    *(float *)&v2->fields.currentMoveIdx = y;
    SummonControl__setSliderIcon(v2, SLODWORD(x), v23);
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
          UICenterOnChild__CenterOn_47511680(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          this = (SummonControl_o *)v2->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
            SummonControl__UpdateSummonInfoControlLayout(v2, v25);
            SummonControl__showHelpImg(v2, v26);
            this = (SummonControl_o *)v2->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3466/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BE4D28(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x20
  float m_Width; // w23
  float m_Height; // w24
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  bool *p_isNotCenterOnSync; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_4B63262 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method);
    this = (SummonControl_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B63262 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_20;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_20;
  v11 = *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v14 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_14;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v14, currentSummonMBannerComponent, 0LL)
    || (struct VaildGachaInfo_o *)v11 != v2->fields.currentGachaInfo
    || LODWORD(m_Width) != v2->fields.currentIdx
    || LODWORD(m_Height) != v2->fields.currentMoveIdx )
  {
LABEL_14:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v14;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v2->fields.currentSummonMBannerComponent,
      (int64_t)v14,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.currentGachaInfo, v11, v17, v18, v19, v20, v21, v22);
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
          UICenterOnChild__CenterOn_47511680(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1BE4D28(this, method);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_19:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B632BD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3563/*"CLICK_BACK"*/, method);
    byte_4B632BD = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BE4D28(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3563/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_object__o *EventTutorialEntity; // x19
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
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

  if ( (byte_4B632C0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v6);
    sub_1BE4ACC(&Method_SummonControl_OnClickHelp__, v7);
    byte_4B632C0 = 1;
  }
  v8 = Method_SummonControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickHelp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_18;
  v13 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Collections_Generic_List_object__o *)EventTutorialMaster__GetEventTutorialEntity(
                                                                       0,
                                                                       34,
                                                                       v13,
                                                                       0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
    goto LABEL_18;
  if ( EventTutorialEntity->fields._size >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               EventTutorialEntity,
               v16,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( !LODWORD(Item[3].klass) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 EventTutorialEntity,
                 v16,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !v15 )
          break;
        items = v15->fields._items;
        v24 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        v26 = (int64_t)Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            Item,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 4), v26, v17, v18, v19, v20, v21, v22);
        }
      }
      if ( ++v16 >= EventTutorialEntity->fields._size )
        goto LABEL_17;
    }
LABEL_18:
    sub_1BE4D28(Item, v11);
  }
LABEL_17:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v15,
    0LL,
    0LL);
}


void __fastcall SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4B632C1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&Method_SummonControl_OnClickHisotry__, v5);
    sub_1BE4ACC(&Method_SummonControl__OnClickHisotry_b__284_0__, v6);
    byte_4B632C1 = 1;
  }
  v7 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickHisotry__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__284_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1BE4D28(Request_object, v11);
  GachaHistoryRequest__beginRequest((GachaHistoryRequest_o *)Request_object, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(
        SummonControl_o *this,
        int32_t moveIdx,
        bool isPlaySe,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20

  if ( (byte_4B63266 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_OnClickMiniBanner__, *(_QWORD *)&moveIdx);
    sub_1BE4ACC(&StringLiteral_12882/*"SetBannerCenter"*/, v7);
    byte_4B63266 = 1;
  }
  if ( this->fields.currentMoveIdx == moveIdx )
  {
    maskObject = this->fields.maskObject;
    if ( maskObject )
    {
      UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      return;
    }
LABEL_23:
    sub_1BE4D28(maskObject, *(_QWORD *)&moveIdx);
  }
  maskObject = (UnityEngine_GameObject_o *)this->fields.leftArrowBtn;
  if ( !maskObject )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskObject, 0, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.rightArrowBtn;
  if ( !maskObject )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskObject, 0, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !maskObject )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskObject, 0, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.summonMBannerRightArrowBtn;
  if ( !maskObject )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskObject, 0, 0LL);
  UnityEngine_MonoBehaviour__CancelInvoke_70436580(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12882/*"SetBannerCenter"*/,
    0LL);
  if ( isPlaySe )
  {
    v9 = Method_SummonControl_OnClickMiniBanner__;
    if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickMiniBanner__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0LL);
  }
  maskObject = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr;
  if ( !maskObject )
    goto LABEL_23;
  SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)maskObject, 0, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_23;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.bannerLoopCtr;
  this->fields.isDragging = 1;
  if ( !maskObject )
    goto LABEL_23;
  centerChild = this->fields.centerChild;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)maskObject,
                                             0LL);
  if ( !maskObject )
    goto LABEL_23;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)maskObject,
                                             moveIdx,
                                             0LL);
  if ( !centerChild )
    goto LABEL_23;
  UICenterOnChild__CenterOn_47511680(centerChild, (UnityEngine_Transform_o *)maskObject, 1, 0LL);
  maskObject = (UnityEngine_GameObject_o *)this->fields.summonMBannerLoopCtr;
  if ( !maskObject )
    goto LABEL_23;
  summonMBannerCenterChild = this->fields.summonMBannerCenterChild;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)maskObject,
                                             0LL);
  if ( !maskObject )
    goto LABEL_23;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)maskObject,
                                             moveIdx,
                                             0LL);
  if ( !summonMBannerCenterChild )
    goto LABEL_23;
  UICenterOnChild__CenterOn_47511680(summonMBannerCenterChild, (UnityEngine_Transform_o *)maskObject, 1, 0LL);
}


void __fastcall SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PossessionInfoDialog_o *possessionInfoDialog; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4B632C2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_OnClickPossessionInfo__, method);
    byte_4B632C2 = 1;
  }
  v3 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickPossessionInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo
    || (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL
    || (PossessionInfoDialog__Init(possessionInfoDialog, currentGachaInfo->fields.id, 0LL),
        (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL) )
  {
    sub_1BE4D28(possessionInfoDialog, v6);
  }
  PossessionInfoDialog__Open(possessionInfoDialog, 0LL);
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B63282 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__, method);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v3);
    byte_4B63282 = 1;
  }
  v4 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BE4D28(confirmDlgInfo, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v8);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B63283 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_OnClickStoneFragmentsInfo__, method);
    byte_4B63283 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B632BF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SummonControl_reDispSummonBannerList__, v3);
    byte_4B632BF = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_1BE4D28(v6, v7);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v5, 0LL);
}


void __fastcall SummonControl__OnClickSummonListBtn(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *useGachaData; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_ICollection_o *v26; // x20
  SummonListDialog_o *IsNullOrEmpty; // x0
  __int64 v28; // x1
  __int64 v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *current; // x1
  int32x2_t **v39; // x20
  System_Collections_Generic_List_object__o *v40; // x22
  System_Predicate_object__o *v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  _BOOL8 v44; // x0
  __int64 v45; // x1
  GachaMaster_o *gachaMst; // x0
  int64_t v47; // x21
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int32x2_t *v56; // x8
  signed __int32 v57; // w9
  System_Collections_Generic_List_object__o *v58; // x0
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x8
  SummonControl_o *v63; // x0
  const MethodInfo *v64; // x2
  System_Collections_Generic_List_object__o *v65; // x20
  System_Comparison_T__o *v66; // x21
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v68; // x9
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_object__o *vaildGachaList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B632C3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_VaildGachaInfo__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_GachaEntity___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_GachaEntity___, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v7);
    sub_1BE4ACC(&System_Func_GachaEntity__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Exists__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v13);
    sub_1BE4ACC(&System_Predicate_VaildGachaInfo__TypeInfo, v14);
    sub_1BE4ACC(&Method_SummonControl_OnClickSummonListBtn__, v15);
    sub_1BE4ACC(&Method_SummonControl_SlotCompare__, v16);
    sub_1BE4ACC(&Method_SummonControl__OnClickSummonListBtn_b__286_0__, v17);
    sub_1BE4ACC(&Method_SummonControl___c__DisplayClass286_0__OnClickSummonListBtn_b__1__, v18);
    sub_1BE4ACC(&SummonControl___c__DisplayClass286_0_TypeInfo, v19);
    sub_1BE4ACC(&VaildGachaInfo_TypeInfo, v20);
    byte_4B632C3 = 1;
  }
  v21 = Method_SummonControl_OnClickSummonListBtn__;
  memset(&v70, 0, sizeof(v70));
  if ( (*((_BYTE *)Method_SummonControl_OnClickSummonListBtn__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_OnClickSummonListBtn__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  useGachaData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.useGachaData;
  v24 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_GachaEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickSummonListBtn_b__286_0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          useGachaData,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v26 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v25,
                                              (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_GachaEntity___);
  IsNullOrEmpty = (SummonListDialog_o *)BasicHelper__IsNullOrEmpty(v26, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !v26 )
      goto LABEL_33;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v69,
      (System_Collections_Generic_List_object__o *)v26,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v70 = v69;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__) )
    {
      v29 = sub_1BE4D18(SummonControl___c__DisplayClass286_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      if ( !v29 )
        sub_1BE4D28(v30, v31);
      current = v70.fields._current;
      *(_QWORD *)(v29 + 16) = v70.fields._current;
      v39 = (int32x2_t **)(v29 + 16);
      sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)current, v32, v33, v34, v35, v36, v37);
      v40 = vaildGachaList;
      v41 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_VaildGachaInfo__TypeInfo);
      System_Predicate_object____ctor(
        v41,
        (Il2CppObject *)v29,
        Method_SummonControl___c__DisplayClass286_0__OnClickSummonListBtn_b__1__,
        0LL);
      if ( !v40 )
        sub_1BE4D28(v42, v43);
      v44 = System_Collections_Generic_List_object___Exists(
              v40,
              (System_Predicate_T__o *)v41,
              (const MethodInfo_35EC850 *)Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
      if ( !v44 )
      {
        if ( !*v39 )
          sub_1BE4D28(v44, v45);
        gachaMst = this->fields.gachaMst;
        if ( !gachaMst )
          sub_1BE4D28(0LL, v45);
        if ( GachaMaster__GetGroupRemainingDrawNum(gachaMst, (*v39)[18].n64_i32[0], 0LL) )
        {
          v47 = sub_1BE4D18(VaildGachaInfo_TypeInfo);
          VaildGachaInfo___ctor((VaildGachaInfo_o *)v47, 0LL);
          v56 = *v39;
          if ( !*v39 )
            sub_1BE4D28(v48, v49);
          if ( !v47 )
            sub_1BE4D28(v48, v49);
          *(_DWORD *)(v47 + 16) = v56[2].n64_u32[0];
          *(_DWORD *)(v47 + 48) = v56[5].n64_u32[1];
          *(int32x2_t *)(v47 + 36) = vrev64_s32(v56[4]);
          v57 = v56[18].n64_i32[1];
          *(_DWORD *)(v47 + 104) = v57;
          *(_BYTE *)(v47 + 108) = v57 > 0;
          *(_DWORD *)(v47 + 112) = v56[11].n64_u32[1];
          *(_DWORD *)(v47 + 144) = v56[19].n64_u32[1];
          v58 = vaildGachaList;
          if ( !vaildGachaList )
            sub_1BE4D28(0LL, v49);
          items = vaildGachaList->fields._items;
          v60 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++vaildGachaList->fields._version;
          if ( !items )
            sub_1BE4D28(v58, v49);
          size = v58->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              (Il2CppObject *)v47,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &items->obj.klass + size;
            v58->fields._size = size + 1;
            v62[4] = (Il2CppClass *)v47;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 4), v47, v50, v51, v52, v53, v54, v55);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v70,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    SummonControl__ExtractVaildGachaInfoOnPriority(
      v63,
      (System_Collections_Generic_List_VaildGachaInfo__o **)&vaildGachaList,
      v64);
    v65 = vaildGachaList;
    v66 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_VaildGachaInfo__TypeInfo);
    System_Comparison_object____ctor(v66, (Il2CppObject *)this, Method_SummonControl_SlotCompare__, 0LL);
    if ( !v65 )
LABEL_33:
      sub_1BE4D28(IsNullOrEmpty, v28);
    System_Collections_Generic_List_object___Sort_56548584(
      v65,
      v66,
      (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_33;
  v68 = this->fields.vaildGachaList;
  if ( !v68 )
    goto LABEL_33;
  IsNullOrEmpty = this->fields.summonListDialog;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  SummonListDialog__Init(
    IsNullOrEmpty,
    this->fields.currentMoveIdx,
    currentGachaInfo->fields.summonListGroupId,
    v68->fields._size,
    (System_Collections_Generic_List_VaildGachaInfo__o *)vaildGachaList,
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

  if ( (byte_4B63289 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_4B63289 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v5);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4B63260 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12882/*"SetBannerCenter"*/, method);
    byte_4B63260 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70436580(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12882/*"SetBannerCenter"*/,
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
    sub_1BE4D28(summonInfoCtr, v3);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0LL);
  this->fields.isDragging = 1;
}


void __fastcall SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B632BE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SummonControl__OnEndSummonEffect_b__281_0__, v6);
    byte_4B632BE = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__281_0__, 0LL);
  if ( !v9 )
    sub_1BE4D28(v12, v13);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v12; // w22
  Il2CppObject *Instance; // x21
  const MethodInfo *v14; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  System_Action_int__o *v16; // x24

  if ( (byte_4B63284 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_int__TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonControl_RequestStoneFragmentsShop__, v7);
    byte_4B63284 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v12 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v14),
        v16 = (System_Action_int__o *)sub_1BE4D18(System_Action_int__TypeInfo),
        System_Action_int____ctor(v16, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0LL),
        !Instance) )
  {
LABEL_11:
    sub_1BE4D28(Master_object, v9);
  }
  if ( v12 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v16, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OpenStoneFragmentExchangeResultDialog(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v11; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x22
  const MethodInfo *v15; // x1
  ShopEntity_o *v16; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v18; // x1
  ShopEntity_o *v19; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v21; // x1
  ShopEntity_o *v22; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *Instance; // x23
  System_Action_bool__o *v25; // x24

  if ( (byte_4B63288 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_bool__TypeInfo, *(_QWORD *)&buyCount);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BE4ACC(&Method_SummonControl_OnCloseResultDialog__, v9);
    byte_4B63288 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v11);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v16 = SummonControl__get_StoneFragmentsShopEntity(this, v15);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v16,
                                               buyCount,
                                               0LL);
  v19 = SummonControl__get_StoneFragmentsShopEntity(this, v18);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v19,
                                           (ItemEntity_o *)Entity,
                                           buyCount,
                                           0LL);
  v22 = SummonControl__get_StoneFragmentsShopEntity(this, v21);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v22,
                                          (ItemEntity_o *)Entity,
                                          0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (System_Action_bool__o *)sub_1BE4D18(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BE4D28(StoneFragmentsShopEntity, v13);
  CommonUI__OpenItemExchangeResultDialog(
    (CommonUI_o *)Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v25,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__RequestStoneFragmentsShop(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v10; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v12; // x1

  if ( (byte_4B63285 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BE4ACC(&Method_SummonControl_EndRequestStoneFragmentsShop__, v7);
    byte_4B63285 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v10);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1BE4D28(StoneFragmentsShopEntity, v12);
    PurchaseRequest__beginRequest(
      (PurchaseRequest_o *)Request_object,
      StoneFragmentsShopEntity->fields.id,
      this->fields.stoneExchangeCount,
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
  __int64 v3; // x1
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v5; // x22
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_4B63257 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B63257 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v7 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v7, 0LL);
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
    sub_1BE4D28(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v5; // x8

  if ( (byte_4B6329C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_11225/*"REQUEST_NG"*/, method);
    sub_1BE4ACC(&StringLiteral_11226/*"REQUEST_NG_RESULT"*/, v3);
    byte_4B6329C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_11226/*"REQUEST_NG_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11225/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, *v5, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bannerLoopCtr; // x0
  Il2CppObject *Component_object; // x20
  float v6; // s8
  UICenterOnChild_o *centerChild; // x20
  Il2CppObject *v8; // x20
  float v9; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4B63263 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B63263 = 1;
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
                         (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
      v6 = *(float *)&Component_object[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v6 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
        UICenterOnChild__CenterOn_47511680(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
    v8 = UnityEngine_Component__GetComponent_object_(
           bannerLoopCtr,
           (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v9 = *(float *)&v8[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v9 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
              UICenterOnChild__CenterOn_47511680(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_35:
        sub_1BE4D28(bannerLoopCtr, method);
      }
    }
    else
    {
      v11 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  char *bgRoot; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  char *v20; // x20
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
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  __int64 v64; // x8
  unsigned __int64 v65; // x23
  bool v66; // w21
  System_String_o *v67; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B6329F & 1) == 0 )
  {
    sub_1BE4ACC(&string___TypeInfo, isDisp);
    sub_1BE4ACC(&StringLiteral_18030/*"center_glow"*/, v5);
    sub_1BE4ACC(&StringLiteral_23273/*"ring_gard1_3"*/, v6);
    sub_1BE4ACC(&StringLiteral_23274/*"ring_gard2_1"*/, v7);
    sub_1BE4ACC(&StringLiteral_23275/*"ring_gard2_2"*/, v8);
    sub_1BE4ACC(&StringLiteral_23272/*"ring_gard1_2"*/, v9);
    sub_1BE4ACC(&StringLiteral_23276/*"ring_gard2_3"*/, v10);
    sub_1BE4ACC(&StringLiteral_23271/*"ring_gard1_1"*/, v11);
    byte_4B6329F = 1;
  }
  bgRoot = (char *)sub_1BE4B74(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_19:
    sub_1BE4D28(bgRoot, v13);
  v20 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v21 = StringLiteral_23271/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_23271/*"ring_gard1_1"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(bgRoot + 32), v21, v14, v15, v16, v17, v18, v19);
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_20;
  v28 = StringLiteral_23272/*"ring_gard1_2"*/;
  *((_QWORD *)v20 + 5) = StringLiteral_23272/*"ring_gard1_2"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 40), v28, v22, v23, v24, v25, v26, v27);
  if ( *((_DWORD *)v20 + 6) <= 2u )
    goto LABEL_20;
  v35 = StringLiteral_23273/*"ring_gard1_3"*/;
  *((_QWORD *)v20 + 6) = StringLiteral_23273/*"ring_gard1_3"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 48), v35, v29, v30, v31, v32, v33, v34);
  if ( *((_DWORD *)v20 + 6) <= 3u )
    goto LABEL_20;
  v42 = StringLiteral_23274/*"ring_gard2_1"*/;
  *((_QWORD *)v20 + 7) = StringLiteral_23274/*"ring_gard2_1"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 56), v42, v36, v37, v38, v39, v40, v41);
  if ( *((_DWORD *)v20 + 6) <= 4u
    || (v49 = StringLiteral_23275/*"ring_gard2_2"*/,
        *((_QWORD *)v20 + 8) = StringLiteral_23275/*"ring_gard2_2"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 64), v49, v43, v44, v45, v46, v47, v48),
        *((_DWORD *)v20 + 6) <= 5u)
    || (v56 = StringLiteral_23276/*"ring_gard2_3"*/,
        *((_QWORD *)v20 + 9) = StringLiteral_23276/*"ring_gard2_3"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 72), v56, v50, v51, v52, v53, v54, v55),
        *((_DWORD *)v20 + 6) <= 6u) )
  {
LABEL_20:
    sub_1BE4D30(bgRoot, v13);
  }
  v63 = StringLiteral_18030/*"center_glow"*/;
  *((_QWORD *)v20 + 10) = StringLiteral_18030/*"center_glow"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 80), v63, v57, v58, v59, v60, v61, v62);
  v64 = *((_QWORD *)v20 + 3);
  if ( (int)v64 >= 1 )
  {
    v65 = 0LL;
    v66 = isDisp;
    while ( v65 < (unsigned int)v64 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v67 = *(System_String_o **)&v20[8 * v65 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0LL);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v67, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, v66, 0LL);
      LODWORD(v64) = *((_DWORD *)v20 + 6);
      if ( (__int64)++v65 >= (int)v64 )
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
    sub_1BE4D28(summonInfoCtr, isDisp);
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
    sub_1BE4D28(this, num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_C1BA44[type - 1];
  gachaParamData->fields.gachaResourceNum = v5 * num;
}


void __fastcall SummonControl__SetupFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  Il2CppObject *Component_object; // x20
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v13; // w21
  MasterMissionComponent_c *v14; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v17; // w1
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B63281 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1BE4ACC(&MasterMissionComponent_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_17730/*"btn_event_3"*/, v8);
    byte_4B63281 = 1;
  }
  v18 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17730/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0LL);
  v13 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v13 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  v19 = v13;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(
    fragmentsExchangeButton,
    this->fields.haveStone + v13 >= this->fields.needStone,
    0LL);
  v14 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v14 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v14->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v13 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v19, 0LL);
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
          v17 = 0;
          goto LABEL_27;
        }
      }
    }
LABEL_28:
    sub_1BE4D28(fragmentsExchangeButton, method);
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v18 = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v18, 0LL);
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
  v17 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, v17, 0LL);
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
    sub_1BE4D28(this, a);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B63293 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl__SummonSceneRefresh_b__226_0__, v4);
    byte_4B63293 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__226_0__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v7, v8);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, v6, 0LL);
}


bool __fastcall SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  SummonControl_c *v14; // x0
  System_String_o *String_70410276; // x21
  System_Object_array *v16; // x0
  SelectBonusData_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int max_length; // w8
  __int64 v25; // x9

  if ( (byte_4B6328A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData);
    sub_1BE4ACC(&JsonManager_TypeInfo, v6);
    this = (SummonControl_o *)sub_1BE4ACC(&SummonControl_TypeInfo, v7);
    byte_4B6328A = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)selectBonusData, 0LL, v8, v9, v10, v11, v12, v13);
  v14 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_70410276 = UnityEngine_PlayerPrefs__GetString_70410276(v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_70410276, 0LL) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_70410276,
          (const MethodInfo_2FC092C *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v16 )
  {
    max_length = v16->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v16) = 0;
      return (char)v16;
    }
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
        sub_1BE4D30(v16, v17);
      v17 = (SelectBonusData_o *)v16->m_Items[v25];
      if ( !v17 )
        sub_1BE4D28(v16, 0LL);
      if ( v17->fields.gachaId == gachaId )
        break;
      if ( (int)++v25 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v17;
    sub_1BE4A70((PartyOrganizationUtility_o *)selectBonusData, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    LOBYTE(v16) = 1;
  }
  return (char)v16;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *vaildGachaList; // x0
  GachaAppendMaster_o *v6; // x20
  GachaAppendEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B63264 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaAppendMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    byte_4B63264 = 1;
  }
  entity = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_20;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
  vaildGachaList = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !this->fields.vaildGachaList
    || (v6 = (GachaAppendMaster_o *)vaildGachaList,
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0LL)
    || !v6
    || (vaildGachaList = (void *)GachaAppendMaster__TryGetHundredSummon(
                                   v6,
                                   &entity,
                                   *((_DWORD *)vaildGachaList + 4),
                                   0LL),
        !this->fields.summonInfoCtr) )
  {
LABEL_20:
    sub_1BE4D28(vaildGachaList, method);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B632A5 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonControl__WaitBattleChrLoad_d__248_TypeInfo, method);
    byte_4B632A5 = 1;
  }
  v3 = sub_1BE4D18(SummonControl__WaitBattleChrLoad_d__248_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SummonControl___BonusSelectServantSelectDialog_b__299_0(
        SummonControl_o *this,
        const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v26; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v27; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v28; // x24
  System_Action_o *v29; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  v2 = this;
  if ( (byte_4B632E0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__, v7);
    sub_1BE4ACC(&Method_SummonControl_SetDispBtn__, v8);
    sub_1BE4ACC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1BE4ACC(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__299_1__, v11);
    this = (SummonControl_o *)sub_1BE4ACC(&SummonControl___c_TypeInfo, v12);
    byte_4B632E0 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__50195216(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int64_t)Component_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  v26 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v26, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v27 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0LL);
  v28 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v28,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  v29 = *(System_Action_o **)&this->fields.confirmDlgInfo->fields.refuseInit;
  if ( !v29 )
  {
    if ( !LODWORD(this->fields.limitWarningDlgInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    v29 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v29, klass, Method_SummonControl___c__BonusSelectServantSelectDialog_b__299_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__299_1 = v29;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__299_1, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1BE4D28(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v26, v27, v28, v29, 0LL);
}


bool __fastcall SummonControl___CheckFriendPointSummonUpdate_b__218_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0LL )
    sub_1BE4D28(this, ent);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void __fastcall SummonControl___DialogCallBack_b__252_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_4B632DB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl_EndCloseDialogCallBack__, v5);
    byte_4B632DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1BE4D28(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__284_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1BE4D28(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


bool __fastcall SummonControl___OnClickSummonListBtn_b__286_0(
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
    sub_1BE4D28(this, x);
  }
  return 0;
}


void __fastcall SummonControl___OnEndSummonEffect_b__281_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B632DF & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_5563/*"END_FADE"*/, method);
    byte_4B632DF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5563/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__226_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B632D7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4B632D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        SummonControl__quit(this, v6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B632D2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl__exeFormation_b__149_2__, v4);
    byte_4B632D2 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_2__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v7, v8);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4B632D3 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B632D3 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___executeEnhanceTresureDevice_b__269_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_4B632DE & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&StringLiteral_5562/*"END_EFFECT"*/, v5);
    byte_4B632DE = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8
    || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_1BE4D28(Instance, v7);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5562/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__232_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B632D8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12430/*"START_GACHA"*/, method);
    byte_4B632D8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12430/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B632D1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl__openAfterSummonInfo_b__148_2__, v4);
    byte_4B632D1 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_2__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v7, v8);
  CommonUI__CloseTutorialNotificationDialogArrow_30899300((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__264_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v6; // x19

  if ( (byte_4B632DD & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&StringLiteral_5581/*"END_SUMMON"*/, v4);
    byte_4B632DD = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5581/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_10:
    sub_1BE4D28(summonResultInfo, method);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__179_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4B632D5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12882/*"SetBannerCenter"*/, method);
    byte_4B632D5 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12882/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1BE4D28(0LL, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__156_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B632D4 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1BE4ACC(&StringLiteral_25315/*"{0:N0}"*/, v7);
    byte_4B632D4 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v12 = stoneCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_25315/*"{0:N0}"*/, v9, 0LL);
  if ( !currentStoneNumLb )
    sub_1BE4D28(v10, v11);
  UILabel__set_text(currentStoneNumLb, v10, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__215_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v26; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v27; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v28; // x24
  System_Action_o *basePanel; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  v2 = this;
  if ( (byte_4B632D6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v7);
    sub_1BE4ACC(&Method_SummonControl_SetDispBtn__, v8);
    sub_1BE4ACC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1BE4ACC(&Method_SummonControl___c__showConfirmDlg_b__215_1__, v11);
    this = (SummonControl_o *)sub_1BE4ACC(&SummonControl___c_TypeInfo, v12);
    byte_4B632D6 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__50195216(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int64_t)Component_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  v26 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v26, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v27 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v28 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v28,
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
    basePanel = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(basePanel, klass, Method_SummonControl___c__showConfirmDlg_b__215_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__215_1 = basePanel;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__215_1,
      (int64_t)basePanel,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1BE4D28(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v26, v27, v28, basePanel, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__239_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  void *maskObject; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v43; // x9
  char v44; // w10
  Il2CppObject *v45; // x23
  System_String_o *Value; // x0
  System_String_array *v47; // x0
  SummonControl___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x24
  System_Func_object__int__o *_9__239_1; // x25
  Il2CppObject *v51; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_List_int__o *v60; // x24
  float v61; // s0
  struct GachaInfos_array *v62; // x8
  int max_length; // w21
  float v64; // s8
  il2cpp_array_size_t v65; // w22
  GachaInfos_o *v66; // x20
  int32_t v67; // w26
  char v68; // w25
  int32_t Data; // w28
  int32_t v70; // w29
  bool isNew; // w27
  int v72; // w28
  _DWORD *v73; // x25
  bool IsServant; // w27
  const MethodInfo *v75; // x2
  int v76; // w8
  bool v77; // w28
  struct System_Int32_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  _BOOL4 v81; // w27
  WeightRate_int__o *v82; // x28
  int32_t v83; // w0
  int32_t v84; // w0
  const MethodInfo *v85; // [xsp+10h] [xbp-A0h]
  ServantLimitMaster_o *v86; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_4B632D9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantVoiceMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_string__int___, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_1BE4ACC(&System_Func_string__int__TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&SoundManager_TypeInfo, v19);
    sub_1BE4ACC(&Method_SummonControl___c__showSummonEffect_b__239_1__, v20);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v21);
    sub_1BE4ACC(&Method_WeightRate_int___ctor__, v22);
    sub_1BE4ACC(&Method_WeightRate_int__getData__, v23);
    sub_1BE4ACC(&Method_WeightRate_int__getTotalWeight__, v24);
    sub_1BE4ACC(&Method_WeightRate_int__setWeight__, v25);
    sub_1BE4ACC(&WeightRate_int__TypeInfo, v26);
    sub_1BE4ACC(&StringLiteral_5576/*"END_PREPARATION"*/, v27);
    sub_1BE4ACC(&StringLiteral_12565/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v28);
    sub_1BE4ACC(&StringLiteral_3053/*"BGM_SUMMON_1"*/, v29);
    byte_4B632D9 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v31);
  SummonControl__setDispSummonInfo(this, 0, v32);
  maskObject = this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_84;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  SummonControl__clearResultList(this, v33);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_3053/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.summonComp,
    (int64_t)Component_object,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  maskObject = this->fields.summonComp;
  if ( !maskObject )
    goto LABEL_84;
  SummonEffectComponent__Initialize((SummonEffectComponent_o *)maskObject, method);
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
    v43 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v44 = 1;
  }
  else
  {
LABEL_15:
    v43 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v44 = 0;
  }
  v43->fields.isNoSkip = v44;
  v43->fields.gachaId = gachaParamData->fields.gachaId;
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v86 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v45 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12565/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v47 = System_String__Split(Value, 0x2Cu, 0, 0LL);
    v48 = SummonControl___c_TypeInfo;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
    if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v48 = SummonControl___c_TypeInfo;
    }
    _9__239_1 = (System_Func_object__int__o *)v48->static_fields->__9__239_1;
    if ( !_9__239_1 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = SummonControl___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v48->static_fields->__9;
      _9__239_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__239_1, v51, Method_SummonControl___c__showSummonEffect_b__239_1__, 0LL);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__239_1 = (struct System_Func_string__int__o *)_9__239_1;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__239_1,
        (int64_t)_9__239_1,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v49,
                                                                 (System_Func_TSource__TResult__o *)_9__239_1,
                                                                 (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_string__int___);
    v60 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v59,
                                                      (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v60 = 0LL;
  }
  v61 = UnityEngine_Random__get_value(0LL);
  v62 = this->fields.gachaResInfoList;
  if ( v62 )
  {
    max_length = v62->max_length;
    if ( max_length >= 1 )
    {
      v64 = v61;
      v65 = 0;
      while ( 1 )
      {
        if ( v65 >= v62->max_length )
          sub_1BE4D30(maskObject, method);
        v66 = v62->m_Items[v65];
        if ( !v66 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v66->fields.type, 0LL);
        method = (const MethodInfo *)(unsigned int)v66->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v45 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v45,
                       (int32_t)method,
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v67 = *((_DWORD *)maskObject + 16);
        v68 = 0;
LABEL_40:
        Data = 0;
        v70 = 3;
        isNew = v66->fields.isNew;
        if ( v60 )
          goto LABEL_76;
LABEL_80:
        maskObject = 0LL;
LABEL_81:
        if ( !*p_summonComp )
          goto LABEL_84;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v66->fields.objectId,
          v66->fields.limitCount,
          v68,
          isNew,
          Data,
          v67,
          v70,
          (unsigned __int8)maskObject & 1,
          v66->fields.userSvtId,
          v85);
        if ( max_length == ++v65 )
          goto LABEL_85;
        v62 = this->fields.gachaResInfoList;
        if ( !v62 )
          goto LABEL_84;
      }
      maskObject = MasterData_object;
      if ( !MasterData_object )
        goto LABEL_84;
      maskObject = DataMasterBase_object__object__int___GetEntity(
                     MasterData_object,
                     (int32_t)method,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v72 = *((_DWORD *)maskObject + 21);
      v73 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = v86;
      if ( !v86 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v86, v66->fields.objectId, v66->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_84;
      v67 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v73[20], v75) )
        goto LABEL_51;
      if ( v67 == 5 )
      {
        if ( v64 >= 0.2 )
        {
LABEL_51:
          v68 = 0;
          goto LABEL_52;
        }
      }
      else if ( v67 != 4 || v64 >= 0.4 )
      {
        goto LABEL_51;
      }
      v68 = 1;
LABEL_52:
      v76 = v72 - 3;
      v70 = 0;
      Data = 0;
      isNew = 0;
      switch ( v76 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v77 = v66->fields.isNew;
          isNew = v77;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v66->fields.objectId,
                         0LL);
          if ( maskObject != 0LL && v77 )
          {
            if ( !v60 )
            {
              v60 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v60,
                (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v60 )
                goto LABEL_84;
            }
            method = (const MethodInfo *)(unsigned int)v66->fields.objectId;
            items = v60->fields._items;
            v79 = Method_System_Collections_Generic_List_int__Add__;
            ++v60->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v60->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v60,
                (int32_t)method,
                *(const MethodInfo_35CF200 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v60->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
            v70 = 1;
          }
          else
          {
            Data = 0;
            v70 = 1;
LABEL_75:
            if ( !v60 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v70 = 1;
          if ( !v60 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v81 = v66->fields.isNew;
          v82 = (WeightRate_int__o *)sub_1BE4D18(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v82, (const MethodInfo_39CE27C *)Method_WeightRate_int___ctor__);
          if ( v67 == 4 )
          {
            if ( !v82 )
              goto LABEL_84;
            WeightRate_int___setWeight(v82, 60, 0, (const MethodInfo_39CD798 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v82, 40, 1, (const MethodInfo_39CD798 *)Method_WeightRate_int__setWeight__);
            v83 = UnityEngine_Random__Range_70411740(0, v82->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v82, v83, (const MethodInfo_39CDC0C *)Method_WeightRate_int__getData__);
            v70 = 2;
            isNew = v81;
            v68 &= Data == 0;
            v67 = 4;
            if ( v60 )
              break;
          }
          else
          {
            isNew = v81;
            if ( v67 == 5 )
            {
              if ( !v82 )
                goto LABEL_84;
              WeightRate_int___setWeight(v82, 60, 0, (const MethodInfo_39CD798 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v82, 20, 1, (const MethodInfo_39CD798 *)Method_WeightRate_int__setWeight__);
              v70 = 2;
              WeightRate_int___setWeight(v82, 20, 2, (const MethodInfo_39CD798 *)Method_WeightRate_int__setWeight__);
              v84 = UnityEngine_Random__Range_70411740(0, v82->fields.totalweight, 0LL);
              Data = WeightRate_int___getData(v82, v84, (const MethodInfo_39CDC0C *)Method_WeightRate_int__getData__);
              v68 &= Data == 0;
              v67 = 5;
              if ( v60 )
                break;
            }
            else
            {
              Data = 0;
              v70 = 2;
              if ( v60 )
                break;
            }
          }
          goto LABEL_80;
      }
LABEL_76:
      maskObject = (void *)System_Collections_Generic_List_int___Contains(
                             v60,
                             v66->fields.objectId,
                             (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1BE4D28(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5576/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__255_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonControl___c_c *v5; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__255_1; // x21
  Il2CppObject *v9; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B632DC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SummonControl___c__showSummonResultInfo_b__255_1__, v3);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v4);
    byte_4B632DC = 1;
  }
  v5 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v5 = SummonControl___c_TypeInfo;
  }
  _9__255_1 = v5->static_fields->__9__255_1;
  if ( !_9__255_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__255_1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__255_1, v9, Method_SummonControl___c__showSummonResultInfo_b__255_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__255_1 = _9__255_1;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__255_1,
      (int64_t)_9__255_1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !overflowSvtCoinInfo )
    sub_1BE4D28(v5, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__255_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__246_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B632DA & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3595/*"CLICK_OK"*/, method);
    byte_4B632DA = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3595/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BE4D28(0LL, v4);
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
    sub_1BE4D28(0LL, v4);
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

  if ( (byte_4B63298 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_beforeConfirmCautionResult__, method);
    byte_4B63298 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1BE4D28(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  SummonControl__showConfirmDlg_33853460(this, 0, v6);
}


void __fastcall SummonControl__callbackGachaDraw(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  SummonControl_o *v18; // x20
  __int64 v19; // x8
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x8
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x8
  int64_t v52; // x1

  v4 = this;
  if ( (byte_4B6329B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result);
    sub_1BE4ACC(&JsonManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_11227/*"REQUEST_OK"*/, v6);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v7);
    sub_1BE4ACC(&StringLiteral_16018/*"["*/, v8);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_16276/*"]"*/, v9);
    byte_4B6329B = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_62707124(result, (System_String_o *)StringLiteral_22370/*"ng"*/, 0LL)
    || System_String__Equals_62707124(result, (System_String_o *)StringLiteral_22370/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v10);
    return;
  }
  v11 = (Il2CppObject *)System_String__Concat_62710068(
                          (System_String_o *)StringLiteral_16018/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16276/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v11,
                              (const MethodInfo_2FC092C *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_22;
  v18 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v19 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v19 )
    goto LABEL_22;
  v20 = *(_QWORD *)(v19 + 16);
  v4->fields.gachaResInfoList = (struct GachaInfos_array *)v20;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.gachaResInfoList, v20, v12, v13, v14, v15, v16, v17);
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v27 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v27 )
    goto LABEL_22;
  v28 = *(_QWORD *)(v27 + 24);
  v4->fields.canRankUpClassIds = (struct System_Int32_array *)v28;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.canRankUpClassIds, v28, v21, v22, v23, v24, v25, v26);
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v35 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v35 )
    goto LABEL_22;
  v36 = *(_QWORD *)(v35 + 32);
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v36;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.overflowSvtCoinInfos, v36, v29, v30, v31, v32, v33, v34);
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v43 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v43 )
    goto LABEL_22;
  v44 = *(_QWORD *)(v43 + 40);
  v4->fields.extraGiftIds = (struct System_Int32_array *)v44;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.extraGiftIds, v44, v37, v38, v39, v40, v41, v42);
  if ( !LODWORD(v18->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1BE4D30(this, result);
  v51 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v51
    || (v52 = *(_QWORD *)(v51 + 48),
        v4->fields.GachaExtraGiftList = (struct GachaExtraGifts_array *)v52,
        sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.GachaExtraGiftList, v52, v45, v46, v47, v48, v49, v50),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_22:
    sub_1BE4D28(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11227/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B6329E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_11227/*"REQUEST_OK"*/, result);
    byte_4B6329E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BE4D28(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11227/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  PlayMakerFSM_o *fsm; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4B632B5 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDevice_b__0__, v5);
    sub_1BE4ACC(&SummonControl___c__DisplayClass268_0_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_9454/*"NO_EXIST"*/, v7);
    byte_4B632B5 = 1;
  }
  v8 = sub_1BE4D18(SummonControl___c__DisplayClass268_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v8 + 24), v17) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v8,
      Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
      return;
    }
LABEL_11:
    sub_1BE4D28(fsm, v10);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9454/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B632B3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9454/*"NO_EXIST"*/, method);
    byte_4B632B3 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1BE4D28(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9454/*"NO_EXIST"*/, 0LL);
  }
  else
  {
    SummonControl__checkEnhanceTresureDevice(this, method);
  }
}


void __fastcall SummonControl__checkEnhanceTresureDeviceSingle(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v21; // x8
  int32_t objectId; // w21
  Il2CppObject *v23; // x19
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_4B632B4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonControl___c__DisplayClass267_0__checkEnhanceTresureDeviceSingle_b__0__, v7);
    sub_1BE4ACC(&SummonControl___c__DisplayClass267_0_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_9454/*"NO_EXIST"*/, v9);
    byte_4B632B4 = 1;
  }
  v10 = sub_1BE4D18(SummonControl___c__DisplayClass267_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1BE4D30(Instance, v12);
  v21 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v21 )
    goto LABEL_16;
  objectId = v21->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v10 + 24) = objectId;
    v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
    v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v10,
      Method_SummonControl___c__DisplayClass267_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v23 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v23, 1, DEFAULT_FADE_TIME, v26, 0LL);
      return;
    }
LABEL_16:
    sub_1BE4D28(Instance, v12);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9454/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v12; // x8
  struct GachaRqParamData_o *v13; // x8
  __int64 *v14; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_4B6327A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&StringLiteral_3498/*"CHECK_STONE"*/, v5);
    sub_1BE4ACC(&StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/, v6);
    sub_1BE4ACC(&StringLiteral_3495/*"CHECK_POINT"*/, v7);
    sub_1BE4ACC(&StringLiteral_3081/*"BONUS_SELECT_CHECK_STONE"*/, v8);
    byte_4B6327A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v12 = this->fields.gachaParamData;
    if ( !v12 )
      goto LABEL_25;
    if ( v12->fields.gachaType == 7 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3081/*"BONUS_SELECT_CHECK_STONE"*/, 0LL);
    }
  }
  v13 = this->fields.gachaParamData;
  if ( !v13 )
LABEL_25:
    sub_1BE4D28(Master_object, v10);
  switch ( v13->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v14 = &StringLiteral_3498/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v14 = &StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/;
      else
        v14 = (__int64 *)&StringLiteral_3495/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v14 = &StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)*v14, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4B632A2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_7063/*"GET_MULTI"*/, method);
    byte_4B632A2 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BE4D28(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_7063/*"GET_MULTI"*/, 0LL);
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
    sub_1BE4D28(0LL, drawUsrGachaEnt);
  return GachaMaster__CheckIsMaxDrawNum(gachaMst, drawUsrGachaEnt, &drawGachaEnta, 0LL);
}


void __fastcall SummonControl__checkIsNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x2
  GachaInfos_o *v7; // x8
  __int64 *v8; // x8

  v3 = this;
  if ( (byte_4B632A3 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_9391/*"NEW_SVT"*/, method);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_7077/*"GO_BACK"*/, v4);
    byte_4B632A3 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1BE4D30(this, method);
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_14;
  if ( v7->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v7->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v8 = &StringLiteral_9391/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BE4D28(this, method);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v8 = &StringLiteral_7077/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v8, 0LL);
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
    sub_1BE4D28(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1BE4D30(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned int max_length; // w10
  __int64 getSvtIdx; // x9
  __int64 *v10; // x8
  GachaInfos_o *v11; // x8
  int32_t objectId; // w20
  System_String_o *v13; // x1
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v3 = this;
  if ( (byte_4B632AC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BE4ACC(&StringLiteral_9772/*"OLD_SVT"*/, v4);
    sub_1BE4ACC(&StringLiteral_6520/*"FINAL_SVT"*/, v5);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_9391/*"NEW_SVT"*/, v6);
    byte_4B632AC = 1;
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
      v10 = &StringLiteral_6520/*"FINAL_SVT"*/;
LABEL_15:
      v13 = (System_String_o *)*v10;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1BE4D30(this, method);
  v11 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v11 )
    goto LABEL_22;
  if ( !v11->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v10 = &StringLiteral_9772/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1BE4D28(this, method);
  }
  objectId = v11->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v13 = (System_String_o *)StringLiteral_9772/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v13, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9391/*"NEW_SVT"*/, 0LL);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_22;
  v14 = *(_QWORD *)&this->fields.m_CachedPtr;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v14 )
    goto LABEL_22;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v14 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      objectId,
      *(const MethodInfo_35CF200 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v14 + 4 * m_CancellationTokenSource_low + 32) = objectId;
  }
}


bool __fastcall SummonControl__checkMaxDrawNum(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  _DWORD *UserGachaData; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct GachaRqParamData_o *v8; // x8
  _DWORD *v9; // x19
  int v10; // w8

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    return 0;
  UserGachaData = SummonControl__getUserGachaData(this, gachaParamData->fields.gachaId, v2);
  v8 = this->fields.gachaParamData;
  if ( !v8 )
    goto LABEL_8;
  v9 = UserGachaData;
  UserGachaData = SummonControl__getCurrentGachaData(this, v8->fields.gachaId, v7);
  if ( !v9 )
    return 0;
  if ( !UserGachaData )
LABEL_8:
    sub_1BE4D28(UserGachaData, v6);
  v10 = UserGachaData[23];
  if ( v10 >= 1 )
    return v9[7] >= v10;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  bool result; // w0

  if ( (byte_4B632AD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4B632AD = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1BE4D28(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v8 = size - 1;
  if ( size < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v9,
               (const MethodInfo_35CEF10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v8 == v9 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v9;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v10; // x8
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  int32_t v13; // w8
  CommonUI_o *v14; // x19

  if ( (byte_4B6324D & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_3561/*"CLEAR_TUTORIAL"*/, v5);
    sub_1BE4ACC(&StringLiteral_11284/*"RETURN_TUTORIAL"*/, v6);
    byte_4B6324D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
    goto LABEL_52;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38593888(101, 0LL) )
  {
    this->fields.isDoneTutorial = 0;
    v13 = 1;
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
      if ( TutorialFlag__Get_38593888(101, 0LL) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_49;
        v10 = &StringLiteral_11284/*"RETURN_TUTORIAL"*/;
LABEL_41:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v10, 0LL);
        goto LABEL_45;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38593888(101, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38593888(107, 0LL) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v11);
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
      SummonControl__showHelpImg(this, v12);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_49;
      v10 = &StringLiteral_3561/*"CLEAR_TUTORIAL"*/;
      goto LABEL_41;
    }
    v13 = 4;
  }
  this->fields.tutorialKind = v13;
  SummonControl__progTutorial(this, v7);
LABEL_45:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14 )
LABEL_49:
    sub_1BE4D28(fsm, v8);
  CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtKeep; // w21
  int32_t svtEquipKeep; // w24
  BalanceConfig_c *v17; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w20
  int v20; // w8
  int32_t v21; // w25
  int32_t v22; // w24
  int32_t v23; // w21
  int32_t Count; // w0
  int32_t v25; // w20
  SummonControl_o *v26; // x21
  BalanceConfig_c *v27; // x0
  int32_t v28; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v29; // x23
  int32_t v30; // w3
  CommonUI_o *v31; // x0
  int32_t v32; // w1
  struct UserGameEntity_o *v33; // x8
  int32_t v34; // w22
  int32_t v35; // w21
  SummonControl_o *v36; // x20
  int32_t v37; // w2
  struct UserGameEntity_o *v38; // x8
  int32_t v39; // w21
  SummonControl_o *v40; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4B63272 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v8);
    sub_1BE4ACC(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9);
    sub_1BE4ACC(&Method_SummonControl_closeShotSvtFrameDlg__, v10);
    sub_1BE4ACC(&StringLiteral_6635/*"FRIEND_GACHA_ADD_LIMIT"*/, v11);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_3496/*"CHECK_RESOURCE"*/, v12);
    byte_4B63272 = 1;
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
  if ( !byte_4B61BFB )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    byte_4B61BFB = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v17->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6635/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_40;
  v20 = Value & ~(Value >> 31);
  v21 = v20 + CommandCodeFrameMax;
  v22 = v20 + svtEquipKeep;
  v23 = v20 + svtKeep;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0LL);
  v25 = Count;
  if ( Count < v21 && servantEquipSum[1] < v23 && servantEquipSum[0] < v22 )
  {
LABEL_19:
    this = (SummonControl_o *)v2->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3496/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_40:
    sub_1BE4D28(this, method);
  }
  if ( servantEquipSum[1] >= v23 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = v2->fields.userGameEntity;
    if ( !v33 )
      goto LABEL_40;
    v34 = v33->fields.svtKeep;
    v35 = servantEquipSum[1];
    v36 = this;
    v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BE4D18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v36 )
      goto LABEL_40;
    v31 = (CommonUI_o *)v36;
    v32 = v35;
    v37 = v34;
    v30 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= v22 )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = v2->fields.userGameEntity;
      if ( !v38 )
        goto LABEL_40;
      v28 = v38->fields.svtEquipKeep;
      v39 = servantEquipSum[0];
      v40 = this;
      v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BE4D18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v40 )
        goto LABEL_40;
      v30 = 1;
      v31 = (CommonUI_o *)v40;
      v32 = v39;
    }
    else
    {
      if ( Count < v21 )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v26 = this;
      if ( !byte_4B61BFB )
      {
        sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
        byte_4B61BFB = 1;
      }
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      v28 = v27->static_fields->CommandCodeFrameMax;
      v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BE4D18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v26 )
        goto LABEL_40;
      v30 = 2;
      v31 = (CommonUI_o *)v26;
      v32 = v25;
    }
    v37 = v28;
  }
  CommonUI__OpenSvtFrameShortDlg(v31, v32, v37, v30, 0, v29, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t v12; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x3

  if ( (byte_4B6327B & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_1BE4ACC(&Method_SummonControl_closeShotPointDlg__, v6);
    sub_1BE4ACC(&StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/, v7);
    byte_4B6327B = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C369A8(v2);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C369A8(v2);
  MasterData_object = **(void ***)(v9 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v12 = *((_DWORD *)MasterData_object + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v12;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v12 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v16 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_closeShotPointDlg__,
      v17);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v12, v16, 0LL);
      return;
    }
LABEL_17:
    sub_1BE4D28(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/, 0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  int32_t haveStoneNum; // w20
  int32_t gachaType; // w10
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w20
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v15; // x24
  const MethodInfo *v16; // x3
  struct GachaRqParamData_o *v17; // x8
  int v18; // w8
  SummonConfirmDlgComponent_o *v19; // x20
  int32_t v20; // w21
  int32_t v21; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v22; // x23
  const MethodInfo *v23; // x3

  v2 = this;
  if ( (byte_4B6327D & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&System_Math_TypeInfo, v3);
    sub_1BE4ACC(&Method_SummonControl_closeShotStoneDlg__, v4);
    this = (SummonControl_o *)sub_1BE4ACC(&StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/, v5);
    byte_4B6327D = 1;
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
      v15 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v16);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          haveChargeStone,
          haveFreeStone,
          v15,
          0LL);
        return;
      }
LABEL_17:
      sub_1BE4D28(this, method);
    }
  }
  else
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = (SummonControl_o *)System_Math__Max_63517952(haveStoneNum, HaveChargeStoneNum_k__BackingField, 0LL);
    v17 = v2->fields.gachaParamData;
    if ( !v17 )
      goto LABEL_17;
    v18 = v17->fields.gachaResourceNum;
    v2->fields.needStone = v18;
    if ( (int)this < v18 )
    {
      SummonControl__SetupFragmentsExchangeButton(v2, method);
      v19 = v2->fields.confirmDlgInfo;
      v20 = v2->fields.haveFreeStone;
      v21 = v2->fields.haveChargeStone;
      v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v22,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v23);
      if ( !v19 )
        goto LABEL_17;
      SummonConfirmDlgComponent__OpenShortStone(v19, v20, v21, v22, 0LL);
      return;
    }
  }
  this = (SummonControl_o *)v2->fields.fsm;
  if ( !this )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12322/*"SHOW_CONFIRM_DLG"*/, 0LL);
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

  if ( (byte_4B63270 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B63270 = 1;
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
      UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_33:
    sub_1BE4D28(bannerLoopCtr, method);
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
      UnityEngine_Object__Destroy_70452000(v9, 0LL);
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
      UnityEngine_Object__Destroy_70452000(v11, 0LL);
      if ( --v10 < 0 )
        return;
    }
    goto LABEL_33;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  System_Collections_Generic_List_int__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B632B0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B632B0 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL) )
  {
    sub_1BE4D28(summonResultInfo, method);
  }
  SummonResultComponent__SetActive(summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotCommandCodeFrameDlg(
        SummonControl_o *this,
        int32_t res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *v14; // x19
  SceneJumpInfo_o *v15; // x20

  if ( (byte_4B63275 & 1) == 0 )
  {
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v7);
    sub_1BE4ACC(&StringLiteral_12781/*"SellServant"*/, v8);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v9);
    byte_4B63275 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  v12 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39576856(v15, (System_String_o *)StringLiteral_12781/*"SellServant"*/, 2, 0LL);
      if ( v14 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v14, 22, 1, (Il2CppObject *)v15, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BE4D28(Instance, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4B6327C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_closeShotPointDlg__, res);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v4);
    byte_4B6327C = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v6 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotPointDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1BE4D28(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 *v10; // x8

  if ( (byte_4B6327E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_closeShotStoneDlg__, res);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v5);
    sub_1BE4ACC(&StringLiteral_7079/*"GO_BUY_STONE"*/, v6);
    byte_4B6327E = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v8 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotStoneDlg__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v10 = &StringLiteral_3568/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BE4D28(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v10 = &StringLiteral_7079/*"GO_BUY_STONE"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x19
  SceneJumpInfo_o *v17; // x20
  int32_t v18; // w1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0

  if ( (byte_4B63274 & 1) == 0 )
  {
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonControl_closeShotSvtEqFrameDlg__, v7);
    sub_1BE4ACC(&StringLiteral_12822/*"ServantEquipList"*/, v8);
    sub_1BE4ACC(&StringLiteral_12781/*"SellServant"*/, v9);
    sub_1BE4ACC(&StringLiteral_12821/*"ServantEQCombine"*/, v10);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v11);
    byte_4B63274 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v19 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v20 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39576856(v17, (System_String_o *)StringLiteral_12781/*"SellServant"*/, 1, 0LL);
        if ( v16 )
        {
          v18 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1BE4D28(Instance, v13);
    case 1:
      v21 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39576768(v17, (System_String_o *)StringLiteral_12822/*"ServantEquipList"*/, 0LL);
        if ( v16 )
        {
          v18 = 71;
          goto LABEL_22;
        }
      }
      goto LABEL_27;
    case 0:
      v14 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39576768(v17, (System_String_o *)StringLiteral_12821/*"ServantEQCombine"*/, 0LL);
        if ( v16 )
        {
          v18 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, (Il2CppObject *)v17, 0LL);
          return;
        }
      }
      goto LABEL_27;
  }
  v23 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *v15; // x19
  SceneJumpInfo_o *v16; // x20
  int32_t v17; // w1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *v20; // x3
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0

  if ( (byte_4B63273 & 1) == 0 )
  {
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonControl_closeShotSvtFrameDlg__, v7);
    sub_1BE4ACC(&StringLiteral_12781/*"SellServant"*/, v8);
    sub_1BE4ACC(&StringLiteral_12818/*"ServantCombine"*/, v9);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v10);
    byte_4B63273 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v18 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtFrameDlg__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39576856(v16, (System_String_o *)StringLiteral_12781/*"SellServant"*/, 0, 0LL);
        if ( v15 )
        {
          v17 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1BE4D28(Instance, v12);
    case 1:
      v21 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v17 = 71;
          v20 = 0LL;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    case 0:
      v13 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtFrameDlg__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39576768(v16, (System_String_o *)StringLiteral_12818/*"ServantCombine"*/, 0LL);
        if ( v15 )
        {
          v17 = 32;
LABEL_17:
          Instance = (CommonUI_o *)v15;
          v20 = (Il2CppObject *)v16;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v17, 1, v20, 0LL);
          return;
        }
      }
      goto LABEL_28;
  }
  v23 = Method_SummonControl_closeShotSvtFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_closeShotSvtFrameDlg__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  SummonCautionDlgComponent_o *cautionDlgInfo; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v21; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v24; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v25; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v26; // x24

  if ( (byte_4B63296 & 1) == 0 )
  {
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v8);
    sub_1BE4ACC(&Method_SummonControl_SetDispBtn__, v9);
    sub_1BE4ACC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v10);
    sub_1BE4ACC(&Method_SummonControl_confirmCautionResult__, v11);
    sub_1BE4ACC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v13);
    byte_4B63296 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, 0LL);
  if ( !res )
  {
    v18 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_confirmCautionResult__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v21 = this->fields.gachaParamData;
              if ( v21 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v21->fields.gachaId;
                v24 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v25,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v26 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v26,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v24, v25, v26, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BE4D28(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v15 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_confirmCautionResult__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0LL);
  SummonControl__loadAssetsForSummon(this, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4B63295 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_confirmResult__, res);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v5);
    byte_4B63295 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  if ( !res )
  {
    v10 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_confirmResult__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1BE4D28(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v7 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_confirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  SummonControl__loadAssetsForSummon(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **v2; // x24
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Generic_List_object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x19
  __int64 noneGachaInfo; // x0
  Il2CppObject *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  Il2CppObject *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct UICenterOnChild_o *v66; // x21
  PartyOrganizationUtility_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v69; // x22
  System_Delegate_o *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x8
  SpringPanel_OnFinished_c *v78; // x1
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v81; // x22
  System_Delegate_o *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  UIScrollView_OnDragNotification_c *v89; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  float v92; // s0
  UnityEngine_Component_o *v93; // x20
  float v94; // s2
  float v95; // s8
  float v96; // s0
  int v97; // w8
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  Il2CppObject *v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  Il2CppObject *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct UICenterOnChild_o *v115; // x21
  System_Delegate_o *v116; // t1
  SpringPanel_OnFinished_o *v117; // x22
  System_Delegate_o *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  SpringPanel_OnFinished_c *v125; // x1
  struct UIScrollView_o *summonMBannerScrollView; // x21
  System_Delegate_o *v127; // t1
  UIScrollView_OnDragNotification_o *v128; // x22
  System_Delegate_o *v129; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  UIScrollView_OnDragNotification_c *v136; // x1
  int32_t v137; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v140; // x27
  UnityEngine_Transform_o *v141; // x20
  UnityEngine_Transform_o *v142; // x21
  int v143; // s0
  int v146; // w25
  System_String_o *v147; // x0
  System_String_o *v148; // x0
  System_String_o *v149; // x0
  System_String_o *v150; // x0
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  System_Collections_Generic_List_object__o *v157; // x8
  struct System_Object_array *items; // x9
  _QWORD *v159; // x10
  __int64 size; // x11
  GachaBannerComponent_o *v161; // x29
  Il2CppClass **v162; // x0
  int v163; // w8
  int v164; // w9
  int32_t v165; // w26
  System_String_o *v166; // x0
  System_String_o *v167; // x21
  const MethodInfo *v168; // x2
  UnityEngine_Object_o *v169; // x22
  Il2CppObject *Item; // x20
  System_String_o *v171; // x5
  VaildGachaInfo_o *v172; // x19
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v174; // x0
  UnityEngine_GameObject_o *v175; // x29
  UnityEngine_Transform_o *v176; // x20
  UnityEngine_Transform_o *v177; // x21
  int v178; // s0
  System_String_o *name; // x0
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  System_Collections_Generic_List_object__o *v188; // x8
  struct System_Object_array *v189; // x9
  _QWORD *v190; // x10
  __int64 v191; // x11
  SummonMiniBannerComponent_o *v192; // x27
  Il2CppClass **v193; // x0
  System_String_o *v194; // x0
  System_String_o *v195; // x21
  const MethodInfo *v196; // x2
  UnityEngine_Object_o *v197; // x29
  const MethodInfo *v198; // x2
  Il2CppObject *Component_object; // x22
  SummonMiniBannerComponent_CallbackFunc_o *v200; // x20
  float v201; // s8
  int v202; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v204; // x0
  UnityEngine_Transform_o *v205; // x20
  const MethodInfo *v206; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v208; // x21
  SummonInfoControl_ClickDelegate_o *v209; // x22
  const MethodInfo *v210; // x2
  const MethodInfo *v211; // x1
  int v212; // [xsp+Ch] [xbp-94h]
  int v213; // [xsp+10h] [xbp-90h]
  unsigned int v214; // [xsp+14h] [xbp-8Ch]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+20h] [xbp-80h]
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // [xsp+28h] [xbp-78h]
  int v218; // [xsp+38h] [xbp-68h]
  int v219; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v220; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (UnityEngine_Component_o **)&byte_4B63000;
  if ( (byte_4B6325E & 1) == 0 )
  {
    sub_1BE4ACC(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&SummonInfoControl_ClickDelegate_TypeInfo, v4);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v7);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v8);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v15);
    sub_1BE4ACC(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    sub_1BE4ACC(&UIScrollView_OnDragNotification_TypeInfo, v19);
    sub_1BE4ACC(&SpringPanel_OnFinished_TypeInfo, v20);
    sub_1BE4ACC(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v21);
    sub_1BE4ACC(&Method_SummonControl_OnCenterOnChildFinished__, v22);
    sub_1BE4ACC(&Method_SummonControl_OnClickMiniBanner__, v23);
    sub_1BE4ACC(&Method_SummonControl_OnDragStarted__, v24);
    sub_1BE4ACC(&Method_SummonControl_exeSummon__, v25);
    sub_1BE4ACC(&StringLiteral_20764/*"img_summon_"*/, v26);
    sub_1BE4ACC(&StringLiteral_20766/*"img_summon_mini_236"*/, v27);
    sub_1BE4ACC(&StringLiteral_20765/*"img_summon_mini_"*/, v28);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v29);
    sub_1BE4ACC(&StringLiteral_1262/*"1"*/, v30);
    sub_1BE4ACC(&StringLiteral_1209/*"0"*/, v31);
    byte_4B6325E = 1;
  }
  v219 = 0;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v32;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.bannerInfoList, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v39;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.summonMBannerInfoList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !this->fields.vaildGachaList )
  {
    noneGachaInfo = (__int64)this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 1, 0LL);
    return;
  }
  bannerLoopCtr = (UnityEngine_Object_o *)this->fields.bannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (__int64)this->fields.summonBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v50 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v50;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.bannerLoopCtr, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  }
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneGachaInfo = UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)*p_bannerLoopCtr;
    if ( !*p_bannerLoopCtr )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v59 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v59;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.centerChild, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  }
  v66 = *p_centerChild;
  if ( !v66 )
    goto LABEL_128;
  onFinished = (System_Delegate_o *)v66->fields.onFinished;
  p_onFinished = (PartyOrganizationUtility_o *)&v66->fields.onFinished;
  v69 = (SpringPanel_OnFinished_o *)sub_1BE4D18(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v69, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
  v70 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v69, 0LL);
  v77 = (int64_t)v70;
  if ( v70 )
  {
    v78 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v70->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v70;
    if ( (SpringPanel_OnFinished_c *)v70->klass != v78 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1BE4A70(p_onFinished, (int64_t)v70, v71, v72, v73, v74, v75, v76);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_128;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (PartyOrganizationUtility_o *)&summonBannerScrollView->fields.onDragStarted;
  v81 = (UIScrollView_OnDragNotification_o *)sub_1BE4D18(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v81, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v82 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v81, 0LL);
  v77 = (int64_t)v82;
  if ( v82 )
  {
    v89 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v82->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v82;
    if ( (UIScrollView_OnDragNotification_c *)v82->klass != v89 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1BE4A70(p_onFinished, (int64_t)v82, v83, v84, v85, v86, v87, v88);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_128;
  LODWORD(v2) = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0LL);
  v92 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v93 = *p_bannerLoopCtr;
  v94 = (float)((float)(fminf(v92, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v92 < 1.7778 )
    v95 = 1028.0;
  else
    v95 = v94;
  if ( !byte_4B612E0 )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v46);
    byte_4B612E0 = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v93 )
    goto LABEL_128;
  v96 = floorf(v95);
  if ( v96 == INFINITY )
    v97 = 0x80000000;
  else
    v97 = (int)v96;
  LODWORD(v93[1].monitor) = v97;
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v99 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v99;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.summonMBannerLoopCtr,
      (int64_t)v99,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  p_summonMBannerLoopCtr = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
  summonMBannerCenterChild = (UnityEngine_Object_o *)this->fields.summonMBannerCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonMBannerCenterChild = &this->fields.summonMBannerCenterChild;
  noneGachaInfo = UnityEngine_Object__op_Equality(summonMBannerCenterChild, 0LL, 0LL);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
    if ( !*p_summonMBannerLoopCtr )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v108 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)noneGachaInfo,
             (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v108;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.summonMBannerCenterChild,
      (int64_t)v108,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
  }
  v115 = *p_summonMBannerCenterChild;
  if ( !v115 )
    goto LABEL_128;
  v116 = (System_Delegate_o *)v115->fields.onFinished;
  p_onFinished = (PartyOrganizationUtility_o *)&v115->fields.onFinished;
  v117 = (SpringPanel_OnFinished_o *)sub_1BE4D18(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v117, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
  v118 = System_Delegate__Combine(v116, (System_Delegate_o *)v117, 0LL);
  v77 = (int64_t)v118;
  if ( v118 )
  {
    v125 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v118->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v118;
    if ( (SpringPanel_OnFinished_c *)v118->klass != v125 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1BE4A70(p_onFinished, (int64_t)v118, v119, v120, v121, v122, v123, v124);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_128;
  v127 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (PartyOrganizationUtility_o *)&summonMBannerScrollView->fields.onDragStarted;
  v128 = (UIScrollView_OnDragNotification_o *)sub_1BE4D18(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v128, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v129 = System_Delegate__Combine(v127, (System_Delegate_o *)v128, 0LL);
  v77 = (int64_t)v129;
  if ( !v129 )
    goto LABEL_65;
  v136 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v129->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (PartyOrganizationUtility_c *)v129;
    if ( (UIScrollView_OnDragNotification_c *)v129->klass == v136 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1BE4FE8(v77);
LABEL_65:
  p_onFinished->klass = (PartyOrganizationUtility_c *)v77;
LABEL_66:
  sub_1BE4A70(p_onFinished, v77, v130, v131, v132, v133, v134, v135);
  v218 = 2 * (_DWORD)v2;
  if ( 2 * (int)v2 >= 1 )
  {
    v137 = 0;
    v213 = (_DWORD)v2 - 1;
    v214 = (unsigned int)v2 & 0x80000000;
    v212 = (int)v2;
    while ( 1 )
    {
      noneGachaInfo = (__int64)*p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        break;
      summonBannerPrefab = this->fields.summonBannerPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonBannerPrefab,
                                 transform,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      v140 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v141 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4B612E6 )
      {
        noneGachaInfo = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v46);
        byte_4B612E6 = 1;
      }
      if ( !v141 )
        break;
      UnityEngine_Transform__set_localScale(v141, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v140, 0LL);
      if ( !*p_bannerLoopCtr )
        break;
      v142 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v143 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v142 )
        break;
      UnityEngine_Transform__set_localPosition(v142, *(UnityEngine_Vector3_o *)&v143, 0LL);
      v146 = v137 + 1;
      v219 = v137 + 1;
      v147 = System_Int32__ToString((int32_t)&v219, 0LL);
      v148 = System_String__Concat_62698808((System_String_o *)StringLiteral_1209/*"0"*/, v147, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v140, v148, 0LL);
      if ( v219 >= 10 )
      {
        v149 = System_Int32__ToString((int32_t)&v219, 0LL);
        v150 = System_String__Concat_62698808((System_String_o *)StringLiteral_1262/*"1"*/, v149, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v140, v150, 0LL);
      }
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v140,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v157 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v157->fields._items;
      v159 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v157->fields._version;
      if ( !items )
        break;
      size = v157->fields._size;
      v161 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v157,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
      }
      else
      {
        v162 = &items->obj.klass + size;
        v157->fields._size = size + 1;
        v162[4] = (Il2CppClass *)v161;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v162 + 4), (int64_t)v161, v151, v152, v153, v154, v155, v156);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      v163 = v137 | v214;
      v164 = (int)(v137 | v214) <= v213 ? 0 : (int)v2;
      if ( !noneGachaInfo )
        break;
      v165 = v163 - v164;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v163 - v164,
                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v2 = p_bannerLoopCtr;
      v166 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v167 = System_String__Concat_62698808((System_String_o *)StringLiteral_20764/*"img_summon_"*/, v166, 0LL);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg(this, v167, v168);
      if ( !this->fields.vaildGachaList )
        break;
      v169 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
               v165,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = UnityEngine_Object__op_Equality(v169, 0LL, 0LL);
      if ( !v161 )
        break;
      v171 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v167;
      v172 = (VaildGachaInfo_o *)Item;
      GachaBannerComponent__setBannerGachaInfo(
        v161,
        (VaildGachaInfo_o *)Item,
        v165,
        v137,
        (UnityEngine_GameObject_o *)v169,
        v171,
        0LL);
      noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v174 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v174,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      v175 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v176 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4B612E6 )
      {
        noneGachaInfo = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v46);
        byte_4B612E6 = 1;
      }
      if ( !v176 )
        break;
      UnityEngine_Transform__set_localScale(v176, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v175, 0LL);
      if ( !*p_summonMBannerLoopCtr )
        break;
      v177 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_summonMBannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v178 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v177 )
        break;
      UnityEngine_Transform__set_localPosition(v177, *(UnityEngine_Vector3_o *)&v178, 0LL);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v140, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v175, name, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v175,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v188 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v189 = v188->fields._items;
      v190 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v188->fields._version;
      if ( !v189 )
        break;
      v191 = v188->fields._size;
      v192 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v191 >= v189->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v188,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
      }
      else
      {
        v193 = &v189->obj.klass + v191;
        v188->fields._size = v191 + 1;
        v193[4] = (Il2CppClass *)v192;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v193 + 4), (int64_t)v192, v182, v183, v184, v185, v186, v187);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v165,
                                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v194 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v195 = System_String__Concat_62698808((System_String_o *)StringLiteral_20765/*"img_summon_mini_"*/, v194, 0LL);
      v197 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v195, v196);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v197, 0LL, 0LL) )
      {
        v195 = (System_String_o *)StringLiteral_20766/*"img_summon_mini_236"*/;
        v197 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20766/*"img_summon_mini_236"*/,
                                         v198);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v197, 0LL, 0LL) )
          v195 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v200 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1BE4D18(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v200,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0LL);
      if ( !v192 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v192,
        v172,
        v165,
        v137,
        (UnityEngine_GameObject_o *)v197,
        v195,
        v200,
        (UIPanel_o *)Component_object,
        0LL);
      p_bannerLoopCtr = v2;
      LODWORD(v2) = v212;
      ++v137;
      if ( v218 == v146 )
        goto LABEL_120;
    }
LABEL_128:
    sub_1BE4D28(noneGachaInfo, v46);
  }
LABEL_120:
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  v201 = fminf(640.0 / (float)(int)v2, 25.0);
  v202 = (_DWORD)v2 - 1;
  *(float *)(noneGachaInfo + 48) = v201;
  if ( (int)v2 >= 1 )
  {
    do
    {
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v204 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 slideIndexPrefab,
                                 v204,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v205 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4B612E6 )
      {
        noneGachaInfo = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v46);
        byte_4B612E6 = 1;
      }
      if ( !v205 )
        break;
      UnityEngine_Transform__set_localScale(v205, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      LODWORD(v2) = (_DWORD)v2 - 1;
      if ( !(_DWORD)v2 )
        goto LABEL_129;
      noneGachaInfo = (__int64)this->fields.sliderGrid;
    }
    while ( noneGachaInfo );
    goto LABEL_128;
  }
LABEL_129:
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_128;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_128;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_128;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_128;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_128;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_128;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  noneGachaInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
  if ( !noneGachaInfo )
    goto LABEL_128;
  v220.fields.z = this->fields.center.fields.z;
  v220.fields.y = this->fields.center.fields.y;
  v220.fields.x = (float)(v201 * -0.5) * (float)v202;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noneGachaInfo, v220, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0LL);
  SummonControl__UpdateSummonInfoControlLayout(this, v206);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_128;
  summonInfoCtr = this->fields.summonInfoCtr;
  v208 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v209 = (SummonInfoControl_ClickDelegate_o *)sub_1BE4D18(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v209, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr )
    goto LABEL_128;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v208, v209, 0LL);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v210);
  SummonControl__setResourceInfo(this, v211);
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

  if ( (byte_4B632BB & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B632BB = 1;
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
      UnityEngine_Object__DestroyImmediate_70452188(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_33:
    sub_1BE4D28(bannerLoopCtr, method);
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
      UnityEngine_Object__DestroyImmediate_70452188(v9, 0LL);
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
      UnityEngine_Object__DestroyImmediate_70452188(v11, 0LL);
    }
    while ( --v10 >= 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  __int64 *v10; // x8

  if ( (byte_4B63280 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1BE4ACC(&StringLiteral_10656/*"PURCHASE_ERROR"*/, v5);
    sub_1BE4ACC(&StringLiteral_10655/*"PURCHASE_CANCEL"*/, v6);
    sub_1BE4ACC(&StringLiteral_10657/*"PURCHASE_OK"*/, v7);
    byte_4B63280 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BE4D28(Instance, v9);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10655/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10656/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10657/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  __int64 *v10; // x8

  if ( (byte_4B63279 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1BE4ACC(&StringLiteral_10656/*"PURCHASE_ERROR"*/, v5);
    sub_1BE4ACC(&StringLiteral_10655/*"PURCHASE_CANCEL"*/, v6);
    sub_1BE4ACC(&StringLiteral_10657/*"PURCHASE_OK"*/, v7);
    byte_4B63279 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10655/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1BE4D28(Instance, v9);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10656/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10657/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseSvtFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  __int64 *v10; // x8

  if ( (byte_4B63277 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1BE4ACC(&StringLiteral_10656/*"PURCHASE_ERROR"*/, v5);
    sub_1BE4ACC(&StringLiteral_10655/*"PURCHASE_CANCEL"*/, v6);
    sub_1BE4ACC(&StringLiteral_10657/*"PURCHASE_OK"*/, v7);
    byte_4B63277 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10655/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1BE4D28(Instance, v9);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10656/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10657/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  SummonControl___c_c *v9; // x8
  float x; // s9
  float y; // s12
  float m_XMin; // s8
  float m_YMin; // s13
  float m_Height; // s10
  float m_Width; // s11
  CommonUI_o *v16; // x20
  System_Action_o *_9__149_0; // x21
  Il2CppObject *v18; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Action_o *v26; // x20
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v28; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B63251 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl__exeFormation_b__149_1__, v4);
    sub_1BE4ACC(&Method_SummonControl___c__exeFormation_b__149_0__, v5);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v6);
    byte_4B63251 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = SummonControl___c_TypeInfo;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  v16 = (CommonUI_o *)Instance;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v9 = SummonControl___c_TypeInfo;
  }
  _9__149_0 = v9->static_fields->__9__149_0;
  if ( !_9__149_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = SummonControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v9->static_fields->__9;
    _9__149_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__149_0, v18, Method_SummonControl___c__exeFormation_b__149_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__149_0 = _9__149_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__149_0,
      (int64_t)_9__149_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v16 )
    sub_1BE4D28(Instance, v8);
  v28.fields.m_YMin = m_YMin + 33.0;
  v27.fields.y = y + 33.0;
  v27.fields.x = x;
  v28.fields.m_XMin = m_XMin;
  v28.fields.m_Width = m_Width;
  v28.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v16, v27, 0.0, v28, _9__149_0, 0LL);
  v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v26, 0LL);
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
  __int64 v11; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0

  if ( (byte_4B63271 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3497/*"CHECK_SERVANT_FRAME"*/, paramData);
    byte_4B63271 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.gachaParamData, (int64_t)paramData, v5, v6, v7, v8, v9, v10);
  if ( this->fields.tutorialKind == 1 )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    if ( !confirmDlgInfo
      || (SummonConfirmDlgComponent__setTutorial(confirmDlgInfo, 0, 0LL),
          (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.tutorialArrowObj) == 0LL) )
    {
LABEL_9:
      sub_1BE4D28(confirmDlgInfo, v11);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3497/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v7; // x21
  CombineResultEffectComponent_ClickDelegate_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B632B6 & 1) == 0 )
  {
    sub_1BE4ACC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl__executeEnhanceTresureDevice_b__269_0__, v4);
    byte_4B632B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v7 = (CommonUI_o *)Instance;
  v8 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BE4D18(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__269_0__,
    0LL);
  if ( !v7 )
    sub_1BE4D28(v9, v10);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v7, npEnhanceSvtId, v8, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct SummonInfoControl_o *summonInfoCtr; // x8
  _BOOL4 isFree; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x22
  struct GachaRqParamData_o *gachaParamData; // x8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  struct GachaRqParamData_o *v19; // x8
  Il2CppObject *gachaSubEntity; // x20
  System_String_o *SummonConfirmMessage; // x21
  struct GachaRqParamData_o *v22; // x8
  int32_t friendPoint; // w22
  SummonConfirmDlgComponent_o *v24; // x25
  int32_t gachaTime; // w23
  int32_t gachaResourceNum; // w28
  int32_t needPoint; // w24
  SummonConfirmDlgComponent_CallbackFunc_o *v28; // x26
  const MethodInfo *v29; // x3
  System_Action_o *v30; // x27
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+30h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4B63291 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_SummonControl_autoSellSettingChange2__, v8);
    this = (SummonControl_o *)sub_1BE4ACC(&Method_SummonControl_friendSummonConfirmResult__, v9);
    byte_4B63291 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_22;
  isFree = summonInfoCtr->fields.isFree;
  v2->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v2->fields.confirmDlgInfo;
    v13 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v14);
    v15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
    gachaParamData = v2->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v13, v15, gachaParamData->fields.gachaId, 0LL);
      return;
    }
LABEL_22:
    sub_1BE4D28(this, method);
  }
  this = (SummonControl_o *)v2->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v17 )
      break;
    v19 = v2->fields.gachaParamData;
    if ( !v19 )
      sub_1BE4D28(v17, v18);
    gachaSubEntity = v32.fields._current;
    if ( !v32.fields._current )
      sub_1BE4D28(v17, v18);
    if ( v19->fields.gachaId == LODWORD(v32.fields._current[1].klass) )
    {
      SummonConfirmMessage = GachaSubEntity__GetSummonConfirmMessage((GachaSubEntity_o *)v32.fields._current, 0LL);
      goto LABEL_16;
    }
  }
  gachaSubEntity = 0LL;
  SummonConfirmMessage = 0LL;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v22 = v2->fields.gachaParamData;
  if ( !v22 )
    goto LABEL_22;
  friendPoint = v2->fields.friendPoint;
  v24 = v2->fields.confirmDlgInfo;
  gachaTime = v22->fields.gachaTime;
  gachaResourceNum = v22->fields.gachaResourceNum;
  needPoint = v2->fields.needPoint;
  v28 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v29);
  v30 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v24 )
    goto LABEL_22;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v24,
    friendPoint,
    gachaTime,
    needPoint,
    friendPoint - gachaResourceNum,
    v28,
    v30,
    SummonConfirmMessage,
    (GachaSubEntity_o *)gachaSubEntity,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B63292 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_friendSummonConfirmResult__, res);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v5);
    byte_4B63292 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v7 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_friendSummonConfirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    SummonControl__friendPointQpManaCheck(this, v9);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_10:
    sub_1BE4D28(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_4B6325C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId);
    byte_4B6325C = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1BE4D28(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  int32_t v5; // w20

  if ( (byte_4B632B9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    byte_4B632B9 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_9:
    sub_1BE4D28(vaildGachaList, method);
  v5 = 0;
  while ( v5 < vaildGachaList->fields._size )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    vaildGachaList,
                                                                    v5,
                                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_9;
    if ( HIDWORD(vaildGachaList[1].monitor) == 3 )
      return v5;
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
    ++v5;
    if ( !vaildGachaList )
      goto LABEL_9;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserGachaEntity_o *__fastcall SummonControl__getUserGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6325B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B6325B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1BE4D28(Instance, v7);
  UserGachaMaster__TryGetEntity(
    (UserGachaMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    gachaId,
    0LL);
  return entity;
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
  __int64 v3; // x1
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  PartyOrganizationUtility_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B6324C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    byte_4B6324C = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1BE4D28(0LL, v6);
    p_stoneFragmentsShopEntity = (PartyOrganizationUtility_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0LL);
    p_stoneFragmentsShopEntity->klass = (PartyOrganizationUtility_c *)EntityOfFragmentsShop;
    sub_1BE4A70(p_stoneFragmentsShopEntity, (int64_t)EntityOfFragmentsShop, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B6324B & 1) == 0 )
  {
    sub_1BE4ACC(&FSUtility_TypeInfo, method);
    byte_4B6324B = 1;
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
  __int64 v5; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  ServantFlagReleaseMaster_o *v8; // x21
  il2cpp_array_size_t v9; // w25
  bool v10; // w24
  struct GachaInfos_array *v11; // x8
  GachaInfos_o *v12; // x8
  int32_t objectId; // w22
  bool result; // w0

  v4 = this;
  if ( (byte_4B632B2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId);
    this = (SummonControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B632B2 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length >= 1 )
  {
    v8 = (ServantFlagReleaseMaster_o *)this;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      v11 = v4->fields.gachaResInfoList;
      if ( !v11 )
        break;
      if ( v9 >= v11->max_length )
        sub_1BE4D30(this, svtId);
      v12 = v11->m_Items[v9];
      if ( !v12 || !v8 )
        break;
      objectId = v12->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v8, objectId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_16;
      v10 = (int)++v9 < max_length;
      if ( max_length == v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BE4D28(this, svtId);
  }
  v10 = 0;
LABEL_15:
  objectId = 0;
LABEL_16:
  result = v10;
  *svtId = objectId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
          sub_1BE4D30(this, *(_QWORD *)&svtId);
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
    sub_1BE4D28(this, svtId);
  }
  return 0;
}


bool __fastcall SummonControl__isSvtEqSummonResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  il2cpp_array_size_t v8; // w22
  bool v9; // w24
  struct GachaInfos_array *v10; // x8
  GachaInfos_o *v11; // x25

  v2 = this;
  if ( (byte_4B632A6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    this = (SummonControl_o *)sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B632A6 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length >= 1 )
  {
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = v2->fields.gachaResInfoList;
      if ( !v10 )
        break;
      if ( v8 >= v10->max_length )
        sub_1BE4D30(this, method);
      v11 = v10->m_Items[v8];
      if ( !v11 || !v7 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v7,
                                  v11->fields.objectId,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !this
        || (this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL),
            ((unsigned __int8)this & 1) == 0)
        || !v11->fields.isNew )
      {
        v9 = (int)++v8 < max_length;
        if ( max_length != v8 )
          continue;
      }
      return v9;
    }
LABEL_18:
    sub_1BE4D28(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4B632C6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v5);
    byte_4B632C6 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1BE4D28(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *limitWarningDlgInfo; // x0
  _DWORD *v12; // x20
  int32_t v13; // w20
  BalanceConfig_c *v14; // x0
  const MethodInfo *v15; // x1
  SummonLimitWarningDlgComponent_o *v16; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v17; // x21
  System_Action_o *v18; // x22

  if ( (byte_4B632C5 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&res);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v5);
    sub_1BE4ACC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_SummonControl_limitManaConfirmResult__, v8);
    sub_1BE4ACC(&Method_SummonControl_showConfirmDlg__, v9);
    sub_1BE4ACC(&StringLiteral_3568/*"CLICK_CANCEL"*/, v10);
    byte_4B632C5 = 1;
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
        v12 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 62), 0LL) )
          goto LABEL_18;
        v13 = v12[46];
        v14 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v14 = BalanceConfig_TypeInfo;
        }
        if ( v13 >= v14->static_fields->UserItemMax )
        {
          v16 = this->fields.limitWarningDlgInfo;
          v17 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v18 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v16 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v16, v17, v18, 0LL);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v15);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_21:
      sub_1BE4D28(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3568/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  SummonRootComponent_o *klass; // x20
  System_Action_o *v9; // x21
  __int64 methodPtr_low; // x9
  SummonControl_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4B63299 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl__loadAssetsForSummon_b__232_0__, v4);
    sub_1BE4ACC(&SummonRootComponent_TypeInfo, v5);
    byte_4B63299 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__232_0__, 0LL),
        !klass) )
  {
    sub_1BE4D28(Instance, v7);
  }
  methodPtr_low = LOBYTE(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v9, 0LL);
  }
  else
  {
    sub_1BE4FE8(klass);
    SummonControl__friendSummonConfirmResult(v11, v12, v13);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v9; // w8
  int32_t v10; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4B63268 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_onClickChangeBanner__, method);
    sub_1BE4ACC(&StringLiteral_12882/*"SetBannerCenter"*/, v3);
    byte_4B63268 = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_70436580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12882/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_24;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_24;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    currentMoveIdx = this->fields.currentMoveIdx;
    v9 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v10 = currentMoveIdx + 1 < v9 ? currentMoveIdx + 1 : 0;
    if ( !leftArrowBtn )
      goto LABEL_24;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_24;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_24;
    centerChild = this->fields.centerChild;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v10,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47511680(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v10,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_24:
      sub_1BE4D28(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47511680(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t childCount; // w8
  int v8; // w8
  int32_t v9; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4B63269 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SummonControl_onClickLeftChangeBanner__, method);
    sub_1BE4ACC(&StringLiteral_12882/*"SetBannerCenter"*/, v3);
    byte_4B63269 = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_70436580(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12882/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_24;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_24;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v8 = childCount - 1;
    v9 = this->fields.currentMoveIdx - 1 < 0 ? v8 : this->fields.currentMoveIdx - 1;
    if ( !leftArrowBtn )
      goto LABEL_24;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_24;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_24;
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
      || (UICenterOnChild__CenterOn_47511680(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
LABEL_24:
      sub_1BE4D28(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47511680(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v10; // x21
  const MethodInfo *v11; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s9
  float m_Height; // s14
  SummonControl_o *v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  float v20; // s0
  SummonControl___c_c *v21; // x0
  float v22; // s11
  System_Action_o *_9__148_0; // x22
  Il2CppObject *v24; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Action_o *v32; // x20
  UnityEngine_Rect_o v33; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B63250 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl__openAfterSummonInfo_b__148_1__, v5);
    sub_1BE4ACC(&Method_SummonControl___c__openAfterSummonInfo_b__148_0__, v6);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_13704/*"TUTORIAL_MESSAGE_SUMMON2"*/, v8);
    byte_4B63250 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13704/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v11);
  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v20 = SummonControl__FSMenuOffsetX(v17, v18);
  v21 = SummonControl___c_TypeInfo;
  v22 = v20;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v21 = SummonControl___c_TypeInfo;
  }
  _9__148_0 = v21->static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SummonControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v24, Method_SummonControl___c__openAfterSummonInfo_b__148_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__148_0 = _9__148_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__148_0,
      (int64_t)_9__148_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !Instance )
    sub_1BE4D28(v21, v19);
  v33.fields.m_Height = m_Height + 33.0;
  v33.fields.m_YMin = m_YMin + 33.0;
  v33.fields.m_XMin = m_XMin + v22;
  v33.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v10,
    TUTORIAL_MENU_ARROW_POS_FS,
    v33,
    0.0,
    0LL,
    -1,
    _9__148_0,
    0LL);
  v32 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v32, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4B6324F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3561/*"CLEAR_TUTORIAL"*/, method);
    byte_4B6324F = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3561/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_1BE4D28(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  void *Item; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v26; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // w21
  int64_t v36; // x21
  int64_t v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  System_Collections_Generic_List_object__o *v55; // x21
  System_Comparison_T__o *v56; // x22
  Il2CppObject *v57; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_List_object__o *v65; // x22
  int32_t v66; // w21
  int32_t v67; // w22
  System_Action_o *v68; // x20

  if ( (byte_4B63252 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&System_Comparison_EventTutorialEntity__TypeInfo, v3);
    sub_1BE4ACC(&EventTutorialEntity_TypeInfo, v4);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v11);
    sub_1BE4ACC(&Method_SummonControl___c__openSvtEqInfo_b__150_1__, v12);
    sub_1BE4ACC(&Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, v13);
    sub_1BE4ACC(&SummonControl___c__DisplayClass150_0_TypeInfo, v14);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v15);
    byte_4B63252 = 1;
  }
  v16 = sub_1BE4D18(SummonControl___c__DisplayClass150_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v26 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v26, 0LL);
  *(_QWORD *)(v16 + 16) = EventTutorialEntity;
  v28 = (void **)(v16 + 16);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)EventTutorialEntity, v29, v30, v31, v32, v33, v34);
  Item = *(void **)(v16 + 16);
  if ( !Item )
    goto LABEL_11;
  v35 = 0;
  while ( v35 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v35,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v28;
    ++v35;
    if ( !*v28 )
      goto LABEL_11;
  }
  v36 = sub_1BE4D18(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_11;
  *(_DWORD *)(v36 + 24) = 1;
  v37 = sub_1BE4B74(int___TypeInfo, 1LL);
  *(_QWORD *)(v36 + 80) = v37;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v36 + 80), v37, v38, v39, v40, v41, v42, v43);
  v50 = *(_QWORD *)(v36 + 80);
  if ( !v50 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v50 + 24) )
    sub_1BE4D30(Item, v18);
  *(_DWORD *)(v50 + 32) = 1;
  Item = *v28;
  if ( !*v28 )
    goto LABEL_11;
  v51 = *((_QWORD *)Item + 2);
  v52 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++*((_DWORD *)Item + 7);
  if ( !v51 )
    goto LABEL_11;
  v53 = *((int *)Item + 6);
  if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v36,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = v51 + 8 * v53;
    *((_DWORD *)Item + 6) = v53 + 1;
    *(_QWORD *)(v54 + 32) = v36;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v54 + 32), v36, v44, v45, v46, v47, v48, v49);
  }
  Item = SummonControl___c_TypeInfo;
  v55 = (System_Collections_Generic_List_object__o *)*v28;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    Item = SummonControl___c_TypeInfo;
  }
  v56 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v56 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = SummonControl___c_TypeInfo;
    }
    v57 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v56 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(v56, v57, Method_SummonControl___c__openSvtEqInfo_b__150_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__150_1 = (struct System_Comparison_EventTutorialEntity__o *)v56;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__150_1, (int64_t)v56, v59, v60, v61, v62, v63, v64);
  }
  if ( !v55 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_56548584(
    v55,
    v56,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v65 = (System_Collections_Generic_List_object__o *)*v28;
  if ( !*v28 )
LABEL_11:
    sub_1BE4D28(Item, v18);
  v66 = v65->fields._size - 1;
  if ( v66 >= 0 )
  {
    while ( v65 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v65,
               v66,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v28;
        if ( !*v28 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v66,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v67 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        Item = (void *)TutorialFlag__GetGachaFlg(v67, 0LL);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v28;
          if ( !*v28 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v66,
            (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v65 = (System_Collections_Generic_List_object__o *)*v28;
      if ( --v66 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v68 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)v16, Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v65,
    v68,
    0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_4B6329D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5);
    sub_1BE4ACC(&Method_SummonControl_callbackTutorialSet__, v6);
    sub_1BE4ACC(&StringLiteral_11227/*"REQUEST_OK"*/, v7);
    byte_4B6329D = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v8,
                                               (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0LL);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BE4D28(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11227/*"REQUEST_OK"*/, 0LL);
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
        sub_1BE4D28(summonInfoCtr, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  int v12; // w9
  struct System_Collections_Generic_List_GachaSubEntity__o *gachaSubEntityList; // x8
  int32_t v14; // w2
  int v15; // w9
  int32_t VaildPayType; // w0
  const MethodInfo *v17; // x1
  int32_t v18; // w20
  TerminalPramsManager_c *v19; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_4B63256 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v6);
    byte_4B63256 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_23;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_23;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  SummonControl__clearBannerList(this, v8);
  SummonControl__clearResultList(this, v9);
  summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonResultInfo;
  if ( !summonBannerInfo )
    goto LABEL_23;
  SummonResultComponent__SetActive((SummonResultComponent_o *)summonBannerInfo, 0, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
  {
    size = vaildGachaList->fields._size;
    v12 = vaildGachaList->fields._version + 1;
    vaildGachaList->fields._size = 0;
    vaildGachaList->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  }
  gachaSubEntityList = this->fields.gachaSubEntityList;
  if ( gachaSubEntityList )
  {
    v14 = gachaSubEntityList->fields._size;
    v15 = gachaSubEntityList->fields._version + 1;
    gachaSubEntityList->fields._size = 0;
    gachaSubEntityList->fields._version = v15;
    if ( v14 >= 1 )
      System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v14, 0LL);
  }
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_23:
    sub_1BE4D28(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v18 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B632FF )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v17);
    byte_4B632FF = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_SummonType_k__BackingField = v18;
  SummonControl__releaseBannerData(this, v17);
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( bonusSelectAssetManager )
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0LL);
}


void __fastcall SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  void *Item; // x0
  int32_t v9; // w20
  int32_t v10; // w22
  int32_t v11; // w21
  char v12; // w23
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int FriendPointIndex; // w4
  const MethodInfo *v19; // x5

  if ( (byte_4B632B8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B632B8 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList
    || (method = (const MethodInfo *)(unsigned int)this->fields.currentIdx, vaildGachaList->fields._size <= (int)method) )
  {
    v9 = 0;
    goto LABEL_9;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           (int32_t)method,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !Item )
LABEL_26:
    sub_1BE4D28(Item, method);
  if ( *((_DWORD *)Item + 13) != 3 )
  {
    Item = this->fields.vaildGachaList;
    if ( Item )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               this->fields.currentIdx,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( Item )
      {
        v9 = *((_DWORD *)Item + 4);
        Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Item )
        {
          Item = DataManager__GetMasterData_object_(
                   (DataManager_o *)Item,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( Item )
          {
            Item = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                     v9,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Item )
            {
              v11 = *((_DWORD *)Item + 18);
              if ( v11 || *((_DWORD *)Item + 36) )
              {
                v10 = *((_DWORD *)Item + 36);
                goto LABEL_10;
              }
LABEL_9:
              v10 = 0;
              v11 = 0;
LABEL_10:
              v12 = 0;
              goto LABEL_11;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 1;
LABEL_11:
  if ( !SummonControl__resetSummonVaildData(this, method) || SummonControl__checkMaxDrawNum(this, v13) )
  {
    SummonControl__deleteBannerList(this, v13);
    SummonControl__CheckValidGachaList(this, v14);
    SummonControl__createSummonInfo(this, v15);
    FriendPointIndex = SummonControl__getFriendPointIndex(this, v16);
    if ( (v12 & 1) == 0 )
      FriendPointIndex = SummonControl__GetGachaIndex(this, v9, v11, v10, FriendPointIndex, v19);
    if ( FriendPointIndex >= 1 )
      SummonControl__setDispRePosition(this, FriendPointIndex, v17);
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

  if ( (byte_4B63255 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    byte_4B63255 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (PartyOrganizationUtility_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_1BE4A70(p_bannerAssetData, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  int32_t shopIdIdx; // w24
  Il2CppObject *p_obj; // x27
  GachaDrawRequest_o *v18; // x19
  __int64 v19; // x8
  System_String_o *v20; // x29
  unsigned __int64 v21; // x22
  int32_t v22; // w28
  System_String_o *v23; // x0
  System_String_o *selectBonusListData; // x28
  int32_t ticketItemId; // [xsp+14h] [xbp-6Ch]
  int32_t warId; // [xsp+18h] [xbp-68h]
  int32_t gachaTime; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B6329A & 1) == 0 )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, method);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_GachaDrawRequest___, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_SummonControl_callbackGachaDraw__, v7);
    sub_1BE4ACC(&StringLiteral_174/*" : "*/, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B6329A = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v11,
                                             (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
  v18 = (GachaDrawRequest_o *)maskObject;
  ticketItemId = gachaParamData->fields.ticketItemId;
  if ( storyAdjustIds )
  {
    v19 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v19 )
    {
      if ( (int)v19 >= 1 )
      {
        v20 = (System_String_o *)StringLiteral_1/*""*/;
        v21 = 0LL;
        v22 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v21 >= (unsigned int)v19 )
            sub_1BE4D30(maskObject, method);
          v23 = System_Int32__ToString(v22, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_62710068(
                                                     v20,
                                                     v23,
                                                     (System_String_o *)StringLiteral_174/*" : "*/,
                                                     0LL);
          LODWORD(v19) = storyAdjustIds->max_length;
          ++v21;
          v20 = (System_String_o *)maskObject;
          v22 += 4;
        }
        while ( (__int64)v21 < (int)v19 );
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v18) )
LABEL_22:
    sub_1BE4D28(maskObject, method);
  GachaDrawRequest__beginRequest(
    v18,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_o *MainBgmName; // x20
  CommonUI_o *v14; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B632B7 & 1) == 0 )
  {
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, method);
    sub_1BE4ACC(&BgmManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1BE4ACC(&SoundManager_TypeInfo, v10);
    byte_4B632B7 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14 )
    goto LABEL_27;
  CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0LL, 37, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_38070848((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v15);
  SummonControl__setUserResourceDisp(this, v16);
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
    SummonControl__progTutorial(this, v17);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v18);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_27:
    sub_1BE4D28(Instance, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1BE4D28(0LL, v19);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v21.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v20);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.userGameEntity, (int64_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  SummonControl__resetStoneInfo(this, v10);
}


void __fastcall SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4B632B1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl__resetResultList_b__264_0__, v5);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v6);
    byte_4B632B1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__264_0__, 0LL);
  if ( !v11 )
LABEL_13:
    sub_1BE4D28(Instance, v8);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_4B632BC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&StringLiteral_3082/*"BONUS_SELECT_GACHA"*/, v5);
    byte_4B632BC = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0LL )
    {
LABEL_14:
      sub_1BE4D28(Master_object, v6);
    }
    if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_14;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3082/*"BONUS_SELECT_GACHA"*/, 0LL);
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
          sub_1BE4D30(gachaMst, method);
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
      sub_1BE4D28(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (PartyOrganizationUtility_c *)v11;
    sub_1BE4A70(p_useGachaData, v11, v4, v5, v6, v7, v8, v9);
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
  __int64 v5; // x1
  __int64 v6; // x1
  void *bannerAssetData; // x0
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w23
  char *v11; // x8
  UnityEngine_GameObject_o *v12; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4B6325F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObjectList_GameObject___, searchTarget);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B6325F = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_2F3B38C *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_17;
  v8 = *((_DWORD *)bannerAssetData + 6);
  v9 = bannerAssetData;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1BE4D30(bannerAssetData, searchTarget);
      v11 = (char *)&v9[2 * v10];
      v12 = (UnityEngine_GameObject_o *)*((_QWORD *)v11 + 4);
      if ( !v12 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v11 + 4),
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bannerAssetData = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)bannerAssetData & 1) != 0 )
      {
        if ( !Component_object )
          break;
        bannerAssetData = UIAtlas__GetSprite((UIAtlas_o *)Component_object, searchTarget, 0LL);
        if ( bannerAssetData )
          return v12;
      }
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        return 0LL;
    }
LABEL_17:
    sub_1BE4D28(bannerAssetData, searchTarget);
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
    sub_1BE4D28(indexPanel, method);
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
    sub_1BE4D30(indexPanel, method);
  v14 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}


void __fastcall SummonControl__setChangeSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Item; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v18; // x22
  SummonInfoControl_o *v19; // x20
  System_Action_o *v20; // x21

  if ( (byte_4B6326A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&SummonInfoControl_ClickDelegate_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    sub_1BE4ACC(&Method_SummonControl__setChangeSummonInfo_b__179_0__, v5);
    sub_1BE4ACC(&Method_SummonControl_exeSummon__, v6);
    byte_4B6326A = 1;
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
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.currentGachaInfo, (int64_t)Item, v9, v10, v11, v12, v13, v14);
  SummonControl__setResourceInfo(this, v15);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v18 = (SummonInfoControl_ClickDelegate_o *)sub_1BE4D18(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v18, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v18, 0LL),
        v19 = this->fields.summonInfoCtr,
        v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__179_0__, 0LL),
        !v19) )
  {
LABEL_8:
    sub_1BE4D28(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v19, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4B6326F & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1BE4ACC(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                *(_QWORD *)&currentIdx);
    byte_4B6326F = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_1BE4D28(this, *(_QWORD *)&currentIdx);
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
    sub_1BE4D28(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1BE4D28(0LL, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x8
  int SummonId_k__BackingField; // w20
  int32_t GachaIdFromSelectedBannerEntity; // w0
  TerminalPramsManager_c *v10; // x0
  void *bannerInfoList; // x0
  int v12; // w22
  int32_t v13; // w21
  __int64 v14; // x1
  __int64 v15; // x8
  SummonControl_o *v16; // x0
  int32_t v17; // w1

  if ( (byte_4B6326D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v4);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v5);
    byte_4B6326D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B63300 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B63300 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_SummonId_k__BackingField <= 0 )
  {
    GachaIdFromSelectedBannerEntity = SummonControl__GetGachaIdFromSelectedBannerEntity((SummonControl_o *)v6, method);
    v7 = TerminalPramsManager_TypeInfo;
    SummonId_k__BackingField = GachaIdFromSelectedBannerEntity;
  }
  else
  {
    if ( !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_4B63300 )
    {
      sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
      byte_4B63300 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    SummonId_k__BackingField = v7->static_fields->_SummonId_k__BackingField;
  }
  if ( !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !byte_4B63301 )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, method);
    byte_4B63301 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SummonId_k__BackingField = 0;
  bannerInfoList = this->fields.bannerInfoList;
  if ( this->fields.summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_37;
  }
  else if ( bannerInfoList )
  {
    v12 = *((_DWORD *)bannerInfoList + 6);
    if ( v12 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        bannerInfoList = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)bannerInfoList,
                           v13,
                           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !bannerInfoList )
LABEL_35:
          sub_1BE4D28(bannerInfoList, v14);
        v15 = *((_QWORD *)bannerInfoList + 11);
        if ( !v15 )
        {
          v17 = 1;
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v15 + 52) == this->fields.summonType
          && (SummonId_k__BackingField < 1 || *(_DWORD *)(v15 + 16) == SummonId_k__BackingField) )
        {
          break;
        }
        if ( v12 == ++v13 )
          goto LABEL_37;
        bannerInfoList = this->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_35;
      }
      v17 = *((_DWORD *)bannerInfoList + 24);
LABEL_41:
      v16 = this;
      goto LABEL_42;
    }
LABEL_37:
    v16 = this;
    v17 = 0;
LABEL_42:
    SummonControl__setDispRePosition(v16, v17, v2);
  }
}


void __fastcall SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  Il2CppObject *Item; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v15; // x25
  UIWidget_o *v16; // x22
  UIWidget_o *v17; // x23
  UIWidget_o *v18; // x20
  UIWidget_o *v19; // x24
  SummonControl_c *v20; // x8
  UIWidget_o *v21; // x21
  float COLOR_VAL; // s8
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
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6326B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    sub_1BE4ACC(&SummonControl_TypeInfo, v4);
    byte_4B6326B = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.currentGachaInfo, (int64_t)Item, v7, v8, v9, v10, v11, v12);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v15 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v16 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v17 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v18 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v19 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v20 = SummonControl_TypeInfo;
  v21 = (UIWidget_o *)vaildGachaList;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v20 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v20->static_fields->COLOR_VAL;
  if ( isPointSummon )
  {
    if ( !v15 )
      goto LABEL_34;
    v23.fields.a = 1.0;
    v23.fields.r = v20->static_fields->COLOR_VAL;
    v23.fields.g = v23.fields.r;
    v23.fields.b = v23.fields.r;
    UIWidget__set_color(v15, v23, 0LL);
    if ( !v16 )
      goto LABEL_34;
    v24.fields.a = 1.0;
    v24.fields.r = COLOR_VAL;
    v24.fields.g = COLOR_VAL;
    v24.fields.b = COLOR_VAL;
    UIWidget__set_color(v16, v24, 0LL);
    if ( !v19 )
      goto LABEL_34;
    v25.fields.a = 1.0;
    v25.fields.r = COLOR_VAL;
    v25.fields.g = COLOR_VAL;
    v25.fields.b = COLOR_VAL;
    UIWidget__set_color(v19, v25, 0LL);
    if ( !v21 )
      goto LABEL_34;
    v26.fields.a = 1.0;
    v26.fields.r = COLOR_VAL;
    v26.fields.g = COLOR_VAL;
    v26.fields.b = COLOR_VAL;
    UIWidget__set_color(v21, v26, 0LL);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0LL);
    if ( !v17 )
      goto LABEL_34;
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    UIWidget__set_color(v17, v27, 0LL);
    if ( !v18 )
      goto LABEL_34;
    v28.fields.r = 1.0;
    v28.fields.g = 1.0;
    v28.fields.b = 1.0;
    v28.fields.a = 1.0;
    UIWidget__set_color(v18, v28, 0LL);
  }
  else
  {
    if ( !v17 )
      goto LABEL_34;
    v29.fields.a = 1.0;
    v29.fields.r = v20->static_fields->COLOR_VAL;
    v29.fields.g = v29.fields.r;
    v29.fields.b = v29.fields.r;
    UIWidget__set_color(v17, v29, 0LL);
    if ( !v18 )
      goto LABEL_34;
    v30.fields.a = 1.0;
    v30.fields.r = COLOR_VAL;
    v30.fields.g = COLOR_VAL;
    v30.fields.b = COLOR_VAL;
    UIWidget__set_color(v18, v30, 0LL);
    if ( !v15 )
      goto LABEL_34;
    v31.fields.r = 1.0;
    v31.fields.g = 1.0;
    v31.fields.b = 1.0;
    v31.fields.a = 1.0;
    UIWidget__set_color(v15, v31, 0LL);
    if ( !v16 )
      goto LABEL_34;
    v32.fields.r = 1.0;
    v32.fields.g = 1.0;
    v32.fields.b = 1.0;
    v32.fields.a = 1.0;
    UIWidget__set_color(v16, v32, 0LL);
    if ( !v19 )
      goto LABEL_34;
    v33.fields.r = 1.0;
    v33.fields.g = 1.0;
    v33.fields.b = 1.0;
    v33.fields.a = 1.0;
    UIWidget__set_color(v19, v33, 0LL);
    if ( !v21 )
      goto LABEL_34;
    v34.fields.r = 1.0;
    v34.fields.g = 1.0;
    v34.fields.b = 1.0;
    v34.fields.a = 1.0;
    UIWidget__set_color(v21, v34, 0LL);
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
    sub_1BE4D28(vaildGachaList, method);
  }
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B632AF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B632AF = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0LL),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(summonResultInfo, method);
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
  SelectBannerSliderIcon_o *v9; // x23

  if ( (byte_4B6326C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx);
    byte_4B6326C = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49610264(
                                                sliderGrid,
                                                (const MethodInfo_2F4FE18 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !sliderGrid )
        break;
      v9 = (SelectBannerSliderIcon_o *)sliderGrid;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)sliderGrid, 0, 0LL);
      if ( idx == v8 )
        SelectBannerSliderIcon__setEnableOnImg(v9, 1, 0LL);
      if ( v7 == ++v8 )
        return;
    }
LABEL_15:
    sub_1BE4D28(sliderGrid, *(_QWORD *)&idx);
  }
}


void __fastcall SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Transform_o *Time; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v20; // x2
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UILabel_o *summonHelpLabel; // x21
  __int64 v29; // x1
  TerminalPramsManager_c *v30; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1
  long double v39; // q0
  __int64 v40; // x0
  __int64 v41; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct GachaEntity_array *ListValidData; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v66; // x20
  AssetLoader_LoadEndDataHandler_o *v67; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B63253 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaMaster___, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v5);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1BE4ACC(&Method_SummonControl_LoadBannerEnd__, v10);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_12540/*"SUMMON_HELP_MESSAGE"*/, v12);
    sub_1BE4ACC(&StringLiteral_13270/*"SummonBanners/DownloadSummonBanner"*/, v13);
    sub_1BE4ACC(&StringLiteral_6497/*"FAIL_LOAD"*/, v14);
    sub_1BE4ACC(&StringLiteral_20619/*"img_line_summon"*/, v15);
    sub_1BE4ACC(&StringLiteral_20533/*"img_bg_banner"*/, v16);
    byte_4B63253 = 1;
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
  SummonControl__setDispSummonInfo(this, 1, v20);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 37, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_38070848((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  this->fields.isDoneTutorial = 1;
  v21 = StringLiteral_13270/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13270/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.assetPath, v21, v22, v23, v24, v25, v26, v27);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12540/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B632FE )
  {
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v29);
    byte_4B632FE = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v30->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  SummonControl__setUserResourceDisp(this, v38);
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C369A8(v39);
  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
  if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
    v41 = sub_1C369A8(v39);
  Time = **(UnityEngine_Transform_o ***)(v41 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.gachaMst,
    (int64_t)MasterData_object,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.useGachaData,
    (int64_t)ListValidData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  SummonControl__CheckValidGachaList(this, v56);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.vaildGachaList, 0LL, v57, v58, v59, v60, v61, v62);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20619/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_20533/*"img_bg_banner"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6497/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_45:
    sub_1BE4D28(Time, v18);
  }
  v66 = this->fields.assetPath;
  v67 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v67, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v66, v67, 1, 0LL);
}


void __fastcall SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  SummonResultComponent_o *Instance; // x0
  CommonUI_o *v12; // x20
  SummonControl___c_c *v13; // x8
  System_Action_o *_9__256_0; // x21
  Il2CppObject *v15; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B632AB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v5);
    sub_1BE4ACC(&Method_SummonControl___c__setSummonResultList_b__256_0__, v6);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_9454/*"NO_EXIST"*/, v8);
    sub_1BE4ACC(&StringLiteral_12325/*"SHOW_TALK"*/, v9);
    byte_4B632AB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38593888(107, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38593888(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v10) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (CommonUI_o *)Instance;
      v13 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v13 = SummonControl___c_TypeInfo;
      }
      _9__256_0 = v13->static_fields->__9__256_0;
      if ( !_9__256_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = SummonControl___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__256_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(_9__256_0, v15, Method_SummonControl___c__setSummonResultList_b__256_0__, 0LL);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__256_0 = _9__256_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__256_0,
          (int64_t)_9__256_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      if ( !v12 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_30899616(v12, 2, 108, _9__256_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12325/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9454/*"NO_EXIST"*/, 0LL);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1BE4D28(Instance, v10);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *bannerInfoList; // x0
  int32_t v9; // w21
  int32_t v10; // w21
  bool v11; // w20

  v3 = isEnable;
  if ( (byte_4B6324E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__, v7);
    byte_4B6324E = 1;
  }
  if ( !this->fields.isDoneTutorial )
    v3 &= this->fields.tutorialKind != 2;
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_22;
  v9 = 0;
  while ( v9 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v9,
                                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
      ++v9;
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
  v10 = 0;
  while ( v10 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v10,
                                                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerInfoList;
      ++v10;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_22;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !bannerInfoList
    || (v11 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v11, 0LL),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_22:
    sub_1BE4D28(bannerInfoList, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v11, 0LL);
}


void __fastcall SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UILabel_o *currentFragmentNumLb; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B63258 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_int__TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_TblUserMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&int_TypeInfo, v6);
    sub_1BE4ACC(&Method_SummonControl__setUserResourceDisp_b__156_0__, v7);
    sub_1BE4ACC(&StringLiteral_25315/*"{0:N0}"*/, v8);
    byte_4B63258 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v19, v20, v21);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25315/*"{0:N0}"*/, v24, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = (System_Action_int__o *)sub_1BE4D18(System_Action_int__TypeInfo);
  System_Action_int____ctor(v26, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__156_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v26, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v27, v28, v29);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25315/*"{0:N0}"*/, v31, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v32, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v34, v35, v36);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25315/*"{0:N0}"*/, v37, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v38, 0LL)) == 0LL)
    || (v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        GameObjectExtensions__SetLocalPositionX(v39, -179.0, 0LL),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v40, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_1BE4D28(Master_object, v18);
  }
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v41, 179.0, 0LL);
}


void __fastcall SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void __fastcall SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v12; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Action_o *v21; // x21

  if ( (byte_4B6328D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BE4ACC(&Method_SummonControl__showConfirmDlg_b__215_0__, v8);
    byte_4B6328D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v14 = (BonusSelectSummonAssetManager_o *)sub_1BE4D18(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v14, 0LL);
        this->fields.bonusSelectAssetManager = v14;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.bonusSelectAssetManager,
          (int64_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v21 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__215_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v21, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BE4D28(Master_object, v10);
  }
  SummonControl__showConfirmDlg_33853460(this, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_33853460(
        SummonControl_o *this,
        bool beforeDetailFlag,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w23
  struct GachaRqParamData_o *v20; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x20
  int32_t *v22; // x22
  int32_t needStone; // w22
  int haveFreeStone; // w28
  int32_t haveChargeStone; // w29
  int v26; // w8
  struct SummonInfoControl_o *v27; // x8
  const MethodInfo *v28; // x1
  struct SummonInfoControl_o *v29; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v31; // x9
  struct GachaRqParamData_o *v32; // x8
  GachaDetailEntity_o *v33; // x22
  SummonConfirmDlgComponent_CallbackFunc_o *v34; // x20
  const MethodInfo *v35; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v36; // x0
  const MethodInfo *v37; // x3
  System_Int32_array *v38; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  struct GachaRqParamData_o *v42; // x8
  int32_t v43; // w21
  struct GachaRqParamData_o *v44; // x8
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x22
  SummonConfirmDlgComponent_o *v47; // x22
  int32_t v48; // w26
  int32_t v49; // w27
  int32_t v50; // w28
  struct GachaRqParamData_o *v51; // x8
  GachaDetailEntity_o *v52; // x24
  struct GachaRqParamData_o *v53; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  System_Int32_array *v57; // x25
  int32_t ScriptInt; // w0
  const MethodInfo *v59; // x3
  SummonControl_o *v60; // x0
  const MethodInfo *v61; // x2
  int32_t v62; // w21
  int afterChargeStoneNum; // w26
  SummonConfirmDlgComponent_o *v64; // x24
  struct SummonInfoControl_o *v65; // x9
  struct GachaRqParamData_o *v66; // x8
  struct SummonInfoControl_o *v67; // x10
  struct GachaRqParamData_o *v68; // x9
  SummonControl_o *v69; // x8
  System_String_o *v70; // x27
  int32_t v71; // w25
  int32_t v72; // w28
  int32_t v73; // w29
  SummonControl_o *v74; // x8
  int v75; // w25
  struct TitleInfoControl_o *summonCloseAt; // x28
  struct GachaRqParamData_o *v77; // x8
  int32_t gachaId; // w27
  int32_t haveStone; // w23
  struct GachaRqParamData_o *v80; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v82; // x24
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x3
  System_Int32_array *ScriptIntArray; // x24
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x2
  struct GachaRqParamData_o *v88; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v90; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v92; // x21
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  struct SummonInfoControl_o *summonInfoCtr; // x9
  SummonControl_o *v95; // x8
  int32_t payGachaPrice; // w25
  int32_t v97; // w26
  int32_t v98; // w27
  int32_t v99; // w28
  SummonControl_o *v100; // x8
  int32_t v101; // w24
  int v102; // w29
  struct GachaRqParamData_o *v103; // x8
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v105; // x8
  System_String_o *title; // [xsp+70h] [xbp-90h]
  int32_t v107; // [xsp+7Ch] [xbp-84h]
  int32_t v108; // [xsp+80h] [xbp-80h]
  System_String_o *m_CancellationTokenSource; // [xsp+80h] [xbp-80h]
  _BOOL4 isAppendSummon; // [xsp+8Ch] [xbp-74h]
  int32_t v111; // [xsp+8Ch] [xbp-74h]
  int32_t v112; // [xsp+90h] [xbp-70h]
  int32_t v113; // [xsp+94h] [xbp-6Ch]
  int32_t v114; // [xsp+94h] [xbp-6Ch]
  bool HasFlag; // [xsp+98h] [xbp-68h]
  SummonConfirmDlgComponent_CallbackFunc_o *v116; // [xsp+98h] [xbp-68h]

  v4 = this;
  if ( (byte_4B6328E & 1) == 0 )
  {
    sub_1BE4ACC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GachaMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&Method_SummonControl_ConfirmMessageOpen__, v14);
    sub_1BE4ACC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15);
    sub_1BE4ACC(&Method_SummonControl_confirmResult__, v16);
    this = (SummonControl_o *)sub_1BE4ACC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    byte_4B6328E = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_112;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_112;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v20 = v4->fields.gachaParamData;
  if ( !v20 )
    goto LABEL_112;
  if ( !this )
    goto LABEL_112;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v20->fields.gachaId,
                         0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_112;
  v22 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_112;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v22[24], v22[46], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v4->fields.needStone;
      haveFreeStone = v4->fields.haveFreeStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v26 = haveFreeStone - needStone;
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
        haveChargeStone += v26;
      }
      haveStone = v4->fields.haveStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v80 = v4->fields.gachaParamData;
      if ( !v80 || !this )
        goto LABEL_112;
      v114 = haveStone;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v80->fields.gachaId, 0LL);
      v82 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v83);
      if ( GachaDetailEntity )
      {
        v116 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v116,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v84);
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
            v116 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v116,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v86);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v87);
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
        v116 = v82;
      }
      v88 = v4->fields.gachaParamData;
      if ( !v88 )
        goto LABEL_112;
      gachaTime = v88->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_97;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___);
      v90 = v4->fields.gachaParamData;
      if ( !v90 || !this )
        goto LABEL_112;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v90->fields.gachaId,
                 (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity && (v92 = Entity, LODWORD(Entity[4].monitor)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_112;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_112;
        if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v92[4].monitor, 0LL) == 9 )
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
                                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( this )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v95 = this;
            this = (SummonControl_o *)v4->fields.vaildGachaList;
            v111 = haveFreeStone;
            if ( this )
            {
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              v97 = v4->fields.haveStone;
              v98 = v4->fields.haveFreeStone;
              v99 = v4->fields.haveChargeStone;
              m_CancellationTokenSource = (System_String_o *)v95->fields.m_CancellationTokenSource;
              this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v4->fields.currentIdx,
                                          (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
              if ( this )
              {
                v100 = this;
                this = (SummonControl_o *)v4->fields.vaildGachaList;
                if ( this )
                {
                  v101 = haveChargeStone;
                  v102 = BYTE1(v100->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
                  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v4->fields.currentIdx,
                                              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
                  if ( this )
                  {
                    v103 = v4->fields.gachaParamData;
                    if ( v103 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          m_CancellationTokenSource,
                          1,
                          payGachaPrice,
                          gachaTime,
                          v97,
                          v98,
                          v99,
                          v114 - needStone,
                          v111,
                          v101,
                          v116,
                          0,
                          v102 != 0,
                          (int64_t)this->fields.titleInfo,
                          0,
                          0LL,
                          0LL,
                          ListGachaExtraGift,
                          v103->fields.shopIdIdx,
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
      goto LABEL_112;
    case 3:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v27 = v4->fields.summonInfoCtr;
      if ( !v27 )
        goto LABEL_112;
      v4->fields.isDailyGacha = v27->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v22[62], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v28) )
        SummonControl__friendPointSummonConfirm(v4, v28);
      return;
    case 5:
      v29 = v4->fields.summonInfoCtr;
      if ( !v29 )
        goto LABEL_112;
      ticketNum = v29->fields.ticketNum;
      v31 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v31 )
        goto LABEL_112;
      v4->fields.afterTicketNum = ticketNum - v31->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v32 = v4->fields.gachaParamData;
      if ( !v32 || !this )
        goto LABEL_112;
      v33 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v32->fields.gachaId, 0LL);
      v34 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v34,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v35);
      if ( v33 )
      {
        v36 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v36,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v37);
        v38 = GachaDetailEntity__GetScriptIntArray(v33, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v33, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v38 )
        {
          if ( (_DWORD)this == 1 )
          {
            v39 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v39,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v40);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v38, v41);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_82;
            }
          }
        }
      }
      v42 = v4->fields.gachaParamData;
      if ( !v42 )
        goto LABEL_112;
      v43 = v42->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaMaster___);
      v44 = v4->fields.gachaParamData;
      if ( !v44 || !this )
        goto LABEL_112;
      v45 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v44->fields.gachaId,
              (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v45 )
        goto LABEL_38;
      v46 = v45;
      if ( !LODWORD(v45[4].monitor) )
        goto LABEL_38;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_112;
      if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v46[4].monitor, 0LL) == 9 )
        ++v43;
LABEL_38:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      v47 = v4->fields.confirmDlgInfo;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this || !v47 )
        goto LABEL_112;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v47,
        (System_String_o *)this->fields.m_CancellationTokenSource,
        v43,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v34,
        0LL);
      return;
    case 7:
      v48 = v4->fields.haveStone;
      v49 = v4->fields.needStone;
      v50 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v51 = v4->fields.gachaParamData;
      if ( !v51 || !this )
        goto LABEL_112;
      v52 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v51->fields.gachaId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaMaster___);
      v53 = v4->fields.gachaParamData;
      if ( !v53 )
        goto LABEL_112;
      if ( !this )
        goto LABEL_112;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v53->fields.gachaId,
                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_112;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v55);
      if ( v52 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v56);
        v57 = GachaDetailEntity__GetScriptIntArray(v52, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v52, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v57 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BE4D18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v59);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v60, v57, v61) )
              goto LABEL_82;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_112;
      v62 = v48 - v49;
      afterChargeStoneNum = (v50 - v49) & ~((v50 - v49) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v64 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v65 = v4->fields.summonInfoCtr;
        if ( v65 )
        {
          v66 = v4->fields.gachaParamData;
          if ( v66 )
          {
            if ( v64 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v4->fields.confirmDlgInfo,
                (int32_t)this,
                v65->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v62,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                ListGachaExtraGift,
                v66->fields.shopIdIdx,
                0LL);
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
                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_112;
      v67 = v4->fields.summonInfoCtr;
      if ( !v67 )
        goto LABEL_112;
      v68 = v4->fields.gachaParamData;
      if ( !v68 )
        goto LABEL_112;
      v69 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      v70 = (System_String_o *)v69->fields.m_CancellationTokenSource;
      v71 = v67->fields.payGachaPrice;
      v72 = v68->fields.gachaTime;
      v112 = v4->fields.haveChargeStone;
      v113 = v4->fields.haveStone;
      v73 = v4->fields.haveFreeStone;
      isAppendSummon = v68->fields.isAppendSummon;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_112;
      v74 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_112;
      v107 = v72;
      v108 = v71;
      v75 = BYTE1(v74->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_112;
      summonCloseAt = this->fields.titleInfo;
      title = v70;
      if ( HasFlag )
      {
        v77 = v4->fields.gachaParamData;
        if ( !v77 )
          goto LABEL_112;
        gachaId = v77->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1BE4D18(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v105 = v4->fields.gachaParamData;
      if ( !v105 || !v64 )
LABEL_112:
        sub_1BE4D28(this, beforeDetailFlag);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v64,
        title,
        7,
        v108,
        v107,
        v113,
        v73,
        v112,
        v62,
        v73,
        afterChargeStoneNum,
        callback,
        isAppendSummon,
        v75 != 0,
        (int64_t)summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        ListGachaExtraGift,
        v105->fields.shopIdIdx,
        0LL);
      return;
    default:
      return;
  }
}


void __fastcall SummonControl__showHelpImg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v10; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  int32_t monitor; // w22
  _QWORD *v18; // x8
  _DWORD *v19; // x8
  int32_t v20; // w22
  int32_t klass; // w23
  int64_t klass_low; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0
  int32_t v34; // w22

  if ( (byte_4B63267 & 1) == 0 )
  {
    sub_1BE4ACC(&CondType_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v7);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v8);
    byte_4B63267 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v10 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v10, 0LL);
    if ( EventTutorialEntity )
    {
      v12 = (System_Collections_Generic_List_object__o *)EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v12->fields._size >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v12,
                     v14,
                     (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v12,
                       v14,
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
              if ( !Item )
                break;
              monitor = (int32_t)Item[1].monitor;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              if ( !TutorialFlag__GetGachaFlg(monitor, 0LL) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v14,
                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v14,
                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                v18 = Item[3].monitor;
                if ( !v18 )
                  break;
                if ( v18[3] )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v12,
                           v14,
                           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v19 = Item[3].monitor;
                  if ( !v19 )
                    break;
                  if ( !v19[6] )
                    sub_1BE4D30(Item, v16);
                  v20 = v19[8];
                }
                else
                {
LABEL_23:
                  v20 = 0;
                }
                Item = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v14,
                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v14,
                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                if ( CondType__IsOpen(klass, v20, klass_low, 0, 0LL, 0LL) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v12,
                           v14,
                           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v13 )
                    break;
                  items = v13->fields._items;
                  v30 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v13->fields._version;
                  if ( !items )
                    break;
                  size = v13->fields._size;
                  v32 = (int64_t)Item;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v13,
                      Item,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v33 = &items->obj.klass + size;
                    v13->fields._size = size + 1;
                    v33[4] = (Il2CppClass *)v32;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v12,
                           v14,
                           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v34 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                  TutorialFlag__SetGachaFlg(v34, 0LL);
                }
              }
            }
            if ( ++v14 >= v12->fields._size )
              goto LABEL_39;
          }
          sub_1BE4D28(Item, v16);
        }
LABEL_39:
        EventTutorialMaster__TutorialChainWithoutCheckStart(
          (System_Collections_Generic_List_EventTutorialEntity__o *)v13,
          0LL,
          0LL);
      }
    }
  }
}


void __fastcall SummonControl__showServantDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *_38593888; // x0
  const MethodInfo *v13; // x1
  CommonUI_o *v14; // x20
  SummonControl___c_c *v15; // x8
  System_Action_o *_9__251_0; // x21
  Il2CppObject *v17; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v27; // x8
  struct GachaInfos_array *v28; // x8
  __int64 v29; // x9
  GachaInfos_o *v30; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v33; // x22
  struct GachaInfos_array *v34; // x8
  __int64 v35; // x9
  GachaInfos_o *v36; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v38; // x20
  ServantStatusDialog_EndDelegate_o *v39; // x22

  if ( (byte_4B632A7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_SummonControl_DialogCallBack__, v8);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v9);
    sub_1BE4ACC(&Method_SummonControl___c__showServantDialog_b__251_0__, v10);
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v11);
    byte_4B632A7 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38593888 = (Il2CppObject *)TutorialFlag__Get_38593888(107, 0LL);
  if ( ((unsigned __int8)_38593888 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _38593888 = (Il2CppObject *)TutorialFlag__Get_38593888(108, 0LL);
    if ( ((unsigned __int8)_38593888 & 1) == 0 )
    {
      _38593888 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v13);
      if ( ((unsigned __int8)_38593888 & 1) != 0 )
      {
        _38593888 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (CommonUI_o *)_38593888;
        v15 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v15 = SummonControl___c_TypeInfo;
        }
        _9__251_0 = v15->static_fields->__9__251_0;
        if ( !_9__251_0 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = SummonControl___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v15->static_fields->__9;
          _9__251_0 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(_9__251_0, v17, Method_SummonControl___c__showServantDialog_b__251_0__, 0LL);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__251_0 = _9__251_0;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__251_0,
            (int64_t)_9__251_0,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        if ( !v14 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_30899616(v14, 2, 108, _9__251_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
LABEL_35:
    sub_1BE4D30(_38593888, v13);
  v27 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v27 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v27->fields.type, 0LL) )
  {
    _38593888 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_38593888 )
      goto LABEL_34;
    _38593888 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_38593888,
                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v28 = this->fields.gachaResInfoList;
    if ( !v28 )
      goto LABEL_34;
    v29 = this->fields.getSvtIdx;
    if ( (unsigned int)v29 < v28->max_length )
    {
      v30 = v28->m_Items[v29];
      if ( v30 )
      {
        if ( _38593888 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_38593888,
                     v30->fields.userSvtId,
                     (const MethodInfo_31FD970 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v33, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_30886368(
              (CommonUI_o *)Instance,
              0,
              (UserCommandCodeEntity_o *)Entity,
              v33,
              0LL,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      sub_1BE4D28(_38593888, v13);
    }
    goto LABEL_35;
  }
  _38593888 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = this->fields.gachaResInfoList;
  if ( !v34 )
    goto LABEL_34;
  v35 = this->fields.getSvtIdx;
  if ( (unsigned int)v35 >= v34->max_length )
    goto LABEL_35;
  v36 = v34->m_Items[v35];
  if ( !v36 )
    goto LABEL_34;
  userSvtId = v36->fields.userSvtId;
  v38 = (CommonUI_o *)_38593888;
  v39 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v39, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v38 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_30883044(v38, 6, userSvtId, v39, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B6327F & 1) == 0 )
  {
    sub_1BE4ACC(&StonePurchaseMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BE4ACC(&Method_SummonControl_endPurchaseStone__, v4);
    byte_4B6327F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BE4D18(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v6, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v7, v8);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B632A0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl__showSummonEffect_b__239_0__, v5);
    byte_4B632A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__239_0__, 0LL);
  if ( !v8 )
    sub_1BE4D28(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4B632AA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AvalonSceneManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl__showSummonResultInfo_b__255_0__, v5);
    byte_4B632AA = 1;
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
    TitleInfoControl__setBackBtnSprite_38070848(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v10 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
      v12 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__255_0__, 0LL);
      if ( !Instance )
        goto LABEL_23;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v12, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v7);
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
    sub_1BE4D28(titleInfo, method);
  SummonResultComponent__SetActive((SummonResultComponent_o *)titleInfo, 1, 0LL);
}


void __fastcall SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v8; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B63278 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl_endPurchaseSvtEqFrame__, v5);
    sub_1BE4ACC(&Method_SummonControl_resetStoneInfo__, v6);
    byte_4B63278 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1BE4D18(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v10, v11);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v8, v9, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v8; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B63276 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BE4ACC(&Method_SummonControl_endPurchaseSvtFrame__, v5);
    sub_1BE4ACC(&Method_SummonControl_resetStoneInfo__, v6);
    byte_4B63276 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1BE4D18(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v10, v11);
  CommonUI__OpenServantFramePurchaseMenu((CommonUI_o *)Instance, v8, v9, 0LL);
}


void __fastcall SummonControl__showSvtTalk(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v20; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  DataManager_o *v24; // x24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v26; // x22
  int32_t v27; // w24
  ServantVoiceEntity_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *summonScriptId; // x23
  Il2CppObject *v31; // x24
  System_Action_o *v32; // x25
  ServantAssetArgs_o *v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v41; // x23
  System_Action_o *v42; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B632A4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&ServantAssetArgs_TypeInfo, v9);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_1BE4ACC(&Method_SummonControl__showSvtTalk_b__246_0__, v13);
    sub_1BE4ACC(&Method_SummonControl_close__, v14);
    sub_1BE4ACC(&StringLiteral_3595/*"CLICK_OK"*/, v15);
    byte_4B632A4 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_40;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1BE4D30(Instance, v17);
  v20 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v20 )
    goto LABEL_40;
  userSvtId = v20->fields.userSvtId;
  objectId = v20->fields.objectId;
  limitCount = v20->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v24 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v24,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
      || SvtType__IsCommandCode(v20->fields.type, 0LL) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3595/*"CLICK_OK"*/, 0LL);
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
    v26 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v24,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_40;
    v26 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_31FD970 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_object )
LABEL_40:
    sub_1BE4D28(Instance, v17);
  v27 = (int)Instance;
  v28 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v28 && (v29 = ServantVoiceEntity__GetSummonScriptId(v28, v27, 0LL)) != 0LL )
  {
    summonScriptId = v29;
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v32 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__246_0__, 0LL);
    if ( !v31 )
      goto LABEL_40;
    ScriptManager__PlayGacha_42402596(
      (ScriptManager_o *)v31,
      (UserServantEntity_o *)v26,
      objectId,
      limitCount,
      0,
      1,
      v32,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v33 = (ServantAssetArgs_o *)sub_1BE4D18(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_44351668(v33, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v33;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.battleAssetArgs,
        (int64_t)v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v42 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v41 )
      goto LABEL_40;
    ScriptManager__PlayGacha_42402596(
      (ScriptManager_o *)v41,
      (UserServantEntity_o *)v26,
      objectId,
      limitCount,
      0,
      1,
      v42,
      0,
      0,
      0LL,
      0LL);
  }
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__173___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__173__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *v8; // x19
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Object_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v8 = this;
  if ( (byte_4B632E7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B632E7 = 1;
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
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL)) == 0LL)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0LL),
              !summonMBannerCenterChild) )
        {
LABEL_22:
          sub_1BE4D28(this, method);
        }
        UICenterOnChild__CenterOn_47511680(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v8->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v8->fields._spring_5__2,
      (int64_t)Component_object,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = (UnityEngine_Object_o *)v8->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v20, 0LL, 0LL) )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(p__2__current, 0LL, v21, v22, v23, v24, v25, v26);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._spring_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_22;
    goto LABEL_9;
  }
  return 0;
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__173__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__173__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__173__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__173__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__173_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__248___ctor(
        SummonControl__WaitBattleChrLoad_d__248_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__248__MoveNext(
        SummonControl__WaitBattleChrLoad_d__248_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PlayMakerFSM_o *fsm; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B632E8 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_3595/*"CLICK_OK"*/, v4);
    byte_4B632E8 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields._wait_5__2 = v7;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._wait_5__2, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)wait_5__2, v16, v17, v18, v19, v20, v21);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.battleAssetArgs, 0LL, v26, v27, v28, v29, v30, v31);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1BE4D28(fsm, v15);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3595/*"CLICK_OK"*/, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__248__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__248_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__248__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__248_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_SummonControl__WaitBattleChrLoad_d__248_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__248__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__248_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__248__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__248_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B632E1 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonControl___c_TypeInfo, v1);
    byte_4B632E1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SummonControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SummonControl___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___BonusSelectServantSelectDialog_b__299_1(
        SummonControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B632E3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B632E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___exeFormation_b__149_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0LL);
}


void __fastcall SummonControl___c___openAfterSummonInfo_b__148_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


int32_t __fastcall SummonControl___c___openSvtEqInfo_b__150_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__256_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__215_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B632E2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B632E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___showServantDialog_b__251_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__239_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__255_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c__DisplayClass150_0___ctor(
        SummonControl___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass150_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Request_object; // x0
  __int64 v9; // x1
  int32_t v10; // w20
  int32_t v11; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_4B632E4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v3);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_3561/*"CLEAR_TUTORIAL"*/, v7);
    byte_4B632E4 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_21;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0LL);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_21;
  v10 = 0;
  while ( v10 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v10,
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Request_object )
      goto LABEL_21;
    if ( *((_DWORD *)Request_object + 6) != 1 )
    {
      Request_object = this->fields.tutoList;
      if ( !Request_object )
        goto LABEL_21;
      Request_object = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Request_object,
                         v10,
                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_21;
      v11 = *((_DWORD *)Request_object + 6);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetGachaFlg(v11, 0LL);
    }
    Request_object = this->fields.tutoList;
    ++v10;
    if ( !Request_object )
      goto LABEL_21;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0LL )
LABEL_21:
    sub_1BE4D28(Request_object, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3561/*"CLEAR_TUTORIAL"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass267_0___ctor(
        SummonControl___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass267_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass267_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4B632E5 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass267_0_o *)sub_1BE4ACC(&StringLiteral_5876/*"EXECUTE"*/, method);
    byte_4B632E5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass267_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1BE4D28(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5876/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass268_0___ctor(
        SummonControl___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass268_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass268_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4B632E6 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass268_0_o *)sub_1BE4ACC(&StringLiteral_5876/*"EXECUTE"*/, method);
    byte_4B632E6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass268_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1BE4D28(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5876/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass286_0___ctor(
        SummonControl___c__DisplayClass286_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonControl___c__DisplayClass286_0___OnClickSummonListBtn_b__1(
        SummonControl___c__DisplayClass286_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  struct GachaEntity_o *gachaInfo; // x8

  if ( !x || (gachaInfo = this->fields.gachaInfo) == 0LL )
    sub_1BE4D28(this, x);
  return x->fields.id == gachaInfo->fields.id;
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}