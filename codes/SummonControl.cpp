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
  __int64 v9; // x2
  struct SummonControl_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B1296D & 1) == 0 )
  {
    sub_1BCA7E0(&SummonControl_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3347/*"BonusSelectSummonSaveKey"*/, v8, v9);
    byte_4B1296D = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v11 = StringLiteral_3347/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3347/*"BonusSelectSummonSaveKey"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v11, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x1
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_int__o *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_object__o *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B1296C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaSubEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_19897/*"gachaIds"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6963/*"FrequencyType"*/, v21, v22);
    byte_4B1296C = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD38C0;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD3C70;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BD3A00;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v23 = StringLiteral_19897/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19897/*"gachaIds"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.DETAIL_SCRIPT_IDS, v23, v2, v3, v4, v5, v6, v7);
  v24 = StringLiteral_6963/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6963/*"FrequencyType"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.DETAIL_SCRIPT_TYPE, v24, v25, v26, v27, v28, v29, v30);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.vaildGachaList, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v41,
                                                    v42,
                                                    v43);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v54 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaSubEntity__TypeInfo,
                                                       v51,
                                                       v52,
                                                       v53);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v54;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.gachaSubEntityList,
    (int64_t)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x21
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_String_o *name; // x1
  __int64 v29; // x1
  int8x16_t v30; // q0
  System_String_o *WebViewAddress_39282648; // x0
  System_String_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t gachaGroupId; // w8
  int32_t pickupId; // w8
  int64_t v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x22
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v58; // x8
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8

  if ( (byte_4B128FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaSubMaster___, data, adjustData);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaSubEntity__Add__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&VaildGachaInfo_TypeInfo, v17, v18);
    byte_4B128FB = 1;
  }
  v19 = sub_1BCAA2C(VaildGachaInfo_TypeInfo, data, adjustData, method);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v19, 0LL);
  if ( !data || !v19 )
    goto LABEL_25;
  *(_DWORD *)(v19 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v19 + 24) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)name, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v19 + 32) = data->fields.beforeGachaId;
  v30 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCuLL));
  *(int8x16_t *)(v19 + 36) = vextq_s8(v30, v30, 0xCuLL);
  *(_DWORD *)(v19 + 52) = data->fields.type;
  *(_DWORD *)(v19 + 60) = data->fields.ticketItemId;
  *(_BYTE *)(v19 + 64) = 1;
  *(_BYTE *)(v19 + 84) = data->fields.freeDrawFlag > 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  WebViewAddress_39282648 = NetworkManager__getWebViewAddress_39282648(1, 0LL);
  v32 = System_String__Concat_62401220(WebViewAddress_39282648, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v19 + 88) = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 88), (int64_t)v32, v33, v34, v35, v36, v37, v38);
  gachaGroupId = data->fields.gachaGroupId;
  *(_DWORD *)(v19 + 96) = gachaGroupId;
  *(_BYTE *)(v19 + 100) = gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v19 + 80) = 0;
  *(_DWORD *)(v19 + 68) = 0;
  *(_BYTE *)(v19 + 101) = pickupId > 0;
  v41 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v19 + 72) = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 72), v41, v42, v43, v44, v45, v46, v47);
  *(_OWORD *)(v19 + 120) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v19 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v54 = (int64_t)Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_25;
      v55 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v56 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v55 )
        goto LABEL_25;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v55 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v54,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = v55 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v58 + 32) = v54;
        sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 32), v54, v48, v49, v50, v51, v52, v53);
      }
      *(_DWORD *)(v19 + 80) = *(_DWORD *)(v54 + 20);
      *(_DWORD *)(v19 + 40) = *(_DWORD *)(v54 + 28);
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_25;
    *(_DWORD *)(v19 + 40) = targetEntity->fields.imageId;
    *(_DWORD *)(v19 + 68) = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_QWORD *)(v19 + 72) = adjustIds;
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 72), (int64_t)adjustIds, v48, v49, v50, v51, v52, v53);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v61 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v62 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v61) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v21);
  }
  v63 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v19,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = v61 + 8 * v63;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v63 + 1;
    *(_QWORD *)(v64 + 32) = v19;
    sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), v19, v48, v49, v50, v51, v52, v53);
  }
}


void __fastcall SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Instance; // x0
  __int64 v11; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v13; // x2
  __int64 v14; // x3
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  SummonInfoDlgComponent_CallbackFunc_o *v18; // x23

  if ( (byte_4B12936 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl_beforeConfirmCautionResult__, v8, v9);
    byte_4B12936 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0LL)) == 0LL
    || (v15 = (System_String_o *)*((_QWORD *)Instance + 3),
        v16 = (System_String_o *)*((_QWORD *)Instance + 4),
        infoDlgInfo = this->fields.infoDlgInfo,
        v18 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                         SummonInfoDlgComponent_CallbackFunc_TypeInfo,
                                                         v11,
                                                         v13,
                                                         v14),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v11);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v15, v16, v18, 0LL);
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
  if ( (byte_4B12966 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_3076/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, method, v2);
    byte_4B12966 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3076/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9
  __int64 *v10; // x8

  v3 = this;
  if ( (byte_4B12965 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3489/*"CHECK_STONE"*/, method, v2);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_3076/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, v4, v5);
    byte_4B12965 = 1;
  }
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  v3->fields.haveStone = summonInfoCtr->fields.haveStoneNum;
  v3->fields.haveFreeStone = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  gachaParamData = v3->fields.gachaParamData;
  v3->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  if ( !gachaParamData
    || (gachaResourceNum = gachaParamData->fields.gachaResourceNum,
        this = (SummonControl_o *)v3->fields.fsm,
        v3->fields.needStone = gachaResourceNum,
        !this) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v10 = &StringLiteral_3489/*"CHECK_STONE"*/;
  else
    v10 = &StringLiteral_3076/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectCloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B1296B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, res, method);
    sub_1BCA7E0(&StringLiteral_7059/*"GO_BUY_STONE"*/, v5, v6);
    byte_4B1296B = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v8 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_7059/*"GO_BUY_STONE"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  SummonControl__BonusSelectServantSelectDialog(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectNotHaveChargeStoneDialog(
        SummonControl_o *this,
        bool res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  int32_t needStone; // w21
  int32_t haveChargeStone; // w22
  int32_t haveFreeStone; // w23
  SummonConfirmDlgComponent_CallbackFunc_o *v14; // x24
  const MethodInfo *v15; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B12969 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res, method);
    sub_1BCA7E0(&Method_SummonControl_GoBuyStone__, v6, v7);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v8, v9);
    byte_4B12969 = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    needStone = this->fields.needStone;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v14 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        res,
                                                        method,
                                                        v3);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_GoBuyStone__,
      v15);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        confirmDlgInfo,
        needStone,
        haveChargeStone,
        haveFreeStone,
        v14,
        0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(fsm, res);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall SummonControl__BonusSelectServantSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *v30; // x21

  if ( (byte_4B12967 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BonusSelectSummonAssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl__BonusSelectServantSelectDialog_b__293_0__, v14, v15);
    byte_4B12967 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v23 = (BonusSelectSummonAssetManager_o *)sub_1BCAA2C(BonusSelectSummonAssetManager_TypeInfo, v19, v20, v21);
        BonusSelectSummonAssetManager___ctor(v23, 0LL);
        this->fields.bonusSelectAssetManager = v23;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.bonusSelectAssetManager,
          (int64_t)v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
      System_Action___ctor(
        v30,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__293_0__,
        0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v30, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(Master_object, v17);
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
  if ( (byte_4B1292B & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, result, method);
    byte_4B1292B = 1;
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
      SummonControl__showConfirmDlg_33711296(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_1BCA784(
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
    sub_1BCAA3C(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v8; // x8

  if ( (byte_4B12968 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3077/*"BONUS_SELECT_SERVANT_SELECT"*/, res, method);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v5, v6);
    byte_4B12968 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(confirmDlgInfo, res);
  }
  v8 = (System_String_o **)&StringLiteral_3077/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v8 = (System_String_o **)&StringLiteral_3559/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, *v8, 0LL);
}


bool __fastcall SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  System_Collections_Generic_List_object__o *gachaSubEntityList; // x21
  Il2CppObject *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Predicate_object__o *v33; // x22
  Il2CppObject *v34; // x21
  __int64 v35; // x1
  Il2CppObject *v36; // x22
  System_String_o *v37; // x23
  System_String_o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x25

  if ( (byte_4B1292E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaSubMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaSubEntity__Find__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Predicate_GachaSubEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SummonControl_SummonSceneRefresh__, v16, v17);
    sub_1BCA7E0(&Method_SummonControl__CheckFriendPointSummonUpdate_b__215_0__, v18, v19);
    sub_1BCA7E0(&StringLiteral_14977/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_14976/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v22, v23);
    byte_4B1292E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v29 = (Il2CppObject *)OpenEntity;
  v33 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_GachaSubEntity__TypeInfo, v30, v31, v32);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)this,
    Method_SummonControl__CheckFriendPointSummonUpdate_b__215_0__,
    0LL);
  if ( !gachaSubEntityList )
    goto LABEL_13;
  v34 = System_Collections_Generic_List_object___Find(
          gachaSubEntityList,
          (System_Predicate_T__o *)v33,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v29 != v34 )
  {
    v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_14977/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_14976/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
    v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
    if ( v36 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v36, v37, v38, v42, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return v29 != v34;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v25);
  }
  return v29 != v34;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1BCAA3C(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1BCAA44(this, ids);
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
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct GachaInfos_array *gachaResInfoList; // x9
  int v7; // w8
  __int64 *v8; // x8

  v3 = this;
  if ( (byte_4B1294D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9371/*"NEXT_SVT"*/, method, v2);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_6504/*"FINAL_SVT"*/, v4, v5);
    byte_4B1294D = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  v7 = v3->fields.getSvtIdx + 1;
  v3->fields.getSvtIdx = v7;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v3->fields.fsm) == 0LL )
    sub_1BCAA3C(this, method);
  if ( v7 >= (signed int)gachaResInfoList->max_length )
    v8 = &StringLiteral_6504/*"FINAL_SVT"*/;
  else
    v8 = &StringLiteral_9371/*"NEXT_SVT"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v8, 0LL);
}


bool __fastcall SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v17; // x1
  UserGameEntity_o *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  BalanceConfig_c *v21; // x8
  int v22; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int32_t QpMax; // w9
  struct BalanceConfig_StaticFields *v27; // x10
  int32_t v28; // w23
  int32_t qp; // w21
  struct BalanceConfig_StaticFields *v30; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x22
  SummonLimitWarningDlgComponent_o *v39; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x22
  SummonLimitWarningDlgComponent_o *v45; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x22

  if ( (byte_4B1292F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SummonControl_autoSellSettingChange__, v8, v9);
    sub_1BCA7E0(&Method_SummonControl_limitManaConfirmResult__, v10, v11);
    sub_1BCA7E0(&Method_SummonControl_limitQpConfirmResult__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl_showConfirmDlg__, v14, v15);
    byte_4B1292F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  v18 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v21 = BalanceConfig_TypeInfo;
  v22 = (int)SelfUserGame;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
    v21 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  static_fields = v21->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v17);
      v21 = BalanceConfig_TypeInfo;
      v27 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v27->QpMax;
      FriendPointSummonQpWarning = v27->FriendPointSummonQpWarning;
    }
    v28 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v22 )
      return 0;
  }
  else
  {
    v28 = QpMax + gachaParamData->fields.gachaResourceNum / -200 * FriendPointSummonQpWarning;
    if ( !v22 )
      return 0;
  }
  qp = v18->fields.qp;
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21, v17);
    v21 = BalanceConfig_TypeInfo;
  }
  v30 = v21->static_fields;
  if ( qp >= v30->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v34 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v17,
                                                             v19,
                                                             v20);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v34,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v34, v38, 0LL);
  }
  else
  {
    if ( v18->fields.qp < v28 )
    {
      mana = v18->fields.mana;
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, v17);
        v30 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v30->UserItemMax )
        return 0;
      v45 = this->fields.limitWarningDlgInfo;
      v46 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                               SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                               v17,
                                                               v19,
                                                               v20);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
      System_Action___ctor(v50, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v45 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v45, v46, v50, 0LL);
        return 1;
      }
LABEL_28:
      sub_1BCAA3C(SelfUserGame, v17);
    }
    v39 = this->fields.limitWarningDlgInfo;
    v40 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v17,
                                                             v19,
                                                             v20);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v40,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v39 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v39, v40, v44, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v7; // x8

  if ( (byte_4B12964 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11250/*"RETURN_MAIN"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_11252/*"RETURN_RESULT"*/, v4, v5);
    byte_4B12964 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isResult )
    v7 = (System_String_o **)&StringLiteral_11252/*"RETURN_RESULT"*/;
  else
    v7 = (System_String_o **)&StringLiteral_11250/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, *v7, 0LL);
}


void __fastcall SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  SummonControl_c *v27; // x0
  Il2CppObject *String_70112520; // x19
  __int64 v29; // x1
  __int64 v30; // x1
  System_Object_array *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1

  if ( (byte_4B1292A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_SelectBonusData___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&string_TypeInfo, v23, v24);
    sub_1BCA7E0(&SummonControl_TypeInfo, v25, v26);
    byte_4B1292A = 1;
  }
  v27 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, method);
    v27 = SummonControl_TypeInfo;
  }
  String_70112520 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                      v27->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_70112520, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
    DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v30);
    v31 = JsonManager__DeserializeArray_object_(
            String_70112520,
            (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                         v32,
                                                         v33,
                                                         v34);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v31 )
      sub_1BCAA3C(v36, v37);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B128F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData, *(_QWORD *)&gachaId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B128F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B12926 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B12926 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  if ( isStoneFragmentsBulkDialog )
    CommonUI__CloseFragmentsBulkExchangeDialog((CommonUI_o *)Instance, 0LL);
  else
    CommonUI__CloseFragmentsExchangeDialog((CommonUI_o *)Instance, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12904 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_TypeInfo, method, v2);
    byte_4B12904 = 1;
  }
  v5 = sub_1BCAA2C(SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  __int64 v36; // x1
  struct GachaRqParamData_o *v37; // x8
  Il2CppObject *Entity; // x20
  struct GachaRqParamData_o *v39; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  struct GachaRqParamData_o *v41; // x8
  __int64 v42; // x2
  __int64 v43; // x3
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int klass; // w27
  int64_t v48; // x20
  char v49; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v50; // x24
  __int64 v51; // x2
  __int64 v52; // x3
  struct GachaRqParamData_o *v53; // x8
  int32_t v54; // w25
  __int64 v55; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v57; // x2
  __int64 v58; // x3
  struct GachaRqParamData_o *v59; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v62; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v66; // x23
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v70; // x24
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v71; // x26

  if ( (byte_4B12933 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaDetailMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SummonControl_BonusSelectSummonConfirmResult__, v17, v18);
    sub_1BCA7E0(&Method_SummonControl_ConfirmMessageOpen__, v19, v20);
    sub_1BCA7E0(&Method_SummonControl_SetDispBtn__, v21, v22);
    sub_1BCA7E0(&Method_SummonControl_TryGetSelectBonusDataInfo__, v23, v24);
    sub_1BCA7E0(&Method_SummonControl_confirmCautionResult__, v25, v26);
    sub_1BCA7E0(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v27, v28);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v31, v32);
    byte_4B12933 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v34 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v34 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_ConfirmMessageOpen__);
  v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v35, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v59 = this->fields.gachaParamData;
              if ( v59 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v59->fields.gachaId;
                v62 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          result,
                                                                          v57,
                                                                          v58);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v62,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v66 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v63,
                                                                          v64,
                                                                          v65);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v66,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v70 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v67,
                                                                                  v68,
                                                                                  v69);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v70,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v62, v66, v70, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  v37 = this->fields.gachaParamData;
  if ( !v37 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v37->fields.gachaId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)confirmDlgInfo,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v39 = this->fields.gachaParamData;
  if ( !v39 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        (GachaDetailMaster_o *)confirmDlgInfo,
                        v39->fields.gachaId,
                        0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  v41 = this->fields.gachaParamData;
  if ( !v41 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v41->fields.gachaId,
                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL);
  if ( !GachaDetailEntity || !Entity )
    goto LABEL_37;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  title = GachaDetailEntity->fields.title;
  message = GachaDetailEntity->fields.message;
  klass = (int)Entity[9].klass;
  v48 = (int64_t)Entity[7].klass;
  v49 = (char)confirmDlgInfo;
  v50 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      SummonCautionDlgComponent_CallbackFunc_TypeInfo,
                                                      result,
                                                      v42,
                                                      v43);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v50,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    0LL);
  if ( (v49 & 1) != 0 )
  {
    v53 = this->fields.gachaParamData;
    if ( !v53 )
      goto LABEL_37;
    v54 = v53->fields.gachaId;
  }
  else
  {
    v54 = 0;
  }
  v71 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                              BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                              result,
                                                              v51,
                                                              v52);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v71,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_37:
    sub_1BCAA3C(confirmDlgInfo, result);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    klass > 0,
    v48,
    v50,
    v54,
    v71,
    this->fields.bonusSelectAssetManager,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B12947 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__DialogCallBack_b__249_0__, v8, v9);
    byte_4B12947 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__249_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B12948 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    byte_4B12948 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3608/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B12925 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B12925 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t Item; // x0
  int32_t v24; // w21
  System_Collections_Generic_List_object__o *v25; // x8
  int64_t v26; // x23
  int32_t v27; // w24
  int64_t v28; // x22
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B128FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v13, v14);
    byte_4B128FC = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                       baseGachaList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (int64_t)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1BCAA3C(Item, v16);
  v24 = 0;
  while ( v24 < *(_DWORD *)(Item + 24) )
  {
    Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      v24,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v25 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v26 = Item;
      v27 = 0;
      v28 = Item;
      while ( v27 < v25->fields._size )
      {
        Item = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v25,
                          v27,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v26 && Item )
        {
          if ( *(_DWORD *)(v26 + 16) != *(_DWORD *)(Item + 16) && *(_DWORD *)(v26 + 48) == *(_DWORD *)(Item + 48) )
          {
            if ( !v28 )
              goto LABEL_25;
            if ( *(_DWORD *)(v28 + 36) < *(_DWORD *)(Item + 36) )
              v28 = Item;
          }
          v25 = (System_Collections_Generic_List_object__o *)*baseGachaList;
          ++v27;
          if ( *baseGachaList )
            continue;
        }
        goto LABEL_25;
      }
      if ( v15 )
      {
        Item = System_Collections_Generic_List_object___Contains(
                 v15,
                 (Il2CppObject *)v28,
                 (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( (Item & 1) == 0 )
        {
          items = v15->fields._items;
          v30 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v28,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v28;
            sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v28, v17, v18, v19, v20, v21, v22);
          }
        }
        Item = (int64_t)*baseGachaList;
        ++v24;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)baseGachaList, (int64_t)v15, v17, v18, v19, v20, v21, v22);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B128E8 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B128E8 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  return FSUtility__GetOffsetX(54.0, 0, 0LL);
}


float __fastcall SummonControl__FSMenuOffsetY(SummonControl_o *this, const MethodInfo *method)
{
  return 33.0;
}


