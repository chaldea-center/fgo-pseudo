void SummonControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct SummonControl_StaticFields *static_fields; // x0

  if ( (byte_596CAA6 & 1) == 0 )
  {
    sub_2213A60(&SummonControl_TypeInfo);
    sub_2213A60(&StringLiteral_3338/*"BonusSelectSummonSaveKey"*/);
    byte_596CAA6 = 1;
  }
  v7 = StringLiteral_3338/*"BonusSelectSummonSaveKey"*/;
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
}


void SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_int__int__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_int__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_596CAA5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GachaSubEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_2213A60(&StringLiteral_20665/*"gachaIds"*/);
    sub_2213A60(&StringLiteral_7160/*"FrequencyType"*/);
    byte_596CAA5 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_20665/*"gachaIds"*/;
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E9D8B0;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E9C110;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_E9D3A0;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  this->fields.DETAIL_SCRIPT_IDS = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.DETAIL_SCRIPT_IDS, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_7160/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_7160/*"FrequencyType"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.DETAIL_SCRIPT_TYPE, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.gachaIdToMiniBannerIndex = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaIdToMiniBannerIndex,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.vaildGachaList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.befSvtList, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaSubEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaSubEntityList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_String_o *name; // x1
  int32_t id; // w8
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t beforeGachaId; // w8
  NetworkManager_c *v21; // x0
  int32x4_t v22; // q0
  __int128 v23; // q1
  int32_t ticketItemId; // w8
  int v25; // w10
  System_String_o *WebViewAddress_48359816; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t gachaGroupId; // w8
  int32_t gachaListGroupId; // w9
  int32_t maxDrawNum; // w10
  Il2CppClass *v37; // x0
  bool v38; // cc
  int32_t pickupId; // w8
  char v40; // w10
  __int64 v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t type; // w8
  int32_t flag; // w9
  const MethodInfo_47A29F8 *v56; // x0
  DataManager_o *v57; // x24
  intptr_t m_CachedPtr; // x8
  _QWORD *v59; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v61; // x8
  int m_CancellationTokenSource_high; // w9
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  int32_t imageId; // w9
  int32_t idx; // w8
  struct System_Int32_array *adjustIds; // x1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  intptr_t v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  intptr_t v76; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596CA2E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaSubEntity__Add__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&VaildGachaInfo_TypeInfo);
    byte_596CA2E = 1;
  }
  entity = 0;
  v7 = sub_2213CCC(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v7, 0);
  if ( !data || !v7 )
    goto LABEL_35;
  name = data->fields.name;
  id = data->fields.id;
  *(_QWORD *)(v7 + 24) = name;
  *(_DWORD *)(v7 + 16) = id;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)name, v10, v11, v12, v13, v14, v15);
  beforeGachaId = data->fields.beforeGachaId;
  v21 = NetworkManager_TypeInfo;
  *(_BYTE *)(v7 + 84) = 0;
  *(_DWORD *)(v7 + 32) = beforeGachaId;
  v22 = *(int32x4_t *)&data->fields.imageId;
  *(_BYTE *)(v7 + 64) = 1;
  *(_QWORD *)&v23 = vrev64q_s32(v22).n128_u64[0];
  *((_QWORD *)&v23 + 1) = v22.n128_u64[1];
  *(_OWORD *)(v7 + 36) = v23;
  ticketItemId = data->fields.ticketItemId;
  v25 = *(&v21->_2.cctor_finished + 1);
  *(_DWORD *)(v7 + 52) = data->fields.type;
  *(_DWORD *)(v7 + 60) = ticketItemId;
  if ( !v25 )
    j_il2cpp_runtime_class_init_0(v21, v18, v19);
  WebViewAddress_48359816 = NetworkManager__getWebViewAddress_48359816(1, 0);
  v27 = System_String__Concat_75651716(WebViewAddress_48359816, data->fields.detailUrl, 0);
  *(_QWORD *)(v7 + 88) = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 88), (int32_t)v27, v28, v29, v30, v31, v32, v33);
  gachaGroupId = data->fields.gachaGroupId;
  gachaListGroupId = data->fields.gachaListGroupId;
  maxDrawNum = data->fields.maxDrawNum;
  v37 = int___TypeInfo;
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 96) = gachaGroupId;
  v38 = gachaGroupId <= 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v7 + 112) = maxDrawNum;
  v40 = !v38;
  *(_DWORD *)(v7 + 104) = gachaListGroupId;
  *(_BYTE *)(v7 + 100) = v40;
  *(_BYTE *)(v7 + 101) = pickupId > 0;
  *(_BYTE *)(v7 + 108) = gachaListGroupId > 0;
  *(_DWORD *)(v7 + 68) = 0;
  v41 = sub_2213B20(v37, 0);
  *(_QWORD *)(v7 + 72) = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 72), v41, v42, v43, v44, v45, v46, v47);
  type = data->fields.type;
  flag = data->fields.flag;
  *(_OWORD *)(v7 + 128) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v7 + 144) = flag;
  if ( type == 3 )
  {
    v56 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
    *(_BYTE *)(v7 + 84) = data->fields.freeDrawFlag > 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v56);
    if ( !Instance )
      goto LABEL_35;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_35;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0);
    if ( Instance )
    {
      v57 = Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_35;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v59 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_35;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v57,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v61 + 32) = v57;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v61 + 32), (int32_t)v57, v48, v49, v50, v51, v52, v53);
      }
      m_CancellationTokenSource_high = HIDWORD(v57->fields.m_CancellationTokenSource);
      *(_DWORD *)(v7 + 80) = HIDWORD(v57->fields.m_CachedPtr);
      *(_DWORD *)(v7 + 40) = m_CancellationTokenSource_high;
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_35;
    imageId = targetEntity->fields.imageId;
    idx = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_DWORD *)(v7 + 40) = imageId;
    *(_DWORD *)(v7 + 68) = idx;
    *(_QWORD *)(v7 + 72) = adjustIds;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 72), (int32_t)adjustIds, v48, v49, v50, v51, v52, v53);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v48);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  if ( !Instance )
    goto LABEL_35;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         data->fields.id,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_35;
    *(_BYTE *)(v7 + 148) = GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, (int64_t *)(v7 + 152), 0);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v73 = Instance->fields.m_CachedPtr,
        v74 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v73) )
  {
LABEL_35:
    sub_2213CDC(Instance, v9);
  }
  v75 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    v76 = v73 + 8 * v75;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v75 + 1;
    *(_QWORD *)(v76 + 32) = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 32), v7, v67, v68, v69, v70, v71, v72);
  }
}


void SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CA1C & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596CA1C = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  TutorialFlag__InitSaveGachaFlag(0);
}


void SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v9; // x23

  if ( (byte_596CA69 & 1) == 0 )
  {
    sub_2213A60(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_596CA69 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0)) == 0
    || (infoDlgInfo = this->fields.infoDlgInfo,
        v7 = (System_String_o *)*((_QWORD *)Instance + 3),
        v8 = (System_String_o *)*((_QWORD *)Instance + 4),
        v9 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v7, v8, v9, 0);
}


void SummonControl__BonusSelectBuyChargeStoneCheck(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonControl_o *v3; // x19
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t haveStoneNum; // w10
  int32_t HaveFreeStoneNum_k__BackingField; // w11
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9

  v3 = this;
  if ( (byte_596CA9C & 1) == 0 )
  {
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_3073/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_596CA9C = 1;
  }
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_9;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  gachaParamData = v3->fields.gachaParamData;
  v3->fields.haveStone = haveStoneNum;
  v3->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3073/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(this, method);
  }
  SummonControl__BonusSelectSummonConfirmResult(v3, 1, v2);
}


void SummonControl__BonusSelectBuyNotHaveChargeStone(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectNotHaveChargeStoneDialog(this, 1, v2);
}


void SummonControl__BonusSelectCheckChargeStone(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t haveStoneNum; // w10
  int32_t HaveFreeStoneNum_k__BackingField; // w11
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9
  __int64 *v9; // x8

  v2 = this;
  if ( (byte_596CA9B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3492/*"CHECK_STONE"*/);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_3073/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_596CA9B = 1;
  }
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_11;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  gachaParamData = v2->fields.gachaParamData;
  v2->fields.haveStone = haveStoneNum;
  v2->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
  v2->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  if ( !gachaParamData )
    goto LABEL_11;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this = (SummonControl_o *)v2->fields.fsm;
  v2->fields.needStone = gachaResourceNum;
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
  {
    if ( this )
    {
      v9 = &StringLiteral_3492/*"CHECK_STONE"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
  if ( !this )
    goto LABEL_11;
  v9 = &StringLiteral_3073/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectCloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_596CAA1 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_2213A60(&StringLiteral_7270/*"GO_BUY_STONE"*/);
    byte_596CAA1 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  v6 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( res )
  {
    if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_7270/*"GO_BUY_STONE"*/, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(confirmDlgInfo, res);
  }
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0);
  SummonControl__BonusSelectServantSelectDialog(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectNotHaveChargeStoneDialog(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v8; // x23
  const MethodInfo *v9; // x3
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v11; // x5

  if ( (byte_596CA9F & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SummonControl_GoBuyStone__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA9F = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_2213CDC(fsm, res);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__BonusSelectServantSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Action_o *v15; // x21

  if ( (byte_596CA9D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BonusSelectSummonAssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__BonusSelectServantSelectDialog_b__318_0__);
    byte_596CA9D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v8 = (BonusSelectSummonAssetManager_o *)sub_2213CCC(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v8, 0);
        this->fields.bonusSelectAssetManager = v8;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.bonusSelectAssetManager,
          (int32_t)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__318_0__,
        0);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v15, 0);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(Master_object, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectSummonConfirmResult(SummonControl_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v4; // w20
  SummonControl_o *v5; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  MethodInfo *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v4 = result;
  v5 = this;
  if ( (byte_596CA5D & 1) == 0 )
  {
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA5D = 1;
  }
  selectBonusData = 0;
  if ( v4 )
  {
    gachaParamData = v5->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_13;
    this = (SummonControl_o *)SummonControl__TryGetSelectBonusDataInfo(
                                v5,
                                &selectBonusData,
                                gachaParamData->fields.gachaId,
                                v3);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_10;
    if ( !selectBonusData )
      goto LABEL_13;
    *(_QWORD *)&result = selectBonusData->fields.selectBonusDatas;
    if ( !result )
    {
LABEL_10:
      SummonControl__ShowConfirmDialogProcess(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        result,
        (System_String_o *)v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      goto LABEL_10;
    }
LABEL_13:
    sub_2213CDC(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  __int64 *v6; // x8

  if ( (byte_596CA9E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3074/*"BONUS_SELECT_SERVANT_SELECT"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA9E = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !res )
  {
    if ( confirmDlgInfo )
    {
      v6 = &StringLiteral_3582/*"CLICK_CANCEL"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(confirmDlgInfo, res);
  }
  if ( !confirmDlgInfo )
    goto LABEL_11;
  v6 = &StringLiteral_3074/*"BONUS_SELECT_SERVANT_SELECT"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v6, 0);
}


bool SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  System_Collections_Generic_List_object__o *gachaSubEntityList; // x21
  Il2CppObject *v8; // x20
  System_Predicate_object__o *v9; // x22
  Il2CppObject *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x24
  System_Action_o *v16; // x25

  if ( (byte_596CA61 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaSubEntity__Find__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Predicate_GachaSubEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_SummonSceneRefresh__);
    sub_2213A60(&Method_SummonControl__CheckFriendPointSummonUpdate_b__234_0__);
    sub_2213A60(&StringLiteral_15428/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/);
    sub_2213A60(&StringLiteral_15427/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/);
    byte_596CA61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v8 = (Il2CppObject *)OpenEntity;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_GachaSubEntity__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)this,
    Method_SummonControl__CheckFriendPointSummonUpdate_b__234_0__,
    0);
  if ( !gachaSubEntityList )
    goto LABEL_13;
  v10 = System_Collections_Generic_List_object___Find(
          gachaSubEntityList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v8 != v10 )
  {
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_15428/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15427/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0);
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0);
    if ( v13 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v13, v14, v15, v16, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return v8 != v10;
    }
LABEL_13:
    sub_2213CDC(Instance, v4);
  }
  return v8 != v10;
}


bool SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_2213CDC(this, 0);
  max_length = ids->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
      this = (SummonControl_o *)SummonControl__getUserGachaData(this, ids->m_Items[v6], method);
      if ( this && SHIDWORD(this->fields.m_CancellationTokenSource) > 0 )
        break;
      LODWORD(max_length) = ids->max_length;
      v5 = (__int64)++v6 < (int)max_length;
    }
    while ( (__int64)v6 < (int)max_length );
  }
  return v5;
}


void SummonControl__CheckIncIdx(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x9
  int v4; // w8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_596CA81 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9650/*"NEXT_SVT"*/);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_6702/*"FINAL_SVT"*/);
    byte_596CA81 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v4 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v4;
  if ( !gachaResInfoList )
    goto LABEL_10;
  this = (SummonControl_o *)v2->fields.fsm;
  if ( v4 >= SLODWORD(gachaResInfoList->max_length) )
  {
    if ( this )
    {
      v5 = &StringLiteral_6702/*"FINAL_SVT"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
  if ( !this )
    goto LABEL_10;
  v5 = &StringLiteral_9650/*"NEXT_SVT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


bool SummonControl__CheckLastDrawGachaId(SummonControl_o *this, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  gachaParamData = this->fields.gachaParamData;
  return gachaParamData && gachaParamData->fields.gachaId == this->fields.lastMaxDrawGachaId;
}


void SummonControl__CheckOnExecuteGachaTutorial(
        SummonControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v6; // x0
  System_Collections_ICollection_o *EventTutorialEntity; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x21
  int32_t monitor; // w22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t v17; // w22
  _DWORD *v18; // x8
  int32_t klass; // w24
  int64_t klass_low; // x23
  _BOOL8 IsOpen; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_596CAA2 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    this = (SummonControl_o *)sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596CAA2 = 1;
  }
  currentGachaInfo = v4->fields.currentGachaInfo;
  memset(&v37, 0, sizeof(v37));
  if ( !currentGachaInfo )
    goto LABEL_35;
  v6 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = (System_Collections_ICollection_o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v6, 0);
  if ( BasicHelper__IsNullOrEmpty(EventTutorialEntity, 0) )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
LABEL_35:
    sub_2213CDC(this, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)EventTutorialEntity,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v37 = v36;
  v36.fields._list = 0;
  *(_QWORD *)&v36.fields._index = &v37;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v37,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_2213CDC(v9, v10);
    monitor = (int32_t)v37.fields._current[1].monitor;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10, v11);
    if ( !TutorialFlag__GetGachaFlg(monitor, 0) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[3].monitor, 0);
      if ( IsNullOrEmpty )
      {
        v17 = 0;
      }
      else
      {
        v18 = current[3].monitor;
        if ( !v18 )
          sub_2213CDC(IsNullOrEmpty, v15);
        if ( !v18[6] )
          sub_2213CE4(IsNullOrEmpty);
        v17 = v18[8];
      }
      klass = (int32_t)current[3].klass;
      klass_low = SLODWORD(current[4].klass);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15, v16);
      IsOpen = CondType__IsOpen(klass, v17, klass_low, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v8
          || (items = v8->fields._items,
              v30 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
              ++v8->fields._version,
              !items) )
        {
          sub_2213CDC(IsOpen, v22);
        }
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v32[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)current, v23, v24, v25, v26, v27, v28);
        }
        if ( !EventTutorialEntity__HasFlag((EventTutorialEntity_o *)current, 2, 0) )
        {
          v35 = (int32_t)current[1].monitor;
          if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v33, v34);
          TutorialFlag__SetGachaFlg(v35, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  UnityEngine_PlayerPrefs__Save(0);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v8,
    callback,
    0);
}


bool SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  UserGameEntity_o *v5; // x20
  __int64 v6; // x2
  BalanceConfig_c *v7; // x8
  int v8; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int64_t QpMax; // x9
  struct BalanceConfig_StaticFields *v13; // x10
  int v14; // w10
  int64_t v15; // x23
  int64_t qp; // x21
  struct BalanceConfig_StaticFields *v17; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v21; // x21
  System_Action_o *v22; // x22
  SummonLimitWarningDlgComponent_o *v23; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v24; // x21
  System_Action_o *v25; // x22
  SummonLimitWarningDlgComponent_o *v26; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v27; // x21
  System_Action_o *v28; // x22

  if ( (byte_596CA62 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SummonControl_ShowConfirmDialog__);
    sub_2213A60(&Method_SummonControl_autoSellSettingChange__);
    sub_2213A60(&Method_SummonControl_limitManaConfirmResult__);
    sub_2213A60(&Method_SummonControl_limitQpConfirmResult__);
    byte_596CA62 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_28;
  v5 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0);
  v7 = BalanceConfig_TypeInfo;
  v8 = (int)SelfUserGame;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  static_fields = v7->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v4, v6);
      v7 = BalanceConfig_TypeInfo;
      v13 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v13->QpMax;
      FriendPointSummonQpWarning = v13->FriendPointSummonQpWarning;
    }
    v14 = 10 * FriendPointSummonQpWarning;
  }
  else
  {
    v14 = gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
  }
  v15 = QpMax - v14;
  if ( !v8 )
    return 0;
  qp = v5->fields.qp;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v4, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  v17 = v7->static_fields;
  if ( qp >= v17->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v21 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0);
    v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v21, v22, 0);
  }
  else
  {
    if ( v5->fields.qp < v15 )
    {
      mana = v5->fields.mana;
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v4, v6);
        v17 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v17->UserItemMax )
        return 0;
      v26 = this->fields.limitWarningDlgInfo;
      v27 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0);
      v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
      if ( v26 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v26, v27, v28, 0);
        return 1;
      }
LABEL_28:
      sub_2213CDC(SelfUserGame, v4);
    }
    v23 = this->fields.limitWarningDlgInfo;
    v24 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0);
    v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0);
    if ( !v23 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v23, v24, v25, 0);
  }
  return 1;
}


void SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  __int64 *v4; // x8

  if ( (byte_596CA9A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11634/*"RETURN_MAIN"*/);
    sub_2213A60(&StringLiteral_11636/*"RETURN_RESULT"*/);
    byte_596CA9A = 1;
  }
  fsm = this->fields.fsm;
  if ( !this->fields.isResult )
  {
    if ( fsm )
    {
      v4 = &StringLiteral_11634/*"RETURN_MAIN"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(fsm, method);
  }
  if ( !fsm )
    goto LABEL_9;
  v4 = &StringLiteral_11636/*"RETURN_RESULT"*/;
LABEL_8:
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v4, 0);
}


void SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_c *v3; // x0
  Il2CppObject *String_83398240; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Object_array *v9; // x19
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596CA5C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&SummonControl_TypeInfo);
    byte_596CA5C = 1;
  }
  v3 = SummonControl_TypeInfo;
  if ( !*(&SummonControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, method, v2);
    v3 = SummonControl_TypeInfo;
  }
  String_83398240 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(
                                      v3->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_83398240, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
    DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v7, v8);
    v9 = JsonManager__DeserializeArray_object_(
           String_83398240,
           (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v9 )
      sub_2213CDC(v11, v12);
  }
}


bool SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_596CA2B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CA2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v7);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0);
}


void SummonControl__CheckValidGachaList(SummonControl_o *this, const MethodInfo *method)
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
  __int64 v17; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o *v18; // [xsp+8h] [xbp-68h]
  StoryGachaAdjustData_o *adjustData; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_596CA2A & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    this = (SummonControl_o *)sub_2213A60(&Method_SummonControl_SlotCompare__);
    byte_596CA2A = 1;
  }
  vaildGachaList = v2->fields.vaildGachaList;
  memset(&v20, 0, sizeof(v20));
  adjustData = 0;
  if ( !vaildGachaList )
    goto LABEL_21;
  size = vaildGachaList->fields._size;
  v5 = vaildGachaList->fields._version + 1;
  vaildGachaList->fields._size = 0;
  vaildGachaList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0);
  gachaSubEntityList = v2->fields.gachaSubEntityList;
  if ( !gachaSubEntityList )
    goto LABEL_21;
  v7 = gachaSubEntityList->fields._size;
  v8 = gachaSubEntityList->fields._version + 1;
  gachaSubEntityList->fields._size = 0;
  gachaSubEntityList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v7, 0);
  this = (SummonControl_o *)v2->fields.gachaMst;
  if ( !this )
    goto LABEL_21;
  this = (SummonControl_o *)GachaMaster__GetValidGachaEntityList((GachaMaster_o *)this, 0);
  if ( !this )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
  v17 = 0;
  v18 = &v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_2213CDC(v9, v10);
    if ( SummonControl__CheckStoryGachaAdjustData(
           (SummonControl_o *)v9,
           &adjustData,
           *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10),
           v11) )
    {
      v14 = adjustData;
    }
    else
    {
      v14 = 0;
      adjustData = 0;
    }
    SummonControl__AddVaildGachaInfoList(v2, (GachaEntity_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
  v15 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v16 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v16, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0);
  if ( !v15 )
LABEL_21:
    sub_2213CDC(this, method);
  System_Collections_Generic_List_object___Sort_71849708(
    v15,
    v16,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596CA58 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CA58 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( isStoneFragmentsBulkDialog )
  {
    if ( Instance )
    {
      CommonUI__CloseFragmentsBulkExchangeDialog((CommonUI_o *)Instance, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(Instance, v5);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseFragmentsExchangeDialog((CommonUI_o *)Instance, 0);
}


System_Collections_IEnumerator_o *SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CA36 & 1) == 0 )
  {
    sub_2213A60(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_TypeInfo);
    byte_596CA36 = 1;
  }
  v3 = sub_2213CCC(SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__188___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct GachaRqParamData_o *v10; // x8
  Il2CppObject *Entity; // x21
  struct GachaRqParamData_o *v12; // x8
  System_String_o *basePanel; // x27
  SummonConfirmDlgComponent_o *v14; // x23
  __int64 v15; // x2
  int v16; // w20
  System_String_o *v17; // x22
  Il2CppObject *v18; // x0
  float v19; // s8
  int32_t fontSize; // w22
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v25; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v28; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v29; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v30; // x24
  struct GachaRqParamData_o *v31; // x8
  char v32; // w24
  SummonCautionDlgComponent_o *cautionDlgInfo; // x25
  System_String_o *m_CancellationTokenSource; // x23
  int klass; // w29
  int64_t v36; // x21
  SummonCautionDlgComponent_CallbackFunc_o *v37; // x26
  const MethodInfo *v38; // x3
  struct GachaRqParamData_o *v39; // x8
  int32_t v40; // w27
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x28
  const MethodInfo *v42; // [xsp+20h] [xbp-80h]
  System_String_o *message; // [xsp+28h] [xbp-78h]
  int v44; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_596CA66 & 1) == 0 )
  {
    sub_2213A60(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_2213A60(&Method_SummonControl_ConfirmMessageOpen__);
    sub_2213A60(&Method_SummonControl_SetDispBtn__);
    sub_2213A60(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_2213A60(&Method_SummonControl_confirmCautionResult__);
    sub_2213A60(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    sub_2213A60(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_2213A60(&StringLiteral_24723/*"showGroupRemainingDrawNum"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA66 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_42;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  v6 = Method_SummonControl_ConfirmMessageOpen__;
  if ( !result )
  {
    if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SummonControl_ConfirmMessageOpen__);
    v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( confirmDlgInfo )
        {
          if ( GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0) )
          {
            confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.bonusSelectSummonConfirmDialog;
            if ( confirmDlgInfo )
            {
              BonusSelectSummonConfirmDialog__Init(
                (BonusSelectSummonConfirmDialog_o *)confirmDlgInfo,
                this->fields.bonusSelectAssetManager,
                0);
              v25 = this->fields.gachaParamData;
              if ( v25 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v25->fields.gachaId;
                v28 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v28,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0);
                v29 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v29,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0);
                v30 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v30,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v28, v29, v30, 0, 0);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_42;
  }
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SummonControl_ConfirmMessageOpen__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  v10 = this->fields.gachaParamData;
  if ( !v10 )
    goto LABEL_42;
  if ( !confirmDlgInfo )
    goto LABEL_42;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v10->fields.gachaId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  v12 = this->fields.gachaParamData;
  if ( !v12 )
    goto LABEL_42;
  if ( !confirmDlgInfo )
    goto LABEL_42;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailMaster__GetGachaDetailEntity(
                                                    (GachaDetailMaster_o *)confirmDlgInfo,
                                                    v12->fields.gachaId,
                                                    0);
  if ( !confirmDlgInfo )
    goto LABEL_42;
  basePanel = (System_String_o *)confirmDlgInfo->fields.basePanel;
  v14 = confirmDlgInfo;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailEntity__GetScriptInt(
                                                    (GachaDetailEntity_o *)confirmDlgInfo,
                                                    (System_String_o *)StringLiteral_24723/*"showGroupRemainingDrawNum"*/,
                                                    -1,
                                                    0);
  v16 = (int)confirmDlgInfo;
  if ( (int)confirmDlgInfo < 1 )
  {
    v19 = 0.0;
    fontSize = 0;
  }
  else
  {
    if ( !Entity )
      goto LABEL_42;
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.gachaMst;
    if ( !confirmDlgInfo )
      goto LABEL_42;
    v17 = (System_String_o *)v14->fields.basePanel;
    v44 = GachaMaster__GetGroupRemainingDrawNum((GachaMaster_o *)confirmDlgInfo, (int32_t)Entity[9].klass, 0)
        / SLODWORD(Entity[4].klass);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v44);
    v19 = 26.0;
    basePanel = System_String__Format(v17, v18, 0);
    fontSize = 22;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, result, v15);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  v31 = this->fields.gachaParamData;
  if ( !v31 )
    goto LABEL_42;
  if ( !confirmDlgInfo )
    goto LABEL_42;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v31->fields.gachaId,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_42;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0);
  if ( !Entity )
    goto LABEL_42;
  message = basePanel;
  v32 = (char)confirmDlgInfo;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  m_CancellationTokenSource = (System_String_o *)v14->fields.m_CancellationTokenSource;
  klass = (int)Entity[9].klass;
  v36 = (int64_t)Entity[7].klass;
  v37 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v37,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    v38);
  v39 = this->fields.gachaParamData;
  if ( !v39
    || (v40 = v39->fields.gachaId,
        tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
        BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
          tryGetBonusSelectData,
          (Il2CppObject *)this,
          Method_SummonControl_TryGetSelectBonusDataInfo__,
          0),
        !cautionDlgInfo) )
  {
LABEL_42:
    sub_2213CDC(confirmDlgInfo, result);
  }
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    m_CancellationTokenSource,
    message,
    klass > 0,
    v32 & 1,
    v36,
    v37,
    v40,
    tryGetBonusSelectData,
    this->fields.bonusSelectAssetManager,
    v16 > 0,
    v19,
    fontSize,
    v42);
}


void SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596CA7A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__DialogCallBack_b__269_0__);
    byte_596CA7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__269_0__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
}


void SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CA7B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3639/*"CLOSE"*/);
    byte_596CA7B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3639/*"CLOSE"*/, 0);
}


void SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_596CA57 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596CA57 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    SummonControl__CloseStoneFragmentsExchangeDialog(this, v5);
  }
  else
  {
    SummonControl__resetStoneInfo(this, v5);
    SummonControl__OpenStoneFragmentExchangeResultDialog(this, this->fields.stoneExchangeCount, v6);
  }
}


void SummonControl__ExtractVaildGachaInfoOnPriority(
        SummonControl_o *this,
        System_Collections_Generic_List_VaildGachaInfo__o **baseGachaList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *Item; // x0
  int32_t v13; // w21
  System_Collections_Generic_List_object__o *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x23
  int32_t v16; // w24
  Il2CppObject *v17; // x22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_596CA97 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    byte_596CA97 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_2213CDC(Item, v5);
  v13 = 0;
  while ( v13 < Item->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v13,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v14 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v15 = Item;
      v16 = 0;
      v17 = (Il2CppObject *)Item;
      while ( v16 < v14->fields._size )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v14,
                                                              v16,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v15 && Item )
        {
          if ( LODWORD(v15->fields._items) != LODWORD(Item->fields._items)
            && LODWORD(v15[1].monitor) == LODWORD(Item[1].monitor) )
          {
            if ( !v17 )
              goto LABEL_25;
            if ( SHIDWORD(v17[2].klass) < SHIDWORD(Item->fields._syncRoot) )
              v17 = (Il2CppObject *)Item;
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
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                              v4,
                                                              v17,
                                                              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          items = v4->fields._items;
          v19 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              v17,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v6, v7, v8, v9, v10, v11);
          }
        }
        Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
        ++v13;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)baseGachaList, (int32_t)v4, v6, v7, v8, v9, v10, v11);
}


float SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CA19 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596CA19 = 1;
  }
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method, v2);
  return FSUtility__GetOffsetX(54.0, 2, 0);
}


float SummonControl__FSMenuOffsetY(SummonControl_o *this, const MethodInfo *method)
{
  return 33.0;
}


int32_t SummonControl__GetGachaIdFromSelectedBannerEntity(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_array *v13; // x19
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CA3F & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CA3F = 1;
  }
  result = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596CAB9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CAB9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method, v2);
  if ( !byte_596CAB9 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CAB9 = 1;
  }
  v4 = (System_String_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = (System_String_o *)TerminalPramsManager_TypeInfo;
  }
  v5 = *(_QWORD *)(*(_QWORD *)&v4[7].fields + 48LL);
  if ( !v5 )
    goto LABEL_31;
  v4 = *(System_String_o **)(v5 + 56);
  if ( !v4 )
    goto LABEL_31;
  v13 = System_String__Split(v4, 0x2Fu, 0, 0);
  if ( !byte_596CABA )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CABA = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    v14 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !v13 )
    goto LABEL_31;
  if ( SLODWORD(v13->max_length) < 2 )
    return 0;
  v4 = v13->m_Items[1];
  if ( !v4 || (v4 = (System_String_o *)System_String__Split(v4, 0x2Cu, 0, 0)) == 0 )
LABEL_31:
    sub_2213CDC(v4, method);
  klass = v4[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_2213CE4(v4);
  System_Int32__TryParse((System_String_o *)v4[1].monitor, &result, 0);
  return result;
}


