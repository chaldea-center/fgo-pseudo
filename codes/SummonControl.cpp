void SummonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct SummonControl_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C3F512 & 1) == 0 )
  {
    sub_1C37058(&SummonControl_TypeInfo);
    sub_1C37058(&StringLiteral_3209/*"BonusSelectSummonSaveKey"*/);
    byte_4C3F512 = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v4 = StringLiteral_3209/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3209/*"BonusSelectSummonSaveKey"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v4, v1, v2);
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
}


void SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C3F511 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GachaSubEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_1C37058(&StringLiteral_19735/*"gachaIds"*/);
    sub_1C37058(&StringLiteral_6870/*"FrequencyType"*/);
    byte_4C3F511 = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0FB40;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0FF50;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C0FCC0;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v5 = StringLiteral_19735/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19735/*"gachaIds"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.DETAIL_SCRIPT_IDS, v5, v2, v3);
  v6 = StringLiteral_6870/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6870/*"FrequencyType"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.DETAIL_SCRIPT_TYPE, v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.gachaIdToMiniBannerIndex = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.gachaIdToMiniBannerIndex, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.vaildGachaList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GachaSubEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.gachaSubEntityList, (int32_t)v18, v19, v20);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o *name; // x1
  int8x16_t v12; // q0
  int32_t ticketItemId; // w8
  System_String_o *WebViewAddress_41379660; // x0
  System_String_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t gachaGroupId; // w8
  int32_t gachaListGroupId; // w8
  int32_t maxDrawNum; // w8
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  DataManager_o *v26; // x24
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  intptr_t v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  intptr_t v38; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3F49C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaSubEntity__Add__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&VaildGachaInfo_TypeInfo);
    byte_4C3F49C = 1;
  }
  entity = 0;
  v7 = sub_1C372A4(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v7, 0);
  if ( !data || !v7 )
    goto LABEL_32;
  *(_DWORD *)(v7 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v7 + 24) = name;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)name, v9, v10);
  *(_DWORD *)(v7 + 32) = data->fields.beforeGachaId;
  v12 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCu));
  *(int8x16_t *)(v7 + 36) = vextq_s8(v12, v12, 0xCu);
  *(_DWORD *)(v7 + 52) = data->fields.type;
  ticketItemId = data->fields.ticketItemId;
  *(_BYTE *)(v7 + 64) = 1;
  *(_BYTE *)(v7 + 84) = 0;
  *(_DWORD *)(v7 + 60) = ticketItemId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41379660 = NetworkManager__getWebViewAddress_41379660(1, 0);
  v15 = System_String__Concat_63561656(WebViewAddress_41379660, data->fields.detailUrl, 0);
  *(_QWORD *)(v7 + 88) = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 88), (int32_t)v15, v16, v17);
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
  v21 = sub_1C37100(int___TypeInfo, 0);
  *(_QWORD *)(v7 + 72) = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 72), v21, v22, v23);
  *(_OWORD *)(v7 + 128) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v7 + 144) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    *(_BYTE *)(v7 + 84) = data->fields.freeDrawFlag > 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0);
    if ( Instance )
    {
      v26 = Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_32;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_32;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v26,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = v26;
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v26, v24, v25);
      }
      *(_DWORD *)(v7 + 80) = HIDWORD(v26->fields.m_CachedPtr);
      *(_DWORD *)(v7 + 40) = HIDWORD(v26->fields.m_CancellationTokenSource);
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_32;
    *(_DWORD *)(v7 + 40) = targetEntity->fields.imageId;
    *(_DWORD *)(v7 + 68) = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_QWORD *)(v7 + 72) = adjustIds;
    sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 72), (int32_t)adjustIds, v24, v25);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         data->fields.id,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_32;
    *(_BYTE *)(v7 + 148) = GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, (int64_t *)(v7 + 152), 0);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v35 = Instance->fields.m_CachedPtr,
        v36 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v35) )
  {
LABEL_32:
    sub_1C372B4(Instance);
  }
  v37 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v7,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * v37;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v37 + 1;
    *(_QWORD *)(v38 + 32) = v7;
    sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 32), v7, v33, v34);
  }
}


void SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  System_String_o *v5; // x21
  System_String_o *v6; // x22
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  SummonInfoDlgComponent_CallbackFunc_o *v8; // x23

  if ( (byte_4C3F4D7 & 1) == 0 )
  {
    sub_1C37058(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_4C3F4D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0)) == 0
    || (v5 = (System_String_o *)*((_QWORD *)Instance + 3),
        v6 = (System_String_o *)*((_QWORD *)Instance + 4),
        infoDlgInfo = this->fields.infoDlgInfo,
        v8 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1C372B4(Instance);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v5, v6, v8, 0);
}


void SummonControl__BonusSelectBuyChargeStoneCheck(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonControl_o *v3; // x19
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9

  v3 = this;
  if ( (byte_4C3F509 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_4C3F509 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0);
      return;
    }
LABEL_9:
    sub_1C372B4(this);
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
  int32_t HaveChargeStoneNum_k__BackingField; // w8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaResourceNum; // w9
  System_String_o **v7; // x8

  v2 = this;
  if ( (byte_4C3F508 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3353/*"CHECK_STONE"*/);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_4C3F508 = 1;
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
    sub_1C372B4(this);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v7 = (System_String_o **)&StringLiteral_3353/*"CHECK_STONE"*/;
  else
    v7 = (System_String_o **)&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, *v7, 0);
}


void SummonControl__BonusSelectCloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C3F50E & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_1C37058(&StringLiteral_6977/*"GO_BUY_STONE"*/);
    byte_4C3F50E = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  v6 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_6977/*"GO_BUY_STONE"*/, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(confirmDlgInfo);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
  SummonControl__BonusSelectServantSelectDialog(this, v8);
}


void SummonControl__BonusSelectNotHaveChargeStoneDialog(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v8; // x23
  const MethodInfo *v9; // x3
  PlayMakerFSM_o *fsm; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x5

  if ( (byte_4C3F50C & 1) == 0 )
  {
    sub_1C37058(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SummonControl_GoBuyStone__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F50C = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_GoBuyStone__,
      v9);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        confirmDlgInfo,
        v11,
        haveChargeStone,
        haveFreeStone,
        v8,
        v12);
      return;
    }
LABEL_8:
    sub_1C372B4(fsm);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__BonusSelectServantSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x21

  if ( (byte_4C3F50A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BonusSelectSummonAssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__BonusSelectServantSelectDialog_b__315_0__);
    byte_4C3F50A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v6 = (BonusSelectSummonAssetManager_o *)sub_1C372A4(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v6, 0);
        this->fields.bonusSelectAssetManager = v6;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v6, v7, v8);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__BonusSelectServantSelectDialog_b__315_0__, 0);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v9, 0);
        return;
      }
    }
LABEL_15:
    sub_1C372B4(Master_object);
  }
}


void SummonControl__BonusSelectSummonConfirmResult(SummonControl_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SummonControl_o *v5; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  struct SelectBonus_array *selectBonusDatas; // x1
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4C3F4CB & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4CB = 1;
  }
  selectBonusData = 0;
  if ( result )
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
    selectBonusDatas = selectBonusData->fields.selectBonusDatas;
    if ( !selectBonusDatas )
    {
LABEL_10:
      SummonControl__ShowConfirmDialogProcess(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = selectBonusDatas;
      sub_1C36FFC(
        (CGThumbnailListItem_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        (int32_t)selectBonusDatas,
        (int32_t)v7,
        v8);
      goto LABEL_10;
    }
LABEL_14:
    sub_1C372B4(this);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v6; // x8

  if ( (byte_4C3F50B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_2952/*"BONUS_SELECT_SERVANT_SELECT"*/);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F50B = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(confirmDlgInfo);
  }
  v6 = (System_String_o **)&StringLiteral_2952/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v6 = (System_String_o **)&StringLiteral_3442/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, *v6, 0);
}


bool SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  System_Collections_Generic_List_object__o *gachaSubEntityList; // x21
  Il2CppObject *v7; // x20
  System_Predicate_object__o *v8; // x22
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x22
  System_String_o *v11; // x23
  System_String_o *v12; // x24
  System_Action_o *v13; // x25

  if ( (byte_4C3F4CF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaSubEntity__Find__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Predicate_GachaSubEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_SummonSceneRefresh__);
    sub_1C37058(&Method_SummonControl__CheckFriendPointSummonUpdate_b__233_0__);
    sub_1C37058(&StringLiteral_14829/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/);
    sub_1C37058(&StringLiteral_14828/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/);
    byte_4C3F4CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v7 = (Il2CppObject *)OpenEntity;
  v8 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_GachaSubEntity__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl__CheckFriendPointSummonUpdate_b__233_0__,
    0);
  if ( !gachaSubEntityList )
    goto LABEL_13;
  v9 = System_Collections_Generic_List_object___Find(
         gachaSubEntityList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v7 != v9 )
  {
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_14829/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_14828/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0);
    v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0);
    if ( v10 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v10, v11, v12, v13, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return v7 != v9;
    }
LABEL_13:
    sub_1C372B4(Instance);
  }
  return v7 != v9;
}


bool SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1C372B4(this);
  max_length = ids->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C372BC(this);
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
  if ( (byte_4C3F4EE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9265/*"NEXT_SVT"*/);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_6418/*"FINAL_SVT"*/);
    byte_4C3F4EE = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v4 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v4;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0 )
    sub_1C372B4(this);
  if ( v4 >= SLODWORD(gachaResInfoList->max_length) )
    v5 = &StringLiteral_6418/*"FINAL_SVT"*/;
  else
    v5 = &StringLiteral_9265/*"NEXT_SVT"*/;
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
  Il2CppObject *current; // x21
  int32_t monitor; // w22
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v13; // w22
  _DWORD *v14; // x8
  int32_t klass; // w24
  int64_t klass_low; // x23
  _BOOL8 IsOpen; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w21
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C3F50F & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    this = (SummonControl_o *)sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3F50F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  currentGachaInfo = v4->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  v6 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = (System_Collections_ICollection_o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v6, 0);
  if ( BasicHelper__IsNullOrEmpty(EventTutorialEntity, 0) )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
LABEL_37:
    sub_1C372B4(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)EventTutorialEntity,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C372B4(v9);
    monitor = (int32_t)v26.fields._current[1].monitor;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__GetGachaFlg(monitor, 0) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[3].monitor, 0);
      if ( IsNullOrEmpty )
      {
        v13 = 0;
      }
      else
      {
        v14 = current[3].monitor;
        if ( !v14 )
          sub_1C372B4(IsNullOrEmpty);
        if ( !v14[6] )
          sub_1C372BC(IsNullOrEmpty);
        v13 = v14[8];
      }
      klass = (int32_t)current[3].klass;
      klass_low = SLODWORD(current[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(klass, v13, klass_low, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v8 )
          sub_1C372B4(IsOpen);
        items = v8->fields._items;
        v21 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C372B4(IsOpen);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            current,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v23[4] = (Il2CppClass *)current;
          sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)current, v18, v19);
        }
        if ( LODWORD(current[6].klass) != 2 )
        {
          v24 = (int32_t)current[1].monitor;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          TutorialFlag__SetGachaFlg(v24, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v8,
    callback,
    0);
}


bool SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v4; // x20
  BalanceConfig_c *v5; // x8
  int v6; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int64_t QpMax; // x9
  struct BalanceConfig_StaticFields *v11; // x10
  int v12; // w10
  int64_t v13; // x23
  int64_t qp; // x21
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

  if ( (byte_4C3F4D0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SummonControl_ShowConfirmDialog__);
    sub_1C37058(&Method_SummonControl_autoSellSettingChange__);
    sub_1C37058(&Method_SummonControl_limitManaConfirmResult__);
    sub_1C37058(&Method_SummonControl_limitQpConfirmResult__);
    byte_4C3F4D0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_28;
  v4 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0);
  v5 = BalanceConfig_TypeInfo;
  v6 = (int)SelfUserGame;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  static_fields = v5->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BalanceConfig_TypeInfo;
      v11 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v11->QpMax;
      FriendPointSummonQpWarning = v11->FriendPointSummonQpWarning;
    }
    v12 = 10 * FriendPointSummonQpWarning;
  }
  else
  {
    v12 = gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
  }
  v13 = QpMax - v12;
  if ( !v6 )
    return 0;
  qp = v4->fields.qp;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = BalanceConfig_TypeInfo;
  }
  v15 = v5->static_fields;
  if ( qp >= v15->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v19 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0);
    v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v19, v20, 0);
  }
  else
  {
    if ( v4->fields.qp < v13 )
    {
      mana = v4->fields.mana;
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v15 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v15->UserItemMax )
        return 0;
      v24 = this->fields.limitWarningDlgInfo;
      v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0);
      v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
      if ( v24 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v24, v25, v26, 0);
        return 1;
      }
LABEL_28:
      sub_1C372B4(SelfUserGame);
    }
    v21 = this->fields.limitWarningDlgInfo;
    v22 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0);
    v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0);
    if ( !v21 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v21, v22, v23, 0);
  }
  return 1;
}


void SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4C3F507 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11148/*"RETURN_MAIN"*/);
    sub_1C37058(&StringLiteral_11150/*"RETURN_RESULT"*/);
    byte_4C3F507 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  if ( this->fields.isResult )
    v4 = (System_String_o **)&StringLiteral_11150/*"RETURN_RESULT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11148/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, *v4, 0);
}


void SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_c *v2; // x0
  Il2CppObject *String_71225564; // x19
  System_Object_array *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 v6; // x0

  if ( (byte_4C3F4CA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C37058(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&SummonControl_TypeInfo);
    byte_4C3F4CA = 1;
  }
  v2 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v2 = SummonControl_TypeInfo;
  }
  String_71225564 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71225564(
                                      v2->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_71225564, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__DeserializeArray_object_(
           String_71225564,
           (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v4 )
      sub_1C372B4(v6);
  }
}


bool SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F499 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F499 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
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
  const MethodInfo *v10; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v12; // x3
  StoryGachaAdjustData_o *v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  System_Comparison_T__o *v15; // x21
  StoryGachaAdjustData_o *v16; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4C3F498 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    this = (SummonControl_o *)sub_1C37058(&Method_SummonControl_SlotCompare__);
    byte_4C3F498 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v16 = 0;
  vaildGachaList = v2->fields.vaildGachaList;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C372B4(v9);
    if ( SummonControl__CheckStoryGachaAdjustData(
           (SummonControl_o *)v9,
           &v16,
           *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&word_10),
           v10) )
    {
      v13 = v16;
    }
    else
    {
      v13 = 0;
      v16 = 0;
    }
    SummonControl__AddVaildGachaInfoList(v2, (GachaEntity_o *)current, v13, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
  v14 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v15 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v15, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0);
  if ( !v14 )
LABEL_21:
    sub_1C372B4(this);
  System_Collections_Generic_List_object___Sort_58346216(
    v14,
    v15,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F4C6 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F4C6 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  if ( isStoneFragmentsBulkDialog )
    CommonUI__CloseFragmentsBulkExchangeDialog((CommonUI_o *)Instance, 0);
  else
    CommonUI__CloseFragmentsExchangeDialog((CommonUI_o *)Instance, 0);
}


System_Collections_IEnumerator_o *SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F4A4 & 1) == 0 )
  {
    sub_1C37058(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_TypeInfo);
    byte_4C3F4A4 = 1;
  }
  v3 = sub_1C372A4(SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__187___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
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
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  float v22; // s8
  int32_t fontSize; // w27
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v25; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v28; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v29; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v30; // x24
  bool isCustomLayOut; // w28
  struct GachaRqParamData_o *v32; // x8
  SummonCautionDlgComponent_o *cautionDlgInfo; // x23
  System_String_o *m_CancellationTokenSource; // x22
  int klass; // w29
  int64_t v36; // x21
  char v37; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v38; // x24
  const MethodInfo *v39; // x3
  struct GachaRqParamData_o *v40; // x8
  int32_t v41; // w25
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v42; // x26
  const MethodInfo *v43; // [xsp+18h] [xbp-78h]
  int v44; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C3F4D4 & 1) == 0 )
  {
    sub_1C37058(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C37058(&Method_SummonControl_ConfirmMessageOpen__);
    sub_1C37058(&Method_SummonControl_SetDispBtn__);
    sub_1C37058(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C37058(&Method_SummonControl_confirmCautionResult__);
    sub_1C37058(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    sub_1C37058(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C37058(&StringLiteral_23487/*"showGroupRemainingDrawNum"*/);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4D4 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method);
  v6 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_ConfirmMessageOpen__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v28 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v28,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0);
                v29 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v29,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0);
                v30 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_43;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  v8 = this->fields.gachaParamData;
  if ( !v8 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v8->fields.gachaId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  v10 = this->fields.gachaParamData;
  if ( !v10 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailMaster__GetGachaDetailEntity(
                                                    (GachaDetailMaster_o *)confirmDlgInfo,
                                                    v10->fields.gachaId,
                                                    0);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  basePanel = (System_String_o *)confirmDlgInfo->fields.basePanel;
  v12 = confirmDlgInfo;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaDetailEntity__GetScriptInt(
                                                    (GachaDetailEntity_o *)confirmDlgInfo,
                                                    (System_String_o *)StringLiteral_23487/*"showGroupRemainingDrawNum"*/,
                                                    -1,
                                                    0);
  v13 = (int)confirmDlgInfo;
  if ( (int)confirmDlgInfo < 1 )
  {
    fontSize = 0;
    v22 = 0.0;
  }
  else
  {
    if ( !Entity )
      goto LABEL_43;
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.gachaMst;
    if ( !confirmDlgInfo )
      goto LABEL_43;
    v14 = (System_String_o *)v12->fields.basePanel;
    v44 = GachaMaster__GetGroupRemainingDrawNum((GachaMaster_o *)confirmDlgInfo, (int32_t)Entity[9].klass, 0)
        / SLODWORD(Entity[4].klass);
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v15, v16, v17, v18, v19, v20);
    basePanel = System_String__Format(v14, v21, 0);
    v22 = 26.0;
    fontSize = 22;
  }
  isCustomLayOut = v13 > 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  v32 = this->fields.gachaParamData;
  if ( !v32 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v32->fields.gachaId,
                                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0);
  if ( !Entity )
    goto LABEL_43;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  m_CancellationTokenSource = (System_String_o *)v12->fields.m_CancellationTokenSource;
  klass = (int)Entity[9].klass;
  v36 = (int64_t)Entity[7].klass;
  v37 = (char)confirmDlgInfo;
  v38 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v38,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    v39);
  if ( (v37 & 1) != 0 )
  {
    v40 = this->fields.gachaParamData;
    if ( !v40 )
      goto LABEL_43;
    v41 = v40->fields.gachaId;
  }
  else
  {
    v41 = 0;
  }
  v42 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v42,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_1C372B4(confirmDlgInfo);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    m_CancellationTokenSource,
    basePanel,
    klass > 0,
    v36,
    v38,
    v41,
    v42,
    this->fields.bonusSelectAssetManager,
    isCustomLayOut,
    v22,
    fontSize,
    v43);
}


void SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4C3F4E8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__DialogCallBack_b__267_0__);
    byte_4C3F4E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__267_0__, 0);
  if ( !v6 )
    sub_1C372B4(v9);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3F4E9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C3F4E9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C3F4C5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C3F4C5 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *Item; // x0
  int32_t v8; // w21
  System_Collections_Generic_List_object__o *v9; // x8
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w24
  Il2CppObject *v12; // x22
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4C3F504 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    byte_4C3F504 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1C372B4(Item);
  v8 = 0;
  while ( v8 < Item->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v8,
                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v9 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v10 = Item;
      v11 = 0;
      v12 = (Il2CppObject *)Item;
      while ( v11 < v9->fields._size )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v9,
                                                              v11,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v10 && Item )
        {
          if ( LODWORD(v10->fields._items) != LODWORD(Item->fields._items)
            && LODWORD(v10[1].monitor) == LODWORD(Item[1].monitor) )
          {
            if ( !v12 )
              goto LABEL_25;
            if ( SHIDWORD(v12[2].klass) < SHIDWORD(Item->fields._syncRoot) )
              v12 = (Il2CppObject *)Item;
          }
          v9 = (System_Collections_Generic_List_object__o *)*baseGachaList;
          ++v11;
          if ( *baseGachaList )
            continue;
        }
        goto LABEL_25;
      }
      if ( v4 )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                              v4,
                                                              v12,
                                                              (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          items = v4->fields._items;
          v14 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              v12,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v12;
            sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v5, v6);
          }
        }
        Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
        ++v8;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)baseGachaList, (int32_t)v4, v5, v6);
}


float SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3F488 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C3F488 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(54.0, 0, 0);
}


float SummonControl__FSMenuOffsetY(SummonControl_o *this, const MethodInfo *method)
{
  return 33.0;
}


int32_t SummonControl__GetGachaIdFromSelectedBannerEntity(SummonControl_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  __int64 v4; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_array *v7; // x19
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3F4AD & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F4AD = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F527 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F527 = 1;
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
  if ( !byte_4C3F527 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F527 = 1;
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
  v7 = System_String__Split(v3, 0x2Fu, 0, 0);
  if ( !byte_4C3F528 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F528 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v5, v6);
  if ( !v7 )
    goto LABEL_31;
  if ( SLODWORD(v7->max_length) < 2 )
    return 0;
  v3 = v7->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0)) == 0 )
LABEL_31:
    sub_1C372B4(v3);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1C372BC(v3);
  System_Int32__TryParse((System_String_o *)v3[1].monitor, &result, 0);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 *v18; // x26
  int32_t v19; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x28
  int monitor; // w9
  int klass; // w9
  __int64 v23; // x8
  System_Predicate_object__o **v24; // x23
  System_Predicate_object__o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3F4FA & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C37058(&Method_SummonControl___c__DisplayClass288_0__GetGachaIndex_b__0__);
    sub_1C37058(&SummonControl___c__DisplayClass288_0_TypeInfo);
    byte_4C3F4FA = 1;
  }
  entity = 0;
  v14 = sub_1C372A4(SummonControl___c__DisplayClass288_0_TypeInfo);
  SummonControl___c__DisplayClass288_0___ctor((SummonControl___c__DisplayClass288_0_o *)v14, 0);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = oldGachas,
        v18 = (__int64 *)(v14 + 16),
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)oldGachas, v16, v17),
        (vaildGachaList = this->fields.vaildGachaList) == 0) )
  {
LABEL_27:
    sub_1C372B4(vaildGachaList);
  }
  v19 = 0;
  while ( v19 < *((_DWORD *)vaildGachaList + 6) )
  {
    gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v19,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList || !gachaMst )
      goto LABEL_27;
    vaildGachaList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               gachaMst,
                               &entity,
                               *((_DWORD *)vaildGachaList + 4),
                               (const MethodInfo_33A10EC *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
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
      LODWORD(vaildGachaList) = v19;
      return (int)vaildGachaList;
    }
    vaildGachaList = this->fields.vaildGachaList;
    ++v19;
    if ( !vaildGachaList )
      goto LABEL_27;
  }
  v23 = *v18;
  if ( *v18 )
  {
    *(_DWORD *)(v14 + 24) = oldCurrentIdx;
    v24 = (System_Predicate_object__o **)(v14 + 32);
    while ( oldCurrentIdx < *(_DWORD *)(v23 + 24) )
    {
      v25 = *v24;
      v26 = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( !*v24 )
      {
        v25 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v25,
          (Il2CppObject *)v14,
          Method_SummonControl___c__DisplayClass288_0__GetGachaIndex_b__0__,
          0);
        *(_QWORD *)(v14 + 32) = v25;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v25, v27, v28);
      }
      if ( v26 )
      {
        vaildGachaList = (void *)System_Collections_Generic_List_object___FindIndex(
                                   v26,
                                   (System_Predicate_T__o *)v25,
                                   (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
        if ( ((unsigned int)vaildGachaList & 0x80000000) == 0 )
          return (int)vaildGachaList;
        v23 = *(_QWORD *)(v14 + 16);
        oldCurrentIdx = *(_DWORD *)(v14 + 24) + 1;
        *(_DWORD *)(v14 + 24) = oldCurrentIdx;
        if ( v23 )
          continue;
      }
      goto LABEL_27;
    }
  }
  LODWORD(vaildGachaList) = defaultIndex;
  return (int)vaildGachaList;
}