int32_t __fastcall SummonControl__GetGachaIdFromSelectedBannerEntity(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_String_array *v13; // x19
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1290D & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1290D = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B1299F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1299F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_4B1299F )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1299F = 1;
  }
  v4 = (System_String_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v4 = (System_String_o *)TerminalPramsManager_TypeInfo;
  }
  v5 = *(_QWORD *)(*(_QWORD *)&v4[7].fields + 48LL);
  if ( !v5 )
    goto LABEL_31;
  v4 = *(System_String_o **)(v5 + 56);
  if ( !v4 )
    goto LABEL_31;
  v13 = System_String__Split(v4, 0x2Fu, 0, 0LL);
  if ( !byte_4B129A0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B129A0 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v14 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !v13 )
    goto LABEL_31;
  if ( (int)v13->max_length < 2 )
    return 0;
  v4 = v13->m_Items[1];
  if ( !v4 || (v4 = (System_String_o *)System_String__Split(v4, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_31:
    sub_1BCAA3C(v4, method);
  klass = v4[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1BCAA44(v4, method);
  System_Int32__TryParse((System_String_o *)v4[1].monitor, &result, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__GoBuyStone(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w25
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v31; // x27

  if ( (byte_4B1296A & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res, method);
    sub_1BCA7E0(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, v5, v6);
    sub_1BCA7E0(&Method_SummonControl_GoBuyStone__, v7, v8);
    sub_1BCA7E0(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9, v10);
    sub_1BCA7E0(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v11, v12);
    byte_4B1296A = 1;
  }
  if ( res )
  {
    v13 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_GoBuyStone__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v19 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v16,
                                                        v17,
                                                        v18);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_BonusSelectCloseShotStoneDlg__,
      v20);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || (gachaId = gachaParamData->fields.gachaId,
          haveStone = this->fields.haveStone,
          haveFreeStone = this->fields.haveFreeStone,
          haveChargeStone = this->fields.haveChargeStone,
          bonusSelectAssetManager = this->fields.bonusSelectAssetManager,
          v31 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                                      BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                                      v22,
                                                                      v23,
                                                                      v24),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v31,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0LL),
          !confirmDlgInfo) )
    {
      sub_1BCAA3C(v21, v22);
    }
    SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
      confirmDlgInfo,
      v19,
      haveStone,
      haveFreeStone,
      haveChargeStone,
      gachaId,
      bonusSelectAssetManager,
      v31,
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

  if ( (byte_4B12940 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId, method);
    byte_4B12940 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  System_String_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4B128F2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6481/*"FAIL_LOAD"*/, data, method);
    sub_1BCA7E0(&StringLiteral_17723/*"btn_sumonhistory"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, v12, v13);
    byte_4B128F2 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6481/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.bannerAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v15);
  SummonControl__setPositionByWarId(this, v16);
  SummonControl__ResetArrowTween(this, v17);
  v18 = (System_String_o *)StringLiteral_17723/*"btn_sumonhistory"*/;
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17723/*"btn_sumonhistory"*/, v19);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, (UnityEngine_GameObject_o *)fsm, v18, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__NotHaveChargeStoneCheckSvtSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectcloseShotStoneDlg(this, 1, v2);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UICenterOnChild_o *centerChild; // x8
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x21
  float x; // w20
  float y; // w24
  UnityEngine_Object_o *v18; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1

  v3 = this;
  if ( (byte_4B12900 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_3458/*"CHANGE_BANNER"*/, v6, v7);
    byte_4B12900 = 1;
  }
  centerChild = v3->fields.centerChild;
  if ( !centerChild )
    goto LABEL_26;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_26;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_26;
  v15 = *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v18 = (UnityEngine_Object_o *)this;
  if ( v3->fields.isDragging )
    goto LABEL_29;
  currentBannerComp = (UnityEngine_Object_o *)v3->fields.currentBannerComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v18, currentBannerComp, 0LL)
    || (struct VaildGachaInfo_o *)v15 != v3->fields.currentGachaInfo
    || LODWORD(x) != v3->fields.currentIdx
    || LODWORD(y) != v3->fields.currentMoveIdx )
  {
LABEL_29:
    if ( v3->fields.isDoneTutorial )
    {
      this = (SummonControl_o *)v3->fields.leftArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v3->fields.rightArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v3->fields.titleInfo;
      if ( !this )
        goto LABEL_26;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
      this = (SummonControl_o *)v3->fields.summonMBannerLeftArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v3->fields.summonMBannerRightArrowBtn;
      if ( !this )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    v3->fields.isDragging = 0;
    v3->fields.currentBannerComp = (struct GachaBannerComponent_o *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.currentBannerComp, (int64_t)v18, v9, v10, v11, v12, v13, v14);
    v3->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.currentGachaInfo, v15, v20, v21, v22, v23, v24, v25);
    *(float *)&v3->fields.currentIdx = x;
    *(float *)&v3->fields.currentMoveIdx = y;
    SummonControl__setSliderIcon(v3, SLODWORD(x), v26);
    this = (SummonControl_o *)v3->fields.summonMBannerLoopCtr;
    if ( this )
    {
      summonMBannerCenterChild = v3->fields.summonMBannerCenterChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v3->fields.currentMoveIdx,
                                    0LL);
        if ( summonMBannerCenterChild )
        {
          UICenterOnChild__CenterOn_47224044(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          this = (SummonControl_o *)v3->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
            SummonControl__UpdateSummonInfoControlLayout(v3, v28);
            SummonControl__showHelpImg(v3, v29);
            this = (SummonControl_o *)v3->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3458/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x20
  float m_Width; // w23
  float m_Height; // w24
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  bool *p_isNotCenterOnSync; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UICenterOnChild_o *centerChild; // x20

  v3 = this;
  if ( (byte_4B12901 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method, v2);
    this = (SummonControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12901 = 1;
  }
  summonMBannerCenterChild = v3->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_20;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_20;
  v13 = *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v16 = (UnityEngine_Object_o *)this;
  if ( v3->fields.isDragging )
    goto LABEL_14;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v3->fields.currentSummonMBannerComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v16, currentSummonMBannerComponent, 0LL)
    || (struct VaildGachaInfo_o *)v13 != v3->fields.currentGachaInfo
    || LODWORD(m_Width) != v3->fields.currentIdx
    || LODWORD(m_Height) != v3->fields.currentMoveIdx )
  {
LABEL_14:
    v3->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v16;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v3->fields.currentSummonMBannerComponent,
      (int64_t)v16,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v3->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.currentGachaInfo, v13, v19, v20, v21, v22, v23, v24);
    p_isNotCenterOnSync = &v3->fields.isNotCenterOnSync;
    if ( v3->fields.isNotCenterOnSync )
      goto LABEL_19;
    this = (SummonControl_o *)v3->fields.bannerLoopCtr;
    *(float *)&v3->fields.currentIdx = m_Width;
    *(float *)&v3->fields.currentMoveIdx = m_Height;
    if ( this )
    {
      centerChild = v3->fields.centerChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v3->fields.currentMoveIdx,
                                    0LL);
        if ( centerChild )
        {
          UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(this, method);
  }
  p_isNotCenterOnSync = &v3->fields.isNotCenterOnSync;
LABEL_19:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4B1295C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, method, v2);
    byte_4B1295C = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1BCAA3C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v19; // x0
  System_Collections_Generic_List_object__o *EventTutorialEntity; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0

  if ( (byte_4B1295F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SummonControl_OnClickHelp__, v12, v13);
    byte_4B1295F = 1;
  }
  v14 = Method_SummonControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_OnClickHelp__);
  v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_18;
  v19 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Collections_Generic_List_object__o *)EventTutorialMaster__GetEventTutorialEntity(
                                                                       0,
                                                                       34,
                                                                       v19,
                                                                       0LL);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
    goto LABEL_18;
  if ( EventTutorialEntity->fields._size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               EventTutorialEntity,
               v25,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( !LODWORD(Item[3].klass) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 EventTutorialEntity,
                 v25,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !v24 )
          break;
        items = v24->fields._items;
        v33 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v24->fields._version;
        if ( !items )
          break;
        size = v24->fields._size;
        v35 = (int64_t)Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v24,
            Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v24->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v35;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
        }
      }
      if ( ++v25 >= EventTutorialEntity->fields._size )
        goto LABEL_17;
    }
LABEL_18:
    sub_1BCAA3C(Item, v17);
  }
LABEL_17:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v24,
    0LL,
    0LL);
}


void __fastcall SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4B12960 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SummonControl_OnClickHisotry__, v8, v9);
    sub_1BCA7E0(&Method_SummonControl__OnClickHisotry_b__281_0__, v10, v11);
    byte_4B12960 = 1;
  }
  v12 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_OnClickHisotry__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__281_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1BCAA3C(Request_object, v20);
  GachaHistoryRequest__beginRequest((GachaHistoryRequest_o *)Request_object, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20

  if ( (byte_4B12905 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_OnClickMiniBanner__, *(_QWORD *)&moveIdx, method);
    sub_1BCA7E0(&StringLiteral_12845/*"SetBannerCenter"*/, v5, v6);
    byte_4B12905 = 1;
  }
  if ( this->fields.currentMoveIdx != moveIdx )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12845/*"SetBannerCenter"*/,
      0LL);
    v8 = Method_SummonControl_OnClickMiniBanner__;
    if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_OnClickMiniBanner__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    if ( !leftArrowBtn )
      goto LABEL_19;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_19;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    this->fields.isDragging = 1;
    if ( !leftArrowBtn )
      goto LABEL_19;
    centerChild = this->fields.centerChild;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      moveIdx,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      moveIdx,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_19:
      sub_1BCAA3C(leftArrowBtn, *(_QWORD *)&moveIdx);
    }
    UICenterOnChild__CenterOn_47224044(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  PossessionInfoDialog_o *possessionInfoDialog; // x0
  __int64 v7; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4B12961 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_OnClickPossessionInfo__, method, v2);
    byte_4B12961 = 1;
  }
  v4 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_OnClickPossessionInfo__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo
    || (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL
    || (PossessionInfoDialog__Init(possessionInfoDialog, currentGachaInfo->fields.id, 0LL),
        (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL) )
  {
    sub_1BCAA3C(possessionInfoDialog, v7);
  }
  PossessionInfoDialog__Open(possessionInfoDialog, 0LL);
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B12921 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__, method, v2);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v4, v5);
    byte_4B12921 = 1;
  }
  v6 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(confirmDlgInfo, v8);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v10);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B12922 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_OnClickStoneFragmentsInfo__, method, v2);
    byte_4B12922 = 1;
  }
  v4 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v6);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1295E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonControl_reDispSummonBannerList__, v5, v6);
    byte_4B1295E = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_1BCAA3C(v9, v10);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B12928 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk, method);
    byte_4B12928 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4B128FF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12845/*"SetBannerCenter"*/, method, v2);
    byte_4B128FF = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12845/*"SetBannerCenter"*/,
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
    sub_1BCAA3C(summonInfoCtr, v4);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0LL);
  this->fields.isDragging = 1;
}