int32_t SummonControl__GetGachaIndex(
        SummonControl_o *this,
        int32_t gachaId,
        int32_t extraGroupId,
        int32_t gachaGroupId,
        int32_t defaultIndex,
        int32_t oldCurrentIdx,
        VaildGachaInfo_array *oldGachas,
        const MethodInfo *method)
{
  __int64 v14; // x22
  void *vaildGachaList; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 *v23; // x26
  int32_t v24; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x28
  int monitor; // w9
  int klass; // w9
  __int64 v28; // x8
  System_Predicate_object__o *v29; // x23
  System_Collections_Generic_List_object__o *v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596CA8D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_2213A60(&Method_SummonControl___c__DisplayClass291_0__GetGachaIndex_b__0__);
    sub_2213A60(&SummonControl___c__DisplayClass291_0_TypeInfo);
    byte_596CA8D = 1;
  }
  entity = 0;
  v14 = sub_2213CCC(SummonControl___c__DisplayClass291_0_TypeInfo);
  SummonControl___c__DisplayClass291_0___ctor((SummonControl___c__DisplayClass291_0_o *)v14, 0);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = oldGachas,
        v23 = (__int64 *)(v14 + 16),
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)oldGachas, v17, v18, v19, v20, v21, v22),
        (vaildGachaList = this->fields.vaildGachaList) == 0) )
  {
LABEL_27:
    sub_2213CDC(vaildGachaList, v16);
  }
  v24 = 0;
  while ( v24 < *((_DWORD *)vaildGachaList + 6) )
  {
    gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v24,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList || !gachaMst )
      goto LABEL_27;
    vaildGachaList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               gachaMst,
                               &entity,
                               *((_DWORD *)vaildGachaList + 4),
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)vaildGachaList & 1) == 0 )
    {
      LODWORD(vaildGachaList) = -1;
      return (int)vaildGachaList;
    }
    if ( !entity )
      goto LABEL_27;
    monitor = (int)entity[4].monitor;
    if ( monitor && monitor == extraGroupId
      || (klass = (int)entity[9].klass) != 0 && klass == gachaGroupId
      || LODWORD(entity[1].klass) == gachaId )
    {
      LODWORD(vaildGachaList) = v24;
      return (int)vaildGachaList;
    }
    vaildGachaList = this->fields.vaildGachaList;
    ++v24;
    if ( !vaildGachaList )
      goto LABEL_27;
  }
  v28 = *v23;
  if ( *v23 )
  {
    *(_DWORD *)(v14 + 24) = oldCurrentIdx;
    while ( oldCurrentIdx < *(_DWORD *)(v28 + 24) )
    {
      v29 = *(System_Predicate_object__o **)(v14 + 32);
      v30 = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( !v29 )
      {
        v29 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v29,
          (Il2CppObject *)v14,
          Method_SummonControl___c__DisplayClass291_0__GetGachaIndex_b__0__,
          0);
        *(_QWORD *)(v14 + 32) = v29;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)v29, v31, v32, v33, v34, v35, v36);
      }
      if ( v30 )
      {
        vaildGachaList = (void *)System_Collections_Generic_List_object___FindIndex(
                                   v30,
                                   (System_Predicate_T__o *)v29,
                                   (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
        if ( ((unsigned int)vaildGachaList & 0x80000000) == 0 )
          return (int)vaildGachaList;
        v28 = *(_QWORD *)(v14 + 16);
        oldCurrentIdx = *(_DWORD *)(v14 + 24) + 1;
        *(_DWORD *)(v14 + 24) = oldCurrentIdx;
        if ( v28 )
          continue;
      }
      goto LABEL_27;
    }
  }
  LODWORD(vaildGachaList) = defaultIndex;
  return (int)vaildGachaList;
}


// local variable allocation has failed, the output may be wrong!
int32_t SummonControl__GetGroupRemainingDrawNum(SummonControl_o *this, int32_t groupId, const MethodInfo *method)
{
  GachaMaster_o *gachaMst; // x0

  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_2213CDC(0, *(_QWORD *)&groupId);
  return GachaMaster__GetGroupRemainingDrawNum(gachaMst, groupId, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t SummonControl__GetMiniBannerIndex(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *gachaIdToMiniBannerIndex; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CAA3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_596CAA3 = 1;
  }
  gachaIdToMiniBannerIndex = this->fields.gachaIdToMiniBannerIndex;
  value = 0;
  if ( !gachaIdToMiniBannerIndex )
    sub_2213CDC(0, *(_QWORD *)&gachaId);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         gachaIdToMiniBannerIndex,
         gachaId,
         &value,
         (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0;
  }
}


int64_t SummonControl__GetSummonSceneInTime(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.summonSceneInTime;
}


void SummonControl__GoBuyStone(SummonControl_o *this, bool res, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  int32_t gachaId; // w25
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v18; // x27
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_596CAA0 & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_2213A60(&Method_SummonControl_GoBuyStone__);
    sub_2213A60(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_2213A60(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    byte_596CAA0 = 1;
  }
  if ( res )
  {
    v5 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_SummonControl_GoBuyStone__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_BonusSelectCloseShotStoneDlg__,
      v9);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || (haveStone = this->fields.haveStone,
          haveFreeStone = this->fields.haveFreeStone,
          haveChargeStone = this->fields.haveChargeStone,
          gachaId = gachaParamData->fields.gachaId,
          bonusSelectAssetManager = this->fields.bonusSelectAssetManager,
          v18 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v18,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0),
          !confirmDlgInfo) )
    {
      sub_2213CDC(v10, v11);
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


void SummonControl__GoFriendPointSummon(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MainMenuBar__setMenuActive(0, 0, 0);
  SummonControl__loadAssetsForSummon(this, v3);
}


bool SummonControl__IsRankUpClassId(SummonControl_o *this, int32_t classId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *canRankUpClassIds; // x0

  if ( (byte_596CA73 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596CA73 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool SummonControl__IsShowTalkResult(GachaInfos_o *gachaInfo, const MethodInfo *method)
{
  if ( gachaInfo )
    LOBYTE(gachaInfo) = gachaInfo->fields.isNew && !gachaInfo->fields.sellMana && gachaInfo->fields.sellQp == 0;
  return (char)gachaInfo;
}


void SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( (byte_596CA25 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6667/*"FAIL_LOAD"*/);
    sub_2213A60(&StringLiteral_18297/*"btn_sumonhistory"*/);
    sub_2213A60(&StringLiteral_5644/*"END_LOAD"*/);
    sub_2213A60(&StringLiteral_18296/*"btn_summon_list"*/);
    byte_596CA25 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_10;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6667/*"FAIL_LOAD"*/, 0);
  }
  this->fields.bannerAssetData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bannerAssetData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v11);
  SummonControl__setPositionByWarId(this, v12);
  SummonControl__ResetArrowTween(this, v13);
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_18297/*"btn_sumonhistory"*/, v14);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_18297/*"btn_sumonhistory"*/,
          0),
        fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_18296/*"btn_summon_list"*/, v15),
        !this->fields.summonInfoCtr)
    || (SummonInfoControl__SetSummonListSprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_18296/*"btn_summon_list"*/,
          0),
        (fsm = this->fields.fsm) == 0) )
  {
LABEL_10:
    sub_2213CDC(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5644/*"END_LOAD"*/, 0);
}


void SummonControl__NotHaveChargeStoneCheckSvtSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectcloseShotStoneDlg(this, 1, v2);
}


void SummonControl__OnApplicationPause(SummonControl_o *this, bool pauseStatus, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_596CAA4 & 1) == 0 )
  {
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CAA4 = 1;
  }
  if ( !pauseStatus )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
    if ( !BYTE1(Instance[2].klass) && !this->fields.isShowingSummonEffect )
    {
      if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, v6, v7);
      PurchaseBehaviour__ActivateExternal(0);
    }
  }
}


void SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t fsm; // w20
  int32_t fsm_high; // w24
  struct UnityEngine_GameObject_o *bgRoot; // x22
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *currentBannerComp; // x23
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1

  v2 = this;
  if ( (byte_596CA32 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_3457/*"CHANGE_BANNER"*/);
    byte_596CA32 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_24;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_24;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_24;
  fsm = (int32_t)this->fields.fsm;
  fsm_high = HIDWORD(this->fields.fsm);
  bgRoot = this->fields.bgRoot;
  v13 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_27;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
  if ( !UnityEngine_Object__op_Equality(v13, currentBannerComp, 0)
    || bgRoot != (struct UnityEngine_GameObject_o *)v2->fields.currentGachaInfo
    || fsm != v2->fields.currentIdx
    || fsm_high != v2->fields.currentMoveIdx )
  {
LABEL_27:
    if ( v2->fields.isDoneTutorial )
    {
      this = (SummonControl_o *)v2->fields.leftArrowBtn;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      this = (SummonControl_o *)v2->fields.rightArrowBtn;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
      this = (SummonControl_o *)v2->fields.titleInfo;
      if ( !this )
        goto LABEL_24;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0);
      SummonControl__SetMiniBannerArrowAndColliderEnable(v2, 1, v15);
    }
    v2->fields.isDragging = 0;
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.currentBannerComp, (int32_t)v13, v4, v5, v6, v7, v8, v9);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)bgRoot;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.currentGachaInfo,
      (int32_t)bgRoot,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v2->fields.currentIdx = fsm;
    v2->fields.currentMoveIdx = fsm_high;
    SummonControl__setSliderIcon(v2, fsm, v22);
    this = (SummonControl_o *)v2->fields.summonMBannerLoopCtr;
    if ( this )
    {
      summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v2->fields.currentMoveIdx,
                                    0);
        if ( summonMBannerCenterChild )
        {
          UICenterOnChild__CenterOn_56214248(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0, 0);
          this = (SummonControl_o *)v2->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
            SummonControl__UpdateSummonInfoControlLayout(v2, v24);
            SummonControl__showHelpImg(v2, v25);
            this = (SummonControl_o *)v2->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3457/*"CHANGE_BANNER"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(this, method);
  }
}


void SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  float m_Width; // w23
  float m_Height; // w24
  struct VaildGachaInfo_o *v12; // x21
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_596CA33 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    this = (SummonControl_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA33 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_17;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_17;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v12 = *(struct VaildGachaInfo_o **)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  v13 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_13;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
  if ( !UnityEngine_Object__op_Equality(v13, currentSummonMBannerComponent, 0)
    || v12 != v2->fields.currentGachaInfo
    || LODWORD(m_Width) != v2->fields.currentIdx
    || LODWORD(m_Height) != v2->fields.currentMoveIdx )
  {
LABEL_13:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v13;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.currentSummonMBannerComponent,
      (int32_t)v13,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    v2->fields.currentGachaInfo = v12;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.currentGachaInfo,
      (int32_t)v12,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    this = (SummonControl_o *)v2->fields.bannerLoopCtr;
    *(float *)&v2->fields.currentIdx = m_Width;
    *(float *)&v2->fields.currentMoveIdx = m_Height;
    if ( this )
    {
      centerChild = v2->fields.centerChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v2->fields.currentMoveIdx,
                                    0);
        if ( centerChild )
        {
          UICenterOnChild__CenterOn_56214248(centerChild, (UnityEngine_Transform_o *)this, 1, 0, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
}


void SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_596CA90 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    byte_596CA90 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_2213CDC(0, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3576/*"CLICK_BACK"*/, 0);
}


void SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  char v4; // w8
  System_Reflection_MethodBase_o *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v8; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v10; // x0
  struct VaildGachaInfo_o *v11; // x8
  System_String_o *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  void *monitor; // x8
  __int64 v20; // x9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  _QWORD *v39; // x8
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596CA93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_2213A60(&Method_SummonControl_OnClickHelp__);
    sub_2213A60(&StringLiteral_16588/*"[]"*/);
    byte_596CA93 = 1;
  }
  v3 = Method_SummonControl_OnClickHelp__;
  v4 = *((_BYTE *)Method_SummonControl_OnClickHelp__ + 83);
  memset(&v41, 0, sizeof(v41));
  if ( (v4 & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickHelp__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_36;
  v10 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v10, 0);
  if ( !v6 )
    goto LABEL_36;
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)EventTutorialEntity,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v11 = this->fields.currentGachaInfo;
  if ( !v11 )
    goto LABEL_36;
  v12 = System_Int32__ToString((int)v11 + 16, 0);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v12, 0);
  System_Collections_Generic_List_object___AddRange(
    v6,
    v13,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v6,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v15 = 0;
  v41 = v40;
  v40.fields._list = 0;
  *(_QWORD *)&v40.fields._index = &v41;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v41.fields._current;
    if ( !v41.fields._current )
      sub_2213CDC(v16, v17);
    if ( !LODWORD(v41.fields._current[3].klass) )
    {
      monitor = v41.fields._current[2].monitor;
      if ( !monitor )
        sub_2213CDC(v16, v17);
      v20 = *((_QWORD *)monitor + 3);
      if ( !v20 )
        goto LABEL_21;
      if ( !(_DWORD)v20 )
        sub_2213CE4(v16);
      v21 = System_String__op_Equality(*((System_String_o **)monitor + 4), (System_String_o *)StringLiteral_16588/*"[]"*/, 0);
      if ( v21 )
      {
LABEL_21:
        if ( !v15 )
          v15 = current;
      }
      else
      {
        if ( !v14
          || (items = v14->fields._items,
              v30 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__,
              ++v14->fields._version,
              !items) )
        {
          sub_2213CDC(v21, v22);
        }
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v32[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)current, v23, v24, v25, v26, v27, v28);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  if ( !v14 )
    goto LABEL_36;
  if ( !v14->fields._size && v15 )
  {
    EventTutorialEntity = (System_Collections_Generic_List_EventTutorialEntity__o *)v14->fields._items;
    v39 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v14->fields._version;
    if ( EventTutorialEntity )
    {
      if ( EventTutorialEntity->fields._size )
      {
        v14->fields._size = 1;
        EventTutorialEntity->fields._syncRoot = v15;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&EventTutorialEntity->fields._syncRoot,
          (int32_t)v15,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v15,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      goto LABEL_31;
    }
LABEL_36:
    sub_2213CDC(EventTutorialEntity, v8);
  }
LABEL_31:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v14,
    0,
    0);
}


void SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_596CA94 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_GachaHistoryRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SummonControl_OnClickHisotry__);
    sub_2213A60(&Method_SummonControl__OnClickHisotry_b__303_0__);
    byte_596CA94 = 1;
  }
  v3 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickHisotry__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_SummonControl__OnClickHisotry_b__303_0__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_2213CDC(Request_object, v9);
  GachaHistoryRequest__beginRequest((GachaHistoryRequest_o *)Request_object, currentGachaInfo->fields.id, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, bool isPlaySe, const MethodInfo *method)
{
  SummonControl_o *v6; // x20
  const MethodInfo *v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  v6 = this;
  if ( (byte_596CA37 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_OnClickMiniBanner__);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_13323/*"SetBannerCenter"*/);
    byte_596CA37 = 1;
  }
  if ( v6->fields.currentMoveIdx != moveIdx )
  {
    this = (SummonControl_o *)v6->fields.leftArrowBtn;
    if ( this )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      this = (SummonControl_o *)v6->fields.rightArrowBtn;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        SummonControl__SetMiniBannerArrowAndColliderEnable(v6, 0, v7);
        UnityEngine_MonoBehaviour__CancelInvoke_83442996(
          (UnityEngine_MonoBehaviour_o *)v6,
          (System_String_o *)StringLiteral_13323/*"SetBannerCenter"*/,
          0);
        if ( isPlaySe )
        {
          v8 = Method_SummonControl_OnClickMiniBanner__;
          if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickMiniBanner__);
          v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
        }
        this = (SummonControl_o *)v6->fields.summonInfoCtr;
        if ( this )
        {
          SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 0, 0);
          this = (SummonControl_o *)v6->fields.titleInfo;
          if ( this )
          {
            TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 0, 0);
            MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
            this = (SummonControl_o *)v6->fields.maskObject;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (SummonControl_o *)v6->fields.bannerLoopCtr;
              v6->fields.isDragging = 1;
              if ( this )
              {
                centerChild = v6->fields.centerChild;
                this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                if ( this )
                {
                  this = (SummonControl_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, moveIdx, 0);
                  if ( centerChild )
                  {
                    UICenterOnChild__CenterOn_56214248(centerChild, (UnityEngine_Transform_o *)this, 1, 0, 0);
                    this = (SummonControl_o *)v6->fields.summonMBannerLoopCtr;
                    if ( this )
                    {
                      summonMBannerCenterChild = v6->fields.summonMBannerCenterChild;
                      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                      if ( this )
                      {
                        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                                    (UnityEngine_Transform_o *)this,
                                                    moveIdx,
                                                    0);
                        if ( summonMBannerCenterChild )
                        {
                          UICenterOnChild__CenterOn_56214248(
                            summonMBannerCenterChild,
                            (UnityEngine_Transform_o *)this,
                            1,
                            0,
                            0);
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
    goto LABEL_25;
  }
  if ( v6->fields.isDragging )
    return;
  currentGachaInfo = v6->fields.currentGachaInfo;
  if ( !currentGachaInfo )
LABEL_25:
    sub_2213CDC(this, *(_QWORD *)&moveIdx);
  if ( currentGachaInfo->fields.isDispSummonListDialog )
    SummonControl__OnClickSummonListBtn(v6, *(const MethodInfo **)&moveIdx);
}


void SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct PossessionInfoDialog_o *possessionInfoDialog; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_596CA95 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_OnClickPossessionInfo__);
    byte_596CA95 = 1;
  }
  possessionInfoDialog = this->fields.possessionInfoDialog;
  if ( !possessionInfoDialog )
    goto LABEL_13;
  if ( !possessionInfoDialog->fields.baseState && PossessionInfoDialog__IsEmptyDispObject(possessionInfoDialog, method) )
  {
    v4 = Method_SummonControl_OnClickPossessionInfo__;
    if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickPossessionInfo__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    possessionInfoDialog = this->fields.possessionInfoDialog;
    if ( possessionInfoDialog )
    {
      PossessionInfoDialog__Init(possessionInfoDialog, method);
      currentGachaInfo = this->fields.currentGachaInfo;
      if ( currentGachaInfo )
      {
        possessionInfoDialog = this->fields.possessionInfoDialog;
        if ( possessionInfoDialog )
        {
          PossessionInfoDialog__Open(possessionInfoDialog, currentGachaInfo->fields.id, v6);
          return;
        }
      }
    }
LABEL_13:
    sub_2213CDC(possessionInfoDialog, method);
  }
}


void SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_596CA53 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA53 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, v6),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(confirmDlgInfo, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
  SummonControl__OpenFragmentsExchangeDialog(this, v8);
}


void SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596CA54 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_OnClickStoneFragmentsInfo__);
    byte_596CA54 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596CA92 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonControl__OnClickSummonDetail_b__301_0__);
    byte_596CA92 = 1;
  }
  if ( !this->fields.isSummonDetailOpening )
  {
    summonInfoCtr = this->fields.summonInfoCtr;
    this->fields.isSummonDetailOpening = 1;
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__OnClickSummonDetail_b__301_0__, 0);
    if ( !summonInfoCtr )
      sub_2213CDC(v5, v6);
    SummonInfoControl__OnClickDetail(summonInfoCtr, v4, 0);
  }
}


void SummonControl__OnClickSummonListBtn(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct SummonListDialog_o *summonListDialog; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *vaildGachaList; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *useGachaData; // x21
  System_Func_object__bool__o *v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_ICollection_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t current; // w1
  int32x2_t **v22; // x21
  System_Predicate_object__o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  GachaMaster_o *gachaMst; // x0
  __int64 v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32x2_t *v38; // x8
  signed __int32 v39; // w9
  _QWORD *v40; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v43; // x0
  SummonControl_o *v44; // x0
  const MethodInfo *v45; // x2
  System_Collections_Generic_List_object__o *v46; // x20
  System_Comparison_T__o *v47; // x21
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v49; // x9
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_VaildGachaInfo__o *baseGachaList; // [xsp+38h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_596CA96 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_GachaEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GachaEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_2213A60(&System_Func_GachaEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor___91671080);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_2213A60(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_2213A60(&Method_SummonControl_OnClickSummonListBtn__);
    sub_2213A60(&Method_SummonControl_SlotCompare__);
    sub_2213A60(&Method_SummonControl__OnClickSummonListBtn_b__305_0__);
    sub_2213A60(&Method_SummonControl___c__DisplayClass305_0__OnClickSummonListBtn_b__1__);
    sub_2213A60(&SummonControl___c__DisplayClass305_0_TypeInfo);
    this = (SummonControl_o *)sub_2213A60(&VaildGachaInfo_TypeInfo);
    byte_596CA96 = 1;
  }
  summonListDialog = v2->fields.summonListDialog;
  baseGachaList = 0;
  memset(&v51, 0, sizeof(v51));
  if ( !summonListDialog )
    goto LABEL_35;
  if ( summonListDialog->fields.baseState )
    return;
  v4 = Method_SummonControl_OnClickSummonListBtn__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickSummonListBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SummonControl_OnClickSummonListBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  vaildGachaList = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.vaildGachaList;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v7,
    vaildGachaList,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor___91671080);
  useGachaData = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.useGachaData;
  baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v7;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GachaEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, (Il2CppObject *)v2, Method_SummonControl__OnClickSummonListBtn_b__305_0__, 0);
  v10 = System_Linq_Enumerable__Where_object_(
          useGachaData,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v11 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v10,
                                              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_GachaEntity___);
  this = (SummonControl_o *)BasicHelper__IsNullOrEmpty(v11, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v11 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v50,
        (System_Collections_Generic_List_object__o *)v11,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
      v51 = v50;
      v50.fields._list = 0;
      *(_QWORD *)&v50.fields._index = &v51;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__) )
      {
        v12 = sub_2213CCC(SummonControl___c__DisplayClass305_0_TypeInfo);
        SummonControl___c__DisplayClass305_0___ctor((SummonControl___c__DisplayClass305_0_o *)v12, 0);
        if ( !v12 )
          sub_2213CDC(v13, v14);
        current = (int32_t)v51.fields._current;
        *(_QWORD *)(v12 + 16) = v51.fields._current;
        v22 = (int32x2_t **)(v12 + 16);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), current, v15, v16, v17, v18, v19, v20);
        v23 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v23,
          (Il2CppObject *)v12,
          Method_SummonControl___c__DisplayClass305_0__OnClickSummonListBtn_b__1__,
          0);
        if ( !v7 )
          sub_2213CDC(v24, v25);
        v26 = System_Collections_Generic_List_object___Exists(
                v7,
                (System_Predicate_T__o *)v23,
                (const MethodInfo_448429C *)Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
        if ( !v26 )
        {
          if ( !*v22 )
            sub_2213CDC(v26, v27);
          gachaMst = v2->fields.gachaMst;
          if ( !gachaMst )
            sub_2213CDC(0, v27);
          if ( GachaMaster__GetGroupRemainingDrawNum(gachaMst, (*v22)[18].n64_i32[0], 0) )
          {
            v29 = sub_2213CCC(VaildGachaInfo_TypeInfo);
            VaildGachaInfo___ctor((VaildGachaInfo_o *)v29, 0);
            v38 = *v22;
            if ( !*v22 )
              sub_2213CDC(v30, v31);
            if ( !v29 )
              sub_2213CDC(v30, v31);
            *(_DWORD *)(v29 + 16) = v38[2].n64_u32[0];
            *(_DWORD *)(v29 + 48) = v38[5].n64_u32[1];
            *(int32x2_t *)(v29 + 36) = vrev64_s32(v38[4]);
            v39 = v38[18].n64_i32[1];
            *(_DWORD *)(v29 + 104) = v39;
            *(_BYTE *)(v29 + 108) = v39 > 0;
            *(_DWORD *)(v29 + 112) = v38[11].n64_u32[1];
            v40 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
            *(_DWORD *)(v29 + 144) = v38[19].n64_u32[1];
            items = v7->fields._items;
            ++v7->fields._version;
            if ( !items )
              sub_2213CDC(v30, v31);
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v29,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v29;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), v29, v32, v33, v34, v35, v36, v37);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        *(System_Collections_Generic_List_Enumerator_object__o **)&v50.fields._index,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
      SummonControl__ExtractVaildGachaInfoOnPriority(v44, &baseGachaList, v45);
      v46 = (System_Collections_Generic_List_object__o *)baseGachaList;
      v47 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_VaildGachaInfo__TypeInfo);
      System_Comparison_object____ctor(v47, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0);
      if ( v46 )
      {
        System_Collections_Generic_List_object___Sort_71849708(
          v46,
          v47,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
        goto LABEL_25;
      }
    }
LABEL_35:
    sub_2213CDC(this, method);
  }
LABEL_25:
  this = (SummonControl_o *)v2->fields.summonListDialog;
  if ( !this )
    goto LABEL_35;
  SummonListDialog__Init((SummonListDialog_o *)this, 0);
  currentGachaInfo = v2->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_35;
  v49 = v2->fields.vaildGachaList;
  if ( !v49 )
    goto LABEL_35;
  this = (SummonControl_o *)v2->fields.summonListDialog;
  if ( !this )
    goto LABEL_35;
  SummonListDialog__Open(
    (SummonListDialog_o *)this,
    v2->fields.currentMoveIdx,
    currentGachaInfo->fields.summonListGroupId,
    v49->fields._size,
    baseGachaList,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596CA5A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CA5A = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  v4 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance(v4);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0, 0);
}


void SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_596CA31 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13323/*"SetBannerCenter"*/);
    byte_596CA31 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83442996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13323/*"SetBannerCenter"*/,
    0);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 0, 0),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo) == 0)
    || (TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0),
        MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonBannerScrollView) == 0)
    || (UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerScrollView) == 0) )
  {
    sub_2213CDC(summonInfoCtr, v3);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0);
  this->fields.isDragging = 1;
}


void SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596CA91 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__OnEndSummonEffect_b__300_0__);
    byte_596CA91 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__300_0__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0);
}


void SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w24
  const MethodInfo_47A29F8 *v8; // x0
  Il2CppObject *Instance; // x21
  const MethodInfo *v10; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x22
  System_Action_int__o *v12; // x23

  if ( (byte_596CA55 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl_RequestStoneFragmentsShop__);
    byte_596CA55 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_12;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_12;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0);
  v8 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone;
  Instance = SingletonMonoBehaviour_object___get_Instance(v8);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v10);
  v12 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v12, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0);
  if ( UserStoneFragmentNum >= FragmentCountToExchangeForStone )
  {
    if ( Instance )
    {
      CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v12, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(Master_object, v5);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__OpenStoneFragmentExchangeResultDialog(
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

  if ( (byte_596CA59 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl_OnCloseResultDialog__);
    byte_596CA59 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&buyCount, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v6);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v11 = SummonControl__get_StoneFragmentsShopEntity(this, v10);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v11,
                                               buyCount,
                                               0);
  v14 = SummonControl__get_StoneFragmentsShopEntity(this, v13);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v14,
                                           (ItemEntity_o *)Entity,
                                           buyCount,
                                           0);
  v17 = SummonControl__get_StoneFragmentsShopEntity(this, v16);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v17,
                                          (ItemEntity_o *)Entity,
                                          0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0);
  if ( !Instance )
LABEL_9:
    sub_2213CDC(StoneFragmentsShopEntity, v8);
  CommonUI__OpenItemExchangeResultDialog(
    (CommonUI_o *)Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v20,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__RequestStoneFragmentsShop(SummonControl_o *this, int32_t buyCount, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x20
  const MethodInfo *v9; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v11; // x1

  if ( (byte_596CA56 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SummonControl_EndRequestStoneFragmentsShop__);
    byte_596CA56 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v9);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_2213CDC(StoneFragmentsShopEntity, v11);
    PurchaseRequest__beginRequest(
      (PurchaseRequest_o *)Request_object,
      StoneFragmentsShopEntity->fields.id,
      this->fields.stoneExchangeCount,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    SummonControl__CloseStoneFragmentsExchangeDialog(this, *(const MethodInfo **)&buyCount);
  }
}


void SummonControl__ResetArrowTween(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v4; // x22
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x19
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v12; // x2

  if ( (byte_596CA28 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA28 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v4, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v10);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v6, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v11);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v5, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v12);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( Component_object )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_object, 0);
      return;
    }
LABEL_28:
    sub_2213CDC(leftArrowSprite, method);
  }
}


void SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isResult; // w8
  PlayMakerFSM_o *fsm; // x0
  __int64 *v5; // x8

  if ( (byte_596CA6E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11563/*"REQUEST_NG"*/);
    sub_2213A60(&StringLiteral_11564/*"REQUEST_NG_RESULT"*/);
    byte_596CA6E = 1;
  }
  isResult = this->fields.isResult;
  fsm = this->fields.fsm;
  this->fields.isShowingSummonEffect = 0;
  if ( !isResult )
  {
    if ( fsm )
    {
      v5 = &StringLiteral_11563/*"REQUEST_NG"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(fsm, method);
  }
  if ( !fsm )
    goto LABEL_9;
  v5 = &StringLiteral_11564/*"REQUEST_NG_RESULT"*/;
LABEL_8:
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0);
}


void SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x20
  float v7; // s8
  UICenterOnChild_o *centerChild; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x20
  float v12; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_596CA34 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA34 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_35;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_35;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0) >= 1 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
    if ( !bannerLoopCtr )
      goto LABEL_35;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         bannerLoopCtr,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v7 = *(float *)&Component_object[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v7 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0)) )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
        if ( !bannerLoopCtr )
          goto LABEL_35;
        centerChild = this->fields.centerChild;
        bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
        if ( !bannerLoopCtr )
          goto LABEL_35;
        bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)bannerLoopCtr,
                                                     this->fields.currentMoveIdx,
                                                     0);
        if ( !centerChild )
          goto LABEL_35;
        UICenterOnChild__CenterOn_56214248(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0, 0);
      }
    }
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_35;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_35;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0) >= 1 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
    if ( !bannerLoopCtr )
      goto LABEL_35;
    v11 = UnityEngine_Component__GetComponent_object_(
            bannerLoopCtr,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v12 = *(float *)&v11[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v12 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0)) )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
        if ( bannerLoopCtr )
        {
          summonMBannerCenterChild = this->fields.summonMBannerCenterChild;
          bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
          if ( bannerLoopCtr )
          {
            bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                         (UnityEngine_Transform_o *)bannerLoopCtr,
                                                         this->fields.currentMoveIdx,
                                                         0);
            if ( summonMBannerCenterChild )
            {
              UICenterOnChild__CenterOn_56214248(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0,
                0);
              return;
            }
          }
        }
LABEL_35:
        sub_2213CDC(bannerLoopCtr, method);
      }
    }
    else
    {
      v14 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v14, 0);
    }
  }
}


void SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  char *bgRoot; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  char *v13; // x21
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t v21; // w1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  __int64 v57; // x8
  unsigned __int64 v58; // x23
  System_String_o *v59; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_596CA71 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_18582/*"center_glow"*/);
    sub_2213A60(&StringLiteral_24331/*"ring_gard1_3"*/);
    sub_2213A60(&StringLiteral_24332/*"ring_gard2_1"*/);
    sub_2213A60(&StringLiteral_24333/*"ring_gard2_2"*/);
    sub_2213A60(&StringLiteral_24330/*"ring_gard1_2"*/);
    sub_2213A60(&StringLiteral_24334/*"ring_gard2_3"*/);
    sub_2213A60(&StringLiteral_24329/*"ring_gard1_1"*/);
    byte_596CA71 = 1;
  }
  bgRoot = (char *)sub_2213B20(string___TypeInfo, 7);
  if ( !bgRoot )
LABEL_19:
    sub_2213CDC(bgRoot, v6);
  v13 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v14 = StringLiteral_24329/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_24329/*"ring_gard1_1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(bgRoot + 32), v14, v7, v8, v9, v10, v11, v12);
  if ( (*((_DWORD *)v13 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_20;
  v21 = StringLiteral_24330/*"ring_gard1_2"*/;
  *((_QWORD *)v13 + 5) = StringLiteral_24330/*"ring_gard1_2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
  if ( *((_DWORD *)v13 + 6) <= 2u )
    goto LABEL_20;
  v28 = StringLiteral_24331/*"ring_gard1_3"*/;
  *((_QWORD *)v13 + 6) = StringLiteral_24331/*"ring_gard1_3"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
  if ( (*((_DWORD *)v13 + 6) & 0xFFFFFFFC) == 0 )
    goto LABEL_20;
  v35 = StringLiteral_24332/*"ring_gard2_1"*/;
  *((_QWORD *)v13 + 7) = StringLiteral_24332/*"ring_gard2_1"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), v35, v29, v30, v31, v32, v33, v34);
  if ( *((_DWORD *)v13 + 6) <= 4u
    || (v42 = StringLiteral_24333/*"ring_gard2_2"*/,
        *((_QWORD *)v13 + 8) = StringLiteral_24333/*"ring_gard2_2"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41),
        *((_DWORD *)v13 + 6) <= 5u)
    || (v49 = StringLiteral_24334/*"ring_gard2_3"*/,
        *((_QWORD *)v13 + 9) = StringLiteral_24334/*"ring_gard2_3"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 72), v49, v43, v44, v45, v46, v47, v48),
        *((_DWORD *)v13 + 6) <= 6u) )
  {
LABEL_20:
    sub_2213CE4(bgRoot);
  }
  v56 = StringLiteral_18582/*"center_glow"*/;
  *((_QWORD *)v13 + 10) = StringLiteral_18582/*"center_glow"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 80), v56, v50, v51, v52, v53, v54, v55);
  v57 = *((_QWORD *)v13 + 3);
  if ( (int)v57 >= 1 )
  {
    v58 = 0;
    while ( v58 < (unsigned int)v57 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v59 = *(System_String_o **)&v13[8 * v58 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v59, 1, 0);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, isDisp, 0);
      LODWORD(v57) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v58 >= (int)v57 )
        return;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__SetDispBtn(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0
  const MethodInfo *v6; // x2

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, isDisp, 0),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo) == 0) )
  {
    sub_2213CDC(summonInfoCtr, isDisp);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, isDisp, 0);
  MainMenuBar__SetMenuBtnColliderEnable(isDisp, 0, 0);
  SummonControl__setDispSummonInfo(this, isDisp, v6);
  MainMenuBar__setMenuActive(isDisp, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__SetGachaTime(SummonControl_o *this, int32_t num, int32_t type, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8
  int v5; // w9

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    sub_2213CDC(this, *(_QWORD *)&num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_ED965C[type - 1];
  gachaParamData->fields.gachaResourceNum = v5 * num;
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__SetMiniBannerArrowAndColliderEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *summonMBannerLeftArrowBtn; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Behaviour_o *summonMBannerInfoList; // x0
  UnityEngine_Object_o *summonMBannerRightArrowBtn; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CA1F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA1F = 1;
  }
  summonMBannerLeftArrowBtn = (UnityEngine_Object_o *)this->fields.summonMBannerLeftArrowBtn;
  memset(&v15, 0, sizeof(v15));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  if ( UnityEngine_Object__op_Inequality(summonMBannerLeftArrowBtn, 0, 0) )
  {
    summonMBannerInfoList = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !summonMBannerInfoList )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerInfoList, isEnable, 0);
  }
  summonMBannerRightArrowBtn = (UnityEngine_Object_o *)this->fields.summonMBannerRightArrowBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(summonMBannerRightArrowBtn, 0, 0) )
  {
    summonMBannerInfoList = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !summonMBannerInfoList )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerInfoList, isEnable, 0);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.summonMBannerInfoList, 0) )
    return;
  summonMBannerInfoList = (UnityEngine_Behaviour_o *)this->fields.summonMBannerInfoList;
  if ( !summonMBannerInfoList )
LABEL_25:
    sub_2213CDC(summonMBannerInfoList, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)summonMBannerInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v13 )
    {
      if ( !current )
        sub_2213CDC(v13, v14);
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)current, isEnable, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__Dispose__);
}


void SummonControl__SetupFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v11; // w21
  __int64 v12; // x1
  __int64 v13; // x2
  MasterMissionComponent_c *v14; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v17; // w1
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596CA52 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&StringLiteral_18246/*"btn_event_3"*/);
    byte_596CA52 = 1;
  }
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  v18 = 0;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_18246/*"btn_event_3"*/, 0);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0);
  v11 = 0;
  if ( UserStoneFragmentNum >= 1 && FragmentCountToExchangeForStone >= 1 )
    v11 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  HIDWORD(v18) = v11;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, this->fields.haveStone + v11 >= this->fields.needStone, 0);
  v14 = MasterMissionComponent_TypeInfo;
  if ( !*(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, v12, v13);
    v14 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v14->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v11 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v18 + 4, 0);
    if ( fragmentsCount )
    {
      UILabel__set_text(fragmentsCount, (System_String_o *)fragmentsExchangeButton, 0);
      fragmentsExchangeButton = (UnityEngine_GameObject_o *)this->fields.fragmentsLimit;
      if ( fragmentsExchangeButton )
      {
        fragmentsExchangeButton = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)fragmentsExchangeButton,
                                    0);
        if ( fragmentsExchangeButton )
        {
          v17 = 0;
          goto LABEL_27;
        }
      }
    }
LABEL_28:
    sub_2213CDC(fragmentsExchangeButton, method);
  }
  if ( !*(&v14->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v14, v12, v13);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  LODWORD(v18) = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v18, 0);
  if ( !fragmentsCount )
    goto LABEL_28;
  UILabel__set_text(fragmentsCount, (System_String_o *)fragmentsExchangeButton, 0);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)this->fields.fragmentsLimit;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  fragmentsExchangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fragmentsExchangeButton, 0);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  v17 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, v17, 0);
}


void SummonControl__ShowConfirmDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v7; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o *v16; // x21

  if ( (byte_596CA5F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BonusSelectSummonAssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__ShowConfirmDialog_b__231_0__);
    byte_596CA5F = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v9 = (BonusSelectSummonAssetManager_o *)sub_2213CCC(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v9, 0);
        this->fields.bonusSelectAssetManager = v9;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.bonusSelectAssetManager,
          (int32_t)v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl__ShowConfirmDialog_b__231_0__, 0);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v16, 0);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(Master_object, v5);
  }
  SummonControl__ShowConfirmDialogProcess(this, 1, v7);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__ShowConfirmDialogProcess(SummonControl_o *this, bool beforeDetailFlag, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  int gachaType; // w21
  struct GachaRqParamData_o *v7; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x24
  SummonControl_o *v9; // x23
  VaildGachaInfo_o *v10; // x20
  struct SummonInfoControl_o *v11; // x8
  int32_t summonInstance; // w0
  const MethodInfo *v13; // x1
  int32_t haveStone; // w21
  int32_t needStone; // w27
  int32_t haveChargeStone; // w28
  struct GachaRqParamData_o *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  GachaDetailEntity_o *v20; // x25
  struct GachaRqParamData_o *v21; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x23
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x26
  int32_t ScriptInt; // w0
  const MethodInfo *v27; // x3
  SummonControl_o *v28; // x0
  const MethodInfo *v29; // x2
  int32_t v30; // w22
  int32_t afterChargeStoneNum; // w28
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x25
  struct SummonInfoControl_o *v33; // x9
  struct GachaRqParamData_o *v34; // x8
  int32_t v35; // w23
  int v36; // w29
  int32_t v37; // w21
  int v38; // w8
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v41; // x9
  const MethodInfo_47A29F8 *v42; // x0
  struct GachaRqParamData_o *v43; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v45; // x21
  const MethodInfo *v46; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v47; // x0
  const MethodInfo *v48; // x3
  System_Int32_array *ScriptIntArray; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v50; // x0
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x2
  struct GachaRqParamData_o *v53; // x8
  int32_t gachaTime; // w22
  struct GachaRqParamData_o *v55; // x8
  const MethodInfo *v56; // x6
  SummonControl_o *v57; // x23
  struct SummonInfoControl_o *v58; // x9
  struct GachaRqParamData_o *v59; // x8
  int32_t payGachaPrice; // w27
  System_String_o *name; // x24
  int32_t haveFreeStone; // w26
  _BOOL4 v63; // w21
  _BOOL4 isPickup; // w29
  struct GachaRqParamData_o *v65; // x8
  int32_t gachaId; // w27
  int32_t v67; // w25
  struct GachaRqParamData_o *v68; // x8
  GachaDetailEntity_o *v69; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v70; // x23
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  System_Int32_array *v74; // x25
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x2
  struct GachaRqParamData_o *v77; // x8
  int32_t v78; // w22
  struct GachaRqParamData_o *v79; // x8
  SummonControl_o *v80; // x22
  struct SummonInfoControl_o *v81; // x8
  int32_t v82; // w27
  int32_t v83; // w25
  int32_t v84; // w24
  SummonConfirmDlgComponent_o *v85; // x28
  System_String_o *v86; // x29
  int32_t v87; // w26
  _BOOL4 v88; // w21
  struct GachaRqParamData_o *v89; // x8
  int32_t privilegeGachaTextId; // w9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x24
  struct GachaRqParamData_o *v92; // x8
  int32_t isPrivilege; // w9
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v95; // [xsp+68h] [xbp-A8h]
  SummonControl_o *summonCloseAt; // [xsp+80h] [xbp-90h]
  int32_t v97; // [xsp+88h] [xbp-88h]
  int32_t v98; // [xsp+8Ch] [xbp-84h]
  int32_t v99; // [xsp+90h] [xbp-80h]
  int32_t v100; // [xsp+90h] [xbp-80h]
  int32_t v101; // [xsp+94h] [xbp-7Ch]
  int32_t v102; // [xsp+94h] [xbp-7Ch]
  System_String_o *title; // [xsp+98h] [xbp-78h]
  int32_t titlea; // [xsp+98h] [xbp-78h]
  bool HasFlag; // [xsp+A4h] [xbp-6Ch]
  int32_t v106; // [xsp+A4h] [xbp-6Ch]
  GachaExtraGiftEntity_array *v107; // [xsp+A8h] [xbp-68h]
  GachaExtraGiftEntity_array *v108; // [xsp+A8h] [xbp-68h]

  v4 = this;
  if ( (byte_596CA60 & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_ConfirmMessageOpen__);
    sub_2213A60(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_2213A60(&Method_SummonControl_confirmResult__);
    sub_2213A60(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA60 = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_115;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_115;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v7 = v4->fields.gachaParamData;
  if ( !v7 )
    goto LABEL_115;
  if ( !this )
    goto LABEL_115;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v7->fields.gachaId,
                         0);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this )
    goto LABEL_115;
  v9 = this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_115;
  SummonResultComponent__setBeforeQpMana(
    (SummonResultComponent_o *)this,
    *(_QWORD *)&v9->fields.TUTORIAL_FORMATION_ARROW_POS,
    (int32_t)v9->fields.noneGachaInfo,
    0);
  this = (SummonControl_o *)v4->fields.vaildGachaList;
  if ( !this )
    goto LABEL_115;
  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v4->fields.currentIdx,
                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v10 = (VaildGachaInfo_o *)this;
  v4->fields._IsOneTimeFreeSummonDialog_k__BackingField = 0;
  if ( gachaType > 4 )
  {
    if ( gachaType == 5 )
    {
      summonInfoCtr = v4->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_115;
      ticketNum = summonInfoCtr->fields.ticketNum;
      v41 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v41 )
        goto LABEL_115;
      v42 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
      v4->fields.afterTicketNum = ticketNum - v41->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance(v42);
      if ( !this )
        goto LABEL_115;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v43 = v4->fields.gachaParamData;
      if ( !v43 || !this )
        goto LABEL_115;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v43->fields.gachaId, 0);
      v45 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v46);
      if ( !GachaDetailEntity
        || (v47 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v47,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
              v48),
            ScriptIntArray = GachaDetailEntity__GetScriptIntArray(GachaDetailEntity, v4->fields.DETAIL_SCRIPT_IDS, 0, 0),
            this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(
                                        GachaDetailEntity,
                                        v4->fields.DETAIL_SCRIPT_TYPE,
                                        0,
                                        0),
            !ScriptIntArray)
        || (_DWORD)this != 1
        || (v50 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v50,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v51),
            !beforeDetailFlag)
        || (this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v52),
            ((unsigned __int8)this & 1) != 0) )
      {
        v53 = v4->fields.gachaParamData;
        if ( v53 )
        {
          gachaTime = v53->fields.gachaTime;
          this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
            v55 = v4->fields.gachaParamData;
            if ( v55 )
            {
              if ( this )
              {
                this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            v55->fields.gachaId,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
                if ( this )
                {
                  v57 = this;
                  if ( LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x) )
                  {
                    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( !this )
                      goto LABEL_115;
                    this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
                    if ( !this )
                      goto LABEL_115;
                    this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                                (UserGachaExtraCountMaster_o *)this,
                                                LODWORD(v57->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                                0);
                    if ( (_DWORD)this == 9 )
                      ++gachaTime;
                  }
                }
                if ( v10 )
                {
                  this = (SummonControl_o *)v4->fields.confirmDlgInfo;
                  if ( this )
                  {
                    SummonConfirmDlgComponent__OpenConfirmTicket(
                      (SummonConfirmDlgComponent_o *)this,
                      v10->fields.name,
                      gachaTime,
                      v4->fields.haveTicketNum,
                      v4->fields.afterTicketNum,
                      v45,
                      v56);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_115:
        sub_2213CDC(this, beforeDetailFlag);
      }
    }
    else
    {
      if ( gachaType != 7 )
        return;
      haveStone = v4->fields.haveStone;
      needStone = v4->fields.needStone;
      haveChargeStone = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_115;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v17 = v4->fields.gachaParamData;
      if ( !v17 )
        goto LABEL_115;
      v107 = ListGachaExtraGift;
      if ( !this )
        goto LABEL_115;
      v20 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v17->fields.gachaId, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
      v21 = v4->fields.gachaParamData;
      if ( !v21 )
        goto LABEL_115;
      if ( !this )
        goto LABEL_115;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v21->fields.gachaId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_115;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v23);
      if ( !v20
        || !GachaDetailEntity__HasText(v20, 0)
        || (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
              v24),
            v25 = GachaDetailEntity__GetScriptIntArray(v20, v4->fields.DETAIL_SCRIPT_IDS, 0, 0),
            ScriptInt = GachaDetailEntity__GetScriptInt(v20, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0),
            !v25)
        || ScriptInt != 1
        || (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v27),
            !beforeDetailFlag)
        || SummonControl__CheckGachaNum(v28, v25, v29) )
      {
        this = (SummonControl_o *)v4->fields.summonInfoCtr;
        if ( !this )
          goto LABEL_115;
        v30 = haveStone - needStone;
        afterChargeStoneNum = (haveChargeStone - needStone) & ~((haveChargeStone - needStone) >> 31);
        this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0);
        confirmDlgInfo = v4->fields.confirmDlgInfo;
        if ( (int)this < 1 )
        {
          if ( v10 )
          {
            v58 = v4->fields.summonInfoCtr;
            if ( v58 )
            {
              v59 = v4->fields.gachaParamData;
              if ( v59 )
              {
                payGachaPrice = v58->fields.payGachaPrice;
                name = v10->fields.name;
                haveFreeStone = v4->fields.haveFreeStone;
                v63 = v59->fields.isAppendSummon;
                isPickup = v10->fields.isPickup;
                v98 = v4->fields.haveStone;
                v99 = v59->fields.gachaTime;
                v97 = v4->fields.haveChargeStone;
                this = (SummonControl_o *)VaildGachaInfo__CloseAt(v10, 0);
                title = name;
                v101 = payGachaPrice;
                summonCloseAt = this;
                if ( HasFlag )
                {
                  v65 = v4->fields.gachaParamData;
                  if ( !v65 )
                    goto LABEL_115;
                  gachaId = v65->fields.gachaId;
                }
                else
                {
                  gachaId = 0;
                }
                tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
                  tryGetBonusSelectData,
                  (Il2CppObject *)v4,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0);
                v92 = v4->fields.gachaParamData;
                if ( v92 )
                {
                  isPrivilege = v10->fields.isPrivilege;
                  if ( v10->fields.isPrivilege )
                    isPrivilege = v92->fields.gachaId;
                  if ( confirmDlgInfo )
                  {
                    SummonConfirmDlgComponent__OpenConfirmStone(
                      confirmDlgInfo,
                      title,
                      7,
                      v101,
                      v99,
                      v98,
                      haveFreeStone,
                      v97,
                      v30,
                      haveFreeStone,
                      afterChargeStoneNum,
                      callback,
                      v63,
                      isPickup,
                      (int64_t)summonCloseAt,
                      gachaId,
                      tryGetBonusSelectData,
                      v4->fields.bonusSelectAssetManager,
                      v107,
                      v92->fields.shopIdIdx,
                      isPrivilege,
                      v95);
                    return;
                  }
                }
              }
            }
          }
        }
        else
        {
          v33 = v4->fields.summonInfoCtr;
          if ( v33 )
          {
            v34 = v4->fields.gachaParamData;
            if ( v34 )
            {
              if ( confirmDlgInfo )
              {
                SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                  v4->fields.confirmDlgInfo,
                  (int32_t)this,
                  v33->fields.payGachaPrice,
                  v4->fields.haveStone,
                  v4->fields.haveFreeStone,
                  v4->fields.haveChargeStone,
                  v30,
                  v4->fields.haveFreeStone,
                  afterChargeStoneNum,
                  callback,
                  ListGachaExtraGift,
                  v34->fields.shopIdIdx,
                  isAppendSummon);
                return;
              }
            }
          }
        }
        goto LABEL_115;
      }
    }
LABEL_114:
    SummonControl__BeforeConfirmMessageOpen(v4, (const MethodInfo *)beforeDetailFlag);
    return;
  }
  if ( gachaType == 1 )
  {
    v35 = v4->fields.needStone;
    v36 = v4->fields.haveFreeStone;
    v37 = v4->fields.haveChargeStone;
    v38 = v36 - v35;
    if ( v36 >= v35 )
    {
      v36 -= v35;
    }
    else if ( v36 < 1 )
    {
      v37 -= v35;
    }
    else
    {
      v36 = 0;
      v37 += v38;
    }
    v67 = v4->fields.haveStone;
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_115;
    this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
    v68 = v4->fields.gachaParamData;
    if ( !v68 || !this )
      goto LABEL_115;
    titlea = v67;
    v106 = v35;
    v108 = ListGachaExtraGift;
    v69 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v68->fields.gachaId, 0);
    v70 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v70,
      (Il2CppObject *)v4,
      (intptr_t)Method_SummonControl_confirmResult__,
      v71);
    if ( !v69 )
      goto LABEL_83;
    this = (SummonControl_o *)GachaDetailEntity__HasText(v69, 0);
    if ( ((unsigned __int8)this & 1) == 0
      || (v70 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
          SummonConfirmDlgComponent_CallbackFunc___ctor(
            v70,
            (Il2CppObject *)v4,
            (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
            v73),
          v74 = GachaDetailEntity__GetScriptIntArray(v69, v4->fields.DETAIL_SCRIPT_IDS, 0, 0),
          this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v69, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0),
          !v74)
      || (_DWORD)this != 1
      || (v70 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
          SummonConfirmDlgComponent_CallbackFunc___ctor(
            v70,
            (Il2CppObject *)v4,
            (intptr_t)Method_SummonControl_confirmResult__,
            v75),
          !beforeDetailFlag)
      || (this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v74, v76), ((unsigned __int8)this & 1) != 0) )
    {
LABEL_83:
      v77 = v4->fields.gachaParamData;
      if ( !v77 )
        goto LABEL_115;
      v78 = v77->fields.gachaTime;
      if ( v78 == 1 )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_115;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
        v79 = v4->fields.gachaParamData;
        if ( !v79 || !this )
          goto LABEL_115;
        this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    v79->fields.gachaId,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( this && (v80 = this, LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x)) )
        {
          this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_115;
          this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
          if ( !this )
            goto LABEL_115;
          this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                      (UserGachaExtraCountMaster_o *)this,
                                      LODWORD(v80->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                      0);
          if ( (_DWORD)this == 9 )
            v78 = 2;
          else
            v78 = 1;
        }
        else
        {
          v78 = 1;
        }
      }
      v81 = v4->fields.summonInfoCtr;
      if ( v81 )
      {
        if ( v78 <= 2 && v81->fields._IsOneTimeFreeActive_k__BackingField )
        {
          this = (SummonControl_o *)v4->fields.confirmDlgInfo;
          v4->fields._IsOneTimeFreeSummonDialog_k__BackingField = 1;
          if ( this )
          {
            SummonConfirmDlgComponent__OpenConfirmOnePayFree(
              (SummonConfirmDlgComponent_o *)this,
              (System_String_o *)StringLiteral_1/*""*/,
              v70,
              v72);
            return;
          }
        }
        else if ( v10 )
        {
          v82 = v81->fields.payGachaPrice;
          v83 = v36;
          v84 = v37;
          v85 = v4->fields.confirmDlgInfo;
          v86 = v10->fields.name;
          v87 = v4->fields.haveChargeStone;
          v88 = v10->fields.isPickup;
          v100 = v4->fields.haveFreeStone;
          v102 = v4->fields.haveStone;
          this = (SummonControl_o *)VaildGachaInfo__CloseAt(v10, 0);
          v89 = v4->fields.gachaParamData;
          if ( v89 )
          {
            privilegeGachaTextId = v10->fields.isPrivilege;
            if ( v10->fields.isPrivilege )
              privilegeGachaTextId = v89->fields.gachaId;
            if ( v85 )
            {
              SummonConfirmDlgComponent__OpenConfirmStone(
                v85,
                v86,
                1,
                v82,
                v78,
                v102,
                v100,
                v87,
                titlea - v106,
                v83,
                v84,
                v70,
                0,
                v88,
                (int64_t)this,
                0,
                0,
                0,
                v108,
                v89->fields.shopIdIdx,
                privilegeGachaTextId,
                v95);
              return;
            }
          }
        }
      }
      goto LABEL_115;
    }
    goto LABEL_114;
  }
  if ( gachaType != 3 )
    return;
  this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v11 = v4->fields.summonInfoCtr;
  if ( !v11 )
    goto LABEL_115;
  summonInstance = (int32_t)v9->fields.summonInstance;
  v4->fields.isDailyGacha = v11->fields.isFree;
  if ( !UserStatusFlag__GetAutoSaleBitFlag(summonInstance, 0) || !SummonControl__CheckQpManaOverCheck(v4, v13) )
    SummonControl__friendPointSummonConfirm(v4, v13);
}


int32_t SummonControl__SlotCompare(
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
    sub_2213CDC(this, a);
  slotId = b->fields.slotId;
  v5 = a->fields.slotId;
  if ( slotId < v5 )
    return -1;
  if ( slotId > v5 )
    return 1;
  id = b->fields.id;
  v8 = a->fields.id;
  if ( id < v8 )
    return -1;
  return id > v8;
}


void SummonControl__SummonSceneRefresh(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596CA65 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__SummonSceneRefresh_b__242_0__);
    byte_596CA65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__242_0__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, v4, 0);
}


bool SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  SummonControl_c *v14; // x0
  System_String_o *String_83398240; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Object_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int max_length; // w8
  SelectBonusData_o **m_Items; // x9
  SelectBonusData_o *v27; // x1

  if ( (byte_596CA5B & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_2213A60(&JsonManager_TypeInfo);
    this = (SummonControl_o *)sub_2213A60(&SummonControl_TypeInfo);
    byte_596CA5B = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)selectBonusData, 0, v6, v7, v8, v9, v10, v11);
  v14 = SummonControl_TypeInfo;
  if ( !*(&SummonControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, v12, v13);
    v14 = SummonControl_TypeInfo;
  }
  String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0);
  if ( System_String__IsNullOrEmpty(String_83398240, 0) )
    goto LABEL_6;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v16, v17);
  v18 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_83398240,
          (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v18 )
  {
    max_length = v18->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v18) = 0;
      return (char)v18;
    }
    m_Items = (SelectBonusData_o **)v18->m_Items;
    while ( 1 )
    {
      v27 = *m_Items;
      if ( !*m_Items )
        sub_2213CDC(v18, 0);
      if ( v27->fields.gachaId == gachaId )
        break;
      --max_length;
      ++m_Items;
      if ( !max_length )
        goto LABEL_6;
    }
    *selectBonusData = v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)selectBonusData, (int32_t)v27, v19, v20, v21, v22, v23, v24);
    LOBYTE(v18) = 1;
  }
  return (char)v18;
}


void SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  void *vaildGachaList; // x0
  __int64 v4; // x2
  GachaAppendMaster_o *v5; // x20
  bool HundredSummon; // w8
  GachaAppendEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596CA35 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_596CA35 = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  entity = 0;
  if ( !vaildGachaList )
    goto LABEL_22;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList )
    goto LABEL_22;
  if ( VaildGachaInfo__HasFlag((VaildGachaInfo_o *)vaildGachaList, 2, 0) )
  {
    vaildGachaList = this->fields.summonInfoCtr;
    if ( vaildGachaList )
    {
      vaildGachaList = SummonInfoControl__get_SummonInfoLayout((SummonInfoControl_o *)vaildGachaList, 0);
      if ( vaildGachaList )
      {
        SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)vaildGachaList, 0);
        return;
      }
    }
LABEL_22:
    sub_2213CDC(vaildGachaList, method);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v4);
  vaildGachaList = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !this->fields.vaildGachaList )
    goto LABEL_22;
  v5 = (GachaAppendMaster_o *)vaildGachaList;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList || !v5 )
    goto LABEL_22;
  HundredSummon = GachaAppendMaster__TryGetHundredSummon(v5, &entity, *((_DWORD *)vaildGachaList + 4), 0);
  vaildGachaList = this->fields.summonInfoCtr;
  if ( HundredSummon )
  {
    if ( !vaildGachaList )
      goto LABEL_22;
    vaildGachaList = SummonInfoControl__get_MultiExSummonInfoLayout((SummonInfoControl_o *)vaildGachaList, 0);
    if ( !vaildGachaList )
      goto LABEL_22;
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)vaildGachaList, 0);
  }
  else
  {
    if ( !vaildGachaList )
      goto LABEL_22;
    vaildGachaList = SummonInfoControl__get_SummonInfoLayout((SummonInfoControl_o *)vaildGachaList, 0);
    if ( !vaildGachaList )
      goto LABEL_22;
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)vaildGachaList, 0);
  }
}


System_Collections_IEnumerator_o *SummonControl__WaitBattleChrLoad(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CA77 & 1) == 0 )
  {
    sub_2213A60(&SummonControl__WaitBattleChrLoad_d__265_TypeInfo);
    byte_596CA77 = 1;
  }
  v3 = sub_2213CCC(SummonControl__WaitBattleChrLoad_d__265_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__265___ctor((SummonControl__WaitBattleChrLoad_d__265_o *)v3, 0, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void SummonControl___BonusSelectServantSelectDialog_b__318_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v18; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v19; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v20; // x24
  __int64 v21; // x2
  void *centerChild; // x8
  System_Action_o *v23; // x19
  Il2CppObject *v24; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  v2 = this;
  if ( (byte_596CAB6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__);
    sub_2213A60(&Method_SummonControl_SetDispBtn__);
    sub_2213A60(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_2213A60(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__318_1__);
    this = (SummonControl_o *)sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CAB6 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__59717116(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int32_t)Component_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init((BonusSelectSummonConfirmDialog_o *)this, v2->fields.bonusSelectAssetManager, 0);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v18 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v18, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0);
  v19 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0);
  v20 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v20,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, method, v21);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  centerChild = this->fields.centerChild;
  v23 = (System_Action_o *)*((_QWORD *)centerChild + 9);
  if ( !v23 )
  {
    if ( !HIDWORD(this->fields.summonListDialog) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v21);
      centerChild = SummonControl___c_TypeInfo->static_fields;
    }
    v24 = *(Il2CppObject **)centerChild;
    v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v23, v24, Method_SummonControl___c__BonusSelectServantSelectDialog_b__318_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__318_1 = v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__318_1,
      (int32_t)v23,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_2213CDC(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v18, v19, v20, v23, 0);
}


bool SummonControl___CheckFriendPointSummonUpdate_b__234_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0 )
    sub_2213CDC(this, ent);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void SummonControl___DialogCallBack_b__269_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *v8; // x19

  if ( (byte_596CAB1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl_EndCloseDialogCallBack__);
    byte_596CAB1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)v5;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
  if ( !v8 )
LABEL_8:
    sub_2213CDC(v5, v6);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonControl___OnClickHisotry_b__303_0(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_2213CDC(0, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0);
}


void SummonControl___OnClickSummonDetail_b__301_0(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.isSummonDetailOpening = 0;
  SummonControl__reDispSummonBannerList(this, method);
}


bool SummonControl___OnClickSummonListBtn_b__305_0(SummonControl_o *this, GachaEntity_o *x, const MethodInfo *method)
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
    sub_2213CDC(this, x);
  }
  return 0;
}


void SummonControl___OnEndSummonEffect_b__300_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CAB5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5643/*"END_FADE"*/);
    byte_596CAB5 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5643/*"END_FADE"*/, 0);
}