int32_t SummonControl__GetGroupRemainingDrawNum(SummonControl_o *this, int32_t groupId, const MethodInfo *method)
{
  GachaMaster_o *gachaMst; // x0

  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_1C372B4(0);
  return GachaMaster__GetGroupRemainingDrawNum(gachaMst, groupId, 0);
}


int32_t SummonControl__GetMiniBannerIndex(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *gachaIdToMiniBannerIndex; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3F510 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_4C3F510 = 1;
  }
  value = 0;
  gachaIdToMiniBannerIndex = this->fields.gachaIdToMiniBannerIndex;
  if ( !gachaIdToMiniBannerIndex )
    sub_1C372B4(0);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         gachaIdToMiniBannerIndex,
         gachaId,
         &value,
         (const MethodInfo_33F3164 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w25
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v17; // x27
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4C3F50D & 1) == 0 )
  {
    sub_1C37058(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_1C37058(&Method_SummonControl_GoBuyStone__);
    sub_1C37058(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C37058(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    byte_4C3F50D = 1;
  }
  if ( res )
  {
    v5 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SummonControl_GoBuyStone__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
          v17 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v17,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0),
          !confirmDlgInfo) )
    {
      sub_1C372B4(v10);
    }
    SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
      confirmDlgInfo,
      v8,
      haveStone,
      haveFreeStone,
      haveChargeStone,
      gachaId,
      bonusSelectAssetManager,
      v17,
      v18);
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

  if ( (byte_4C3F4E1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3F4E1 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
}


void SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4C3F493 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6396/*"FAIL_LOAD"*/);
    sub_1C37058(&StringLiteral_17529/*"btn_sumonhistory"*/);
    sub_1C37058(&StringLiteral_5443/*"END_LOAD"*/);
    sub_1C37058(&StringLiteral_17528/*"btn_summon_list"*/);
    byte_4C3F493 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_10;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6396/*"FAIL_LOAD"*/, 0);
  }
  this->fields.bannerAssetData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bannerAssetData, (int32_t)data, (int32_t)method, v3);
  SummonControl__createSummonInfo(this, v7);
  SummonControl__setPositionByWarId(this, v8);
  SummonControl__ResetArrowTween(this, v9);
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17529/*"btn_sumonhistory"*/, v10);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17529/*"btn_sumonhistory"*/,
          0),
        fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17528/*"btn_summon_list"*/, v11),
        !this->fields.summonInfoCtr)
    || (SummonInfoControl__SetSummonListSprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17528/*"btn_summon_list"*/,
          0),
        (fsm = this->fields.fsm) == 0) )
  {
LABEL_10:
    sub_1C372B4(fsm);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5443/*"END_LOAD"*/, 0);
}


void SummonControl__NotHaveChargeStoneCheckSvtSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonControl__BonusSelectcloseShotStoneDlg(this, 1, v2);
}


void SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UnityEngine_GameObject_o *bgRoot; // x21
  int32_t fsm; // w20
  int32_t fsm_high; // w24
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  v2 = this;
  if ( (byte_4C3F4A0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_3320/*"CHANGE_BANNER"*/);
    byte_4C3F4A0 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_24;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_24;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_24;
  bgRoot = this->fields.bgRoot;
  fsm = (int32_t)this->fields.fsm;
  fsm_high = HIDWORD(this->fields.fsm);
  v9 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_27;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, currentBannerComp, 0)
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
      SummonControl__SetMiniBannerArrowAndColliderEnable(v2, 1, v11);
    }
    v2->fields.isDragging = 0;
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.currentBannerComp, (int32_t)v9, v4, v5);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)bgRoot;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.currentGachaInfo, (int32_t)bgRoot, v12, v13);
    v2->fields.currentIdx = fsm;
    v2->fields.currentMoveIdx = fsm_high;
    SummonControl__setSliderIcon(v2, fsm, v14);
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
          UICenterOnChild__CenterOn_49148688(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0);
          this = (SummonControl_o *)v2->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
            SummonControl__UpdateSummonInfoControlLayout(v2, v16);
            SummonControl__showHelpImg(v2, v17);
            this = (SummonControl_o *)v2->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3320/*"CHANGE_BANNER"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C372B4(this);
  }
}


void SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct VaildGachaInfo_o *v6; // x20
  float m_Width; // w23
  float m_Height; // w24
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_4C3F4A1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    this = (SummonControl_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F4A1 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_17;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_17;
  v6 = *(struct VaildGachaInfo_o **)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v9 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_13;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, currentSummonMBannerComponent, 0)
    || v6 != v2->fields.currentGachaInfo
    || LODWORD(m_Width) != v2->fields.currentIdx
    || LODWORD(m_Height) != v2->fields.currentMoveIdx )
  {
LABEL_13:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v9;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.currentSummonMBannerComponent, (int32_t)v9, v4, v5);
    v2->fields.currentGachaInfo = v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.currentGachaInfo, (int32_t)v6, v11, v12);
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
          UICenterOnChild__CenterOn_49148688(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C372B4(this);
  }
}


void SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4C3F4FD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C3F4FD = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
}


void SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v8; // x0
  struct VaildGachaInfo_o *v9; // x8
  System_String_o *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  Il2CppObject *v13; // x20
  _BOOL8 v14; // x0
  Il2CppObject *current; // x21
  void *monitor; // x8
  __int64 v17; // x9
  _BOOL8 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _QWORD *v27; // x8
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3F500 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C37058(&Method_SummonControl_OnClickHelp__);
    sub_1C37058(&StringLiteral_15957/*"[]"*/);
    byte_4C3F500 = 1;
  }
  v3 = Method_SummonControl_OnClickHelp__;
  memset(&v29, 0, sizeof(v29));
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  v8 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v8, 0);
  if ( !v5 )
    goto LABEL_37;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)EventTutorialEntity,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v9 = this->fields.currentGachaInfo;
  if ( !v9 )
    goto LABEL_37;
  v10 = System_Int32__ToString((int)v9 + 16, 0);
  v11 = (System_Collections_Generic_IEnumerable_T__o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v10, 0);
  System_Collections_Generic_List_object___AddRange(
    v5,
    v11,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v13 = 0;
  v29 = v28;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v14 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C372B4(v14);
    if ( !LODWORD(v29.fields._current[3].klass) )
    {
      monitor = v29.fields._current[2].monitor;
      if ( !monitor )
        sub_1C372B4(v14);
      v17 = *((_QWORD *)monitor + 3);
      if ( !v17 )
        goto LABEL_21;
      if ( !(_DWORD)v17 )
        sub_1C372BC(v14);
      v18 = System_String__op_Equality(*((System_String_o **)monitor + 4), (System_String_o *)StringLiteral_15957/*"[]"*/, 0);
      if ( v18 )
      {
LABEL_21:
        if ( !v13 )
          v13 = current;
      }
      else
      {
        if ( !v12 )
          sub_1C372B4(v18);
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1C372B4(v18);
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            current,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)current;
          sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)current, v19, v20);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  if ( !v12 )
    goto LABEL_37;
  if ( v13 && !v12->fields._size )
  {
    EventTutorialEntity = (System_Collections_Generic_List_EventTutorialEntity__o *)v12->fields._items;
    v27 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v12->fields._version;
    if ( EventTutorialEntity )
    {
      if ( EventTutorialEntity->fields._size )
      {
        v12->fields._size = 1;
        EventTutorialEntity->fields._syncRoot = v13;
        sub_1C36FFC((CGThumbnailListItem_o *)&EventTutorialEntity->fields._syncRoot, (int32_t)v13, v25, v26);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v13,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      goto LABEL_31;
    }
LABEL_37:
    sub_1C372B4(EventTutorialEntity);
  }
LABEL_31:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v12,
    0,
    0);
}


void SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4C3F501 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_GachaHistoryRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SummonControl_OnClickHisotry__);
    sub_1C37058(&Method_SummonControl__OnClickHisotry_b__300_0__);
    byte_4C3F501 = 1;
  }
  v3 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickHisotry__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_SummonControl__OnClickHisotry_b__300_0__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1C372B4(Request_object);
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
  if ( (byte_4C3F4A5 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_OnClickMiniBanner__);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_12785/*"SetBannerCenter"*/);
    byte_4C3F4A5 = 1;
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
        UnityEngine_MonoBehaviour__CancelInvoke_71251632(
          (UnityEngine_MonoBehaviour_o *)v6,
          (System_String_o *)StringLiteral_12785/*"SetBannerCenter"*/,
          0);
        if ( isPlaySe )
        {
          v8 = Method_SummonControl_OnClickMiniBanner__;
          if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickMiniBanner__);
          v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
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
                    UICenterOnChild__CenterOn_49148688(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
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
                          UICenterOnChild__CenterOn_49148688(
                            summonMBannerCenterChild,
                            (UnityEngine_Transform_o *)this,
                            1,
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
    sub_1C372B4(this);
  if ( currentGachaInfo->fields.isDispSummonListDialog )
    SummonControl__OnClickSummonListBtn(v6, *(const MethodInfo **)&moveIdx);
}


void SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PossessionInfoDialog_o *possessionInfoDialog; // x0
  const MethodInfo *v6; // x2
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  const MethodInfo *v8; // x1

  if ( (byte_4C3F502 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_OnClickPossessionInfo__);
    byte_4C3F502 = 1;
  }
  v3 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickPossessionInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo
    || (possessionInfoDialog = this->fields.possessionInfoDialog) == 0
    || (PossessionInfoDialog__Init(possessionInfoDialog, currentGachaInfo->fields.id, v6),
        (possessionInfoDialog = this->fields.possessionInfoDialog) == 0) )
  {
    sub_1C372B4(possessionInfoDialog);
  }
  PossessionInfoDialog__Open(possessionInfoDialog, v8);
}


void SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C3F4C1 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4C1 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, v5),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(confirmDlgInfo);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
  SummonControl__OpenFragmentsExchangeDialog(this, v7);
}


void SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3F4C2 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_OnClickStoneFragmentsInfo__);
    byte_4C3F4C2 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3F4FF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SummonControl_reDispSummonBannerList__);
    byte_4C3F4FF = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0);
  if ( !summonInfoCtr )
    sub_1C372B4(v5);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v4, 0);
}


void SummonControl__OnClickSummonListBtn(SummonControl_o *this, const MethodInfo *method)
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
  __int64 v12; // x21
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t current; // w1
  int32x2_t **v17; // x20
  System_Collections_Generic_List_object__o *v18; // x22
  System_Predicate_object__o *v19; // x23
  __int64 v20; // x0
  _BOOL8 v21; // x0
  GachaMaster_o *gachaMst; // x0
  __int64 v23; // x21
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32x2_t *v27; // x8
  signed __int32 v28; // w9
  System_Collections_Generic_List_object__o *v29; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  SummonControl_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_object__o *v36; // x20
  System_Comparison_T__o *v37; // x21
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v39; // x9
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_object__o *v42; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3F503 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_GachaEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GachaEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C37058(&System_Func_GachaEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor___78073080);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_1C37058(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C37058(&Method_SummonControl_OnClickSummonListBtn__);
    sub_1C37058(&Method_SummonControl_SlotCompare__);
    sub_1C37058(&Method_SummonControl__OnClickSummonListBtn_b__302_0__);
    sub_1C37058(&Method_SummonControl___c__DisplayClass302_0__OnClickSummonListBtn_b__1__);
    sub_1C37058(&SummonControl___c__DisplayClass302_0_TypeInfo);
    sub_1C37058(&VaildGachaInfo_TypeInfo);
    byte_4C3F503 = 1;
  }
  v3 = Method_SummonControl_OnClickSummonListBtn__;
  memset(&v41, 0, sizeof(v41));
  if ( (*((_BYTE *)Method_SummonControl_OnClickSummonListBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SummonControl_OnClickSummonListBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  vaildGachaList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.vaildGachaList;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v6,
    vaildGachaList,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor___78073080);
  v42 = v6;
  useGachaData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.useGachaData;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GachaEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v8, (Il2CppObject *)this, Method_SummonControl__OnClickSummonListBtn_b__302_0__, 0);
  v9 = System_Linq_Enumerable__Where_object_(
         useGachaData,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v10 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v9,
                                              (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_GachaEntity___);
  IsNullOrEmpty = (SummonListDialog_o *)BasicHelper__IsNullOrEmpty(v10, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !v10 )
      goto LABEL_33;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_object__o *)v10,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v41 = v40;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v41,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__) )
    {
      v12 = sub_1C372A4(SummonControl___c__DisplayClass302_0_TypeInfo);
      SummonControl___c__DisplayClass302_0___ctor((SummonControl___c__DisplayClass302_0_o *)v12, 0);
      if ( !v12 )
        sub_1C372B4(v13);
      current = (int32_t)v41.fields._current;
      *(_QWORD *)(v12 + 16) = v41.fields._current;
      v17 = (int32x2_t **)(v12 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 16), current, v14, v15);
      v18 = v42;
      v19 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_VaildGachaInfo__TypeInfo);
      System_Predicate_object____ctor(
        v19,
        (Il2CppObject *)v12,
        Method_SummonControl___c__DisplayClass302_0__OnClickSummonListBtn_b__1__,
        0);
      if ( !v18 )
        sub_1C372B4(v20);
      v21 = System_Collections_Generic_List_object___Exists(
              v18,
              (System_Predicate_T__o *)v19,
              (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
      if ( !v21 )
      {
        if ( !*v17 )
          sub_1C372B4(v21);
        gachaMst = this->fields.gachaMst;
        if ( !gachaMst )
          sub_1C372B4(0);
        if ( GachaMaster__GetGroupRemainingDrawNum(gachaMst, (*v17)[18].n64_i32[0], 0) )
        {
          v23 = sub_1C372A4(VaildGachaInfo_TypeInfo);
          VaildGachaInfo___ctor((VaildGachaInfo_o *)v23, 0);
          v27 = *v17;
          if ( !*v17 )
            sub_1C372B4(v24);
          if ( !v23 )
            sub_1C372B4(v24);
          *(_DWORD *)(v23 + 16) = v27[2].n64_u32[0];
          *(_DWORD *)(v23 + 48) = v27[5].n64_u32[1];
          *(int32x2_t *)(v23 + 36) = vrev64_s32(v27[4]);
          v28 = v27[18].n64_i32[1];
          *(_DWORD *)(v23 + 104) = v28;
          *(_BYTE *)(v23 + 108) = v28 > 0;
          *(_DWORD *)(v23 + 112) = v27[11].n64_u32[1];
          *(_DWORD *)(v23 + 144) = v27[19].n64_u32[1];
          v29 = v42;
          if ( !v42 )
            sub_1C372B4(0);
          items = v42->fields._items;
          v31 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v42->fields._version;
          if ( !items )
            sub_1C372B4(v29);
          size = v29->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)v23,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v29->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), v23, v25, v26);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v41,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    SummonControl__ExtractVaildGachaInfoOnPriority(v34, (System_Collections_Generic_List_VaildGachaInfo__o **)&v42, v35);
    v36 = v42;
    v37 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_VaildGachaInfo__TypeInfo);
    System_Comparison_object____ctor(v37, (Il2CppObject *)this, Method_SummonControl_SlotCompare__, 0);
    if ( !v36 )
LABEL_33:
      sub_1C372B4(IsNullOrEmpty);
    System_Collections_Generic_List_object___Sort_58346216(
      v36,
      v37,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_33;
  v39 = this->fields.vaildGachaList;
  if ( !v39 )
    goto LABEL_33;
  IsNullOrEmpty = this->fields.summonListDialog;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  SummonListDialog__Init(
    IsNullOrEmpty,
    this->fields.currentMoveIdx,
    currentGachaInfo->fields.summonListGroupId,
    v39->fields._size,
    (System_Collections_Generic_List_VaildGachaInfo__o *)v42,
    0);
  IsNullOrEmpty = this->fields.summonListDialog;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  SummonListDialog__Open(IsNullOrEmpty, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F4C8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F4C8 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0, 0);
}


void SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4C3F49F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12785/*"SetBannerCenter"*/);
    byte_4C3F49F = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71251632(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12785/*"SetBannerCenter"*/,
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
    sub_1C372B4(summonInfoCtr);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0);
  this->fields.isDragging = 1;
}


void SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4C3F4FE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__OnEndSummonEffect_b__297_0__);
    byte_4C3F4FE = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__297_0__, 0);
  if ( !v6 )
    sub_1C372B4(v9);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v6; // w22
  Il2CppObject *Instance; // x21
  const MethodInfo *v8; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  System_Action_int__o *v10; // x24

  if ( (byte_4C3F4C3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl_RequestStoneFragmentsShop__);
    byte_4C3F4C3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v6 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v8),
        v10 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo),
        System_Action_int____ctor(v10, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0),
        !Instance) )
  {
LABEL_11:
    sub_1C372B4(Master_object);
  }
  if ( v6 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v10, 0);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v10, 0);
}


void SummonControl__OpenStoneFragmentExchangeResultDialog(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  Il2CppObject *Entity; // x22
  const MethodInfo *v9; // x1
  ShopEntity_o *v10; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v12; // x1
  ShopEntity_o *v13; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v15; // x1
  ShopEntity_o *v16; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *Instance; // x23
  System_Action_bool__o *v19; // x24

  if ( (byte_4C3F4C7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl_OnCloseResultDialog__);
    byte_4C3F4C7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v6);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v10 = SummonControl__get_StoneFragmentsShopEntity(this, v9);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v10,
                                               buyCount,
                                               0);
  v13 = SummonControl__get_StoneFragmentsShopEntity(this, v12);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v13,
                                           (ItemEntity_o *)Entity,
                                           buyCount,
                                           0);
  v16 = SummonControl__get_StoneFragmentsShopEntity(this, v15);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v16,
                                          (ItemEntity_o *)Entity,
                                          0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v19, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0);
  if ( !Instance )
LABEL_9:
    sub_1C372B4(StoneFragmentsShopEntity);
  CommonUI__OpenItemExchangeResultDialog(
    (CommonUI_o *)Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v19,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__RequestStoneFragmentsShop(SummonControl_o *this, int32_t buyCount, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v7; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0

  if ( (byte_4C3F4C4 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SummonControl_EndRequestStoneFragmentsShop__);
    byte_4C3F4C4 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v7);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1C372B4(StoneFragmentsShopEntity);
    PurchaseRequest__beginRequest(
      (PurchaseRequest_o *)Request_object,
      StoneFragmentsShopEntity->fields.id,
      this->fields.stoneExchangeCount,
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
  Il2CppObject *Component_object; // x19

  if ( (byte_4C3F496 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F496 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v4, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v6, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_28;
    UITweener__ResetToBeginning((UITweener_o *)v5, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C372B4(leftArrowSprite);
  }
}


void SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4C3F4DC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    sub_1C37058(&StringLiteral_11083/*"REQUEST_NG_RESULT"*/);
    byte_4C3F4DC = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  if ( this->fields.isResult )
    v4 = (System_String_o **)&StringLiteral_11083/*"REQUEST_NG_RESULT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11082/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, *v4, 0);
}


void SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  Il2CppObject *Component_object; // x20
  float v5; // s8
  UICenterOnChild_o *centerChild; // x20
  Il2CppObject *v7; // x20
  const MethodInfo *v8; // x1
  float v9; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4C3F4A2 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F4A2 = 1;
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v5 = *(float *)&Component_object[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v5 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0)) )
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
        UICenterOnChild__CenterOn_49148688(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0);
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
    v7 = UnityEngine_Component__GetComponent_object_(
           bannerLoopCtr,
           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_35;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_35;
      v9 = *(float *)&v7[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v9 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0)) )
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
              UICenterOnChild__CenterOn_49148688(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0);
              return;
            }
          }
        }
LABEL_35:
        sub_1C372B4(bannerLoopCtr);
      }
    }
    else
    {
      v11 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, v8);
      UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v11, 0);
    }
  }
}


void SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  char *bgRoot; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  char *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  __int64 v28; // x8
  unsigned __int64 v29; // x23
  bool v30; // w21
  System_String_o *v31; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3F4DF & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_17794/*"center_glow"*/);
    sub_1C37058(&StringLiteral_23123/*"ring_gard1_3"*/);
    sub_1C37058(&StringLiteral_23124/*"ring_gard2_1"*/);
    sub_1C37058(&StringLiteral_23125/*"ring_gard2_2"*/);
    sub_1C37058(&StringLiteral_23122/*"ring_gard1_2"*/);
    sub_1C37058(&StringLiteral_23126/*"ring_gard2_3"*/);
    sub_1C37058(&StringLiteral_23121/*"ring_gard1_1"*/);
    byte_4C3F4DF = 1;
  }
  bgRoot = (char *)sub_1C37100(string___TypeInfo, 7);
  if ( !bgRoot )
LABEL_19:
    sub_1C372B4(bgRoot);
  v8 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v9 = StringLiteral_23121/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_23121/*"ring_gard1_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(bgRoot + 32), v9, v6, v7);
  if ( *((_DWORD *)v8 + 6) <= 1u )
    goto LABEL_20;
  v12 = StringLiteral_23122/*"ring_gard1_2"*/;
  *((_QWORD *)v8 + 5) = StringLiteral_23122/*"ring_gard1_2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 40), v12, v10, v11);
  if ( *((_DWORD *)v8 + 6) <= 2u )
    goto LABEL_20;
  v15 = StringLiteral_23123/*"ring_gard1_3"*/;
  *((_QWORD *)v8 + 6) = StringLiteral_23123/*"ring_gard1_3"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 48), v15, v13, v14);
  if ( *((_DWORD *)v8 + 6) <= 3u )
    goto LABEL_20;
  v18 = StringLiteral_23124/*"ring_gard2_1"*/;
  *((_QWORD *)v8 + 7) = StringLiteral_23124/*"ring_gard2_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 56), v18, v16, v17);
  if ( *((_DWORD *)v8 + 6) <= 4u
    || (v21 = StringLiteral_23125/*"ring_gard2_2"*/,
        *((_QWORD *)v8 + 8) = StringLiteral_23125/*"ring_gard2_2"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 64), v21, v19, v20),
        *((_DWORD *)v8 + 6) <= 5u)
    || (v24 = StringLiteral_23126/*"ring_gard2_3"*/,
        *((_QWORD *)v8 + 9) = StringLiteral_23126/*"ring_gard2_3"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 72), v24, v22, v23),
        *((_DWORD *)v8 + 6) <= 6u) )
  {
LABEL_20:
    sub_1C372BC(bgRoot);
  }
  v27 = StringLiteral_17794/*"center_glow"*/;
  *((_QWORD *)v8 + 10) = StringLiteral_17794/*"center_glow"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 80), v27, v25, v26);
  v28 = *((_QWORD *)v8 + 3);
  if ( (int)v28 >= 1 )
  {
    v29 = 0;
    v30 = isDisp;
    while ( v29 < (unsigned int)v28 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v31 = *(System_String_o **)&v8[8 * v29 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v31, 1, 0);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, v30, 0);
      LODWORD(v28) = *((_DWORD *)v8 + 6);
      if ( (__int64)++v29 >= (int)v28 )
        return;
    }
    goto LABEL_20;
  }
}


void SummonControl__SetDispBtn(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (v5 = isDisp,
        SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, isDisp, 0),
        (summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo) == 0) )
  {
    sub_1C372B4(summonInfoCtr);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, v5, 0);
  MainMenuBar__SetMenuBtnColliderEnable(v5, 0, 0);
  SummonControl__setDispSummonInfo(this, v5, v6);
  MainMenuBar__setMenuActive(v5, 0, 0);
}


void SummonControl__SetGachaTime(SummonControl_o *this, int32_t num, int32_t type, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8
  int v5; // w9

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    sub_1C372B4(this);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_C478A0[type - 1];
  gachaParamData->fields.gachaResourceNum = v5 * num;
}


void SummonControl__SetMiniBannerArrowAndColliderEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *summonMBannerLeftArrowBtn; // x21
  UnityEngine_Behaviour_o *summonMBannerInfoList; // x0
  UnityEngine_Object_o *summonMBannerRightArrowBtn; // x21
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3F48D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F48D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  summonMBannerLeftArrowBtn = (UnityEngine_Object_o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonMBannerLeftArrowBtn, 0, 0) )
  {
    summonMBannerInfoList = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !summonMBannerInfoList )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerInfoList, isEnable, 0);
  }
  summonMBannerRightArrowBtn = (UnityEngine_Object_o *)this->fields.summonMBannerRightArrowBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C372B4(summonMBannerInfoList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)summonMBannerInfoList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_1C372B4(v9);
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)current, isEnable, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__Dispose__);
}


void SummonControl__SetupFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
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

  if ( (byte_4C3F4C0 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&MasterMissionComponent_TypeInfo);
    sub_1C37058(&StringLiteral_17482/*"btn_event_3"*/);
    byte_4C3F4C0 = 1;
  }
  v12 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17482/*"btn_event_3"*/, 0);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0);
  v7 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v7 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  v13 = v7;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, this->fields.haveStone + v7 >= this->fields.needStone, 0);
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
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v13, 0);
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
          v11 = 0;
          goto LABEL_27;
        }
      }
    }