void __fastcall SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1295D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__OnEndSummonEffect_b__278_0__, v8, v9);
    byte_4B1295D = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__278_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v18; // w22
  Il2CppObject *Instance; // x21
  const MethodInfo *v20; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_int__o *v25; // x24

  if ( (byte_4B12923 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SummonControl_RequestStoneFragmentsShop__, v12, v13);
    byte_4B12923 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v18 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v20),
        v25 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v22, v23, v24),
        System_Action_int____ctor(v25, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0LL),
        !Instance) )
  {
LABEL_11:
    sub_1BCAA3C(Master_object, v15);
  }
  if ( v18 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v25, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OpenStoneFragmentExchangeResultDialog(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v16; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x22
  const MethodInfo *v20; // x1
  ShopEntity_o *v21; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v23; // x1
  ShopEntity_o *v24; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v26; // x1
  ShopEntity_o *v27; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *Instance; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_bool__o *v33; // x24

  if ( (byte_4B12927 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SummonControl_OnCloseResultDialog__, v13, v14);
    byte_4B12927 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buyCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v16);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v21 = SummonControl__get_StoneFragmentsShopEntity(this, v20);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v21,
                                               buyCount,
                                               0LL);
  v24 = SummonControl__get_StoneFragmentsShopEntity(this, v23);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v24,
                                           (ItemEntity_o *)Entity,
                                           buyCount,
                                           0LL);
  v27 = SummonControl__get_StoneFragmentsShopEntity(this, v26);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v27,
                                          (ItemEntity_o *)Entity,
                                          0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v30, v31, v32);
  System_Action_bool____ctor(v33, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1BCAA3C(StoneFragmentsShopEntity, v18);
  CommonUI__OpenItemExchangeResultDialog(
    (CommonUI_o *)Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v33,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__RequestStoneFragmentsShop(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  __int64 v13; // x1
  Il2CppObject *Request_object; // x20
  const MethodInfo *v15; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v17; // x1

  if ( (byte_4B12924 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SummonControl_EndRequestStoneFragmentsShop__, v10, v11);
    byte_4B12924 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   *(_QWORD *)&buyCount,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v15);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1BCAA3C(StoneFragmentsShopEntity, v17);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v7; // x22
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B128F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B128F5 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v7 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v8 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v9 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v7, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v9, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v8, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v7; // x8

  if ( (byte_4B1293B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_11196/*"REQUEST_NG_RESULT"*/, v4, v5);
    byte_4B1293B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isResult )
    v7 = (System_String_o **)&StringLiteral_11196/*"REQUEST_NG_RESULT"*/;
  else
    v7 = (System_String_o **)&StringLiteral_11195/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, *v7, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *bannerLoopCtr; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  float v9; // s8
  UICenterOnChild_o *centerChild; // x20
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  float v13; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_4B12902 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12902 = 1;
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
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
      v9 = *(float *)&Component_object[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v9 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
        UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
    v12 = UnityEngine_Component__GetComponent_object_(
            bannerLoopCtr,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v13 = *(float *)&v12[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v13 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
              UICenterOnChild__CenterOn_47224044(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_35:
        sub_1BCAA3C(bannerLoopCtr, method);
      }
    }
    else
    {
      v15 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  char *bgRoot; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  char *v27; // x20
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
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  __int64 v71; // x8
  unsigned __int64 v72; // x23
  bool v73; // w21
  System_String_o *v74; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1293E & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, isDisp, method);
    sub_1BCA7E0(&StringLiteral_17979/*"center_glow"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_23194/*"ring_gard1_3"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23195/*"ring_gard2_1"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_23196/*"ring_gard2_2"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_23193/*"ring_gard1_2"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_23197/*"ring_gard2_3"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_23192/*"ring_gard1_1"*/, v17, v18);
    byte_4B1293E = 1;
  }
  bgRoot = (char *)sub_1BCA888(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_19:
    sub_1BCAA3C(bgRoot, v20);
  v27 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v28 = StringLiteral_23192/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_23192/*"ring_gard1_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(bgRoot + 32), v28, v21, v22, v23, v24, v25, v26);
  if ( *((_DWORD *)v27 + 6) <= 1u )
    goto LABEL_20;
  v35 = StringLiteral_23193/*"ring_gard1_2"*/;
  *((_QWORD *)v27 + 5) = StringLiteral_23193/*"ring_gard1_2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 40), v35, v29, v30, v31, v32, v33, v34);
  if ( *((_DWORD *)v27 + 6) <= 2u )
    goto LABEL_20;
  v42 = StringLiteral_23194/*"ring_gard1_3"*/;
  *((_QWORD *)v27 + 6) = StringLiteral_23194/*"ring_gard1_3"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 48), v42, v36, v37, v38, v39, v40, v41);
  if ( *((_DWORD *)v27 + 6) <= 3u )
    goto LABEL_20;
  v49 = StringLiteral_23195/*"ring_gard2_1"*/;
  *((_QWORD *)v27 + 7) = StringLiteral_23195/*"ring_gard2_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 56), v49, v43, v44, v45, v46, v47, v48);
  if ( *((_DWORD *)v27 + 6) <= 4u
    || (v56 = StringLiteral_23196/*"ring_gard2_2"*/,
        *((_QWORD *)v27 + 8) = StringLiteral_23196/*"ring_gard2_2"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 64), v56, v50, v51, v52, v53, v54, v55),
        *((_DWORD *)v27 + 6) <= 5u)
    || (v63 = StringLiteral_23197/*"ring_gard2_3"*/,
        *((_QWORD *)v27 + 9) = StringLiteral_23197/*"ring_gard2_3"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 72), v63, v57, v58, v59, v60, v61, v62),
        *((_DWORD *)v27 + 6) <= 6u) )
  {
LABEL_20:
    sub_1BCAA44(bgRoot, v20);
  }
  v70 = StringLiteral_17979/*"center_glow"*/;
  *((_QWORD *)v27 + 10) = StringLiteral_17979/*"center_glow"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 80), v70, v64, v65, v66, v67, v68, v69);
  v71 = *((_QWORD *)v27 + 3);
  if ( (int)v71 >= 1 )
  {
    v72 = 0LL;
    v73 = isDisp;
    while ( v72 < (unsigned int)v71 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v74 = *(System_String_o **)&v27[8 * v72 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0LL);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v74, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, v73, 0LL);
      LODWORD(v71) = *((_DWORD *)v27 + 6);
      if ( (__int64)++v72 >= (int)v71 )
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
    sub_1BCAA3C(summonInfoCtr, isDisp);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, v5, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(v5, 0, 0LL);
  SummonControl__setDispSummonInfo(this, v5, v6);
  MainMenuBar__setMenuActive(v5, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__SetGachaTime(SummonControl_o *this, int32_t num, int32_t type, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8
  int v5; // w9

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    sub_1BCAA3C(this, *(_QWORD *)&num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_C0C4DC[type - 1];
  gachaParamData->fields.gachaResourceNum = v5 * num;
}


void __fastcall SummonControl__SetupFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  __int64 v17; // x1
  Il2CppObject *Component_object; // x20
  __int64 v19; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v22; // w21
  __int64 v23; // x1
  MasterMissionComponent_c *v24; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v27; // w1
  int32_t v28; // [xsp+8h] [xbp-28h] BYREF
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B12920 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10, v11);
    sub_1BCA7E0(&MasterMissionComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17683/*"btn_event_3"*/, v14, v15);
    byte_4B12920 = 1;
  }
  v28 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17683/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0LL);
  v22 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v22 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  v29 = v22;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(
    fragmentsExchangeButton,
    this->fields.haveStone + v22 >= this->fields.needStone,
    0LL);
  v24 = MasterMissionComponent_TypeInfo;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v23);
    v24 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v24->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v22 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v29, 0LL);
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
          v27 = 0;
          goto LABEL_27;
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(fragmentsExchangeButton, method);
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24, v23);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v28 = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v28, 0LL);
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
  v27 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, v27, 0LL);
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
    sub_1BCAA3C(this, a);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B12932 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl__SummonSceneRefresh_b__223_0__, v6, v7);
    byte_4B12932 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__223_0__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  SummonControl_c *v17; // x0
  System_String_o *String_70112520; // x21
  __int64 v19; // x1
  System_Object_array *v20; // x0
  SelectBonusData_o *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int max_length; // w8
  __int64 v29; // x9

  if ( (byte_4B12929 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData, *(_QWORD *)&gachaId);
    sub_1BCA7E0(&JsonManager_TypeInfo, v6, v7);
    this = (SummonControl_o *)sub_1BCA7E0(&SummonControl_TypeInfo, v8, v9);
    byte_4B12929 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)selectBonusData, 0LL, v10, v11, v12, v13, v14, v15);
  v17 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, v16);
    v17 = SummonControl_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v17->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_70112520, 0LL) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
  v20 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_70112520,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v20 )
  {
    max_length = v20->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v20) = 0;
      return (char)v20;
    }
    v29 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v29 >= max_length )
        sub_1BCAA44(v20, v21);
      v21 = (SelectBonusData_o *)v20->m_Items[v29];
      if ( !v21 )
        sub_1BCAA3C(v20, 0LL);
      if ( v21->fields.gachaId == gachaId )
        break;
      if ( (int)++v29 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v21;
    sub_1BCA784((PartyOrganizationUtility_o *)selectBonusData, (int64_t)v21, v22, v23, v24, v25, v26, v27);
    LOBYTE(v20) = 1;
  }
  return (char)v20;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  struct SummonInfoControl_o *summonInfoCtr; // x9
  char v6; // w8

  if ( (byte_4B12903 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, method, v2);
    byte_4B12903 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList
    || (vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        vaildGachaList,
                                                                        this->fields.currentIdx,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0LL
    || (vaildGachaList = (System_Collections_Generic_List_object__o *)VaildGachaInfo__HasFlag(
                                                                        (VaildGachaInfo_o *)vaildGachaList,
                                                                        2,
                                                                        0LL),
        (summonInfoCtr = this->fields.summonInfoCtr) == 0LL)
    || (v6 = (char)vaildGachaList,
        (vaildGachaList = (System_Collections_Generic_List_object__o *)summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
    sub_1BCAA3C(vaildGachaList, method);
  }
  if ( (v6 & 1) != 0 )
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)vaildGachaList, 0LL);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)vaildGachaList, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12944 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonControl__WaitBattleChrLoad_d__245_TypeInfo, method, v2);
    byte_4B12944 = 1;
  }
  v5 = sub_1BCAA2C(SummonControl__WaitBattleChrLoad_d__245_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SummonControl___BonusSelectServantSelectDialog_b__293_0(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  __int64 v26; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x2
  __int64 v36; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v48; // x24
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  v3 = this;
  if ( (byte_4B1297D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl_SetDispBtn__, v14, v15);
    sub_1BCA7E0(&Method_SummonControl_TryGetSelectBonusDataInfo__, v16, v17);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__293_1__, v20, v21);
    this = (SummonControl_o *)sub_1BCA7E0(&SummonControl___c_TypeInfo, v22, v23);
    byte_4B1297D = 1;
  }
  bonusSelectAssetManager = v3->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__49903816(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v3->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.bonusSelectSummonConfirmDialog,
    (int64_t)Component_object,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this = (SummonControl_o *)v3->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init(
    (BonusSelectSummonConfirmDialog_o *)this,
    v3->fields.bonusSelectAssetManager,
    0LL);
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v3->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v40 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            method,
                                                            v35,
                                                            v36);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v40, (Il2CppObject *)v3, Method_SummonControl_SetDispBtn__, 0LL);
  v44 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v41,
                                                            v42,
                                                            v43);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v44,
    (Il2CppObject *)v3,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0LL);
  v48 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                                    BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                    v45,
                                                                    v46,
                                                                    v47);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v48,
    (Il2CppObject *)v3,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, method);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  v51 = *(System_Action_o **)&this->fields.confirmDlgInfo->fields.refuseInit;
  if ( !v51 )
  {
    if ( !LODWORD(this->fields.bonusSelectSummonConfirmDialog) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v49, v50);
    System_Action___ctor(v51, klass, Method_SummonControl___c__BonusSelectServantSelectDialog_b__293_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__293_1 = v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__293_1, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1BCAA3C(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v40, v44, v48, v51, 0LL);
}


bool __fastcall SummonControl___CheckFriendPointSummonUpdate_b__215_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0LL )
    sub_1BCAA3C(this, ent);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void __fastcall SummonControl___DialogCallBack_b__249_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  CommonUI_o *v17; // x19

  if ( (byte_4B12978 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl_EndCloseDialogCallBack__, v8, v9);
    byte_4B12978 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)v15;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16);
  if ( !v17 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadein(v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__281_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1BCAA3C(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


void __fastcall SummonControl___OnEndSummonEffect_b__278_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B1297C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5551/*"END_FADE"*/, method, v2);
    byte_4B1297C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5551/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__223_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B12974 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    byte_4B12974 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        SummonControl__quit(this, v8),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__145_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1296F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl__exeFormation_b__145_2__, v6, v7);
    byte_4B1296F = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__145_2__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall SummonControl___exeFormation_b__145_2(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12970 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B12970 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___executeEnhanceTresureDevice_b__266_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PlayMakerFSM_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20

  if ( (byte_4B1297B & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_5550/*"END_EFFECT"*/, v6, v7);
    byte_4B1297B = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v9);
  if ( !v10
    || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5550/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__229_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B12975 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12397/*"START_GACHA"*/, method, v2);
    byte_4B12975 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12397/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__144_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1296E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl__openAfterSummonInfo_b__144_2__, v6, v7);
    byte_4B1296E = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__144_2__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseTutorialNotificationDialogArrow_30791892((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__144_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__261_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v9; // x19

  if ( (byte_4B1297A & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_5569/*"END_SUMMON"*/, v6, v7);
    byte_4B1297A = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_11;
  SummonResultComponent__clearResultList(summonResultInfo, 0LL);
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_11;
  summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)summonResultInfo,
                                                  0LL);
  if ( !summonResultInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  summonResultInfo = (SummonResultComponent_o *)this->fields.fsm;
  if ( !summonResultInfo )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5569/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v9 )
LABEL_11:
    sub_1BCAA3C(summonResultInfo, method);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__176_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4B12972 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12845/*"SetBannerCenter"*/, method, v2);
    byte_4B12972 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12845/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__152_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12971 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&stoneCount, method);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v5, v6);
    byte_4B12971 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v11 = stoneCount;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v8, 0LL);
  if ( !currentStoneNumLb )
    sub_1BCAA3C(v9, v10);
  UILabel__set_text(currentStoneNumLb, v9, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__212_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  __int64 v26; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x2
  __int64 v36; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v48; // x24
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *basePanel; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  v3 = this;
  if ( (byte_4B12973 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SummonControl_BonusSelectSummonConfirmResult__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl_SetDispBtn__, v14, v15);
    sub_1BCA7E0(&Method_SummonControl_TryGetSelectBonusDataInfo__, v16, v17);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SummonControl___c__showConfirmDlg_b__212_1__, v20, v21);
    this = (SummonControl_o *)sub_1BCA7E0(&SummonControl___c_TypeInfo, v22, v23);
    byte_4B12973 = 1;
  }
  bonusSelectAssetManager = v3->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__49903816(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v3->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.bonusSelectSummonConfirmDialog,
    (int64_t)Component_object,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this = (SummonControl_o *)v3->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init(
    (BonusSelectSummonConfirmDialog_o *)this,
    v3->fields.bonusSelectAssetManager,
    0LL);
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v3->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v40 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            method,
                                                            v35,
                                                            v36);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v40, (Il2CppObject *)v3, Method_SummonControl_SetDispBtn__, 0LL);
  v44 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v41,
                                                            v42,
                                                            v43);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v44,
    (Il2CppObject *)v3,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v48 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                                    BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                    v45,
                                                                    v46,
                                                                    v47);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v48,
    (Il2CppObject *)v3,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, method);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  basePanel = (System_Action_o *)this->fields.confirmDlgInfo->fields.basePanel;
  if ( !basePanel )
  {
    if ( !LODWORD(this->fields.bonusSelectSummonConfirmDialog) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    basePanel = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v49, v50);
    System_Action___ctor(basePanel, klass, Method_SummonControl___c__showConfirmDlg_b__212_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__212_1 = basePanel;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__212_1,
      (int64_t)basePanel,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1BCAA3C(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v40, v44, v48, basePanel, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__236_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  void *maskObject; // x0
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  __int64 v62; // x1
  Il2CppObject *Component_object; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v72; // x9
  char v73; // w10
  Il2CppObject *v74; // x23
  System_String_o *Value; // x0
  System_String_array *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  SummonControl___c_c *v80; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x24
  System_Func_object__int__o *_9__236_1; // x25
  Il2CppObject *v83; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Collections_Generic_List_int__o *v92; // x24
  float v93; // s0
  struct GachaInfos_array *v94; // x8
  int max_length; // w21
  float v96; // s8
  il2cpp_array_size_t v97; // w22
  GachaInfos_o *v98; // x20
  int32_t v99; // w26
  char v100; // w25
  int32_t Data; // w28
  int32_t v102; // w29
  bool isNew; // w27
  int v104; // w28
  _DWORD *v105; // x25
  bool IsServant; // w27
  const MethodInfo *v107; // x2
  __int64 v108; // x3
  int v109; // w8
  bool v110; // w28
  __int64 v111; // x2
  __int64 v112; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v114; // x9
  __int64 size; // x10
  _BOOL4 v116; // w27
  WeightRate_int__o *v117; // x28
  int32_t v118; // w0
  int32_t v119; // w0
  const MethodInfo *v120; // [xsp+10h] [xbp-A0h]
  ServantLimitMaster_o *v121; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_4B12976 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantVoiceMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v20, v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v22, v23);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&SoundManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_SummonControl___c__showSummonEffect_b__236_1__, v38, v39);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v42, v43);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v44, v45);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v46, v47);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v48, v49);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v50, v51);
    sub_1BCA7E0(&StringLiteral_5564/*"END_PREPARATION"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_12529/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_3045/*"BGM_SUMMON_1"*/, v56, v57);
    byte_4B12976 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v59);
  SummonControl__setDispSummonInfo(this, 0, v60);
  maskObject = this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_84;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  SummonControl__clearResultList(this, v61);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v62);
  SoundManager__playBgm((System_String_o *)StringLiteral_3045/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.summonComp,
    (int64_t)Component_object,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
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
    v72 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v73 = 1;
  }
  else
  {
LABEL_15:
    v72 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v73 = 0;
  }
  v72->fields.isNoSkip = v73;
  v72->fields.gachaId = gachaParamData->fields.gachaId;
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v121 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)maskObject,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12529/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v76 = System_String__Split(Value, 0x2Cu, 0, 0LL);
    v80 = SummonControl___c_TypeInfo;
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)v76;
    if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v77);
      v80 = SummonControl___c_TypeInfo;
    }
    _9__236_1 = (System_Func_object__int__o *)v80->static_fields->__9__236_1;
    if ( !_9__236_1 )
    {
      if ( !v80->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v80, v77);
        v80 = SummonControl___c_TypeInfo;
      }
      v83 = (Il2CppObject *)v80->static_fields->__9;
      _9__236_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v77, v78, v79);
      System_Func_object__int____ctor(_9__236_1, v83, Method_SummonControl___c__showSummonEffect_b__236_1__, 0LL);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__236_1 = (struct System_Func_string__int__o *)_9__236_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__236_1,
        (int64_t)_9__236_1,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
    }
    v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v81,
                                                                 (System_Func_TSource__TResult__o *)_9__236_1,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
    v92 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v91,
                                                      (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v92 = 0LL;
  }
  v93 = UnityEngine_Random__get_value(0LL);
  v94 = this->fields.gachaResInfoList;
  if ( v94 )
  {
    max_length = v94->max_length;
    if ( max_length >= 1 )
    {
      v96 = v93;
      v97 = 0;
      while ( 1 )
      {
        if ( v97 >= v94->max_length )
          sub_1BCAA44(maskObject, method);
        v98 = v94->m_Items[v97];
        if ( !v98 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v98->fields.type, 0LL);
        method = (const MethodInfo *)(unsigned int)v98->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v74 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
                       (int32_t)method,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v99 = *((_DWORD *)maskObject + 16);
        v100 = 0;
LABEL_40:
        Data = 0;
        v102 = 3;
        isNew = v98->fields.isNew;
        if ( v92 )
          goto LABEL_76;
LABEL_80:
        maskObject = 0LL;
LABEL_81:
        if ( !*p_summonComp )
          goto LABEL_84;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v98->fields.objectId,
          v98->fields.limitCount,
          v100,
          isNew,
          Data,
          v99,
          v102,
          (unsigned __int8)maskObject & 1,
          v98->fields.userSvtId,
          v120);
        if ( max_length == ++v97 )
          goto LABEL_85;
        v94 = this->fields.gachaResInfoList;
        if ( !v94 )
          goto LABEL_84;
      }
      maskObject = MasterData_object;
      if ( !MasterData_object )
        goto LABEL_84;
      maskObject = DataMasterBase_object__object__int___GetEntity(
                     MasterData_object,
                     (int32_t)method,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v104 = *((_DWORD *)maskObject + 21);
      v105 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = v121;
      if ( !v121 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v121, v98->fields.objectId, v98->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_84;
      v99 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v105[20], v107) )
        goto LABEL_51;
      if ( v99 == 5 )
      {
        if ( v96 >= 0.2 )
        {
LABEL_51:
          v100 = 0;
          goto LABEL_52;
        }
      }
      else if ( v99 != 4 || v96 >= 0.4 )
      {
        goto LABEL_51;
      }
      v100 = 1;
LABEL_52:
      v109 = v104 - 3;
      v102 = 0;
      Data = 0;
      isNew = 0;
      switch ( v109 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v110 = v98->fields.isNew;
          isNew = v110;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v98->fields.objectId,
                         0LL);
          if ( maskObject != 0LL && v110 )
          {
            if ( !v92 )
            {
              v92 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                method,
                                                                v111,
                                                                v112);
              System_Collections_Generic_List_int____ctor(
                v92,
                (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v92 )
                goto LABEL_84;
            }
            method = (const MethodInfo *)(unsigned int)v98->fields.objectId;
            items = v92->fields._items;
            v114 = Method_System_Collections_Generic_List_int__Add__;
            ++v92->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v92->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v92,
                (int32_t)method,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v92->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
            v102 = 1;
          }
          else
          {
            Data = 0;
            v102 = 1;
LABEL_75:
            if ( !v92 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v102 = 1;
          if ( !v92 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v116 = v98->fields.isNew;
          v117 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, method, v107, v108);
          WeightRate_int____ctor(v117, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
          if ( v99 == 4 )
          {
            if ( !v117 )
              goto LABEL_84;
            WeightRate_int___setWeight(v117, 60, 0, (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v117, 40, 1, (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
            v118 = UnityEngine_Random__Range_70113984(0, v117->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v117, v118, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
            v102 = 2;
            isNew = v116;
            v100 &= Data == 0;
            v99 = 4;
            if ( v92 )
              break;
          }
          else
          {
            isNew = v116;
            if ( v99 == 5 )
            {
              if ( !v117 )
                goto LABEL_84;
              WeightRate_int___setWeight(v117, 60, 0, (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v117, 20, 1, (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
              v102 = 2;
              WeightRate_int___setWeight(v117, 20, 2, (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
              v119 = UnityEngine_Random__Range_70113984(0, v117->fields.totalweight, 0LL);
              Data = WeightRate_int___getData(v117, v119, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
              v100 &= Data == 0;
              v99 = 5;
              if ( v92 )
                break;
            }
            else
            {
              Data = 0;
              v102 = 2;
              if ( v92 )
                break;
            }
          }
          goto LABEL_80;
      }
LABEL_76:
      maskObject = (void *)System_Collections_Generic_List_int___Contains(
                             v92,
                             v98->fields.objectId,
                             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1BCAA3C(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5564/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__252_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SummonControl___c_c *v9; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__252_1; // x21
  Il2CppObject *v13; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B12979 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonControl___c__showSummonResultInfo_b__252_1__, v5, v6);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v7, v8);
    byte_4B12979 = 1;
  }
  v9 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, method);
    v9 = SummonControl___c_TypeInfo;
  }
  _9__252_1 = v9->static_fields->__9__252_1;
  if ( !_9__252_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9, method);
      v9 = SummonControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__252_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(_9__252_1, v13, Method_SummonControl___c__showSummonResultInfo_b__252_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__252_1 = _9__252_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__252_1,
      (int64_t)_9__252_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !overflowSvtCoinInfo )
    sub_1BCAA3C(v9, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__252_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__243_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B12977 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3584/*"CLICK_OK"*/, method, v2);
    byte_4B12977 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3584/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, v4);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v5) )
  {
    SummonControl__showConfirmDlg(this, v5);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B12937 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_beforeConfirmCautionResult__, method, v2);
    byte_4B12937 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1BCAA3C(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  v5 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_beforeConfirmCautionResult__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  SummonControl__showConfirmDlg_33711296(this, 0, v7);
}


void __fastcall SummonControl__callbackGachaDraw(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  SummonControl_o *v24; // x20
  __int64 v25; // x8
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  int64_t v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x8
  int64_t v58; // x1

  v4 = this;
  if ( (byte_4B1293A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v11, v12);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v13, v14);
    byte_4B1293A = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL)
    || System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v15);
    return;
  }
  v17 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v16);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v17,
                              (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_22;
  v24 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v25 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v25 )
    goto LABEL_22;
  v26 = *(_QWORD *)(v25 + 16);
  v4->fields.gachaResInfoList = (struct GachaInfos_array *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.gachaResInfoList, v26, v18, v19, v20, v21, v22, v23);
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v33 = *(_QWORD *)&v24->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v33 )
    goto LABEL_22;
  v34 = *(_QWORD *)(v33 + 24);
  v4->fields.canRankUpClassIds = (struct System_Int32_array *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.canRankUpClassIds, v34, v27, v28, v29, v30, v31, v32);
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v41 = *(_QWORD *)&v24->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v41 )
    goto LABEL_22;
  v42 = *(_QWORD *)(v41 + 32);
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.overflowSvtCoinInfos, v42, v35, v36, v37, v38, v39, v40);
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v49 = *(_QWORD *)&v24->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v49 )
    goto LABEL_22;
  v50 = *(_QWORD *)(v49 + 40);
  v4->fields.extraGiftIds = (struct System_Int32_array *)v50;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.extraGiftIds, v50, v43, v44, v45, v46, v47, v48);
  if ( !LODWORD(v24->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1BCAA44(this, result);
  v57 = *(_QWORD *)&v24->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v57
    || (v58 = *(_QWORD *)(v57 + 48),
        v4->fields.GachaExtraGiftList = (struct GachaExtraGifts_array *)v58,
        sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.GachaExtraGiftList, v58, v51, v52, v53, v54, v55, v56),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B1293D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, result, method);
    byte_4B1293D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  PlayMakerFSM_o *fsm; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_4B12954 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SummonControl___c__DisplayClass265_0__checkEnhanceTresureDevice_b__0__, v9, v10);
    sub_1BCA7E0(&SummonControl___c__DisplayClass265_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_9432/*"NO_EXIST"*/, v13, v14);
    byte_4B12954 = 1;
  }
  v15 = sub_1BCAA2C(SummonControl___c__DisplayClass265_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_11;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v15 + 24), v24) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v25);
      v29 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
    v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v15,
      Method_SummonControl___c__DisplayClass265_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(fsm, v17);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9432/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B12952 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9432/*"NO_EXIST"*/, method, v2);
    byte_4B12952 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1BCAA3C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9432/*"NO_EXIST"*/, 0LL);
  }
  else
  {
    SummonControl__checkEnhanceTresureDevice(this, method);
  }
}


void __fastcall SummonControl__checkEnhanceTresureDeviceSingle(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v30; // x8
  int32_t objectId; // w21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *v35; // x19
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_4B12953 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SummonControl___c__DisplayClass264_0__checkEnhanceTresureDeviceSingle_b__0__, v13, v14);
    sub_1BCA7E0(&SummonControl___c__DisplayClass264_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_9432/*"NO_EXIST"*/, v17, v18);
    byte_4B12953 = 1;
  }
  v19 = sub_1BCAA2C(SummonControl___c__DisplayClass264_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_16;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v19 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1BCAA44(Instance, v21);
  v30 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v30 )
    goto LABEL_16;
  objectId = v30->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v19 + 24) = objectId;
    v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v36 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v32);
      v36 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
    v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
    System_Action___ctor(
      v38,
      (Il2CppObject *)v19,
      Method_SummonControl___c__DisplayClass264_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v35 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v35, 1, DEFAULT_FADE_TIME, v38, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(Instance, v21);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9432/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v17; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v19; // x8
  struct GachaRqParamData_o *v20; // x8
  __int64 *v21; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_4B12919 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&StringLiteral_3489/*"CHECK_STONE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3486/*"CHECK_POINT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3073/*"BONUS_SELECT_CHECK_STONE"*/, v14, v15);
    byte_4B12919 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v19 = this->fields.gachaParamData;
    if ( !v19 )
      goto LABEL_25;
    if ( v19->fields.gachaType == 7 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3073/*"BONUS_SELECT_CHECK_STONE"*/, 0LL);
    }
  }
  v20 = this->fields.gachaParamData;
  if ( !v20 )
LABEL_25:
    sub_1BCAA3C(Master_object, v17);
  switch ( v20->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v21 = &StringLiteral_3489/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v21 = &StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/;
      else
        v21 = (__int64 *)&StringLiteral_3486/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v21 = &StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)*v21, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4B12941 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7043/*"GET_MULTI"*/, method, v2);
    byte_4B12941 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_7043/*"GET_MULTI"*/, 0LL);
}


bool __fastcall SummonControl__checkIsDrawGroupSummon(
        SummonControl_o *this,
        GachaEntity_o *drawGachaEnt,
        int32_t groupId,
        const MethodInfo *method)
{
  GachaMaster_o *gachaMst; // x0

  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_1BCAA3C(0LL, drawGachaEnt);
  return GachaMaster__CheckIsDrawGroupSummon(gachaMst, groupId, 0LL);
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
    sub_1BCAA3C(0LL, drawUsrGachaEnt);
  return GachaMaster__CheckIsMaxDrawNum(gachaMst, drawUsrGachaEnt, &drawGachaEnta, 0LL);
}


void __fastcall SummonControl__checkIsNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x2
  GachaInfos_o *v9; // x8
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_4B12942 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9369/*"NEW_SVT"*/, method, v2);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_7057/*"GO_BACK"*/, v5, v6);
    byte_4B12942 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v4->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1BCAA44(this, method);
  v9 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v9 )
    goto LABEL_14;
  if ( v9->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v4, v9->fields.objectId, getSvtIdx, v3)) )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    if ( this )
    {
      v10 = &StringLiteral_9369/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  this = (SummonControl_o *)v4->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v10 = &StringLiteral_7057/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0LL);
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
    sub_1BCAA3C(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1BCAA44(this, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned int max_length; // w10
  __int64 getSvtIdx; // x9
  __int64 *v13; // x8
  GachaInfos_o *v14; // x8
  int32_t objectId; // w20
  System_String_o *v16; // x1
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v3 = this;
  if ( (byte_4B1294B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&StringLiteral_9749/*"OLD_SVT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_6504/*"FINAL_SVT"*/, v6, v7);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_9369/*"NEW_SVT"*/, v8, v9);
    byte_4B1294B = 1;
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
      v13 = &StringLiteral_6504/*"FINAL_SVT"*/;
LABEL_15:
      v16 = (System_String_o *)*v13;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1BCAA44(this, method);
  v14 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v14 )
    goto LABEL_22;
  if ( !v14->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v13 = &StringLiteral_9749/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1BCAA3C(this, method);
  }
  objectId = v14->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v16 = (System_String_o *)StringLiteral_9749/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v16, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9369/*"NEW_SVT"*/, 0LL);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_22;
  v17 = *(_QWORD *)&this->fields.m_CachedPtr;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v17 )
    goto LABEL_22;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      objectId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v17 + 4 * m_CancellationTokenSource_low + 32) = objectId;
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
    sub_1BCAA3C(UserGachaData, v6);
  v10 = UserGachaData[23];
  if ( v10 >= 1 )
    return v9[7] >= v10;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  bool result; // w0

  if ( (byte_4B1294C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6);
    byte_4B1294C = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1BCAA3C(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v9 = size - 1;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v10,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v9 == v10 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v10;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v15; // x8
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  int32_t v20; // w8
  CommonUI_o *v21; // x19

  if ( (byte_4B128EB & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3552/*"CLEAR_TUTORIAL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11253/*"RETURN_TUTORIAL"*/, v10, v11);
    byte_4B128EB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
    goto LABEL_51;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v12);
  if ( !TutorialFlag__Get_38402052(101, 0LL) )
  {
    this->fields.isDoneTutorial = 0;
    v20 = 1;
  }
  else
  {
LABEL_51:
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v12);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v13);
      if ( TutorialFlag__Get_38402052(101, 0LL) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_48;
        v15 = &StringLiteral_11253/*"RETURN_TUTORIAL"*/;
LABEL_40:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v15, 0LL);
        goto LABEL_44;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v13);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v16);
    if ( !TutorialFlag__Get_38402052(101, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v18);
    if ( TutorialFlag__Get_38402052(107, 0LL) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v17);
      fsm = (PlayMakerFSM_o *)this->fields.summonInfoCtr;
      if ( !fsm )
        goto LABEL_48;
      SummonInfoControl__SetTutorialBtnEnable((SummonInfoControl_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.summonInfoCtr;
      if ( !fsm )
        goto LABEL_48;
      SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.titleInfo;
      if ( !fsm )
        goto LABEL_48;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)fsm, 1, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.indexPanel;
      if ( !fsm )
        goto LABEL_48;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.leftArrowBtn;
      if ( !fsm )
        goto LABEL_48;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.rightArrowBtn;
      if ( !fsm )
        goto LABEL_48;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.summonHelpInfo;
      if ( !fsm )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
      fsm = (PlayMakerFSM_o *)this->fields.detailInfo;
      if ( !fsm )
        goto LABEL_48;
      fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_48;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0LL);
      this->fields.isResult = 0;
      SummonControl__showHelpImg(this, v19);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_48;
      v15 = &StringLiteral_3552/*"CLEAR_TUTORIAL"*/;
      goto LABEL_40;
    }
    v20 = 4;
  }
  this->fields.tutorialKind = v20;
  SummonControl__progTutorial(this, v12);