void SummonControl___ShowConfirmDialog_b__231_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v18; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v19; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v20; // x24
  __int64 v21; // x2
  void *centerChild; // x8
  System_Action_o *v23; // x19
  Il2CppObject *v24; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  v2 = this;
  if ( (byte_596CAAC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_2213A60(&Method_SummonControl_SetDispBtn__);
    sub_2213A60(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_2213A60(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__ShowConfirmDialog_b__231_1__);
    this = (SummonControl_o *)sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CAAC = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__59717116(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int32_t)Component_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init((BonusSelectSummonConfirmDialog_o *)this, v2->fields.bonusSelectAssetManager, 0);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v18 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v18, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0);
  v19 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0);
  v20 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v20,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, method, v21);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  centerChild = this->fields.centerChild;
  v23 = (System_Action_o *)*((_QWORD *)centerChild + 4);
  if ( !v23 )
  {
    if ( !HIDWORD(this->fields.summonListDialog) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v21);
      centerChild = SummonControl___c_TypeInfo->static_fields;
    }
    v24 = *(Il2CppObject **)centerChild;
    v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v23, v24, Method_SummonControl___c__ShowConfirmDialog_b__231_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__231_1 = v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__231_1,
      (int32_t)v23,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_2213CDC(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v18, v19, v20, v23, 0);
}


void SummonControl___SummonSceneRefresh_b__242_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_596CAAD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596CAAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        SummonControl__quit(this, v5),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void SummonControl___exeFormation_b__164_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596CAA8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__exeFormation_b__164_2__);
    byte_596CAA8 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__164_2__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v4, 0);
}


void SummonControl___exeFormation_b__164_2(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CAA9 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596CAA9 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  TutorialFlag__SetProgress(2, 0);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


void SummonControl___executeEnhanceTresureDevice_b__287_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  CommonUI_o *v7; // x20

  if ( (byte_596CAB4 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5642/*"END_EFFECT"*/);
    byte_596CAB4 = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (Instance = this->fields.fsm) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5642/*"END_EFFECT"*/, 0);
}


void SummonControl___loadAssetsForSummon_b__248_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CAAE & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&StringLiteral_12846/*"START_GACHA"*/);
    byte_596CAAE = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12846/*"START_GACHA"*/, 0),
        (fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_2213CDC(fsm, method);
  }
  CrashReporter__SetNowState((CrashReporter_o *)fsm, (System_String_o *)StringLiteral_12846/*"START_GACHA"*/, 0);
}


void SummonControl___openAfterSummonInfo_b__163_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596CAA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__openAfterSummonInfo_b__163_2__);
    byte_596CAA7 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__163_2__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_37396472((CommonUI_o *)Instance, v4, 0);
}


void SummonControl___openAfterSummonInfo_b__163_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void SummonControl___resetResultList_b__282_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  __int64 v4; // x2
  CommonUI_o *v5; // x19

  if ( (byte_596CAB3 & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_5661/*"END_SUMMON"*/);
    sub_2213A60(&StringLiteral_7802/*"IN_SummonScene"*/);
    byte_596CAB3 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_11;
  SummonResultComponent__clearResultList(summonResultInfo, 0);
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_11;
  SummonResultComponent__SetActive(summonResultInfo, 0, 0);
  summonResultInfo = (SummonResultComponent_o *)this->fields.fsm;
  if ( !summonResultInfo )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5661/*"END_SUMMON"*/, 0);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)summonResultInfo;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v4);
  if ( !v5
    || (CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_2213CDC(summonResultInfo, method);
  }
  CrashReporter__SetNowState((CrashReporter_o *)summonResultInfo, (System_String_o *)StringLiteral_7802/*"IN_SummonScene"*/, 0);
}


void SummonControl___setChangeSummonInfo_b__194_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_596CAAB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13323/*"SetBannerCenter"*/);
    byte_596CAAB = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13323/*"SetBannerCenter"*/, 0.1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0);
}


void SummonControl___setUserResourceDisp_b__171_0(SummonControl_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CAAA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    byte_596CAAA = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v9 = stoneCount;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v6, 0);
  if ( !currentStoneNumLb )
    sub_2213CDC(v7, v8);
  UILabel__set_text(currentStoneNumLb, v7, 0);
}


void SummonControl___showSummonEffect_b__255_0(SummonControl_o *this, const MethodInfo *method)
{
  void *maskObject; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x0
  SummonEffectComponent_o **p_summonComp; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v19; // x9
  char v20; // w10
  int32_t gachaId; // w8
  const MethodInfo_47A29F8 *v22; // x0
  System_String_o *Value; // x0
  System_String_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  SummonControl___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x24
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__255_1; // x25
  Il2CppObject *v31; // x26
  struct SummonControl___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_List_int__o *v40; // x24
  float v41; // s0
  struct GachaInfos_array *v42; // x8
  il2cpp_array_size_t max_length; // x21
  float v44; // s8
  __int64 v45; // x22
  struct GachaInfos_array *v46; // x8
  GachaInfos_o *v47; // x23
  int32_t v48; // w26
  bool v49; // w25
  int32_t Data; // w28
  int32_t v51; // w29
  char isNew; // w27
  int v53; // w27
  _DWORD *v54; // x25
  const MethodInfo *v55; // x2
  __int64 v56; // x2
  _BOOL4 v57; // w20
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  _BOOL4 v61; // w27
  WeightRate_int__o *v62; // x28
  int32_t v63; // w0
  bool v64; // zf
  int32_t v65; // w0
  int32_t v66; // w0
  ServantLimitMaster_o *v67; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+38h] [xbp-78h]

  if ( (byte_596CAAF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__showSummonEffect_b__255_1__);
    sub_2213A60(&SummonControl___c_TypeInfo);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    sub_2213A60(&StringLiteral_5656/*"END_PREPARATION"*/);
    sub_2213A60(&StringLiteral_13000/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/);
    sub_2213A60(&StringLiteral_3041/*"BGM_SUMMON_1"*/);
    byte_596CAAF = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0);
  SummonControl__SetDispBgParts(this, 0, v4);
  SummonControl__setDispSummonInfo(this, 0, v5);
  maskObject = this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_98;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0);
  SummonControl__clearResultList(this, v6);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v8);
  SoundManager__playBgm((System_String_o *)StringLiteral_3041/*"BGM_SUMMON_1"*/, 0);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_98;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  p_summonComp = &this->fields.summonComp;
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.summonComp,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  maskObject = this->fields.summonComp;
  if ( !maskObject )
    goto LABEL_98;
  SummonEffectComponent__Initialize((SummonEffectComponent_o *)maskObject, 0);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_98;
  if ( gachaParamData->fields.gachaTime != 1 )
    goto LABEL_15;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_98;
  if ( LODWORD(gachaResInfoList->max_length) == 2 )
  {
    v19 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_98;
    v20 = 1;
  }
  else
  {
LABEL_15:
    v19 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_98;
    v20 = 0;
  }
  gachaId = gachaParamData->fields.gachaId;
  v19->fields.isNoSkip = v20;
  v22 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  v19->fields.gachaId = gachaId;
  maskObject = SingletonMonoBehaviour_object___get_Instance(v22);
  if ( !maskObject )
    goto LABEL_98;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_98;
  v67 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_98;
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)maskObject,
                                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_98;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_98;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_13000/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0);
  if ( Value )
  {
    v24 = System_String__Split(Value, 0x2Cu, 0, 0);
    v27 = SummonControl___c_TypeInfo;
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
    if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v25, v26);
      v27 = SummonControl___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__255_1 = (System_Func_object__int__o *)static_fields->__9__255_1;
    if ( !_9__255_1 )
    {
      if ( !*(&v27->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v27, v25, v26);
        static_fields = SummonControl___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__255_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__255_1, v31, Method_SummonControl___c__showSummonEffect_b__255_1__, 0);
      v32 = SummonControl___c_TypeInfo->static_fields;
      v32->__9__255_1 = (struct System_Func_string__int__o *)_9__255_1;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v32->__9__255_1,
        (int32_t)_9__255_1,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v28,
                                                                 (System_Func_TSource__TResult__o *)_9__255_1,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
    v40 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v39,
                                                      (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v40 = 0;
  }
  v41 = UnityEngine_Random__get_value(0);
  v42 = this->fields.gachaResInfoList;
  if ( v42 )
  {
    max_length = v42->max_length;
    if ( (int)max_length >= 1 )
    {
      v44 = v41;
      v45 = 0;
      while ( 1 )
      {
        v46 = this->fields.gachaResInfoList;
        if ( !v46 )
          goto LABEL_98;
        if ( (unsigned int)v45 >= LODWORD(v46->max_length) )
          sub_2213CE4(maskObject);
        v47 = v46->m_Items[v45];
        if ( !v47 )
          goto LABEL_98;
        if ( SvtType__IsCommandCode(v47->fields.type, 0) )
        {
          maskObject = v68;
          if ( !v68 )
            goto LABEL_98;
          maskObject = DataMasterBase_object__object__int___GetEntity(
                         v68,
                         v47->fields.objectId,
                         (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
          if ( !maskObject )
            goto LABEL_98;
          v48 = *((_DWORD *)maskObject + 16);
          v49 = 0;
LABEL_41:
          Data = 0;
          v51 = 3;
          isNew = v47->fields.isNew;
          if ( v40 )
            goto LABEL_93;
          goto LABEL_90;
        }
        maskObject = MasterData_object;
        if ( !MasterData_object )
          goto LABEL_98;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       MasterData_object,
                       v47->fields.objectId,
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_98;
        v53 = *((_DWORD *)maskObject + 21);
        v54 = maskObject;
        if ( !ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0) )
          break;
        maskObject = v67;
        if ( !v67 )
          goto LABEL_98;
        maskObject = ServantLimitMaster__GetEntity(v67, v47->fields.objectId, v47->fields.limitCount, 0);
        if ( !maskObject )
          goto LABEL_98;
        v48 = *((_DWORD *)maskObject + 6);
        if ( !SummonControl__IsRankUpClassId(this, v54[20], v55) )
          goto LABEL_55;
        if ( v48 != 5 )
        {
          if ( v48 == 4 )
          {
            v49 = v44 < 0.4;
            v48 = 4;
            goto LABEL_56;
          }
          goto LABEL_55;
        }
        v49 = v44 < 0.2;
        v48 = 5;
LABEL_56:
        v51 = 0;
        if ( v53 <= 6 )
        {
          if ( v53 == 3 )
          {
LABEL_74:
            Data = 0;
            isNew = 0;
            if ( v40 )
              goto LABEL_93;
            goto LABEL_90;
          }
          if ( v53 == 6 )
          {
            v57 = v47->fields.isNew;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v56);
            maskObject = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
            if ( !maskObject )
              goto LABEL_98;
            maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                           (ServantVoiceMaster_o *)maskObject,
                           v47->fields.objectId,
                           0);
            Data = 0;
            v51 = 1;
            isNew = v57;
            if ( v57 && maskObject )
            {
              if ( !v40 )
              {
                v40 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor(
                  v40,
                  (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
                if ( !v40 )
                  goto LABEL_98;
              }
              items = v40->fields._items;
              method = (const MethodInfo *)(unsigned int)v47->fields.objectId;
              p_summonComp = &this->fields.summonComp;
              v59 = Method_System_Collections_Generic_List_int__Add__;
              ++v40->fields._version;
              if ( !items )
                goto LABEL_98;
              size = v40->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v40,
                  (int32_t)method,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                Data = 0;
              }
              else
              {
                Data = 0;
                v40->fields._size = size + 1;
                items->m_Items[size] = (int)method;
              }
              isNew = 1;
              v51 = 1;
LABEL_93:
              maskObject = (void *)System_Collections_Generic_List_int___Contains(
                                     v40,
                                     v47->fields.objectId,
                                     (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
              goto LABEL_94;
            }
            p_summonComp = &this->fields.summonComp;
            if ( v40 )
              goto LABEL_93;
            goto LABEL_90;
          }
        }
        else
        {
          switch ( v53 )
          {
            case 7:
              goto LABEL_74;
            case 11:
              goto LABEL_41;
            case 8:
              Data = 0;
              isNew = 0;
              v51 = 1;
              if ( v40 )
                goto LABEL_93;
              goto LABEL_90;
          }
        }
        v61 = v47->fields.isNew;
        v62 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
        WeightRate_int____ctor(v62, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
        if ( v48 == 4 )
        {
          if ( !v62 )
            goto LABEL_98;
          WeightRate_int___setWeight(v62, 60, 0, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          WeightRate_int___setWeight(v62, 40, 1, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          v63 = UnityEngine_Random__Range_83400680(0, v62->fields.totalweight, 0);
          Data = WeightRate_int___getData(v62, v63, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
          v51 = 2;
          isNew = v61;
          v64 = Data == 0;
          v48 = 4;
        }
        else
        {
          isNew = v61;
          if ( v48 != 5 )
          {
            Data = 0;
            v51 = 2;
            if ( v40 )
              goto LABEL_93;
            goto LABEL_90;
          }
          if ( !v62 )
            goto LABEL_98;
          WeightRate_int___setWeight(v62, 60, 0, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          WeightRate_int___setWeight(v62, 20, 1, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          v51 = 2;
          WeightRate_int___setWeight(v62, 20, 2, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          v65 = UnityEngine_Random__Range_83400680(0, v62->fields.totalweight, 0);
          v66 = WeightRate_int___getData(v62, v65, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
          v64 = v66 == 0;
          Data = v66;
          v48 = 5;
        }
        if ( !v64 )
          v49 = 0;
        if ( v40 )
          goto LABEL_93;
LABEL_90:
        maskObject = 0;
LABEL_94:
        if ( !*p_summonComp )
          goto LABEL_98;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v47->fields.objectId,
          v47->fields.limitCount,
          v49,
          isNew,
          Data,
          v48,
          v51,
          (unsigned __int8)maskObject & 1,
          v47->fields.userSvtId,
          0);
        if ( (_DWORD)max_length == (_DWORD)++v45 )
          goto LABEL_96;
      }
      maskObject = v67;
      if ( !v67 )
        goto LABEL_98;
      maskObject = ServantLimitMaster__GetEntity(v67, v47->fields.objectId, v47->fields.limitCount, 0);
      if ( !maskObject )
        goto LABEL_98;
      v48 = *((_DWORD *)maskObject + 6);
LABEL_55:
      v49 = 0;
      goto LABEL_56;
    }
  }
LABEL_96:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_98:
    sub_2213CDC(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5656/*"END_PREPARATION"*/, 0);
}


void SummonControl___showSummonResultInfo_b__273_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl___c_c *v4; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x20
  GetSvtCoin_array *overflowSvtCoinInfos; // x19
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__273_1; // x21
  Il2CppObject *v9; // x22
  struct SummonControl___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596CAB2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__showSummonResultInfo_b__273_1__);
    sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CAB2 = 1;
  }
  v4 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, method, v2);
    v4 = SummonControl___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__273_1 = static_fields->__9__273_1;
  if ( !_9__273_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__273_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__273_1, v9, Method_SummonControl___c__showSummonResultInfo_b__273_1__, 0);
    v10 = SummonControl___c_TypeInfo->static_fields;
    v10->__9__273_1 = _9__273_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__273_1, (int32_t)_9__273_1, v11, v12, v13, v14, v15, v16);
  }
  if ( !overflowSvtCoinInfo )
    sub_2213CDC(v4, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__273_1, 0);
}


void SummonControl___showSvtTalk_b__263_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CAB0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3612/*"CLICK_OK"*/);
    byte_596CAB0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3612/*"CLICK_OK"*/, 0);
}


void SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v4);
  if ( UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0) )
    SummonControl__friendPointQpManaCheck(this, v5);
  else
    SummonControl__ShowConfirmDialog(this, v5);
}


void SummonControl__autoSellSettingChange2(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v4);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0)
    || !SummonControl__CheckQpManaOverCheck(this, v5) )
  {
    SummonControl__ShowConfirmDialog(this, v5);
  }
}


void SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_596CA6A & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_596CA6A = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_2213CDC(0, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0, 0);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  SummonControl__ShowConfirmDialogProcess(this, 0, v6);
}


void SummonControl__callbackGachaDraw(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  SummonControl_o *v15; // x20
  __int64 v16; // x8
  struct GachaInfos_array *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  struct System_Int32_array *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x8
  struct GetSvtCoin_array *v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x8
  struct System_Int32_array *v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x8
  struct GachaExtraGifts_array *v49; // x1

  v4 = this;
  if ( (byte_596CA6D & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_SummonControl_resData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596CA6D = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0)
    || System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    SummonControl__SendEventRequestNg(v4, v5);
    return;
  }
  v8 = (Il2CppObject *)System_String__Concat_75694928(
                         (System_String_o *)StringLiteral_16427/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16691/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6, v7);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v8,
                              (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_22;
  v15 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v16 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v16 )
    goto LABEL_22;
  v17 = *(struct GachaInfos_array **)(v16 + 16);
  v4->fields.gachaResInfoList = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.gachaResInfoList,
    (int32_t)v17,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v24 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v24 )
    goto LABEL_22;
  v25 = *(struct System_Int32_array **)(v24 + 24);
  v4->fields.canRankUpClassIds = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.canRankUpClassIds,
    (int32_t)v25,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v32 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v32 )
    goto LABEL_22;
  v33 = *(struct GetSvtCoin_array **)(v32 + 32);
  v4->fields.overflowSvtCoinInfos = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.overflowSvtCoinInfos,
    (int32_t)v33,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v40 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v40 )
    goto LABEL_22;
  v41 = *(struct System_Int32_array **)(v40 + 40);
  v4->fields.extraGiftIds = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.extraGiftIds, (int32_t)v41, v34, v35, v36, v37, v38, v39);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_2213CE4(this);
  v48 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v48
    || (v49 = *(struct GachaExtraGifts_array **)(v48 + 48),
        v4->fields.GachaExtraGiftList = v49,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v4->fields.GachaExtraGiftList,
          (int32_t)v49,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        (this = (SummonControl_o *)v4->fields.fsm) == 0) )
  {
LABEL_22:
    sub_2213CDC(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11565/*"REQUEST_OK"*/, 0);
}


void SummonControl__callbackTutorialSet(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CA70 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    byte_596CA70 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11565/*"REQUEST_OK"*/, 0);
}


void SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  PlayMakerFSM_o *fsm; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_596CA88 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl___c__DisplayClass286_0__checkEnhanceTresureDevice_b__0__);
    sub_2213A60(&SummonControl___c__DisplayClass286_0_TypeInfo);
    sub_2213A60(&StringLiteral_9712/*"NO_EXIST"*/);
    byte_596CA88 = 1;
  }
  v3 = sub_2213CCC(SummonControl___c__DisplayClass286_0_TypeInfo);
  SummonControl___c__DisplayClass286_0___ctor((SummonControl___c__DisplayClass286_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v3 + 24), v12) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v13, v14);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass286_0__checkEnhanceTresureDevice_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(fsm, v5);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9712/*"NO_EXIST"*/, 0);
}


void SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CA86 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9712/*"NO_EXIST"*/);
    byte_596CA86 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_2213CDC(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9712/*"NO_EXIST"*/, 0);
  }
  else
  {
    SummonControl__checkEnhanceTresureDevice(this, method);
  }
}


void SummonControl__checkEnhanceTresureDeviceSingle(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v14; // x8
  int32_t objectId; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x19
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_596CA87 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonControl___c__DisplayClass285_0__checkEnhanceTresureDeviceSingle_b__0__);
    sub_2213A60(&SummonControl___c__DisplayClass285_0_TypeInfo);
    sub_2213A60(&StringLiteral_9712/*"NO_EXIST"*/);
    byte_596CA87 = 1;
  }
  v3 = sub_2213CCC(SummonControl___c__DisplayClass285_0_TypeInfo);
  SummonControl___c__DisplayClass285_0___ctor((SummonControl___c__DisplayClass285_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  gachaResInfoList = this->fields.gachaResInfoList;
  *(_DWORD *)(v3 + 24) = 0;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_2213CE4(Instance);
  v14 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v14 )
    goto LABEL_16;
  objectId = v14->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0) )
  {
    *(_DWORD *)(v3 + 24) = objectId;
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16, v17);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass285_0__checkEnhanceTresureDeviceSingle_b__0__,
      0);
    if ( v18 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v18, 1, DEFAULT_FADE_TIME, v21, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(Instance, v5);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9712/*"NO_EXIST"*/, 0);
}


void SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v7; // x8
  int gachaType; // w8
  struct SummonInfoControl_o *summonInfoCtr; // x8
  __int64 *v10; // x8

  if ( (byte_596CA4B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&StringLiteral_3492/*"CHECK_STONE"*/);
    sub_2213A60(&StringLiteral_12730/*"SHOW_CONFIRM_DLG"*/);
    sub_2213A60(&StringLiteral_3489/*"CHECK_POINT"*/);
    sub_2213A60(&StringLiteral_3070/*"BONUS_SELECT_CHECK_STONE"*/);
    byte_596CA4B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        Master_object,
                                                                        gachaParamData->fields.gachaId,
                                                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0 )
  {
LABEL_31:
    sub_2213CDC(Master_object, v5);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0);
  v7 = this->fields.gachaParamData;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_31;
    if ( v7->fields.gachaType != 7 )
      goto LABEL_14;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
    if ( !Master_object )
      goto LABEL_31;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3070/*"BONUS_SELECT_CHECK_STONE"*/, 0);
    v7 = this->fields.gachaParamData;
  }
  if ( !v7 )
    goto LABEL_31;
LABEL_14:
  gachaType = v7->fields.gachaType;
  if ( gachaType <= 4 )
  {
    if ( gachaType != 1 )
    {
      if ( gachaType == 3 )
      {
        summonInfoCtr = this->fields.summonInfoCtr;
        if ( !summonInfoCtr )
          goto LABEL_31;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
        if ( !summonInfoCtr->fields.isFree )
        {
          if ( !Master_object )
            goto LABEL_31;
          v10 = &StringLiteral_3489/*"CHECK_POINT"*/;
          goto LABEL_28;
        }
        if ( !Master_object )
          goto LABEL_31;
        goto LABEL_27;
      }
      return;
    }
LABEL_23:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
    if ( !Master_object )
      goto LABEL_31;
    v10 = &StringLiteral_3492/*"CHECK_STONE"*/;
    goto LABEL_28;
  }
  if ( gachaType == 5 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
    if ( !Master_object )
      goto LABEL_31;
LABEL_27:
    v10 = &StringLiteral_12730/*"SHOW_CONFIRM_DLG"*/;
LABEL_28:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)*v10, 0);
    return;
  }
  if ( gachaType == 7 )
    goto LABEL_23;
}


void SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_596CA74 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7254/*"GET_MULTI"*/);
    byte_596CA74 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_7254/*"GET_MULTI"*/, 0);
}


bool SummonControl__checkIsMaxDrawNum(
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
    sub_2213CDC(0, drawUsrGachaEnt);
  return GachaMaster__CheckIsMaxDrawNum(gachaMst, drawUsrGachaEnt, &drawGachaEnta, 0);
}


void SummonControl__checkIsNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SummonControl_o *v3; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x2
  GachaInfos_o *v6; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_596CA75 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9648/*"NEW_SVT"*/);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_7268/*"GO_BACK"*/);
    byte_596CA75 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_2213CE4(this);
  v6 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v6 )
    goto LABEL_14;
  if ( v6->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v6->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9648/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v7 = &StringLiteral_7268/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0);
}


void SummonControl__checkIsNewSvtMulti(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 max_length_low; // x9
  GachaInfos_o *v7; // x22

  v3 = this;
  if ( (byte_596CA7C & 1) == 0 )
  {
    this = (SummonControl_o *)sub_2213A60(&SummonControl_TypeInfo);
    byte_596CA7C = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  v3->fields.resType = 1;
  if ( !gachaResInfoList )
LABEL_15:
    sub_2213CDC(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(gachaResInfoList->max_length);
    if ( (__int64)v5 >= (int)max_length_low )
      break;
    if ( v5 >= max_length_low )
      sub_2213CE4(this);
    this = (SummonControl_o *)SummonControl_TypeInfo;
    v7 = gachaResInfoList->m_Items[v5];
    if ( *(&SummonControl_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( !v7 )
        goto LABEL_14;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, method, v2);
      if ( !v7 )
        goto LABEL_14;
    }
    if ( v7->fields.isNew && !v7->fields.sellMana && !v7->fields.sellQp )
    {
      v3->fields.resType = 2;
      return;
    }
LABEL_14:
    gachaResInfoList = v3->fields.gachaResInfoList;
    ++v5;
    if ( !gachaResInfoList )
      goto LABEL_15;
  }
}


void SummonControl__checkIsNewSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonControl_o *v3; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned int max_length; // w10
  __int64 getSvtIdx; // x9
  __int64 *v7; // x8
  GachaInfos_o *v8; // x20
  struct GachaInfos_array *v9; // x8
  __int64 v10; // x9
  GachaInfos_o *v11; // x8
  int32_t objectId; // w20
  bool v13; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v3 = this;
  if ( (byte_596CA7F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&SummonControl_TypeInfo);
    sub_2213A60(&StringLiteral_10021/*"OLD_SVT"*/);
    sub_2213A60(&StringLiteral_6702/*"FINAL_SVT"*/);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_9648/*"NEW_SVT"*/);
    byte_596CA7F = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_30;
  max_length = gachaResInfoList->max_length;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (int)getSvtIdx > (int)(max_length - 1) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_6702/*"FINAL_SVT"*/;
LABEL_17:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0);
      return;
    }
LABEL_30:
    sub_2213CDC(this, method);
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    goto LABEL_31;
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  this = (SummonControl_o *)SummonControl_TypeInfo;
  if ( *(&SummonControl_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( !v8 )
      goto LABEL_15;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, method, v2);
    if ( !v8 )
      goto LABEL_15;
  }
  if ( !v8->fields.isNew || v8->fields.sellMana || v8->fields.sellQp )
  {
LABEL_15:
    this = (SummonControl_o *)v3->fields.fsm;
    if ( !this )
      goto LABEL_30;
    goto LABEL_16;
  }
  v9 = v3->fields.gachaResInfoList;
  if ( !v9 )
    goto LABEL_30;
  v10 = v3->fields.getSvtIdx;
  if ( (unsigned int)v10 >= LODWORD(v9->max_length) )
LABEL_31:
    sub_2213CE4(this);
  v11 = v9->m_Items[v10];
  if ( !v11 )
    goto LABEL_30;
  objectId = v11->fields.objectId;
  v13 = SummonControl__checkOverlapSvt(v3, objectId, v2);
  this = (SummonControl_o *)v3->fields.fsm;
  if ( v13 )
  {
    if ( !this )
      goto LABEL_30;
LABEL_16:
    v7 = &StringLiteral_10021/*"OLD_SVT"*/;
    goto LABEL_17;
  }
  if ( !this )
    goto LABEL_30;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_9648/*"NEW_SVT"*/, 0);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_30;
  m_CachedPtr = this->fields.m_CachedPtr;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_30;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      objectId,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = objectId;
  }
}


bool SummonControl__checkMaxDrawNum(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w20
  UserGachaEntity_o *UserGachaData; // x21
  const MethodInfo *v7; // x2
  GachaEntity_o *CurrentGachaData; // x0
  __int64 v9; // x1
  int maxDrawNum; // w8

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    return 0;
  gachaId = gachaParamData->fields.gachaId;
  UserGachaData = SummonControl__getUserGachaData(this, gachaId, v2);
  CurrentGachaData = SummonControl__getCurrentGachaData(this, gachaId, v7);
  if ( !UserGachaData )
    return 0;
  if ( !CurrentGachaData )
    sub_2213CDC(0, v9);
  maxDrawNum = CurrentGachaData->fields.maxDrawNum;
  if ( maxDrawNum < 1 || UserGachaData->fields.num < maxDrawNum )
    return 0;
  this->fields.lastMaxDrawGachaId = gachaId;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  struct System_Collections_Generic_List_int__o *befSvtList; // x8
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  v4 = this;
  if ( (byte_596CA80 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (SummonControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_596CA80 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
    goto LABEL_13;
  size = befSvtList->fields._size;
  v7 = size - 1;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (SummonControl_o *)v4->fields.befSvtList;
      if ( !this )
        break;
      result = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)this,
                 v8,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
      if ( !result && v7 != v8++ )
        continue;
      return result;
    }
LABEL_13:
    sub_2213CDC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


void SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PlayMakerFSM_o *fsm; // x0
  __int64 *v9; // x8
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  int32_t v14; // w8
  __int64 v15; // x2
  CommonUI_o *v16; // x19

  if ( (byte_596CA1D & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_3574/*"CLEAR_TUTORIAL"*/);
    sub_2213A60(&StringLiteral_11637/*"RETURN_TUTORIAL"*/);
    byte_596CA1D = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( !TutorialFlag__IsProgressDone(1, 0) )
    goto LABEL_52;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
  if ( !TutorialFlag__Get_47388504(101, 0) )
  {
    this->fields.isDoneTutorial = 0;
    v14 = 1;
  }
  else
  {
LABEL_52:
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
    if ( !TutorialFlag__IsProgressDone(2, 0) )
    {
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v6, v7);
      if ( TutorialFlag__Get_47388504(101, 0) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_49;
        v9 = &StringLiteral_11637/*"RETURN_TUTORIAL"*/;
LABEL_41:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v9, 0);
        goto LABEL_45;
      }
    }
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v6, v7);
    if ( !TutorialFlag__IsProgressDone(2, 0) )
      goto LABEL_26;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10, v11);
    if ( !TutorialFlag__Get_47388504(101, 0) )
      goto LABEL_26;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v12, v11);
    if ( TutorialFlag__Get_47388504(107, 0) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v11);
      fsm = (PlayMakerFSM_o *)this->fields.summonInfoCtr;
      if ( !fsm )
        goto LABEL_49;
      SummonInfoControl__SetTutorialBtnEnable((SummonInfoControl_o *)fsm, 1, 0);
      fsm = (PlayMakerFSM_o *)this->fields.summonInfoCtr;
      if ( !fsm )
        goto LABEL_49;
      SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)fsm, 1, 0);
      fsm = (PlayMakerFSM_o *)this->fields.titleInfo;
      if ( !fsm )
        goto LABEL_49;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)fsm, 1, 0);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
      fsm = (PlayMakerFSM_o *)this->fields.indexPanel;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0);
      fsm = (PlayMakerFSM_o *)this->fields.leftArrowBtn;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0);
      fsm = (PlayMakerFSM_o *)this->fields.rightArrowBtn;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0);
      fsm = (PlayMakerFSM_o *)this->fields.summonHelpInfo;
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0);
      fsm = (PlayMakerFSM_o *)this->fields.detailInfo;
      if ( !fsm )
        goto LABEL_49;
      fsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)fsm, 0);
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0);
      fsm = (PlayMakerFSM_o *)this->fields.summonListInfo;
      if ( !fsm )
        goto LABEL_49;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 1, 0);
      this->fields.isResult = 0;
      SummonControl__showHelpImg(this, v13);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_49;
      v9 = &StringLiteral_3574/*"CLEAR_TUTORIAL"*/;
      goto LABEL_41;
    }
    v14 = 4;
  }
  this->fields.tutorialKind = v14;
  SummonControl__progTutorial(this, v4);