LABEL_28:
    sub_1C372B4(fragmentsExchangeButton);
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  v12 = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12, 0);
  if ( !fragmentsCount )
    goto LABEL_28;
  UILabel__set_text(fragmentsCount, (System_String_o *)fragmentsExchangeButton, 0);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)this->fields.fragmentsLimit;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  fragmentsExchangeButton = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fragmentsExchangeButton, 0);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  v11 = 1;
LABEL_27:
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, v11, 0);
}


void SummonControl__ShowConfirmDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v5; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x21

  if ( (byte_4C3F4CD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BonusSelectSummonAssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__ShowConfirmDialog_b__230_0__);
    byte_4C3F4CD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v7 = (BonusSelectSummonAssetManager_o *)sub_1C372A4(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v7, 0);
        this->fields.bonusSelectAssetManager = v7;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v7, v8, v9);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__ShowConfirmDialog_b__230_0__, 0);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v10, 0);
        return;
      }
    }
LABEL_15:
    sub_1C372B4(Master_object);
  }
  SummonControl__ShowConfirmDialogProcess(this, 1, v5);
}


void SummonControl__ShowConfirmDialogProcess(SummonControl_o *this, bool beforeDetailFlag, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w20
  struct GachaRqParamData_o *v7; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x21
  SummonControl_o *v9; // x23
  const MethodInfo *v10; // x1
  int v11; // w8
  VaildGachaInfo_o *v12; // x20
  int32_t needStone; // w23
  int haveFreeStone; // w25
  int32_t haveChargeStone; // w29
  int v16; // w8
  struct SummonInfoControl_o *v17; // x8
  const MethodInfo *v18; // x1
  struct SummonInfoControl_o *v19; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v21; // x9
  struct GachaRqParamData_o *v22; // x8
  GachaDetailEntity_o *v23; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v26; // x0
  const MethodInfo *v27; // x3
  System_Int32_array *v28; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v29; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  struct GachaRqParamData_o *v33; // x8
  int32_t v34; // w22
  struct GachaRqParamData_o *v35; // x8
  const MethodInfo *v36; // x6
  SummonControl_o *v37; // x23
  int32_t v38; // w21
  int32_t v39; // w27
  int32_t v40; // w28
  struct GachaRqParamData_o *v41; // x8
  GachaDetailEntity_o *v42; // x25
  struct GachaRqParamData_o *v43; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x23
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  System_Int32_array *v47; // x26
  int32_t ScriptInt; // w0
  const MethodInfo *v49; // x3
  SummonControl_o *v50; // x0
  const MethodInfo *v51; // x2
  int32_t v52; // w22
  int32_t afterChargeStoneNum; // w21
  SummonConfirmDlgComponent_o *v54; // x25
  struct SummonInfoControl_o *v55; // x9
  struct GachaRqParamData_o *v56; // x8
  struct SummonInfoControl_o *v57; // x9
  struct GachaRqParamData_o *v58; // x8
  int32_t v59; // w28
  System_String_o *v60; // x24
  int32_t v61; // w26
  _BOOL4 v62; // w29
  _BOOL4 v63; // w27
  struct GachaRqParamData_o *v64; // x8
  int32_t gachaId; // w28
  int32_t haveStone; // w24
  struct GachaRqParamData_o *v67; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v69; // x23
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  System_Int32_array *ScriptIntArray; // x25
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x2
  struct GachaRqParamData_o *v76; // x8
  int32_t gachaTime; // w22
  struct GachaRqParamData_o *v78; // x8
  SummonControl_o *v79; // x22
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t payGachaPrice; // w26
  GachaExtraGiftEntity_array *v82; // x25
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x24
  int32_t v84; // w27
  int32_t v85; // w28
  _BOOL4 isPickup; // w21
  struct GachaRqParamData_o *v87; // x8
  int32_t privilegeGachaTextId; // w9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x24
  struct GachaRqParamData_o *v90; // x8
  int32_t isPrivilege; // w9
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v93; // [xsp+68h] [xbp-A8h]
  SummonControl_o *summonCloseAt; // [xsp+78h] [xbp-98h]
  int32_t v95; // [xsp+84h] [xbp-8Ch]
  int32_t v96; // [xsp+88h] [xbp-88h]
  int32_t v97; // [xsp+8Ch] [xbp-84h]
  int32_t v98; // [xsp+8Ch] [xbp-84h]
  int32_t v99; // [xsp+90h] [xbp-80h]
  System_String_o *name; // [xsp+90h] [xbp-80h]
  System_String_o *title; // [xsp+98h] [xbp-78h]
  int32_t titlea; // [xsp+98h] [xbp-78h]
  bool HasFlag; // [xsp+A4h] [xbp-6Ch]
  int32_t v104; // [xsp+A4h] [xbp-6Ch]
  GachaExtraGiftEntity_array *v105; // [xsp+A8h] [xbp-68h]
  int32_t v106; // [xsp+A8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C3F4CE & 1) == 0 )
  {
    sub_1C37058(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_ConfirmMessageOpen__);
    sub_1C37058(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C37058(&Method_SummonControl_confirmResult__);
    sub_1C37058(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F4CE = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_111;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_111;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v7 = v4->fields.gachaParamData;
  if ( !v7 )
    goto LABEL_111;
  if ( !this )
    goto LABEL_111;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v7->fields.gachaId,
                         0);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this )
    goto LABEL_111;
  v9 = this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_111;
  SummonResultComponent__setBeforeQpMana(
    (SummonResultComponent_o *)this,
    *(_QWORD *)&v9->fields.TUTORIAL_FORMATION_ARROW_POS,
    (int32_t)v9->fields.noneGachaInfo,
    0);
  this = (SummonControl_o *)v4->fields.vaildGachaList;
  if ( !this )
    goto LABEL_111;
  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v4->fields.currentIdx,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v11 = gachaType - 1;
  v12 = (VaildGachaInfo_o *)this;
  switch ( v11 )
  {
    case 0:
      needStone = v4->fields.needStone;
      haveFreeStone = v4->fields.haveFreeStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v4->fields._IsOneTimeFreeSummonDialog_k__BackingField = 0;
      v16 = haveFreeStone - needStone;
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
        haveChargeStone += v16;
      }
      haveStone = v4->fields.haveStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v67 = v4->fields.gachaParamData;
      if ( !v67 )
        goto LABEL_111;
      v104 = haveStone;
      v106 = needStone;
      if ( !this )
        goto LABEL_111;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v67->fields.gachaId, 0);
      v69 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v69,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v70);
      titlea = haveFreeStone;
      if ( GachaDetailEntity )
      {
        this = (SummonControl_o *)GachaDetailEntity__HasText(GachaDetailEntity, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v69 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
          SummonConfirmDlgComponent_CallbackFunc___ctor(
            v69,
            (Il2CppObject *)v4,
            (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
            v72);
          ScriptIntArray = GachaDetailEntity__GetScriptIntArray(GachaDetailEntity, v4->fields.DETAIL_SCRIPT_IDS, 0, 0);
          this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(
                                      GachaDetailEntity,
                                      v4->fields.DETAIL_SCRIPT_TYPE,
                                      0,
                                      0);
          if ( ScriptIntArray )
          {
            if ( (_DWORD)this == 1 )
            {
              v69 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
              SummonConfirmDlgComponent_CallbackFunc___ctor(
                v69,
                (Il2CppObject *)v4,
                (intptr_t)Method_SummonControl_confirmResult__,
                v74);
              if ( beforeDetailFlag )
              {
                this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v75);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_110;
              }
            }
          }
        }
      }
      v76 = v4->fields.gachaParamData;
      if ( !v76 )
        goto LABEL_111;
      gachaTime = v76->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_92;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaMaster___);
      v78 = v4->fields.gachaParamData;
      if ( !v78 || !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v78->fields.gachaId,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( this && (v79 = this, LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    LODWORD(v79->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                    0);
        if ( (_DWORD)this == 9 )
          gachaTime = 2;
        else
          gachaTime = 1;
      }
      else
      {
        gachaTime = 1;
      }
LABEL_92:
      summonInfoCtr = v4->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_111;
      if ( gachaTime <= 2 && summonInfoCtr->fields._IsOneTimeFreeActive_k__BackingField )
      {
        this = (SummonControl_o *)v4->fields.confirmDlgInfo;
        v4->fields._IsOneTimeFreeSummonDialog_k__BackingField = 1;
        if ( this )
        {
          SummonConfirmDlgComponent__OpenConfirmOnePayFree(
            (SummonConfirmDlgComponent_o *)this,
            (System_String_o *)StringLiteral_1/*""*/,
            v69,
            v71);
          return;
        }
        goto LABEL_111;
      }
      if ( !v12 )
        goto LABEL_111;
      payGachaPrice = summonInfoCtr->fields.payGachaPrice;
      v82 = ListGachaExtraGift;
      confirmDlgInfo = v4->fields.confirmDlgInfo;
      v84 = v4->fields.haveStone;
      v85 = v4->fields.haveFreeStone;
      isPickup = v12->fields.isPickup;
      name = v12->fields.name;
      v98 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)VaildGachaInfo__CloseAt(v12, 0);
      v87 = v4->fields.gachaParamData;
      if ( !v87 )
        goto LABEL_111;
      privilegeGachaTextId = v12->fields.isPrivilege;
      if ( v12->fields.isPrivilege )
        privilegeGachaTextId = v87->fields.gachaId;
      if ( !confirmDlgInfo )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmStone(
        confirmDlgInfo,
        name,
        1,
        payGachaPrice,
        gachaTime,
        v84,
        v85,
        v98,
        v104 - v106,
        titlea,
        haveChargeStone,
        v69,
        0,
        isPickup,
        (int64_t)this,
        0,
        0,
        0,
        v82,
        v87->fields.shopIdIdx,
        privilegeGachaTextId,
        v93);
      break;
    case 2:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, v10);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v17 = v4->fields.summonInfoCtr;
      if ( !v17 )
        goto LABEL_111;
      v4->fields.isDailyGacha = v17->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag((int32_t)v9->fields.summonInstance, 0)
        || !SummonControl__CheckQpManaOverCheck(v4, v18) )
      {
        SummonControl__friendPointSummonConfirm(v4, v18);
      }
      return;
    case 4:
      v19 = v4->fields.summonInfoCtr;
      if ( !v19 )
        goto LABEL_111;
      ticketNum = v19->fields.ticketNum;
      v21 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v21 )
        goto LABEL_111;
      v4->fields.afterTicketNum = ticketNum - v21->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v22 = v4->fields.gachaParamData;
      if ( !v22 || !this )
        goto LABEL_111;
      v23 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v22->fields.gachaId, 0);
      v24 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v25);
      if ( v23 )
      {
        v26 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v27);
        v28 = GachaDetailEntity__GetScriptIntArray(v23, v4->fields.DETAIL_SCRIPT_IDS, 0, 0);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v23, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0);
        if ( v28 )
        {
          if ( (_DWORD)this == 1 )
          {
            v29 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v29,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v30);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v28, v31);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_110;
            }
          }
        }
      }
      v33 = v4->fields.gachaParamData;
      if ( !v33 )
        goto LABEL_111;
      v34 = v33->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaMaster___);
      v35 = v4->fields.gachaParamData;
      if ( !v35 || !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v35->fields.gachaId,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_39;
      v37 = this;
      if ( !LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x) )
        goto LABEL_39;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  LODWORD(v37->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                  0);
      if ( (_DWORD)this == 9 )
        ++v34;
LABEL_39:
      if ( !v12 )
        goto LABEL_111;
      this = (SummonControl_o *)v4->fields.confirmDlgInfo;
      if ( !this )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        (SummonConfirmDlgComponent_o *)this,
        v12->fields.name,
        v34,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v24,
        v36);
      return;
    case 6:
      v105 = ListGachaExtraGift;
      v38 = v4->fields.haveStone;
      v39 = v4->fields.needStone;
      v40 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v41 = v4->fields.gachaParamData;
      if ( !v41 || !this )
        goto LABEL_111;
      v42 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v41->fields.gachaId, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
      v43 = v4->fields.gachaParamData;
      if ( !v43 )
        goto LABEL_111;
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v43->fields.gachaId,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_111;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v45);
      if ( v42
        && GachaDetailEntity__HasText(v42, 0)
        && (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
              v46),
            v47 = GachaDetailEntity__GetScriptIntArray(v42, v4->fields.DETAIL_SCRIPT_IDS, 0, 0),
            ScriptInt = GachaDetailEntity__GetScriptInt(v42, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0),
            v47)
        && ScriptInt == 1
        && (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v49),
            beforeDetailFlag)
        && !SummonControl__CheckGachaNum(v50, v47, v51) )
      {
LABEL_110:
        SummonControl__BeforeConfirmMessageOpen(v4, v32);
      }
      else
      {
        this = (SummonControl_o *)v4->fields.summonInfoCtr;
        if ( !this )
          goto LABEL_111;
        v52 = v38 - v39;
        afterChargeStoneNum = (v40 - v39) & ~((v40 - v39) >> 31);
        this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0);
        v54 = v4->fields.confirmDlgInfo;
        if ( (int)this >= 1 )
        {
          v55 = v4->fields.summonInfoCtr;
          if ( v55 )
          {
            v56 = v4->fields.gachaParamData;
            if ( v56 )
            {
              if ( v54 )
              {
                SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                  v54,
                  (int32_t)this,
                  v55->fields.payGachaPrice,
                  v4->fields.haveStone,
                  v4->fields.haveFreeStone,
                  v4->fields.haveChargeStone,
                  v52,
                  v4->fields.haveFreeStone,
                  afterChargeStoneNum,
                  callback,
                  v105,
                  v56->fields.shopIdIdx,
                  isAppendSummon);
                return;
              }
            }
          }
          goto LABEL_111;
        }
        if ( !v12 )
          goto LABEL_111;
        v57 = v4->fields.summonInfoCtr;
        if ( !v57 )
          goto LABEL_111;
        v58 = v4->fields.gachaParamData;
        if ( !v58 )
          goto LABEL_111;
        v59 = v57->fields.payGachaPrice;
        v60 = v12->fields.name;
        v61 = v4->fields.haveFreeStone;
        v62 = v58->fields.isAppendSummon;
        v96 = v4->fields.haveStone;
        v97 = v58->fields.gachaTime;
        v63 = v12->fields.isPickup;
        v95 = v4->fields.haveChargeStone;
        this = (SummonControl_o *)VaildGachaInfo__CloseAt(v12, 0);
        title = v60;
        v99 = v59;
        summonCloseAt = this;
        if ( HasFlag )
        {
          v64 = v4->fields.gachaParamData;
          if ( !v64 )
            goto LABEL_111;
          gachaId = v64->fields.gachaId;
        }
        else
        {
          gachaId = 0;
        }
        tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
        BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
          tryGetBonusSelectData,
          (Il2CppObject *)v4,
          Method_SummonControl_TryGetSelectBonusDataInfo__,
          0);
        v90 = v4->fields.gachaParamData;
        if ( !v90 )
          goto LABEL_111;
        isPrivilege = v12->fields.isPrivilege;
        if ( v12->fields.isPrivilege )
          isPrivilege = v90->fields.gachaId;
        if ( !v54 )
LABEL_111:
          sub_1C372B4(this);
        SummonConfirmDlgComponent__OpenConfirmStone(
          v54,
          title,
          7,
          v99,
          v97,
          v96,
          v61,
          v95,
          v52,
          v61,
          afterChargeStoneNum,
          callback,
          v62,
          v63,
          (int64_t)summonCloseAt,
          gachaId,
          tryGetBonusSelectData,
          v4->fields.bonusSelectAssetManager,
          v105,
          v90->fields.shopIdIdx,
          isPrivilege,
          v93);
      }
      break;
    default:
      return;
  }
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
    sub_1C372B4(this);
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


void SummonControl__SummonSceneRefresh(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3F4D3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__SummonSceneRefresh_b__241_0__);
    byte_4C3F4D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__241_0__, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, v4, 0);
}


bool SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  SummonControl_c *v8; // x0
  System_String_o *String_71225564; // x21
  System_Object_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int max_length; // w8
  __int64 v14; // x9
  SelectBonusData_o *v15; // x1

  if ( (byte_4C3F4C9 & 1) == 0 )
  {
    sub_1C37058(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C37058(&JsonManager_TypeInfo);
    this = (SummonControl_o *)sub_1C37058(&SummonControl_TypeInfo);
    byte_4C3F4C9 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)selectBonusData, 0, v6, v7);
  v8 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v8 = SummonControl_TypeInfo;
  }
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564(v8->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0);
  if ( System_String__IsNullOrEmpty(String_71225564, 0) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_71225564,
          (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v10 )
  {
    max_length = v10->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v10) = 0;
      return (char)v10;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        sub_1C372BC(v10);
      v15 = (SelectBonusData_o *)v10->m_Items[v14];
      if ( !v15 )
        sub_1C372B4(v10);
      if ( v15->fields.gachaId == gachaId )
        break;
      if ( (int)++v14 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)selectBonusData, (int32_t)v15, v11, v12);
    LOBYTE(v10) = 1;
  }
  return (char)v10;
}


void SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  void *vaildGachaList; // x0
  GachaAppendMaster_o *v4; // x20
  GachaAppendEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3F4A3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_4C3F4A3 = 1;
  }
  entity = 0;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_20;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList )
    goto LABEL_20;
  if ( VaildGachaInfo__HasFlag((VaildGachaInfo_o *)vaildGachaList, 2, 0) )
  {
    vaildGachaList = this->fields.summonInfoCtr;
    if ( !vaildGachaList )
      goto LABEL_20;
    vaildGachaList = SummonInfoControl__get_SummonInfoLayout((SummonInfoControl_o *)vaildGachaList, 0);
    if ( !vaildGachaList )
      goto LABEL_20;
    goto LABEL_17;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  vaildGachaList = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !this->fields.vaildGachaList
    || (v4 = (GachaAppendMaster_o *)vaildGachaList,
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0)
    || !v4
    || (vaildGachaList = (void *)GachaAppendMaster__TryGetHundredSummon(v4, &entity, *((_DWORD *)vaildGachaList + 4), 0),
        !this->fields.summonInfoCtr) )
  {
LABEL_20:
    sub_1C372B4(vaildGachaList);
  }
  if ( ((unsigned __int8)vaildGachaList & 1) != 0 )
  {
    vaildGachaList = SummonInfoControl__get_MultiExSummonInfoLayout(this->fields.summonInfoCtr, 0);
    if ( !vaildGachaList )
      goto LABEL_20;
LABEL_17:
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)vaildGachaList, 0);
    return;
  }
  vaildGachaList = SummonInfoControl__get_SummonInfoLayout(this->fields.summonInfoCtr, 0);
  if ( !vaildGachaList )
    goto LABEL_20;
  SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)vaildGachaList, 0);
}


System_Collections_IEnumerator_o *SummonControl__WaitBattleChrLoad(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F4E5 & 1) == 0 )
  {
    sub_1C37058(&SummonControl__WaitBattleChrLoad_d__263_TypeInfo);
    byte_4C3F4E5 = 1;
  }
  v3 = sub_1C372A4(SummonControl__WaitBattleChrLoad_d__263_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__263___ctor((SummonControl__WaitBattleChrLoad_d__263_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void SummonControl___BonusSelectServantSelectDialog_b__315_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v12; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v13; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v14; // x24
  UICenterOnChild_c *klass; // x19
  Il2CppObject *v16; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v2 = this;
  if ( (byte_4C3F522 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__);
    sub_1C37058(&Method_SummonControl_SetDispBtn__);
    sub_1C37058(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C37058(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__315_1__);
    this = (SummonControl_o *)sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F522 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__51855596(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.bonusSelectSummonConfirmDialog, (int32_t)Component_object, v7, v8);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init((BonusSelectSummonConfirmDialog_o *)this, v2->fields.bonusSelectAssetManager, 0);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v12 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0);
  v13 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0);
  v14 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  klass = this->fields.centerChild[1].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.summonListDialog) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    v16 = (Il2CppObject *)this->fields.centerChild->klass;
    klass = (UICenterOnChild_c *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)klass,
      v16,
      Method_SummonControl___c__BonusSelectServantSelectDialog_b__315_1__,
      0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__315_1 = (struct System_Action_o *)klass;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__315_1, (int32_t)klass, v18, v19);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1C372B4(this);
  BonusSelectSummonConfirmDialog__Open(
    bonusSelectSummonConfirmDialog,
    gachaId,
    v12,
    v13,
    v14,
    (System_Action_o *)klass,
    0);
}


bool SummonControl___CheckFriendPointSummonUpdate_b__233_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0 )
    sub_1C372B4(this);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void SummonControl___DialogCallBack_b__267_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  CommonUI_o *v6; // x19

  if ( (byte_4C3F51D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl_EndCloseDialogCallBack__);
    byte_4C3F51D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1C372B4(v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonControl___OnClickHisotry_b__300_0(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1C372B4(0);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0);
}


bool SummonControl___OnClickSummonListBtn_b__302_0(SummonControl_o *this, GachaEntity_o *x, const MethodInfo *method)
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
    sub_1C372B4(this);
  }
  return 0;
}


void SummonControl___OnEndSummonEffect_b__297_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3F521 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5442/*"END_FADE"*/);
    byte_4C3F521 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5442/*"END_FADE"*/, 0);
}