LABEL_44:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
  if ( !v21 )
LABEL_48:
    sub_1BCAA3C(fsm, v13);
  CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtKeep; // w21
  int32_t svtEquipKeep; // w24
  BalanceConfig_c *v28; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w20
  int v31; // w8
  int32_t v32; // w25
  int32_t v33; // w24
  int32_t v34; // w21
  int32_t Count; // w0
  int32_t v36; // w20
  __int64 v37; // x2
  __int64 v38; // x3
  SummonControl_o *v39; // x21
  BalanceConfig_c *v40; // x0
  int32_t v41; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v42; // x23
  int32_t v43; // w3
  CommonUI_o *v44; // x0
  int32_t v45; // w1
  __int64 v46; // x2
  __int64 v47; // x3
  struct UserGameEntity_o *v48; // x8
  int32_t v49; // w22
  int32_t v50; // w21
  SummonControl_o *v51; // x20
  int32_t v52; // w2
  __int64 v53; // x2
  __int64 v54; // x3
  struct UserGameEntity_o *v55; // x8
  int32_t v56; // w21
  SummonControl_o *v57; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B12911 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v14, v15);
    sub_1BCA7E0(&Method_SummonControl_closeShotSvtEqFrameDlg__, v16, v17);
    sub_1BCA7E0(&Method_SummonControl_closeShotSvtFrameDlg__, v18, v19);
    sub_1BCA7E0(&StringLiteral_6618/*"FRIEND_GACHA_ADD_LIMIT"*/, v20, v21);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_3487/*"CHECK_RESOURCE"*/, v22, v23);
    byte_4B12911 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_40;
  if ( gachaParamData->fields.gachaType != 3 )
    goto LABEL_19;
  userGameEntity = v3->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_40;
  svtKeep = userGameEntity->fields.svtKeep;
  svtEquipKeep = userGameEntity->fields.svtEquipKeep;
  if ( !byte_4B112D7 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B112D7 = 1;
  }
  v28 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v28 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v28->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6618/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_40;
  v31 = Value & ~(Value >> 31);
  v32 = v31 + CommandCodeFrameMax;
  v33 = v31 + svtEquipKeep;
  v34 = v31 + svtKeep;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0LL);
  v36 = Count;
  if ( Count < v32 && servantEquipSum[1] < v34 && servantEquipSum[0] < v33 )
  {
LABEL_19:
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3487/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_40:
    sub_1BCAA3C(this, method);
  }
  if ( servantEquipSum[1] >= v34 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v48 = v3->fields.userGameEntity;
    if ( !v48 )
      goto LABEL_40;
    v49 = v48->fields.svtKeep;
    v50 = servantEquipSum[1];
    v51 = this;
    v42 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                            method,
                                                            v46,
                                                            v47);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v42,
      (Il2CppObject *)v3,
      (intptr_t)Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v51 )
      goto LABEL_40;
    v44 = (CommonUI_o *)v51;
    v45 = v50;
    v52 = v49;
    v43 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= v33 )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = v3->fields.userGameEntity;
      if ( !v55 )
        goto LABEL_40;
      v41 = v55->fields.svtEquipKeep;
      v56 = servantEquipSum[0];
      v57 = this;
      v42 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              method,
                                                              v53,
                                                              v54);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v57 )
        goto LABEL_40;
      v43 = 1;
      v44 = (CommonUI_o *)v57;
      v45 = v56;
    }
    else
    {
      if ( Count < v32 )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v3->fields.userGameEntity )
        goto LABEL_40;
      v39 = this;
      if ( !byte_4B112D7 )
      {
        sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v37);
        byte_4B112D7 = 1;
      }
      v40 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
        v40 = BalanceConfig_TypeInfo;
      }
      v41 = v40->static_fields->CommandCodeFrameMax;
      v42 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              method,
                                                              v37,
                                                              v38);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v39 )
        goto LABEL_40;
      v43 = 2;
      v44 = (CommonUI_o *)v39;
      v45 = v36;
    }
    v52 = v41;
  }
  CommonUI__OpenSvtFrameShortDlg(v44, v45, v52, v43, 0, v42, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  __int64 v17; // x2
  __int64 v18; // x3
  int32_t v19; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_4B1291A & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblUserMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7, v8);
    sub_1BCA7E0(&Method_SummonControl_closeShotPointDlg__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/, v11, v12);
    byte_4B1291A = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(v3);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC(v3);
  MasterData_object = **(void ***)(v14 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v19 = *((_DWORD *)MasterData_object + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v19;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v19 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v23 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        method,
                                                        v17,
                                                        v18);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_closeShotPointDlg__,
      v24);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v19, v23, 0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/, 0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x10
  int32_t haveStoneNum; // w11
  int32_t gachaType; // w9
  int32_t HaveFreeStoneNum_k__BackingField; // w20
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w22
  int32_t v16; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v18; // x24
  const MethodInfo *v19; // x3
  SummonConfirmDlgComponent_o *v20; // x20
  int32_t haveStone; // w21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v25; // x22
  const MethodInfo *v26; // x3

  v4 = this;
  if ( (byte_4B1291C & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonControl_closeShotStoneDlg__, v5, v6);
    this = (SummonControl_o *)sub_1BCA7E0(&StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/, v7, v8);
    byte_4B1291C = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  summonInfoCtr = v4->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_16;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  gachaType = gachaParamData->fields.gachaType;
  v4->fields.haveStone = haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  v4->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  v4->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  if ( gachaType == 7 )
    v16 = HaveChargeStoneNum_k__BackingField;
  else
    v16 = haveStoneNum;
  v4->fields.needStone = gachaResourceNum;
  if ( v16 >= gachaResourceNum )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12290/*"SHOW_CONFIRM_DLG"*/, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = v4->fields.confirmDlgInfo;
      v18 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v19);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v18,
          0LL);
        return;
      }
LABEL_16:
      sub_1BCAA3C(this, method);
    }
    SummonControl__SetupFragmentsExchangeButton(v4, method);
    v20 = v4->fields.confirmDlgInfo;
    haveStone = v4->fields.haveStone;
    v25 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v22,
                                                        v23,
                                                        v24);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)v4,
      (intptr_t)Method_SummonControl_closeShotStoneDlg__,
      v26);
    if ( !v20 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v20, haveStone, v25, 0LL);
  }
}


void __fastcall SummonControl__checkValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t userId; // x20
  Il2CppObject *Master_object; // x21
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  GachaReleaseMaster_o *v25; // x22
  int v26; // w9
  struct System_Collections_Generic_List_GachaSubEntity__o *gachaSubEntityList; // x8
  const MethodInfo *v28; // x2
  int v29; // w9
  struct GachaEntity_array *useGachaData; // x8
  __int64 v31; // x29
  int max_length; // w9
  GachaEntity_o *v33; // x24
  const MethodInfo *v34; // x3
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v39; // x25
  UserGachaEntity_o *UserGachaData; // x0
  System_Collections_Generic_List_object__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Comparison_T__o *v45; // x21
  StoryGachaAdjustData_o *adjustData; // [xsp+0h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v3 = this;
  if ( (byte_4B128F7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_VaildGachaInfo__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v14, v15);
    sub_1BCA7E0(&Method_SummonControl_SlotCompare__, v16, v17);
    this = (SummonControl_o *)sub_1BCA7E0(&TutorialFlag_TypeInfo, v18, v19);
    byte_4B128F7 = 1;
  }
  adjustData = 0LL;
  userGameEntity = v3->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_42;
  userId = userGameEntity->fields.userId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  vaildGachaList = v3->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_42;
  size = vaildGachaList->fields._size;
  v25 = (GachaReleaseMaster_o *)this;
  v26 = vaildGachaList->fields._version + 1;
  vaildGachaList->fields._size = 0;
  vaildGachaList->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  gachaSubEntityList = v3->fields.gachaSubEntityList;
  if ( !gachaSubEntityList )
    goto LABEL_42;
  v28 = (const MethodInfo *)(unsigned int)gachaSubEntityList->fields._size;
  v29 = gachaSubEntityList->fields._version + 1;
  gachaSubEntityList->fields._size = 0;
  gachaSubEntityList->fields._version = v29;
  if ( (int)v28 >= 1 )
    System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, (int32_t)v28, 0LL);
  useGachaData = v3->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_42;
  v31 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v31 >= max_length )
      break;
    if ( (unsigned int)v31 >= max_length )
      sub_1BCAA44(this, method);
    v33 = useGachaData->m_Items[v31];
    if ( !v33 || !Master_object )
      goto LABEL_42;
    this = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                (UserQuestMaster_o *)Master_object,
                                &entity,
                                userId,
                                v33->fields.condQuestId,
                                0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonControl_o *)entity;
      if ( !entity )
        goto LABEL_42;
      this = (SummonControl_o *)UserQuestEntity__getClearNum(entity, 0LL);
      if ( (int)this > 0 )
        goto LABEL_23;
      this = (SummonControl_o *)entity;
      if ( !entity )
        goto LABEL_42;
      this = (SummonControl_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
      if ( (int)this >= v33->fields.condQuestPhase )
      {
LABEL_23:
        if ( !v25 )
          goto LABEL_42;
        this = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v25, v33->fields.id, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v35 = SummonControl__CheckStoryGachaAdjustData(this, &adjustData, v33->fields.id, v34);
          if ( !v35 )
            adjustData = 0LL;
          beforeGachaId = v33->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            this = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v35, beforeGachaId, v36);
            if ( !this )
              goto LABEL_41;
            v39 = this;
            this = (SummonControl_o *)SummonControl__getCurrentGachaData(v3, v33->fields.beforeGachaId, v28);
            if ( !this )
              goto LABEL_42;
            if ( SHIDWORD(v39->fields.m_CancellationTokenSource) < SLODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height) )
              goto LABEL_41;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
            this = (SummonControl_o *)TutorialFlag__IsProgressDone(2, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_41;
            UserGachaData = SummonControl__getUserGachaData(this, v33->fields.id, v28);
            if ( UserGachaData )
            {
              this = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(v3, UserGachaData, v33, v37);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_41;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)v33->fields.gachaGroupId;
              if ( (int)method >= 1 )
              {
                this = (SummonControl_o *)v3->fields.gachaMst;
                if ( !this )
                  goto LABEL_42;
                this = (SummonControl_o *)GachaMaster__CheckIsDrawGroupSummon(
                                            (GachaMaster_o *)this,
                                            (int32_t)method,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_41;
              }
            }
          }
          SummonControl__AddVaildGachaInfoList(v3, v33, adjustData, v37);
        }
      }
    }
LABEL_41:
    useGachaData = v3->fields.useGachaData;
    ++v31;
    if ( !useGachaData )
      goto LABEL_42;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(this, &v3->fields.vaildGachaList, v28);
  v41 = (System_Collections_Generic_List_object__o *)v3->fields.vaildGachaList;
  v45 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_VaildGachaInfo__TypeInfo, v42, v43, v44);
  System_Comparison_object____ctor(v45, (Il2CppObject *)v3, Method_SummonControl_SlotCompare__, 0LL);
  if ( !v41 )
LABEL_42:
    sub_1BCAA3C(this, method);
  System_Collections_Generic_List_object___Sort_56244000(
    v41,
    v45,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__clearBannerList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int v5; // w21
  int32_t childCount; // w20
  int v7; // w23
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int v10; // w21
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  int32_t v13; // w20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4B1290F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1290F = 1;
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
  v5 = (int)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid,
                                               0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( v5 >= 1 )
  {
    v7 = v5 + 1;
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
                                                   v7 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_15;
    }
LABEL_33:
    sub_1BCAA3C(bannerLoopCtr, method);
  }