LABEL_45:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)fsm;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v15);
  if ( !v16 )
LABEL_49:
    sub_2213CDC(fsm, v6);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtKeep; // w21
  int32_t svtEquipKeep; // w24
  BalanceConfig_c *v8; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w20
  int v11; // w8
  int32_t v12; // w25
  int32_t v13; // w24
  int32_t v14; // w21
  int32_t Count; // w0
  int32_t v16; // w20
  __int64 v17; // x2
  SummonControl_o *v18; // x21
  BalanceConfig_c *v19; // x0
  int32_t v20; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v21; // x23
  CommonUI_o *v22; // x0
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  struct UserGameEntity_o *v26; // x8
  SummonControl_o *v27; // x20
  int32_t v28; // w21
  int32_t v29; // w22
  struct UserGameEntity_o *v30; // x8
  SummonControl_o *v31; // x20
  int32_t v32; // w21
  int32_t v33; // w22
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_596CA43 & 1) == 0 )
  {
    sub_2213A60(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_2213A60(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_2213A60(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_2213A60(&StringLiteral_6816/*"FRIEND_GACHA_ADD_LIMIT"*/);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_3490/*"CHECK_RESOURCE"*/);
    byte_596CA43 = 1;
  }
  gachaParamData = v3->fields.gachaParamData;
  *(_QWORD *)servantEquipSum = 0;
  if ( !gachaParamData )
    goto LABEL_41;
  if ( gachaParamData->fields.gachaType == 3 )
  {
    userGameEntity = v3->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_41;
    svtKeep = userGameEntity->fields.svtKeep;
    svtEquipKeep = userGameEntity->fields.svtEquipKeep;
    if ( !byte_596A5C7 )
    {
      sub_2213A60(&BalanceConfig_TypeInfo);
      byte_596A5C7 = 1;
    }
    v8 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v8 = BalanceConfig_TypeInfo;
    }
    CommandCodeFrameMax = v8->static_fields->CommandCodeFrameMax;
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !this )
      goto LABEL_41;
    Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6816/*"FRIEND_GACHA_ADD_LIMIT"*/, 0);
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_41;
    UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0);
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_41;
    this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    if ( !this )
      goto LABEL_41;
    v11 = Value & ~(Value >> 31);
    v12 = v11 + CommandCodeFrameMax;
    v13 = v11 + svtEquipKeep;
    v14 = v11 + svtKeep;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0);
    v16 = Count;
    if ( servantEquipSum[1] < v14 && servantEquipSum[0] < v13 && Count < v12 )
    {
      this = (SummonControl_o *)v3->fields.fsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CHECK_RESOURCE"*/, 0);
        return;
      }
LABEL_41:
      sub_2213CDC(this, method);
    }
    if ( servantEquipSum[1] >= v14 )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = v3->fields.userGameEntity;
      if ( !v26 )
        goto LABEL_41;
      v27 = this;
      v28 = servantEquipSum[1];
      v29 = v26->fields.svtKeep;
      v21 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotSvtFrameDlg__,
        0);
      if ( !v27 )
        goto LABEL_41;
      v22 = (CommonUI_o *)v27;
      v23 = v28;
      v24 = v29;
      v25 = 0;
    }
    else if ( servantEquipSum[0] >= v13 )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = v3->fields.userGameEntity;
      if ( !v30 )
        goto LABEL_41;
      v31 = this;
      v32 = servantEquipSum[0];
      v33 = v30->fields.svtEquipKeep;
      v21 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotSvtEqFrameDlg__,
        0);
      if ( !v31 )
        goto LABEL_41;
      v22 = (CommonUI_o *)v31;
      v23 = v32;
      v24 = v33;
      v25 = 1;
    }
    else
    {
      if ( Count < v12 )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v3->fields.userGameEntity )
        goto LABEL_41;
      v18 = this;
      if ( !byte_596A5C7 )
      {
        sub_2213A60(&BalanceConfig_TypeInfo);
        byte_596A5C7 = 1;
      }
      v19 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v17);
        v19 = BalanceConfig_TypeInfo;
      }
      v20 = v19->static_fields->CommandCodeFrameMax;
      v21 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_2213CCC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0);
      if ( !v18 )
        goto LABEL_41;
      v22 = (CommonUI_o *)v18;
      v23 = v16;
      v24 = v20;
      v25 = 2;
    }
    CommonUI__OpenSvtFrameShortDlg(v22, v23, v24, v25, 0, v21, 0, 0);
  }
  else
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( !this )
      goto LABEL_41;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CHECK_RESOURCE"*/, 0);
  }
}


void SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
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

  if ( (byte_596CA4C & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SummonControl_closeShotPointDlg__);
    sub_2213A60(&StringLiteral_12730/*"SHOW_CONFIRM_DLG"*/);
    byte_596CA4C = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TblUserMaster___);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_17;
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, userGameEntity->fields.userId, 0);
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
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_2213CDC(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12730/*"SHOW_CONFIRM_DLG"*/, 0);
}


void SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  int32_t gachaType; // w10
  int32_t haveStoneNum; // w20
  int32_t HaveFreeStoneNum_k__BackingField; // w11
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w20
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v14; // x24
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x5
  struct GachaRqParamData_o *v17; // x8
  int v18; // w8
  SummonConfirmDlgComponent_o *v19; // x20
  int32_t v20; // w21
  int32_t v21; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v22; // x23
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x4

  v3 = this;
  if ( (byte_596CA4E & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_SummonControl_closeShotStoneDlg__);
    this = (SummonControl_o *)sub_2213A60(&StringLiteral_12730/*"SHOW_CONFIRM_DLG"*/);
    byte_596CA4E = 1;
  }
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_17;
  gachaType = gachaParamData->fields.gachaType;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  v3->fields.haveStone = haveStoneNum;
  v3->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
  v3->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  if ( gachaType == 7 )
  {
    gachaResourceNum = gachaParamData->fields.gachaResourceNum;
    v3->fields.needStone = gachaResourceNum;
    if ( HaveChargeStoneNum_k__BackingField < gachaResourceNum )
    {
      confirmDlgInfo = v3->fields.confirmDlgInfo;
      haveChargeStone = v3->fields.haveChargeStone;
      haveFreeStone = v3->fields.haveFreeStone;
      v14 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v15);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          haveChargeStone,
          haveFreeStone,
          v14,
          v16);
        return;
      }
LABEL_17:
      sub_2213CDC(this, method);
    }
  }
  else
  {
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
    this = (SummonControl_o *)System_Math__Max_77153260(haveStoneNum, HaveChargeStoneNum_k__BackingField, 0);
    v17 = v3->fields.gachaParamData;
    if ( !v17 )
      goto LABEL_17;
    v18 = v17->fields.gachaResourceNum;
    v3->fields.needStone = v18;
    if ( (int)this < v18 )
    {
      SummonControl__SetupFragmentsExchangeButton(v3, method);
      v19 = v3->fields.confirmDlgInfo;
      v20 = v3->fields.haveFreeStone;
      v21 = v3->fields.haveChargeStone;
      v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v22,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v23);
      if ( !v19 )
        goto LABEL_17;
      SummonConfirmDlgComponent__OpenShortStone(v19, v20, v21, v22, v24);
      return;
    }
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12730/*"SHOW_CONFIRM_DLG"*/, 0);
}


void SummonControl__clearBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int v4; // w24
  UnityEngine_Transform_o *v5; // x21
  UnityEngine_Transform_o *v6; // x20
  int v7; // w23
  int32_t childCount; // w22
  int v9; // w26
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x24
  int v13; // w24
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x23
  int v17; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *v20; // x21
  int32_t v21; // w0
  int v22; // w20
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x21

  if ( (byte_596CA41 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA41 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)bannerLoopCtr,
                                               0);
  if ( !this->fields.sliderGrid )
    goto LABEL_40;
  v4 = (int)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid,
                                               0);
  if ( !this->fields.sliderGrid2 )
    goto LABEL_40;
  v5 = (UnityEngine_Transform_o *)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid2,
                                               0);
  if ( !v5 )
    goto LABEL_40;
  v6 = (UnityEngine_Transform_o *)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(v5, 0);
  if ( !v6 )
    goto LABEL_40;
  v7 = (int)bannerLoopCtr;
  childCount = UnityEngine_Transform__get_childCount(v6, 0);
  if ( v4 >= 1 )
  {
    v9 = v4 + 1;
    while ( 1 )
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v9 - 2,
                                                   0);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v9 <= 1 )
        goto LABEL_17;
    }
LABEL_40:
    sub_2213CDC(bannerLoopCtr, method);
  }
LABEL_17:
  if ( v7 >= 1 )
  {
    v13 = v7 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v5, v13 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_40;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      UnityEngine_Object__Destroy_83459800(v16, 0);
    }
    while ( (unsigned int)--v13 > 1 );
  }
  if ( childCount >= 1 )
  {
    v17 = childCount + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v6, v17 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_40;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
      UnityEngine_Object__Destroy_83459800(v20, 0);
    }
    while ( (unsigned int)--v17 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_40;
  v21 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( v21 - 1 >= 0 )
  {
    v22 = v21;
    while ( 1 )
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   --v22,
                                                   0);
      if ( !bannerLoopCtr )
        break;
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      UnityEngine_Object__Destroy_83459800(v25, 0);
      if ( v22 <= 0 )
        return;
    }
    goto LABEL_40;
  }
}


void SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  System_Collections_Generic_List_int__c *v4; // x0
  System_Collections_Generic_List_int__o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CA83 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596CA83 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0),
        (summonResultInfo = this->fields.summonResultInfo) == 0) )
  {
    sub_2213CDC(summonResultInfo, method);
  }
  SummonResultComponent__SetActive(summonResultInfo, 0, 0);
  v4 = System_Collections_Generic_List_int__TypeInfo;
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(v4);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.befSvtList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SummonControl__closeShotCommandCodeFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_596CA46 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA46 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  v7 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( res == 2 )
  {
    if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotCommandCodeFrameDlg__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464916(v10, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 2, 0);
      if ( v9 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, 22, 1, (Il2CppObject *)v10, 0);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(Instance, v6);
  }
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596CA4D & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_closeShotPointDlg__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA4D = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  v5 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotPointDlg__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_2213CDC(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_596CA4F & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_closeShotStoneDlg__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    sub_2213A60(&StringLiteral_7270/*"GO_BUY_STONE"*/);
    byte_596CA4F = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_15;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  v6 = Method_SummonControl_closeShotStoneDlg__;
  if ( !res )
  {
    if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotStoneDlg__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v8 = &StringLiteral_3582/*"CLICK_CANCEL"*/;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(confirmDlgInfo, res);
  }
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_15;
  v8 = &StringLiteral_7270/*"GO_BUY_STONE"*/;
LABEL_14:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v8, 0);
}


void SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20
  AvalonSceneManager_o *v11; // x0
  int32_t v12; // w1
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *v14; // x19
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x19
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_596CA45 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_2213A60(&StringLiteral_13267/*"ServantEquipList"*/);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_13266/*"ServantEQCombine"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA45 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  v7 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  switch ( res )
  {
    case 2:
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464916(v10, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 1, 0);
        if ( v16 )
        {
          v11 = (AvalonSceneManager_o *)v16;
          v12 = 22;
          goto LABEL_22;
        }
      }
      goto LABEL_27;
    case 1:
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464828(v10, (System_String_o *)StringLiteral_13267/*"ServantEquipList"*/, 0);
        if ( v14 )
        {
          v11 = (AvalonSceneManager_o *)v14;
          v12 = 71;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_2213CDC(Instance, v6);
    case 0:
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464828(v10, (System_String_o *)StringLiteral_13266/*"ServantEQCombine"*/, 0);
        if ( v9 )
        {
          v11 = (AvalonSceneManager_o *)v9;
          v12 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene(v11, v12, 1, (Il2CppObject *)v10, 0);
          return;
        }
      }
      goto LABEL_27;
  }
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20
  int32_t v11; // w1
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *v13; // x3
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *v15; // x19
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_596CA44 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    sub_2213A60(&StringLiteral_13262/*"ServantCombine"*/);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA44 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  v7 = Method_SummonControl_closeShotSvtFrameDlg__;
  switch ( res )
  {
    case 2:
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtFrameDlg__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464916(v10, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 0, 0);
        if ( v15 )
        {
          Instance = (CommonUI_o *)v15;
          v11 = 22;
          goto LABEL_22;
        }
      }
LABEL_28:
      sub_2213CDC(Instance, v6);
    case 1:
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtFrameDlg__);
      v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v11 = 71;
          v13 = 0;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v11, 1, v13, 0);
          return;
        }
      }
      goto LABEL_28;
    case 0:
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtFrameDlg__);
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464828(v10, (System_String_o *)StringLiteral_13262/*"ServantCombine"*/, 0);
        if ( v9 )
        {
          Instance = (CommonUI_o *)v9;
          v11 = 32;
LABEL_22:
          v13 = (Il2CppObject *)v10;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
  }
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_2213A78(Method_SummonControl_closeShotSvtFrameDlg__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonCautionDlgComponent_o *cautionDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v14; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v17; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v18; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v19; // x24

  if ( (byte_596CA68 & 1) == 0 )
  {
    sub_2213A60(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_2213A60(&Method_SummonControl_SetDispBtn__);
    sub_2213A60(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_2213A60(&Method_SummonControl_confirmCautionResult__);
    sub_2213A60(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA68 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_2213A78(Method_SummonControl_confirmCautionResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( cautionDlgInfo )
        {
          if ( GachaEntity__HasFlag((GachaEntity_o *)cautionDlgInfo, 8, 0) )
          {
            cautionDlgInfo = (SummonCautionDlgComponent_o *)this->fields.bonusSelectSummonConfirmDialog;
            if ( cautionDlgInfo )
            {
              BonusSelectSummonConfirmDialog__Init(
                (BonusSelectSummonConfirmDialog_o *)cautionDlgInfo,
                this->fields.bonusSelectAssetManager,
                0);
              v14 = this->fields.gachaParamData;
              if ( v14 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v14->fields.gachaId;
                v17 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v17,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0);
                v18 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v18,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0);
                v19 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_2213CCC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v19,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v17, v18, v19, 0, 0);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_2213CDC(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  v6 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SummonControl_confirmCautionResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  SummonControl__loadAssetsForSummon(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_596CA67 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_confirmResult__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA67 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_2213A78(Method_SummonControl_confirmResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  v6 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SummonControl_confirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  SummonControl__loadAssetsForSummon(this, v8);
}


void SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  int size; // w28
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  SummonControl___c__DisplayClass180_0_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *bannerLoopCtr; // x20
  __int64 v23; // x2
  __int64 noneGachaInfo; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x22
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UICenterOnChild_o *v41; // x22
  MissionNaviTransitionBoardItem_o *p_onFinished; // x22
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v44; // x23
  System_Delegate_o *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Delegate_o *v52; // x8
  System_Delegate_c *v53; // x1
  struct UIScrollView_o *summonBannerScrollView; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v56; // x23
  System_Delegate_o *v57; // x0
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  int32_t height; // w0
  __int64 v65; // x2
  struct UIWrapContent_o *v66; // x22
  float v67; // s0
  float v68; // s1
  float v69; // s1
  float v70; // s8
  unsigned int v71; // w9
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  UnityEngine_Object_c *v73; // x0
  int v74; // w10
  unsigned int v75; // w8
  __int64 v76; // x2
  Il2CppObject *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  Il2CppObject *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct UICenterOnChild_o *v92; // x22
  System_Delegate_o *v93; // t1
  SpringPanel_OnFinished_o *v94; // x23
  System_Delegate_o *v95; // x0
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  struct UIScrollView_o *summonMBannerScrollView; // x22
  System_Delegate_o *v101; // t1
  UIScrollView_OnDragNotification_o *v102; // x23
  System_Delegate_o *v103; // x0
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  int32_t v108; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v111; // x25
  UnityEngine_Transform_o *v112; // x20
  UnityEngine_Transform_o *v113; // x24
  int v114; // w22
  System_String_o *v115; // x0
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_Collections_Generic_List_object__o *v122; // x8
  struct System_Object_array *items; // x9
  _QWORD *v124; // x10
  __int64 v125; // x11
  GachaBannerComponent_o *v126; // x27
  Il2CppClass **v127; // x0
  unsigned int v128; // w8
  int v129; // w9
  int32_t v130; // w24
  int v131; // w21
  System_String_o *v132; // x0
  System_String_o *v133; // x28
  const MethodInfo *v134; // x2
  UnityEngine_Object_o *v135; // x29
  __int64 v136; // x1
  __int64 v137; // x2
  VaildGachaInfo_o *Item; // x26
  System_String_o *v139; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x27
  UnityEngine_Transform_o *v143; // x20
  UnityEngine_Transform_o *v144; // x28
  System_String_o *name; // x0
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  System_Collections_Generic_List_object__o *summonMBannerInfoList; // x8
  struct System_Object_array *v153; // x9
  _QWORD *v154; // x10
  __int64 v155; // x11
  SummonMiniBannerComponent_o *v156; // x25
  Il2CppClass **v157; // x0
  System_String_o *v158; // x0
  System_String_o *v159; // x28
  const MethodInfo *v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  UnityEngine_Object_o *v163; // x27
  const MethodInfo *v164; // x2
  __int64 v165; // x1
  __int64 v166; // x2
  Il2CppObject *Component_object; // x29
  SummonMiniBannerComponent_CallbackFunc_o *v168; // x20
  System_Action_int__bool__o *v169; // x20
  UnityEngine_Transform_o *v170; // x21
  UnityEngine_Transform_o *v171; // x22
  int v172; // w8
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__59472212; // x23
  System_Action_object__o *v174; // x20
  unsigned int v175; // w24
  UnityEngine_Transform_o *v176; // x2
  UnityEngine_Transform_o *v177; // x23
  int v178; // w24
  UnityEngine_Transform_o *v179; // x2
  UnityEngine_Transform_o *v180; // x23
  int32_t v181; // w21
  int32_t childCount; // w0
  int v183; // w20
  float v184; // s0
  int v185; // w8
  float v186; // s0
  float v187; // s8
  struct UIGrid_o *sliderGrid2; // x8
  __int64 v189; // x1
  __int64 v190; // x2
  UnityEngine_Component_o *sliderGrid; // x21
  bool IsUnderVista; // w0
  float v193; // s0
  __int64 v194; // x1
  __int64 v195; // x2
  UnityEngine_Component_o *v196; // x20
  bool v197; // w0
  float v198; // s0
  UnityEngine_Component_o *v199; // x20
  const MethodInfo *v200; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v202; // x21
  SummonInfoControl_ClickDelegate_o *v203; // x22
  const MethodInfo *v204; // x2
  const MethodInfo *v205; // x1
  SummonControl___c__DisplayClass180_0_o *v206; // [xsp+8h] [xbp-88h]
  int v207; // [xsp+10h] [xbp-80h]
  unsigned int v208; // [xsp+14h] [xbp-7Ch]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+18h] [xbp-78h]
  int v210; // [xsp+28h] [xbp-68h]
  int v211; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v213; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CA2F & 1) == 0 )
  {
    sub_2213A60(&System_Action_UISprite__TypeInfo);
    sub_2213A60(&System_Action_int__bool__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_UISprite___);
    sub_2213A60(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIScrollView_OnDragNotification_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    sub_2213A60(&Method_SummonControl_OnCenterOnChildFinishedMBanner__);
    sub_2213A60(&Method_SummonControl_OnCenterOnChildFinished__);
    sub_2213A60(&Method_SummonControl_OnClickMiniBanner__);
    sub_2213A60(&Method_SummonControl_OnDragStarted__);
    sub_2213A60(&Method_SummonControl_exeSummon__);
    sub_2213A60(&Method_SummonControl___c__DisplayClass180_0__createSummonInfo_b__0__);
    sub_2213A60(&SummonControl___c__DisplayClass180_0_TypeInfo);
    sub_2213A60(&StringLiteral_5144/*"D5"*/);
    sub_2213A60(&StringLiteral_21581/*"img_summon_"*/);
    sub_2213A60(&StringLiteral_21584/*"img_summon_mini_236"*/);
    sub_2213A60(&StringLiteral_21583/*"img_summon_mini_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA2F = 1;
  }
  v211 = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v4;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bannerInfoList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.summonMBannerInfoList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !this->fields.vaildGachaList )
  {
    noneGachaInfo = (__int64)this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 1, 0);
    return;
  }
  v19 = (SummonControl___c__DisplayClass180_0_o *)sub_2213CCC(SummonControl___c__DisplayClass180_0_TypeInfo);
  SummonControl___c__DisplayClass180_0___ctor(v19, 0);
  bannerLoopCtr = (UnityEngine_Object_o *)this->fields.bannerLoopCtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0, 0) )
  {
    noneGachaInfo = (__int64)this->fields.summonBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_196;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_196;
    v25 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.bannerLoopCtr = (struct UIWrapContent_o *)v25;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bannerLoopCtr,
      (int32_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v23);
  noneGachaInfo = UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)this->fields.bannerLoopCtr;
    if ( !noneGachaInfo )
      goto LABEL_196;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_196;
    v34 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v34;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.centerChild,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = *p_centerChild;
  if ( !v41 )
    goto LABEL_196;
  onFinished = (System_Delegate_o *)v41->fields.onFinished;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&v41->fields.onFinished;
  v44 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v44, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0);
  v45 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v44, 0);
  v52 = v45;
  if ( v45 )
  {
    v53 = (System_Delegate_c *)SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v45->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_66;
    p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v45;
    if ( v45->klass != v53 )
      goto LABEL_66;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  v206 = v19;
  sub_2213A04(p_onFinished, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_196;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&summonBannerScrollView->fields.onDragStarted;
  v56 = (UIScrollView_OnDragNotification_o *)sub_2213CCC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v56, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0);
  v57 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v56, 0);
  v52 = v57;
  if ( v57 )
  {
    v53 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v57->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_66;
    p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v57;
    if ( v57->klass != v53 )
      goto LABEL_66;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_2213A04(p_onFinished, (int32_t)v57, v46, v47, v58, v59, v60, v61);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_196;
  size = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0);
  height = UnityEngine_Screen__get_height(0);
  v66 = this->fields.bannerLoopCtr;
  v67 = (float)width / (float)height;
  v68 = 2.3333;
  if ( v67 <= 2.3333 )
    v68 = (float)width / (float)height;
  v69 = (float)((float)(v68 / 1.7778) * 1024.0) + 4.0;
  if ( v67 >= 1.7778 )
    v70 = v69;
  else
    v70 = 1028.0;
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18, v65);
  if ( !v66 )
    goto LABEL_196;
  v71 = vcvtms_s32_f32(v70);
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  v73 = UnityEngine_Object_TypeInfo;
  v74 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( floorf(v70) == INFINITY )
    v75 = 0x80000000;
  else
    v75 = v71;
  v66->fields.itemSize = v75;
  if ( !v74 )
    j_il2cpp_runtime_class_init_0(v73, v18, v65);
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0, 0) )
  {
    noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_196;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_196;
    v77 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v77;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.summonMBannerLoopCtr,
      (int32_t)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
  }
  summonMBannerCenterChild = (UnityEngine_Object_o *)this->fields.summonMBannerCenterChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v76);
  noneGachaInfo = UnityEngine_Object__op_Equality(summonMBannerCenterChild, 0, 0);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)this->fields.summonMBannerLoopCtr;
    if ( !noneGachaInfo )
      goto LABEL_196;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_196;
    v85 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    this->fields.summonMBannerCenterChild = (struct UICenterOnChild_o *)v85;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.summonMBannerCenterChild,
      (int32_t)v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v92 = this->fields.summonMBannerCenterChild;
  if ( !v92 )
    goto LABEL_196;
  v93 = (System_Delegate_o *)v92->fields.onFinished;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&v92->fields.onFinished;
  v94 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v94, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0);
  v95 = System_Delegate__Combine(v93, (System_Delegate_o *)v94, 0);
  v52 = v95;
  if ( v95 )
  {
    v53 = (System_Delegate_c *)SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v95->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_66;
    p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v95;
    if ( v95->klass != v53 )
      goto LABEL_66;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_2213A04(p_onFinished, (int32_t)v95, v46, v47, v96, v97, v98, v99);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_196;
  v101 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&summonMBannerScrollView->fields.onDragStarted;
  v102 = (UIScrollView_OnDragNotification_o *)sub_2213CCC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v102, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0);
  v103 = System_Delegate__Combine(v101, (System_Delegate_o *)v102, 0);
  v52 = v103;
  if ( !v103 )
    goto LABEL_67;
  v53 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v103->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v103;
    if ( v103->klass == v53 )
      goto LABEL_68;
  }
LABEL_66:
  sub_221405C(v52, v53, v46, v47);
LABEL_67:
  p_onFinished->klass = 0;
LABEL_68:
  sub_2213A04(p_onFinished, (int32_t)v52, v46, v47, v104, v105, v106, v107);
  v210 = 2 * size;
  if ( 2 * size >= 1 )
  {
    v108 = 0;
    v207 = size - 1;
    v208 = size & 0x80000000;
    while ( 1 )
    {
      noneGachaInfo = (__int64)this->fields.bannerLoopCtr;
      if ( !noneGachaInfo )
        break;
      summonBannerPrefab = this->fields.summonBannerPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonBannerPrefab,
                                 transform,
                                 0,
                                 0);
      if ( !noneGachaInfo )
        break;
      v111 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
      v112 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_5969AE5 )
      {
        noneGachaInfo = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v112 )
        break;
      UnityEngine_Transform__set_localScale(v112, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v111, 0);
      if ( !this->fields.bannerLoopCtr )
        break;
      v113 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.bannerLoopCtr,
                                 0);
      if ( !noneGachaInfo )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noneGachaInfo, 0);
      if ( !v113 )
        break;
      UnityEngine_Transform__set_localPosition(v113, localPosition, 0);
      v114 = v108 + 1;
      v211 = v108 + 1;
      v115 = System_Int32__ToString_77138656((int32_t)&v211, (System_String_o *)StringLiteral_5144/*"D5"*/, 0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v111, v115, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v111,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v122 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v122->fields._items;
      v124 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v122->fields._version;
      if ( !items )
        break;
      v125 = v122->fields._size;
      v126 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v125 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v122,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
      }
      else
      {
        v127 = &items->obj.klass + v125;
        v122->fields._size = v125 + 1;
        v127[4] = (Il2CppClass *)v126;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v127 + 4), (int32_t)v126, v116, v117, v118, v119, v120, v121);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      v128 = v208 + v108;
      v129 = (int)(v208 + v108) <= v207 ? 0 : size;
      if ( !noneGachaInfo )
        break;
      v130 = v128 - v129;
      v131 = size;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v128 - v129,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v132 = System_Int32__ToString((int)noneGachaInfo + 40, 0);
      v133 = System_String__Concat_75651716((System_String_o *)StringLiteral_21581/*"img_summon_"*/, v132, 0);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg(this, v133, v134);
      if ( !this->fields.vaildGachaList )
        break;
      v135 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = (VaildGachaInfo_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                                   v130,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v136, v137);
      noneGachaInfo = UnityEngine_Object__op_Equality(v135, 0, 0);
      if ( !v126 )
        break;
      v139 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v133;
      GachaBannerComponent__setBannerGachaInfo(v126, Item, v130, v108, (UnityEngine_GameObject_o *)v135, v139, 0);
      if ( !Item )
        break;
      noneGachaInfo = (__int64)this->fields.gachaIdToMiniBannerIndex;
      if ( !noneGachaInfo )
        break;
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              (System_Collections_Generic_Dictionary_int__int__o *)noneGachaInfo,
              Item->fields.id,
              (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        noneGachaInfo = (__int64)this->fields.gachaIdToMiniBannerIndex;
        if ( !noneGachaInfo )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)noneGachaInfo,
          Item->fields.id,
          v108,
          (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerLoopCtr;
      if ( !noneGachaInfo )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v141 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v141,
                                 0,
                                 0);
      if ( !noneGachaInfo )
        break;
      v142 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
      v143 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_5969AE5 )
      {
        noneGachaInfo = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v143 )
        break;
      UnityEngine_Transform__set_localScale(v143, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v142, 0);
      if ( !this->fields.summonMBannerLoopCtr )
        break;
      v144 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr,
                                 0);
      if ( !noneGachaInfo )
        break;
      v213 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noneGachaInfo, 0);
      if ( !v144 )
        break;
      UnityEngine_Transform__set_localPosition(v144, v213, 0);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v111, 0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v142, name, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v142,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      summonMBannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerInfoList;
      if ( !summonMBannerInfoList )
        break;
      v153 = summonMBannerInfoList->fields._items;
      v154 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++summonMBannerInfoList->fields._version;
      if ( !v153 )
        break;
      v155 = summonMBannerInfoList->fields._size;
      v156 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v155 >= LODWORD(v153->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          summonMBannerInfoList,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v157 = &v153->obj.klass + v155;
        summonMBannerInfoList->fields._size = v155 + 1;
        v157[4] = (Il2CppClass *)v156;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v157 + 4), (int32_t)v156, v146, v147, v148, v149, v150, v151);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v130,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v158 = System_Int32__ToString((int)noneGachaInfo + 40, 0);
      v159 = System_String__Concat_75651716((System_String_o *)StringLiteral_21583/*"img_summon_mini_"*/, v158, 0);
      v163 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v159, v160);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v161, v162);
      if ( UnityEngine_Object__op_Equality(v163, 0, 0) )
      {
        v159 = (System_String_o *)StringLiteral_21584/*"img_summon_mini_236"*/;
        v163 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_21584/*"img_summon_mini_236"*/,
                                         v164);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v165, v166);
        if ( UnityEngine_Object__op_Equality(v163, 0, 0) )
          v159 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v168 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_2213CCC(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v168,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0);
      if ( !v156 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v156,
        Item,
        v130,
        v108++,
        (UnityEngine_GameObject_o *)v163,
        v159,
        v168,
        (UIPanel_o *)Component_object,
        0);
      size = v131;
      if ( v210 == v114 )
        goto LABEL_125;
    }