void SummonControl___ShowConfirmDialog_b__230_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  Il2CppObject *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v12; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v13; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v14; // x24
  System_Action_o *v15; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v2 = this;
  if ( (byte_4C3F518 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C37058(&Method_SummonControl_SetDispBtn__);
    sub_1C37058(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C37058(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__ShowConfirmDialog_b__230_1__);
    this = (SummonControl_o *)sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F518 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__51855596(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.bonusSelectSummonConfirmDialog, (int32_t)Component_object, v7, v8);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init((BonusSelectSummonConfirmDialog_o *)this, v2->fields.bonusSelectAssetManager, 0);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v12 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0);
  v13 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0);
  v14 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  v15 = *(System_Action_o **)&this->fields.centerChild->fields.springStrength;
  if ( !v15 )
  {
    if ( !LODWORD(this->fields.summonListDialog) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.centerChild->klass;
    v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v15, klass, Method_SummonControl___c__ShowConfirmDialog_b__230_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__230_1 = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__230_1, (int32_t)v15, v18, v19);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1C372B4(this);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v12, v13, v14, v15, 0);
}


void SummonControl___SummonSceneRefresh_b__241_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3F519 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3F519 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        SummonControl__quit(this, v4),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void SummonControl___exeFormation_b__163_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3F514 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__exeFormation_b__163_2__);
    byte_4C3F514 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__163_2__, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v4, 0);
}


void SummonControl___exeFormation_b__163_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C3F515 & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3F515 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


void SummonControl___executeEnhanceTresureDevice_b__284_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Instance; // x0
  CommonUI_o *v5; // x20

  if ( (byte_4C3F520 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_5441/*"END_EFFECT"*/);
    byte_4C3F520 = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5
    || (CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (Instance = this->fields.fsm) == 0) )
  {
    sub_1C372B4(Instance);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5441/*"END_EFFECT"*/, 0);
}


void SummonControl___loadAssetsForSummon_b__247_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3F51A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&StringLiteral_12325/*"START_GACHA"*/);
    byte_4C3F51A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12325/*"START_GACHA"*/, 0),
        (fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_1C372B4(fsm);
  }
  CrashReporter__SetNowState((CrashReporter_o *)fsm, (System_String_o *)StringLiteral_12325/*"START_GACHA"*/, 0);
}


void SummonControl___openAfterSummonInfo_b__162_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3F513 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__openAfterSummonInfo_b__162_2__);
    byte_4C3F513 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__162_2__, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__CloseTutorialNotificationDialogArrow_31233804((CommonUI_o *)Instance, v4, 0);
}


void SummonControl___openAfterSummonInfo_b__162_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void SummonControl___resetResultList_b__279_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4C3F51F & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_5460/*"END_SUMMON"*/);
    sub_1C37058(&StringLiteral_7481/*"IN_SummonScene"*/);
    byte_4C3F51F = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5460/*"END_SUMMON"*/, 0);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4
    || (CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C372B4(summonResultInfo);
  }
  CrashReporter__SetNowState((CrashReporter_o *)summonResultInfo, (System_String_o *)StringLiteral_7481/*"IN_SummonScene"*/, 0);
}


void SummonControl___setChangeSummonInfo_b__193_0(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4C3F517 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12785/*"SetBannerCenter"*/);
    byte_4C3F517 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12785/*"SetBannerCenter"*/, 0.1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0);
}


void SummonControl___setUserResourceDisp_b__170_0(SummonControl_o *this, int32_t stoneCount, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3F516 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_25092/*"{0:N0}"*/);
    byte_4C3F516 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v13 = stoneCount;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, method, v3, v4, v5, v6, v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v11, 0);
  if ( !currentStoneNumLb )
    sub_1C372B4(v12);
  UILabel__set_text(currentStoneNumLb, v12, 0);
}


void SummonControl___showSummonEffect_b__254_0(SummonControl_o *this, const MethodInfo *method)
{
  void *maskObject; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v12; // x9
  char v13; // w10
  Il2CppObject *v14; // x23
  System_String_o *Value; // x0
  System_String_array *v16; // x0
  SummonControl___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x24
  System_Func_object__int__o *_9__254_1; // x25
  Il2CppObject *v20; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_int__o *v25; // x24
  float v26; // s0
  struct GachaInfos_array *v27; // x8
  int max_length; // w21
  float v29; // s8
  unsigned int v30; // w22
  GachaInfos_o *v31; // x20
  int32_t objectId; // w1
  int32_t v33; // w26
  char v34; // w25
  int32_t Data; // w28
  int32_t v36; // w29
  bool isNew; // w27
  int v38; // w28
  _DWORD *v39; // x25
  bool IsServant; // w27
  const MethodInfo *v41; // x2
  int v42; // w8
  bool v43; // w28
  int32_t v44; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  _BOOL4 v48; // w27
  WeightRate_int__o *v49; // x28
  int32_t v50; // w0
  int32_t v51; // w0
  ServantLimitMaster_o *v52; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_4C3F51B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__showSummonEffect_b__254_1__);
    sub_1C37058(&SummonControl___c_TypeInfo);
    sub_1C37058(&Method_WeightRate_int___ctor__);
    sub_1C37058(&Method_WeightRate_int__getData__);
    sub_1C37058(&Method_WeightRate_int__getTotalWeight__);
    sub_1C37058(&Method_WeightRate_int__setWeight__);
    sub_1C37058(&WeightRate_int__TypeInfo);
    sub_1C37058(&StringLiteral_5455/*"END_PREPARATION"*/);
    sub_1C37058(&StringLiteral_12473/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/);
    sub_1C37058(&StringLiteral_2921/*"BGM_SUMMON_1"*/);
    byte_4C3F51B = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0);
  SummonControl__SetDispBgParts(this, 0, v4);
  SummonControl__setDispSummonInfo(this, 0, v5);
  maskObject = this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_84;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0);
  SummonControl__clearResultList(this, v6);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_2921/*"BGM_SUMMON_1"*/, 0);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.summonComp, (int32_t)Component_object, v8, v9);
  maskObject = this->fields.summonComp;
  if ( !maskObject )
    goto LABEL_84;
  SummonEffectComponent__Initialize((SummonEffectComponent_o *)maskObject, 0);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_84;
  if ( gachaParamData->fields.gachaTime != 1 )
    goto LABEL_15;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_84;
  if ( LODWORD(gachaResInfoList->max_length) == 2 )
  {
    v12 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v13 = 1;
  }
  else
  {
LABEL_15:
    v12 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v13 = 0;
  }
  v12->fields.isNoSkip = v13;
  v12->fields.gachaId = gachaParamData->fields.gachaId;
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v52 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12473/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0);
  if ( Value )
  {
    v16 = System_String__Split(Value, 0x2Cu, 0, 0);
    v17 = SummonControl___c_TypeInfo;
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
    if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v17 = SummonControl___c_TypeInfo;
    }
    _9__254_1 = (System_Func_object__int__o *)v17->static_fields->__9__254_1;
    if ( !_9__254_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = SummonControl___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__254_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__254_1, v20, Method_SummonControl___c__showSummonEffect_b__254_1__, 0);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__254_1 = (struct System_Func_string__int__o *)_9__254_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__254_1, (int32_t)_9__254_1, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v18,
                                                                 (System_Func_TSource__TResult__o *)_9__254_1,
                                                                 (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
    v25 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v24,
                                                      (const MethodInfo_312BD24 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v25 = 0;
  }
  v26 = UnityEngine_Random__get_value(0);
  v27 = this->fields.gachaResInfoList;
  if ( v27 )
  {
    max_length = v27->max_length;
    if ( max_length >= 1 )
    {
      v29 = v26;
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= LODWORD(v27->max_length) )
          sub_1C372BC(maskObject);
        v31 = v27->m_Items[v30];
        if ( !v31 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v31->fields.type, 0);
        objectId = v31->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v14 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                       objectId,
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v33 = *((_DWORD *)maskObject + 16);
        v34 = 0;
LABEL_40:
        Data = 0;
        v36 = 3;
        isNew = v31->fields.isNew;
        if ( v25 )
          goto LABEL_76;
LABEL_80:
        maskObject = 0;
LABEL_81:
        if ( !*p_summonComp )
          goto LABEL_84;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v31->fields.objectId,
          v31->fields.limitCount,
          v34,
          isNew,
          Data,
          v33,
          v36,
          (unsigned __int8)maskObject & 1,
          v31->fields.userSvtId,
          0);
        if ( max_length == ++v30 )
          goto LABEL_85;
        v27 = this->fields.gachaResInfoList;
        if ( !v27 )
          goto LABEL_84;
      }
      maskObject = MasterData_object;
      if ( !MasterData_object )
        goto LABEL_84;
      maskObject = DataMasterBase_object__object__int___GetEntity(
                     MasterData_object,
                     objectId,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v38 = *((_DWORD *)maskObject + 21);
      v39 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0);
      maskObject = v52;
      if ( !v52 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v52, v31->fields.objectId, v31->fields.limitCount, 0);
      if ( !maskObject )
        goto LABEL_84;
      v33 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v39[20], v41) )
        goto LABEL_51;
      if ( v33 == 5 )
      {
        if ( v29 >= 0.2 )
        {
LABEL_51:
          v34 = 0;
          goto LABEL_52;
        }
      }
      else if ( v33 != 4 || v29 >= 0.4 )
      {
        goto LABEL_51;
      }
      v34 = 1;
LABEL_52:
      v42 = v38 - 3;
      v36 = 0;
      Data = 0;
      isNew = 0;
      switch ( v42 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v43 = v31->fields.isNew;
          isNew = v43;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v31->fields.objectId,
                         0);
          if ( maskObject != 0 && v43 )
          {
            if ( !v25 )
            {
              v25 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v25,
                (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v25 )
                goto LABEL_84;
            }
            v44 = v31->fields.objectId;
            items = v25->fields._items;
            v46 = Method_System_Collections_Generic_List_int__Add__;
            ++v25->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v25->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v25,
                v44,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v25->fields._size = size + 1;
              items->m_Items[size] = v44;
            }
            v36 = 1;
          }
          else
          {
            Data = 0;
            v36 = 1;
LABEL_75:
            if ( !v25 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v36 = 1;
          if ( !v25 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v48 = v31->fields.isNew;
          v49 = (WeightRate_int__o *)sub_1C372A4(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v49, (const MethodInfo_3B94A3C *)Method_WeightRate_int___ctor__);
          if ( v33 == 4 )
          {
            if ( !v49 )
              goto LABEL_84;
            WeightRate_int___setWeight(v49, 60, 0, (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v49, 40, 1, (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
            v50 = UnityEngine_Random__Range_71226972(0, v49->fields.totalweight, 0);
            Data = WeightRate_int___getData(v49, v50, (const MethodInfo_3B943CC *)Method_WeightRate_int__getData__);
            v36 = 2;
            isNew = v48;
            v34 &= Data == 0;
            v33 = 4;
            if ( v25 )
              break;
          }
          else
          {
            isNew = v48;
            if ( v33 == 5 )
            {
              if ( !v49 )
                goto LABEL_84;
              WeightRate_int___setWeight(v49, 60, 0, (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v49, 20, 1, (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
              v36 = 2;
              WeightRate_int___setWeight(v49, 20, 2, (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
              v51 = UnityEngine_Random__Range_71226972(0, v49->fields.totalweight, 0);
              Data = WeightRate_int___getData(v49, v51, (const MethodInfo_3B943CC *)Method_WeightRate_int__getData__);
              v34 &= Data == 0;
              v33 = 5;
              if ( v25 )
                break;
            }
            else
            {
              Data = 0;
              v36 = 2;
              if ( v25 )
                break;
            }
          }
          goto LABEL_80;
      }
LABEL_76:
      maskObject = (void *)System_Collections_Generic_List_int___Contains(
                             v25,
                             v31->fields.objectId,
                             (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1C372B4(maskObject);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5455/*"END_PREPARATION"*/, 0);
}


void SummonControl___showSummonResultInfo_b__270_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl___c_c *v3; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__270_1; // x21
  Il2CppObject *v7; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3F51E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__showSummonResultInfo_b__270_1__);
    sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F51E = 1;
  }
  v3 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v3 = SummonControl___c_TypeInfo;
  }
  _9__270_1 = v3->static_fields->__9__270_1;
  if ( !_9__270_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SummonControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__270_1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__270_1, v7, Method_SummonControl___c__showSummonResultInfo_b__270_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__270_1 = _9__270_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__270_1, (int32_t)_9__270_1, v9, v10);
  }
  if ( !overflowSvtCoinInfo )
    sub_1C372B4(v3);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__270_1, 0);
}


void SummonControl___showSvtTalk_b__261_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3F51C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3471/*"CLICK_OK"*/);
    byte_4C3F51C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3471/*"CLICK_OK"*/, 0);
}


void SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C372B4(0);
  if ( UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0) )
    SummonControl__friendPointQpManaCheck(this, v4);
  else
    SummonControl__ShowConfirmDialog(this, v4);
}


void SummonControl__autoSellSettingChange2(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C372B4(0);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0)
    || !SummonControl__CheckQpManaOverCheck(this, v4) )
  {
    SummonControl__ShowConfirmDialog(this, v4);
  }
}


void SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3F4D8 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_4C3F4D8 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1C372B4(0);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0, 0);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  SummonControl__ShowConfirmDialogProcess(this, 0, v6);
}


void SummonControl__callbackGachaDraw(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SummonControl_o *v9; // x20
  __int64 v10; // x8
  struct GachaInfos_array *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  struct System_Int32_array *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  struct GetSvtCoin_array *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  struct System_Int32_array *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  struct GachaExtraGifts_array *v27; // x1

  v4 = this;
  if ( (byte_4C3F4DB & 1) == 0 )
  {
    sub_1C37058(&Method_JsonManager_DeserializeArray_SummonControl_resData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C3F4DB = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_63596960(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0)
    || System_String__Equals_63596960(result, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
  {
    SummonControl__SendEventRequestNg(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_63599904(
                         (System_String_o *)StringLiteral_15804/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16058/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v6,
                              (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_22;
  v9 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v10 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v10 )
    goto LABEL_22;
  v11 = *(struct GachaInfos_array **)(v10 + 16);
  v4->fields.gachaResInfoList = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.gachaResInfoList, (int32_t)v11, v7, v8);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v14 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v14 )
    goto LABEL_22;
  v15 = *(struct System_Int32_array **)(v14 + 24);
  v4->fields.canRankUpClassIds = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.canRankUpClassIds, (int32_t)v15, v12, v13);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v18 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v18 )
    goto LABEL_22;
  v19 = *(struct GetSvtCoin_array **)(v18 + 32);
  v4->fields.overflowSvtCoinInfos = v19;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)v19, v16, v17);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v22 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v22 )
    goto LABEL_22;
  v23 = *(struct System_Int32_array **)(v22 + 40);
  v4->fields.extraGiftIds = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.extraGiftIds, (int32_t)v23, v20, v21);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1C372BC(this);
  v26 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v26
    || (v27 = *(struct GachaExtraGifts_array **)(v26 + 48),
        v4->fields.GachaExtraGiftList = v27,
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.GachaExtraGiftList, (int32_t)v27, v24, v25),
        (this = (SummonControl_o *)v4->fields.fsm) == 0) )
  {
LABEL_22:
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
}


void SummonControl__callbackTutorialSet(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3F4DE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C3F4DE = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
}


void SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  PlayMakerFSM_o *fsm; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21

  if ( (byte_4C3F4F5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl___c__DisplayClass283_0__checkEnhanceTresureDevice_b__0__);
    sub_1C37058(&SummonControl___c__DisplayClass283_0_TypeInfo);
    sub_1C37058(&StringLiteral_9327/*"NO_EXIST"*/);
    byte_4C3F4F5 = 1;
  }
  v3 = sub_1C372A4(SummonControl___c__DisplayClass283_0_TypeInfo);
  SummonControl___c__DisplayClass283_0___ctor((SummonControl___c__DisplayClass283_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v3 + 24), v7) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v9 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass283_0__checkEnhanceTresureDevice_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v11, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(fsm);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
}


void SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3F4F3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9327/*"NO_EXIST"*/);
    byte_4C3F4F3 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C372B4(0);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v9; // x8
  int32_t objectId; // w21
  Il2CppObject *v11; // x19
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4C3F4F4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SummonControl___c__DisplayClass282_0__checkEnhanceTresureDeviceSingle_b__0__);
    sub_1C37058(&SummonControl___c__DisplayClass282_0_TypeInfo);
    sub_1C37058(&StringLiteral_9327/*"NO_EXIST"*/);
    byte_4C3F4F4 = 1;
  }
  v3 = sub_1C372A4(SummonControl___c__DisplayClass282_0_TypeInfo);
  SummonControl___c__DisplayClass282_0___ctor((SummonControl___c__DisplayClass282_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  *(_DWORD *)(v3 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_1C372BC(Instance);
  v9 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v9 )
    goto LABEL_16;
  objectId = v9->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0) )
  {
    *(_DWORD *)(v3 + 24) = objectId;
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass282_0__checkEnhanceTresureDeviceSingle_b__0__,
      0);
    if ( v11 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v11, 1, DEFAULT_FADE_TIME, v14, 0);
      return;
    }
LABEL_16:
    sub_1C372B4(Instance);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
}


void SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v5; // x8
  struct GachaRqParamData_o *v6; // x8
  System_String_o **v7; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_4C3F4B9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&StringLiteral_3353/*"CHECK_STONE"*/);
    sub_1C37058(&StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/);
    sub_1C37058(&StringLiteral_3350/*"CHECK_POINT"*/);
    sub_1C37058(&StringLiteral_2948/*"BONUS_SELECT_CHECK_STONE"*/);
    byte_4C3F4B9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v5 = this->fields.gachaParamData;
    if ( !v5 )
      goto LABEL_25;
    if ( v5->fields.gachaType == 7 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_2948/*"BONUS_SELECT_CHECK_STONE"*/, 0);
    }
  }
  v6 = this->fields.gachaParamData;
  if ( !v6 )
LABEL_25:
    sub_1C372B4(Master_object);
  switch ( v6->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v7 = (System_String_o **)&StringLiteral_3353/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v7 = (System_String_o **)&StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/;
      else
        v7 = (System_String_o **)&StringLiteral_3350/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v7 = (System_String_o **)&StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, *v7, 0);
}


void SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4C3F4E2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6961/*"GET_MULTI"*/);
    byte_4C3F4E2 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(maskBgObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6961/*"GET_MULTI"*/, 0);
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
    sub_1C372B4(0);
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
  if ( (byte_4C3F4E3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9263/*"NEW_SVT"*/);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_6975/*"GO_BACK"*/);
    byte_4C3F4E3 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_1C372BC(this);
  v6 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v6 )
    goto LABEL_14;
  if ( v6->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v6->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9263/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C372B4(this);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v7 = &StringLiteral_6975/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0);
}


void SummonControl__checkIsNewSvtMulti(SummonControl_o *this, const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w9
  unsigned int v4; // w10
  GachaInfos_o *v5; // x11

  gachaResInfoList = this->fields.gachaResInfoList;
  this->fields.resType = 1;
  if ( !gachaResInfoList )
LABEL_13:
    sub_1C372B4(this);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C372BC(this);
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


void SummonControl__checkIsNewSvtNum(SummonControl_o *this, const MethodInfo *method)
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
  intptr_t m_CachedPtr; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v3 = this;
  if ( (byte_4C3F4EC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&StringLiteral_9624/*"OLD_SVT"*/);
    sub_1C37058(&StringLiteral_6418/*"FINAL_SVT"*/);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_9263/*"NEW_SVT"*/);
    byte_4C3F4EC = 1;
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
      v7 = &StringLiteral_6418/*"FINAL_SVT"*/;
LABEL_15:
      v10 = (System_String_o *)*v7;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1C372BC(this);
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_22;
  if ( !v8->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9624/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1C372B4(this);
  }
  objectId = v8->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v10 = (System_String_o *)StringLiteral_9624/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v10, 0);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9263/*"NEW_SVT"*/, 0);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_22;
  m_CachedPtr = this->fields.m_CachedPtr;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_22;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      objectId,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C372B4(0);
  maxDrawNum = CurrentGachaData->fields.maxDrawNum;
  if ( maxDrawNum < 1 || UserGachaData->fields.num < maxDrawNum )
    return 0;
  result = 1;
  this->fields.lastMaxDrawGachaId = gachaId;
  return result;
}


bool SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4C3F4ED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C3F4ED = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C372B4(befSvtList);
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
               (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v7 == v8 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v8;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v5; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  int32_t v8; // w8
  CommonUI_o *v9; // x19

  if ( (byte_4C3F48B & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_3435/*"CLEAR_TUTORIAL"*/);
    sub_1C37058(&StringLiteral_11151/*"RETURN_TUTORIAL"*/);
    byte_4C3F48B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0) )
    goto LABEL_52;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40427704(101, 0) )
  {
    this->fields.isDoneTutorial = 0;
    v8 = 1;
  }
  else
  {
LABEL_52:
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_40427704(101, 0) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_49;
        v5 = &StringLiteral_11151/*"RETURN_TUTORIAL"*/;
LABEL_41:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0);
        goto LABEL_45;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40427704(101, 0) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40427704(107, 0) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v6);
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
      SummonControl__showHelpImg(this, v7);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_49;
      v5 = &StringLiteral_3435/*"CLEAR_TUTORIAL"*/;
      goto LABEL_41;
    }
    v8 = 4;
  }
  this->fields.tutorialKind = v8;
  SummonControl__progTutorial(this, v3);
LABEL_45:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v9 )
LABEL_49:
    sub_1C372B4(fsm);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
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
  if ( (byte_4C3F4B1 & 1) == 0 )
  {
    sub_1C37058(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_1C37058(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_1C37058(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_1C37058(&StringLiteral_6531/*"FRIEND_GACHA_ADD_LIMIT"*/);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_3351/*"CHECK_RESOURCE"*/);
    byte_4C3F4B1 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
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
  if ( !byte_4C3D2E4 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C3D2E4 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v7->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6531/*"FRIEND_GACHA_ADD_LIMIT"*/, 0);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_40;
  v10 = Value & ~(Value >> 31);
  v11 = v10 + CommandCodeFrameMax;
  v12 = v10 + svtEquipKeep;
  v13 = v10 + svtKeep;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0);
  v15 = Count;
  if ( Count < v11 && servantEquipSum[1] < v13 && servantEquipSum[0] < v12 )
  {
LABEL_19:
    this = (SummonControl_o *)v2->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3351/*"CHECK_RESOURCE"*/, 0);
      return;
    }
LABEL_40:
    sub_1C372B4(this);
  }
  if ( servantEquipSum[1] >= v13 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = v2->fields.userGameEntity;
    if ( !v23 )
      goto LABEL_40;
    v24 = v23->fields.svtKeep;
    v25 = servantEquipSum[1];
    v26 = this;
    v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C372A4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_closeShotSvtFrameDlg__,
      0);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = v2->fields.userGameEntity;
      if ( !v28 )
        goto LABEL_40;
      v18 = v28->fields.svtEquipKeep;
      v29 = servantEquipSum[0];
      v30 = this;
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C372A4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotSvtEqFrameDlg__,
        0);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v16 = this;
      if ( !byte_4C3D2E4 )
      {
        sub_1C37058(&BalanceConfig_TypeInfo);
        byte_4C3D2E4 = 1;
      }
      v17 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      v18 = v17->static_fields->CommandCodeFrameMax;
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C372A4(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0);
      if ( !v16 )
        goto LABEL_40;
      v20 = 2;
      v21 = (CommonUI_o *)v16;
      v22 = v15;
    }
    v27 = v18;
  }
  CommonUI__OpenSvtFrameShortDlg(v21, v22, v27, v20, 0, v19, 0, 0);
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

  if ( (byte_4C3F4BA & 1) == 0 )
  {
    sub_1C37058(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SummonControl_closeShotPointDlg__);
    sub_1C37058(&StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/);
    byte_4C3F4BA = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8776C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_1C372B4(MasterData_object);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/, 0);
}


void SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
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
  const MethodInfo *v15; // x1
  struct GachaRqParamData_o *v16; // x8
  int v17; // w8
  SummonConfirmDlgComponent_o *v18; // x20
  int32_t v19; // w21
  int32_t v20; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v21; // x23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x4

  v2 = this;
  if ( (byte_4C3F4BC & 1) == 0 )
  {
    sub_1C37058(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&Method_SummonControl_closeShotStoneDlg__);
    this = (SummonControl_o *)sub_1C37058(&StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/);
    byte_4C3F4BC = 1;
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
      v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
      sub_1C372B4(this);
    }
  }
  else
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = (SummonControl_o *)System_Math__Max_65085088(haveStoneNum, HaveChargeStoneNum_k__BackingField, 0);
    v16 = v2->fields.gachaParamData;
    if ( !v16 )
      goto LABEL_17;
    v17 = v16->fields.gachaResourceNum;
    v2->fields.needStone = v17;
    if ( (int)this < v17 )
    {
      SummonControl__SetupFragmentsExchangeButton(v2, v15);
      v18 = v2->fields.confirmDlgInfo;
      v19 = v2->fields.haveFreeStone;
      v20 = v2->fields.haveChargeStone;
      v21 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v22);
      if ( !v18 )
        goto LABEL_17;
      SummonConfirmDlgComponent__OpenShortStone(v18, v19, v20, v21, v23);
      return;
    }
  }
  this = (SummonControl_o *)v2->fields.fsm;
  if ( !this )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12214/*"SHOW_CONFIRM_DLG"*/, 0);
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
  UnityEngine_Object_o *gameObject; // x24
  int v11; // w24
  UnityEngine_Object_o *v12; // x23
  int v13; // w22
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w20
  UnityEngine_Object_o *v16; // x21

  if ( (byte_4C3F4AF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F4AF = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)bannerLoopCtr,
                                               0);
  if ( !this->fields.sliderGrid )
    goto LABEL_39;
  v4 = (int)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid,
                                               0);
  if ( !this->fields.sliderGrid2 )
    goto LABEL_39;
  v5 = (UnityEngine_Transform_o *)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid2,
                                               0);
  if ( !v5 )
    goto LABEL_39;
  v6 = (UnityEngine_Transform_o *)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(v5, 0);
  if ( !v6 )
    goto LABEL_39;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
      if ( --v9 <= 1 )
        goto LABEL_17;
    }
LABEL_39:
    sub_1C372B4(bannerLoopCtr);
  }
LABEL_17:
  if ( v7 >= 1 )
  {
    v11 = v7 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v5, v11 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_39;
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v12, 0);
    }
    while ( --v11 > 1 );
  }
  if ( childCount >= 1 )
  {
    v13 = childCount + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v6, v13 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_39;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v14, 0);
    }
    while ( --v13 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_39;
  v15 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0) - 1;
  if ( v15 >= 0 )
  {
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
                                                   v15,
                                                   0);
      if ( !bannerLoopCtr )
        break;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v16, 0);
      if ( --v15 < 0 )
        return;
    }
    goto LABEL_39;
  }
}


void SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F4F0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3F4F0 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0),
        (summonResultInfo = this->fields.summonResultInfo) == 0) )
  {
    sub_1C372B4(summonResultInfo);
  }
  SummonResultComponent__SetActive(summonResultInfo, 0, 0);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v4, v5, v6);
}


void SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SummonControl__closeShotCommandCodeFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *v8; // x19
  SceneJumpInfo_o *v9; // x20

  if ( (byte_4C3F4B4 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_1C37058(&StringLiteral_12687/*"SellServant"*/);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4B4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  v6 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
      v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479120(v9, (System_String_o *)StringLiteral_12687/*"SellServant"*/, 2, 0);
      if ( v8 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v8, 22, 1, (Il2CppObject *)v9, 0);
        return;
      }
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4C3F4BB & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_closeShotPointDlg__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4BB = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method);
  v5 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotPointDlg__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1C372B4(confirmDlgInfo);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4C3F4BD & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_closeShotStoneDlg__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    sub_1C37058(&StringLiteral_6977/*"GO_BUY_STONE"*/);
    byte_4C3F4BD = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  v6 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v8 = &StringLiteral_3442/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C372B4(confirmDlgInfo);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v8 = &StringLiteral_6977/*"GO_BUY_STONE"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v8, 0);
}


void SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *v8; // x19
  SceneJumpInfo_o *v9; // x20
  int32_t v10; // w1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_4C3F4B3 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_1C37058(&StringLiteral_12727/*"ServantEquipList"*/);
    sub_1C37058(&StringLiteral_12687/*"SellServant"*/);
    sub_1C37058(&StringLiteral_12726/*"ServantEQCombine"*/);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4B3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  switch ( res )
  {
    case 2:
      v11 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v9 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41479120(v9, (System_String_o *)StringLiteral_12687/*"SellServant"*/, 1, 0);
        if ( v8 )
        {
          v10 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1C372B4(Instance);
    case 1:
      v13 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C3703C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v9 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41479032(v9, (System_String_o *)StringLiteral_12727/*"ServantEquipList"*/, 0);
        if ( v8 )
        {
          v10 = 71;
          goto LABEL_22;
        }
      }
      goto LABEL_27;
    case 0:
      v6 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v9 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41479032(v9, (System_String_o *)StringLiteral_12726/*"ServantEQCombine"*/, 0);
        if ( v8 )
        {
          v10 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v8, v10, 1, (Il2CppObject *)v9, 0);
          return;
        }
      }
      goto LABEL_27;
  }
  v15 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C3703C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *v8; // x19
  SceneJumpInfo_o *v9; // x20
  int32_t v10; // w1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_4C3F4B2 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_1C37058(&StringLiteral_12687/*"SellServant"*/);
    sub_1C37058(&StringLiteral_12723/*"ServantCombine"*/);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4B2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  switch ( res )
  {
    case 2:
      v11 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtFrameDlg__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v9 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41479120(v9, (System_String_o *)StringLiteral_12687/*"SellServant"*/, 0, 0);
        if ( v8 )
        {
          v10 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1C372B4(Instance);
    case 1:
      v14 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C3703C(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v10 = 71;
          v13 = 0;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    case 0:
      v6 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtFrameDlg__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v9 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41479032(v9, (System_String_o *)StringLiteral_12723/*"ServantCombine"*/, 0);
        if ( v8 )
        {
          v10 = 32;
LABEL_17:
          Instance = (CommonUI_o *)v8;
          v13 = (Il2CppObject *)v9;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v10, 1, v13, 0);
          return;
        }
      }
      goto LABEL_28;
  }
  v16 = Method_SummonControl_closeShotSvtFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C37070(Method_SummonControl_closeShotSvtFrameDlg__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
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

  if ( (byte_4C3F4D6 & 1) == 0 )
  {
    sub_1C37058(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C37058(&Method_SummonControl_SetDispBtn__);
    sub_1C37058(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C37058(&Method_SummonControl_confirmCautionResult__);
    sub_1C37058(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4D6 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C37070(Method_SummonControl_confirmCautionResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v12 = this->fields.gachaParamData;
              if ( v12 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v12->fields.gachaId;
                v15 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v15,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0);
                v16 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v16,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0);
                v17 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C372A4(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v17,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v15, v16, v17, 0, 0);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C372B4(cautionDlgInfo);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  v6 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_confirmCautionResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  SummonControl__loadAssetsForSummon(this, v8);
}


void SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4C3F4D5 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_confirmResult__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4D5 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C37070(Method_SummonControl_confirmResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(confirmDlgInfo);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  v6 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_confirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  SummonControl__loadAssetsForSummon(this, v8);
}


void SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  int size; // w27
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  SummonControl___c__DisplayClass179_0_o *v9; // x26
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x29
  UnityEngine_GameObject_o *noneGachaInfo; // x0
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct UICenterOnChild_o *v21; // x21
  void *v22; // x23
  CGThumbnailListItem_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v25; // x22
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Delegate_o *v29; // x8
  SpringPanel_OnFinished_c *v30; // x1
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v33; // x22
  System_Delegate_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UIScrollView_OnDragNotification_c *v37; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  float v40; // s0
  UnityEngine_Component_o *v41; // x20
  float v42; // s2
  float v43; // s8
  float v44; // s0
  int v45; // w8
  SummonControl_o *v46; // x19
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  struct UIWrapContent_o **p_summonMBannerLoopCtr; // x22
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  __int64 *p_summonMBannerCenterChild; // x21
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x21
  System_Delegate_o *v58; // t1
  SpringPanel_OnFinished_o *v59; // x22
  System_Delegate_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  SpringPanel_OnFinished_c *v63; // x1
  __int64 v64; // x21
  System_Delegate_o *v65; // t1
  UIScrollView_OnDragNotification_o *v66; // x22
  System_Delegate_o *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  UIScrollView_OnDragNotification_c *v70; // x1
  int32_t v71; // w26
  UnityEngine_GameObject_o *v72; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v74; // x28
  UnityEngine_Transform_o *v75; // x20
  UnityEngine_Transform_o *v76; // x21
  int v77; // w24
  System_String_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Collections_Generic_List_object__o *v81; // x8
  struct System_Object_array *items; // x9
  _QWORD *v83; // x10
  __int64 v84; // x11
  GachaBannerComponent_o *v85; // x21
  Il2CppClass **v86; // x0
  int v87; // w8
  int v88; // w9
  int32_t v89; // w27
  UnityEngine_Component_o **v90; // x25
  System_String_o *v91; // x0
  System_String_o *v92; // x22
  const MethodInfo *v93; // x2
  System_Collections_Generic_List_object__o *v94; // x8
  UnityEngine_Object_o *v95; // x23
  VaildGachaInfo_o *Item; // x29
  System_String_o *v97; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x21
  UnityEngine_Transform_o *v101; // x20
  UnityEngine_Transform_o *v102; // x22
  System_String_o *name; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  System_Collections_Generic_List_object__o *v106; // x8
  struct System_Object_array *v107; // x9
  _QWORD *v108; // x10
  __int64 v109; // x11
  SummonMiniBannerComponent_o *v110; // x28
  Il2CppClass **v111; // x0
  System_String_o *v112; // x0
  System_String_o *v113; // x22
  const MethodInfo *v114; // x2
  UnityEngine_Object_o *v115; // x21
  const MethodInfo *v116; // x2
  Il2CppObject *Component_object; // x19
  SummonMiniBannerComponent_CallbackFunc_o *v118; // x20
  System_Action_int__bool__o *v119; // x20
  UnityEngine_Transform_o *v120; // x22
  int v121; // w8
  UnityEngine_Transform_o *v122; // x23
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__51641852; // x21
  System_Action_object__o *v124; // x20
  unsigned int v125; // w24
  UnityEngine_Transform_o *v126; // x2
  UnityEngine_Transform_o *v127; // x20
  int v128; // w24
  UnityEngine_Transform_o *v129; // x2
  UnityEngine_Transform_o *v130; // x20
  int v131; // w21
  int32_t childCount; // w0
  float v133; // s0
  int v134; // w20
  int v135; // w8
  float v136; // s8
  struct UIGrid_o *sliderGrid2; // x8
  int v138; // w22
  UnityEngine_Component_o *sliderGrid; // x20
  bool IsUnderVista; // w0
  float v141; // s0
  UnityEngine_Component_o *v142; // x20
  bool v143; // w0
  float v144; // s0
  UnityEngine_Component_o *v145; // x20
  const MethodInfo *v146; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v148; // x21
  SummonInfoControl_ClickDelegate_o *v149; // x22
  const MethodInfo *v150; // x2
  const MethodInfo *v151; // x1
  SummonControl___c__DisplayClass179_0_o *v152; // [xsp+8h] [xbp-A8h]
  int v153; // [xsp+14h] [xbp-9Ch]
  int v154; // [xsp+18h] [xbp-98h]
  unsigned int v155; // [xsp+1Ch] [xbp-94h]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+20h] [xbp-90h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+28h] [xbp-88h]
  UnityEngine_Component_o **v158; // [xsp+30h] [xbp-80h]
  int v160; // [xsp+48h] [xbp-68h]
  int v161; // [xsp+4Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F49D & 1) == 0 )
  {
    sub_1C37058(&System_Action_UISprite__TypeInfo);
    sub_1C37058(&System_Action_int__bool__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C37058(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C37058(&FSUtility_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C37058(&SpringPanel_OnFinished_TypeInfo);
    sub_1C37058(&Method_SummonControl_OnCenterOnChildFinishedMBanner__);
    sub_1C37058(&Method_SummonControl_OnCenterOnChildFinished__);
    sub_1C37058(&Method_SummonControl_OnClickMiniBanner__);
    sub_1C37058(&Method_SummonControl_OnDragStarted__);
    sub_1C37058(&Method_SummonControl_exeSummon__);
    sub_1C37058(&Method_SummonControl___c__DisplayClass179_0__createSummonInfo_b__0__);
    sub_1C37058(&SummonControl___c__DisplayClass179_0_TypeInfo);
    sub_1C37058(&StringLiteral_4955/*"D5"*/);
    sub_1C37058(&StringLiteral_20587/*"img_summon_"*/);
    sub_1C37058(&StringLiteral_20590/*"img_summon_mini_236"*/);
    sub_1C37058(&StringLiteral_20589/*"img_summon_mini_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F49D = 1;
  }
  v161 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v3;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bannerInfoList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v6;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.summonMBannerInfoList, (int32_t)v6, v7, v8);
  if ( !this->fields.vaildGachaList )
  {
    noneGachaInfo = this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_191;
    UnityEngine_GameObject__SetActive(noneGachaInfo, 1, 0);
    return;
  }
  v9 = (SummonControl___c__DisplayClass179_0_o *)sub_1C372A4(SummonControl___c__DisplayClass179_0_TypeInfo);
  SummonControl___c__DisplayClass179_0___ctor(v9, 0);
  bannerLoopCtr = (UnityEngine_Object_o *)this->fields.bannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0, 0) )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.summonBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v13 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v13;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bannerLoopCtr, (int32_t)v13, v14, v15);
  }
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( ((unsigned __int8)noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
    if ( !*p_bannerLoopCtr )
      goto LABEL_191;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v18 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerChild, (int32_t)v18, v19, v20);
  }
  v21 = *p_centerChild;
  if ( !v21 )
    goto LABEL_191;
  v22 = &SpringPanel_OnFinished_TypeInfo;
  onFinished = (System_Delegate_o *)v21->fields.onFinished;
  p_onFinished = (CGThumbnailListItem_o *)&v21->fields.onFinished;
  v25 = (SpringPanel_OnFinished_o *)sub_1C372A4(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v25, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0);
  v26 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v25, 0);
  v29 = v26;
  if ( v26 )
  {
    v30 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v26->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v26;
    if ( (SpringPanel_OnFinished_c *)v26->klass != v30 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_1C36FFC(p_onFinished, (int32_t)v26, v27, v28);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_191;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (CGThumbnailListItem_o *)&summonBannerScrollView->fields.onDragStarted;
  v33 = (UIScrollView_OnDragNotification_o *)sub_1C372A4(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v33, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0);
  v34 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v33, 0);
  v29 = v34;
  if ( v34 )
  {
    v37 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v34->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v34;
    if ( (UIScrollView_OnDragNotification_c *)v34->klass != v37 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_1C36FFC(p_onFinished, (int32_t)v34, v35, v36);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_191;
  size = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0);
  v40 = (float)width / (float)UnityEngine_Screen__get_height(0);
  v41 = *p_bannerLoopCtr;
  v42 = (float)((float)(fminf(v40, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v40 < 1.7778 )
    v43 = 1028.0;
  else
    v43 = v42;
  if ( !byte_4C3C920 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C920 = 1;
  }
  noneGachaInfo = (UnityEngine_GameObject_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v41 )
    goto LABEL_191;
  v44 = floorf(v43);
  if ( v44 == INFINITY )
    v45 = 0x80000000;
  else
    v45 = (int)v44;
  LODWORD(v41[1].monitor) = v45;
  v46 = this;
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonMBannerLoopCtr = &this->fields.summonMBannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0, 0) )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v49 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_summonMBannerLoopCtr = (struct UIWrapContent_o *)v49;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.summonMBannerLoopCtr, (int32_t)v49, v50, v51);
    v46 = this;
  }
  summonMBannerCenterChild = (UnityEngine_Object_o *)v46->fields.summonMBannerCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonMBannerCenterChild = (__int64 *)&v46->fields.summonMBannerCenterChild;
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(summonMBannerCenterChild, 0, 0);
  if ( ((unsigned __int8)noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (UnityEngine_GameObject_o *)*p_summonMBannerLoopCtr;
    if ( !*p_summonMBannerLoopCtr )
      goto LABEL_191;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v54 = UnityEngine_GameObject__AddComponent_object_(
            noneGachaInfo,
            (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (__int64)v54;
    sub_1C36FFC((CGThumbnailListItem_o *)&v46->fields.summonMBannerCenterChild, (int32_t)v54, v55, v56);
  }
  v57 = *p_summonMBannerCenterChild;
  v158 = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
  if ( !v57 )
    goto LABEL_191;
  v58 = *(System_Delegate_o **)(v57 + 40);
  p_onFinished = (CGThumbnailListItem_o *)(v57 + 40);
  v59 = (SpringPanel_OnFinished_o *)sub_1C372A4(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v59, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0);
  v60 = System_Delegate__Combine(v58, (System_Delegate_o *)v59, 0);
  v29 = v60;
  if ( v60 )
  {
    v63 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v60->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v60;
    v22 = this;
    if ( (SpringPanel_OnFinished_c *)v60->klass != v63 )
      goto LABEL_64;
  }
  else
  {
    v22 = this;
    p_onFinished->klass = 0;
  }
  sub_1C36FFC(p_onFinished, (int32_t)v60, v61, v62);
  v64 = *((_QWORD *)v22 + 45);
  if ( !v64 )
    goto LABEL_191;
  v65 = *(System_Delegate_o **)(v64 + 88);
  p_onFinished = (CGThumbnailListItem_o *)(v64 + 88);
  v66 = (UIScrollView_OnDragNotification_o *)sub_1C372A4(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v66, (Il2CppObject *)v22, Method_SummonControl_OnDragStarted__, 0);
  v67 = System_Delegate__Combine(v65, (System_Delegate_o *)v66, 0);
  v29 = v67;
  v152 = v9;
  if ( !v67 )
    goto LABEL_65;
  v70 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v67->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (CGThumbnailListItem_c *)v67;
    if ( (UIScrollView_OnDragNotification_c *)v67->klass == v70 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1C37574(v29);
LABEL_65:
  p_onFinished->klass = (CGThumbnailListItem_c *)v29;
LABEL_66:
  sub_1C36FFC(p_onFinished, (int32_t)v29, v68, v69);
  v160 = 2 * size;
  if ( 2 * size >= 1 )
  {
    v71 = 0;
    v154 = size - 1;
    v155 = size & 0x80000000;
    v153 = size;
    while ( 1 )
    {
      noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        break;
      v72 = (UnityEngine_GameObject_o *)*((_QWORD *)v22 + 40);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
      noneGachaInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v22, v72, transform, 0, 0);
      if ( !noneGachaInfo )
        break;
      v74 = noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0);
      v75 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4C3C926 )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v75 )
        break;
      UnityEngine_Transform__set_localScale(v75, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v74, 0);
      if ( !*p_bannerLoopCtr )
        break;
      v76 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0);
      if ( !noneGachaInfo )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noneGachaInfo, 0);
      if ( !v76 )
        break;
      UnityEngine_Transform__set_localPosition(v76, localPosition, 0);
      v77 = v71 + 1;
      v161 = v71 + 1;
      v78 = System_Int32__ToString_65071764((int32_t)&v161, (System_String_o *)StringLiteral_4955/*"D5"*/, 0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v74, v78, 0);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v74,
                                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v81 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v81->fields._items;
      v83 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v81->fields._version;
      if ( !items )
        break;
      v84 = v81->fields._size;
      v85 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v84 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v81,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = &items->obj.klass + v84;
        v81->fields._size = v84 + 1;
        v86[4] = (Il2CppClass *)v85;
        sub_1C36FFC((CGThumbnailListItem_o *)(v86 + 4), (int32_t)v85, v79, v80);
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)*((_QWORD *)v22 + 77);
      v87 = v71 | v155;
      v88 = (int)(v71 | v155) <= v154 ? 0 : size;
      if ( !noneGachaInfo )
        break;
      v89 = v87 - v88;
      noneGachaInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                                    v87 - v88,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v90 = p_bannerLoopCtr;
      v91 = System_Int32__ToString((int)noneGachaInfo + 40, 0);
      v92 = System_String__Concat_63561656((System_String_o *)StringLiteral_20587/*"img_summon_"*/, v91, 0);
      noneGachaInfo = SummonControl__searchBannerImg((SummonControl_o *)v22, v92, v93);
      v94 = (System_Collections_Generic_List_object__o *)*((_QWORD *)v22 + 77);
      if ( !v94 )
        break;
      v95 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = (VaildGachaInfo_o *)System_Collections_Generic_List_object___get_Item(
                                   v94,
                                   v89,
                                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v95, 0, 0);
      if ( !v85 )
        break;
      v97 = ((unsigned __int8)noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v92;
      GachaBannerComponent__setBannerGachaInfo(v85, Item, v89, v71, (UnityEngine_GameObject_o *)v95, v97, 0);
      if ( !Item )
        break;
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.gachaIdToMiniBannerIndex;
      if ( !noneGachaInfo )
        break;
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              (System_Collections_Generic_Dictionary_int__int__o *)noneGachaInfo,
              Item->fields.id,
              (const MethodInfo_33F1CB8 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.gachaIdToMiniBannerIndex;
        if ( !noneGachaInfo )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)noneGachaInfo,
          Item->fields.id,
          v71,
          (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)*v158;
      if ( !*v158 )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v99 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
      noneGachaInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, summonMBannerPrefab, v99, 0, 0);
      if ( !noneGachaInfo )
        break;
      v100 = noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0);
      v101 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4C3C926 )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v101 )
        break;
      UnityEngine_Transform__set_localScale(v101, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v100, 0);
      if ( !*v158 )
        break;
      v102 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(*v158, 0);
      if ( !noneGachaInfo )
        break;
      v163 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noneGachaInfo, 0);
      if ( !v102 )
        break;
      UnityEngine_Transform__set_localPosition(v102, v163, 0);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v74, 0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v100, name, 0);
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    v100,
                                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v106 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v107 = v106->fields._items;
      v108 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v106->fields._version;
      if ( !v107 )
        break;
      v109 = v106->fields._size;
      v110 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v106,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v111 = &v107->obj.klass + v109;
        v106->fields._size = v109 + 1;
        v111[4] = (Il2CppClass *)v110;
        sub_1C36FFC((CGThumbnailListItem_o *)(v111 + 4), (int32_t)v110, v104, v105);
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                                    v89,
                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v112 = System_Int32__ToString((int)noneGachaInfo + 40, 0);
      v113 = System_String__Concat_63561656((System_String_o *)StringLiteral_20589/*"img_summon_mini_"*/, v112, 0);
      v115 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v113, v114);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v115, 0, 0) )
      {
        v113 = (System_String_o *)StringLiteral_20590/*"img_summon_mini_236"*/;
        v115 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20590/*"img_summon_mini_236"*/,
                                         v116);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v115, 0, 0) )
          v113 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v118 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1C372A4(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v118,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0);
      if ( !v110 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v110,
        Item,
        v89,
        v71,
        (UnityEngine_GameObject_o *)v115,
        v113,
        v118,
        (UIPanel_o *)Component_object,
        0);
      size = v153;
      v22 = this;
      ++v71;
      p_bannerLoopCtr = v90;
      if ( v160 == v77 )
        goto LABEL_123;
    }