LABEL_15:
  if ( childCount >= 1 )
  {
    v10 = childCount + 1;
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
                                                   v10 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_70154244(v12, 0LL);
    }
    while ( --v10 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  v13 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v13 >= 0 )
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
                                                   v13,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__Destroy_70154244(v15, 0LL);
      if ( --v13 < 0 )
        return;
    }
    goto LABEL_33;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SummonResultComponent_o *summonResultInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Collections_Generic_List_int__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B1294F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v4, v5);
    byte_4B1294F = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL)
    || (summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)summonResultInfo,
                                                        0LL)) == 0LL )
  {
    sub_1BCAA3C(summonResultInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(System_Collections_Generic_List_int__TypeInfo, v7, v8, v9);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotCommandCodeFrameDlg(
        SummonControl_o *this,
        int32_t res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  SceneJumpInfo_o *v23; // x20

  if ( (byte_4B12914 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v13, v14);
    byte_4B12914 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  v17 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v23 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v20, v21, v22);
      SceneJumpInfo___ctor_39380884(v23, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 2, 0LL);
      if ( v19 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v19, 22, 1, (Il2CppObject *)v23, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(Instance, v16);
  }
  OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B1291B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_closeShotPointDlg__, res, method);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v4, v5);
    byte_4B1291B = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v7 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotPointDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1BCAA3C(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 *v12; // x8

  if ( (byte_4B1291D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_closeShotStoneDlg__, res, method);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_7059/*"GO_BUY_STONE"*/, v7, v8);
    byte_4B1291D = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v10 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotStoneDlg__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v12 = &StringLiteral_3559/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v12 = &StringLiteral_7059/*"GO_BUY_STONE"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  SceneJumpInfo_o *v27; // x20
  int32_t v28; // w1
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0

  if ( (byte_4B12913 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v17, v18);
    byte_4B12913 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v29 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v27 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v31, v32, v33);
        SceneJumpInfo___ctor_39380884(v27, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 1, 0LL);
        if ( v23 )
        {
          v28 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1BCAA3C(Instance, v20);
    case 1:
      v34 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v35 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v27 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v36, v37, v38);
        SceneJumpInfo___ctor_39380796(v27, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
        if ( v23 )
        {
          v28 = 71;
          goto LABEL_22;
        }
      }
      goto LABEL_27;
    case 0:
      v21 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
        v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v27 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v24, v25, v26);
        SceneJumpInfo___ctor_39380796(v27, (System_String_o *)StringLiteral_12784/*"ServantEQCombine"*/, 0LL);
        if ( v23 )
        {
          v28 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v23, v28, 1, (Il2CppObject *)v27, 0LL);
          return;
        }
      }
      goto LABEL_27;
  }
  v39 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v39 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v40 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v39, v39[4]);
  OverwriteAssetSoundName__PlaySystemSe(v40, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  Il2CppObject *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  SceneJumpInfo_o *v25; // x20
  int32_t v26; // w1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppObject *v32; // x3
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0

  if ( (byte_4B12912 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SummonControl_closeShotSvtFrameDlg__, v9, v10);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v15, v16);
    byte_4B12912 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v27 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtFrameDlg__);
      v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
        v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v25 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v29, v30, v31);
        SceneJumpInfo___ctor_39380884(v25, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
        if ( v21 )
        {
          v26 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1BCAA3C(Instance, v18);
    case 1:
      v33 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtFrameDlg__);
      v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v26 = 71;
          v32 = 0LL;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    case 0:
      v19 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtFrameDlg__);
      v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
        v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v25 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v22, v23, v24);
        SceneJumpInfo___ctor_39380796(v25, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
        if ( v21 )
        {
          v26 = 32;
LABEL_17:
          Instance = (CommonUI_o *)v21;
          v32 = (Il2CppObject *)v25;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v26, 1, v32, 0LL);
          return;
        }
      }
      goto LABEL_28;
  }
  v35 = Method_SummonControl_closeShotSvtFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v35 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_closeShotSvtFrameDlg__);
  v36 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
  OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  SummonCautionDlgComponent_o *cautionDlgInfo; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  __int64 v29; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v31; // x2
  __int64 v32; // x3
  struct GachaRqParamData_o *v33; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v44; // x24

  if ( (byte_4B12935 & 1) == 0 )
  {
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SummonControl_BonusSelectSummonConfirmResult__, v11, v12);
    sub_1BCA7E0(&Method_SummonControl_SetDispBtn__, v13, v14);
    sub_1BCA7E0(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15, v16);
    sub_1BCA7E0(&Method_SummonControl_confirmCautionResult__, v17, v18);
    sub_1BCA7E0(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v21, v22);
    byte_4B12935 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, 0LL);
  if ( !res )
  {
    v27 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_confirmCautionResult__);
    v28 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v33 = this->fields.gachaParamData;
              if ( v33 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v33->fields.gachaId;
                v36 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          res,
                                                                          v31,
                                                                          v32);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v36,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v40 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v37,
                                                                          v38,
                                                                          v39);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v40,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v44 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v41,
                                                                                  v42,
                                                                                  v43);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v44,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v36, v40, v44, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v24 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v24 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_confirmCautionResult__);
  v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
  OverwriteAssetSoundName__PlaySystemSe(v25, 8, 0LL);
  SummonControl__loadAssetsForSummon(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4B12934 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_confirmResult__, res, method);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v5, v6);
    byte_4B12934 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  if ( !res )
  {
    v11 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_confirmResult__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v8 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_confirmResult__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
  SummonControl__loadAssetsForSummon(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UnityEngine_Component_o **v4; // x24
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_object__o *v62; // x20
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Collections_Generic_List_object__o *v72; // x20
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x19
  __int64 noneGachaInfo; // x0
  Il2CppObject *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  __int64 v92; // x2
  __int64 v93; // x3
  Il2CppObject *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct UICenterOnChild_o *v101; // x21
  PartyOrganizationUtility_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v104; // x22
  System_Delegate_o *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x8
  SpringPanel_OnFinished_c *v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v118; // x22
  System_Delegate_o *v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  UIScrollView_OnDragNotification_c *v126; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  __int64 v129; // x2
  float v130; // s0
  UnityEngine_Component_o *v131; // x20
  float v132; // s2
  float v133; // s8
  float v134; // s0
  int v135; // w8
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  Il2CppObject *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  __int64 v146; // x2
  __int64 v147; // x3
  Il2CppObject *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct UICenterOnChild_o *v155; // x21
  System_Delegate_o *v156; // t1
  SpringPanel_OnFinished_o *v157; // x22
  System_Delegate_o *v158; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  SpringPanel_OnFinished_c *v165; // x1
  __int64 v166; // x2
  __int64 v167; // x3
  struct UIScrollView_o *summonMBannerScrollView; // x21
  System_Delegate_o *v169; // t1
  UIScrollView_OnDragNotification_o *v170; // x22
  System_Delegate_o *v171; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  UIScrollView_OnDragNotification_c *v178; // x1
  int32_t v179; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v182; // x27
  __int64 v183; // x2
  UnityEngine_Transform_o *v184; // x20
  UnityEngine_Transform_o *v185; // x21
  int v186; // s0
  int v189; // w25
  System_String_o *v190; // x0
  System_String_o *v191; // x0
  System_String_o *v192; // x0
  System_String_o *v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_Collections_Generic_List_object__o *v200; // x8
  struct System_Object_array *items; // x9
  _QWORD *v202; // x10
  __int64 size; // x11
  GachaBannerComponent_o *v204; // x29
  Il2CppClass **v205; // x0
  int v206; // w8
  int v207; // w9
  int32_t v208; // w26
  System_String_o *v209; // x0
  System_String_o *v210; // x21
  const MethodInfo *v211; // x2
  UnityEngine_Object_o *v212; // x22
  __int64 v213; // x1
  Il2CppObject *Item; // x20
  System_String_o *v215; // x5
  VaildGachaInfo_o *v216; // x19
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v218; // x0
  UnityEngine_GameObject_o *v219; // x29
  __int64 v220; // x2
  UnityEngine_Transform_o *v221; // x20
  UnityEngine_Transform_o *v222; // x21
  int v223; // s0
  System_String_o *name; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  System_Collections_Generic_List_object__o *v233; // x8
  struct System_Object_array *v234; // x9
  _QWORD *v235; // x10
  __int64 v236; // x11
  SummonMiniBannerComponent_o *v237; // x27
  Il2CppClass **v238; // x0
  System_String_o *v239; // x0
  System_String_o *v240; // x21
  const MethodInfo *v241; // x2
  __int64 v242; // x1
  UnityEngine_Object_o *v243; // x29
  const MethodInfo *v244; // x2
  __int64 v245; // x1
  Il2CppObject *Component_object; // x22
  __int64 v247; // x1
  __int64 v248; // x2
  __int64 v249; // x3
  SummonMiniBannerComponent_CallbackFunc_o *v250; // x20
  float v251; // s8
  int v252; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v254; // x0
  __int64 v255; // x2
  UnityEngine_Transform_o *v256; // x20
  const MethodInfo *v257; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v259; // x21
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x3
  SummonInfoControl_ClickDelegate_o *v263; // x22
  const MethodInfo *v264; // x2
  const MethodInfo *v265; // x1
  int v266; // [xsp+Ch] [xbp-94h]
  int v267; // [xsp+10h] [xbp-90h]
  unsigned int v268; // [xsp+14h] [xbp-8Ch]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+20h] [xbp-80h]
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // [xsp+28h] [xbp-78h]
  int v272; // [xsp+38h] [xbp-68h]
  int v273; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v274; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (UnityEngine_Component_o **)&byte_4B12000;
  if ( (byte_4B128FD & 1) == 0 )
  {
    sub_1BCA7E0(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&SummonInfoControl_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIPanel___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v32, v33);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v34, v35);
    sub_1BCA7E0(&UIScrollView_OnDragNotification_TypeInfo, v36, v37);
    sub_1BCA7E0(&SpringPanel_OnFinished_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v40, v41);
    sub_1BCA7E0(&Method_SummonControl_OnCenterOnChildFinished__, v42, v43);
    sub_1BCA7E0(&Method_SummonControl_OnClickMiniBanner__, v44, v45);
    sub_1BCA7E0(&Method_SummonControl_OnDragStarted__, v46, v47);
    sub_1BCA7E0(&Method_SummonControl_exeSummon__, v48, v49);
    sub_1BCA7E0(&StringLiteral_20694/*"img_summon_"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_20696/*"img_summon_mini_236"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_20695/*"img_summon_mini_"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v60, v61);
    byte_4B128FD = 1;
  }
  v273 = 0;
  v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GachaBannerComponent__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v62;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bannerInfoList, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  v72 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo,
                                                       v69,
                                                       v70,
                                                       v71);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v72;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.summonMBannerInfoList,
    (int64_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
  p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (__int64)this->fields.summonBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v83 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v83;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bannerLoopCtr, (int64_t)v83, v84, v85, v86, v87, v88, v89);
  }
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
  noneGachaInfo = UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)*p_bannerLoopCtr;
    if ( !*p_bannerLoopCtr )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v94 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v94;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.centerChild, (int64_t)v94, v95, v96, v97, v98, v99, v100);
  }
  v101 = *p_centerChild;
  if ( !v101 )
    goto LABEL_128;
  onFinished = (System_Delegate_o *)v101->fields.onFinished;
  p_onFinished = (PartyOrganizationUtility_o *)&v101->fields.onFinished;
  v104 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, v79, v92, v93);
  SpringPanel_OnFinished___ctor(v104, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
  v105 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v104, 0LL);
  v112 = (int64_t)v105;
  if ( v105 )
  {
    v113 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v105->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v105;
    if ( (SpringPanel_OnFinished_c *)v105->klass != v113 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1BCA784(p_onFinished, (int64_t)v105, v106, v107, v108, v109, v110, v111);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_128;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (PartyOrganizationUtility_o *)&summonBannerScrollView->fields.onDragStarted;
  v118 = (UIScrollView_OnDragNotification_o *)sub_1BCAA2C(UIScrollView_OnDragNotification_TypeInfo, v79, v114, v115);
  UIScrollView_OnDragNotification___ctor(v118, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v119 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v118, 0LL);
  v112 = (int64_t)v119;
  if ( v119 )
  {
    v126 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v119->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v119;
    if ( (UIScrollView_OnDragNotification_c *)v119->klass != v126 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1BCA784(p_onFinished, (int64_t)v119, v120, v121, v122, v123, v124, v125);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_128;
  LODWORD(v4) = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0LL);
  v130 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v131 = *p_bannerLoopCtr;
  v132 = (float)((float)(fminf(v130, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v130 < 1.7778 )
    v133 = 1028.0;
  else
    v133 = v132;
  if ( !byte_4B109C0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v79, v129);
    byte_4B109C0 = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v79);
  if ( !v131 )
    goto LABEL_128;
  v134 = floorf(v133);
  if ( v134 == INFINITY )
    v135 = 0x80000000;
  else
    v135 = (int)v134;
  LODWORD(v131[1].monitor) = v135;
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_128;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_128;
    v137 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)noneGachaInfo,
             (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v137;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.summonMBannerLoopCtr,
      (int64_t)v137,
      v138,
      v139,
      v140,
      v141,
      v142,
      v143);
  }
  p_summonMBannerLoopCtr = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
  summonMBannerCenterChild = (UnityEngine_Object_o *)this->fields.summonMBannerCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
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
    v148 = UnityEngine_GameObject__AddComponent_object_(
             (UnityEngine_GameObject_o *)noneGachaInfo,
             (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v148;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.summonMBannerCenterChild,
      (int64_t)v148,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
  }
  v155 = *p_summonMBannerCenterChild;
  if ( !v155 )
    goto LABEL_128;
  v156 = (System_Delegate_o *)v155->fields.onFinished;
  p_onFinished = (PartyOrganizationUtility_o *)&v155->fields.onFinished;
  v157 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, v79, v146, v147);
  SpringPanel_OnFinished___ctor(v157, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
  v158 = System_Delegate__Combine(v156, (System_Delegate_o *)v157, 0LL);
  v112 = (int64_t)v158;
  if ( v158 )
  {
    v165 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v158->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (PartyOrganizationUtility_c *)v158;
    if ( (SpringPanel_OnFinished_c *)v158->klass != v165 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1BCA784(p_onFinished, (int64_t)v158, v159, v160, v161, v162, v163, v164);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_128;
  v169 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (PartyOrganizationUtility_o *)&summonMBannerScrollView->fields.onDragStarted;
  v170 = (UIScrollView_OnDragNotification_o *)sub_1BCAA2C(UIScrollView_OnDragNotification_TypeInfo, v79, v166, v167);
  UIScrollView_OnDragNotification___ctor(v170, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v171 = System_Delegate__Combine(v169, (System_Delegate_o *)v170, 0LL);
  v112 = (int64_t)v171;
  if ( !v171 )
    goto LABEL_65;
  v178 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v171->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (PartyOrganizationUtility_c *)v171;
    if ( (UIScrollView_OnDragNotification_c *)v171->klass == v178 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1BCACFC(v112);
LABEL_65:
  p_onFinished->klass = (PartyOrganizationUtility_c *)v112;
LABEL_66:
  sub_1BCA784(p_onFinished, v112, v172, v173, v174, v175, v176, v177);
  v272 = 2 * (_DWORD)v4;
  if ( 2 * (int)v4 >= 1 )
  {
    v179 = 0;
    v267 = (_DWORD)v4 - 1;
    v268 = (unsigned int)v4 & 0x80000000;
    v266 = (int)v4;
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
      v182 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v184 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4B109C6 )
      {
        noneGachaInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v79, v183);
        byte_4B109C6 = 1;
      }
      if ( !v184 )
        break;
      UnityEngine_Transform__set_localScale(v184, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v182, 0LL);
      if ( !*p_bannerLoopCtr )
        break;
      v185 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v186 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v185 )
        break;
      UnityEngine_Transform__set_localPosition(v185, *(UnityEngine_Vector3_o *)&v186, 0LL);
      v189 = v179 + 1;
      v273 = v179 + 1;
      v190 = System_Int32__ToString((int32_t)&v273, 0LL);
      v191 = System_String__Concat_62401220((System_String_o *)StringLiteral_1209/*"0"*/, v190, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v182, v191, 0LL);
      if ( v273 >= 10 )
      {
        v192 = System_Int32__ToString((int32_t)&v273, 0LL);
        v193 = System_String__Concat_62401220((System_String_o *)StringLiteral_1262/*"1"*/, v192, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v182, v193, 0LL);
      }
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v182,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v200 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v200->fields._items;
      v202 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v200->fields._version;
      if ( !items )
        break;
      size = v200->fields._size;
      v204 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v200,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
      }
      else
      {
        v205 = &items->obj.klass + size;
        v200->fields._size = size + 1;
        v205[4] = (Il2CppClass *)v204;
        sub_1BCA784((PartyOrganizationUtility_o *)(v205 + 4), (int64_t)v204, v194, v195, v196, v197, v198, v199);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      v206 = v179 | v268;
      v207 = (int)(v179 | v268) <= v267 ? 0 : (int)v4;
      if ( !noneGachaInfo )
        break;
      v208 = v206 - v207;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v206 - v207,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v4 = p_bannerLoopCtr;
      v209 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v210 = System_String__Concat_62401220((System_String_o *)StringLiteral_20694/*"img_summon_"*/, v209, 0LL);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg(this, v210, v211);
      if ( !this->fields.vaildGachaList )
        break;
      v212 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
               v208,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v213);
      noneGachaInfo = UnityEngine_Object__op_Equality(v212, 0LL, 0LL);
      if ( !v204 )
        break;
      v215 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v210;
      v216 = (VaildGachaInfo_o *)Item;
      GachaBannerComponent__setBannerGachaInfo(
        v204,
        (VaildGachaInfo_o *)Item,
        v208,
        v179,
        (UnityEngine_GameObject_o *)v212,
        v215,
        0LL);
      noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v218 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v218,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      v219 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v221 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4B109C6 )
      {
        noneGachaInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v79, v220);
        byte_4B109C6 = 1;
      }
      if ( !v221 )
        break;
      UnityEngine_Transform__set_localScale(v221, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v219, 0LL);
      if ( !*p_summonMBannerLoopCtr )
        break;
      v222 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_summonMBannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v223 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v222 )
        break;
      UnityEngine_Transform__set_localPosition(v222, *(UnityEngine_Vector3_o *)&v223, 0LL);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v182, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v219, name, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v219,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v233 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v234 = v233->fields._items;
      v235 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v233->fields._version;
      if ( !v234 )
        break;
      v236 = v233->fields._size;
      v237 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v236 >= v234->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v233,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
      }
      else
      {
        v238 = &v234->obj.klass + v236;
        v233->fields._size = v236 + 1;
        v238[4] = (Il2CppClass *)v237;
        sub_1BCA784((PartyOrganizationUtility_o *)(v238 + 4), (int64_t)v237, v227, v228, v229, v230, v231, v232);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v208,
                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v239 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v240 = System_String__Concat_62401220((System_String_o *)StringLiteral_20695/*"img_summon_mini_"*/, v239, 0LL);
      v243 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v240, v241);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v242);
      if ( UnityEngine_Object__op_Equality(v243, 0LL, 0LL) )
      {
        v240 = (System_String_o *)StringLiteral_20696/*"img_summon_mini_236"*/;
        v243 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20696/*"img_summon_mini_236"*/,
                                         v244);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v245);
        if ( UnityEngine_Object__op_Equality(v243, 0LL, 0LL) )
          v240 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v250 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                           SummonMiniBannerComponent_CallbackFunc_TypeInfo,
                                                           v247,
                                                           v248,
                                                           v249);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v250,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0LL);
      if ( !v237 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v237,
        v216,
        v208,
        v179,
        (UnityEngine_GameObject_o *)v243,
        v240,
        v250,
        (UIPanel_o *)Component_object,
        0LL);
      p_bannerLoopCtr = v4;
      LODWORD(v4) = v266;
      ++v179;
      if ( v272 == v189 )
        goto LABEL_120;
    }
LABEL_128:
    sub_1BCAA3C(noneGachaInfo, v79);
  }
LABEL_120:
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  v251 = fminf(640.0 / (float)(int)v4, 25.0);
  v252 = (_DWORD)v4 - 1;
  *(float *)(noneGachaInfo + 48) = v251;
  if ( (int)v4 >= 1 )
  {
    do
    {
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v254 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 slideIndexPrefab,
                                 v254,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v256 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4B109C6 )
      {
        noneGachaInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v79, v255);
        byte_4B109C6 = 1;
      }
      if ( !v256 )
        break;
      UnityEngine_Transform__set_localScale(v256, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      LODWORD(v4) = (_DWORD)v4 - 1;
      if ( !(_DWORD)v4 )
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
  v274.fields.z = this->fields.center.fields.z;
  v274.fields.y = this->fields.center.fields.y;
  v274.fields.x = (float)(v251 * -0.5) * (float)v252;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noneGachaInfo, v274, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0LL);
  SummonControl__UpdateSummonInfoControlLayout(this, v257);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_128;
  summonInfoCtr = this->fields.summonInfoCtr;
  v259 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v263 = (SummonInfoControl_ClickDelegate_o *)sub_1BCAA2C(SummonInfoControl_ClickDelegate_TypeInfo, v260, v261, v262);
  SummonInfoControl_ClickDelegate___ctor(v263, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr )
    goto LABEL_128;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v259, v263, 0LL);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v264);
  SummonControl__setResourceInfo(this, v265);
}


void __fastcall SummonControl__deleteBannerList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t childCount; // w0
  int v6; // w21
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w0
  int v10; // w21
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  int32_t v13; // w20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4B1295A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1295A = 1;
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
    v6 = childCount + 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_33:
    sub_1BCAA3C(bannerLoopCtr, method);
  }
LABEL_13:
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( v9 >= 1 )
  {
    v10 = v9 + 1;
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
                                                   v10 - 2,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__DestroyImmediate_70154432(v12, 0LL);
    }
    while ( --v10 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_33;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_33;
  v13 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v13 >= 0 )
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
                                                   v13,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_33;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__DestroyImmediate_70154432(v15, 0LL);
    }
    while ( --v13 >= 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8

  if ( (byte_4B1291F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_10629/*"PURCHASE_ERROR"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_10628/*"PURCHASE_CANCEL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10630/*"PURCHASE_OK"*/, v9, v10);
    byte_4B1291F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v13 = &StringLiteral_10628/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v13 = &StringLiteral_10629/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v13 = &StringLiteral_10630/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8

  if ( (byte_4B12918 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_10629/*"PURCHASE_ERROR"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_10628/*"PURCHASE_CANCEL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10630/*"PURCHASE_OK"*/, v9, v10);
    byte_4B12918 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v13 = &StringLiteral_10628/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1BCAA3C(Instance, v12);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v13 = &StringLiteral_10629/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v13 = &StringLiteral_10630/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseSvtFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x0
  __int64 v12; // x1
  __int64 *v13; // x8

  if ( (byte_4B12916 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_10629/*"PURCHASE_ERROR"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_10628/*"PURCHASE_CANCEL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10630/*"PURCHASE_OK"*/, v9, v10);
    byte_4B12916 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v13 = &StringLiteral_10628/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1BCAA3C(Instance, v12);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v13 = &StringLiteral_10629/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v13 = &StringLiteral_10630/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  SummonControl___c_c *v16; // x8
  float x; // s9
  float y; // s12
  float m_XMin; // s8
  float m_YMin; // s13
  float m_Height; // s10
  float m_Width; // s11
  CommonUI_o *v23; // x20
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v25; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x20
  UnityEngine_Vector2_o v37; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v38; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B128EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl__exeFormation_b__145_1__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl___c__exeFormation_b__145_0__, v8, v9);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v10, v11);
    byte_4B128EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = SummonControl___c_TypeInfo;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  v23 = (CommonUI_o *)Instance;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v13);
    v16 = SummonControl___c_TypeInfo;
  }
  _9__145_0 = v16->static_fields->__9__145_0;
  if ( !_9__145_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = SummonControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v16->static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
    System_Action___ctor(_9__145_0, v25, Method_SummonControl___c__exeFormation_b__145_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__145_0 = _9__145_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__145_0,
      (int64_t)_9__145_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v23 )
    sub_1BCAA3C(Instance, v13);
  v38.fields.m_YMin = m_YMin + 33.0;
  v37.fields.y = y + 33.0;
  v37.fields.x = x;
  v38.fields.m_XMin = m_XMin;
  v38.fields.m_Width = m_Width;
  v38.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v23, v37, 0.0, v38, _9__145_0, 0LL);
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__145_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v36, 0LL);
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

  if ( (byte_4B12910 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3488/*"CHECK_SERVANT_FRAME"*/, paramData, method);
    byte_4B12910 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.gachaParamData, (int64_t)paramData, v5, v6, v7, v8, v9, v10);
  if ( this->fields.tutorialKind == 1 )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    if ( !confirmDlgInfo
      || (SummonConfirmDlgComponent__setTutorial(confirmDlgInfo, 0, 0LL),
          (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.tutorialArrowObj) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(confirmDlgInfo, v11);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3488/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  CombineResultEffectComponent_ClickDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B12955 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl__executeEnhanceTresureDevice_b__266_0__, v6, v7);
    byte_4B12955 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v10 = (CommonUI_o *)Instance;
  v14 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v11,
                                                          v12,
                                                          v13);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__266_0__,
    0LL);
  if ( !v10 )
    sub_1BCAA3C(v15, v16);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v10, npEnhanceSvtId, v14, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct SummonInfoControl_o *summonInfoCtr; // x8
  _BOOL4 isFree; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x22
  struct GachaRqParamData_o *gachaParamData; // x8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct GachaRqParamData_o *v31; // x8
  Il2CppObject *current; // x20
  System_String_o *SummonConfirmMessage; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  struct GachaRqParamData_o *v36; // x8
  int32_t friendPoint; // w22
  int32_t gachaResourceNum; // w29
  SummonConfirmDlgComponent_o *v39; // x24
  int32_t needPoint; // w23
  SummonConfirmDlgComponent_CallbackFunc_o *v41; // x25
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x26
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B12930 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_SummonControl_autoSellSettingChange2__, v15, v16);
    this = (SummonControl_o *)sub_1BCA7E0(&Method_SummonControl_friendSummonConfirmResult__, v17, v18);
    byte_4B12930 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  summonInfoCtr = v4->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_22;
  isFree = summonInfoCtr->fields.isFree;
  v4->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v4->fields.confirmDlgInfo;
    v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)v4,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v23);
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
    System_Action___ctor(v27, (Il2CppObject *)v4, Method_SummonControl_autoSellSettingChange2__, 0LL);
    gachaParamData = v4->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v22, v27, gachaParamData->fields.gachaId, 0LL);
      return;
    }