LABEL_196:
    sub_2213CDC(noneGachaInfo, v18);
  }
LABEL_125:
  v169 = (System_Action_int__bool__o *)sub_2213CCC(System_Action_int__bool__TypeInfo);
  System_Action_int__bool____ctor(v169, (Il2CppObject *)this, (intptr_t)Method_SummonControl_OnClickMiniBanner__, 0);
  MainMenuBar__RegisterSummonBalloonClickAction(v169, 0);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_196;
  noneGachaInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
  if ( !this->fields.sliderGrid2 )
    goto LABEL_196;
  v170 = (UnityEngine_Transform_o *)noneGachaInfo;
  noneGachaInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.sliderGrid2, 0);
  if ( !v206 )
    goto LABEL_196;
  v171 = (UnityEngine_Transform_o *)noneGachaInfo;
  noneGachaInfo = (__int64)this->fields.slideIndexPrefab;
  v172 = size >= 50 ? 14 : 16;
  v206->fields.slSpriteSize = v172;
  if ( !noneGachaInfo )
    goto LABEL_196;
  ComponentsInChildren_object__59472212 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                                           (UnityEngine_GameObject_o *)noneGachaInfo,
                                                                                           (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ComponentsInChildren_object__59472212, 0) )
  {
    v174 = (System_Action_object__o *)sub_2213CCC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      v174,
      (Il2CppObject *)v206,
      Method_SummonControl___c__DisplayClass180_0__createSummonInfo_b__0__,
      0);
    BasicHelper__ForEach_object_(
      ComponentsInChildren_object__59472212,
      (System_Action_T__o *)v174,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_UISprite___);
  }
  if ( size >= 101 )
  {
    if ( size + 1 >= 2 )
    {
      v178 = 0;
      do
      {
        v179 = (((_BYTE)v178 + 1) & 1) != 0 ? v170 : v171;
        noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   this->fields.slideIndexPrefab,
                                   v179,
                                   0,
                                   0);
        if ( !noneGachaInfo )
          goto LABEL_196;
        noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
        v180 = (UnityEngine_Transform_o *)noneGachaInfo;
        if ( !byte_5969AE5 )
        {
          noneGachaInfo = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v180 )
          goto LABEL_196;
        UnityEngine_Transform__set_localScale(v180, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      }
      while ( size != ++v178 );
    }
  }
  else if ( size >= 1 )
  {
    v175 = 0;
    do
    {
      v176 = v175 >= 0x32 ? v171 : v170;
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 this->fields.slideIndexPrefab,
                                 v176,
                                 0,
                                 0);
      if ( !noneGachaInfo )
        goto LABEL_196;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
      v177 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_5969AE5 )
      {
        noneGachaInfo = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v177 )
        goto LABEL_196;
      UnityEngine_Transform__set_localScale(v177, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    while ( size != ++v175 );
  }
  noneGachaInfo = (__int64)this->fields.bannerLoopCtr;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)this->fields.bannerLoopCtr;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)this->fields.bannerLoopCtr;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)this->fields.summonMBannerLoopCtr;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)this->fields.summonMBannerLoopCtr;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)this->fields.summonMBannerLoopCtr;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0);
  if ( !v170 )
    goto LABEL_196;
  noneGachaInfo = UnityEngine_Transform__get_childCount(v170, 0);
  if ( !v171 )
    goto LABEL_196;
  v181 = noneGachaInfo;
  childCount = UnityEngine_Transform__get_childCount(v171, 0);
  v183 = childCount;
  v184 = 702.0;
  if ( size < 50 )
    v184 = 640.0;
  v185 = v181 <= childCount ? childCount : v181;
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  v186 = v184 / (float)v185;
  v187 = v186 < 25.0 ? v186 : 25.0;
  if ( !noneGachaInfo )
    goto LABEL_196;
  sliderGrid2 = this->fields.sliderGrid2;
  *(float *)(noneGachaInfo + 48) = v187;
  if ( !sliderGrid2 )
    goto LABEL_196;
  sliderGrid2->fields.cellWidth = v187;
  ComponentHelper__SetLocalPositionX(
    (UnityEngine_Component_o *)noneGachaInfo,
    (float)(*(float *)(noneGachaInfo + 48) * -0.5) * (float)(v181 - 1),
    0);
  sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( v183 < 1 )
  {
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.sliderGrid, 0.0, 0);
    noneGachaInfo = (__int64)this->fields.sliderGrid2;
    if ( !noneGachaInfo )
      goto LABEL_196;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 0, 0);
    v199 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    ComponentHelper__SetLocalPosition(v199, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  else
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v189, v190);
    IsUnderVista = FSUtility__IsUnderVista(0);
    v193 = 0.0;
    if ( IsUnderVista )
      v193 = 4.0;
    ComponentHelper__SetLocalPositionY(sliderGrid, v193, 0);
    noneGachaInfo = (__int64)this->fields.sliderGrid2;
    if ( !noneGachaInfo )
      goto LABEL_196;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 1, 0);
    ComponentHelper__SetLocalPositionX(
      (UnityEngine_Component_o *)this->fields.sliderGrid2,
      (float)(v187 * -0.5) * (float)(v183 - 1),
      0);
    v196 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v194, v195);
    v197 = FSUtility__IsUnderVista(0);
    v198 = -13.0;
    if ( v197 )
      v198 = -9.0;
    ComponentHelper__SetLocalPositionY(v196, v198, 0);
  }
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0);
  noneGachaInfo = (__int64)this->fields.sliderGrid2;
  if ( !noneGachaInfo )
    goto LABEL_196;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0);
  SummonControl__UpdateSummonInfoControlLayout(this, v200);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_196;
  summonInfoCtr = this->fields.summonInfoCtr;
  v202 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v203 = (SummonInfoControl_ClickDelegate_o *)sub_2213CCC(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v203, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0);
  if ( !summonInfoCtr )
    goto LABEL_196;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v202, v203, 0);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v204);
  SummonControl__setResourceInfo(this, v205);
}


void SummonControl__deleteBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t childCount; // w0
  int v5; // w21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Transform_o *v9; // x20
  int32_t v10; // w0
  int v11; // w23
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Transform_o *v15; // x20
  int32_t v16; // w0
  int v17; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *v20; // x21
  int32_t v21; // w0
  int v22; // w20
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *v25; // x21

  if ( (byte_596CA8E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA8E = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_40;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        break;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v5 - 2,
                                                   0);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__DestroyImmediate_83460132(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        goto LABEL_13;
    }
LABEL_40:
    sub_2213CDC(bannerLoopCtr, method);
  }
LABEL_13:
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_40;
  v9 = (UnityEngine_Transform_o *)bannerLoopCtr;
  v10 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( v10 >= 1 )
  {
    v11 = v10 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v11 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_40;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__DestroyImmediate_83460132(v14, 0);
    }
    while ( (unsigned int)--v11 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid2;
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_40;
  v15 = (UnityEngine_Transform_o *)bannerLoopCtr;
  v16 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( v16 >= 1 )
  {
    v17 = v16 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v15, v17 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_40;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
      UnityEngine_Object__DestroyImmediate_83460132(v20, 0);
    }
    while ( (unsigned int)--v17 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_40;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_40;
  v21 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( v21 - 1 >= 0 )
  {
    v22 = v21;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !bannerLoopCtr )
        goto LABEL_40;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_40;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   --v22,
                                                   0);
      if ( !bannerLoopCtr )
        goto LABEL_40;
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      UnityEngine_Object__DestroyImmediate_83460132(v25, 0);
    }
    while ( v22 > 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0;
}


void SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_596CA51 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_10932/*"PURCHASE_ERROR"*/);
    sub_2213A60(&StringLiteral_10925/*"PURCHASE_CANCEL"*/);
    sub_2213A60(&StringLiteral_10933/*"PURCHASE_OK"*/);
    byte_596CA51 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  if ( result > 2 )
  {
    if ( (unsigned int)(result - 3) >= 2 )
      return;
LABEL_11:
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      v7 = &StringLiteral_10925/*"PURCHASE_CANCEL"*/;
      goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(Instance, v6);
  }
  switch ( result )
  {
    case 0:
      goto LABEL_11;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10932/*"PURCHASE_ERROR"*/;
        goto LABEL_15;
      }
      goto LABEL_17;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10933/*"PURCHASE_OK"*/;
LABEL_15:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0);
        return;
      }
      goto LABEL_17;
  }
}


void SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_596CA4A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_10932/*"PURCHASE_ERROR"*/);
    sub_2213A60(&StringLiteral_10925/*"PURCHASE_CANCEL"*/);
    sub_2213A60(&StringLiteral_10933/*"PURCHASE_OK"*/);
    byte_596CA4A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10925/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10932/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_2213CDC(Instance, v6);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10933/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0);
        return;
      }
      goto LABEL_15;
  }
}


void SummonControl__endPurchaseSvtFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_596CA48 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_10932/*"PURCHASE_ERROR"*/);
    sub_2213A60(&StringLiteral_10925/*"PURCHASE_CANCEL"*/);
    sub_2213A60(&StringLiteral_10933/*"PURCHASE_OK"*/);
    byte_596CA48 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10925/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10932/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_2213CDC(Instance, v6);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10933/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0);
        return;
      }
      goto LABEL_15;
  }
}


void SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  SummonControl___c_c *v6; // x8
  float x; // s8
  float y; // s12
  float m_XMin; // s9
  float m_YMin; // s13
  CommonUI_o *v11; // x20
  float m_Width; // s10
  float m_Height; // s11
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__164_0; // x21
  Il2CppObject *v16; // x22
  struct SummonControl___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_o *v24; // x20
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v26; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_596CA22 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__exeFormation_b__164_1__);
    sub_2213A60(&Method_SummonControl___c__exeFormation_b__164_0__);
    sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CA22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = SummonControl___c_TypeInfo;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  v11 = (CommonUI_o *)Instance;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v4, v5);
    v6 = SummonControl___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__164_0 = static_fields->__9__164_0;
  if ( !_9__164_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__164_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__164_0, v16, Method_SummonControl___c__exeFormation_b__164_0__, 0);
    v17 = SummonControl___c_TypeInfo->static_fields;
    v17->__9__164_0 = _9__164_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__164_0, (int32_t)_9__164_0, v18, v19, v20, v21, v22, v23);
  }
  if ( !v11 )
    sub_2213CDC(Instance, v4);
  v26.fields.m_XMin = m_XMin;
  v26.fields.m_Width = m_Width;
  v26.fields.m_Height = m_Height;
  v26.fields.m_YMin = m_YMin + 33.0;
  v25.fields.y = y + 33.0;
  v25.fields.x = x;
  CommonUI__OpenTutorialArrowMark(v11, v25, 0.0, v26, _9__164_0, 0);
  v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__164_1__, 0);
  MainMenuBar__SetDispBtnAct(1, v24, 0);
}


void SummonControl__exeSummon(SummonControl_o *this, GachaRqParamData_o *paramData, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v12; // x1
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_596CA42 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3491/*"CHECK_SERVANT_FRAME"*/);
    byte_596CA42 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaParamData,
    (int32_t)paramData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( this->fields.tutorialKind == 1 )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    if ( !confirmDlgInfo
      || (closeBtn = (UnityEngine_GameObject_o *)confirmDlgInfo->fields.closeBtn) == 0
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))closeBtn->klass[1]._1.name)(
            closeBtn,
            0,
            closeBtn->klass[1]._1.namespaze),
          (closeBtn = this->fields.tutorialArrowObj) == 0) )
    {
LABEL_10:
      sub_2213CDC(closeBtn, v12);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3491/*"CHECK_SERVANT_FRAME"*/, 0);
}


void SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v5; // x21
  CombineResultEffectComponent_ClickDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596CA89 & 1) == 0 )
  {
    sub_2213A60(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__executeEnhanceTresureDevice_b__287_0__);
    byte_596CA89 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (CombineResultEffectComponent_ClickDelegate_o *)sub_2213CCC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__287_0__,
    0);
  if ( !v5 )
    sub_2213CDC(v7, v8);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v5, npEnhanceSvtId, v6, 0);
}


void SummonControl__fadeOut(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl__friendPointQpManaCheck(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( !SummonControl__CheckQpManaOverCheck(this, method) && !SummonControl__CheckFriendPointSummonUpdate(this, v3) )
  {
    MainMenuBar__setMenuActive(0, 0, 0);
    SummonControl__loadAssetsForSummon(this, v4);
  }
}


void SummonControl__friendPointSummonConfirm(SummonControl_o *this, const MethodInfo *method)
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
  int32_t gachaTime; // w24
  int32_t gachaResourceNum; // w28
  int32_t friendPoint; // w22
  SummonConfirmDlgComponent_o *v20; // x23
  int32_t needPoint; // w25
  SummonConfirmDlgComponent_CallbackFunc_o *v22; // x26
  const MethodInfo *v23; // x3
  System_Action_o *v24; // x27
  const MethodInfo *v25; // [xsp+8h] [xbp-98h]
  __int64 v26; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o *v27; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+28h] [xbp-78h] BYREF

  v2 = this;
  if ( (byte_596CA63 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
    sub_2213A60(&Method_SummonControl_autoSellSettingChange2__);
    this = (SummonControl_o *)sub_2213A60(&Method_SummonControl_friendSummonConfirmResult__);
    byte_596CA63 = 1;
  }
  summonInfoCtr = v2->fields.summonInfoCtr;
  memset(&v28, 0, sizeof(v28));
  if ( !summonInfoCtr )
    goto LABEL_21;
  isFree = summonInfoCtr->fields.isFree;
  v2->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v2->fields.confirmDlgInfo;
    v6 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v7);
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0);
    gachaParamData = v2->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v6, v8, gachaParamData->fields.gachaId, v9);
      return;
    }
LABEL_21:
    sub_2213CDC(this, method);
  }
  this = (SummonControl_o *)v2->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v26 = 0;
  v27 = &v28;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v11 )
      break;
    v13 = v2->fields.gachaParamData;
    if ( !v13 )
      sub_2213CDC(v11, v12);
    gachaSubEntity = v28.fields._current;
    if ( !v28.fields._current )
      sub_2213CDC(v11, v12);
    if ( v13->fields.gachaId == *(_DWORD *)((char *)&v28.fields._current->klass + (unsigned __int64)&word_10) )
    {
      SummonConfirmMessage = GachaSubEntity__GetSummonConfirmMessage((GachaSubEntity_o *)v28.fields._current, 0);
      goto LABEL_16;
    }
  }
  gachaSubEntity = 0;
  SummonConfirmMessage = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v16 = v2->fields.gachaParamData;
  if ( !v16 )
    goto LABEL_21;
  gachaTime = v16->fields.gachaTime;
  gachaResourceNum = v16->fields.gachaResourceNum;
  friendPoint = v2->fields.friendPoint;
  v20 = v2->fields.confirmDlgInfo;
  needPoint = v2->fields.needPoint;
  v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v23);
  v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0);
  if ( !v20 )
    goto LABEL_21;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v20,
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
void SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_596CA64 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_friendSummonConfirmResult__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA64 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_42185804(confirmDlgInfo, 0, method);
  v6 = Method_SummonControl_friendSummonConfirmResult__;
  if ( !res )
  {
    if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SummonControl_friendSummonConfirmResult__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(confirmDlgInfo, res);
  }
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SummonControl_friendSummonConfirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  SummonControl__friendPointQpManaCheck(this, v8);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *SummonControl__getCurrentGachaData(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_596CA2D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_596CA2D = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_2213CDC(0, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t SummonControl__getFriendPointIndex(
        SummonControl_o *this,
        int32_t gachaId,
        int32_t oldCurrentIdx,
        VaildGachaInfo_array *oldGachas,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 *v18; // x23
  int32_t v19; // w24
  int monitor_high; // w8
  __int64 v21; // x8
  System_Predicate_object__o *v22; // x22
  System_Collections_Generic_List_object__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_596CA8C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_2213A60(&Method_SummonControl___c__DisplayClass290_0__getFriendPointIndex_b__0__);
    sub_2213A60(&SummonControl___c__DisplayClass290_0_TypeInfo);
    byte_596CA8C = 1;
  }
  v9 = sub_2213CCC(SummonControl___c__DisplayClass290_0_TypeInfo);
  SummonControl___c__DisplayClass290_0___ctor((SummonControl___c__DisplayClass290_0_o *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = oldGachas,
        v18 = (__int64 *)(v9 + 16),
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)oldGachas, v12, v13, v14, v15, v16, v17),
        (vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList) == 0) )
  {
LABEL_24:
    sub_2213CDC(vaildGachaList, v11);
  }
  v19 = 0;
  while ( v19 < vaildGachaList->fields._size )
  {
    if ( gachaId )
    {
      vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      vaildGachaList,
                                                                      v19,
                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !vaildGachaList )
        goto LABEL_24;
      monitor_high = HIDWORD(vaildGachaList[1].monitor);
      vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( monitor_high == 3 )
      {
        if ( !vaildGachaList )
          goto LABEL_24;
        vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        vaildGachaList,
                                                                        v19,
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !vaildGachaList )
          goto LABEL_24;
        if ( LODWORD(vaildGachaList->fields._items) == gachaId )
          return v19;
        vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      }
    }
    ++v19;
    if ( !vaildGachaList )
      goto LABEL_24;
  }
  v21 = *v18;
  if ( *v18 )
  {
    *(_DWORD *)(v9 + 24) = oldCurrentIdx;
    while ( oldCurrentIdx < *(_DWORD *)(v21 + 24) )
    {
      v22 = *(System_Predicate_object__o **)(v9 + 32);
      v23 = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( !v22 )
      {
        v22 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v22,
          (Il2CppObject *)v9,
          Method_SummonControl___c__DisplayClass290_0__getFriendPointIndex_b__0__,
          0);
        *(_QWORD *)(v9 + 32) = v22;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v22, v24, v25, v26, v27, v28, v29);
      }
      if ( !v23 )
        goto LABEL_24;
      vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindIndex(
                                                                      v23,
                                                                      (System_Predicate_T__o *)v22,
                                                                      (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
      if ( ((unsigned int)vaildGachaList & 0x80000000) == 0 )
        return (int)vaildGachaList;
      v21 = *(_QWORD *)(v9 + 16);
      oldCurrentIdx = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 24) = oldCurrentIdx;
      if ( !v21 )
        goto LABEL_24;
    }
  }
  return 0;
}


UserGachaEntity_o *SummonControl__getUserGachaData(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596CA2C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CA2C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_2213CDC(Instance, v5);
  UserGachaMaster__TryGetEntity(
    (UserGachaMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    gachaId,
    0);
  return entity;
}


int32_t SummonControl__get_CurrentMoveIdx(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.currentMoveIdx;
}


GachaRqParamData_o *SummonControl__get_GetNowGachaParamData(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.gachaParamData;
}


bool SummonControl__get_IsOneTimeFreeSummonDialog(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields._IsOneTimeFreeSummonDialog_k__BackingField;
}


bool SummonControl__get_IsResult(SummonControl_o *this, const MethodInfo *method)
{
  return this->fields.isResult;
}


ShopEntity_o *SummonControl__get_StoneFragmentsShopEntity(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  MissionNaviTransitionBoardItem_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596CA1B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596CA1B = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v6);
    p_stoneFragmentsShopEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0);
    p_stoneFragmentsShopEntity->klass = (MissionNaviTransitionBoardItem_c *)EntityOfFragmentsShop;
    sub_2213A04(p_stoneFragmentsShopEntity, (int32_t)EntityOfFragmentsShop, v9, v10, v11, v12, v13, v14);
    return (ShopEntity_o *)p_stoneFragmentsShopEntity->klass;
  }
  return result;
}


UnityEngine_Vector2_o SummonControl__get_TUTORIAL_FORMATION_ARROW_POS_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  result.fields.y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y + 33.0;
  return result;
}


UnityEngine_Rect_o SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  result.fields.m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin + 33.0;
  result.fields.m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  result.fields.m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  return result;
}


UnityEngine_Vector2_o SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float x; // s8
  float y; // s9
  float OffsetX; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_596CA1A & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596CA1A = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method, v2);
  OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
  result.fields.y = y + 33.0;
  result.fields.x = x + (float)(OffsetX + -14.0);
  return result;
}


UnityEngine_Rect_o SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(SummonControl_o *this, const MethodInfo *method)
{
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s8
  float m_Height; // s11
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  result.fields.m_XMin = m_XMin + SummonControl__FSMenuOffsetX(this, method);
  result.fields.m_YMin = m_YMin + 33.0;
  result.fields.m_Height = m_Height + 33.0;
  result.fields.m_Width = m_Width;
  return result;
}


void SummonControl__incereIdx(SummonControl_o *this, const MethodInfo *method)
{
  ++this->fields.getSvtIdx;
}


bool SummonControl__isEnhanceTresureDevice(SummonControl_o *this, int32_t *svtId, const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  struct GachaInfos_array *gachaResInfoList; // x8
  il2cpp_array_size_t max_length; // x23
  ServantFlagReleaseMaster_o *v7; // x21
  __int64 v8; // x25
  bool v9; // w24
  struct GachaInfos_array *v10; // x8
  GachaInfos_o *v11; // x8
  int32_t objectId; // w22

  v4 = this;
  if ( (byte_596CA85 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    this = (SummonControl_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CA85 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( (int)max_length >= 1 )
  {
    v7 = (ServantFlagReleaseMaster_o *)this;
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      v10 = v4->fields.gachaResInfoList;
      if ( !v10 )
        break;
      if ( (unsigned int)v8 >= LODWORD(v10->max_length) )
        sub_2213CE4(this);
      v11 = v10->m_Items[v8];
      if ( !v11 || !v7 )
        break;
      objectId = v11->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v7, objectId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_16;
      v9 = (int)++v8 < (int)max_length;
      if ( (_DWORD)max_length == (_DWORD)v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(this, svtId);
  }
  v9 = 0;
LABEL_15:
  objectId = 0;
LABEL_16:
  *svtId = objectId;
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool SummonControl__isMultipleCheck(SummonControl_o *this, int32_t svtId, int32_t max, const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v6; // x8
  GachaInfos_o **m_Items; // x10
  bool v8; // w12
  GachaInfos_o *v9; // x13

  if ( max >= 1 )
  {
    gachaResInfoList = this->fields.gachaResInfoList;
    if ( gachaResInfoList )
    {
      max_length = gachaResInfoList->max_length;
      v6 = 0;
      m_Items = gachaResInfoList->m_Items;
      v8 = 1;
      while ( 1 )
      {
        if ( (_DWORD)max_length == (_DWORD)v6 )
          sub_2213CE4(this);
        v9 = m_Items[v6];
        if ( !v9 )
          break;
        if ( v9->fields.objectId != svtId )
        {
          v8 = (int)++v6 < max;
          if ( max != (_DWORD)v6 )
            continue;
        }
        return v8;
      }
    }
    sub_2213CDC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


bool SummonControl__isSvtEqSummonResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  il2cpp_array_size_t max_length; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  __int64 v6; // x22
  bool v7; // w24
  struct GachaInfos_array *v8; // x8
  GachaInfos_o *v9; // x25

  v2 = this;
  if ( (byte_596CA78 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (SummonControl_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CA78 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (int)max_length >= 1 )
  {
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      v8 = v2->fields.gachaResInfoList;
      if ( !v8 )
        break;
      if ( (unsigned int)v6 >= LODWORD(v8->max_length) )
        sub_2213CE4(this);
      v9 = v8->m_Items[v6];
      if ( !v9 || !v5 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v5,
                                  v9->fields.objectId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !this
        || (this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0),
            ((unsigned __int8)this & 1) == 0)
        || !v9->fields.isNew )
      {
        v7 = (int)++v6 < (int)max_length;
        if ( (_DWORD)max_length != (_DWORD)v6 )
          continue;
      }
      return v7;
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_596CA99 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA99 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  void *limitWarningDlgInfo; // x0
  _DWORD *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w20
  BalanceConfig_c *v10; // x0
  const MethodInfo *v11; // x1
  SummonLimitWarningDlgComponent_o *v12; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v13; // x21
  System_Action_o *v14; // x22

  if ( (byte_596CA98 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_ShowConfirmDialog__);
    sub_2213A60(&Method_SummonControl_limitManaConfirmResult__);
    sub_2213A60(&StringLiteral_3582/*"CLICK_CANCEL"*/);
    byte_596CA98 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_21;
  SummonLimitWarningDlgComponent__Close((SummonLimitWarningDlgComponent_o *)limitWarningDlgInfo, 0);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, *(const MethodInfo **)&res) )
      {
        limitWarningDlgInfo = UserGameMaster__getSelfUserGame(0);
        if ( !limitWarningDlgInfo )
          goto LABEL_21;
        v6 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 64), 0) )
          goto LABEL_18;
        v9 = v6[48];
        v10 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v8);
          v10 = BalanceConfig_TypeInfo;
        }
        if ( v9 >= v10->static_fields->UserItemMax )
        {
          v12 = this->fields.limitWarningDlgInfo;
          v13 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0);
          v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
          if ( !v12 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v12, v13, v14, 0);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0, 0);
          SummonControl__loadAssetsForSummon(this, v11);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0, 0);
        return;
      }
LABEL_21:
      sub_2213CDC(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3582/*"CLICK_CANCEL"*/, 0);
  }
}


void SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  SummonRootComponent_o *klass; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 naturalAligment; // x9
  SummonControl_o *v10; // x0
  bool v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_596CA6B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SummonControl__loadAssetsForSummon_b__248_0__);
    sub_2213A60(&SummonRootComponent_TypeInfo);
    byte_596CA6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__248_0__, 0),
        !klass) )
  {
    sub_2213CDC(Instance, v4);
  }
  naturalAligment = SummonRootComponent_TypeInfo->_2.naturalAligment;
  if ( klass->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[naturalAligment - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v6, 0);
  }
  else
  {
    sub_221405C(klass, SummonRootComponent_TypeInfo, v7, v8);
    SummonControl__friendSummonConfirmResult(v10, v11, v12);
  }
}


void SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v9; // w8
  int32_t v10; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_596CA39 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_onClickChangeBanner__);
    sub_2213A60(&StringLiteral_13323/*"SetBannerCenter"*/);
    byte_596CA39 = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    SummonControl__SetMiniBannerArrowAndColliderEnable(this, 0, v4);
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13323/*"SetBannerCenter"*/,
      0);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_23;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn )
      goto LABEL_23;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0);
    currentMoveIdx = this->fields.currentMoveIdx;
    v9 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v10 = currentMoveIdx + 1 < v9 ? currentMoveIdx + 1 : 0;
    if ( !leftArrowBtn )
      goto LABEL_23;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_23;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.maskObject;
    if ( !leftArrowBtn )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)leftArrowBtn, 1, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_23;
    centerChild = this->fields.centerChild;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v10,
                                                      0),
          !centerChild)
      || (UICenterOnChild__CenterOn_56214248(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0)) == 0)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v10,
                                                      0),
          !summonMBannerCenterChild) )
    {
LABEL_23:
      sub_2213CDC(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_56214248(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0, 0);
  }
}


void SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t childCount; // w8
  int v8; // w8
  int32_t v9; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_596CA3A & 1) == 0 )
  {
    sub_2213A60(&Method_SummonControl_onClickLeftChangeBanner__);
    sub_2213A60(&StringLiteral_13323/*"SetBannerCenter"*/);
    byte_596CA3A = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_23;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    SummonControl__SetMiniBannerArrowAndColliderEnable(this, 0, v4);
    UnityEngine_MonoBehaviour__CancelInvoke_83442996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13323/*"SetBannerCenter"*/,
      0);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_23;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn )
      goto LABEL_23;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v8 = childCount - 1;
    v9 = this->fields.currentMoveIdx - 1 >= 0 ? this->fields.currentMoveIdx - 1 : v8;
    if ( !leftArrowBtn )
      goto LABEL_23;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_23;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.maskObject;
    if ( !leftArrowBtn )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)leftArrowBtn, 1, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_23;
    centerChild = this->fields.centerChild;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v9,
                                                      0),
          !centerChild)
      || (UICenterOnChild__CenterOn_56214248(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0)) == 0)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v9,
                                                      0),
          !summonMBannerCenterChild) )
    {
LABEL_23:
      sub_2213CDC(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_56214248(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0, 0);
  }
}


void SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  float m_XMin; // s12
  float m_YMin; // s13
  float m_Width; // s8
  float m_Height; // s14
  SummonControl_o *v13; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  float v17; // s0
  SummonControl___c_c *v18; // x0
  float v19; // s11
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__163_0; // x22
  Il2CppObject *v22; // x23
  struct SummonControl___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Action_o *v30; // x20
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_596CA21 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__openAfterSummonInfo_b__163_1__);
    sub_2213A60(&Method_SummonControl___c__openAfterSummonInfo_b__163_0__);
    sub_2213A60(&SummonControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_14155/*"TUTORIAL_MESSAGE_SUMMON2"*/);
    byte_596CA21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_14155/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v7);
  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v17 = SummonControl__FSMenuOffsetX(v13, v14);
  v18 = SummonControl___c_TypeInfo;
  v19 = v17;
  if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v15, v16);
    v18 = SummonControl___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__163_0 = static_fields->__9__163_0;
  if ( !_9__163_0 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v15, v16);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__163_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__163_0, v22, Method_SummonControl___c__openAfterSummonInfo_b__163_0__, 0);
    v23 = SummonControl___c_TypeInfo->static_fields;
    v23->__9__163_0 = _9__163_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__163_0, (int32_t)_9__163_0, v24, v25, v26, v27, v28, v29);
  }
  if ( !Instance )
    sub_2213CDC(v18, v15);
  v31.fields.m_XMin = m_XMin + v19;
  v31.fields.m_Width = m_Width;
  v31.fields.m_Height = m_Height + 33.0;
  v31.fields.m_YMin = m_YMin + 33.0;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v6,
    TUTORIAL_MENU_ARROW_POS_FS,
    v31,
    0.0,
    0,
    -1,
    _9__163_0,
    0);
  v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__163_1__, 0);
  MainMenuBar__SetMenuBtnAct(v30, 0);
}


void SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_596CA20 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3574/*"CLEAR_TUTORIAL"*/);
    byte_596CA20 = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3574/*"CLEAR_TUTORIAL"*/, 0),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0) )
  {
    sub_2213CDC(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0);
}


void SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  int *Item; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w21
  __int64 v23; // x21
  Il2CppClass *v24; // x0
  __int64 v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x21
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__165_1; // x22
  Il2CppObject *v47; // x23
  struct SummonControl___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_List_EventTutorialEntity__o *v55; // x22
  int32_t size; // w21
  __int64 v57; // x2
  int32_t v58; // w22
  System_Action_o *v59; // x20

  if ( (byte_596CA23 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Comparison_EventTutorialEntity__TypeInfo);
    sub_2213A60(&EventTutorialEntity_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__openSvtEqInfo_b__165_1__);
    sub_2213A60(&Method_SummonControl___c__DisplayClass165_0__openSvtEqInfo_b__0__);
    sub_2213A60(&SummonControl___c__DisplayClass165_0_TypeInfo);
    sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CA23 = 1;
  }
  v3 = sub_2213CCC(SummonControl___c__DisplayClass165_0_TypeInfo);
  SummonControl___c__DisplayClass165_0___ctor((SummonControl___c__DisplayClass165_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v13 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v13, 0);
  *(_QWORD *)(v3 + 16) = EventTutorialEntity;
  v15 = (void **)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)EventTutorialEntity, v16, v17, v18, v19, v20, v21);
  Item = *(int **)(v3 + 16);
  if ( !Item )
    goto LABEL_11;
  v22 = 0;
  while ( v22 < Item[6] )
  {
    Item = (int *)System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)Item,
                    v22,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( Item[6] == 1 )
      goto LABEL_28;
    Item = (int *)*v15;
    ++v22;
    if ( !*v15 )
      goto LABEL_11;
  }
  v23 = sub_2213CCC(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v23, 0);
  if ( !v23 )
    goto LABEL_11;
  v24 = int___TypeInfo;
  *(_DWORD *)(v23 + 24) = 1;
  v25 = sub_2213B20(v24, 1);
  *(_QWORD *)(v23 + 80) = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 80), v25, v26, v27, v28, v29, v30, v31);
  v38 = *(_QWORD *)(v23 + 80);
  if ( !v38 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v38 + 24) )
    sub_2213CE4(Item);
  Item = (int *)*v15;
  *(_DWORD *)(v38 + 32) = 1;
  if ( !Item )
    goto LABEL_11;
  v39 = *((_QWORD *)Item + 2);
  v40 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++Item[7];
  if ( !v39 )
    goto LABEL_11;
  v41 = Item[6];
  if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v23,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    Item[6] = v41 + 1;
    *(_QWORD *)(v42 + 32) = v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 32), v23, v32, v33, v34, v35, v36, v37);
  }
  Item = (int *)SummonControl___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)*v15;
  if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v5, v43);
    Item = (int *)SummonControl___c_TypeInfo;
  }
  static_fields = (struct SummonControl___c_StaticFields *)*((_QWORD *)Item + 23);
  _9__165_1 = (System_Comparison_T__o *)static_fields->__9__165_1;
  if ( !_9__165_1 )
  {
    if ( !Item[57] )
    {
      j_il2cpp_runtime_class_init_0(Item, v5, v43);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__165_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(_9__165_1, v47, Method_SummonControl___c__openSvtEqInfo_b__165_1__, 0);
    v48 = SummonControl___c_TypeInfo->static_fields;
    v48->__9__165_1 = (struct System_Comparison_EventTutorialEntity__o *)_9__165_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__165_1, (int32_t)_9__165_1, v49, v50, v51, v52, v53, v54);
  }
  if ( !v44 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_71849708(
    v44,
    _9__165_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v55 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v15;
  if ( !*v15 )
LABEL_11:
    sub_2213CDC(Item, v5);
  size = v55->fields._size;
  if ( size - 1 >= 0 )
  {
    do
    {
      Item = (int *)*v15;
      if ( !*v15 )
        goto LABEL_11;
      Item = (int *)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)Item,
                      --size,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        goto LABEL_11;
      if ( Item[6] != 1 )
      {
        Item = (int *)*v15;
        if ( !*v15 )
          goto LABEL_11;
        Item = (int *)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)Item,
                        size,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v58 = Item[6];
        if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v57);
        if ( TutorialFlag__GetGachaFlg(v58, 0) )
        {
          Item = (int *)*v15;
          if ( !*v15 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            size,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
    }
    while ( size > 0 );
    v55 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v15;
  }
  v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)v3, Method_SummonControl___c__DisplayClass165_0__openSvtEqInfo_b__0__, 0);
  EventTutorialMaster__TutorialChainWithoutCheckStart(v55, v59, 0);
}


void SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_596CA6F & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_callbackTutorialSet__);
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    byte_596CA6F = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11565/*"REQUEST_OK"*/, 0);
}


void SummonControl__progTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t tutorialKind; // w8
  __int64 v5; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  tutorialKind = this->fields.tutorialKind;
  if ( tutorialKind > 2 )
  {
    if ( tutorialKind == 3 )
    {
      SummonControl__exeFormation(this, method);
    }
    else if ( tutorialKind == 4 )
    {
      SummonControl__openSvtEqInfo(this, method);
    }
  }
  else if ( tutorialKind == 1 )
  {
    SummonControl__setTutorialCtrEnable(this, 0, v2);
    summonInfoCtr = this->fields.summonInfoCtr;
    if ( !summonInfoCtr )
      goto LABEL_44;
    SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
    if ( !summonInfoCtr )
      goto LABEL_44;
    TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0);
    MainMenuBar__SetMenuBtnColliderEnable(0, 1, 0);
    summonInfoCtr = this->fields.summonInfoCtr;
    if ( !summonInfoCtr )
      goto LABEL_44;
    SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
    if ( !summonInfoCtr )
      goto LABEL_44;
    summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)summonInfoCtr,
                                             0);
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
    if ( !summonInfoCtr )
      goto LABEL_44;
    summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)summonInfoCtr,
                                             0);
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
    if ( !summonInfoCtr )
      goto LABEL_44;
    summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)summonInfoCtr,
                                             0);
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
    if ( !summonInfoCtr )
      goto LABEL_44;
    summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)summonInfoCtr,
                                             0);
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
    if ( !summonInfoCtr )
      goto LABEL_44;
    summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                             (UnityEngine_GameObject_o *)summonInfoCtr,
                                             0);
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.summonListInfo;
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject;
    if ( !summonInfoCtr )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
    SummonControl__openSummonExeArrow(this, v8);
  }
  else if ( tutorialKind == 2 )
  {
    SummonControl__setTutorialCtrEnable(this, 0, v2);
    summonInfoCtr = this->fields.summonInfoCtr;
    if ( summonInfoCtr )
    {
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( summonInfoCtr )
      {
        TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0);
        summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
        if ( summonInfoCtr )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0);
          MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
          summonInfoCtr = this->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0);
            summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
            if ( summonInfoCtr )
            {
              summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)summonInfoCtr,
                                                       0);
              if ( summonInfoCtr )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
                if ( summonInfoCtr )
                {
                  summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)summonInfoCtr,
                                                           0);
                  if ( summonInfoCtr )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                    summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
                    if ( summonInfoCtr )
                    {
                      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)summonInfoCtr,
                                                               0);
                      if ( summonInfoCtr )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                        summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
                        if ( summonInfoCtr )
                        {
                          summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                                                   (UnityEngine_GameObject_o *)summonInfoCtr,
                                                                   0);
                          if ( summonInfoCtr )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                            summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
                            if ( summonInfoCtr )
                            {
                              summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                                                       (UnityEngine_GameObject_o *)summonInfoCtr,
                                                                       0);
                              if ( summonInfoCtr )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                                summonInfoCtr = (SummonInfoControl_o *)this->fields.summonListInfo;
                                if ( summonInfoCtr )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                                  summonInfoCtr = (SummonInfoControl_o *)this->fields.tutorialArrowObj;
                                  if ( summonInfoCtr )
                                  {
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                                    summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject;
                                    if ( summonInfoCtr )
                                    {
                                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
                                      SummonControl__openAfterSummonInfo(this, v7);
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
            }
          }
        }
      }
    }
LABEL_44:
    sub_2213CDC(summonInfoCtr, v5);
  }
}


void SummonControl__quit(SummonControl_o *this, const MethodInfo *method)
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
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x8
  int32_t v16; // w20
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0
  UnityEngine_Object_o *summonBannerScrollView; // x20
  __int64 v22; // x2
  UnityEngine_Object_o *summonMBannerScrollView; // x20

  if ( (byte_596CA27 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CA27 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_33;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0);
  if ( !summonBannerInfo )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0);
  SummonControl__clearBannerList(this, v4);
  SummonControl__clearResultList(this, v5);
  summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonResultInfo;
  if ( !summonBannerInfo )
    goto LABEL_33;
  SummonResultComponent__SetActive((SummonResultComponent_o *)summonBannerInfo, 0, 0);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
  {
    size = vaildGachaList->fields._size;
    v8 = vaildGachaList->fields._version + 1;
    vaildGachaList->fields._size = 0;
    vaildGachaList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0);
  }
  gachaSubEntityList = this->fields.gachaSubEntityList;
  if ( gachaSubEntityList )
  {
    v10 = gachaSubEntityList->fields._size;
    v11 = gachaSubEntityList->fields._version + 1;
    gachaSubEntityList->fields._size = 0;
    gachaSubEntityList->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)gachaSubEntityList->fields._items, 0, v10, 0);
  }
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo )
    goto LABEL_33;
  summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)summonBannerInfo,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !summonBannerInfo )
    goto LABEL_33;
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0);
  v15 = TerminalPramsManager_TypeInfo;
  v16 = VaildPayType;
  this->fields.summonType = VaildPayType;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, v13, v14);
  if ( !byte_596A158 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A158 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_SummonType_k__BackingField = v16;
  SummonControl__releaseBannerData(this, v13);
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( bonusSelectAssetManager )
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0);
  summonBannerScrollView = (UnityEngine_Object_o *)this->fields.summonBannerScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(summonBannerScrollView, 0, 0) )
  {
    summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonBannerScrollView;
    if ( !summonBannerInfo )
      goto LABEL_33;
    UIScrollView__DisableSpring((UIScrollView_o *)summonBannerInfo, 0);
  }
  summonMBannerScrollView = (UnityEngine_Object_o *)this->fields.summonMBannerScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v22);
  if ( UnityEngine_Object__op_Inequality(summonMBannerScrollView, 0, 0) )
  {
    summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonMBannerScrollView;
    if ( summonBannerInfo )
    {
      UIScrollView__DisableSpring((UIScrollView_o *)summonBannerInfo, 0);
      return;
    }
LABEL_33:
    sub_2213CDC(summonBannerInfo, method);
  }
}


void SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  void *vaildGachaList; // x0
  int32_t currentIdx; // w20
  System_Object_array *v5; // x0
  struct System_Collections_Generic_List_VaildGachaInfo__o *v6; // x8
  VaildGachaInfo_array *v7; // x21
  _DWORD *v8; // x8
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w24
  char v12; // w25
  const MethodInfo *v13; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  int32_t FriendPointIndex; // w4
  const MethodInfo *v20; // x7

  if ( (byte_596CA8B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CA8B = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_26;
  currentIdx = this->fields.currentIdx;
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)vaildGachaList,
         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_VaildGachaInfo__ToArray__);
  v6 = this->fields.vaildGachaList;
  v7 = (VaildGachaInfo_array *)v5;
  if ( !v6 || (method = (const MethodInfo *)(unsigned int)this->fields.currentIdx, v6->fields._size <= (int)method) )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
LABEL_12:
    v12 = 0;
    goto LABEL_13;
  }
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                     (int32_t)method,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList
    || (v8 = vaildGachaList, (vaildGachaList = this->fields.vaildGachaList) == 0)
    || (v9 = v8[4],
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0) )
  {
LABEL_26:
    sub_2213CDC(vaildGachaList, method);
  }
  if ( *((_DWORD *)vaildGachaList + 13) != 3 )
  {
    vaildGachaList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( vaildGachaList )
    {
      vaildGachaList = DataManager__GetMasterData_object_(
                         (DataManager_o *)vaildGachaList,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( vaildGachaList )
      {
        vaildGachaList = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)vaildGachaList,
                           v9,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( vaildGachaList )
        {
          v11 = *((_DWORD *)vaildGachaList + 18);
          v10 = *((_DWORD *)vaildGachaList + 36);
          goto LABEL_12;
        }
      }
    }
    goto LABEL_26;
  }
  v10 = 0;
  v11 = 0;
  v12 = 1;
LABEL_13:
  if ( !SummonControl__resetSummonVaildData(this, method)
    || ((gachaParamData = this->fields.gachaParamData) == 0
     || gachaParamData->fields.gachaId != this->fields.lastMaxDrawGachaId)
    && SummonControl__checkMaxDrawNum(this, v13) )
  {
    SummonControl__deleteBannerList(this, v13);
    SummonControl__CheckValidGachaList(this, v15);
    SummonControl__createSummonInfo(this, v16);
    FriendPointIndex = SummonControl__getFriendPointIndex(this, v9, currentIdx, v7, v17);
    if ( (v12 & 1) == 0 )
      FriendPointIndex = SummonControl__GetGachaIndex(this, v9, v11, v10, FriendPointIndex, currentIdx, v7, v20);
    if ( (FriendPointIndex & 0x80000000) == 0 )
      SummonControl__setDispRePosition(this, FriendPointIndex, v18);
  }
}


void SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *assetPath; // x20
  MissionNaviTransitionBoardItem_o *p_bannerAssetData; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CA26 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596CA26 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.bannerAssetData;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAssetStorage(assetPath, 0);
    p_bannerAssetData->klass = 0;
    sub_2213A04(p_bannerAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaDrawRequest_o *v9; // x20
  int32_t gachaId; // w26
  System_Int32_array *storyAdjustIds; // x22
  int32_t gachaTime; // w24
  int32_t warId; // w25
  int32_t gachaSubId; // w27
  Il2CppObject *p_obj; // x29
  System_String_o *selectBonusListData; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x24
  int32_t v19; // w21
  System_String_o *v20; // x0
  int32_t v21; // [xsp+14h] [xbp-6Ch]
  int32_t shopIdIdx; // [xsp+18h] [xbp-68h]
  int32_t ticketItemId; // [xsp+1Ch] [xbp-64h]

  if ( (byte_596CA6C & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_GachaDrawRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_callbackGachaDraw__);
    sub_2213A60(&StringLiteral_165/*" : "*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA6C = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v4,
                                             (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_22;
  v9 = (GachaDrawRequest_o *)maskObject;
  gachaId = gachaParamData->fields.gachaId;
  storyAdjustIds = gachaParamData->fields.storyAdjustIds;
  warId = gachaParamData->fields.warId;
  gachaTime = gachaParamData->fields.gachaTime;
  gachaSubId = gachaParamData->fields.gachaSubId;
  p_obj = &gachaParamData->fields.selectBonusList->obj;
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  shopIdIdx = gachaParamData->fields.shopIdIdx;
  ticketItemId = gachaParamData->fields.ticketItemId;
  if ( storyAdjustIds )
  {
    max_length = storyAdjustIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v21 = gachaTime;
      v18 = 0;
      v19 = (_DWORD)storyAdjustIds + 32;
      do
      {
        if ( v18 >= (unsigned int)max_length )
          sub_2213CE4(maskObject);
        v20 = System_Int32__ToString(v19, 0);
        maskObject = (UnityEngine_GameObject_o *)System_String__Concat_75694928(
                                                   selectBonusListData,
                                                   v20,
                                                   (System_String_o *)StringLiteral_165/*" : "*/,
                                                   0);
        LODWORD(max_length) = storyAdjustIds->max_length;
        ++v18;
        selectBonusListData = (System_String_o *)maskObject;
        v19 += 4;
      }
      while ( (__int64)v18 < (int)max_length );
      gachaTime = v21;
      selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
  if ( p_obj && p_obj[1].monitor )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v7);
    selectBonusListData = JsonManager__toJson(p_obj, 0, 0, 0);
  }
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0),
        this->fields.isShowingSummonEffect = 1,
        !v9) )
  {
LABEL_22:
    sub_2213CDC(maskObject, method);
  }
  GachaDrawRequest__beginRequest(
    v9,
    gachaId,
    gachaTime,
    warId,
    ticketItemId,
    shopIdIdx,
    gachaSubId,
    storyAdjustIds,
    selectBonusListData,
    0);
}


void SummonControl__resetMainDisp(SummonControl_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *MainBgmName; // x20
  __int64 v10; // x2
  CommonUI_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CA8A & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596CA8A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MissionNotifyManager__EndPause(Instance, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5, v6);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v8);
  SoundManager__playBgm(MainBgmName, 0);
  Instance = (MissionNotifyManager_o *)this->fields.maskBgObject;
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.maskObject;
  if ( !Instance )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v10);
  if ( !v11 )
    goto LABEL_28;
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_28;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0, 40, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_28;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)Instance, 1, 0, 0, 0);
  SummonControl__setDispSummonInfo(this, 1, v12);
  SummonControl__setUserResourceDisp(this, v13);
  Instance = (MissionNotifyManager_o *)this->fields.summonInfoCtr;
  this->fields.getSvtIdx = 0;
  if ( !Instance )
    goto LABEL_28;
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)Instance, 0);
  MainMenuBar__UpdateNoticeNumber(0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( this->fields.tutorialKind == 2 )
  {
    if ( !Instance )
      goto LABEL_28;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    SummonControl__progTutorial(this, v14);
  }
  else
  {
    if ( !Instance )
      goto LABEL_28;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0);
    SummonControl__reDispSummonBannerList(this, v15);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_28:
    sub_2213CDC(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_2213CDC(0, v16);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v18.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v17);
}


void SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SummonControl__resetStoneInfo(this, v10);
}


void SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo_47A29F8 *v6; // x0
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_596CA84 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__resetResultList_b__282_0__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596CA84 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( !TutorialFlag__IsProgressDone(2, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0, 0);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0);
  }
  v6 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.isResult = 0;
  v7 = SingletonMonoBehaviour_object___get_Instance(v6);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v7;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v8, v9);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__282_0__, 0);
  if ( !v11 )
LABEL_13:
    sub_2213CDC(Instance, v5);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_596CA8F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&StringLiteral_3071/*"BONUS_SELECT_GACHA"*/);
    byte_596CA8F = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0 )
    {
LABEL_14:
      sub_2213CDC(Master_object, v3);
    }
    if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_14;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3071/*"BONUS_SELECT_GACHA"*/, 0);
    }
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.summonInfoCtr;
  if ( !Master_object )
    goto LABEL_14;
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)Master_object, 0);
}


bool SummonControl__resetSummonVaildData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 gachaMst; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct GachaEntity_array *useGachaData; // x8
  __int64 v11; // x19
  MissionNaviTransitionBoardItem_o *p_useGachaData; // x20
  __int64 v13; // x21
  int max_length; // w10
  unsigned int v15; // w9

  gachaMst = (__int64)this->fields.gachaMst;
  if ( !gachaMst
    || (gachaMst = (__int64)GachaMaster__getListValidData((GachaMaster_o *)gachaMst, 0),
        (useGachaData = this->fields.useGachaData) == 0)
    || (v11 = gachaMst) == 0 )
  {
LABEL_12:
    sub_2213CDC(gachaMst, method);
  }
  p_useGachaData = (MissionNaviTransitionBoardItem_o *)&this->fields.useGachaData;
  if ( LODWORD(useGachaData->max_length) == *(_DWORD *)(gachaMst + 24) )
  {
    v13 = 4;
    while ( 1 )
    {
      max_length = useGachaData->max_length;
      v15 = v13 - 4;
      if ( (int)v13 - 4 >= max_length )
        return 1;
      if ( v15 >= max_length || v15 >= *(_DWORD *)(v11 + 24) )
        sub_2213CE4(gachaMst);
      gachaMst = *((_QWORD *)&useGachaData->obj.klass + v13);
      if ( gachaMst )
      {
        gachaMst = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gachaMst + 312LL))(
                     gachaMst,
                     *(_QWORD *)(v11 + 8 * v13),
                     *(_QWORD *)(*(_QWORD *)gachaMst + 320LL));
        if ( (gachaMst & 1) == 0 )
          goto LABEL_13;
        useGachaData = (struct GachaEntity_array *)p_useGachaData->klass;
        ++v13;
        if ( p_useGachaData->klass )
          continue;
      }
      goto LABEL_12;
    }
  }
  else
  {
LABEL_13:
    p_useGachaData->klass = (MissionNaviTransitionBoardItem_c *)v11;
    sub_2213A04(p_useGachaData, v11, v4, v5, v6, v7, v8, v9);
    return 0;
  }
}


void SummonControl__returnTutorial(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 2;
  SummonControl__progTutorial(this, method);
}


UnityEngine_GameObject_o *SummonControl__searchBannerImg(
        SummonControl_o *this,
        System_String_o *searchTarget,
        const MethodInfo *method)
{
  void *bannerAssetData; // x0
  int v6; // w8
  _DWORD *v7; // x20
  unsigned int v8; // w25
  char *v9; // x8
  UnityEngine_GameObject_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Component_object; // x22

  if ( (byte_596CA30 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObjectList_GameObject___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA30 = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_37D2608 *)Method_AssetData_GetObjectList_GameObject___);
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
        sub_2213CE4(bannerAssetData);
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v9 + 4),
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      bannerAssetData = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)bannerAssetData & 1) != 0 )
      {
        if ( !Component_object )
          break;
        bannerAssetData = UIAtlas__GetSprite((UIAtlas_o *)Component_object, searchTarget, 0);
        if ( bannerAssetData )
          return v10;
      }
      v6 = v7[6];
      if ( (int)++v8 >= v6 )
        return 0;
    }
LABEL_17:
    sub_2213CDC(bannerAssetData, searchTarget);
  }
  return 0;
}


void SummonControl__setCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *indexPanel; // x0
  float32x2_t *v4; // x20
  unsigned __int64 v5; // x21
  float *p_fields; // x22
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s1
  UnityEngine_Vector3_o v11; // 0:kr00_12.12
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
  if ( !indexPanel
    || (indexPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexPanel->klass[1]._1.interopData)(
                                                  indexPanel,
                                                  indexPanel->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_2213CDC(indexPanel, method);
  }
  v4 = (float32x2_t *)indexPanel;
  v5 = 0;
  p_fields = (float *)&indexPanel[1].fields;
  do
  {
    if ( v5 >= v4[3].n64_u32[0] )
      goto LABEL_12;
    indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
    if ( !indexPanel )
      goto LABEL_11;
    v7 = *(p_fields - 2);
    v8 = *(p_fields - 1);
    v9 = *p_fields;
    indexPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(indexPanel, 0);
    if ( !indexPanel )
      goto LABEL_11;
    v12.fields.x = v7;
    v12.fields.y = v8;
    v12.fields.z = v9;
    v11 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)indexPanel, v12, 0);
    if ( v5 >= v4[3].n64_u32[0] )
      goto LABEL_12;
    ++v5;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v11;
    p_fields += 3;
  }
  while ( v5 != 4 );
  if ( v4[3].n64_u32[0] <= 2 )
LABEL_12:
    sub_2213CE4(indexPanel);
  v10 = v4[5].n64_f32[0] + (float)((float)(v4[8].n64_f32[0] - v4[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v4[4],
                                                    vmul_f32(vsub_f32(v4[7], v4[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v10;
}


void SummonControl__setChangeSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Item; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v14; // x22
  SummonInfoControl_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_596CA3B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&Method_SummonControl__setChangeSummonInfo_b__194_0__);
    sub_2213A60(&Method_SummonControl_exeSummon__);
    byte_596CA3B = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0);
  maskObject = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
  if ( !maskObject )
    goto LABEL_8;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)maskObject,
           this->fields.currentIdx,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentGachaInfo,
    (int32_t)Item,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  SummonControl__setResourceInfo(this, v11);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v14 = (SummonInfoControl_ClickDelegate_o *)sub_2213CCC(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v14, 0),
        v15 = this->fields.summonInfoCtr,
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__194_0__, 0),
        !v15) )
  {
LABEL_8:
    sub_2213CDC(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v15, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *currentBannerComp; // x21
  __int64 v8; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_Object_o *currentSummonMBannerComponent; // x21
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  v4 = this;
  if ( (byte_596CA40 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_GachaBannerComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SummonMiniBannerComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    this = (SummonControl_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA40 = 1;
  }
  if ( !v4->fields.vaildGachaList )
    goto LABEL_21;
  this = (SummonControl_o *)v4->fields.bannerLoopCtr;
  if ( !this )
    goto LABEL_21;
  UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0);
  this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr;
  if ( !this )
    goto LABEL_21;
  UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0);
  currentBannerComp = (UnityEngine_Object_o *)v4->fields.currentBannerComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(currentBannerComp, 0, 0) )
  {
    this = (SummonControl_o *)v4->fields.bannerLoopCtr;
    if ( !this )
      goto LABEL_21;
    this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_21;
    this = (SummonControl_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, currentIdx, 0);
    if ( !this )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_GachaBannerComponent___);
    v4->fields.currentBannerComp = (struct GachaBannerComponent_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.currentBannerComp,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v4->fields.currentSummonMBannerComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&currentIdx, v8);
  if ( UnityEngine_Object__op_Equality(currentSummonMBannerComponent, 0, 0) )
  {
    this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr;
    if ( this )
    {
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, currentIdx, 0);
        if ( this )
        {
          v18 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SummonMiniBannerComponent___);
          v4->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v18;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v4->fields.currentSummonMBannerComponent,
            (int32_t)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_2213CDC(this, *(_QWORD *)&currentIdx);
  }
LABEL_20:
  SummonControl__setSliderIcon(v4, currentIdx, v17);
  v4->fields.currentIdx = currentIdx;
  v4->fields.currentMoveIdx = currentIdx;
  SummonControl__setChangeSummonInfo(v4, v25);
  SummonControl__UpdateSummonInfoControlLayout(v4, v26);
}


void SummonControl__setDispSummonForm(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setDispSummonInfo(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_11;
  titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0);
  titleInfo = (UnityEngine_Component_o *)this->fields.currentResourceInfo;
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0);
  titleInfo = (UnityEngine_Component_o *)this->fields.detailInfo;
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0);
  titleInfo = (UnityEngine_Component_o *)this->fields.summonListInfo;
  if ( !titleInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0);
  titleInfo = (UnityEngine_Component_o *)this->fields.summonBannerInfo;
  if ( !titleInfo
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.summonMBannerObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.helpImgInfo) == 0) )
  {
LABEL_11:
    sub_2213CDC(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_2213CDC(0, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0);
}


void SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x8
  int SummonId_k__BackingField; // w20
  int32_t GachaIdFromSelectedBannerEntity; // w0
  TerminalPramsManager_c *v8; // x0
  int32_t summonType; // w9
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x8
  int size; // w22
  int32_t v12; // w21
  void *Item; // x0
  __int64 v14; // x8
  int32_t v15; // w1

  if ( (byte_596CA3E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CA3E = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596CAB8 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CAB8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
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
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, method, v2);
    if ( !byte_596CAB8 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CAB8 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v5 = TerminalPramsManager_TypeInfo;
    }
    SummonId_k__BackingField = v5->static_fields->_SummonId_k__BackingField;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, method, v2);
  if ( !byte_596A159 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A159 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v8 = TerminalPramsManager_TypeInfo;
  }
  summonType = this->fields.summonType;
  bannerInfoList = this->fields.bannerInfoList;
  v8->static_fields->_SummonId_k__BackingField = 0;
  if ( summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_37;
  }
  else if ( bannerInfoList )
  {
    size = bannerInfoList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        Item = this->fields.bannerInfoList;
        if ( !Item
          || (Item = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Item,
                       v12,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__)) == 0 )
        {
          sub_2213CDC(Item, method);
        }
        v14 = *((_QWORD *)Item + 16);
        if ( !v14 )
        {
          v15 = 1;
          goto LABEL_38;
        }
        if ( *(_DWORD *)(v14 + 52) == this->fields.summonType
          && (SummonId_k__BackingField < 1 || *(_DWORD *)(v14 + 16) == SummonId_k__BackingField) )
        {
          break;
        }
        if ( size == ++v12 )
          goto LABEL_37;
      }
      v15 = *((_DWORD *)Item + 34);
      goto LABEL_38;
    }
LABEL_37:
    v15 = 0;
LABEL_38:
    SummonControl__setDispRePosition(this, v15, v2);
  }
}


void SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  Il2CppObject *Item; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v13; // x25
  UIWidget_o *v14; // x23
  UIWidget_o *v15; // x22
  UIWidget_o *v16; // x20
  UIWidget_o *v17; // x24
  __int64 v18; // x2
  SummonControl_c *v19; // x8
  UIWidget_o *v20; // x21
  struct SummonControl_StaticFields *static_fields; // x8
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

  if ( (byte_596CA3C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_2213A60(&SummonControl_TypeInfo);
    byte_596CA3C = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentGachaInfo,
    (int32_t)Item,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v14 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v15 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v16 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v17 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v19 = SummonControl_TypeInfo;
  v20 = (UIWidget_o *)vaildGachaList;
  if ( !*(&SummonControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo, method, v18);
    v19 = SummonControl_TypeInfo;
  }
  static_fields = v19->static_fields;
  COLOR_VAL = static_fields->COLOR_VAL;
  if ( isPointSummon )
  {
    if ( !v13 )
      goto LABEL_34;
    v23.fields.r = static_fields->COLOR_VAL;
    v23.fields.g = v23.fields.r;
    v23.fields.b = v23.fields.r;
    v23.fields.a = 1.0;
    UIWidget__set_color(v13, v23, 0);
    if ( !v14 )
      goto LABEL_34;
    v24.fields.r = COLOR_VAL;
    v24.fields.g = COLOR_VAL;
    v24.fields.b = COLOR_VAL;
    v24.fields.a = 1.0;
    UIWidget__set_color(v14, v24, 0);
    if ( !v17 )
      goto LABEL_34;
    v25.fields.r = COLOR_VAL;
    v25.fields.g = COLOR_VAL;
    v25.fields.b = COLOR_VAL;
    v25.fields.a = 1.0;
    UIWidget__set_color(v17, v25, 0);
    if ( !v20 )
      goto LABEL_34;
    v26.fields.r = COLOR_VAL;
    v26.fields.g = COLOR_VAL;
    v26.fields.b = COLOR_VAL;
    v26.fields.a = 1.0;
    UIWidget__set_color(v20, v26, 0);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0);
    if ( !v15 )
      goto LABEL_34;
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    UIWidget__set_color(v15, v27, 0);
    if ( !v16 )
      goto LABEL_34;
    v28.fields.r = 1.0;
    v28.fields.g = 1.0;
    v28.fields.b = 1.0;
    v28.fields.a = 1.0;
    UIWidget__set_color(v16, v28, 0);
  }
  else
  {
    if ( !v15 )
      goto LABEL_34;
    v29.fields.r = static_fields->COLOR_VAL;
    v29.fields.g = v29.fields.r;
    v29.fields.b = v29.fields.r;
    v29.fields.a = 1.0;
    UIWidget__set_color(v15, v29, 0);
    if ( !v16 )
      goto LABEL_34;
    v30.fields.r = COLOR_VAL;
    v30.fields.g = COLOR_VAL;
    v30.fields.b = COLOR_VAL;
    v30.fields.a = 1.0;
    UIWidget__set_color(v16, v30, 0);
    if ( !v13 )
      goto LABEL_34;
    v31.fields.r = 1.0;
    v31.fields.g = 1.0;
    v31.fields.b = 1.0;
    v31.fields.a = 1.0;
    UIWidget__set_color(v13, v31, 0);
    if ( !v14 )
      goto LABEL_34;
    v32.fields.r = 1.0;
    v32.fields.g = 1.0;
    v32.fields.b = 1.0;
    v32.fields.a = 1.0;
    UIWidget__set_color(v14, v32, 0);
    if ( !v17 )
      goto LABEL_34;
    v33.fields.r = 1.0;
    v33.fields.g = 1.0;
    v33.fields.b = 1.0;
    v33.fields.a = 1.0;
    UIWidget__set_color(v17, v33, 0);
    if ( !v20 )
      goto LABEL_34;
    v34.fields.r = 1.0;
    v34.fields.g = 1.0;
    v34.fields.b = 1.0;
    v34.fields.a = 1.0;
    UIWidget__set_color(v20, v34, 0);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 1, 0);
  }
  if ( (unsigned int)(this->fields.tutorialKind - 1) <= 2 )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( vaildGachaList )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0);
      return;
    }