LABEL_191:
    sub_1C372B4(noneGachaInfo);
  }
LABEL_123:
  v119 = (System_Action_int__bool__o *)sub_1C372A4(System_Action_int__bool__TypeInfo);
  System_Action_int__bool____ctor(v119, (Il2CppObject *)v22, (intptr_t)Method_SummonControl_OnClickMiniBanner__, 0);
  MainMenuBar__RegisterSummonBalloonClickAction(v119, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)*((_QWORD *)v22 + 21);
  if ( !noneGachaInfo )
    goto LABEL_191;
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)noneGachaInfo,
                                                0);
  if ( !*((_QWORD *)v22 + 22) )
    goto LABEL_191;
  v120 = (UnityEngine_Transform_o *)noneGachaInfo;
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                *((UnityEngine_Component_o **)v22 + 22),
                                                0);
  if ( !v152 )
    goto LABEL_191;
  v121 = size >= 50 ? 14 : 16;
  v152->fields.slSpriteSize = v121;
  v122 = (UnityEngine_Transform_o *)noneGachaInfo;
  noneGachaInfo = this->fields.slideIndexPrefab;
  if ( !noneGachaInfo )
    goto LABEL_191;
  ComponentsInChildren_object__51641852 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                                                                           noneGachaInfo,
                                                                                           (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ComponentsInChildren_object__51641852, 0) )
  {
    v124 = (System_Action_object__o *)sub_1C372A4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      v124,
      (Il2CppObject *)v152,
      Method_SummonControl___c__DisplayClass179_0__createSummonInfo_b__0__,
      0);
    BasicHelper__ForEach_object_(
      ComponentsInChildren_object__51641852,
      (System_Action_T__o *)v124,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_UISprite___);
  }
  if ( size >= 101 )
  {
    if ( size + 1 >= 2 )
    {
      v128 = 0;
      do
      {
        v129 = (((_BYTE)v128 + 1) & 1) != 0 ? v120 : v122;
        noneGachaInfo = BaseMonoBehaviour__createObject(
                          (BaseMonoBehaviour_o *)this,
                          this->fields.slideIndexPrefab,
                          v129,
                          0,
                          0);
        if ( !noneGachaInfo )
          goto LABEL_191;
        noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0);
        v130 = (UnityEngine_Transform_o *)noneGachaInfo;
        if ( !byte_4C3C926 )
        {
          noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        if ( !v130 )
          goto LABEL_191;
        UnityEngine_Transform__set_localScale(v130, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      }
      while ( size != ++v128 );
    }
  }
  else if ( size >= 1 )
  {
    v125 = 0;
    do
    {
      v126 = v125 >= 0x32 ? v122 : v120;
      noneGachaInfo = BaseMonoBehaviour__createObject(
                        (BaseMonoBehaviour_o *)this,
                        this->fields.slideIndexPrefab,
                        v126,
                        0,
                        0);
      if ( !noneGachaInfo )
        goto LABEL_191;
      noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(noneGachaInfo, 0);
      v127 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4C3C926 )
      {
        noneGachaInfo = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v127 )
        goto LABEL_191;
      UnityEngine_Transform__set_localScale(v127, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    while ( size != ++v125 );
  }
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_191;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_191;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_191;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)*v158;
  if ( !*v158 )
    goto LABEL_191;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)*v158;
  if ( !*v158 )
    goto LABEL_191;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)*v158;
  if ( !*v158 )
    goto LABEL_191;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0);
  if ( !v120 )
    goto LABEL_191;
  noneGachaInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(v120, 0);
  if ( !v122 )
    goto LABEL_191;
  v131 = (int)noneGachaInfo;
  childCount = UnityEngine_Transform__get_childCount(v122, 0);
  v133 = 702.0;
  v134 = childCount;
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
  if ( size < 50 )
    v133 = 640.0;
  v135 = v131 <= v134 ? v134 : v131;
  if ( !noneGachaInfo )
    goto LABEL_191;
  v136 = fminf(v133 / (float)v135, 25.0);
  *(float *)&noneGachaInfo[2].klass = v136;
  sliderGrid2 = this->fields.sliderGrid2;
  if ( !sliderGrid2 )
    goto LABEL_191;
  sliderGrid2->fields.cellWidth = v136;
  ComponentHelper__SetLocalPositionX(
    (UnityEngine_Component_o *)noneGachaInfo,
    (float)(*(float *)&noneGachaInfo[2].klass * -0.5) * (float)(v131 - 1),
    0);
  v138 = v134 - 1;
  if ( v134 < 1 )
  {
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.sliderGrid, 0.0, 0);
    noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid2;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    UnityEngine_GameObject__SetActive(noneGachaInfo, 0, 0);
    v145 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    ComponentHelper__SetLocalPosition(v145, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  else
  {
    sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsUnderVista = FSUtility__IsUnderVista(0);
    v141 = 0.0;
    if ( IsUnderVista )
      v141 = 4.0;
    ComponentHelper__SetLocalPositionY(sliderGrid, v141, 0);
    noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid2;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    UnityEngine_GameObject__SetActive(noneGachaInfo, 1, 0);
    ComponentHelper__SetLocalPositionX(
      (UnityEngine_Component_o *)this->fields.sliderGrid2,
      (float)(v136 * -0.5) * (float)v138,
      0);
    v142 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v143 = FSUtility__IsUnderVista(0);
    v144 = -13.0;
    if ( v143 )
      v144 = -9.0;
    ComponentHelper__SetLocalPositionY(v142, v144, 0);
  }
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_191;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0);
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.sliderGrid2;
  if ( !noneGachaInfo )
    goto LABEL_191;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0);
  SummonControl__UpdateSummonInfoControlLayout(this, v146);
  noneGachaInfo = (UnityEngine_GameObject_o *)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_191;
  summonInfoCtr = this->fields.summonInfoCtr;
  v148 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v149 = (SummonInfoControl_ClickDelegate_o *)sub_1C372A4(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v149, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0);
  if ( !summonInfoCtr )
    goto LABEL_191;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v148, v149, 0);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v150);
  SummonControl__setResourceInfo(this, v151);
}


void SummonControl__deleteBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t childCount; // w0
  int v5; // w21
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Transform_o *v7; // x20
  int32_t v8; // w0
  int v9; // w23
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Transform_o *v11; // x20
  int32_t v12; // w0
  int v13; // w23
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w20
  UnityEngine_Object_o *v16; // x21

  if ( (byte_4C3F4FB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F4FB = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_39;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_39:
    sub_1C372B4(bannerLoopCtr);
  }
LABEL_13:
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_39;
  v7 = (UnityEngine_Transform_o *)bannerLoopCtr;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( v8 >= 1 )
  {
    v9 = v8 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v7, v9 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_39;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v10, 0);
    }
    while ( --v9 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid2;
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_39;
  v11 = (UnityEngine_Transform_o *)bannerLoopCtr;
  v12 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0);
  if ( v12 >= 1 )
  {
    v13 = v12 + 1;
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v11, v13 - 2, 0);
      if ( !bannerLoopCtr )
        goto LABEL_39;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v14, 0);
    }
    while ( --v13 > 1 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_39;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
  if ( !bannerLoopCtr )
    goto LABEL_39;
  v15 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0) - 1;
  if ( v15 >= 0 )
  {
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !bannerLoopCtr )
        goto LABEL_39;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_39;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v15,
                                                   0);
      if ( !bannerLoopCtr )
        goto LABEL_39;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71266940(v16, 0);
    }
    while ( --v15 >= 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0;
}


void SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 *v6; // x8

  if ( (byte_4C3F4BF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_10499/*"PURCHASE_ERROR"*/);
    sub_1C37058(&StringLiteral_10492/*"PURCHASE_CANCEL"*/);
    sub_1C37058(&StringLiteral_10500/*"PURCHASE_OK"*/);
    byte_4C3F4BF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C372B4(Instance);
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v6 = &StringLiteral_10492/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v6 = &StringLiteral_10499/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v6 = &StringLiteral_10500/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v6, 0);
}


void SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 *v6; // x8

  if ( (byte_4C3F4B8 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_10499/*"PURCHASE_ERROR"*/);
    sub_1C37058(&StringLiteral_10492/*"PURCHASE_CANCEL"*/);
    sub_1C37058(&StringLiteral_10500/*"PURCHASE_OK"*/);
    byte_4C3F4B8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v6 = &StringLiteral_10492/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C372B4(Instance);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v6 = &StringLiteral_10499/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v6 = &StringLiteral_10500/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v6, 0);
        return;
      }
      goto LABEL_15;
  }
}


void SummonControl__endPurchaseSvtFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 *v6; // x8

  if ( (byte_4C3F4B6 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_10499/*"PURCHASE_ERROR"*/);
    sub_1C37058(&StringLiteral_10492/*"PURCHASE_CANCEL"*/);
    sub_1C37058(&StringLiteral_10500/*"PURCHASE_OK"*/);
    byte_4C3F4B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v6 = &StringLiteral_10492/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C372B4(Instance);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v6 = &StringLiteral_10499/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v6 = &StringLiteral_10500/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v6, 0);
        return;
      }
      goto LABEL_15;
  }
}


void SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  SummonControl___c_c *v4; // x8
  float x; // s9
  float y; // s12
  float m_XMin; // s8
  float m_YMin; // s13
  float m_Height; // s10
  float m_Width; // s11
  CommonUI_o *v11; // x20
  System_Action_o *_9__163_0; // x21
  Il2CppObject *v13; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x20
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v19; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C3F490 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__exeFormation_b__163_1__);
    sub_1C37058(&Method_SummonControl___c__exeFormation_b__163_0__);
    sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F490 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = SummonControl___c_TypeInfo;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  v11 = (CommonUI_o *)Instance;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v4 = SummonControl___c_TypeInfo;
  }
  _9__163_0 = v4->static_fields->__9__163_0;
  if ( !_9__163_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = SummonControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v4->static_fields->__9;
    _9__163_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__163_0, v13, Method_SummonControl___c__exeFormation_b__163_0__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__163_0 = _9__163_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__163_0, (int32_t)_9__163_0, v15, v16);
  }
  if ( !v11 )
    sub_1C372B4(Instance);
  v19.fields.m_YMin = m_YMin + 33.0;
  v18.fields.y = y + 33.0;
  v18.fields.x = x;
  v19.fields.m_XMin = m_XMin;
  v19.fields.m_Width = m_Width;
  v19.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v11, v18, 0.0, v19, _9__163_0, 0);
  v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__163_1__, 0);
  MainMenuBar__SetDispBtnAct(1, v17, 0);
}


void SummonControl__exeSummon(SummonControl_o *this, GachaRqParamData_o *paramData, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *closeBtn; // x0
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_4C3F4B0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3352/*"CHECK_SERVANT_FRAME"*/);
    byte_4C3F4B0 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.gachaParamData, (int32_t)paramData, v5, v6);
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
      sub_1C372B4(closeBtn);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3352/*"CHECK_SERVANT_FRAME"*/, 0);
}


void SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v5; // x21
  CombineResultEffectComponent_ClickDelegate_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_4C3F4F6 & 1) == 0 )
  {
    sub_1C37058(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__executeEnhanceTresureDevice_b__284_0__);
    byte_4C3F4F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C372A4(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__284_0__,
    0);
  if ( !v5 )
    sub_1C372B4(v7);
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
  struct GachaRqParamData_o *v12; // x8
  Il2CppObject *gachaSubEntity; // x20
  System_String_o *SummonConfirmMessage; // x21
  struct GachaRqParamData_o *v15; // x8
  int32_t friendPoint; // w22
  SummonConfirmDlgComponent_o *v17; // x25
  int32_t gachaTime; // w23
  int32_t gachaResourceNum; // w28
  int32_t needPoint; // w24
  SummonConfirmDlgComponent_CallbackFunc_o *v21; // x26
  const MethodInfo *v22; // x3
  System_Action_o *v23; // x27
  const MethodInfo *v24; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4C3F4D1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
    sub_1C37058(&Method_SummonControl_autoSellSettingChange2__);
    this = (SummonControl_o *)sub_1C37058(&Method_SummonControl_friendSummonConfirmResult__);
    byte_4C3F4D1 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_22;
  isFree = summonInfoCtr->fields.isFree;
  v2->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v2->fields.confirmDlgInfo;
    v6 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v7);
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0);
    gachaParamData = v2->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v6, v8, gachaParamData->fields.gachaId, v9);
      return;
    }
LABEL_22:
    sub_1C372B4(this);
  }
  this = (SummonControl_o *)v2->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v11 )
      break;
    v12 = v2->fields.gachaParamData;
    if ( !v12 )
      sub_1C372B4(v11);
    gachaSubEntity = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C372B4(v11);
    if ( v12->fields.gachaId == LODWORD(v26.fields._current[1].klass) )
    {
      SummonConfirmMessage = GachaSubEntity__GetSummonConfirmMessage((GachaSubEntity_o *)v26.fields._current, 0);
      goto LABEL_16;
    }
  }
  gachaSubEntity = 0;
  SummonConfirmMessage = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v15 = v2->fields.gachaParamData;
  if ( !v15 )
    goto LABEL_22;
  friendPoint = v2->fields.friendPoint;
  v17 = v2->fields.confirmDlgInfo;
  gachaTime = v15->fields.gachaTime;
  gachaResourceNum = v15->fields.gachaResourceNum;
  needPoint = v2->fields.needPoint;
  v21 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v22);
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0);
  if ( !v17 )
    goto LABEL_22;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v17,
    friendPoint,
    gachaTime,
    needPoint,
    friendPoint - gachaResourceNum,
    v21,
    v23,
    SummonConfirmMessage,
    (GachaSubEntity_o *)gachaSubEntity,
    v24);
}


void SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C3F4D2 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_friendSummonConfirmResult__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F4D2 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close_35511948(confirmDlgInfo, 0, method);
  v6 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_SummonControl_friendSummonConfirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    SummonControl__friendPointQpManaCheck(this, v8);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_10:
    sub_1C372B4(confirmDlgInfo);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


GachaEntity_o *SummonControl__getCurrentGachaData(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_4C3F49B & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4C3F49B = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1C372B4(0);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 *v13; // x24
  int32_t v14; // w23
  __int64 v15; // x8
  System_Predicate_object__o **v16; // x22
  System_Predicate_object__o *v17; // x23
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C3F4F9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C37058(&Method_SummonControl___c__DisplayClass287_0__getFriendPointIndex_b__0__);
    sub_1C37058(&SummonControl___c__DisplayClass287_0_TypeInfo);
    byte_4C3F4F9 = 1;
  }
  v9 = sub_1C372A4(SummonControl___c__DisplayClass287_0_TypeInfo);
  SummonControl___c__DisplayClass287_0___ctor((SummonControl___c__DisplayClass287_0_o *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = oldGachas,
        v13 = (__int64 *)(v9 + 16),
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)oldGachas, v11, v12),
        (vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList) == 0) )
  {
LABEL_23:
    sub_1C372B4(vaildGachaList);
  }
  v14 = 0;
  while ( v14 < vaildGachaList->fields._size )
  {
    if ( gachaId )
    {
      vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      vaildGachaList,
                                                                      v14,
                                                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !vaildGachaList )
        goto LABEL_23;
      if ( HIDWORD(vaildGachaList[1].monitor) == 3 )
      {
        vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
        if ( !vaildGachaList )
          goto LABEL_23;
        vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        vaildGachaList,
                                                                        v14,
                                                                        (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !vaildGachaList )
          goto LABEL_23;
        if ( LODWORD(vaildGachaList->fields._items) == gachaId )
          return v14;
      }
    }
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
    ++v14;
    if ( !vaildGachaList )
      goto LABEL_23;
  }
  v15 = *v13;
  if ( *v13 )
  {
    *(_DWORD *)(v9 + 24) = oldCurrentIdx;
    v16 = (System_Predicate_object__o **)(v9 + 32);
    while ( oldCurrentIdx < *(_DWORD *)(v15 + 24) )
    {
      v17 = *v16;
      v18 = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( !*v16 )
      {
        v17 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v17,
          (Il2CppObject *)v9,
          Method_SummonControl___c__DisplayClass287_0__getFriendPointIndex_b__0__,
          0);
        *(_QWORD *)(v9 + 32) = v17;
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v17, v19, v20);
      }
      if ( !v18 )
        goto LABEL_23;
      vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindIndex(
                                                                      v18,
                                                                      (System_Predicate_T__o *)v17,
                                                                      (const MethodInfo_37A387C *)Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
      if ( ((unsigned int)vaildGachaList & 0x80000000) == 0 )
        return (int)vaildGachaList;
      v15 = *(_QWORD *)(v9 + 16);
      oldCurrentIdx = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 24) = oldCurrentIdx;
      if ( !v15 )
        goto LABEL_23;
    }
  }
  return 0;
}


UserGachaEntity_o *SummonControl__getUserGachaData(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3F49A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F49A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C372B4(Instance);
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
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  CGThumbnailListItem_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3F48A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C3F48A = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1C372B4(0);
    p_stoneFragmentsShopEntity = (CGThumbnailListItem_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0);
    p_stoneFragmentsShopEntity->klass = (CGThumbnailListItem_c *)EntityOfFragmentsShop;
    sub_1C36FFC(p_stoneFragmentsShopEntity, (int32_t)EntityOfFragmentsShop, v7, v8);
    return (ShopEntity_o *)p_stoneFragmentsShopEntity->klass;
  }
  return result;
}


UnityEngine_Vector2_o SummonControl__get_TUTORIAL_FORMATION_ARROW_POS_FS(
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


UnityEngine_Rect_o SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(SummonControl_o *this, const MethodInfo *method)
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


UnityEngine_Vector2_o SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(SummonControl_o *this, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3F489 & 1) == 0 )
  {
    sub_1C37058(&FSUtility_TypeInfo);
    byte_4C3F489 = 1;
  }
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = x + (float)(FSUtility__GetOffsetX(68.0, 0, 0) + -14.0);
  v6 = y + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


UnityEngine_Rect_o SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(SummonControl_o *this, const MethodInfo *method)
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


void SummonControl__incereIdx(SummonControl_o *this, const MethodInfo *method)
{
  ++this->fields.getSvtIdx;
}


bool SummonControl__isEnhanceTresureDevice(SummonControl_o *this, int32_t *svtId, const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  ServantFlagReleaseMaster_o *v7; // x21
  unsigned int v8; // w25
  bool v9; // w24
  struct GachaInfos_array *v10; // x8
  GachaInfos_o *v11; // x8
  int32_t objectId; // w22
  bool result; // w0

  v4 = this;
  if ( (byte_4C3F4F2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    this = (SummonControl_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F4F2 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
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
      if ( v8 >= LODWORD(v10->max_length) )
        sub_1C372BC(this);
      v11 = v10->m_Items[v8];
      if ( !v11 || !v7 )
        break;
      objectId = v11->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v7, objectId, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_16;
      v9 = (int)++v8 < max_length;
      if ( max_length == v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C372B4(this);
  }
  v9 = 0;
LABEL_15:
  objectId = 0;
LABEL_16:
  result = v9;
  *svtId = objectId;
  return result;
}


bool SummonControl__isMultipleCheck(SummonControl_o *this, int32_t svtId, int32_t max, const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned int v5; // w9
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
        if ( v5 >= LODWORD(gachaResInfoList->max_length) )
          sub_1C372BC(this);
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
    sub_1C372B4(this);
  }
  return 0;
}


bool SummonControl__isSvtEqSummonResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  unsigned int v6; // w22
  bool v7; // w24
  struct GachaInfos_array *v8; // x8
  GachaInfos_o *v9; // x25

  v2 = this;
  if ( (byte_4C3F4E6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (SummonControl_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F4E6 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
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
      if ( v6 >= LODWORD(v8->max_length) )
        sub_1C372BC(this);
      v9 = v8->m_Items[v6];
      if ( !v9 || !v5 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v5,
                                  v9->fields.objectId,
                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !this
        || (this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0),
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
    sub_1C372B4(this);
  }
  return 0;
}


void SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4C3F506 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F506 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0, 0);
      return;
    }
LABEL_9:
    sub_1C372B4(limitWarningDlgInfo);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  void *limitWarningDlgInfo; // x0
  const MethodInfo *v6; // x1
  _DWORD *v7; // x20
  int32_t v8; // w20
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1
  SummonLimitWarningDlgComponent_o *v11; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v12; // x21
  System_Action_o *v13; // x22

  if ( (byte_4C3F505 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_ShowConfirmDialog__);
    sub_1C37058(&Method_SummonControl_limitManaConfirmResult__);
    sub_1C37058(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C3F505 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_21;
  SummonLimitWarningDlgComponent__Close((SummonLimitWarningDlgComponent_o *)limitWarningDlgInfo, 0);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, v6) )
      {
        limitWarningDlgInfo = UserGameMaster__getSelfUserGame(0);
        if ( !limitWarningDlgInfo )
          goto LABEL_21;
        v7 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 64), 0) )
          goto LABEL_18;
        v8 = v7[48];
        v9 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = BalanceConfig_TypeInfo;
        }
        if ( v8 >= v9->static_fields->UserItemMax )
        {
          v11 = this->fields.limitWarningDlgInfo;
          v12 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C372A4(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0);
          v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
          if ( !v11 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v11, v12, v13, 0);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0, 0);
          SummonControl__loadAssetsForSummon(this, v10);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0, 0);
        return;
      }
LABEL_21:
      sub_1C372B4(limitWarningDlgInfo);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
  }
}


void SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  SummonRootComponent_o *klass; // x20
  System_Action_o *v5; // x21
  __int64 naturalAligment; // x9
  SummonControl_o *v7; // x0
  bool v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_4C3F4D9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SummonControl__loadAssetsForSummon_b__247_0__);
    sub_1C37058(&SummonRootComponent_TypeInfo);
    byte_4C3F4D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__247_0__, 0),
        !klass) )
  {
    sub_1C372B4(Instance);
  }
  naturalAligment = SummonRootComponent_TypeInfo->_2.naturalAligment;
  if ( klass->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[naturalAligment - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v5, 0);
  }
  else
  {
    sub_1C37574(klass);
    SummonControl__friendSummonConfirmResult(v7, v8, v9);
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

  if ( (byte_4C3F4A7 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_onClickChangeBanner__);
    sub_1C37058(&StringLiteral_12785/*"SetBannerCenter"*/);
    byte_4C3F4A7 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_71251632(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12785/*"SetBannerCenter"*/,
      0);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_49148688(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0),
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
      sub_1C372B4(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_49148688(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0);
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

  if ( (byte_4C3F4A8 & 1) == 0 )
  {
    sub_1C37058(&Method_SummonControl_onClickLeftChangeBanner__);
    sub_1C37058(&StringLiteral_12785/*"SetBannerCenter"*/);
    byte_4C3F4A8 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_71251632(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12785/*"SetBannerCenter"*/,
      0);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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
    v9 = this->fields.currentMoveIdx - 1 < 0 ? v8 : this->fields.currentMoveIdx - 1;
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
      || (UICenterOnChild__CenterOn_49148688(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0),
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
      sub_1C372B4(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_49148688(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0);
  }
}


void SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
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
  float v13; // s0
  SummonControl___c_c *v14; // x0
  float v15; // s11
  System_Action_o *_9__162_0; // x22
  Il2CppObject *v17; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x20
  UnityEngine_Rect_o v22; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C3F48F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__openAfterSummonInfo_b__162_1__);
    sub_1C37058(&Method_SummonControl___c__openAfterSummonInfo_b__162_0__);
    sub_1C37058(&SummonControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_13597/*"TUTORIAL_MESSAGE_SUMMON2"*/);
    byte_4C3F48F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13597/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v5);
  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v13 = SummonControl__FSMenuOffsetX(v11, v12);
  v14 = SummonControl___c_TypeInfo;
  v15 = v13;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v14 = SummonControl___c_TypeInfo;
  }
  _9__162_0 = v14->static_fields->__9__162_0;
  if ( !_9__162_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = SummonControl___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__162_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__162_0, v17, Method_SummonControl___c__openAfterSummonInfo_b__162_0__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__162_0 = _9__162_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__162_0, (int32_t)_9__162_0, v19, v20);
  }
  if ( !Instance )
    sub_1C372B4(v14);
  v22.fields.m_Height = m_Height + 33.0;
  v22.fields.m_YMin = m_YMin + 33.0;
  v22.fields.m_XMin = m_XMin + v15;
  v22.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v4,
    TUTORIAL_MENU_ARROW_POS_FS,
    v22,
    0.0,
    0,
    -1,
    _9__162_0,
    0);
  v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__162_1__, 0);
  MainMenuBar__SetMenuBtnAct(v21, 0);
}


void SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4C3F48E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3435/*"CLEAR_TUTORIAL"*/);
    byte_4C3F48E = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3435/*"CLEAR_TUTORIAL"*/, 0),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0) )
  {
    sub_1C372B4(tutorialArrowObj);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0);
}


void SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  void *Item; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v8; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w21
  __int64 v14; // x21
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8
  System_Collections_Generic_List_object__o *v25; // x21
  System_Comparison_T__o *v26; // x22
  Il2CppObject *v27; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x22
  int32_t v32; // w21
  int32_t v33; // w22
  System_Action_o *v34; // x20

  if ( (byte_4C3F491 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&System_Comparison_EventTutorialEntity__TypeInfo);
    sub_1C37058(&EventTutorialEntity_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__openSvtEqInfo_b__164_1__);
    sub_1C37058(&Method_SummonControl___c__DisplayClass164_0__openSvtEqInfo_b__0__);
    sub_1C37058(&SummonControl___c__DisplayClass164_0_TypeInfo);
    sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F491 = 1;
  }
  v3 = sub_1C372A4(SummonControl___c__DisplayClass164_0_TypeInfo);
  SummonControl___c__DisplayClass164_0___ctor((SummonControl___c__DisplayClass164_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v8 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v8, 0);
  *(_QWORD *)(v3 + 16) = EventTutorialEntity;
  v10 = (void **)(v3 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)EventTutorialEntity, v11, v12);
  Item = *(void **)(v3 + 16);
  if ( !Item )
    goto LABEL_11;
  v13 = 0;
  while ( v13 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v13,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v10;
    ++v13;
    if ( !*v10 )
      goto LABEL_11;
  }
  v14 = sub_1C372A4(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v14, 0);
  if ( !v14 )
    goto LABEL_11;
  *(_DWORD *)(v14 + 24) = 1;
  v15 = sub_1C37100(int___TypeInfo, 1);
  *(_QWORD *)(v14 + 80) = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 80), v15, v16, v17);
  v20 = *(_QWORD *)(v14 + 80);
  if ( !v20 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v20 + 24) )
    sub_1C372BC(Item);
  *(_DWORD *)(v20 + 32) = 1;
  Item = *v10;
  if ( !*v10 )
    goto LABEL_11;
  v21 = *((_QWORD *)Item + 2);
  v22 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++*((_DWORD *)Item + 7);
  if ( !v21 )
    goto LABEL_11;
  v23 = *((int *)Item + 6);
  if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v14,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = v21 + 8 * v23;
    *((_DWORD *)Item + 6) = v23 + 1;
    *(_QWORD *)(v24 + 32) = v14;
    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 32), v14, v18, v19);
  }
  Item = SummonControl___c_TypeInfo;
  v25 = (System_Collections_Generic_List_object__o *)*v10;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    Item = SummonControl___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = SummonControl___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v26 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_SummonControl___c__openSvtEqInfo_b__164_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__164_1 = (struct System_Comparison_EventTutorialEntity__o *)v26;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__164_1, (int32_t)v26, v29, v30);
  }
  if ( !v25 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_58346216(
    v25,
    v26,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v31 = (System_Collections_Generic_List_object__o *)*v10;
  if ( !*v10 )
LABEL_11:
    sub_1C372B4(Item);
  v32 = v31->fields._size - 1;
  if ( v32 >= 0 )
  {
    while ( v31 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v31,
               v32,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v10;
        if ( !*v10 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v32,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v33 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        Item = (void *)TutorialFlag__GetGachaFlg(v33, 0);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v10;
          if ( !*v10 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v32,
            (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v31 = (System_Collections_Generic_List_object__o *)*v10;
      if ( --v32 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v34 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v3, Method_SummonControl___c__DisplayClass164_0__openSvtEqInfo_b__0__, 0);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v31,
    v34,
    0);
}


void SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_4C3F4DD & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_callbackTutorialSet__);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C3F4DD = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_1C372B4(Request_object);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
}


void SummonControl__progTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonInfoControl_o *summonInfoCtr; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  switch ( this->fields.tutorialKind )
  {
    case 1:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0);
      MainMenuBar__SetMenuBtnColliderEnable(0, 1, 0);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonListInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      SummonControl__openSummonExeArrow(this, v5);
      break;
    case 2:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fragmentNumCollider;
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)summonInfoCtr, 0, 0);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_39;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_39;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0);
      if ( !summonInfoCtr )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
      if ( !summonInfoCtr
        || (summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)summonInfoCtr,
                                                     0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonListInfo) == 0)
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.tutorialArrowObj) == 0)
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0),
            (summonInfoCtr = (SummonInfoControl_o *)this->fields.summonMBannerObject) == 0) )
      {
LABEL_39:
        sub_1C372B4(summonInfoCtr);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
      SummonControl__openAfterSummonInfo(this, v6);
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
  int32_t v14; // w20
  TerminalPramsManager_c *v15; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0
  UnityEngine_Object_o *summonBannerScrollView; // x20
  UnityEngine_Object_o *summonMBannerScrollView; // x20

  if ( (byte_4C3F495 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F495 = 1;
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
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo )
    goto LABEL_33;
  summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)summonBannerInfo,
                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !summonBannerInfo )
    goto LABEL_33;
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0);
  this->fields.summonType = VaildPayType;
  v14 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F524 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F524 = 1;
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
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0);
  summonBannerScrollView = (UnityEngine_Object_o *)this->fields.summonBannerScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonBannerScrollView, 0, 0) )
  {
    summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonBannerScrollView;
    if ( !summonBannerInfo )
      goto LABEL_33;
    UIScrollView__DisableSpring((UIScrollView_o *)summonBannerInfo, 0);
  }
  summonMBannerScrollView = (UnityEngine_Object_o *)this->fields.summonMBannerScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(summonMBannerScrollView, 0, 0) )
  {
    summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonMBannerScrollView;
    if ( summonBannerInfo )
    {
      UIScrollView__DisableSpring((UIScrollView_o *)summonBannerInfo, 0);
      return;
    }
LABEL_33:
    sub_1C372B4(summonBannerInfo);
  }
}


void SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  void *vaildGachaList; // x0
  int32_t currentIdx; // w20
  System_Object_array *v5; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *v7; // x8
  VaildGachaInfo_array *v8; // x21
  _DWORD *v9; // x8
  int32_t v10; // w22
  int32_t v11; // w24
  int32_t v12; // w23
  char v13; // w25
  const MethodInfo *v14; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x2
  int32_t FriendPointIndex; // w4
  const MethodInfo *v21; // x7

  if ( (byte_4C3F4F8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3F4F8 = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_29;
  currentIdx = this->fields.currentIdx;
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)vaildGachaList,
         (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_VaildGachaInfo__ToArray__);
  v7 = this->fields.vaildGachaList;
  v8 = (VaildGachaInfo_array *)v5;
  if ( !v7 || (v6 = (const MethodInfo *)(unsigned int)this->fields.currentIdx, v7->fields._size <= (int)v6) )
  {
    v10 = 0;
    goto LABEL_12;
  }
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                     (int32_t)v6,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList
    || (v9 = vaildGachaList, (vaildGachaList = this->fields.vaildGachaList) == 0)
    || (v10 = v9[4],
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0) )
  {
LABEL_29:
    sub_1C372B4(vaildGachaList);
  }
  if ( *((_DWORD *)vaildGachaList + 13) != 3 )
  {
    vaildGachaList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( vaildGachaList )
    {
      vaildGachaList = DataManager__GetMasterData_object_(
                         (DataManager_o *)vaildGachaList,
                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( vaildGachaList )
      {
        vaildGachaList = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)vaildGachaList,
                           v10,
                           (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( vaildGachaList )
        {
          v12 = *((_DWORD *)vaildGachaList + 18);
          if ( v12 || *((_DWORD *)vaildGachaList + 36) )
          {
            v11 = *((_DWORD *)vaildGachaList + 36);
            goto LABEL_13;
          }
LABEL_12:
          v11 = 0;
          v12 = 0;
LABEL_13:
          v13 = 0;
          goto LABEL_14;
        }
      }
    }
    goto LABEL_29;
  }
  v11 = 0;
  v12 = 0;
  v13 = 1;
LABEL_14:
  if ( !SummonControl__resetSummonVaildData(this, v6)
    || ((gachaParamData = this->fields.gachaParamData) == 0
     || gachaParamData->fields.gachaId != this->fields.lastMaxDrawGachaId)
    && SummonControl__checkMaxDrawNum(this, v14) )
  {
    SummonControl__deleteBannerList(this, v14);
    SummonControl__CheckValidGachaList(this, v16);
    SummonControl__createSummonInfo(this, v17);
    FriendPointIndex = SummonControl__getFriendPointIndex(this, v10, currentIdx, v8, v18);
    if ( (v13 & 1) == 0 )
      FriendPointIndex = SummonControl__GetGachaIndex(this, v10, v12, v11, FriendPointIndex, currentIdx, v8, v21);
    if ( (FriendPointIndex & 0x80000000) == 0 )
      SummonControl__setDispRePosition(this, FriendPointIndex, v19);
  }
}


void SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  System_String_o *assetPath; // x20
  CGThumbnailListItem_o *p_bannerAssetData; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3F494 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C3F494 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (CGThumbnailListItem_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0);
    p_bannerAssetData->klass = 0;
    sub_1C36FFC(p_bannerAssetData, 0, v5, v6);
  }
}


void SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  System_Int32_array *storyAdjustIds; // x20
  int32_t shopIdIdx; // w24
  Il2CppObject *p_obj; // x27
  GachaDrawRequest_o *v11; // x19
  il2cpp_array_size_t max_length; // x8
  System_String_o *v13; // x29
  unsigned __int64 v14; // x22
  int32_t v15; // w28
  System_String_o *v16; // x0
  System_String_o *selectBonusListData; // x28
  int32_t ticketItemId; // [xsp+14h] [xbp-6Ch]
  int32_t warId; // [xsp+18h] [xbp-68h]
  int32_t gachaTime; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C3F4DA & 1) == 0 )
  {
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_NetworkManager_getRequest_GachaDrawRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_callbackGachaDraw__);
    sub_1C37058(&StringLiteral_166/*" : "*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F4DA = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v4,
                                             (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
    max_length = storyAdjustIds->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v13 = (System_String_o *)StringLiteral_1/*""*/;
        v14 = 0;
        v15 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v14 >= (unsigned int)max_length )
            sub_1C372BC(maskObject);
          v16 = System_Int32__ToString(v15, 0);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_63599904(
                                                     v13,
                                                     v16,
                                                     (System_String_o *)StringLiteral_166/*" : "*/,
                                                     0);
          LODWORD(max_length) = storyAdjustIds->max_length;
          ++v14;
          v13 = (System_String_o *)maskObject;
          v15 += 4;
        }
        while ( (__int64)v14 < (int)max_length );
      }
    }
  }
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    selectBonusListData = JsonManager__toJson(p_obj, 0, 0, 0);
  }
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0), !v11) )
LABEL_22:
    sub_1C372B4(maskObject);
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
    0);
}


void SummonControl__resetMainDisp(SummonControl_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  System_String_o *MainBgmName; // x20
  CommonUI_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3F4F7 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C3F4F7 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MissionNotifyManager__EndPause(Instance, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  Instance = (MissionNotifyManager_o *)this->fields.maskBgObject;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.maskObject;
  if ( !Instance )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    goto LABEL_27;
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0, 39, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)Instance, 1, 0, 0, 0);
  SummonControl__setDispSummonInfo(this, 1, v6);
  SummonControl__setUserResourceDisp(this, v7);
  Instance = (MissionNotifyManager_o *)this->fields.summonInfoCtr;
  this->fields.getSvtIdx = 0;
  if ( !Instance )
    goto LABEL_27;
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)Instance, 0);
  MainMenuBar__UpdateNoticeNumber(0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  if ( this->fields.tutorialKind == 2 )
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 0, 0);
    SummonControl__progTutorial(this, v8);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0);
    SummonControl__reDispSummonBannerList(this, v9);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_27:
    sub_1C372B4(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1C372B4(0);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v11.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v10);
}


void SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v4, v5);
  SummonControl__resetStoneInfo(this, v6);
}


void SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  Il2CppObject *v4; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21

  if ( (byte_4C3F4F1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__resetResultList_b__279_0__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3F4F1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0, 0);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0);
  }
  this->fields.isResult = 0;
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)v4;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__279_0__, 0);
  if ( !v6 )
LABEL_13:
    sub_1C372B4(Instance);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_4C3F4FC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C37058(&StringLiteral_2949/*"BONUS_SELECT_GACHA"*/);
    byte_4C3F4FC = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0 )
    {
LABEL_14:
      sub_1C372B4(Master_object);
    }
    if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_14;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_2949/*"BONUS_SELECT_GACHA"*/, 0);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct GachaEntity_array *useGachaData; // x8
  __int64 v7; // x19
  il2cpp_array_size_t max_length; // x9
  CGThumbnailListItem_o *p_useGachaData; // x20
  unsigned int v10; // w10
  unsigned int v11; // w21

  gachaMst = (__int64)this->fields.gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  gachaMst = (__int64)GachaMaster__getListValidData((GachaMaster_o *)gachaMst, 0);
  useGachaData = this->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_15;
  v7 = gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  max_length = useGachaData->max_length;
  p_useGachaData = (CGThumbnailListItem_o *)&this->fields.useGachaData;
  if ( (_DWORD)max_length == *(_DWORD *)(gachaMst + 24) )
  {
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length || (v11 = v10, v10 >= *(_DWORD *)(v7 + 24)) )
          sub_1C372BC(gachaMst);
        gachaMst = (__int64)useGachaData->m_Items[v10];
        if ( !gachaMst )
          break;
        gachaMst = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gachaMst + 312LL))(
                     gachaMst,
                     *(_QWORD *)(v7 + 8LL * (int)v10 + 32),
                     *(_QWORD *)(*(_QWORD *)gachaMst + 320LL));
        if ( (gachaMst & 1) == 0 )
          goto LABEL_14;
        useGachaData = (struct GachaEntity_array *)p_useGachaData->klass;
        if ( !p_useGachaData->klass )
          break;
        LODWORD(max_length) = useGachaData->max_length;
        v10 = v11 + 1;
        if ( (int)(v11 + 1) >= (int)max_length )
          return 1;
      }
LABEL_15:
      sub_1C372B4(gachaMst);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (CGThumbnailListItem_c *)v7;
    sub_1C36FFC(p_useGachaData, v7, v4, v5);
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
  unsigned int v8; // w23
  char *v9; // x8
  UnityEngine_GameObject_o *v10; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4C3F49E & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F49E = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_30C9180 *)Method_AssetData_GetObjectList_GameObject___);
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
        sub_1C372BC(bannerAssetData);
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v9 + 4),
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C372B4(bannerAssetData);
  }
  return 0;
}


void SummonControl__setCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *indexPanel; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_fields; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
  if ( !indexPanel
    || (indexPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))indexPanel->klass[1]._1.interopData)(
                                                  indexPanel,
                                                  indexPanel->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_1C372B4(indexPanel);
  }
  klass = (unsigned int)indexPanel[1].klass;
  v5 = (float32x2_t *)indexPanel;
  v6 = 0;
  p_fields = (float *)&indexPanel[1].fields;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
    if ( !indexPanel )
      goto LABEL_11;
    v8 = *(p_fields - 2);
    v9 = *(p_fields - 1);
    v10 = *p_fields;
    indexPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(indexPanel, 0);
    if ( !indexPanel )
      goto LABEL_11;
    v12.fields.x = v8;
    v12.fields.y = v9;
    v12.fields.z = v10;
    v13 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)indexPanel, v12, 0);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v13;
    p_fields += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass <= 2 )
LABEL_12:
    sub_1C372BC(indexPanel);
  v11 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v11;
}


void SummonControl__setChangeSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Item; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v10; // x22
  SummonInfoControl_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_4C3F4A9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&Method_SummonControl__setChangeSummonInfo_b__193_0__);
    sub_1C37058(&Method_SummonControl_exeSummon__);
    byte_4C3F4A9 = 1;
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
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v5, v6);
  SummonControl__setResourceInfo(this, v7);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v10 = (SummonInfoControl_ClickDelegate_o *)sub_1C372A4(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v10, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v10, 0),
        v11 = this->fields.summonInfoCtr,
        v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__193_0__, 0),
        !v11) )
  {
LABEL_8:
    sub_1C372B4(maskObject);
  }
  SummonInfoControl__SetAlphaSummonBtn(v11, v12, 0);
}


void SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  UnityEngine_Object_o *currentBannerComp; // x21
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *currentSummonMBannerComponent; // x21
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  v4 = this;
  if ( (byte_4C3F4AE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_GachaBannerComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SummonMiniBannerComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    this = (SummonControl_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F4AE = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_GachaBannerComponent___);
    v4->fields.currentBannerComp = (struct GachaBannerComponent_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.currentBannerComp, (int32_t)Component_object, v7, v8);
  }
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v4->fields.currentSummonMBannerComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v11 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SummonMiniBannerComponent___);
          v4->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v11;
          sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.currentSummonMBannerComponent, (int32_t)v11, v12, v13);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_1C372B4(this);
  }
LABEL_20:
  SummonControl__setSliderIcon(v4, currentIdx, v10);
  v4->fields.currentIdx = currentIdx;
  v4->fields.currentMoveIdx = currentIdx;
  SummonControl__setChangeSummonInfo(v4, v14);
  SummonControl__UpdateSummonInfoControlLayout(v4, v15);
}


void SummonControl__setDispSummonForm(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl__setDispSummonInfo(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  bool v6; // w20

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
    || (v6 = isDisp,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.helpImgInfo) == 0) )
  {
LABEL_11:
    sub_1C372B4(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0);
}


void SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1C372B4(0);
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
  void *bannerInfoList; // x0
  int v10; // w22
  int32_t v11; // w21
  __int64 v12; // x8
  SummonControl_o *v13; // x0
  int32_t v14; // w1

  if ( (byte_4C3F4AC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F4AC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F525 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F525 = 1;
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
    if ( !byte_4C3F525 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F525 = 1;
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
  if ( !byte_4C3F526 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F526 = 1;
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
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !bannerInfoList )
LABEL_35:
          sub_1C372B4(bannerInfoList);
        v12 = *((_QWORD *)bannerInfoList + 16);
        if ( !v12 )
        {
          v14 = 1;
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v12 + 52) == this->fields.summonType
          && (SummonId_k__BackingField < 1 || *(_DWORD *)(v12 + 16) == SummonId_k__BackingField) )
        {
          break;
        }
        if ( v10 == ++v11 )
          goto LABEL_37;
        bannerInfoList = this->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_35;
      }
      v14 = *((_DWORD *)bannerInfoList + 34);
LABEL_41:
      v13 = this;
      goto LABEL_42;
    }
LABEL_37:
    v13 = this;
    v14 = 0;
LABEL_42:
    SummonControl__setDispRePosition(v13, v14, v2);
  }
}


void SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  Il2CppObject *Item; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v9; // x25
  UIWidget_o *v10; // x22
  UIWidget_o *v11; // x23
  UIWidget_o *v12; // x20
  UIWidget_o *v13; // x24
  SummonControl_c *v14; // x8
  UIWidget_o *v15; // x21
  float COLOR_VAL; // s8
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F4AA & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C37058(&SummonControl_TypeInfo);
    byte_4C3F4AA = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v5, v6);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v9 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v10 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v11 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v12 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v14 = SummonControl_TypeInfo;
  v15 = (UIWidget_o *)vaildGachaList;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v14->static_fields->COLOR_VAL;
  if ( isPointSummon )
  {
    if ( !v9 )
      goto LABEL_34;
    v17.fields.a = 1.0;
    v17.fields.r = v14->static_fields->COLOR_VAL;
    v17.fields.g = v17.fields.r;
    v17.fields.b = v17.fields.r;
    UIWidget__set_color(v9, v17, 0);
    if ( !v10 )
      goto LABEL_34;
    v18.fields.a = 1.0;
    v18.fields.r = COLOR_VAL;
    v18.fields.g = COLOR_VAL;
    v18.fields.b = COLOR_VAL;
    UIWidget__set_color(v10, v18, 0);
    if ( !v13 )
      goto LABEL_34;
    v19.fields.a = 1.0;
    v19.fields.r = COLOR_VAL;
    v19.fields.g = COLOR_VAL;
    v19.fields.b = COLOR_VAL;
    UIWidget__set_color(v13, v19, 0);
    if ( !v15 )
      goto LABEL_34;
    v20.fields.a = 1.0;
    v20.fields.r = COLOR_VAL;
    v20.fields.g = COLOR_VAL;
    v20.fields.b = COLOR_VAL;
    UIWidget__set_color(v15, v20, 0);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0);
    if ( !v11 )
      goto LABEL_34;
    v21.fields.r = 1.0;
    v21.fields.g = 1.0;
    v21.fields.b = 1.0;
    v21.fields.a = 1.0;
    UIWidget__set_color(v11, v21, 0);
    if ( !v12 )
      goto LABEL_34;
    v22.fields.r = 1.0;
    v22.fields.g = 1.0;
    v22.fields.b = 1.0;
    v22.fields.a = 1.0;
    UIWidget__set_color(v12, v22, 0);
  }
  else
  {
    if ( !v11 )
      goto LABEL_34;
    v23.fields.a = 1.0;
    v23.fields.r = v14->static_fields->COLOR_VAL;
    v23.fields.g = v23.fields.r;
    v23.fields.b = v23.fields.r;
    UIWidget__set_color(v11, v23, 0);
    if ( !v12 )
      goto LABEL_34;
    v24.fields.a = 1.0;
    v24.fields.r = COLOR_VAL;
    v24.fields.g = COLOR_VAL;
    v24.fields.b = COLOR_VAL;
    UIWidget__set_color(v12, v24, 0);
    if ( !v9 )
      goto LABEL_34;
    v25.fields.r = 1.0;
    v25.fields.g = 1.0;
    v25.fields.b = 1.0;
    v25.fields.a = 1.0;
    UIWidget__set_color(v9, v25, 0);
    if ( !v10 )
      goto LABEL_34;
    v26.fields.r = 1.0;
    v26.fields.g = 1.0;
    v26.fields.b = 1.0;
    v26.fields.a = 1.0;
    UIWidget__set_color(v10, v26, 0);
    if ( !v13 )
      goto LABEL_34;
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    UIWidget__set_color(v13, v27, 0);
    if ( !v15 )
      goto LABEL_34;
    v28.fields.r = 1.0;
    v28.fields.g = 1.0;
    v28.fields.b = 1.0;
    v28.fields.a = 1.0;
    UIWidget__set_color(v15, v28, 0);
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
    sub_1C372B4(vaildGachaList);
  }
}


void SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C3F4EF & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3F4EF = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(summonResultInfo);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)summonResultInfo, 0);
}


void SummonControl__setSliderIcon(SummonControl_o *this, int32_t idx, const MethodInfo *method)
{
  UnityEngine_Component_o *sliderGrid; // x0
  UnityEngine_Component_o *sliderGrid2; // x8
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  int v9; // w24
  float v10; // s0
  int v11; // w8
  unsigned int v12; // w26
  unsigned int v13; // w22
  UnityEngine_Transform_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  SelectBannerSliderIcon_o *v17; // x23
  const MethodInfo *v18; // x2

  if ( (byte_4C3F4AB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    byte_4C3F4AB = 1;
  }
  sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !sliderGrid )
    goto LABEL_23;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sliderGrid, 0);
  sliderGrid2 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
  if ( !sliderGrid2 )
    goto LABEL_23;
  v7 = (UnityEngine_Transform_o *)sliderGrid;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(sliderGrid2, 0);
  if ( !v7 )
    goto LABEL_23;
  v8 = (UnityEngine_Transform_o *)sliderGrid;
  sliderGrid = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(v7, 0);
  if ( !v8 )
    goto LABEL_23;
  v9 = UnityEngine_Transform__get_childCount(v8, 0) + (_DWORD)sliderGrid;
  if ( v9 >= 1 )
  {
    v10 = (float)v9 * 0.5;
    v11 = vcvtps_s32_f32(v10);
    if ( ceilf(v10) == INFINITY )
      v11 = 0x80000000;
    if ( v11 <= 50 )
      v12 = 50;
    else
      v12 = v11;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v12 )
      {
        v15 = v13 - v12;
        v14 = v8;
      }
      else
      {
        v14 = v7;
        v15 = v13;
      }
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v14, v15, 0);
      if ( !sliderGrid )
        break;
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51242636(
                                                sliderGrid,
                                                (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !sliderGrid )
        break;
      v17 = (SelectBannerSliderIcon_o *)sliderGrid;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)sliderGrid, 0, v16);
      if ( idx == v13 )
        SelectBannerSliderIcon__setEnableOnImg(v17, 1, v18);
      if ( v9 == ++v13 )
        return;
    }
LABEL_23:
    sub_1C372B4(sliderGrid);
  }
}


void SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *Time; // x0
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UILabel_o *summonHelpLabel; // x21
  TerminalPramsManager_c *v10; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  long double v15; // q0
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct GachaEntity_array *ListValidData; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v30; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F492 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SummonControl_LoadBannerEnd__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_12448/*"SUMMON_HELP_MESSAGE"*/);
    sub_1C37058(&StringLiteral_13167/*"SummonBanners/DownloadSummonBanner"*/);
    sub_1C37058(&StringLiteral_6396/*"FAIL_LOAD"*/);
    sub_1C37058(&StringLiteral_20425/*"img_line_summon"*/);
    sub_1C37058(&StringLiteral_20307/*"img_bg_banner"*/);
    byte_4C3F492 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  SummonControl__setDispSummonInfo(this, 1, v5);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0, 39, 0);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)Time, 1, 0, 0, 0);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0;
  this->fields.isDoneTutorial = 1;
  v6 = StringLiteral_13167/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13167/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetPath, v6, v7, v8);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SUMMON_HELP_MESSAGE"*/, 0);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3F523 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3F523 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v10->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v12, v13);
  SummonControl__setUserResourceDisp(this, v14);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C8776C(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8776C(v15);
  Time = **(UnityEngine_Transform_o ***)(v17 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.gachaMst, (int32_t)MasterData_object, v19, v20);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0);
  this->fields.useGachaData = ListValidData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.useGachaData, (int32_t)ListValidData, v22, v23);
  SummonControl__CheckValidGachaList(this, v24);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.vaildGachaList, 0, v25, v26);
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
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20425/*"img_line_summon"*/, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&Time->klass[2]._1.this_arg.bits)(
    Time,
    Time->klass[2]._1.element_class);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_20307/*"img_bg_banner"*/, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerScrollView;
  if ( !Time )
    goto LABEL_45;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0);
  assetPath = this->fields.assetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(assetPath, 0) )
  {
    Time = (UnityEngine_Transform_o *)this->fields.fsm;
    if ( Time )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6396/*"FAIL_LOAD"*/, 0);
      return;
    }
LABEL_45:
    sub_1C372B4(Time);
  }
  v30 = this->fields.assetPath;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v31, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0);
}


void SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SummonResultComponent_o *Instance; // x0
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  System_Action_o *_9__271_0; // x21
  Il2CppObject *v8; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3F4EB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__setSummonResultList_b__271_0__);
    sub_1C37058(&SummonControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_9327/*"NO_EXIST"*/);
    sub_1C37058(&StringLiteral_12217/*"SHOW_TALK"*/);
    byte_4C3F4EB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(107, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40427704(108, 0) && SummonControl__isSvtEqSummonResult(this, v3) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = (CommonUI_o *)Instance;
      v6 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v6 = SummonControl___c_TypeInfo;
      }
      _9__271_0 = v6->static_fields->__9__271_0;
      if ( !_9__271_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = SummonControl___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__271_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__271_0, v8, Method_SummonControl___c__setSummonResultList_b__271_0__, 0);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__271_0 = _9__271_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__271_0, (int32_t)_9__271_0, v10, v11);
      }
      if ( !v5 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_31234120(v5, 2, 108, _9__271_0, 0, 0, 0);
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
    0);
  Instance = (SummonResultComponent_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.resType == 2 )
  {
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12217/*"SHOW_TALK"*/, 0);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1C372B4(Instance);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


void SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bannerInfoList; // x0
  int32_t v6; // w21
  bool v7; // w20
  const MethodInfo *v8; // x2

  if ( (byte_4C3F48C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    byte_4C3F48C = 1;
  }
  if ( !this->fields.isDoneTutorial )
    isEnable &= this->fields.tutorialKind != 2;
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_14;
  v6 = 0;
  while ( v6 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v6,
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, isEnable, 0);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
      ++v6;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_14;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.leftArrowBtn;
  if ( !bannerInfoList
    || (v7 = isEnable,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v7, 0),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.rightArrowBtn) == 0) )
  {
LABEL_14:
    sub_1C372B4(bannerInfoList);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v7, 0);
  SummonControl__SetMiniBannerArrowAndColliderEnable(this, v7, v8);
}


void SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *Master_object; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *currentFragmentNumLb; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3F497 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SummonControl__setUserResourceDisp_b__170_0__);
    sub_1C37058(&StringLiteral_25092/*"{0:N0}"*/);
    byte_4C3F497 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v5, v6);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v8, v9, v10, v11, v12, v13);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v16, 0);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v18 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v18, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__170_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v18, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v19, v20, v21, v22, v23, v24);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v26, 0);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v27, 0);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v29, v30, v31, v32, v33, v34);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25092/*"{0:N0}"*/, v35, 0);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v36, 0)) == 0)
    || (v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        GameObjectExtensions__SetLocalPositionX(v37, -179.0, 0),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0)
    || (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v38, 0)) == 0) )
  {
LABEL_21:
    sub_1C372B4(Master_object);
  }
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(v39, 179.0, 0);
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

  if ( (byte_4C3F4CC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SummonControl_ShowConfirmDialog__);
    byte_4C3F4CC = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  int32_t monitor; // w22
  _QWORD *v11; // x8
  _DWORD *v12; // x8
  int32_t v13; // w22
  int32_t klass; // w23
  int64_t klass_low; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppObject *v21; // x1
  Il2CppClass **v22; // x0
  int32_t v23; // w22

  if ( (byte_4C3F4A6 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3F4A6 = 1;
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
        v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v6->fields._size >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v6,
                     v8,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v6,
                       v8,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
              if ( !Item )
                break;
              monitor = (int32_t)Item[1].monitor;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              if ( !TutorialFlag__GetGachaFlg(monitor, 0) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                v11 = Item[3].monitor;
                if ( !v11 )
                  break;
                if ( v11[3] )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v12 = Item[3].monitor;
                  if ( !v12 )
                    break;
                  if ( !v12[6] )
                    sub_1C372BC(Item);
                  v13 = v12[8];
                }
                else
                {
LABEL_23:
                  v13 = 0;
                }
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                if ( CondType__IsOpen(klass, v13, klass_low, 0, 0, 0) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v7 )
                    break;
                  items = v7->fields._items;
                  v19 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v7->fields._version;
                  if ( !items )
                    break;
                  size = v7->fields._size;
                  v21 = Item;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v7,
                      Item,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v22 = &items->obj.klass + size;
                    v7->fields._size = size + 1;
                    v22[4] = (Il2CppClass *)v21;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v23 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                  TutorialFlag__SetGachaFlg(v23, 0);
                }
              }
            }
            if ( ++v8 >= v6->fields._size )
              goto LABEL_39;
          }
          sub_1C372B4(Item);
        }
LABEL_39:
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
  Il2CppObject *_40427704; // x0
  const MethodInfo *v4; // x1
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  System_Action_o *_9__266_0; // x21
  Il2CppObject *v8; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v14; // x8
  struct GachaInfos_array *v15; // x8
  __int64 v16; // x9
  GachaInfos_o *v17; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22
  struct GachaInfos_array *v21; // x8
  __int64 v22; // x9
  GachaInfos_o *v23; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v25; // x20
  ServantStatusDialog_EndDelegate_o *v26; // x22

  if ( (byte_4C3F4E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SummonControl_DialogCallBack__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_SummonControl___c__showServantDialog_b__266_0__);
    sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F4E7 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40427704 = (Il2CppObject *)TutorialFlag__Get_40427704(107, 0);
  if ( ((unsigned __int8)_40427704 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _40427704 = (Il2CppObject *)TutorialFlag__Get_40427704(108, 0);
    if ( ((unsigned __int8)_40427704 & 1) == 0 )
    {
      _40427704 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v4);
      if ( ((unsigned __int8)_40427704 & 1) != 0 )
      {
        _40427704 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = (CommonUI_o *)_40427704;
        v6 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v6 = SummonControl___c_TypeInfo;
        }
        _9__266_0 = v6->static_fields->__9__266_0;
        if ( !_9__266_0 )
        {
          if ( !v6->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = SummonControl___c_TypeInfo;
          }
          v8 = (Il2CppObject *)v6->static_fields->__9;
          _9__266_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(_9__266_0, v8, Method_SummonControl___c__showServantDialog_b__266_0__, 0);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__266_0 = _9__266_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__266_0, (int32_t)_9__266_0, v10, v11);
        }
        if ( !v5 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_31234120(v5, 2, 108, _9__266_0, 0, 0, 0);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
LABEL_35:
    sub_1C372BC(_40427704);
  v14 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v14 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v14->fields.type, 0) )
  {
    _40427704 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_40427704 )
      goto LABEL_34;
    _40427704 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_40427704,
                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v15 = this->fields.gachaResInfoList;
    if ( !v15 )
      goto LABEL_34;
    v16 = this->fields.getSvtIdx;
    if ( (unsigned int)v16 < LODWORD(v15->max_length) )
    {
      v17 = v15->m_Items[v16];
      if ( v17 )
      {
        if ( _40427704 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_40427704,
                     v17->fields.userSvtId,
                     (const MethodInfo_33A35FC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v20, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_31220836(
              (CommonUI_o *)Instance,
              0,
              (UserCommandCodeEntity_o *)Entity,
              v20,
              0,
              0);
            return;
          }
        }
      }
LABEL_34:
      sub_1C372B4(_40427704);
    }
    goto LABEL_35;
  }
  _40427704 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = this->fields.gachaResInfoList;
  if ( !v21 )
    goto LABEL_34;
  v22 = this->fields.getSvtIdx;
  if ( (unsigned int)v22 >= LODWORD(v21->max_length) )
    goto LABEL_35;
  v23 = v21->m_Items[v22];
  if ( !v23 )
    goto LABEL_34;
  userSvtId = v23->fields.userSvtId;
  v25 = (CommonUI_o *)_40427704;
  v26 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v26, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0);
  if ( !v25 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_31217452(v25, 6, userSvtId, v26, 0, 0);
}


void SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3F4BE & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl_endPurchaseStone__);
    byte_4C3F4BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C372A4(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0);
  if ( !Instance )
    sub_1C372B4(v5);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v4, 0, 0);
}


void SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C3F4E0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__showSummonEffect_b__254_0__);
    byte_4C3F4E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__254_0__, 0);
  if ( !v5 )
    sub_1C372B4(v8);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4C3F4EA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl__showSummonResultInfo_b__270_0__);
    byte_4C3F4EA = 1;
  }
  if ( this->fields.resType == 2 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 0, 0, 39, 0);
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
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0, 39, 0);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_23;
    TitleInfoControl__setBackBtnSprite_39841600(titleInfo, 1, 0, 0, 0);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && LODWORD(overflowSvtCoinInfos->max_length) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v7 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__270_0__, 0);
      if ( !Instance )
        goto LABEL_23;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v9, 0);
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
    sub_1C372B4(titleInfo);
  SummonResultComponent__SetActive((SummonResultComponent_o *)titleInfo, 1, 0);
}


void SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0

  if ( (byte_4C3F4B7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl_endPurchaseSvtEqFrame__);
    sub_1C37058(&Method_SummonControl_resetStoneInfo__);
    byte_4C3F4B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1C372A4(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0);
  if ( !Instance )
    sub_1C372B4(v6);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0);
}


void SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0

  if ( (byte_4C3F4B5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SummonControl_endPurchaseSvtFrame__);
    sub_1C37058(&Method_SummonControl_resetStoneInfo__);
    byte_4C3F4B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseSvtFrame__, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0);
  if ( !Instance )
    sub_1C372B4(v6);
  CommonUI__OpenServantFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0);
}


void SummonControl__showSvtTalk(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  DataManager_o *Instance; // x0
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v7; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  DataManager_o *v11; // x24
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *v13; // x22
  int32_t v14; // w24
  ServantVoiceEntity_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *summonScriptId; // x23
  Il2CppObject *v18; // x24
  System_Action_o *v19; // x25
  ServantAssetArgs_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v24; // x23
  System_Action_o *v25; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C3F4E4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&ServantAssetArgs_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&Method_SummonControl__showSvtTalk_b__261_0__);
    sub_1C37058(&Method_SummonControl_close__);
    sub_1C37058(&StringLiteral_3471/*"CLICK_OK"*/);
    byte_4C3F4E4 = 1;
  }
  entity = 0;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_40;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_1C372BC(Instance);
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_40;
  userSvtId = v7->fields.userSvtId;
  objectId = v7->fields.objectId;
  limitCount = v7->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v11 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v11,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
      || SvtType__IsCommandCode(v7->fields.type, 0) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3471/*"CLICK_OK"*/, 0);
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
    v13 = 0;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v11,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_40;
    v13 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0);
  if ( !MasterData_object )
LABEL_40:
    sub_1C372B4(Instance);
  v14 = (int)Instance;
  v15 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0);
  if ( v15 && (v16 = ServantVoiceEntity__GetSummonScriptId(v15, v14, 0)) != 0 )
  {
    summonScriptId = v16;
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__261_0__, 0);
    if ( !v18 )
      goto LABEL_40;
    ScriptManager__PlayGacha_44468564(
      (ScriptManager_o *)v18,
      (UserServantEntity_o *)v13,
      objectId,
      limitCount,
      0,
      1,
      v19,
      0,
      0,
      summonScriptId,
      0);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) )
    {
      v20 = (ServantAssetArgs_o *)sub_1C372A4(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_46617332(v20, objectId, limitCount, 0, 0, 0, 0);
      this->fields.battleAssetArgs = v20;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.battleAssetArgs, (int32_t)v20, v21, v22);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0);
    }
    v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_SummonControl_close__, 0);
    if ( !v24 )
      goto LABEL_40;
    ScriptManager__PlayGacha_44468564(
      (ScriptManager_o *)v24,
      (UserServantEntity_o *)v13,
      objectId,
      limitCount,
      0,
      1,
      v25,
      0,
      0,
      0,
      0);
  }
}


void SummonControl__CoWaitCreatedMBannerSpringPanel_d__187___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SummonControl__CoWaitCreatedMBannerSpringPanel_d__187__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *v4; // x19
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v4 = this;
  if ( (byte_4C3F52F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F52F = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    mBannerSpringPanelRetryCount = _4__this->fields.mBannerSpringPanelRetryCount;
    _4__this->fields.mBannerSpringPanelRetryCount = mBannerSpringPanelRetryCount + 1;
    if ( mBannerSpringPanelRetryCount >= 10 )
    {
LABEL_14:
      spring_5__2 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(spring_5__2, 0, 0) )
      {
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0)) == 0)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0),
              !summonMBannerCenterChild) )
        {
LABEL_22:
          sub_1C372B4(this);
        }
        UICenterOnChild__CenterOn_49148688(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v4->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._spring_5__2, (int32_t)Component_object, v9, v10);
    v11 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v12, v13);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v4->fields._spring_5__2 = 0;
    v4->fields.__1__state = -1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._spring_5__2, 0, v2, v3);
    if ( !_4__this )
      goto LABEL_22;
    goto LABEL_9;
  }
  return 0;
}


Il2CppObject *SummonControl__CoWaitCreatedMBannerSpringPanel_d__187__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__187__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *SummonControl__CoWaitCreatedMBannerSpringPanel_d__187__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SummonControl__CoWaitCreatedMBannerSpringPanel_d__187__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__187_o *this,
        const MethodInfo *method)
{
  ;
}


void SummonControl__WaitBattleChrLoad_d__263___ctor(
        SummonControl__WaitBattleChrLoad_d__263_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SummonControl__WaitBattleChrLoad_d__263__MoveNext(
        SummonControl__WaitBattleChrLoad_d__263_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  PlayMakerFSM_o *fsm; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C3F530 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C37058(&StringLiteral_3471/*"CLICK_OK"*/);
    byte_4C3F530 = 1;
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
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    this->fields._wait_5__2 = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._wait_5__2, (int32_t)v5, v6, v7);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)wait_5__2, v9, v10);
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
    ServantAssetLoadManager__unloadServant(battleAssetArgs, 0);
    _4__this->fields.battleAssetArgs = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.battleAssetArgs, 0, v15, v16);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1C372B4(fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3471/*"CLICK_OK"*/, 0);
  return 0;
}


Il2CppObject *SummonControl__WaitBattleChrLoad_d__263__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__263_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SummonControl__WaitBattleChrLoad_d__263__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__263_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_SummonControl__WaitBattleChrLoad_d__263_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *SummonControl__WaitBattleChrLoad_d__263__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__263_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SummonControl__WaitBattleChrLoad_d__263__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__263_o *this,
        const MethodInfo *method)
{
  ;
}


void SummonControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F529 & 1) == 0 )
  {
    sub_1C37058(&SummonControl___c_TypeInfo);
    byte_4C3F529 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SummonControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SummonControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c___BonusSelectServantSelectDialog_b__315_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F52B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F52B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void SummonControl___c___ShowConfirmDialog_b__230_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F52A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F52A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void SummonControl___c___exeFormation_b__163_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0);
}


void SummonControl___c___openAfterSummonInfo_b__162_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
}


int32_t SummonControl___c___openSvtEqInfo_b__164_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.num - b->fields.num;
}


void SummonControl___c___setSummonResultList_b__271_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl___c___showServantDialog_b__266_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t SummonControl___c___showSummonEffect_b__254_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}


void SummonControl___c___showSummonResultInfo_b__270_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl___c__DisplayClass164_0___ctor(
        SummonControl___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass164_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  void *Request_object; // x0
  int32_t v4; // w20
  int32_t v5; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_4C3F52C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_3435/*"CLEAR_TUTORIAL"*/);
    byte_4C3F52C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_21;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_21;
  v4 = 0;
  while ( v4 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v4,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Request_object )
      goto LABEL_21;
    if ( *((_DWORD *)Request_object + 6) != 1 )
    {
      Request_object = this->fields.tutoList;
      if ( !Request_object )
        goto LABEL_21;
      Request_object = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Request_object,
                         v4,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_21;
      v5 = *((_DWORD *)Request_object + 6);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetGachaFlg(v5, 0);
    }
    Request_object = this->fields.tutoList;
    ++v4;
    if ( !Request_object )
      goto LABEL_21;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0 )
LABEL_21:
    sub_1C372B4(Request_object);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3435/*"CLEAR_TUTORIAL"*/, 0);
}


void SummonControl___c__DisplayClass179_0___ctor(
        SummonControl___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass179_0___createSummonInfo_b__0(
        SummonControl___c__DisplayClass179_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1C372B4(this);
  UIWidget__set_width((UIWidget_o *)sprite, this->fields.slSpriteSize, 0);
  UIWidget__set_height((UIWidget_o *)sprite, this->fields.slSpriteSize, 0);
}


void SummonControl___c__DisplayClass282_0___ctor(
        SummonControl___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass282_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass282_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass282_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C3F52D & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass282_0_o *)sub_1C37058(&StringLiteral_5785/*"EXECUTE"*/);
    byte_4C3F52D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass282_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5785/*"EXECUTE"*/, 0);
}


void SummonControl___c__DisplayClass283_0___ctor(
        SummonControl___c__DisplayClass283_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass283_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass283_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass283_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C3F52E & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass283_0_o *)sub_1C37058(&StringLiteral_5785/*"EXECUTE"*/);
    byte_4C3F52E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass283_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5785/*"EXECUTE"*/, 0);
}


void SummonControl___c__DisplayClass287_0___ctor(
        SummonControl___c__DisplayClass287_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass287_0___getFriendPointIndex_b__0(
        SummonControl___c__DisplayClass287_0_o *this,
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
    sub_1C372BC(this);
  v5 = oldGachas->m_Items[i];
  if ( !v5 )
LABEL_8:
    sub_1C372B4(this);
  return info->fields.id == v5->fields.id && v5->fields.type == 3;
}


void SummonControl___c__DisplayClass288_0___ctor(
        SummonControl___c__DisplayClass288_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass288_0___GetGachaIndex_b__0(
        SummonControl___c__DisplayClass288_0_o *this,
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
    sub_1C372BC(this);
  v5 = oldGachas->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_1C372B4(this);
  return info->fields.id == v5->fields.id;
}


void SummonControl___c__DisplayClass302_0___ctor(
        SummonControl___c__DisplayClass302_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass302_0___OnClickSummonListBtn_b__1(
        SummonControl___c__DisplayClass302_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  struct GachaEntity_o *gachaInfo; // x8

  if ( !x || (gachaInfo = this->fields.gachaInfo) == 0 )
    sub_1C372B4(this);
  return x->fields.id == gachaInfo->fields.id;
}


void SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}