LABEL_22:
    sub_1BCAA3C(this, method);
  }
  this = (SummonControl_o *)v4->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v29 )
      break;
    v31 = v4->fields.gachaParamData;
    if ( !v31 )
      sub_1BCAA3C(v29, v30);
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1BCAA3C(v29, v30);
    if ( v31->fields.gachaId == LODWORD(v48.fields._current[1].klass) )
    {
      SummonConfirmMessage = GachaSubEntity__GetSummonConfirmMessage((GachaSubEntity_o *)v48.fields._current, 0LL);
      goto LABEL_16;
    }
  }
  current = 0LL;
  SummonConfirmMessage = 0LL;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v36 = v4->fields.gachaParamData;
  if ( !v36 )
    goto LABEL_22;
  friendPoint = v4->fields.friendPoint;
  gachaResourceNum = v36->fields.gachaResourceNum;
  v39 = v4->fields.confirmDlgInfo;
  needPoint = v4->fields.needPoint;
  v41 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                      method,
                                                      v34,
                                                      v35);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v41,
    (Il2CppObject *)v4,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v42);
  v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(v46, (Il2CppObject *)v4, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v39 )
    goto LABEL_22;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v39,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v41,
    v46,
    SummonConfirmMessage,
    (GachaSubEntity_o *)current,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4B12931 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_friendSummonConfirmResult__, res, method);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v5, v6);
    byte_4B12931 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v8 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_friendSummonConfirmResult__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    SummonControl__friendPointQpManaCheck(this, v10);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_10:
    sub_1BCAA3C(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_4B128FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId, method);
    byte_4B128FA = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1BCAA3C(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  int32_t v7; // w20

  if ( (byte_4B12958 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4, v5);
    byte_4B12958 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_9:
    sub_1BCAA3C(vaildGachaList, method);
  v7 = 0;
  while ( v7 < vaildGachaList->fields._size )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    vaildGachaList,
                                                                    v7,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_9;
    if ( HIDWORD(vaildGachaList[1].monitor) == 3 )
      return v7;
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
    ++v7;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B128F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B128F9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  UserGachaMaster__TryGetEntity((UserGachaMaster_o *)MasterData_object, &entity, (int64_t)Instance, gachaId, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  PartyOrganizationUtility_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B128EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B128EA = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1BCAA3C(0LL, v8);
    p_stoneFragmentsShopEntity = (PartyOrganizationUtility_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0LL);
    p_stoneFragmentsShopEntity->klass = (PartyOrganizationUtility_c *)EntityOfFragmentsShop;
    sub_1BCA784(p_stoneFragmentsShopEntity, (int64_t)EntityOfFragmentsShop, v11, v12, v13, v14, v15, v16);
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
  __int64 v2; // x2
  float y; // s8
  float x; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B128E9 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B128E9 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  v6 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v7 = y + 33.0;
  result.fields.y = v7;
  result.fields.x = v6;
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
  __int64 v6; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  ServantFlagReleaseMaster_o *v9; // x21
  il2cpp_array_size_t v10; // w25
  bool v11; // w24
  struct GachaInfos_array *v12; // x8
  GachaInfos_o *v13; // x8
  int32_t objectId; // w22
  bool result; // w0

  v4 = this;
  if ( (byte_4B12951 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId, method);
    this = (SummonControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B12951 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length >= 1 )
  {
    v9 = (ServantFlagReleaseMaster_o *)this;
    v10 = 0;
    v11 = 1;
    while ( 1 )
    {
      v12 = v4->fields.gachaResInfoList;
      if ( !v12 )
        break;
      if ( v10 >= v12->max_length )
        sub_1BCAA44(this, svtId);
      v13 = v12->m_Items[v10];
      if ( !v13 || !v9 )
        break;
      objectId = v13->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v9, objectId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_16;
      v11 = (int)++v10 < max_length;
      if ( max_length == v10 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCAA3C(this, svtId);
  }
  v11 = 0;
LABEL_15:
  objectId = 0;
LABEL_16:
  result = v11;
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
          sub_1BCAA44(this, svtId);
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
    sub_1BCAA3C(this, *(_QWORD *)&svtId);
  }
  return 0;
}


bool __fastcall SummonControl__isSvtEqSummonResult(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  il2cpp_array_size_t v11; // w22
  bool v12; // w24
  struct GachaInfos_array *v13; // x8
  GachaInfos_o *v14; // x25

  v3 = this;
  if ( (byte_4B12945 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4, v5);
    this = (SummonControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12945 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      v13 = v3->fields.gachaResInfoList;
      if ( !v13 )
        break;
      if ( v11 >= v13->max_length )
        sub_1BCAA44(this, method);
      v14 = v13->m_Items[v11];
      if ( !v14 || !v10 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v10,
                                  v14->fields.objectId,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !this
        || (this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL),
            ((unsigned __int8)this & 1) == 0)
        || !v14->fields.isNew )
      {
        v12 = (int)++v11 < max_length;
        if ( max_length != v11 )
          continue;
      }
      return v12;
    }
LABEL_18:
    sub_1BCAA3C(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4B12963 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res, method);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v5, v6);
    byte_4B12963 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *limitWarningDlgInfo; // x0
  _DWORD *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  int32_t v22; // w20
  BalanceConfig_c *v23; // x0
  const MethodInfo *v24; // x1
  SummonLimitWarningDlgComponent_o *v25; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x22

  if ( (byte_4B12962 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&res, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SummonControl_limitManaConfirmResult__, v11, v12);
    sub_1BCA7E0(&Method_SummonControl_showConfirmDlg__, v13, v14);
    sub_1BCA7E0(&StringLiteral_3559/*"CLICK_CANCEL"*/, v15, v16);
    byte_4B12962 = 1;
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
        v18 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 62), 0LL) )
          goto LABEL_18;
        v22 = v18[46];
        v23 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
          v23 = BalanceConfig_TypeInfo;
        }
        if ( v22 >= v23->static_fields->UserItemMax )
        {
          v25 = this->fields.limitWarningDlgInfo;
          v26 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                   SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v25 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v25, v26, v30, 0LL);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v24);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_21:
      sub_1BCAA3C(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3559/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  SummonRootComponent_o *klass; // x20
  System_Action_o *v15; // x21
  __int64 methodPtr_low; // x9
  SummonControl_o *v17; // x0
  bool v18; // w1
  const MethodInfo *v19; // x2

  if ( (byte_4B12938 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl__loadAssetsForSummon_b__229_0__, v6, v7);
    sub_1BCA7E0(&SummonRootComponent_TypeInfo, v8, v9);
    byte_4B12938 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__229_0__, 0LL),
        !klass) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  methodPtr_low = LOBYTE(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v15, 0LL);
  }
  else
  {
    sub_1BCACFC(klass);
    SummonControl__friendSummonConfirmResult(v17, v18, v19);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v11; // w8
  int32_t v12; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4B12907 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_onClickChangeBanner__, method, v2);
    sub_1BCA7E0(&StringLiteral_12845/*"SetBannerCenter"*/, v4, v5);
    byte_4B12907 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12845/*"SetBannerCenter"*/,
      0LL);
    v7 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_onClickChangeBanner__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
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
    v11 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v12 = currentMoveIdx + 1 < v11 ? currentMoveIdx + 1 : 0;
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
                                                      v12,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v12,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_24:
      sub_1BCAA3C(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47224044(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t childCount; // w8
  int v10; // w8
  int32_t v11; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4B12908 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonControl_onClickLeftChangeBanner__, method, v2);
    sub_1BCA7E0(&StringLiteral_12845/*"SetBannerCenter"*/, v4, v5);
    byte_4B12908 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12845/*"SetBannerCenter"*/,
      0LL);
    v7 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_SummonControl_onClickLeftChangeBanner__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
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
    v10 = childCount - 1;
    v11 = this->fields.currentMoveIdx - 1 < 0 ? v10 : this->fields.currentMoveIdx - 1;
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
                                                      v11,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v11,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_24:
      sub_1BCAA3C(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47224044(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v18; // x21
  const MethodInfo *v19; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s9
  float m_Height; // s14
  SummonControl_o *v25; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  float v30; // s0
  SummonControl___c_c *v31; // x0
  float v32; // s11
  System_Action_o *_9__144_0; // x22
  Il2CppObject *v34; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x20
  UnityEngine_Rect_o v46; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B128EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__openAfterSummonInfo_b__144_1__, v8, v9);
    sub_1BCA7E0(&Method_SummonControl___c__openAfterSummonInfo_b__144_0__, v10, v11);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_13667/*"TUTORIAL_MESSAGE_SUMMON2"*/, v14, v15);
    byte_4B128EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13667/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v19);
  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v30 = SummonControl__FSMenuOffsetX(v25, v26);
  v31 = SummonControl___c_TypeInfo;
  v32 = v30;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v27);
    v31 = SummonControl___c_TypeInfo;
  }
  _9__144_0 = v31->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31, v27);
      v31 = SummonControl___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__144_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
    System_Action___ctor(_9__144_0, v34, Method_SummonControl___c__openAfterSummonInfo_b__144_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = _9__144_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__144_0,
      (int64_t)_9__144_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !Instance )
    sub_1BCAA3C(v31, v27);
  v46.fields.m_Height = m_Height + 33.0;
  v46.fields.m_YMin = m_YMin + 33.0;
  v46.fields.m_XMin = m_XMin + v32;
  v46.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v18,
    TUTORIAL_MENU_ARROW_POS_FS,
    v46,
    0.0,
    0LL,
    -1,
    _9__144_0,
    0LL);
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__144_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v45, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4B128ED & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3552/*"CLEAR_TUTORIAL"*/, method, v2);
    byte_4B128ED = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3552/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_1BCAA3C(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x19
  void *Item; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v41; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x2
  __int64 v51; // x3
  int32_t v52; // w21
  int64_t v53; // x21
  int64_t v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x8
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x21
  System_Comparison_T__o *v75; // x22
  Il2CppObject *v76; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_List_object__o *v84; // x22
  int32_t v85; // w21
  int32_t v86; // w22
  System_Action_o *v87; // x20

  if ( (byte_4B128F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Comparison_EventTutorialEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&EventTutorialEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v19, v20);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SummonControl___c__openSvtEqInfo_b__146_1__, v23, v24);
    sub_1BCA7E0(&Method_SummonControl___c__DisplayClass146_0__openSvtEqInfo_b__0__, v25, v26);
    sub_1BCA7E0(&SummonControl___c__DisplayClass146_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v29, v30);
    byte_4B128F0 = 1;
  }
  v31 = sub_1BCAA2C(SummonControl___c__DisplayClass146_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_11;
  *(_QWORD *)(v31 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)this, v34, v35, v36, v37, v38, v39);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v41 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v41, 0LL);
  *(_QWORD *)(v31 + 16) = EventTutorialEntity;
  v43 = (void **)(v31 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)EventTutorialEntity, v44, v45, v46, v47, v48, v49);
  Item = *(void **)(v31 + 16);
  if ( !Item )
    goto LABEL_11;
  v52 = 0;
  while ( v52 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v52,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v43;
    ++v52;
    if ( !*v43 )
      goto LABEL_11;
  }
  v53 = sub_1BCAA2C(EventTutorialEntity_TypeInfo, v33, v50, v51);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v53, 0LL);
  if ( !v53 )
    goto LABEL_11;
  *(_DWORD *)(v53 + 24) = 1;
  v54 = sub_1BCA888(int___TypeInfo, 1LL);
  *(_QWORD *)(v53 + 80) = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 80), v54, v55, v56, v57, v58, v59, v60);
  v67 = *(_QWORD *)(v53 + 80);
  if ( !v67 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v67 + 24) )
    sub_1BCAA44(Item, v33);
  *(_DWORD *)(v67 + 32) = 1;
  Item = *v43;
  if ( !*v43 )
    goto LABEL_11;
  v68 = *((_QWORD *)Item + 2);
  v69 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++*((_DWORD *)Item + 7);
  if ( !v68 )
    goto LABEL_11;
  v70 = *((int *)Item + 6);
  if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v53,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = v68 + 8 * v70;
    *((_DWORD *)Item + 6) = v70 + 1;
    *(_QWORD *)(v71 + 32) = v53;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 32), v53, v61, v62, v63, v64, v65, v66);
  }
  Item = SummonControl___c_TypeInfo;
  v74 = (System_Collections_Generic_List_object__o *)*v43;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v33);
    Item = SummonControl___c_TypeInfo;
  }
  v75 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v75 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, v33);
      Item = SummonControl___c_TypeInfo;
    }
    v76 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v75 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventTutorialEntity__TypeInfo, v33, v72, v73);
    System_Comparison_object____ctor(v75, v76, Method_SummonControl___c__openSvtEqInfo_b__146_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__146_1 = (struct System_Comparison_EventTutorialEntity__o *)v75;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__146_1, (int64_t)v75, v78, v79, v80, v81, v82, v83);
  }
  if ( !v74 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_56244000(
    v74,
    v75,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v84 = (System_Collections_Generic_List_object__o *)*v43;
  if ( !*v43 )
LABEL_11:
    sub_1BCAA3C(Item, v33);
  v85 = v84->fields._size - 1;
  if ( v85 >= 0 )
  {
    while ( v84 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v84,
               v85,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v43;
        if ( !*v43 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v85,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v86 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v33);
        Item = (void *)TutorialFlag__GetGachaFlg(v86, 0LL);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v43;
          if ( !*v43 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v85,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v84 = (System_Collections_Generic_List_object__o *)*v43;
      if ( --v85 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v50, v51);
  System_Action___ctor(v87, (Il2CppObject *)v31, Method_SummonControl___c__DisplayClass146_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v84,
    v87,
    0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  __int64 v16; // x1
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_4B1293C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SummonControl_callbackTutorialSet__, v11, v12);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v13, v14);
    byte_4B1293C = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v15,
                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0LL);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
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
        goto LABEL_37;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_37;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 1, 0LL);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_37;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject;
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      SummonControl__openSummonExeArrow(this, v6);
      break;
    case 2:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_37;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_37;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_37;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_37;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo) == 0LL)
        || (summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)summonInfoCtr,
                                                     0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.tutorialArrowObj) == 0LL)
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject) == 0LL) )
      {
LABEL_37:
        sub_1BCAA3C(summonInfoCtr, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *summonBannerInfo; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  int v17; // w9
  struct System_Collections_Generic_List_GachaSubEntity__o *gachaSubEntityList; // x8
  int32_t v19; // w2
  int v20; // w9
  int32_t VaildPayType; // w0
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  int32_t v24; // w20
  TerminalPramsManager_c *v25; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_4B128F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B128F4 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_24;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  SummonControl__clearBannerList(this, v13);
  SummonControl__clearResultList(this, v14);
  summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonResultInfo;
  if ( !summonBannerInfo )
    goto LABEL_24;
  summonBannerInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(summonBannerInfo, 0, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
  {
    size = vaildGachaList->fields._size;
    v17 = vaildGachaList->fields._version + 1;
    vaildGachaList->fields._size = 0;
    vaildGachaList->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  }
  gachaSubEntityList = this->fields.gachaSubEntityList;
  if ( gachaSubEntityList )
  {
    v19 = gachaSubEntityList->fields._size;
    v20 = gachaSubEntityList->fields._version + 1;
    gachaSubEntityList->fields._size = 0;
    gachaSubEntityList->fields._version = v20;
    if ( v19 >= 1 )
      System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v19, 0LL);
  }
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_24:
    sub_1BCAA3C(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v24 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  if ( !byte_4B1299C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B1299C = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->_SummonType_k__BackingField = v24;
  SummonControl__releaseBannerData(this, v22);
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( bonusSelectAssetManager )
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0LL);
}


void __fastcall SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  void *Item; // x0
  int32_t v14; // w20
  int32_t monitor; // w21
  int v16; // w22
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  SummonControl_o *v22; // x0
  int32_t FriendPointIndex; // w0
  const MethodInfo *v24; // x2
  Il2CppObject *Entity; // x0

  if ( (byte_4B12957 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B12957 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList
    || (method = (const MethodInfo *)(unsigned int)this->fields.currentIdx, vaildGachaList->fields._size <= (int)method) )
  {
    v14 = 0;
    goto LABEL_9;
  }
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           (int32_t)method,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !Item )
LABEL_25:
    sub_1BCAA3C(Item, method);
  if ( *((_DWORD *)Item + 13) != 3 )
  {
    Item = this->fields.vaildGachaList;
    if ( Item )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               this->fields.currentIdx,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( Item )
      {
        v14 = *((_DWORD *)Item + 4);
        Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Item )
        {
          Item = DataManager__GetMasterData_object_(
                   (DataManager_o *)Item,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( Item )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                       v14,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Entity )
            {
              monitor = (int32_t)Entity[4].monitor;
              goto LABEL_10;
            }
LABEL_9:
            monitor = 0;
LABEL_10:
            v16 = 0;
            goto LABEL_11;
          }
        }
      }
    }
    goto LABEL_25;
  }
  v14 = 0;
  monitor = 0;
  v16 = 1;
LABEL_11:
  if ( !SummonControl__resetSummonVaildData(this, method) || SummonControl__checkMaxDrawNum(this, v17) )
  {
    SummonControl__deleteBannerList(this, v17);
    SummonControl__checkValidGachaList(this, v18);
    SummonControl__createSummonInfo(this, v19);
    v22 = this;
    if ( !v16 )
    {
      FriendPointIndex = SummonControl__searchExtraGroupIdIndex(this, monitor, v14, v21);
      if ( FriendPointIndex != -1 )
      {
LABEL_17:
        SummonControl__setDispRePosition(this, FriendPointIndex, v24);
        return;
      }
      v22 = this;
    }
    FriendPointIndex = SummonControl__getFriendPointIndex(v22, v20);
    if ( FriendPointIndex )
      goto LABEL_17;
  }
}


void __fastcall SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *assetPath; // x20
  PartyOrganizationUtility_o *p_bannerAssetData; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B128F3 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B128F3 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (PartyOrganizationUtility_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_1BCA784(p_bannerAssetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  int32_t shopIdIdx; // w24
  Il2CppObject *p_obj; // x27
  GachaDrawRequest_o *v30; // x19
  __int64 v31; // x8
  System_String_o *v32; // x29
  unsigned __int64 v33; // x22
  int32_t v34; // w28
  System_String_o *v35; // x0
  System_String_o *selectBonusListData; // x28
  int32_t ticketItemId; // [xsp+14h] [xbp-6Ch]
  int32_t warId; // [xsp+18h] [xbp-68h]
  int32_t gachaTime; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B12939 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_GachaDrawRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SummonControl_callbackGachaDraw__, v12, v13);
    sub_1BCA7E0(&StringLiteral_174/*" : "*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B12939 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
  NetworkManager_ResultCallbackFunc___ctor(v22, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v22,
                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
  v30 = (GachaDrawRequest_o *)maskObject;
  ticketItemId = gachaParamData->fields.ticketItemId;
  if ( storyAdjustIds )
  {
    v31 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v31 )
    {
      if ( (int)v31 >= 1 )
      {
        v32 = (System_String_o *)StringLiteral_1/*""*/;
        v33 = 0LL;
        v34 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v33 >= (unsigned int)v31 )
            sub_1BCAA44(maskObject, method);
          v35 = System_Int32__ToString(v34, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_62412480(
                                                     v32,
                                                     v35,
                                                     (System_String_o *)StringLiteral_174/*" : "*/,
                                                     0LL);
          LODWORD(v31) = storyAdjustIds->max_length;
          ++v33;
          v32 = (System_String_o *)maskObject;
          v34 += 4;
        }
        while ( (__int64)v33 < (int)v31 );
      }
    }
  }
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
    selectBonusListData = JsonManager__toJson(p_obj, 0, 0, 0LL);
  }
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v30) )
LABEL_22:
    sub_1BCAA3C(maskObject, method);
  GachaDrawRequest__beginRequest(
    v30,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  MissionNotifyManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_String_o *MainBgmName; // x20
  CommonUI_o *v25; // x20
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B12956 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&SoundManager_TypeInfo, v18, v19);
    byte_4B12956 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MissionNotifyManager__EndPause(Instance, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v22);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v23);
  SoundManager__playBgm(MainBgmName, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.maskBgObject;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.maskObject;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21);
  if ( !v25 )
    goto LABEL_27;
  CommonUI__maskFadein(v25, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0LL, 37, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v26);
  SummonControl__setUserResourceDisp(this, v27);
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
    SummonControl__progTutorial(this, v28);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v29);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_27:
    sub_1BCAA3C(Instance, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v32.fields._current )
      sub_1BCAA3C(0LL, v30);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v32.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v31);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userGameEntity, (int64_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  SummonControl__resetStoneInfo(this, v10);
}


void __fastcall SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4B12950 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__resetResultList_b__261_0__, v8, v9);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v10, v11);
    byte_4B12950 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)v14;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__261_0__, 0LL);
  if ( !v19 )
LABEL_13:
    sub_1BCAA3C(Instance, v13);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_4B1295B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&StringLiteral_3074/*"BONUS_SELECT_GACHA"*/, v8, v9);
    byte_4B1295B = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0LL )
    {
LABEL_14:
      sub_1BCAA3C(Master_object, v10);
    }
    if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_14;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3074/*"BONUS_SELECT_GACHA"*/, 0LL);
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
          sub_1BCAA44(gachaMst, method);
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
      sub_1BCAA3C(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (PartyOrganizationUtility_c *)v11;
    sub_1BCA784(p_useGachaData, v11, v4, v5, v6, v7, v8, v9);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *bannerAssetData; // x0
  int v10; // w8
  _DWORD *v11; // x20
  unsigned int v12; // w23
  char *v13; // x8
  UnityEngine_GameObject_o *v14; // x21
  __int64 v15; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_4B128FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObjectList_GameObject___, searchTarget, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B128FE = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_2EF4FF8 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_17;
  v10 = *((_DWORD *)bannerAssetData + 6);
  v11 = bannerAssetData;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1BCAA44(bannerAssetData, searchTarget);
      v13 = (char *)&v11[2 * v12];
      v14 = (UnityEngine_GameObject_o *)*((_QWORD *)v13 + 4);
      if ( !v14 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v13 + 4),
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      bannerAssetData = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)bannerAssetData & 1) != 0 )
      {
        if ( !Component_object )
          break;
        bannerAssetData = UIAtlas__GetSprite((UIAtlas_o *)Component_object, searchTarget, 0LL);
        if ( bannerAssetData )
          return v14;
      }
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        return 0LL;
    }