LABEL_34:
    sub_2213CDC(vaildGachaList, method);
  }
}


void SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_596CA82 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596CA82 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(summonResultInfo, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)summonResultInfo, 0);
  this->fields.isShowingSummonEffect = 0;
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setSliderIcon(SummonControl_o *this, int32_t idx, const MethodInfo *method)
{
  UnityEngine_Component_o *sliderGrid; // x0
  UnityEngine_Component_o *sliderGrid2; // x8
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  signed int v9; // w24
  float v10; // s0
  unsigned int v11; // w22
  int v12; // w8
  float v13; // s0
  unsigned int v14; // w26
  UnityEngine_Transform_o *v15; // x0
  int32_t v16; // w1
  const MethodInfo *v17; // x2
  SelectBannerSliderIcon_o *v18; // x23
  const MethodInfo *v19; // x2

  if ( (byte_596CA3D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    byte_596CA3D = 1;
  }
  sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !sliderGrid )
    goto LABEL_22;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sliderGrid, 0);
  sliderGrid2 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
  if ( !sliderGrid2 )
    goto LABEL_22;
  v7 = (UnityEngine_Transform_o *)sliderGrid;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sliderGrid2, 0);
  if ( !v7 )
    goto LABEL_22;
  v8 = (UnityEngine_Transform_o *)sliderGrid;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(v7, 0);
  if ( !v8 )
    goto LABEL_22;
  v9 = UnityEngine_Transform__get_childCount(v8, 0) + (_DWORD)sliderGrid;
  if ( v9 >= 1 )
  {
    v10 = vcvts_n_f32_s32(v9, 1u);
    v11 = 0;
    v12 = vcvtps_s32_f32(v10);
    v13 = ceilf(v10);
    if ( v12 <= 50 )
      v12 = 50;
    if ( v13 == INFINITY )
      v14 = 50;
    else
      v14 = v12;
    while ( 1 )
    {
      if ( v11 >= v14 )
      {
        v16 = v11 - v14;
        v15 = v8;
      }
      else
      {
        v15 = v7;
        v16 = v11;
      }
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v15, v16, 0);
      if ( !sliderGrid )
        break;
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                sliderGrid,
                                                (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !sliderGrid )
        break;
      v18 = (SelectBannerSliderIcon_o *)sliderGrid;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)sliderGrid, 0, v17);
      if ( idx == v11 )
        SelectBannerSliderIcon__setEnableOnImg(v18, 1, v19);
      if ( v9 == ++v11 )
        return;
    }
LABEL_22:
    sub_2213CDC(sliderGrid, *(_QWORD *)&idx);
  }
}


void SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *Time; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v7; // x2
  struct System_String_o *v8; // x1
  struct System_String_o **p_assetPath; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *summonHelpLabel; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  TerminalPramsManager_c *v21; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  long double v30; // q0
  __int64 v31; // x0
  __int64 v32; // x0
  Il2CppObject *MasterData_object; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct GachaEntity_array *ListValidData; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  const MethodInfo *v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  __int64 v55; // x1
  __int64 v56; // x2
  UISprite_o *summonMBannerLineSprite; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  System_String_o *v60; // x21
  __int64 v61; // x2
  System_String_o *v62; // x20
  System_String_o *assetPath; // x20
  AssetLoader_LoadEndDataHandler_o *v64; // x21
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  if ( (byte_596CA24 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SummonControl_LoadBannerEnd__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_12975/*"SUMMON_HELP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_13721/*"SummonBanners/DownloadSummonBanner"*/);
    sub_2213A60(&StringLiteral_6667/*"FAIL_LOAD"*/);
    sub_2213A60(&StringLiteral_21407/*"img_line_summon"*/);
    sub_2213A60(&StringLiteral_21290/*"img_bg_banner"*/);
    byte_596CA24 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = (UnityEngine_Transform_o *)NetworkManager__getTime(0);
  summonBannerInfo = this->fields.summonBannerInfo;
  this->fields.summonSceneInTime = (int64_t)Time;
  if ( !summonBannerInfo )
    goto LABEL_45;
  Time = UnityEngine_GameObject__get_transform(summonBannerInfo, 0);
  if ( !Time )
    goto LABEL_45;
  localPosition = UnityEngine_Transform__get_localPosition(Time, 0);
  Time = (UnityEngine_Transform_o *)this->fields.maskBgObject;
  this->fields.initBannerPos = localPosition;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  Time = (UnityEngine_Transform_o *)this->fields.maskObject;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  SummonControl__setDispSummonInfo(this, 1, v7);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0, 40, 0);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)Time, 1, 0, 0, 0);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0);
  this->fields.isDoneTutorial = 1;
  v8 = (struct System_String_o *)StringLiteral_13721/*"SummonBanners/DownloadSummonBanner"*/;
  p_assetPath = &this->fields.assetPath;
  this->fields.getSvtIdx = 0;
  this->fields.assetPath = v8;
  *(_QWORD *)&this->fields.currentIdx = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetPath, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12975/*"SUMMON_HELP_MESSAGE"*/, 0);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19, v20);
  if ( !byte_596CAB7 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596CAB7 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19, v20);
    v21 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v21->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  SummonControl__setUserResourceDisp(this, v29);
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v31 + 309) & 1) == 0 )
    v31 = sub_224B908(v30);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_WORD *)(v32 + 309) & 1) == 0 )
    v32 = sub_224B908(v30);
  Time = **(UnityEngine_Transform_o ***)(v32 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaMst,
    (int32_t)MasterData_object,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0);
  this->fields.useGachaData = ListValidData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.useGachaData,
    (int32_t)ListValidData,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  SummonControl__CheckValidGachaList(this, v47);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.vaildGachaList, 0, v48, v49, v50, v51, v52, v53);
  }
  Time = (UnityEngine_Transform_o *)this->fields.summonBannerScrollView;
  if ( !Time )
    goto LABEL_45;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonHelpInfo;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerObject;
  if ( !Time )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
  summonMBannerLineSprite = this->fields.summonMBannerLineSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55, v56);
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_21407/*"img_line_summon"*/, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&Time->klass[2]._1.this_arg.bits)(
    Time,
    Time->klass[2]._1.element_class);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_21290/*"img_bg_banner"*/, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerScrollView;
  if ( !Time )
    goto LABEL_45;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0);
  v60 = *p_assetPath;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v58, v59);
  if ( !AssetManager__isExistAssetStorage(v60, 0) )
  {
    Time = (UnityEngine_Transform_o *)this->fields.fsm;
    if ( Time )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6667/*"FAIL_LOAD"*/, 0);
      return;
    }
LABEL_45:
    sub_2213CDC(Time, v5);
  }
  v62 = *p_assetPath;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v61);
  AssetManager__SetAssetBundleUnload(v62, 0);
  assetPath = this->fields.assetPath;
  v64 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v64, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0);
  AssetManager__loadAssetStorage(assetPath, v64, 1, 0, 0);
}


void SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  SummonResultComponent_o *Instance; // x0
  __int64 v7; // x2
  CommonUI_o *v8; // x20
  SummonControl___c_c *v9; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__274_0; // x21
  Il2CppObject *v12; // x22
  struct SummonControl___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596CA7E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__setSummonResultList_b__274_0__);
    sub_2213A60(&SummonControl___c_TypeInfo);
    sub_2213A60(&StringLiteral_9712/*"NO_EXIST"*/);
    sub_2213A60(&StringLiteral_12733/*"SHOW_TALK"*/);
    byte_596CA7E = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( TutorialFlag__Get_47388504(107, 0) )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
    if ( !TutorialFlag__Get_47388504(108, 0) && SummonControl__isSvtEqSummonResult(this, v4) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v8 = (CommonUI_o *)Instance;
      v9 = SummonControl___c_TypeInfo;
      if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v4, v7);
        v9 = SummonControl___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__274_0 = static_fields->__9__274_0;
      if ( !_9__274_0 )
      {
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, v4, v7);
          static_fields = SummonControl___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__274_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__274_0, v12, Method_SummonControl___c__setSummonResultList_b__274_0__, 0);
        v13 = SummonControl___c_TypeInfo->static_fields;
        v13->__9__274_0 = _9__274_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v13->__9__274_0,
          (int32_t)_9__274_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      if ( !v8 )
        goto LABEL_25;
      CommonUI__OpenTutorialImageDialog_37396784(v8, 2, 108, _9__274_0, 0, 0, 0);
    }
  }
  Instance = this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_25;
  SummonResultComponent__initGachaResultList(
    Instance,
    this->fields.gachaResInfoList,
    this->fields.resType,
    this->fields.extraGiftIds,
    this->fields.GachaExtraGiftList,
    0);
  Instance = (SummonResultComponent_o *)this->fields.fsm;
  if ( this->fields.resType == 2 )
  {
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12733/*"SHOW_TALK"*/, 0);
      return;
    }
LABEL_25:
    sub_2213CDC(Instance, v4);
  }
  if ( !Instance )
    goto LABEL_25;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9712/*"NO_EXIST"*/, 0);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w19
  System_Collections_Generic_List_object__o *bannerInfoList; // x0
  int32_t v6; // w21
  const MethodInfo *v7; // x2

  v3 = isEnable;
  if ( (byte_596CA1E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    byte_596CA1E = 1;
  }
  if ( !this->fields.isDoneTutorial )
    v3 &= this->fields.tutorialKind != 2;
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_10;
  v6 = 0;
  while ( v6 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v6,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, v3 & 1, 0);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
      ++v6;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_10;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.leftArrowBtn;
  if ( !bannerInfoList
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v3 & 1, 0),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.rightArrowBtn) == 0) )
  {
LABEL_10:
    sub_2213CDC(bannerInfoList, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v3 & 1, 0);
  SummonControl__SetMiniBannerArrowAndColliderEnable(this, v3 & 1, v7);
}


void SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *Master_object; // x0
  __int64 v12; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *currentFragmentNumLb; // x20
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596CA29 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SummonControl__setUserResourceDisp_b__171_0__);
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    byte_596CA29 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
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
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &stone);
  Master_object = System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v15, 0);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v17, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__171_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v17, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !*p_userGameEntity )
    goto LABEL_21;
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)TblUserMaster__getUserData(
                                       (TblUserMaster_o *)Master_object,
                                       (*p_userGameEntity)->fields.userId,
                                       0);
  if ( !Master_object )
    goto LABEL_21;
  currentPointNumLb = this->fields.currentPointNumLb;
  klass = (int)Master_object[1].klass;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &klass);
  Master_object = System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v21, 0);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v22, 0);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &UserStoneFragmentNum);
  Master_object = System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v24, 0);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v25, 0)) == 0)
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        GameObjectExtensions__SetLocalPositionX(v26, -179.0, 0),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0)
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v27, 0)) == 0) )
  {
LABEL_21:
    sub_2213CDC(Master_object, v12);
  }
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(v28, 179.0, 0);
}


void SummonControl__set_IsOneTimeFreeSummonDialog(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOneTimeFreeSummonDialog_k__BackingField = value;
}


void SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_596CA5E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonControl_ShowConfirmDialog__);
    byte_596CA5E = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
  SummonControl__CheckOnExecuteGachaTutorial(this, v3, v4);
}


void SummonControl__showHelpImg(SummonControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v4; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w21
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t monitor; // w22
  _QWORD *v13; // x8
  _DWORD *v14; // x8
  int32_t v15; // w22
  int32_t klass; // w23
  __int64 v17; // x2
  int64_t klass_low; // x24
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppObject *v28; // x1
  Il2CppClass **v29; // x0
  __int64 v30; // x2
  int32_t v31; // w22

  if ( (byte_596CA38 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596CA38 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v4 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v4, 0);
    if ( EventTutorialEntity )
    {
      v6 = (System_Collections_Generic_List_object__o *)EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v6->fields._size >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v6,
                     v8,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v6,
                       v8,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
              if ( !Item )
                break;
              monitor = (int32_t)Item[1].monitor;
              if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10, v11);
              if ( !TutorialFlag__GetGachaFlg(monitor, 0) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                v13 = Item[3].monitor;
                if ( !v13 )
                  break;
                if ( v13[3] )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v14 = Item[3].monitor;
                  if ( !v14 )
                    break;
                  if ( !v14[6] )
                    sub_2213CE4(Item);
                  v15 = v14[8];
                }
                else
                {
LABEL_23:
                  v15 = 0;
                }
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10, v17);
                if ( CondType__IsOpen(klass, v15, klass_low, 0, 0, 0) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v7 )
                    break;
                  items = v7->fields._items;
                  v26 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v7->fields._version;
                  if ( !items )
                    break;
                  size = v7->fields._size;
                  v28 = Item;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v7,
                      Item,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v29 = &items->obj.klass + size;
                    v7->fields._size = size + 1;
                    v29[4] = (Il2CppClass *)v28;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v29 + 4),
                      (int32_t)v28,
                      v19,
                      v20,
                      v21,
                      v22,
                      v23,
                      v24);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v31 = (int32_t)Item[1].monitor;
                  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v10, v30);
                  TutorialFlag__SetGachaFlg(v31, 0);
                }
              }
            }
            if ( ++v8 >= v6->fields._size )
              goto LABEL_39;
          }
          sub_2213CDC(Item, v10);
        }
LABEL_39:
        UnityEngine_PlayerPrefs__Save(0);
        EventTutorialMaster__TutorialChainWithoutCheckStart(
          (System_Collections_Generic_List_EventTutorialEntity__o *)v7,
          0,
          0);
      }
    }
  }
}


void SummonControl__showServantDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *_47388504; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x2
  CommonUI_o *v8; // x20
  SummonControl___c_c *v9; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__268_0; // x21
  Il2CppObject *v12; // x22
  struct SummonControl___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v22; // x8
  struct GachaInfos_array *v23; // x8
  __int64 v24; // x9
  GachaInfos_o *v25; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v28; // x22
  struct GachaInfos_array *v29; // x8
  __int64 v30; // x9
  GachaInfos_o *v31; // x8
  CommonUI_o *v32; // x20
  int64_t userSvtId; // x21
  ServantStatusDialog_EndDelegate_o *v34; // x22

  if ( (byte_596CA79 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonControl_DialogCallBack__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&Method_SummonControl___c__showServantDialog_b__268_0__);
    sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CA79 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  _47388504 = (Il2CppObject *)TutorialFlag__Get_47388504(107, 0);
  if ( ((unsigned __int8)_47388504 & 1) != 0 )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
    _47388504 = (Il2CppObject *)TutorialFlag__Get_47388504(108, 0);
    if ( ((unsigned __int8)_47388504 & 1) == 0 )
    {
      _47388504 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v5);
      if ( ((unsigned __int8)_47388504 & 1) != 0 )
      {
        _47388504 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v8 = (CommonUI_o *)_47388504;
        v9 = SummonControl___c_TypeInfo;
        if ( !*(&SummonControl___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo, v5, v7);
          v9 = SummonControl___c_TypeInfo;
        }
        static_fields = v9->static_fields;
        _9__268_0 = static_fields->__9__268_0;
        if ( !_9__268_0 )
        {
          if ( !*(&v9->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v9, v5, v7);
            static_fields = SummonControl___c_TypeInfo->static_fields;
          }
          v12 = (Il2CppObject *)static_fields->__9;
          _9__268_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(_9__268_0, v12, Method_SummonControl___c__showServantDialog_b__268_0__, 0);
          v13 = SummonControl___c_TypeInfo->static_fields;
          v13->__9__268_0 = _9__268_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v13->__9__268_0,
            (int32_t)_9__268_0,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
        }
        if ( !v8 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_37396784(v8, 2, 108, _9__268_0, 0, 0, 0);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
LABEL_35:
    sub_2213CE4(_47388504);
  v22 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v22 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v22->fields.type, 0) )
  {
    _47388504 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_47388504 )
      goto LABEL_34;
    _47388504 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_47388504,
                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v23 = this->fields.gachaResInfoList;
    if ( !v23 )
      goto LABEL_34;
    v24 = this->fields.getSvtIdx;
    if ( (unsigned int)v24 < LODWORD(v23->max_length) )
    {
      v25 = v23->m_Items[v24];
      if ( v25 )
      {
        if ( _47388504 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_47388504,
                     v25->fields.userSvtId,
                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v28, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_37385832(
              (CommonUI_o *)Instance,
              0,
              (UserCommandCodeEntity_o *)Entity,
              v28,
              0,
              0);
            return;
          }
        }
      }
LABEL_34:
      sub_2213CDC(_47388504, v5);
    }
    goto LABEL_35;
  }
  _47388504 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = this->fields.gachaResInfoList;
  if ( !v29 )
    goto LABEL_34;
  v30 = this->fields.getSvtIdx;
  if ( (unsigned int)v30 >= LODWORD(v29->max_length) )
    goto LABEL_35;
  v31 = v29->m_Items[v30];
  if ( !v31 )
    goto LABEL_34;
  v32 = (CommonUI_o *)_47388504;
  userSvtId = v31->fields.userSvtId;
  v34 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v34, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0);
  if ( !v32 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_37382644(v32, 6, userSvtId, v34, 0, 0);
}


void SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_596CA50 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl_endPurchaseStone__);
    byte_596CA50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_2213CCC(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0);
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v4, 0, 0, 0);
}


void SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596CA72 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__showSummonEffect_b__255_0__);
    byte_596CA72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__255_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_596CA7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl__showSummonResultInfo_b__273_0__);
    byte_596CA7D = 1;
  }
  if ( this->fields.resType == 2 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 0, 0, 40, 0);
  }
  else
  {
    titleInfo = (TitleInfoControl_o *)this->fields.maskBgObject;
    if ( !titleInfo )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0, 40, 0);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setBackBtnSprite_46859020(titleInfo, 1, 0, 0, 0);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && LODWORD(overflowSvtCoinInfos->max_length) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
        v9 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__273_0__, 0);
      if ( !Instance )
        goto LABEL_23;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v11, 0);
    }
  }
  SummonControl__setUserResourceDisp(this, v4);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_23;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo )
    goto LABEL_23;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_23;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)titleInfo, 0) )
    return;
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo )
LABEL_23:
    sub_2213CDC(titleInfo, method);
  SummonResultComponent__SetActive((SummonResultComponent_o *)titleInfo, 1, 0);
}


void SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596CA49 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl_endPurchaseSvtEqFrame__);
    sub_2213A60(&Method_SummonControl_resetStoneInfo__);
    byte_596CA49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_2213CCC(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0);
}


void SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596CA47 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonControl_endPurchaseSvtFrame__);
    sub_2213A60(&Method_SummonControl_resetStoneInfo__);
    byte_596CA47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseSvtFrame__, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__OpenServantFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0);
}


void SummonControl__showSvtTalk(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v8; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w21
  int32_t limitCount; // w20
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
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v31; // x23
  System_Action_o *v32; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596CA76 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&ServantAssetArgs_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&Method_SummonControl__showSvtTalk_b__263_0__);
    sub_2213A60(&Method_SummonControl_close__);
    sub_2213A60(&StringLiteral_3612/*"CLICK_OK"*/);
    byte_596CA76 = 1;
  }
  entity = 0;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_40;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_2213CE4(Instance);
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_40;
  userSvtId = v8->fields.userSvtId;
  objectId = v8->fields.objectId;
  limitCount = v8->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v12 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v12,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_40;
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !MasterData_object )
      goto LABEL_40;
    if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity((ServantVoiceMaster_o *)MasterData_object, objectId, 0) )
      goto LABEL_17;
  }
  else
  {
LABEL_16:
    if ( entity && !ServantEntity__get_IsServant((ServantEntity_o *)entity, 0)
      || SvtType__IsCommandCode(v8->fields.type, 0) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3612/*"CLICK_OK"*/, 0);
        return;
      }
      goto LABEL_40;
    }
  }
  Instance = (DataManager_o *)this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
  {
    Instance = (DataManager_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_40;
    SummonResultComponent__SetActive((SummonResultComponent_o *)Instance, 0, 0);
  }
  if ( userSvtId < 1 )
  {
    v14 = 0;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v12,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_40;
    v14 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0);
  if ( !MasterData_object )
LABEL_40:
    sub_2213CDC(Instance, v5);
  v15 = (int)Instance;
  v16 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0);
  if ( v16 && (v17 = ServantVoiceEntity__GetSummonScriptId(v16, v15, 0)) != 0 )
  {
    summonScriptId = v17;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__263_0__, 0);
    if ( !v19 )
      goto LABEL_40;
    ScriptManager__PlayGacha_51574240(
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
      0);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
    {
      v21 = (ServantAssetArgs_o *)sub_2213CCC(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_53671584(v21, objectId, limitCount, 0, 0, 0, 0);
      this->fields.battleAssetArgs = v21;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.battleAssetArgs,
        (int32_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v28, v29);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0);
    }
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl_close__, 0);
    if ( !v31 )
      goto LABEL_40;
    ScriptManager__PlayGacha_51574240(
      (ScriptManager_o *)v31,
      (UserServantEntity_o *)v14,
      objectId,
      limitCount,
      0,
      1,
      v32,
      0,
      0,
      0,
      0);
  }
}


void SummonControl__CoWaitCreatedMBannerSpringPanel_d__188___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SummonControl__CoWaitCreatedMBannerSpringPanel_d__188__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *v8; // x19
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *v21; // x20
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v8 = this;
  if ( (byte_596CAC1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CAC1 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(spring_5__2, 0, 0) )
      {
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0)) == 0)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0),
              !summonMBannerCenterChild) )
        {
LABEL_22:
          sub_2213CDC(this, method);
        }
        UICenterOnChild__CenterOn_56214248(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0, 0);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v8->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields._spring_5__2,
      (int32_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v21 = (UnityEngine_Object_o *)v8->fields._spring_5__2;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    if ( UnityEngine_Object__op_Equality(v21, 0, 0) )
    {
      v8->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, 0, v2, v22, v23, v24, v25, v26);
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return 1;
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v8->fields._spring_5__2 = 0;
    v8->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._spring_5__2, 0, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_22;
    goto LABEL_9;
  }
  return 0;
}


Il2CppObject *SummonControl__CoWaitCreatedMBannerSpringPanel_d__188__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__188__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *SummonControl__CoWaitCreatedMBannerSpringPanel_d__188__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SummonControl__CoWaitCreatedMBannerSpringPanel_d__188__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *this,
        const MethodInfo *method)
{
  ;
}


void SummonControl__WaitBattleChrLoad_d__265___ctor(
        SummonControl__WaitBattleChrLoad_d__265_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SummonControl__WaitBattleChrLoad_d__265__MoveNext(
        SummonControl__WaitBattleChrLoad_d__265_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  PlayMakerFSM_o *fsm; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  ServantAssetArgs_o *battleAssetArgs; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_596CAC2 & 1) == 0 )
  {
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&StringLiteral_3612/*"CLICK_OK"*/);
    byte_596CAC2 = 1;
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
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0);
    this->fields._wait_5__2 = v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__2, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method, v2);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)wait_5__2, v15, v16, v17, v18, v19, v20);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_19;
  battleAssetArgs = _4__this->fields.battleAssetArgs;
  if ( battleAssetArgs )
  {
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v14, v15);
    ServantAssetLoadManager__unloadServant(battleAssetArgs, 0);
    _4__this->fields.battleAssetArgs = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.battleAssetArgs, 0, v25, v26, v27, v28, v29, v30);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_2213CDC(fsm, v14);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3612/*"CLICK_OK"*/, 0);
  return 0;
}


Il2CppObject *SummonControl__WaitBattleChrLoad_d__265__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__265_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SummonControl__WaitBattleChrLoad_d__265__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__265_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SummonControl__WaitBattleChrLoad_d__265_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *SummonControl__WaitBattleChrLoad_d__265__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__265_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SummonControl__WaitBattleChrLoad_d__265__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__265_o *this,
        const MethodInfo *method)
{
  ;
}


void SummonControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CABB & 1) == 0 )
  {
    sub_2213A60(&SummonControl___c_TypeInfo);
    byte_596CABB = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SummonControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SummonControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c___BonusSelectServantSelectDialog_b__318_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596CABD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CABD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void SummonControl___c___ShowConfirmDialog_b__231_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596CABC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CABC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void SummonControl___c___exeFormation_b__164_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0);
}


void SummonControl___c___openAfterSummonInfo_b__163_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 9, 0);
}


int32_t SummonControl___c___openSvtEqInfo_b__165_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.num - b->fields.num;
}


void SummonControl___c___setSummonResultList_b__274_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl___c___showServantDialog_b__268_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t SummonControl___c___showSummonEffect_b__255_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}


void SummonControl___c___showSummonResultInfo_b__273_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl___c__DisplayClass165_0___ctor(
        SummonControl___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass165_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *Request_object; // x0
  __int64 v5; // x1
  int32_t v6; // w20
  __int64 v7; // x2
  int32_t v8; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_596CABE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_3574/*"CLEAR_TUTORIAL"*/);
    byte_596CABE = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Request_object = NetworkManager__getRequest_object_(
                     0,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_17;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_17;
  v6 = 0;
  while ( v6 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v6,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Request_object )
      goto LABEL_17;
    if ( *((_DWORD *)Request_object + 6) != 1 )
    {
      Request_object = this->fields.tutoList;
      if ( !Request_object )
        goto LABEL_17;
      Request_object = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Request_object,
                         v6,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_17;
      v8 = *((_DWORD *)Request_object + 6);
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v7);
      TutorialFlag__SetGachaFlg(v8, 0);
    }
    Request_object = this->fields.tutoList;
    ++v6;
    if ( !Request_object )
      goto LABEL_17;
  }
  UnityEngine_PlayerPrefs__Save(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0 )
LABEL_17:
    sub_2213CDC(Request_object, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3574/*"CLEAR_TUTORIAL"*/, 0);
}


void SummonControl___c__DisplayClass180_0___ctor(
        SummonControl___c__DisplayClass180_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass180_0___createSummonInfo_b__0(
        SummonControl___c__DisplayClass180_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_2213CDC(this, 0);
  UIWidget__set_width((UIWidget_o *)sprite, this->fields.slSpriteSize, 0);
  UIWidget__set_height((UIWidget_o *)sprite, this->fields.slSpriteSize, 0);
}


void SummonControl___c__DisplayClass285_0___ctor(
        SummonControl___c__DisplayClass285_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass285_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass285_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass285_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_596CABF & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass285_0_o *)sub_2213A60(&StringLiteral_6016/*"EXECUTE"*/);
    byte_596CABF = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass285_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6016/*"EXECUTE"*/, 0);
}


void SummonControl___c__DisplayClass286_0___ctor(
        SummonControl___c__DisplayClass286_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass286_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass286_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass286_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_596CAC0 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass286_0_o *)sub_2213A60(&StringLiteral_6016/*"EXECUTE"*/);
    byte_596CAC0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass286_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6016/*"EXECUTE"*/, 0);
}


void SummonControl___c__DisplayClass290_0___ctor(
        SummonControl___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass290_0___getFriendPointIndex_b__0(
        SummonControl___c__DisplayClass290_0_o *this,
        VaildGachaInfo_o *info,
        const MethodInfo *method)
{
  struct VaildGachaInfo_array *oldGachas; // x8
  __int64 i; // x9
  VaildGachaInfo_o *v5; // x8

  if ( !info )
    goto LABEL_8;
  oldGachas = this->fields.oldGachas;
  if ( !oldGachas )
    goto LABEL_8;
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(oldGachas->max_length) )
    sub_2213CE4(this);
  v5 = oldGachas->m_Items[i];
  if ( !v5 )
LABEL_8:
    sub_2213CDC(this, info);
  return info->fields.id == v5->fields.id && v5->fields.type == 3;
}


void SummonControl___c__DisplayClass291_0___ctor(
        SummonControl___c__DisplayClass291_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass291_0___GetGachaIndex_b__0(
        SummonControl___c__DisplayClass291_0_o *this,
        VaildGachaInfo_o *info,
        const MethodInfo *method)
{
  struct VaildGachaInfo_array *oldGachas; // x8
  __int64 i; // x9
  VaildGachaInfo_o *v5; // x8

  if ( !info )
    goto LABEL_6;
  oldGachas = this->fields.oldGachas;
  if ( !oldGachas )
    goto LABEL_6;
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(oldGachas->max_length) )
    sub_2213CE4(this);
  v5 = oldGachas->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_2213CDC(this, info);
  return info->fields.id == v5->fields.id;
}


void SummonControl___c__DisplayClass305_0___ctor(
        SummonControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass305_0___OnClickSummonListBtn_b__1(
        SummonControl___c__DisplayClass305_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  struct GachaEntity_o *gachaInfo; // x8

  if ( !x || (gachaInfo = this->fields.gachaInfo) == 0 )
    sub_2213CDC(this, x);
  return x->fields.id == gachaInfo->fields.id;
}


void SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}