LABEL_17:
    sub_1BCAA3C(bannerAssetData, searchTarget);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SummonControl__searchExtraGroupIdIndex(
        SummonControl_o *this,
        int32_t extraGroupId,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *vaildGachaList; // x0
  int32_t v16; // w22
  int32_t v17; // w23
  Il2CppObject *Entity; // x0
  int monitor; // w8
  int klass; // w8

  if ( (byte_4B12959 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, *(_QWORD *)&extraGroupId, *(_QWORD *)&gachaId);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12959 = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_18:
    sub_1BCAA3C(vaildGachaList, *(_QWORD *)&extraGroupId);
  v16 = 0;
  while ( v16 < *((_DWORD *)vaildGachaList + 6) )
  {
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v16,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_18;
    if ( *((_DWORD *)vaildGachaList + 13) == 3 )
      break;
    vaildGachaList = this->fields.vaildGachaList;
    if ( !vaildGachaList )
      goto LABEL_18;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v16,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_18;
    v17 = *((_DWORD *)vaildGachaList + 4);
    vaildGachaList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !vaildGachaList )
      goto LABEL_18;
    vaildGachaList = DataManager__GetMasterData_object_(
                       (DataManager_o *)vaildGachaList,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !vaildGachaList )
      goto LABEL_18;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)vaildGachaList,
               v17,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    if ( !Entity )
      return -1;
    monitor = (int)Entity[4].monitor;
    if ( monitor && monitor == extraGroupId )
      return v16;
    klass = (int)Entity[1].klass;
    if ( klass )
    {
      if ( klass == gachaId )
        return v16;
    }
    vaildGachaList = this->fields.vaildGachaList;
    ++v16;
    if ( !vaildGachaList )
      goto LABEL_18;
  }
  return -1;
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
    sub_1BCAA3C(indexPanel, method);
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
    sub_1BCAA44(indexPanel, method);
  v14 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}


void __fastcall SummonControl__setChangeSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Item; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  SummonInfoControl_ClickDelegate_o *v26; // x22
  SummonInfoControl_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x21

  if ( (byte_4B12909 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&SummonInfoControl_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__setChangeSummonInfo_b__176_0__, v8, v9);
    sub_1BCA7E0(&Method_SummonControl_exeSummon__, v10, v11);
    byte_4B12909 = 1;
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
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentGachaInfo, (int64_t)Item, v14, v15, v16, v17, v18, v19);
  SummonControl__setResourceInfo(this, v20);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v26 = (SummonInfoControl_ClickDelegate_o *)sub_1BCAA2C(SummonInfoControl_ClickDelegate_TypeInfo, v23, v24, v25);
  SummonInfoControl_ClickDelegate___ctor(v26, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v26, 0LL),
        v27 = this->fields.summonInfoCtr,
        v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30),
        System_Action___ctor(v31, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__176_0__, 0LL),
        !v27) )
  {
LABEL_8:
    sub_1BCAA3C(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v27, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4B1290E & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1BCA7E0(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                *(_QWORD *)&currentIdx,
                                method);
    byte_4B1290E = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&currentIdx);
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
    goto LABEL_10;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.currentResourceInfo;
  if ( !titleInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0LL);
  titleInfo = (UnityEngine_Component_o *)this->fields.detailInfo;
  if ( !titleInfo )
    goto LABEL_10;
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
LABEL_10:
    sub_1BCAA3C(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1BCAA3C(0LL, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  TerminalPramsManager_c *v9; // x8
  int SummonId_k__BackingField; // w20
  int32_t GachaIdFromSelectedBannerEntity; // w0
  TerminalPramsManager_c *v12; // x0
  void *bannerInfoList; // x0
  int v14; // w22
  int32_t v15; // w21
  __int64 v16; // x1
  __int64 v17; // x8
  SummonControl_o *v18; // x0
  int32_t v19; // w1

  if ( (byte_4B1290C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B1290C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B1299D )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1299D = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_SummonId_k__BackingField <= 0 )
  {
    GachaIdFromSelectedBannerEntity = SummonControl__GetGachaIdFromSelectedBannerEntity((SummonControl_o *)v8, method);
    v9 = TerminalPramsManager_TypeInfo;
    SummonId_k__BackingField = GachaIdFromSelectedBannerEntity;
  }
  else
  {
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8, method);
    if ( !byte_4B1299D )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
      byte_4B1299D = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v9 = TerminalPramsManager_TypeInfo;
    }
    SummonId_k__BackingField = v9->static_fields->_SummonId_k__BackingField;
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9, method);
  if ( !byte_4B1299E )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B1299E = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_SummonId_k__BackingField = 0;
  bannerInfoList = this->fields.bannerInfoList;
  if ( this->fields.summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_37;
  }
  else if ( bannerInfoList )
  {
    v14 = *((_DWORD *)bannerInfoList + 6);
    if ( v14 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        bannerInfoList = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)bannerInfoList,
                           v15,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !bannerInfoList )
LABEL_35:
          sub_1BCAA3C(bannerInfoList, v16);
        v17 = *((_QWORD *)bannerInfoList + 11);
        if ( !v17 )
        {
          v19 = 1;
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v17 + 52) == this->fields.summonType
          && (SummonId_k__BackingField < 1 || *(_DWORD *)(v17 + 16) == SummonId_k__BackingField) )
        {
          break;
        }
        if ( v14 == ++v15 )
          goto LABEL_37;
        bannerInfoList = this->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_35;
      }
      v19 = *((_DWORD *)bannerInfoList + 24);
LABEL_41:
      v18 = this;
      goto LABEL_42;
    }
LABEL_37:
    v18 = this;
    v19 = 0;
LABEL_42:
    SummonControl__setDispRePosition(v18, v19, v2);
  }
}


void __fastcall SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  Il2CppObject *Item; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v18; // x25
  UIWidget_o *v19; // x22
  UIWidget_o *v20; // x23
  UIWidget_o *v21; // x20
  UIWidget_o *v22; // x24
  SummonControl_c *v23; // x8
  UIWidget_o *v24; // x21
  float COLOR_VAL; // s8
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1290A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4, v5);
    sub_1BCA7E0(&SummonControl_TypeInfo, v6, v7);
    byte_4B1290A = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentGachaInfo, (int64_t)Item, v10, v11, v12, v13, v14, v15);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v18 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v19 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v20 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v21 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v22 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v23 = SummonControl_TypeInfo;
  v24 = (UIWidget_o *)vaildGachaList;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, method);
    v23 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v23->static_fields->COLOR_VAL;
  if ( isPointSummon )
  {
    if ( !v18 )
      goto LABEL_34;
    v26.fields.a = 1.0;
    v26.fields.r = v23->static_fields->COLOR_VAL;
    v26.fields.g = v26.fields.r;
    v26.fields.b = v26.fields.r;
    UIWidget__set_color(v18, v26, 0LL);
    if ( !v19 )
      goto LABEL_34;
    v27.fields.a = 1.0;
    v27.fields.r = COLOR_VAL;
    v27.fields.g = COLOR_VAL;
    v27.fields.b = COLOR_VAL;
    UIWidget__set_color(v19, v27, 0LL);
    if ( !v22 )
      goto LABEL_34;
    v28.fields.a = 1.0;
    v28.fields.r = COLOR_VAL;
    v28.fields.g = COLOR_VAL;
    v28.fields.b = COLOR_VAL;
    UIWidget__set_color(v22, v28, 0LL);
    if ( !v24 )
      goto LABEL_34;
    v29.fields.a = 1.0;
    v29.fields.r = COLOR_VAL;
    v29.fields.g = COLOR_VAL;
    v29.fields.b = COLOR_VAL;
    UIWidget__set_color(v24, v29, 0LL);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0LL);
    if ( !v20 )
      goto LABEL_34;
    v30.fields.r = 1.0;
    v30.fields.g = 1.0;
    v30.fields.b = 1.0;
    v30.fields.a = 1.0;
    UIWidget__set_color(v20, v30, 0LL);
    if ( !v21 )
      goto LABEL_34;
    v31.fields.r = 1.0;
    v31.fields.g = 1.0;
    v31.fields.b = 1.0;
    v31.fields.a = 1.0;
    UIWidget__set_color(v21, v31, 0LL);
  }
  else
  {
    if ( !v20 )
      goto LABEL_34;
    v32.fields.a = 1.0;
    v32.fields.r = v23->static_fields->COLOR_VAL;
    v32.fields.g = v32.fields.r;
    v32.fields.b = v32.fields.r;
    UIWidget__set_color(v20, v32, 0LL);
    if ( !v21 )
      goto LABEL_34;
    v33.fields.a = 1.0;
    v33.fields.r = COLOR_VAL;
    v33.fields.g = COLOR_VAL;
    v33.fields.b = COLOR_VAL;
    UIWidget__set_color(v21, v33, 0LL);
    if ( !v18 )
      goto LABEL_34;
    v34.fields.r = 1.0;
    v34.fields.g = 1.0;
    v34.fields.b = 1.0;
    v34.fields.a = 1.0;
    UIWidget__set_color(v18, v34, 0LL);
    if ( !v19 )
      goto LABEL_34;
    v35.fields.r = 1.0;
    v35.fields.g = 1.0;
    v35.fields.b = 1.0;
    v35.fields.a = 1.0;
    UIWidget__set_color(v19, v35, 0LL);
    if ( !v22 )
      goto LABEL_34;
    v36.fields.r = 1.0;
    v36.fields.g = 1.0;
    v36.fields.b = 1.0;
    v36.fields.a = 1.0;
    UIWidget__set_color(v22, v36, 0LL);
    if ( !v24 )
      goto LABEL_34;
    v37.fields.r = 1.0;
    v37.fields.g = 1.0;
    v37.fields.b = 1.0;
    v37.fields.a = 1.0;
    UIWidget__set_color(v24, v37, 0LL);
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
    sub_1BCAA3C(vaildGachaList, method);
  }
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B1294E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B1294E = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0LL),
        SummonControl__showSummonResultInfo(this, v5),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(summonResultInfo, method);
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

  if ( (byte_4B1290B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx, method);
    byte_4B1290B = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                sliderGrid,
                                                (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    sub_1BCAA3C(sliderGrid, *(_QWORD *)&idx);
  }
}


void __fastcall SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Transform_o *Time; // x0
  __int64 v33; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v35; // x2
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  UILabel_o *summonHelpLabel; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  TerminalPramsManager_c *v47; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  const MethodInfo *v55; // x1
  long double v56; // q0
  __int64 v57; // x0
  __int64 v58; // x0
  Il2CppObject *MasterData_object; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct GachaEntity_array *ListValidData; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  const MethodInfo *v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  __int64 v81; // x1
  UISprite_o *summonMBannerLineSprite; // x21
  __int64 v83; // x1
  System_String_o *assetPath; // x20
  __int64 v85; // x2
  __int64 v86; // x3
  System_String_o *v87; // x20
  AssetLoader_LoadEndDataHandler_o *v88; // x21
  __int64 v89; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B128F1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v8, v9);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16, v17);
    sub_1BCA7E0(&Method_SummonControl_LoadBannerEnd__, v18, v19);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_12507/*"SUMMON_HELP_MESSAGE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_13233/*"SummonBanners/DownloadSummonBanner"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_6481/*"FAIL_LOAD"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_20549/*"img_line_summon"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_20465/*"img_bg_banner"*/, v30, v31);
    byte_4B128F1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  SummonControl__setDispSummonInfo(this, 1, v35);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 37, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  this->fields.isDoneTutorial = 1;
  v36 = StringLiteral_13233/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13233/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetPath, v36, v37, v38, v39, v40, v41, v42);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v45);
  if ( !byte_4B1299B )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v45, v46);
    byte_4B1299B = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v45);
    v47 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v47->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  SummonControl__setUserResourceDisp(this, v55);
  v57 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
    v57 = sub_1C1C6BC(v56);
  v58 = *(_QWORD *)(*(_QWORD *)(v57 + 192) + 16LL);
  if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
    v58 = sub_1C1C6BC(v56);
  Time = **(UnityEngine_Transform_o ***)(v58 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.gachaMst,
    (int64_t)MasterData_object,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.useGachaData,
    (int64_t)ListValidData,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  SummonControl__checkValidGachaList(this, v73);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.vaildGachaList, 0LL, v74, v75, v76, v77, v78, v79);
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v81);
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20549/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_20465/*"img_bg_banner"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerScrollView;
  if ( !Time )
    goto LABEL_45;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0LL);
  assetPath = this->fields.assetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v83);
  if ( !AssetManager__isExistAssetStorage(assetPath, 0LL) )
  {
    Time = (UnityEngine_Transform_o *)this->fields.fsm;
    if ( Time )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6481/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_45:
    sub_1BCAA3C(Time, v33);
  }
  v87 = this->fields.assetPath;
  v88 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v33, v85, v86);
  AssetLoader_LoadEndDataHandler___ctor(v88, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v89);
  AssetManager__loadAssetStorage(v87, v88, 1, 0LL);
}


void __fastcall SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x1
  SummonResultComponent_o *Instance; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  CommonUI_o *v22; // x20
  SummonControl___c_c *v23; // x8
  System_Action_o *_9__253_0; // x21
  Il2CppObject *v25; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B1294A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SummonControl___c__setSummonResultList_b__253_0__, v10, v11);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_9432/*"NO_EXIST"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12293/*"SHOW_TALK"*/, v16, v17);
    byte_4B1294A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(107, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v18);
    if ( !TutorialFlag__Get_38402052(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v18) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = (CommonUI_o *)Instance;
      v23 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v18);
        v23 = SummonControl___c_TypeInfo;
      }
      _9__253_0 = v23->static_fields->__9__253_0;
      if ( !_9__253_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23, v18);
          v23 = SummonControl___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__253_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v20, v21);
        System_Action___ctor(_9__253_0, v25, Method_SummonControl___c__setSummonResultList_b__253_0__, 0LL);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__253_0 = _9__253_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__253_0,
          (int64_t)_9__253_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      if ( !v22 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_30792208(v22, 2, 108, _9__253_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12293/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9432/*"NO_EXIST"*/, 0LL);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1BCAA3C(Instance, v18);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *bannerInfoList; // x0
  int32_t v12; // w21
  int32_t v13; // w21
  bool v14; // w20

  v3 = isEnable;
  if ( (byte_4B128EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__, v9, v10);
    byte_4B128EC = 1;
  }
  if ( !this->fields.isDoneTutorial )
    v3 &= this->fields.tutorialKind != 2;
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_22;
  v12 = 0;
  while ( v12 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v12,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
      ++v12;
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
  v13 = 0;
  while ( v13 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v13,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerInfoList;
      ++v13;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_22;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !bannerInfoList
    || (v14 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v14, 0LL),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(bannerInfoList, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v14, 0LL);
}


void __fastcall SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *Master_object; // x0
  __int64 v25; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_int__o *v33; // x22
  __int64 v34; // x1
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UILabel_o *currentFragmentNumLb; // x20
  Il2CppObject *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B128F6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TblUserMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SummonControl__setUserResourceDisp_b__152_0__, v12, v13);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v14, v15);
    byte_4B128F6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v28, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v30, v31, v32);
  System_Action_int____ctor(v33, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__152_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v33, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v36, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v37, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v39, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v40, 0LL)) == 0LL)
    || (v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        GameObjectExtensions__SetLocalPositionX(v41, -179.0, 0LL),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v42, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(Master_object, v25);
  }
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v43, 179.0, 0LL);
}


void __fastcall SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void __fastcall SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Action_o *v31; // x21

  if ( (byte_4B1292C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BonusSelectSummonAssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl__showConfirmDlg_b__212_0__, v14, v15);
    byte_4B1292C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v24 = (BonusSelectSummonAssetManager_o *)sub_1BCAA2C(BonusSelectSummonAssetManager_TypeInfo, v20, v21, v22);
        BonusSelectSummonAssetManager___ctor(v24, 0LL);
        this->fields.bonusSelectAssetManager = v24;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.bonusSelectAssetManager,
          (int64_t)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__212_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v31, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(Master_object, v17);
  }
  SummonControl__showConfirmDlg_33711296(this, 1, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_33711296(
        SummonControl_o *this,
        bool beforeDetailFlag,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w23
  struct GachaRqParamData_o *v33; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x20
  int32_t *v35; // x22
  int32_t needStone; // w28
  int32_t haveStone; // w23
  int32_t haveChargeStone; // w22
  int v39; // w29
  int v40; // w24
  struct GachaRqParamData_o *v41; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v46; // x24
  const MethodInfo *v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  const MethodInfo *v50; // x3
  System_Int32_array *ScriptIntArray; // x24
  __int64 v52; // x2
  __int64 v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x2
  struct SummonInfoControl_o *v56; // x8
  const MethodInfo *v57; // x1
  struct SummonInfoControl_o *v58; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v60; // x9
  struct GachaRqParamData_o *v61; // x8
  GachaDetailEntity_o *v62; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v66; // x20
  const MethodInfo *v67; // x3
  __int64 v68; // x2
  __int64 v69; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v70; // x0
  const MethodInfo *v71; // x3
  System_Int32_array *v72; // x23
  __int64 v73; // x2
  __int64 v74; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v75; // x0
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x2
  struct GachaRqParamData_o *v78; // x8
  int32_t v79; // w21
  struct GachaRqParamData_o *v80; // x8
  Il2CppObject *v81; // x0
  Il2CppObject *v82; // x22
  SummonConfirmDlgComponent_o *v83; // x22
  int32_t v84; // w26
  int32_t v85; // w27
  int32_t v86; // w28
  struct GachaRqParamData_o *v87; // x8
  __int64 v88; // x1
  GachaDetailEntity_o *v89; // x24
  struct GachaRqParamData_o *v90; // x8
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  const MethodInfo *v95; // x3
  __int64 v96; // x2
  __int64 v97; // x3
  const MethodInfo *v98; // x3
  System_Int32_array *v99; // x25
  int32_t ScriptInt; // w0
  __int64 v101; // x2
  __int64 v102; // x3
  const MethodInfo *v103; // x3
  SummonControl_o *v104; // x0
  const MethodInfo *v105; // x2
  int32_t v106; // w21
  int afterChargeStoneNum; // w26
  SummonConfirmDlgComponent_o *v108; // x24
  struct SummonInfoControl_o *v109; // x9
  struct GachaRqParamData_o *v110; // x8
  struct GachaRqParamData_o *v111; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v113; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v115; // x21
  struct SummonInfoControl_o *v116; // x10
  struct GachaRqParamData_o *v117; // x9
  SummonControl_o *v118; // x8
  System_String_o *v119; // x27
  int32_t v120; // w25
  int32_t v121; // w28
  int32_t v122; // w29
  SummonControl_o *v123; // x8
  int v124; // w25
  __int64 v125; // x2
  __int64 v126; // x3
  struct PlayMakerFSM_o *summonCloseAt; // x28
  struct GachaRqParamData_o *v128; // x8
  int32_t gachaId; // w27
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  struct SummonInfoControl_o *summonInfoCtr; // x9
  SummonControl_o *v132; // x8
  int32_t v133; // w26
  int32_t haveFreeStone; // w27
  SummonControl_o *v135; // x8
  int v136; // w24
  int v137; // w29
  struct GachaRqParamData_o *v138; // x8
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v140; // x8
  System_String_o *title; // [xsp+68h] [xbp-88h]
  int32_t num; // [xsp+70h] [xbp-80h]
  int32_t numa; // [xsp+70h] [xbp-80h]
  int32_t v144; // [xsp+74h] [xbp-7Ch]
  int32_t payGachaPrice; // [xsp+74h] [xbp-7Ch]
  _BOOL4 isAppendSummon; // [xsp+78h] [xbp-78h]
  System_String_o *m_CancellationTokenSource; // [xsp+78h] [xbp-78h]
  int v148; // [xsp+80h] [xbp-70h]
  int32_t v149; // [xsp+80h] [xbp-70h]
  int32_t v150; // [xsp+84h] [xbp-6Ch]
  int32_t v151; // [xsp+84h] [xbp-6Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v152; // [xsp+88h] [xbp-68h]
  bool HasFlag; // [xsp+88h] [xbp-68h]

  v4 = this;
  if ( (byte_4B1292D & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SummonControl_ConfirmMessageOpen__, v23, v24);
    sub_1BCA7E0(&Method_SummonControl_TryGetSelectBonusDataInfo__, v25, v26);
    sub_1BCA7E0(&Method_SummonControl_confirmResult__, v27, v28);
    this = (SummonControl_o *)sub_1BCA7E0(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v29, v30);
    byte_4B1292D = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_111;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_111;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v33 = v4->fields.gachaParamData;
  if ( !v33 )
    goto LABEL_111;
  if ( !this )
    goto LABEL_111;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v33->fields.gachaId,
                         0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_111;
  v35 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_111;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v35[24], v35[46], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v4->fields.needStone;
      haveStone = v4->fields.haveStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v39 = v4->fields.haveFreeStone - needStone;
      if ( v39 < 0 )
        v40 = v4->fields.haveFreeStone - needStone;
      else
        v40 = 0;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v41 = v4->fields.gachaParamData;
      if ( !v41 || !this )
        goto LABEL_111;
      v148 = v40;
      v150 = haveStone;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v41->fields.gachaId, 0LL);
      v46 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v43,
                                                          v44,
                                                          v45);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v47);
      if ( GachaDetailEntity )
      {
        v152 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                             SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                             beforeDetailFlag,
                                                             v48,
                                                             v49);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v152,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v50);
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
            v152 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 beforeDetailFlag,
                                                                 v52,
                                                                 v53);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v152,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v54);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v55);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
LABEL_105:
                SummonControl__BeforeConfirmMessageOpen(v4, (const MethodInfo *)beforeDetailFlag);
                return;
              }
            }
          }
        }
      }
      else
      {
        v152 = v46;
      }
      v111 = v4->fields.gachaParamData;
      if ( !v111 )
        goto LABEL_111;
      gachaTime = v111->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_95;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
      v113 = v4->fields.gachaParamData;
      if ( !v113 || !this )
        goto LABEL_111;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v113->fields.gachaId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity && (v115 = Entity, LODWORD(Entity[4].monitor)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_111;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)this,
               (int32_t)v115[4].monitor,
               0LL) == 9 )
          gachaTime = 2;
        else
          gachaTime = 1;
      }
      else
      {
        gachaTime = 1;
      }
LABEL_95:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( this )
      {
        confirmDlgInfo = v4->fields.confirmDlgInfo;
        this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this,
                                    v4->fields.currentIdx,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( this )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v132 = this;
            this = (SummonControl_o *)v4->fields.vaildGachaList;
            if ( this )
            {
              m_CancellationTokenSource = (System_String_o *)v132->fields.m_CancellationTokenSource;
              v133 = v4->fields.haveStone;
              haveFreeStone = v4->fields.haveFreeStone;
              numa = v4->fields.haveChargeStone;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v4->fields.currentIdx,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
              if ( this )
              {
                v135 = this;
                this = (SummonControl_o *)v4->fields.vaildGachaList;
                if ( this )
                {
                  v136 = v39;
                  v137 = BYTE1(v135->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
                  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v4->fields.currentIdx,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
                  if ( this )
                  {
                    v138 = v4->fields.gachaParamData;
                    if ( v138 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          m_CancellationTokenSource,
                          1,
                          payGachaPrice,
                          gachaTime,
                          v133,
                          haveFreeStone,
                          numa,
                          v150 - needStone,
                          v136 & ~(v136 >> 31),
                          v148 + haveChargeStone,
                          v152,
                          0,
                          v137 != 0,
                          (int64_t)this->fields.fsm,
                          0,
                          0LL,
                          0LL,
                          ListGachaExtraGift,
                          v138->fields.shopIdIdx,
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
      goto LABEL_111;
    case 3:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v56 = v4->fields.summonInfoCtr;
      if ( !v56 )
        goto LABEL_111;
      v4->fields.isDailyGacha = v56->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v35[62], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v57) )
        SummonControl__friendPointSummonConfirm(v4, v57);
      return;
    case 5:
      v58 = v4->fields.summonInfoCtr;
      if ( !v58 )
        goto LABEL_111;
      ticketNum = v58->fields.ticketNum;
      v60 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v60 )
        goto LABEL_111;
      v4->fields.afterTicketNum = ticketNum - v60->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v61 = v4->fields.gachaParamData;
      if ( !v61 || !this )
        goto LABEL_111;
      v62 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v61->fields.gachaId, 0LL);
      v66 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v63,
                                                          v64,
                                                          v65);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v66,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v67);
      if ( v62 )
      {
        v70 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                            beforeDetailFlag,
                                                            v68,
                                                            v69);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v70,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v71);
        v72 = GachaDetailEntity__GetScriptIntArray(v62, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v62, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v72 )
        {
          if ( (_DWORD)this == 1 )
          {
            v75 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                beforeDetailFlag,
                                                                v73,
                                                                v74);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v75,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v76);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v72, v77);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_105;
            }
          }
        }
      }
      v78 = v4->fields.gachaParamData;
      if ( !v78 )
        goto LABEL_111;
      v79 = v78->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
      v80 = v4->fields.gachaParamData;
      if ( !v80 || !this )
        goto LABEL_111;
      v81 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v80->fields.gachaId,
              (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v81 )
        goto LABEL_47;
      v82 = v81;
      if ( !LODWORD(v81[4].monitor) )
        goto LABEL_47;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_111;
      if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v82[4].monitor, 0LL) == 9 )
        ++v79;
LABEL_47:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      v83 = v4->fields.confirmDlgInfo;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this || !v83 )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v83,
        (System_String_o *)this->fields.m_CancellationTokenSource,
        v79,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v66,
        0LL);
      return;
    case 7:
      v84 = v4->fields.haveStone;
      v85 = v4->fields.needStone;
      v86 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v87 = v4->fields.gachaParamData;
      if ( !v87 || !this )
        goto LABEL_111;
      v89 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v87->fields.gachaId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v88);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
      v90 = v4->fields.gachaParamData;
      if ( !v90 )
        goto LABEL_111;
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v90->fields.gachaId,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_111;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                               SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                               v91,
                                                               v92,
                                                               v93);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v95);
      if ( v89 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 beforeDetailFlag,
                                                                 v96,
                                                                 v97);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v98);
        v99 = GachaDetailEntity__GetScriptIntArray(v89, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v89, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v99 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                     SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                     beforeDetailFlag,
                                                                     v101,
                                                                     v102);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v103);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v104, v99, v105) )
              goto LABEL_105;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_111;
      v106 = v84 - v85;
      afterChargeStoneNum = (v86 - v85) & ~((v86 - v85) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v108 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v109 = v4->fields.summonInfoCtr;
        if ( v109 )
        {
          v110 = v4->fields.gachaParamData;
          if ( v110 )
          {
            if ( v108 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v4->fields.confirmDlgInfo,
                (int32_t)this,
                v109->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v106,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                ListGachaExtraGift,
                v110->fields.shopIdIdx,
                0LL);
              return;
            }
          }
        }
        goto LABEL_111;
      }
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      v116 = v4->fields.summonInfoCtr;
      if ( !v116 )
        goto LABEL_111;
      v117 = v4->fields.gachaParamData;
      if ( !v117 )
        goto LABEL_111;
      v118 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      v119 = (System_String_o *)v118->fields.m_CancellationTokenSource;
      v120 = v116->fields.payGachaPrice;
      v121 = v117->fields.gachaTime;
      v149 = v4->fields.haveChargeStone;
      v151 = v4->fields.haveStone;
      v122 = v4->fields.haveFreeStone;
      isAppendSummon = v117->fields.isAppendSummon;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      v123 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      num = v121;
      v144 = v120;
      v124 = BYTE1(v123->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      summonCloseAt = this->fields.fsm;
      title = v119;
      if ( HasFlag )
      {
        v128 = v4->fields.gachaParamData;
        if ( !v128 )
          goto LABEL_111;
        gachaId = v128->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1BCAA2C(
                                                                                    BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                                                    beforeDetailFlag,
                                                                                    v125,
                                                                                    v126);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v140 = v4->fields.gachaParamData;
      if ( !v140 || !v108 )
LABEL_111:
        sub_1BCAA3C(this, beforeDetailFlag);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v108,
        title,
        7,
        v144,
        num,
        v151,
        v122,
        v149,
        v106,
        v122,
        afterChargeStoneNum,
        callback,
        isAppendSummon,
        v124 != 0,
        (int64_t)summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        ListGachaExtraGift,
        v140->fields.shopIdIdx,
        0LL);
      return;
    default:
      return;
  }
}


void __fastcall SummonControl__showHelpImg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v17; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w21
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  int32_t monitor; // w22
  _QWORD *v28; // x8
  _DWORD *v29; // x8
  int32_t v30; // w22
  int32_t klass; // w23
  int64_t klass_low; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  int64_t v42; // x1
  Il2CppClass **v43; // x0
  int32_t v44; // w22

  if ( (byte_4B12906 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v14, v15);
    byte_4B12906 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v17 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v17, 0LL);
    if ( EventTutorialEntity )
    {
      v22 = (System_Collections_Generic_List_object__o *)EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                             v19,
                                                             v20,
                                                             v21);
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v22->fields._size >= 1 )
        {
          v24 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v22,
                     v24,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v22,
                       v24,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
              if ( !Item )
                break;
              monitor = (int32_t)Item[1].monitor;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v26);
              if ( !TutorialFlag__GetGachaFlg(monitor, 0LL) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v22,
                         v24,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v22,
                         v24,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                v28 = Item[3].monitor;
                if ( !v28 )
                  break;
                if ( v28[3] )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v22,
                           v24,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v29 = Item[3].monitor;
                  if ( !v29 )
                    break;
                  if ( !v29[6] )
                    sub_1BCAA44(Item, v26);
                  v30 = v29[8];
                }
                else
                {
LABEL_23:
                  v30 = 0;
                }
                Item = System_Collections_Generic_List_object___get_Item(
                         v22,
                         v24,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v22,
                         v24,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v26);
                if ( CondType__IsOpen(klass, v30, klass_low, 0, 0LL, 0LL) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v22,
                           v24,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v23 )
                    break;
                  items = v23->fields._items;
                  v40 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v23->fields._version;
                  if ( !items )
                    break;
                  size = v23->fields._size;
                  v42 = (int64_t)Item;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v23,
                      Item,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v43 = &items->obj.klass + size;
                    v23->fields._size = size + 1;
                    v43[4] = (Il2CppClass *)v42;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), v42, v33, v34, v35, v36, v37, v38);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v22,
                           v24,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v44 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v26);
                  TutorialFlag__SetGachaFlg(v44, 0LL);
                }
              }
            }
            if ( ++v24 >= v22->fields._size )
              goto LABEL_39;
          }
          sub_1BCAA3C(Item, v26);
        }
LABEL_39:
        EventTutorialMaster__TutorialChainWithoutCheckStart(
          (System_Collections_Generic_List_EventTutorialEntity__o *)v23,
          0LL,
          0LL);
      }
    }
  }
}


void __fastcall SummonControl__showServantDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *_38402052; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  CommonUI_o *v26; // x20
  SummonControl___c_c *v27; // x8
  System_Action_o *_9__248_0; // x21
  Il2CppObject *v29; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v39; // x8
  struct GachaInfos_array *v40; // x8
  __int64 v41; // x9
  GachaInfos_o *v42; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  ServantStatusDialog_EndDelegate_o *v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  struct GachaInfos_array *v51; // x8
  __int64 v52; // x9
  GachaInfos_o *v53; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v55; // x20
  ServantStatusDialog_EndDelegate_o *v56; // x22

  if ( (byte_4B12946 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SummonControl_DialogCallBack__, v14, v15);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SummonControl___c__showServantDialog_b__248_0__, v18, v19);
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v20, v21);
    byte_4B12946 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  _38402052 = (Il2CppObject *)TutorialFlag__Get_38402052(107, 0LL);
  if ( ((unsigned __int8)_38402052 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v23);
    _38402052 = (Il2CppObject *)TutorialFlag__Get_38402052(108, 0LL);
    if ( ((unsigned __int8)_38402052 & 1) == 0 )
    {
      _38402052 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v23);
      if ( ((unsigned __int8)_38402052 & 1) != 0 )
      {
        _38402052 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v26 = (CommonUI_o *)_38402052;
        v27 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v23);
          v27 = SummonControl___c_TypeInfo;
        }
        _9__248_0 = v27->static_fields->__9__248_0;
        if ( !_9__248_0 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27, v23);
            v27 = SummonControl___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__248_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
          System_Action___ctor(_9__248_0, v29, Method_SummonControl___c__showServantDialog_b__248_0__, 0LL);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__248_0 = _9__248_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__248_0,
            (int64_t)_9__248_0,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        if ( !v26 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_30792208(v26, 2, 108, _9__248_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
LABEL_35:
    sub_1BCAA44(_38402052, v23);
  v39 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v39 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v39->fields.type, 0LL) )
  {
    _38402052 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_38402052 )
      goto LABEL_34;
    _38402052 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_38402052,
                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v40 = this->fields.gachaResInfoList;
    if ( !v40 )
      goto LABEL_34;
    v41 = this->fields.getSvtIdx;
    if ( (unsigned int)v41 < v40->max_length )
    {
      v42 = v40->m_Items[v41];
      if ( v42 )
      {
        if ( _38402052 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_38402052,
                     v42->fields.userSvtId,
                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v48 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v45,
                                                       v46,
                                                       v47);
          ServantStatusDialog_EndDelegate___ctor(v48, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_30778960(
              (CommonUI_o *)Instance,
              0,
              (UserCommandCodeEntity_o *)Entity,
              v48,
              0LL,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      sub_1BCAA3C(_38402052, v23);
    }
    goto LABEL_35;
  }
  _38402052 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = this->fields.gachaResInfoList;
  if ( !v51 )
    goto LABEL_34;
  v52 = this->fields.getSvtIdx;
  if ( (unsigned int)v52 >= v51->max_length )
    goto LABEL_35;
  v53 = v51->m_Items[v52];
  if ( !v53 )
    goto LABEL_34;
  userSvtId = v53->fields.userSvtId;
  v55 = (CommonUI_o *)_38402052;
  v56 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v23, v49, v50);
  ServantStatusDialog_EndDelegate___ctor(v56, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v55 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_30775636(v55, 6, userSvtId, v56, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  StonePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1291E & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SummonControl_endPurchaseStone__, v6, v7);
    byte_4B1291E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(StonePurchaseMenu_CallbackFunc_TypeInfo, v9, v10, v11);
  StonePurchaseMenu_CallbackFunc___ctor(v12, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v12, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1293F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__showSummonEffect_b__236_0__, v8, v9);
    byte_4B1293F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__236_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v11; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4B12949 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl__showSummonResultInfo_b__252_0__, v8, v9);
    byte_4B12949 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_24;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 0, 0LL, 37, 0LL);
  }
  else
  {
    titleInfo = (TitleInfoControl_o *)this->fields.maskBgObject;
    if ( !titleInfo )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_24;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_24;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0LL, 37, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_24;
    TitleInfoControl__setBackBtnSprite_37887988(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13);
        v17 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
      v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__252_0__, 0LL);
      if ( !Instance )
        goto LABEL_24;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v19, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v11);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_24;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo )
    goto LABEL_24;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_24;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)titleInfo, 0LL) )
    return;
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL )
  {
LABEL_24:
    sub_1BCAA3C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4B12917 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl_endPurchaseSvtEqFrame__, v8, v9);
    sub_1BCA7E0(&Method_SummonControl_resetStoneInfo__, v10, v11);
    byte_4B12917 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                          ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo,
                                                          v13,
                                                          v14,
                                                          v15);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v21, v22);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v16, v20, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ServantFramePurchaseMenu_CallbackFunc_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4B12915 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonControl_endPurchaseSvtFrame__, v8, v9);
    sub_1BCA7E0(&Method_SummonControl_resetStoneInfo__, v10, v11);
    byte_4B12915 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                     ServantFramePurchaseMenu_CallbackFunc_TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v21, v22);
  CommonUI__OpenServantFramePurchaseMenu((CommonUI_o *)Instance, v16, v20, 0LL);
}


void __fastcall SummonControl__showSvtTalk(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v32; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  DataManager_o *v36; // x24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v38; // x22
  int32_t v39; // w24
  ServantVoiceEntity_o *v40; // x0
  System_String_o *v41; // x0
  System_String_o *summonScriptId; // x23
  Il2CppObject *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x25
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  ServantAssetArgs_o *v51; // x23
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_o *v64; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B12943 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&ServantAssetArgs_TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SummonControl__showSvtTalk_b__243_0__, v22, v23);
    sub_1BCA7E0(&Method_SummonControl_close__, v24, v25);
    sub_1BCA7E0(&StringLiteral_3584/*"CLICK_OK"*/, v26, v27);
    byte_4B12943 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_41;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1BCAA44(Instance, v29);
  v32 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v32 )
    goto LABEL_41;
  userSvtId = v32->fields.userSvtId;
  objectId = v32->fields.objectId;
  limitCount = v32->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v36 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v36,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_41;
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !MasterData_object )
      goto LABEL_41;
    if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity((ServantVoiceMaster_o *)MasterData_object, objectId, 0LL) )
      goto LABEL_17;
  }
  else
  {
LABEL_16:
    if ( entity && !ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL)
      || SvtType__IsCommandCode(v32->fields.type, 0LL) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3584/*"CLICK_OK"*/, 0LL);
        return;
      }
      goto LABEL_41;
    }
  }
  Instance = (DataManager_o *)this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_41;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  if ( userSvtId < 1 )
  {
    v38 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v36,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    v38 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_object )
LABEL_41:
    sub_1BCAA3C(Instance, v29);
  v39 = (int)Instance;
  v40 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v40 && (v41 = ServantVoiceEntity__GetSummonScriptId(v40, v39, 0LL)) != 0LL )
  {
    summonScriptId = v41;
    v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__243_0__, 0LL);
    if ( !v43 )
      goto LABEL_41;
    ScriptManager__PlayGacha_42157540(
      (ScriptManager_o *)v43,
      (UserServantEntity_o *)v38,
      objectId,
      limitCount,
      0,
      1,
      v47,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v51 = (ServantAssetArgs_o *)sub_1BCAA2C(ServantAssetArgs_TypeInfo, v48, v49, v50);
      ServantAssetArgs___ctor_44093352(v51, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v51;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.battleAssetArgs,
        (int64_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v58);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
    System_Action___ctor(v64, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v60 )
      goto LABEL_41;
    ScriptManager__PlayGacha_42157540(
      (ScriptManager_o *)v60,
      (UserServantEntity_o *)v38,
      objectId,
      limitCount,
      0,
      1,
      v64,
      0,
      0,
      0LL,
      0LL);
  }
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__170___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__170__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v8 = this;
  if ( (byte_4B12984 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method, v2);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B12984 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(spring_5__2, 0LL, 0LL) )
      {
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL)) == 0LL)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0LL),
              !summonMBannerCenterChild) )
        {
LABEL_22:
          sub_1BCAA3C(this, method);
        }
        UICenterOnChild__CenterOn_47224044(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v8->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields._spring_5__2,
      (int64_t)Component_object,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v22 = (UnityEngine_Object_o *)v8->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v23, v24, v25, v26, v27, v28);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._spring_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_22;
    goto LABEL_9;
  }
  return 0;
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__170__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__170__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__170__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__170__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__245___ctor(
        SummonControl__WaitBattleChrLoad_d__245_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__245__MoveNext(
        SummonControl__WaitBattleChrLoad_d__245_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  PlayMakerFSM_o *fsm; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B12985 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3584/*"CLICK_OK"*/, v7, v8);
    byte_4B12985 = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    this->fields._wait_5__2 = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)wait_5__2, v20, v21, v22, v23, v24, v25);
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
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v19);
    ServantAssetLoadManager__unloadServant(battleAssetArgs, 0LL);
    _4__this->fields.battleAssetArgs = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.battleAssetArgs, 0LL, v30, v31, v32, v33, v34, v35);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1BCAA3C(fsm, v19);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3584/*"CLICK_OK"*/, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__245__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__245_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__245__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__245_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SummonControl__WaitBattleChrLoad_d__245_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__245__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__245_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__245__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__245_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1297E & 1) == 0 )
  {
    sub_1BCA7E0(&SummonControl___c_TypeInfo, v1, v2);
    byte_4B1297E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SummonControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___BonusSelectServantSelectDialog_b__293_1(
        SummonControl___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12980 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B12980 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___exeFormation_b__145_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0LL);
}


void __fastcall SummonControl___c___openAfterSummonInfo_b__144_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


int32_t __fastcall SummonControl___c___openSvtEqInfo_b__146_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__253_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__212_1(SummonControl___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1297F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1297F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___showServantDialog_b__248_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__236_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__252_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c__DisplayClass146_0___ctor(
        SummonControl___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass146_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass146_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *Request_object; // x0
  __int64 v15; // x1
  int32_t v16; // w20
  int32_t v17; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_4B12981 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_3552/*"CLEAR_TUTORIAL"*/, v12, v13);
    byte_4B12981 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_21;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0LL);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_21;
  v16 = 0;
  while ( v16 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v16,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Request_object )
      goto LABEL_21;
    if ( *((_DWORD *)Request_object + 6) != 1 )
    {
      Request_object = this->fields.tutoList;
      if ( !Request_object )
        goto LABEL_21;
      Request_object = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Request_object,
                         v16,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_21;
      v17 = *((_DWORD *)Request_object + 6);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v15);
      TutorialFlag__SetGachaFlg(v17, 0LL);
    }
    Request_object = this->fields.tutoList;
    ++v16;
    if ( !Request_object )
      goto LABEL_21;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0LL )
LABEL_21:
    sub_1BCAA3C(Request_object, v15);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3552/*"CLEAR_TUTORIAL"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass264_0___ctor(
        SummonControl___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass264_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl___c__DisplayClass264_0_o *v3; // x19
  struct SummonControl_o *_4__this; // x8

  v3 = this;
  if ( (byte_4B12982 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass264_0_o *)sub_1BCA7E0(&StringLiteral_5863/*"EXECUTE"*/, method, v2);
    byte_4B12982 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass264_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v3->fields.svtId,
        !this) )
  {
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5863/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass265_0___ctor(
        SummonControl___c__DisplayClass265_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass265_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass265_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl___c__DisplayClass265_0_o *v3; // x19
  struct SummonControl_o *_4__this; // x8

  v3 = this;
  if ( (byte_4B12983 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass265_0_o *)sub_1BCA7E0(&StringLiteral_5863/*"EXECUTE"*/, method, v2);
    byte_4B12983 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass265_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v3->fields.svtId,
        !this) )
  {
    sub_1BCAA3C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5863/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}