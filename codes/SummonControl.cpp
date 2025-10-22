void SummonControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct SummonControl_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C532AC & 1) == 0 )
  {
    sub_1C3E564(&SummonControl_TypeInfo);
    sub_1C3E564(&StringLiteral_3209/*"BonusSelectSummonSaveKey"*/);
    byte_4C532AC = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v4 = StringLiteral_3209/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3209/*"BonusSelectSummonSaveKey"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v4, v1, v2);
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

  if ( (byte_4C532AB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_GachaSubEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&StringLiteral_19753/*"gachaIds"*/);
    sub_1C3E564(&StringLiteral_6870/*"FrequencyType"*/);
    byte_4C532AB = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C131B0;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C135C0;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_C13330;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v5 = StringLiteral_19753/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19753/*"gachaIds"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.DETAIL_SCRIPT_IDS, v5, v2, v3);
  v6 = StringLiteral_6870/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6870/*"FrequencyType"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.DETAIL_SCRIPT_TYPE, v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.gachaIdToMiniBannerIndex = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.gachaIdToMiniBannerIndex, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.vaildGachaList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GachaSubEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.gachaSubEntityList, (int32_t)v18, v19, v20);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_o *name; // x1
  int8x16_t v13; // q0
  int32_t ticketItemId; // w8
  System_String_o *WebViewAddress_41428188; // x0
  System_String_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t gachaGroupId; // w8
  int32_t gachaListGroupId; // w8
  int32_t maxDrawNum; // w8
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  DataManager_o *v27; // x24
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  intptr_t v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  intptr_t v39; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C53235 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaSubEntity__Add__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&VaildGachaInfo_TypeInfo);
    byte_4C53235 = 1;
  }
  entity = 0;
  v7 = sub_1C3E7B0(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v7, 0);
  if ( !data || !v7 )
    goto LABEL_32;
  *(_DWORD *)(v7 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v7 + 24) = name;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)name, v10, v11);
  *(_DWORD *)(v7 + 32) = data->fields.beforeGachaId;
  v13 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCu));
  *(int8x16_t *)(v7 + 36) = vextq_s8(v13, v13, 0xCu);
  *(_DWORD *)(v7 + 52) = data->fields.type;
  ticketItemId = data->fields.ticketItemId;
  *(_BYTE *)(v7 + 64) = 1;
  *(_BYTE *)(v7 + 84) = 0;
  *(_DWORD *)(v7 + 60) = ticketItemId;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_41428188 = NetworkManager__getWebViewAddress_41428188(1, 0);
  v16 = System_String__Concat_63636468(WebViewAddress_41428188, data->fields.detailUrl, 0);
  *(_QWORD *)(v7 + 88) = v16;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 88), (int32_t)v16, v17, v18);
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
  v22 = sub_1C3E60C(int___TypeInfo, 0);
  *(_QWORD *)(v7 + 72) = v22;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 72), v22, v23, v24);
  *(_OWORD *)(v7 + 128) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v7 + 144) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    *(_BYTE *)(v7 + 84) = data->fields.freeDrawFlag > 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0);
    if ( Instance )
    {
      v27 = Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_32;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v29 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_32;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v27,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v31 + 32) = v27;
        sub_1C3E508((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v27, v25, v26);
      }
      *(_DWORD *)(v7 + 80) = HIDWORD(v27->fields.m_CachedPtr);
      *(_DWORD *)(v7 + 40) = HIDWORD(v27->fields.m_CancellationTokenSource);
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
    sub_1C3E508((CGThumbnailListItem_o *)(v7 + 72), (int32_t)adjustIds, v25, v26);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaDetailMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         data->fields.id,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_32;
    *(_BYTE *)(v7 + 148) = GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, (int64_t *)(v7 + 152), 0);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v36 = Instance->fields.m_CachedPtr,
        v37 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v36) )
  {
LABEL_32:
    sub_1C3E7C0(Instance, v9);
  }
  v38 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v7,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * v38;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v38 + 1;
    *(_QWORD *)(v39 + 32) = v7;
    sub_1C3E508((CGThumbnailListItem_o *)(v39 + 32), v7, v34, v35);
  }
}


void SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  SummonInfoDlgComponent_CallbackFunc_o *v9; // x23

  if ( (byte_4C53270 & 1) == 0 )
  {
    sub_1C3E564(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_4C53270 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0)) == 0
    || (v6 = (System_String_o *)*((_QWORD *)Instance + 3),
        v7 = (System_String_o *)*((_QWORD *)Instance + 4),
        infoDlgInfo = this->fields.infoDlgInfo,
        v9 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1C3E7C0(Instance, v4);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v6, v7, v9, 0);
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
  if ( (byte_4C532A2 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_4C532A2 = 1;
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
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C532A1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3353/*"CHECK_STONE"*/);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/);
    byte_4C532A1 = 1;
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
    sub_1C3E7C0(this, method);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v7 = (System_String_o **)&StringLiteral_3353/*"CHECK_STONE"*/;
  else
    v7 = (System_String_o **)&StringLiteral_2951/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, *v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectCloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C532A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_1C3E564(&StringLiteral_6977/*"GO_BUY_STONE"*/);
    byte_4C532A7 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  v6 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
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
    sub_1C3E7C0(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
  SummonControl__BonusSelectServantSelectDialog(this, v8);
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

  if ( (byte_4C532A5 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SummonControl_GoBuyStone__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C532A5 = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_1C3E7C0(fsm, res);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


void SummonControl__BonusSelectServantSelectDialog(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x21

  if ( (byte_4C532A3 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BonusSelectSummonAssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__BonusSelectServantSelectDialog_b__317_0__);
    byte_4C532A3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v7 = (BonusSelectSummonAssetManager_o *)sub_1C3E7B0(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v7, 0);
        this->fields.bonusSelectAssetManager = v7;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v7, v8, v9);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__317_0__,
        0);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v10, 0);
        return;
      }
    }
LABEL_15:
    sub_1C3E7C0(Master_object, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectSummonConfirmResult(SummonControl_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v4; // w20
  SummonControl_o *v5; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v4 = result;
  v5 = this;
  if ( (byte_4C53264 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C53264 = 1;
  }
  selectBonusData = 0;
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
      SummonControl__ShowConfirmDialogProcess(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_1C3E508(
        (CGThumbnailListItem_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        result,
        (int32_t)v7,
        v8);
      goto LABEL_10;
    }
LABEL_14:
    sub_1C3E7C0(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v6; // x8

  if ( (byte_4C532A4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_2952/*"BONUS_SELECT_SERVANT_SELECT"*/);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C532A4 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0) )
  {
    sub_1C3E7C0(confirmDlgInfo, res);
  }
  v6 = (System_String_o **)&StringLiteral_2952/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v6 = (System_String_o **)&StringLiteral_3442/*"CLICK_CANCEL"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, *v6, 0);
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
  Il2CppObject *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  System_Action_o *v14; // x25

  if ( (byte_4C53268 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaSubEntity__Find__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_Predicate_GachaSubEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_SummonSceneRefresh__);
    sub_1C3E564(&Method_SummonControl__CheckFriendPointSummonUpdate_b__234_0__);
    sub_1C3E564(&StringLiteral_14839/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/);
    sub_1C3E564(&StringLiteral_14838/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/);
    byte_4C53268 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v8 = (Il2CppObject *)OpenEntity;
  v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_GachaSubEntity__TypeInfo);
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
          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v8 != v10 )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_14839/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_14838/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0);
    v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0);
    if ( v11 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v11, v12, v13, v14, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return v8 != v10;
    }
LABEL_13:
    sub_1C3E7C0(Instance, v4);
  }
  return v8 != v10;
}


bool SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1C3E7C0(this, 0);
  max_length = ids->max_length;
  v5 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_1C3E7C8(this, ids);
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
  if ( (byte_4C53287 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9265/*"NEXT_SVT"*/);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_6418/*"FINAL_SVT"*/);
    byte_4C53287 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v4 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v4;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0 )
    sub_1C3E7C0(this, method);
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
  __int64 v10; // x1
  Il2CppObject *current; // x21
  int32_t monitor; // w22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  int32_t v15; // w22
  _DWORD *v16; // x8
  int32_t klass; // w24
  int64_t klass_low; // x23
  _BOOL8 IsOpen; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w21
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C532A8 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    this = (SummonControl_o *)sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C532A8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
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
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
LABEL_37:
    sub_1C3E7C0(this, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)EventTutorialEntity,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C3E7C0(v9, v10);
    monitor = (int32_t)v29.fields._current[1].monitor;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__GetGachaFlg(monitor, 0) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[3].monitor, 0);
      if ( IsNullOrEmpty )
      {
        v15 = 0;
      }
      else
      {
        v16 = current[3].monitor;
        if ( !v16 )
          sub_1C3E7C0(IsNullOrEmpty, v14);
        if ( !v16[6] )
          sub_1C3E7C8(IsNullOrEmpty, v14);
        v15 = v16[8];
      }
      klass = (int32_t)current[3].klass;
      klass_low = SLODWORD(current[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(klass, v15, klass_low, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v8 )
          sub_1C3E7C0(IsOpen, v20);
        items = v8->fields._items;
        v24 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1C3E7C0(IsOpen, v20);
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            current,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v26[4] = (Il2CppClass *)current;
          sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), (int32_t)current, v21, v22);
        }
        if ( !EventTutorialEntity__HasFlag((EventTutorialEntity_o *)current, 2, 0) )
        {
          v27 = (int32_t)current[1].monitor;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          TutorialFlag__SetGachaFlg(v27, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
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
  BalanceConfig_c *v6; // x8
  int v7; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int64_t QpMax; // x9
  struct BalanceConfig_StaticFields *v12; // x10
  int v13; // w10
  int64_t v14; // x23
  int64_t qp; // x21
  struct BalanceConfig_StaticFields *v16; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v20; // x21
  System_Action_o *v21; // x22
  SummonLimitWarningDlgComponent_o *v22; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v23; // x21
  System_Action_o *v24; // x22
  SummonLimitWarningDlgComponent_o *v25; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v26; // x21
  System_Action_o *v27; // x22

  if ( (byte_4C53269 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SummonControl_ShowConfirmDialog__);
    sub_1C3E564(&Method_SummonControl_autoSellSettingChange__);
    sub_1C3E564(&Method_SummonControl_limitManaConfirmResult__);
    sub_1C3E564(&Method_SummonControl_limitQpConfirmResult__);
    byte_4C53269 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_28;
  v5 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0);
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
    v13 = 10 * FriendPointSummonQpWarning;
  }
  else
  {
    v13 = gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
  }
  v14 = QpMax - v13;
  if ( !v7 )
    return 0;
  qp = v5->fields.qp;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = BalanceConfig_TypeInfo;
  }
  v16 = v6->static_fields;
  if ( qp >= v16->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v20 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0);
    v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v20, v21, 0);
  }
  else
  {
    if ( v5->fields.qp < v14 )
    {
      mana = v5->fields.mana;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v16 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v16->UserItemMax )
        return 0;
      v25 = this->fields.limitWarningDlgInfo;
      v26 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0);
      v27 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
      if ( v25 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v25, v26, v27, 0);
        return 1;
      }
LABEL_28:
      sub_1C3E7C0(SelfUserGame, v4);
    }
    v22 = this->fields.limitWarningDlgInfo;
    v23 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0);
    v24 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0);
    if ( !v22 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v22, v23, v24, 0);
  }
  return 1;
}


void SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4C532A0 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11150/*"RETURN_MAIN"*/);
    sub_1C3E564(&StringLiteral_11152/*"RETURN_RESULT"*/);
    byte_4C532A0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C3E7C0(0, method);
  if ( this->fields.isResult )
    v4 = (System_String_o **)&StringLiteral_11152/*"RETURN_RESULT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11150/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, *v4, 0);
}


void SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_c *v2; // x0
  Il2CppObject *String_71300376; // x19
  System_Object_array *v4; // x19
  System_Collections_Generic_List_object__o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C53263 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&SummonControl_TypeInfo);
    byte_4C53263 = 1;
  }
  v2 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v2 = SummonControl_TypeInfo;
  }
  String_71300376 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_71300376(
                                      v2->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_71300376, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__DeserializeArray_object_(
           String_71300376,
           (const MethodInfo_3168FB8 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v4 )
      sub_1C3E7C0(v6, v7);
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

  if ( (byte_4C53232 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53232 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v7);
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
  StoryGachaAdjustData_o *v17; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_4C53231 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    this = (SummonControl_o *)sub_1C3E564(&Method_SummonControl_SlotCompare__);
    byte_4C53231 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C3E7C0(v9, v10);
    if ( SummonControl__CheckStoryGachaAdjustData(
           (SummonControl_o *)v9,
           &v17,
           *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&word_10),
           v11) )
    {
      v14 = v17;
    }
    else
    {
      v14 = 0;
      v17 = 0;
    }
    SummonControl__AddVaildGachaInfoList(v2, (GachaEntity_o *)current, v14, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
  v15 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v16 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v16, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0);
  if ( !v15 )
LABEL_21:
    sub_1C3E7C0(this, method);
  System_Collections_Generic_List_object___Sort_58421028(
    v15,
    v16,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C5325F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5325F = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5323D & 1) == 0 )
  {
    sub_1C3E564(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_TypeInfo);
    byte_4C5323D = 1;
  }
  v3 = sub_1C3E7B0(SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__188___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C5326D & 1) == 0 )
  {
    sub_1C3E564(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C3E564(&Method_SummonControl_ConfirmMessageOpen__);
    sub_1C3E564(&Method_SummonControl_SetDispBtn__);
    sub_1C3E564(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C3E564(&Method_SummonControl_confirmCautionResult__);
    sub_1C3E564(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C3E564(&StringLiteral_23507/*"showGroupRemainingDrawNum"*/);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5326D = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method);
  v6 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_SummonControl_ConfirmMessageOpen__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v28 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v28,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0);
                v29 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v29,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0);
                v30 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
  v8 = this->fields.gachaParamData;
  if ( !v8 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v8->fields.gachaId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaDetailMaster___);
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
                                                    (System_String_o *)StringLiteral_23507/*"showGroupRemainingDrawNum"*/,
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
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
  v32 = this->fields.gachaParamData;
  if ( !v32 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v32->fields.gachaId,
                                                    (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  v38 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
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
  v42 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v42,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_1C3E7C0(confirmDlgInfo, result);
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
  __int64 v10; // x1

  if ( (byte_4C53281 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__DialogCallBack_b__269_0__);
    byte_4C53281 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__269_0__, 0);
  if ( !v6 )
    sub_1C3E7C0(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C53282 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3497/*"CLOSE"*/);
    byte_4C53282 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3497/*"CLOSE"*/, 0);
}


void SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C5325E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C5325E = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0) )
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *Item; // x0
  int32_t v9; // w21
  System_Collections_Generic_List_object__o *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x23
  int32_t v12; // w24
  Il2CppObject *v13; // x22
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C5329D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    byte_4C5329D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1C3E7C0(Item, v5);
  v9 = 0;
  while ( v9 < Item->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v9,
                                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v10 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v11 = Item;
      v12 = 0;
      v13 = (Il2CppObject *)Item;
      while ( v12 < v10->fields._size )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v10,
                                                              v12,
                                                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v11 && Item )
        {
          if ( LODWORD(v11->fields._items) != LODWORD(Item->fields._items)
            && LODWORD(v11[1].monitor) == LODWORD(Item[1].monitor) )
          {
            if ( !v13 )
              goto LABEL_25;
            if ( SHIDWORD(v13[2].klass) < SHIDWORD(Item->fields._syncRoot) )
              v13 = (Il2CppObject *)Item;
          }
          v10 = (System_Collections_Generic_List_object__o *)*baseGachaList;
          ++v12;
          if ( *baseGachaList )
            continue;
        }
        goto LABEL_25;
      }
      if ( v4 )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                              v4,
                                                              v13,
                                                              (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          items = v4->fields._items;
          v15 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              v13,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v6, v7);
          }
        }
        Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
        ++v9;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)baseGachaList, (int32_t)v4, v6, v7);
}


float SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C53221 & 1) == 0 )
  {
    sub_1C3E564(&FSUtility_TypeInfo);
    byte_4C53221 = 1;
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

  if ( (byte_4C53246 & 1) == 0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53246 = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C532C1 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532C1 = 1;
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
  if ( !byte_4C532C1 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532C1 = 1;
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
  if ( !byte_4C532C2 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532C2 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v5, v6);
  if ( !v7 )
    goto LABEL_31;
  if ( SLODWORD(v7->max_length) < 2 )
    return 0;
  v3 = v7->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0)) == 0 )
LABEL_31:
    sub_1C3E7C0(v3, method);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1C3E7C8(v3, method);
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
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 *v19; // x26
  int32_t v20; // w27
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x28
  int monitor; // w9
  int klass; // w9
  __int64 v24; // x8
  System_Predicate_object__o **v25; // x23
  System_Predicate_object__o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C53293 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass290_0__GetGachaIndex_b__0__);
    sub_1C3E564(&SummonControl___c__DisplayClass290_0_TypeInfo);
    byte_4C53293 = 1;
  }
  entity = 0;
  v14 = sub_1C3E7B0(SummonControl___c__DisplayClass290_0_TypeInfo);
  SummonControl___c__DisplayClass290_0___ctor((SummonControl___c__DisplayClass290_0_o *)v14, 0);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = oldGachas,
        v19 = (__int64 *)(v14 + 16),
        sub_1C3E508((CGThumbnailListItem_o *)(v14 + 16), (int32_t)oldGachas, v17, v18),
        (vaildGachaList = this->fields.vaildGachaList) == 0) )
  {
LABEL_27:
    sub_1C3E7C0(vaildGachaList, v16);
  }
  v20 = 0;
  while ( v20 < *((_DWORD *)vaildGachaList + 6) )
  {
    gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v20,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList || !gachaMst )
      goto LABEL_27;
    vaildGachaList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               gachaMst,
                               &entity,
                               *((_DWORD *)vaildGachaList + 4),
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
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
      LODWORD(vaildGachaList) = v20;
      return (int)vaildGachaList;
    }
    vaildGachaList = this->fields.vaildGachaList;
    ++v20;
    if ( !vaildGachaList )
      goto LABEL_27;
  }
  v24 = *v19;
  if ( *v19 )
  {
    *(_DWORD *)(v14 + 24) = oldCurrentIdx;
    v25 = (System_Predicate_object__o **)(v14 + 32);
    while ( oldCurrentIdx < *(_DWORD *)(v24 + 24) )
    {
      v26 = *v25;
      v27 = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( !*v25 )
      {
        v26 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v26,
          (Il2CppObject *)v14,
          Method_SummonControl___c__DisplayClass290_0__GetGachaIndex_b__0__,
          0);
        *(_QWORD *)(v14 + 32) = v26;
        sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v26, v28, v29);
      }
      if ( v27 )
      {
        vaildGachaList = (void *)System_Collections_Generic_List_object___FindIndex(
                                   v27,
                                   (System_Predicate_T__o *)v26,
                                   (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
        if ( ((unsigned int)vaildGachaList & 0x80000000) == 0 )
          return (int)vaildGachaList;
        v24 = *(_QWORD *)(v14 + 16);
        oldCurrentIdx = *(_DWORD *)(v14 + 24) + 1;
        *(_DWORD *)(v14 + 24) = oldCurrentIdx;
        if ( v24 )
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
    sub_1C3E7C0(0, *(_QWORD *)&groupId);
  return GachaMaster__GetGroupRemainingDrawNum(gachaMst, groupId, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t SummonControl__GetMiniBannerIndex(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *gachaIdToMiniBannerIndex; // x0
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C532A9 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    byte_4C532A9 = 1;
  }
  value = 0;
  gachaIdToMiniBannerIndex = this->fields.gachaIdToMiniBannerIndex;
  if ( !gachaIdToMiniBannerIndex )
    sub_1C3E7C0(0, *(_QWORD *)&gachaId);
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         gachaIdToMiniBannerIndex,
         gachaId,
         &value,
         (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  int32_t gachaId; // w25
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v18; // x27
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4C532A6 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SummonControl_BonusSelectCloseShotStoneDlg__);
    sub_1C3E564(&Method_SummonControl_GoBuyStone__);
    sub_1C3E564(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C3E564(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    byte_4C532A6 = 1;
  }
  if ( res )
  {
    v5 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_SummonControl_GoBuyStone__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v8 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
          v18 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v18,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0),
          !confirmDlgInfo) )
    {
      sub_1C3E7C0(v10, v11);
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

  if ( (byte_4C5327A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C5327A = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4C5322C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6396/*"FAIL_LOAD"*/);
    sub_1C3E564(&StringLiteral_17546/*"btn_sumonhistory"*/);
    sub_1C3E564(&StringLiteral_5443/*"END_LOAD"*/);
    sub_1C3E564(&StringLiteral_17545/*"btn_summon_list"*/);
    byte_4C5322C = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_10;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6396/*"FAIL_LOAD"*/, 0);
  }
  this->fields.bannerAssetData = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bannerAssetData, (int32_t)data, (int32_t)method, v3);
  SummonControl__createSummonInfo(this, v7);
  SummonControl__setPositionByWarId(this, v8);
  SummonControl__ResetArrowTween(this, v9);
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17546/*"btn_sumonhistory"*/, v10);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17546/*"btn_sumonhistory"*/,
          0),
        fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17545/*"btn_summon_list"*/, v11),
        !this->fields.summonInfoCtr)
    || (SummonInfoControl__SetSummonListSprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17545/*"btn_summon_list"*/,
          0),
        (fsm = this->fields.fsm) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5443/*"END_LOAD"*/, 0);
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

  if ( (byte_4C532AA & 1) == 0 )
  {
    sub_1C3E564(&PurchaseBehaviour_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C532AA = 1;
  }
  if ( !pauseStatus )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v6);
    if ( !BYTE1(Instance[2].klass) && !this->fields.isShowingSummonEffect )
    {
      if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
      PurchaseBehaviour__ActivateExternal(0);
    }
  }
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
  if ( (byte_4C53239 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_3320/*"CHANGE_BANNER"*/);
    byte_4C53239 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_24;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_24;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
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
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.currentBannerComp, (int32_t)v9, v4, v5);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)bgRoot;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.currentGachaInfo, (int32_t)bgRoot, v12, v13);
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
          UICenterOnChild__CenterOn_49221928(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0);
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
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C5323A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    this = (SummonControl_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5323A = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_17;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
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
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.currentSummonMBannerComponent, (int32_t)v9, v4, v5);
    v2->fields.currentGachaInfo = v6;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.currentGachaInfo, (int32_t)v6, v11, v12);
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
          UICenterOnChild__CenterOn_49221928(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C3E7C0(this, method);
  }
}


void SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4C53296 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C53296 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C3E7C0(0, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
}


void SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v7; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v9; // x0
  struct VaildGachaInfo_o *v10; // x8
  System_String_o *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x19
  Il2CppObject *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x21
  void *monitor; // x8
  __int64 v19; // x9
  _BOOL8 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _QWORD *v30; // x8
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C53299 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C3E564(&Method_SummonControl_OnClickHelp__);
    sub_1C3E564(&StringLiteral_15967/*"[]"*/);
    byte_4C53299 = 1;
  }
  v3 = Method_SummonControl_OnClickHelp__;
  memset(&v32, 0, sizeof(v32));
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  v9 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v9, 0);
  if ( !v5 )
    goto LABEL_37;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)EventTutorialEntity,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v10 = this->fields.currentGachaInfo;
  if ( !v10 )
    goto LABEL_37;
  v11 = System_Int32__ToString((int)v10 + 16, 0);
  v12 = (System_Collections_Generic_IEnumerable_T__o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v11, 0);
  System_Collections_Generic_List_object___AddRange(
    v5,
    v12,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v14 = 0;
  v32 = v31;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_1C3E7C0(v15, v16);
    if ( !LODWORD(v32.fields._current[3].klass) )
    {
      monitor = v32.fields._current[2].monitor;
      if ( !monitor )
        sub_1C3E7C0(v15, v16);
      v19 = *((_QWORD *)monitor + 3);
      if ( !v19 )
        goto LABEL_21;
      if ( !(_DWORD)v19 )
        sub_1C3E7C8(v15, v16);
      v20 = System_String__op_Equality(*((System_String_o **)monitor + 4), (System_String_o *)StringLiteral_15967/*"[]"*/, 0);
      if ( v20 )
      {
LABEL_21:
        if ( !v14 )
          v14 = current;
      }
      else
      {
        if ( !v13 )
          sub_1C3E7C0(v20, v21);
        items = v13->fields._items;
        v25 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1C3E7C0(v20, v21);
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            current,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v27[4] = (Il2CppClass *)current;
          sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), (int32_t)current, v22, v23);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  if ( !v13 )
    goto LABEL_37;
  if ( v14 && !v13->fields._size )
  {
    EventTutorialEntity = (System_Collections_Generic_List_EventTutorialEntity__o *)v13->fields._items;
    v30 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v13->fields._version;
    if ( EventTutorialEntity )
    {
      if ( EventTutorialEntity->fields._size )
      {
        v13->fields._size = 1;
        EventTutorialEntity->fields._syncRoot = v14;
        sub_1C3E508((CGThumbnailListItem_o *)&EventTutorialEntity->fields._syncRoot, (int32_t)v14, v28, v29);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          v14,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      goto LABEL_31;
    }
LABEL_37:
    sub_1C3E7C0(EventTutorialEntity, v7);
  }
LABEL_31:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v13,
    0,
    0);
}


void SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4C5329A & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_GachaHistoryRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SummonControl_OnClickHisotry__);
    sub_1C3E564(&Method_SummonControl__OnClickHisotry_b__302_0__);
    byte_4C5329A = 1;
  }
  v3 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickHisotry__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_SummonControl__OnClickHisotry_b__302_0__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1C3E7C0(Request_object, v7);
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
  if ( (byte_4C5323E & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_OnClickMiniBanner__);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_12793/*"SetBannerCenter"*/);
    byte_4C5323E = 1;
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
        UnityEngine_MonoBehaviour__CancelInvoke_71326444(
          (UnityEngine_MonoBehaviour_o *)v6,
          (System_String_o *)StringLiteral_12793/*"SetBannerCenter"*/,
          0);
        if ( isPlaySe )
        {
          v8 = Method_SummonControl_OnClickMiniBanner__;
          if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickMiniBanner__);
          v9 = (System_Reflection_MethodBase_o *)sub_1C3E548(v8, v8[4]);
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
                    UICenterOnChild__CenterOn_49221928(centerChild, (UnityEngine_Transform_o *)this, 1, 0);
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
                          UICenterOnChild__CenterOn_49221928(
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
    sub_1C3E7C0(this, *(_QWORD *)&moveIdx);
  if ( currentGachaInfo->fields.isDispSummonListDialog )
    SummonControl__OnClickSummonListBtn(v6, *(const MethodInfo **)&moveIdx);
}


void SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct PossessionInfoDialog_o *possessionInfoDialog; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  v2 = this;
  if ( (byte_4C5329B & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1C3E564(&Method_SummonControl_OnClickPossessionInfo__);
    byte_4C5329B = 1;
  }
  possessionInfoDialog = v2->fields.possessionInfoDialog;
  if ( !possessionInfoDialog )
    goto LABEL_11;
  if ( possessionInfoDialog->fields.baseState )
    return;
  v4 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickPossessionInfo__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  this = (SummonControl_o *)v2->fields.possessionInfoDialog;
  if ( !this
    || (PossessionInfoDialog__Init((PossessionInfoDialog_o *)this, method),
        (currentGachaInfo = v2->fields.currentGachaInfo) == 0)
    || (this = (SummonControl_o *)v2->fields.possessionInfoDialog) == 0 )
  {
LABEL_11:
    sub_1C3E7C0(this, method);
  }
  PossessionInfoDialog__Open((PossessionInfoDialog_o *)this, currentGachaInfo->fields.id, v6);
}


void SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C5325A & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5325A = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, v6),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0) )
  {
    sub_1C3E7C0(confirmDlgInfo, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
  SummonControl__OpenFragmentsExchangeDialog(this, v8);
}


void SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C5325B & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_OnClickStoneFragmentsInfo__);
    byte_4C5325B = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C53298 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SummonControl__OnClickSummonDetail_b__300_0__);
    byte_4C53298 = 1;
  }
  if ( !this->fields.isSummonDetailOpening )
  {
    this->fields.isSummonDetailOpening = 1;
    summonInfoCtr = this->fields.summonInfoCtr;
    v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__OnClickSummonDetail_b__300_0__, 0);
    if ( !summonInfoCtr )
      sub_1C3E7C0(v5, v6);
    SummonInfoControl__OnClickDetail(summonInfoCtr, v4, 0);
  }
}


void SummonControl__OnClickSummonListBtn(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct SummonListDialog_o *summonListDialog; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *vaildGachaList; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *useGachaData; // x20
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Collections_ICollection_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t current; // w1
  int32x2_t **v18; // x20
  System_Collections_Generic_List_object__o *v19; // x22
  System_Predicate_object__o *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  GachaMaster_o *gachaMst; // x0
  __int64 v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32x2_t *v31; // x8
  signed __int32 v32; // w9
  System_Collections_Generic_List_object__o *v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  SummonControl_o *v38; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_object__o *v40; // x20
  System_Comparison_T__o *v41; // x21
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v43; // x9
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_object__o *v46; // [xsp+38h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4C5329C & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_GachaEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GachaEntity___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C3E564(&System_Func_GachaEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor___78153040);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&Method_SummonControl_OnClickSummonListBtn__);
    sub_1C3E564(&Method_SummonControl_SlotCompare__);
    sub_1C3E564(&Method_SummonControl__OnClickSummonListBtn_b__304_0__);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass304_0__OnClickSummonListBtn_b__1__);
    sub_1C3E564(&SummonControl___c__DisplayClass304_0_TypeInfo);
    this = (SummonControl_o *)sub_1C3E564(&VaildGachaInfo_TypeInfo);
    byte_4C5329C = 1;
  }
  memset(&v45, 0, sizeof(v45));
  summonListDialog = v2->fields.summonListDialog;
  if ( !summonListDialog )
    goto LABEL_36;
  if ( summonListDialog->fields.baseState )
    return;
  v4 = Method_SummonControl_OnClickSummonListBtn__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickSummonListBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_SummonControl_OnClickSummonListBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  vaildGachaList = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.vaildGachaList;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v7,
    vaildGachaList,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor___78153040);
  v46 = v7;
  useGachaData = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.useGachaData;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GachaEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, (Il2CppObject *)v2, Method_SummonControl__OnClickSummonListBtn_b__304_0__, 0);
  v10 = System_Linq_Enumerable__Where_object_(
          useGachaData,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v11 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v10,
                                              (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_GachaEntity___);
  this = (SummonControl_o *)BasicHelper__IsNullOrEmpty(v11, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v11 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v44,
        (System_Collections_Generic_List_object__o *)v11,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
      v45 = v44;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v45,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__) )
      {
        v12 = sub_1C3E7B0(SummonControl___c__DisplayClass304_0_TypeInfo);
        SummonControl___c__DisplayClass304_0___ctor((SummonControl___c__DisplayClass304_0_o *)v12, 0);
        if ( !v12 )
          sub_1C3E7C0(v13, v14);
        current = (int32_t)v45.fields._current;
        *(_QWORD *)(v12 + 16) = v45.fields._current;
        v18 = (int32x2_t **)(v12 + 16);
        sub_1C3E508((CGThumbnailListItem_o *)(v12 + 16), current, v15, v16);
        v19 = v46;
        v20 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v20,
          (Il2CppObject *)v12,
          Method_SummonControl___c__DisplayClass304_0__OnClickSummonListBtn_b__1__,
          0);
        if ( !v19 )
          sub_1C3E7C0(v21, v22);
        v23 = System_Collections_Generic_List_object___Exists(
                v19,
                (System_Predicate_T__o *)v20,
                (const MethodInfo_37B5A8C *)Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
        if ( !v23 )
        {
          if ( !*v18 )
            sub_1C3E7C0(v23, v24);
          gachaMst = v2->fields.gachaMst;
          if ( !gachaMst )
            sub_1C3E7C0(0, v24);
          if ( GachaMaster__GetGroupRemainingDrawNum(gachaMst, (*v18)[18].n64_i32[0], 0) )
          {
            v26 = sub_1C3E7B0(VaildGachaInfo_TypeInfo);
            VaildGachaInfo___ctor((VaildGachaInfo_o *)v26, 0);
            v31 = *v18;
            if ( !*v18 )
              sub_1C3E7C0(v27, v28);
            if ( !v26 )
              sub_1C3E7C0(v27, v28);
            *(_DWORD *)(v26 + 16) = v31[2].n64_u32[0];
            *(_DWORD *)(v26 + 48) = v31[5].n64_u32[1];
            *(int32x2_t *)(v26 + 36) = vrev64_s32(v31[4]);
            v32 = v31[18].n64_i32[1];
            *(_DWORD *)(v26 + 104) = v32;
            *(_BYTE *)(v26 + 108) = v32 > 0;
            *(_DWORD *)(v26 + 112) = v31[11].n64_u32[1];
            *(_DWORD *)(v26 + 144) = v31[19].n64_u32[1];
            v33 = v46;
            if ( !v46 )
              sub_1C3E7C0(0, v28);
            items = v46->fields._items;
            v35 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
            ++v46->fields._version;
            if ( !items )
              sub_1C3E7C0(v33, v28);
            size = v33->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v33,
                (Il2CppObject *)v26,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v33->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v26;
              sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), v26, v29, v30);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v45,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
      SummonControl__ExtractVaildGachaInfoOnPriority(
        v38,
        (System_Collections_Generic_List_VaildGachaInfo__o **)&v46,
        v39);
      v40 = v46;
      v41 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_VaildGachaInfo__TypeInfo);
      System_Comparison_object____ctor(v41, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0);
      if ( v40 )
      {
        System_Collections_Generic_List_object___Sort_58421028(
          v40,
          v41,
          (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
        goto LABEL_26;
      }
    }
LABEL_36:
    sub_1C3E7C0(this, method);
  }
LABEL_26:
  this = (SummonControl_o *)v2->fields.summonListDialog;
  if ( !this )
    goto LABEL_36;
  SummonListDialog__Init((SummonListDialog_o *)this, 0);
  currentGachaInfo = v2->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_36;
  v43 = v2->fields.vaildGachaList;
  if ( !v43 )
    goto LABEL_36;
  this = (SummonControl_o *)v2->fields.summonListDialog;
  if ( !this )
    goto LABEL_36;
  SummonListDialog__Open(
    (SummonListDialog_o *)this,
    v2->fields.currentMoveIdx,
    currentGachaInfo->fields.summonListGroupId,
    v43->fields._size,
    (System_Collections_Generic_List_VaildGachaInfo__o *)v46,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C53261 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C53261 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0, 0);
}


void SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4C53238 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12793/*"SetBannerCenter"*/);
    byte_4C53238 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71326444(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12793/*"SetBannerCenter"*/,
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
    sub_1C3E7C0(summonInfoCtr, v3);
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
  __int64 v10; // x1

  if ( (byte_4C53297 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__OnEndSummonEffect_b__299_0__);
    byte_4C53297 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__299_0__, 0);
  if ( !v6 )
    sub_1C3E7C0(v9, v10);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0);
}


void SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
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

  if ( (byte_4C5325C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl_RequestStoneFragmentsShop__);
    byte_4C5325C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v7 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v9),
        v11 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo),
        System_Action_int____ctor(v11, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0),
        !Instance) )
  {
LABEL_11:
    sub_1C3E7C0(Master_object, v4);
  }
  if ( v7 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v11, 0);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v11, 0);
}


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

  if ( (byte_4C53260 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl_OnCloseResultDialog__);
    byte_4C53260 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v6);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0);
  if ( !Instance )
LABEL_9:
    sub_1C3E7C0(StoneFragmentsShopEntity, v8);
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
  Il2CppObject *Request_object; // x20
  const MethodInfo *v7; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v9; // x1

  if ( (byte_4C5325D & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SummonControl_EndRequestStoneFragmentsShop__);
    byte_4C5325D = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v7);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1C3E7C0(StoneFragmentsShopEntity, v9);
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

  if ( (byte_4C5322F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5322F = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
    sub_1C3E7C0(leftArrowSprite, method);
  }
}


void SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4C53275 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11084/*"REQUEST_NG"*/);
    sub_1C3E564(&StringLiteral_11085/*"REQUEST_NG_RESULT"*/);
    byte_4C53275 = 1;
  }
  fsm = this->fields.fsm;
  this->fields.isShowingSummonEffect = 0;
  if ( !fsm )
    sub_1C3E7C0(0, method);
  if ( this->fields.isResult )
    v4 = (System_String_o **)&StringLiteral_11085/*"REQUEST_NG_RESULT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_11084/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, *v4, 0);
}


void SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  Il2CppObject *Component_object; // x20
  float v5; // s8
  UICenterOnChild_o *centerChild; // x20
  Il2CppObject *v7; // x20
  float v8; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4C5323B & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5323B = 1;
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
        UICenterOnChild__CenterOn_49221928(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0);
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
           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
      v8 = *(float *)&v7[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v8 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0)) )
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
              UICenterOnChild__CenterOn_49221928(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0);
              return;
            }
          }
        }
LABEL_35:
        sub_1C3E7C0(bannerLoopCtr, method);
      }
    }
    else
    {
      v10 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v10, 0);
    }
  }
}


void SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  char *bgRoot; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  char *v9; // x20
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  __int64 v29; // x8
  unsigned __int64 v30; // x23
  bool v31; // w21
  System_String_o *v32; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C53278 & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_17811/*"center_glow"*/);
    sub_1C3E564(&StringLiteral_23142/*"ring_gard1_3"*/);
    sub_1C3E564(&StringLiteral_23143/*"ring_gard2_1"*/);
    sub_1C3E564(&StringLiteral_23144/*"ring_gard2_2"*/);
    sub_1C3E564(&StringLiteral_23141/*"ring_gard1_2"*/);
    sub_1C3E564(&StringLiteral_23145/*"ring_gard2_3"*/);
    sub_1C3E564(&StringLiteral_23140/*"ring_gard1_1"*/);
    byte_4C53278 = 1;
  }
  bgRoot = (char *)sub_1C3E60C(string___TypeInfo, 7);
  if ( !bgRoot )
LABEL_19:
    sub_1C3E7C0(bgRoot, v6);
  v9 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v10 = StringLiteral_23140/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_23140/*"ring_gard1_1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(bgRoot + 32), v10, v7, v8);
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_20;
  v13 = StringLiteral_23141/*"ring_gard1_2"*/;
  *((_QWORD *)v9 + 5) = StringLiteral_23141/*"ring_gard1_2"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12);
  if ( *((_DWORD *)v9 + 6) <= 2u )
    goto LABEL_20;
  v16 = StringLiteral_23142/*"ring_gard1_3"*/;
  *((_QWORD *)v9 + 6) = StringLiteral_23142/*"ring_gard1_3"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), v16, v14, v15);
  if ( *((_DWORD *)v9 + 6) <= 3u )
    goto LABEL_20;
  v19 = StringLiteral_23143/*"ring_gard2_1"*/;
  *((_QWORD *)v9 + 7) = StringLiteral_23143/*"ring_gard2_1"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 56), v19, v17, v18);
  if ( *((_DWORD *)v9 + 6) <= 4u
    || (v22 = StringLiteral_23144/*"ring_gard2_2"*/,
        *((_QWORD *)v9 + 8) = StringLiteral_23144/*"ring_gard2_2"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v9 + 64), v22, v20, v21),
        *((_DWORD *)v9 + 6) <= 5u)
    || (v25 = StringLiteral_23145/*"ring_gard2_3"*/,
        *((_QWORD *)v9 + 9) = StringLiteral_23145/*"ring_gard2_3"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v9 + 72), v25, v23, v24),
        *((_DWORD *)v9 + 6) <= 6u) )
  {
LABEL_20:
    sub_1C3E7C8(bgRoot, v6);
  }
  v28 = StringLiteral_17811/*"center_glow"*/;
  *((_QWORD *)v9 + 10) = StringLiteral_17811/*"center_glow"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 80), v28, v26, v27);
  v29 = *((_QWORD *)v9 + 3);
  if ( (int)v29 >= 1 )
  {
    v30 = 0;
    v31 = isDisp;
    while ( v30 < (unsigned int)v29 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v32 = *(System_String_o **)&v9[8 * v30 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v32, 1, 0);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, v31, 0);
      LODWORD(v29) = *((_DWORD *)v9 + 6);
      if ( (__int64)++v30 >= (int)v29 )
        return;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(summonInfoCtr, isDisp);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, v5, 0);
  MainMenuBar__SetMenuBtnColliderEnable(v5, 0, 0);
  SummonControl__setDispSummonInfo(this, v5, v6);
  MainMenuBar__setMenuActive(v5, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__SetGachaTime(SummonControl_o *this, int32_t num, int32_t type, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8
  int v5; // w9

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    sub_1C3E7C0(this, *(_QWORD *)&num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_C4AF10[type - 1];
  gachaParamData->fields.gachaResourceNum = v5 * num;
}


void SummonControl__SetMiniBannerArrowAndColliderEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *summonMBannerLeftArrowBtn; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *summonMBannerInfoList; // x0
  UnityEngine_Object_o *summonMBannerRightArrowBtn; // x21
  Il2CppObject *current; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C53226 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53226 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
    sub_1C3E7C0(summonMBannerInfoList, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)summonMBannerInfoList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v10 )
    {
      if ( !current )
        sub_1C3E7C0(v10, v11);
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)current, isEnable, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SummonMiniBannerComponent__Dispose__);
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

  if ( (byte_4C53259 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C3E564(&MasterMissionComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_17499/*"btn_event_3"*/);
    byte_4C53259 = 1;
  }
  v12 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17499/*"btn_event_3"*/, 0);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
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
    sub_1C3E7C0(fragmentsExchangeButton, method);
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
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v6; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x21

  if ( (byte_4C53266 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BonusSelectSummonAssetManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__ShowConfirmDialog_b__231_0__);
    byte_4C53266 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v8 = (BonusSelectSummonAssetManager_o *)sub_1C3E7B0(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v8, 0);
        this->fields.bonusSelectAssetManager = v8;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v8, v9, v10);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__ShowConfirmDialog_b__231_0__, 0);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v11, 0);
        return;
      }
    }
LABEL_15:
    sub_1C3E7C0(Master_object, v4);
  }
  SummonControl__ShowConfirmDialogProcess(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__ShowConfirmDialogProcess(SummonControl_o *this, bool beforeDetailFlag, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w20
  struct GachaRqParamData_o *v7; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x21
  SummonControl_o *v9; // x23
  int v10; // w8
  VaildGachaInfo_o *v11; // x20
  int32_t needStone; // w23
  int haveFreeStone; // w25
  int32_t haveChargeStone; // w29
  int v15; // w8
  struct SummonInfoControl_o *v16; // x8
  const MethodInfo *v17; // x1
  struct SummonInfoControl_o *v18; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v20; // x9
  struct GachaRqParamData_o *v21; // x8
  GachaDetailEntity_o *v22; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v25; // x0
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v28; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  struct GachaRqParamData_o *v31; // x8
  int32_t v32; // w22
  struct GachaRqParamData_o *v33; // x8
  const MethodInfo *v34; // x6
  SummonControl_o *v35; // x23
  int32_t v36; // w21
  int32_t v37; // w27
  int32_t v38; // w28
  struct GachaRqParamData_o *v39; // x8
  GachaDetailEntity_o *v40; // x25
  struct GachaRqParamData_o *v41; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x23
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  System_Int32_array *v45; // x26
  int32_t ScriptInt; // w0
  const MethodInfo *v47; // x3
  SummonControl_o *v48; // x0
  const MethodInfo *v49; // x2
  int32_t v50; // w22
  int32_t afterChargeStoneNum; // w21
  SummonConfirmDlgComponent_o *v52; // x25
  struct SummonInfoControl_o *v53; // x9
  struct GachaRqParamData_o *v54; // x8
  struct SummonInfoControl_o *v55; // x9
  struct GachaRqParamData_o *v56; // x8
  int32_t v57; // w28
  System_String_o *v58; // x24
  int32_t v59; // w26
  _BOOL4 v60; // w29
  _BOOL4 v61; // w27
  struct GachaRqParamData_o *v62; // x8
  int32_t gachaId; // w28
  int32_t haveStone; // w24
  struct GachaRqParamData_o *v65; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v67; // x23
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  System_Int32_array *ScriptIntArray; // x25
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x2
  struct GachaRqParamData_o *v74; // x8
  int32_t gachaTime; // w22
  struct GachaRqParamData_o *v76; // x8
  SummonControl_o *v77; // x22
  struct SummonInfoControl_o *summonInfoCtr; // x8
  int32_t payGachaPrice; // w26
  GachaExtraGiftEntity_array *v80; // x25
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x24
  int32_t v82; // w27
  int32_t v83; // w28
  _BOOL4 isPickup; // w21
  struct GachaRqParamData_o *v85; // x8
  int32_t privilegeGachaTextId; // w9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x24
  struct GachaRqParamData_o *v88; // x8
  int32_t isPrivilege; // w9
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-F0h]
  const MethodInfo *v91; // [xsp+68h] [xbp-A8h]
  SummonControl_o *summonCloseAt; // [xsp+78h] [xbp-98h]
  int32_t v93; // [xsp+84h] [xbp-8Ch]
  int32_t v94; // [xsp+88h] [xbp-88h]
  int32_t v95; // [xsp+8Ch] [xbp-84h]
  int32_t v96; // [xsp+8Ch] [xbp-84h]
  int32_t v97; // [xsp+90h] [xbp-80h]
  System_String_o *name; // [xsp+90h] [xbp-80h]
  System_String_o *title; // [xsp+98h] [xbp-78h]
  int32_t titlea; // [xsp+98h] [xbp-78h]
  bool HasFlag; // [xsp+A4h] [xbp-6Ch]
  int32_t v102; // [xsp+A4h] [xbp-6Ch]
  GachaExtraGiftEntity_array *v103; // [xsp+A8h] [xbp-68h]
  int32_t v104; // [xsp+A8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C53267 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_ConfirmMessageOpen__);
    sub_1C3E564(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C3E564(&Method_SummonControl_confirmResult__);
    sub_1C3E564(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53267 = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_111;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_111;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
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
                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v10 = gachaType - 1;
  v11 = (VaildGachaInfo_o *)this;
  switch ( v10 )
  {
    case 0:
      needStone = v4->fields.needStone;
      haveFreeStone = v4->fields.haveFreeStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v4->fields._IsOneTimeFreeSummonDialog_k__BackingField = 0;
      v15 = haveFreeStone - needStone;
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
        haveChargeStone += v15;
      }
      haveStone = v4->fields.haveStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v65 = v4->fields.gachaParamData;
      if ( !v65 )
        goto LABEL_111;
      v102 = haveStone;
      v104 = needStone;
      if ( !this )
        goto LABEL_111;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v65->fields.gachaId, 0);
      v67 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v67,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v68);
      titlea = haveFreeStone;
      if ( GachaDetailEntity )
      {
        this = (SummonControl_o *)GachaDetailEntity__HasText(GachaDetailEntity, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v67 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
          SummonConfirmDlgComponent_CallbackFunc___ctor(
            v67,
            (Il2CppObject *)v4,
            (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
            v70);
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
              v67 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
              SummonConfirmDlgComponent_CallbackFunc___ctor(
                v67,
                (Il2CppObject *)v4,
                (intptr_t)Method_SummonControl_confirmResult__,
                v72);
              if ( beforeDetailFlag )
              {
                this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v73);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_110;
              }
            }
          }
        }
      }
      v74 = v4->fields.gachaParamData;
      if ( !v74 )
        goto LABEL_111;
      gachaTime = v74->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_92;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaMaster___);
      v76 = v4->fields.gachaParamData;
      if ( !v76 || !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v76->fields.gachaId,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( this && (v77 = this, LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    LODWORD(v77->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
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
            v67,
            v69);
          return;
        }
        goto LABEL_111;
      }
      if ( !v11 )
        goto LABEL_111;
      payGachaPrice = summonInfoCtr->fields.payGachaPrice;
      v80 = ListGachaExtraGift;
      confirmDlgInfo = v4->fields.confirmDlgInfo;
      v82 = v4->fields.haveStone;
      v83 = v4->fields.haveFreeStone;
      isPickup = v11->fields.isPickup;
      name = v11->fields.name;
      v96 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)VaildGachaInfo__CloseAt(v11, 0);
      v85 = v4->fields.gachaParamData;
      if ( !v85 )
        goto LABEL_111;
      privilegeGachaTextId = v11->fields.isPrivilege;
      if ( v11->fields.isPrivilege )
        privilegeGachaTextId = v85->fields.gachaId;
      if ( !confirmDlgInfo )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmStone(
        confirmDlgInfo,
        name,
        1,
        payGachaPrice,
        gachaTime,
        v82,
        v83,
        v96,
        v102 - v104,
        titlea,
        haveChargeStone,
        v67,
        0,
        isPickup,
        (int64_t)this,
        0,
        0,
        0,
        v80,
        v85->fields.shopIdIdx,
        privilegeGachaTextId,
        v91);
      break;
    case 2:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v16 = v4->fields.summonInfoCtr;
      if ( !v16 )
        goto LABEL_111;
      v4->fields.isDailyGacha = v16->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag((int32_t)v9->fields.summonInstance, 0)
        || !SummonControl__CheckQpManaOverCheck(v4, v17) )
      {
        SummonControl__friendPointSummonConfirm(v4, v17);
      }
      return;
    case 4:
      v18 = v4->fields.summonInfoCtr;
      if ( !v18 )
        goto LABEL_111;
      ticketNum = v18->fields.ticketNum;
      v20 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v20 )
        goto LABEL_111;
      v4->fields.afterTicketNum = ticketNum - v20->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v21 = v4->fields.gachaParamData;
      if ( !v21 || !this )
        goto LABEL_111;
      v22 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v21->fields.gachaId, 0);
      v23 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v24);
      if ( v22 )
      {
        v25 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v25,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v26);
        v27 = GachaDetailEntity__GetScriptIntArray(v22, v4->fields.DETAIL_SCRIPT_IDS, 0, 0);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v22, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0);
        if ( v27 )
        {
          if ( (_DWORD)this == 1 )
          {
            v28 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v28,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v29);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v27, v30);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_110;
            }
          }
        }
      }
      v31 = v4->fields.gachaParamData;
      if ( !v31 )
        goto LABEL_111;
      v32 = v31->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaMaster___);
      v33 = v4->fields.gachaParamData;
      if ( !v33 || !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v33->fields.gachaId,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_39;
      v35 = this;
      if ( !LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x) )
        goto LABEL_39;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  LODWORD(v35->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                  0);
      if ( (_DWORD)this == 9 )
        ++v32;
LABEL_39:
      if ( !v11 )
        goto LABEL_111;
      this = (SummonControl_o *)v4->fields.confirmDlgInfo;
      if ( !this )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        (SummonConfirmDlgComponent_o *)this,
        v11->fields.name,
        v32,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v23,
        v34);
      return;
    case 6:
      v103 = ListGachaExtraGift;
      v36 = v4->fields.haveStone;
      v37 = v4->fields.needStone;
      v38 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v39 = v4->fields.gachaParamData;
      if ( !v39 || !this )
        goto LABEL_111;
      v40 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v39->fields.gachaId, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
      v41 = v4->fields.gachaParamData;
      if ( !v41 )
        goto LABEL_111;
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v41->fields.gachaId,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_111;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v43);
      if ( v40
        && GachaDetailEntity__HasText(v40, 0)
        && (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
              v44),
            v45 = GachaDetailEntity__GetScriptIntArray(v40, v4->fields.DETAIL_SCRIPT_IDS, 0, 0),
            ScriptInt = GachaDetailEntity__GetScriptInt(v40, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0),
            v45)
        && ScriptInt == 1
        && (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v47),
            beforeDetailFlag)
        && !SummonControl__CheckGachaNum(v48, v45, v49) )
      {
LABEL_110:
        SummonControl__BeforeConfirmMessageOpen(v4, (const MethodInfo *)beforeDetailFlag);
      }
      else
      {
        this = (SummonControl_o *)v4->fields.summonInfoCtr;
        if ( !this )
          goto LABEL_111;
        v50 = v36 - v37;
        afterChargeStoneNum = (v38 - v37) & ~((v38 - v37) >> 31);
        this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0);
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
                  v52,
                  (int32_t)this,
                  v53->fields.payGachaPrice,
                  v4->fields.haveStone,
                  v4->fields.haveFreeStone,
                  v4->fields.haveChargeStone,
                  v50,
                  v4->fields.haveFreeStone,
                  afterChargeStoneNum,
                  callback,
                  v103,
                  v54->fields.shopIdIdx,
                  isAppendSummon);
                return;
              }
            }
          }
          goto LABEL_111;
        }
        if ( !v11 )
          goto LABEL_111;
        v55 = v4->fields.summonInfoCtr;
        if ( !v55 )
          goto LABEL_111;
        v56 = v4->fields.gachaParamData;
        if ( !v56 )
          goto LABEL_111;
        v57 = v55->fields.payGachaPrice;
        v58 = v11->fields.name;
        v59 = v4->fields.haveFreeStone;
        v60 = v56->fields.isAppendSummon;
        v94 = v4->fields.haveStone;
        v95 = v56->fields.gachaTime;
        v61 = v11->fields.isPickup;
        v93 = v4->fields.haveChargeStone;
        this = (SummonControl_o *)VaildGachaInfo__CloseAt(v11, 0);
        title = v58;
        v97 = v57;
        summonCloseAt = this;
        if ( HasFlag )
        {
          v62 = v4->fields.gachaParamData;
          if ( !v62 )
            goto LABEL_111;
          gachaId = v62->fields.gachaId;
        }
        else
        {
          gachaId = 0;
        }
        tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
        BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
          tryGetBonusSelectData,
          (Il2CppObject *)v4,
          Method_SummonControl_TryGetSelectBonusDataInfo__,
          0);
        v88 = v4->fields.gachaParamData;
        if ( !v88 )
          goto LABEL_111;
        isPrivilege = v11->fields.isPrivilege;
        if ( v11->fields.isPrivilege )
          isPrivilege = v88->fields.gachaId;
        if ( !v52 )
LABEL_111:
          sub_1C3E7C0(this, beforeDetailFlag);
        SummonConfirmDlgComponent__OpenConfirmStone(
          v52,
          title,
          7,
          v97,
          v95,
          v94,
          v59,
          v93,
          v50,
          v59,
          afterChargeStoneNum,
          callback,
          v60,
          v61,
          (int64_t)summonCloseAt,
          gachaId,
          tryGetBonusSelectData,
          v4->fields.bonusSelectAssetManager,
          v103,
          v88->fields.shopIdIdx,
          isPrivilege,
          v91);
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
    sub_1C3E7C0(this, a);
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
  __int64 v6; // x1

  if ( (byte_4C5326C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__SummonSceneRefresh_b__242_0__);
    byte_4C5326C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__242_0__, 0);
  if ( !Instance )
    sub_1C3E7C0(v5, v6);
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
  System_String_o *String_71300376; // x21
  System_Object_array *v10; // x0
  SelectBonusData_o *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int max_length; // w8
  __int64 v15; // x9

  if ( (byte_4C53262 & 1) == 0 )
  {
    sub_1C3E564(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    this = (SummonControl_o *)sub_1C3E564(&SummonControl_TypeInfo);
    byte_4C53262 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)selectBonusData, 0, v6, v7);
  v8 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v8 = SummonControl_TypeInfo;
  }
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(v8->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0);
  if ( System_String__IsNullOrEmpty(String_71300376, 0) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_71300376,
          (const MethodInfo_3168FB8 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v10 )
  {
    max_length = v10->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v10) = 0;
      return (char)v10;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_1C3E7C8(v10, v11);
      v11 = (SelectBonusData_o *)v10->m_Items[v15];
      if ( !v11 )
        sub_1C3E7C0(v10, 0);
      if ( v11->fields.gachaId == gachaId )
        break;
      if ( (int)++v15 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v11;
    sub_1C3E508((CGThumbnailListItem_o *)selectBonusData, (int32_t)v11, v12, v13);
    LOBYTE(v10) = 1;
  }
  return (char)v10;
}


void SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  void *vaildGachaList; // x0
  GachaAppendMaster_o *v4; // x20
  GachaAppendEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5323C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_4C5323C = 1;
  }
  entity = 0;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_20;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
  vaildGachaList = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !this->fields.vaildGachaList
    || (v4 = (GachaAppendMaster_o *)vaildGachaList,
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0)
    || !v4
    || (vaildGachaList = (void *)GachaAppendMaster__TryGetHundredSummon(v4, &entity, *((_DWORD *)vaildGachaList + 4), 0),
        !this->fields.summonInfoCtr) )
  {
LABEL_20:
    sub_1C3E7C0(vaildGachaList, method);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C5327E & 1) == 0 )
  {
    sub_1C3E564(&SummonControl__WaitBattleChrLoad_d__265_TypeInfo);
    byte_4C5327E = 1;
  }
  v3 = sub_1C3E7B0(SummonControl__WaitBattleChrLoad_d__265_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__265___ctor((SummonControl__WaitBattleChrLoad_d__265_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void SummonControl___BonusSelectServantSelectDialog_b__317_0(SummonControl_o *this, const MethodInfo *method)
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
  if ( (byte_4C532BC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__);
    sub_1C3E564(&Method_SummonControl_SetDispBtn__);
    sub_1C3E564(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__317_1__);
    this = (SummonControl_o *)sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C532BC = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__51929056(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.bonusSelectSummonConfirmDialog, (int32_t)Component_object, v7, v8);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init((BonusSelectSummonConfirmDialog_o *)this, v2->fields.bonusSelectAssetManager, 0);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v12 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0);
  v13 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0);
  v14 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
    klass = (UICenterOnChild_c *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      (System_Action_o *)klass,
      v16,
      Method_SummonControl___c__BonusSelectServantSelectDialog_b__317_1__,
      0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__317_1 = (struct System_Action_o *)klass;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__317_1, (int32_t)klass, v18, v19);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1C3E7C0(this, method);
  BonusSelectSummonConfirmDialog__Open(
    bonusSelectSummonConfirmDialog,
    gachaId,
    v12,
    v13,
    v14,
    (System_Action_o *)klass,
    0);
}


bool SummonControl___CheckFriendPointSummonUpdate_b__234_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0 )
    sub_1C3E7C0(this, ent);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void SummonControl___DialogCallBack_b__269_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4C532B7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl_EndCloseDialogCallBack__);
    byte_4C532B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1C3E7C0(v5, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonControl___OnClickHisotry_b__302_0(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1C3E7C0(0, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0);
}


void SummonControl___OnClickSummonDetail_b__300_0(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.isSummonDetailOpening = 0;
  SummonControl__reDispSummonBannerList(this, method);
}


bool SummonControl___OnClickSummonListBtn_b__304_0(SummonControl_o *this, GachaEntity_o *x, const MethodInfo *method)
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
    sub_1C3E7C0(this, x);
  }
  return 0;
}


void SummonControl___OnEndSummonEffect_b__299_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C532BB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_5442/*"END_FADE"*/);
    byte_4C532BB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5442/*"END_FADE"*/, 0);
}


void SummonControl___ShowConfirmDialog_b__231_0(SummonControl_o *this, const MethodInfo *method)
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
  if ( (byte_4C532B2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C3E564(&Method_SummonControl_SetDispBtn__);
    sub_1C3E564(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__ShowConfirmDialog_b__231_1__);
    this = (SummonControl_o *)sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C532B2 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__51929056(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.bonusSelectSummonConfirmDialog, (int32_t)Component_object, v7, v8);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_17;
  BonusSelectSummonConfirmDialog__Init((BonusSelectSummonConfirmDialog_o *)this, v2->fields.bonusSelectAssetManager, 0);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v12 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v12, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0);
  v13 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0);
  v14 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
    v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v15, klass, Method_SummonControl___c__ShowConfirmDialog_b__231_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__231_1 = v15;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__231_1, (int32_t)v15, v18, v19);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1C3E7C0(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v12, v13, v14, v15, 0);
}


void SummonControl___SummonSceneRefresh_b__242_0(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C532B3 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C532B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0),
        SummonControl__quit(this, v5),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(Instance, v4);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void SummonControl___exeFormation_b__164_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C532AE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__exeFormation_b__164_2__);
    byte_4C532AE = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__164_2__, 0);
  if ( !Instance )
    sub_1C3E7C0(v5, v6);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v4, 0);
}


void SummonControl___exeFormation_b__164_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C532AF & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C532AF = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


void SummonControl___executeEnhanceTresureDevice_b__286_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_4C532BA & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_5441/*"END_EFFECT"*/);
    byte_4C532BA = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (Instance = this->fields.fsm) == 0) )
  {
    sub_1C3E7C0(Instance, v5);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5441/*"END_EFFECT"*/, 0);
}


void SummonControl___loadAssetsForSummon_b__248_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C532B4 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C3E564(&StringLiteral_12330/*"START_GACHA"*/);
    byte_4C532B4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12330/*"START_GACHA"*/, 0),
        (fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(fsm, method);
  }
  CrashReporter__SetNowState((CrashReporter_o *)fsm, (System_String_o *)StringLiteral_12330/*"START_GACHA"*/, 0);
}


void SummonControl___openAfterSummonInfo_b__163_1(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C532AD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__openAfterSummonInfo_b__163_2__);
    byte_4C532AD = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__163_2__, 0);
  if ( !Instance )
    sub_1C3E7C0(v5, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_31263800((CommonUI_o *)Instance, v4, 0);
}


void SummonControl___openAfterSummonInfo_b__163_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void SummonControl___resetResultList_b__281_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4C532B9 & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_5460/*"END_SUMMON"*/);
    sub_1C3E564(&StringLiteral_7481/*"IN_SummonScene"*/);
    byte_4C532B9 = 1;
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
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4
    || (CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
        (summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(summonResultInfo, method);
  }
  CrashReporter__SetNowState((CrashReporter_o *)summonResultInfo, (System_String_o *)StringLiteral_7481/*"IN_SummonScene"*/, 0);
}


void SummonControl___setChangeSummonInfo_b__194_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4C532B1 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12793/*"SetBannerCenter"*/);
    byte_4C532B1 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12793/*"SetBannerCenter"*/, 0.1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1C3E7C0(0, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0);
}


void SummonControl___setUserResourceDisp_b__171_0(SummonControl_o *this, int32_t stoneCount, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C532B0 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25112/*"{0:N0}"*/);
    byte_4C532B0 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v14 = stoneCount;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4, v5, v6, v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v11, 0);
  if ( !currentStoneNumLb )
    sub_1C3E7C0(v12, v13);
  UILabel__set_text(currentStoneNumLb, v12, 0);
}


void SummonControl___showSummonEffect_b__255_0(SummonControl_o *this, const MethodInfo *method)
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
  System_Func_object__int__o *_9__255_1; // x25
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
  int32_t v32; // w26
  char v33; // w25
  int32_t Data; // w28
  int32_t v35; // w29
  bool isNew; // w27
  int v37; // w28
  _DWORD *v38; // x25
  bool IsServant; // w27
  const MethodInfo *v40; // x2
  int v41; // w8
  bool v42; // w28
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  _BOOL4 v46; // w27
  WeightRate_int__o *v47; // x28
  int32_t v48; // w0
  int32_t v49; // w0
  ServantLimitMaster_o *v50; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_4C532B5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&System_Func_string__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__showSummonEffect_b__255_1__);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    sub_1C3E564(&Method_WeightRate_int___ctor__);
    sub_1C3E564(&Method_WeightRate_int__getData__);
    sub_1C3E564(&Method_WeightRate_int__getTotalWeight__);
    sub_1C3E564(&Method_WeightRate_int__setWeight__);
    sub_1C3E564(&WeightRate_int__TypeInfo);
    sub_1C3E564(&StringLiteral_5455/*"END_PREPARATION"*/);
    sub_1C3E564(&StringLiteral_12481/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/);
    sub_1C3E564(&StringLiteral_2921/*"BGM_SUMMON_1"*/);
    byte_4C532B5 = 1;
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
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.summonComp, (int32_t)Component_object, v8, v9);
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
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v50 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v14 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12481/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0);
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
    _9__255_1 = (System_Func_object__int__o *)v17->static_fields->__9__255_1;
    if ( !_9__255_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = SummonControl___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__255_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__255_1, v20, Method_SummonControl___c__showSummonEffect_b__255_1__, 0);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__255_1 = (struct System_Func_string__int__o *)_9__255_1;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__255_1, (int32_t)_9__255_1, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v18,
                                                                 (System_Func_TSource__TResult__o *)_9__255_1,
                                                                 (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_string__int___);
    v25 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v24,
                                                      (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
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
          sub_1C3E7C8(maskObject, method);
        v31 = v27->m_Items[v30];
        if ( !v31 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v31->fields.type, 0);
        method = (const MethodInfo *)(unsigned int)v31->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v14 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                       (int32_t)method,
                       (const MethodInfo_33B2F58 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v32 = *((_DWORD *)maskObject + 16);
        v33 = 0;
LABEL_40:
        Data = 0;
        v35 = 3;
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
          v33,
          isNew,
          Data,
          v32,
          v35,
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
                     (int32_t)method,
                     (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v37 = *((_DWORD *)maskObject + 21);
      v38 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0);
      maskObject = v50;
      if ( !v50 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v50, v31->fields.objectId, v31->fields.limitCount, 0);
      if ( !maskObject )
        goto LABEL_84;
      v32 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v38[20], v40) )
        goto LABEL_51;
      if ( v32 == 5 )
      {
        if ( v29 >= 0.2 )
        {
LABEL_51:
          v33 = 0;
          goto LABEL_52;
        }
      }
      else if ( v32 != 4 || v29 >= 0.4 )
      {
        goto LABEL_51;
      }
      v33 = 1;
LABEL_52:
      v41 = v37 - 3;
      v35 = 0;
      Data = 0;
      isNew = 0;
      switch ( v41 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v42 = v31->fields.isNew;
          isNew = v42;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v31->fields.objectId,
                         0);
          if ( maskObject != 0 && v42 )
          {
            if ( !v25 )
            {
              v25 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v25,
                (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v25 )
                goto LABEL_84;
            }
            method = (const MethodInfo *)(unsigned int)v31->fields.objectId;
            items = v25->fields._items;
            v44 = Method_System_Collections_Generic_List_int__Add__;
            ++v25->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v25->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v25,
                (int32_t)method,
                *(const MethodInfo_379843C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v25->fields._size = size + 1;
              items->m_Items[size] = (int)method;
            }
            v35 = 1;
          }
          else
          {
            Data = 0;
            v35 = 1;
LABEL_75:
            if ( !v25 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v35 = 1;
          if ( !v25 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v46 = v31->fields.isNew;
          v47 = (WeightRate_int__o *)sub_1C3E7B0(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v47, (const MethodInfo_3BA6E78 *)Method_WeightRate_int___ctor__);
          if ( v32 == 4 )
          {
            if ( !v47 )
              goto LABEL_84;
            WeightRate_int___setWeight(v47, 60, 0, (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v47, 40, 1, (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
            v48 = UnityEngine_Random__Range_71301784(0, v47->fields.totalweight, 0);
            Data = WeightRate_int___getData(v47, v48, (const MethodInfo_3BA6808 *)Method_WeightRate_int__getData__);
            v35 = 2;
            isNew = v46;
            v33 &= Data == 0;
            v32 = 4;
            if ( v25 )
              break;
          }
          else
          {
            isNew = v46;
            if ( v32 == 5 )
            {
              if ( !v47 )
                goto LABEL_84;
              WeightRate_int___setWeight(v47, 60, 0, (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v47, 20, 1, (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
              v35 = 2;
              WeightRate_int___setWeight(v47, 20, 2, (const MethodInfo_3BA6394 *)Method_WeightRate_int__setWeight__);
              v49 = UnityEngine_Random__Range_71301784(0, v47->fields.totalweight, 0);
              Data = WeightRate_int___getData(v47, v49, (const MethodInfo_3BA6808 *)Method_WeightRate_int__getData__);
              v33 &= Data == 0;
              v32 = 5;
              if ( v25 )
                break;
            }
            else
            {
              Data = 0;
              v35 = 2;
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
                             (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1C3E7C0(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5455/*"END_PREPARATION"*/, 0);
}


void SummonControl___showSummonResultInfo_b__272_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl___c_c *v3; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__272_1; // x21
  Il2CppObject *v7; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C532B8 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__showSummonResultInfo_b__272_1__);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C532B8 = 1;
  }
  v3 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v3 = SummonControl___c_TypeInfo;
  }
  _9__272_1 = v3->static_fields->__9__272_1;
  if ( !_9__272_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SummonControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v3->static_fields->__9;
    _9__272_1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__272_1, v7, Method_SummonControl___c__showSummonResultInfo_b__272_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__272_1 = _9__272_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__272_1, (int32_t)_9__272_1, v9, v10);
  }
  if ( !overflowSvtCoinInfo )
    sub_1C3E7C0(v3, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__272_1, 0);
}


void SummonControl___showSvtTalk_b__263_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C532B6 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3471/*"CLICK_OK"*/);
    byte_4C532B6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C3E7C0(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3471/*"CLICK_OK"*/, 0);
}


void SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C3E7C0(0, v4);
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
    sub_1C3E7C0(0, v4);
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

  if ( (byte_4C53271 & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_4C53271 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1C3E7C0(0, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0, 0);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3E57C(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
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
  if ( (byte_4C53274 & 1) == 0 )
  {
    sub_1C3E564(&Method_JsonManager_DeserializeArray_SummonControl_resData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11086/*"REQUEST_OK"*/);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C53274 = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_63671772(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0)
    || System_String__Equals_63671772(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0) )
  {
    SummonControl__SendEventRequestNg(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_63674716(
                         (System_String_o *)StringLiteral_15814/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16068/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v6,
                              (const MethodInfo_3168FB8 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
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
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.gachaResInfoList, (int32_t)v11, v7, v8);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v14 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v14 )
    goto LABEL_22;
  v15 = *(struct System_Int32_array **)(v14 + 24);
  v4->fields.canRankUpClassIds = v15;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.canRankUpClassIds, (int32_t)v15, v12, v13);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v18 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v18 )
    goto LABEL_22;
  v19 = *(struct GetSvtCoin_array **)(v18 + 32);
  v4->fields.overflowSvtCoinInfos = v19;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)v19, v16, v17);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v22 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v22 )
    goto LABEL_22;
  v23 = *(struct System_Int32_array **)(v22 + 40);
  v4->fields.extraGiftIds = v23;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.extraGiftIds, (int32_t)v23, v20, v21);
  if ( !LODWORD(v9->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1C3E7C8(this, result);
  v26 = *(_QWORD *)&v9->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v26
    || (v27 = *(struct GachaExtraGifts_array **)(v26 + 48),
        v4->fields.GachaExtraGiftList = v27,
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.GachaExtraGiftList, (int32_t)v27, v24, v25),
        (this = (SummonControl_o *)v4->fields.fsm) == 0) )
  {
LABEL_22:
    sub_1C3E7C0(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11086/*"REQUEST_OK"*/, 0);
}


void SummonControl__callbackTutorialSet(SummonControl_o *this, System_String_o *result, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C53277 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_11086/*"REQUEST_OK"*/);
    byte_4C53277 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C3E7C0(0, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11086/*"REQUEST_OK"*/, 0);
}


void SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  PlayMakerFSM_o *fsm; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21

  if ( (byte_4C5328E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass285_0__checkEnhanceTresureDevice_b__0__);
    sub_1C3E564(&SummonControl___c__DisplayClass285_0_TypeInfo);
    sub_1C3E564(&StringLiteral_9327/*"NO_EXIST"*/);
    byte_4C5328E = 1;
  }
  v3 = sub_1C3E7B0(SummonControl___c__DisplayClass285_0_TypeInfo);
  SummonControl___c__DisplayClass285_0___ctor((SummonControl___c__DisplayClass285_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v3 + 24), v8) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass285_0__checkEnhanceTresureDevice_b__0__,
      0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v12, 0);
      return;
    }
LABEL_11:
    sub_1C3E7C0(fsm, v5);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
}


void SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C5328C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9327/*"NO_EXIST"*/);
    byte_4C5328C = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C3E7C0(0, method);
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
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v10; // x8
  int32_t objectId; // w21
  Il2CppObject *v12; // x19
  AvalonSceneManager_c *v13; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4C5328D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass284_0__checkEnhanceTresureDeviceSingle_b__0__);
    sub_1C3E564(&SummonControl___c__DisplayClass284_0_TypeInfo);
    sub_1C3E564(&StringLiteral_9327/*"NO_EXIST"*/);
    byte_4C5328D = 1;
  }
  v3 = sub_1C3E7B0(SummonControl___c__DisplayClass284_0_TypeInfo);
  SummonControl___c__DisplayClass284_0___ctor((SummonControl___c__DisplayClass284_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  *(_DWORD *)(v3 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_1C3E7C8(Instance, v5);
  v10 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v10 )
    goto LABEL_16;
  objectId = v10->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0) )
  {
    *(_DWORD *)(v3 + 24) = objectId;
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass284_0__checkEnhanceTresureDeviceSingle_b__0__,
      0);
    if ( v12 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v12, 1, DEFAULT_FADE_TIME, v15, 0);
      return;
    }
LABEL_16:
    sub_1C3E7C0(Instance, v5);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
}


void SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v6; // x8
  struct GachaRqParamData_o *v7; // x8
  System_String_o **v8; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_4C53252 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&StringLiteral_3353/*"CHECK_STONE"*/);
    sub_1C3E564(&StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/);
    sub_1C3E564(&StringLiteral_3350/*"CHECK_POINT"*/);
    sub_1C3E564(&StringLiteral_2948/*"BONUS_SELECT_CHECK_STONE"*/);
    byte_4C53252 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_2948/*"BONUS_SELECT_CHECK_STONE"*/, 0);
    }
  }
  v7 = this->fields.gachaParamData;
  if ( !v7 )
LABEL_25:
    sub_1C3E7C0(Master_object, v4);
  switch ( v7->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v8 = (System_String_o **)&StringLiteral_3353/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v8 = (System_String_o **)&StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/;
      else
        v8 = (System_String_o **)&StringLiteral_3350/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v8 = (System_String_o **)&StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, *v8, 0);
}


void SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4C5327B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_6961/*"GET_MULTI"*/);
    byte_4C5327B = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
    sub_1C3E7C0(maskBgObject, method);
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
    sub_1C3E7C0(0, drawUsrGachaEnt);
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
  if ( (byte_4C5327C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9263/*"NEW_SVT"*/);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_6975/*"GO_BACK"*/);
    byte_4C5327C = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C3E7C8(this, method);
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
  if ( (byte_4C53285 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&StringLiteral_9624/*"OLD_SVT"*/);
    sub_1C3E564(&StringLiteral_6418/*"FINAL_SVT"*/);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_9263/*"NEW_SVT"*/);
    byte_4C53285 = 1;
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
    sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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
      *(const MethodInfo_379843C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C3E7C0(0, v9);
  maxDrawNum = CurrentGachaData->fields.maxDrawNum;
  if ( maxDrawNum < 1 || UserGachaData->fields.num < maxDrawNum )
    return 0;
  result = 1;
  this->fields.lastMaxDrawGachaId = gachaId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4C53286 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C53286 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C3E7C0(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v6; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  int32_t v9; // w8
  CommonUI_o *v10; // x19

  if ( (byte_4C53224 & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&StringLiteral_3435/*"CLEAR_TUTORIAL"*/);
    sub_1C3E564(&StringLiteral_11153/*"RETURN_TUTORIAL"*/);
    byte_4C53224 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0) )
    goto LABEL_52;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40473944(101, 0) )
  {
    this->fields.isDoneTutorial = 0;
    v9 = 1;
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
      if ( TutorialFlag__Get_40473944(101, 0) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_49;
        v6 = &StringLiteral_11153/*"RETURN_TUTORIAL"*/;
LABEL_41:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v6, 0);
        goto LABEL_45;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40473944(101, 0) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40473944(107, 0) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v7);
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
      SummonControl__showHelpImg(this, v8);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_49;
      v6 = &StringLiteral_3435/*"CLEAR_TUTORIAL"*/;
      goto LABEL_41;
    }
    v9 = 4;
  }
  this->fields.tutorialKind = v9;
  SummonControl__progTutorial(this, v3);
LABEL_45:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_49:
    sub_1C3E7C0(fsm, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  if ( (byte_4C5324A & 1) == 0 )
  {
    sub_1C3E564(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_1C3E564(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_1C3E564(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_1C3E564(&StringLiteral_6531/*"FRIEND_GACHA_ADD_LIMIT"*/);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_3351/*"CHECK_RESOURCE"*/);
    byte_4C5324A = 1;
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
  if ( !byte_4C51064 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C51064 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v7->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6531/*"FRIEND_GACHA_ADD_LIMIT"*/, 0);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
    sub_1C3E7C0(this, method);
  }
  if ( servantEquipSum[1] >= v13 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = v2->fields.userGameEntity;
    if ( !v23 )
      goto LABEL_40;
    v24 = v23->fields.svtKeep;
    v25 = servantEquipSum[1];
    v26 = this;
    v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C3E7B0(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = v2->fields.userGameEntity;
      if ( !v28 )
        goto LABEL_40;
      v18 = v28->fields.svtEquipKeep;
      v29 = servantEquipSum[0];
      v30 = this;
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C3E7B0(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v16 = this;
      if ( !byte_4C51064 )
      {
        sub_1C3E564(&BalanceConfig_TypeInfo);
        byte_4C51064 = 1;
      }
      v17 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      v18 = v17->static_fields->CommandCodeFrameMax;
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C3E7B0(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_4C53253 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&Method_SummonControl_closeShotPointDlg__);
    sub_1C3E564(&StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/);
    byte_4C53253 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8EC78(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8EC78(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_1C3E7C0(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/, 0);
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
  struct GachaRqParamData_o *v15; // x8
  int v16; // w8
  SummonConfirmDlgComponent_o *v17; // x20
  int32_t v18; // w21
  int32_t v19; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v20; // x23
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4

  v2 = this;
  if ( (byte_4C53255 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&Method_SummonControl_closeShotStoneDlg__);
    this = (SummonControl_o *)sub_1C3E564(&StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/);
    byte_4C53255 = 1;
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
      v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
      sub_1C3E7C0(this, method);
    }
  }
  else
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = (SummonControl_o *)System_Math__Max_65159900(haveStoneNum, HaveChargeStoneNum_k__BackingField, 0);
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
      v20 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12216/*"SHOW_CONFIRM_DLG"*/, 0);
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

  if ( (byte_4C53248 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53248 = 1;
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
      UnityEngine_Object__Destroy_71341564(gameObject, 0);
      if ( --v9 <= 1 )
        goto LABEL_17;
    }
LABEL_39:
    sub_1C3E7C0(bannerLoopCtr, method);
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
      UnityEngine_Object__Destroy_71341564(v12, 0);
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
      UnityEngine_Object__Destroy_71341564(v14, 0);
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
      UnityEngine_Object__Destroy_71341564(v16, 0);
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

  if ( (byte_4C53289 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C53289 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0),
        (summonResultInfo = this->fields.summonResultInfo) == 0) )
  {
    sub_1C3E7C0(summonResultInfo, method);
  }
  SummonResultComponent__SetActive(summonResultInfo, 0, 0);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v4, v5, v6);
}


void SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SummonControl__closeShotCommandCodeFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x19
  SceneJumpInfo_o *v10; // x20

  if ( (byte_4C5324D & 1) == 0 )
  {
    sub_1C3E564(&SceneJumpInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_1C3E564(&StringLiteral_12695/*"SellServant"*/);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5324D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  v7 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41527648(v10, (System_String_o *)StringLiteral_12695/*"SellServant"*/, 2, 0);
      if ( v9 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, 22, 1, (Il2CppObject *)v10, 0);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(Instance, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4C53254 & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_closeShotPointDlg__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C53254 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method);
  v5 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotPointDlg__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1C3E7C0(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4C53256 & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_closeShotStoneDlg__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    sub_1C3E564(&StringLiteral_6977/*"GO_BUY_STONE"*/);
    byte_4C53256 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0);
  v6 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotStoneDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
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
    sub_1C3E7C0(confirmDlgInfo, res);
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

  if ( (byte_4C5324C & 1) == 0 )
  {
    sub_1C3E564(&SceneJumpInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_1C3E564(&StringLiteral_12735/*"ServantEquipList"*/);
    sub_1C3E564(&StringLiteral_12695/*"SellServant"*/);
    sub_1C3E564(&StringLiteral_12734/*"ServantEQCombine"*/);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5324C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  switch ( res )
  {
    case 2:
      v12 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41527648(v10, (System_String_o *)StringLiteral_12695/*"SellServant"*/, 1, 0);
        if ( v9 )
        {
          v11 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1C3E7C0(Instance, v6);
    case 1:
      v14 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C3E548(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41527560(v10, (System_String_o *)StringLiteral_12735/*"ServantEquipList"*/, 0);
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
        v7 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41527560(v10, (System_String_o *)StringLiteral_12734/*"ServantEQCombine"*/, 0);
        if ( v9 )
        {
          v11 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, (Il2CppObject *)v10, 0);
          return;
        }
      }
      goto LABEL_27;
  }
  v16 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v17 = (System_Reflection_MethodBase_o *)sub_1C3E548(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_4C5324B & 1) == 0 )
  {
    sub_1C3E564(&SceneJumpInfo_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_1C3E564(&StringLiteral_12695/*"SellServant"*/);
    sub_1C3E564(&StringLiteral_12731/*"ServantCombine"*/);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5324B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0, 0);
  switch ( res )
  {
    case 2:
      v12 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtFrameDlg__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41527648(v10, (System_String_o *)StringLiteral_12695/*"SellServant"*/, 0, 0);
        if ( v9 )
        {
          v11 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1C3E7C0(Instance, v6);
    case 1:
      v15 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtFrameDlg__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C3E548(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v11 = 71;
          v14 = 0;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    case 0:
      v7 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtFrameDlg__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C3E548(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v10 = (SceneJumpInfo_o *)sub_1C3E7B0(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_41527560(v10, (System_String_o *)StringLiteral_12731/*"ServantCombine"*/, 0);
        if ( v9 )
        {
          v11 = 32;
LABEL_17:
          Instance = (CommonUI_o *)v9;
          v14 = (Il2CppObject *)v10;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v11, 1, v14, 0);
          return;
        }
      }
      goto LABEL_28;
  }
  v17 = Method_SummonControl_closeShotSvtFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1C3E57C(Method_SummonControl_closeShotSvtFrameDlg__);
  v18 = (System_Reflection_MethodBase_o *)sub_1C3E548(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
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
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v12; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v15; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v16; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v17; // x24

  if ( (byte_4C5326F & 1) == 0 )
  {
    sub_1C3E564(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_1C3E564(&Method_SummonControl_SetDispBtn__);
    sub_1C3E564(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_1C3E564(&Method_SummonControl_confirmCautionResult__);
    sub_1C3E564(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5326F = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C3E57C(Method_SummonControl_confirmCautionResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3E548(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v15 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v15,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0);
                v16 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v16,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0);
                v17 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1C3E7B0(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
    sub_1C3E7C0(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  v6 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_SummonControl_confirmCautionResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
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

  if ( (byte_4C5326E & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_confirmResult__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5326E = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method);
  if ( !res )
  {
    v9 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C3E57C(Method_SummonControl_confirmResult__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3E548(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
      return;
    }
LABEL_12:
    sub_1C3E7C0(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0, 0);
  v6 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_SummonControl_confirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
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
  __int64 v9; // x1
  SummonControl___c__DisplayClass180_0_o *v10; // x26
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x29
  __int64 noneGachaInfo; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UICenterOnChild_o *v22; // x21
  void *v23; // x23
  CGThumbnailListItem_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v26; // x22
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Delegate_o *v30; // x8
  SpringPanel_OnFinished_c *v31; // x1
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v34; // x22
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UIScrollView_OnDragNotification_c *v38; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  float v41; // s0
  UnityEngine_Component_o *v42; // x20
  float v43; // s2
  float v44; // s8
  float v45; // s0
  int v46; // w8
  SummonControl_o *v47; // x19
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  struct UIWrapContent_o **p_summonMBannerLoopCtr; // x22
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  __int64 *p_summonMBannerCenterChild; // x21
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x21
  System_Delegate_o *v59; // t1
  SpringPanel_OnFinished_o *v60; // x22
  System_Delegate_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  SpringPanel_OnFinished_c *v64; // x1
  __int64 v65; // x21
  System_Delegate_o *v66; // t1
  UIScrollView_OnDragNotification_o *v67; // x22
  System_Delegate_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  UIScrollView_OnDragNotification_c *v71; // x1
  int32_t v72; // w26
  UnityEngine_GameObject_o *v73; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v75; // x28
  UnityEngine_Transform_o *v76; // x20
  UnityEngine_Transform_o *v77; // x21
  int v78; // w24
  System_String_o *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_List_object__o *v82; // x8
  struct System_Object_array *items; // x9
  _QWORD *v84; // x10
  __int64 v85; // x11
  GachaBannerComponent_o *v86; // x21
  Il2CppClass **v87; // x0
  int v88; // w8
  int v89; // w9
  int32_t v90; // w27
  UnityEngine_Component_o **v91; // x25
  System_String_o *v92; // x0
  System_String_o *v93; // x22
  const MethodInfo *v94; // x2
  System_Collections_Generic_List_object__o *v95; // x8
  UnityEngine_Object_o *v96; // x23
  VaildGachaInfo_o *Item; // x29
  System_String_o *v98; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x21
  UnityEngine_Transform_o *v102; // x20
  UnityEngine_Transform_o *v103; // x22
  System_String_o *name; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  System_Collections_Generic_List_object__o *v107; // x8
  struct System_Object_array *v108; // x9
  _QWORD *v109; // x10
  __int64 v110; // x11
  SummonMiniBannerComponent_o *v111; // x28
  Il2CppClass **v112; // x0
  System_String_o *v113; // x0
  System_String_o *v114; // x22
  const MethodInfo *v115; // x2
  UnityEngine_Object_o *v116; // x21
  const MethodInfo *v117; // x2
  Il2CppObject *Component_object; // x19
  SummonMiniBannerComponent_CallbackFunc_o *v119; // x20
  System_Action_int__bool__o *v120; // x20
  UnityEngine_Transform_o *v121; // x22
  int v122; // w8
  UnityEngine_Transform_o *v123; // x23
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__51715312; // x21
  System_Action_object__o *v125; // x20
  unsigned int v126; // w24
  UnityEngine_Transform_o *v127; // x2
  UnityEngine_Transform_o *v128; // x20
  int v129; // w24
  UnityEngine_Transform_o *v130; // x2
  UnityEngine_Transform_o *v131; // x20
  int v132; // w21
  int32_t childCount; // w0
  float v134; // s0
  int v135; // w20
  int v136; // w8
  float v137; // s8
  struct UIGrid_o *sliderGrid2; // x8
  int v139; // w22
  UnityEngine_Component_o *sliderGrid; // x20
  bool IsUnderVista; // w0
  float v142; // s0
  UnityEngine_Component_o *v143; // x20
  bool v144; // w0
  float v145; // s0
  UnityEngine_Component_o *v146; // x20
  const MethodInfo *v147; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v149; // x21
  SummonInfoControl_ClickDelegate_o *v150; // x22
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x1
  SummonControl___c__DisplayClass180_0_o *v153; // [xsp+8h] [xbp-A8h]
  int v154; // [xsp+14h] [xbp-9Ch]
  int v155; // [xsp+18h] [xbp-98h]
  unsigned int v156; // [xsp+1Ch] [xbp-94h]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+20h] [xbp-90h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+28h] [xbp-88h]
  UnityEngine_Component_o **v159; // [xsp+30h] [xbp-80h]
  int v161; // [xsp+48h] [xbp-68h]
  int v162; // [xsp+4Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53236 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_UISprite__TypeInfo);
    sub_1C3E564(&System_Action_int__bool__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C3E564(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C3E564(&FSUtility_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C3E564(&SpringPanel_OnFinished_TypeInfo);
    sub_1C3E564(&Method_SummonControl_OnCenterOnChildFinishedMBanner__);
    sub_1C3E564(&Method_SummonControl_OnCenterOnChildFinished__);
    sub_1C3E564(&Method_SummonControl_OnClickMiniBanner__);
    sub_1C3E564(&Method_SummonControl_OnDragStarted__);
    sub_1C3E564(&Method_SummonControl_exeSummon__);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass180_0__createSummonInfo_b__0__);
    sub_1C3E564(&SummonControl___c__DisplayClass180_0_TypeInfo);
    sub_1C3E564(&StringLiteral_4955/*"D5"*/);
    sub_1C3E564(&StringLiteral_20605/*"img_summon_"*/);
    sub_1C3E564(&StringLiteral_20608/*"img_summon_mini_236"*/);
    sub_1C3E564(&StringLiteral_20607/*"img_summon_mini_"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53236 = 1;
  }
  v162 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v3;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bannerInfoList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v6;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.summonMBannerInfoList, (int32_t)v6, v7, v8);
  if ( !this->fields.vaildGachaList )
  {
    noneGachaInfo = (__int64)this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_191;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 1, 0);
    return;
  }
  v10 = (SummonControl___c__DisplayClass180_0_o *)sub_1C3E7B0(SummonControl___c__DisplayClass180_0_TypeInfo);
  SummonControl___c__DisplayClass180_0___ctor(v10, 0);
  bannerLoopCtr = (UnityEngine_Object_o *)this->fields.bannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0, 0) )
  {
    noneGachaInfo = (__int64)this->fields.summonBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v14 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v14;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bannerLoopCtr, (int32_t)v14, v15, v16);
  }
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  noneGachaInfo = UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)*p_bannerLoopCtr;
    if ( !*p_bannerLoopCtr )
      goto LABEL_191;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v19 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v19;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.centerChild, (int32_t)v19, v20, v21);
  }
  v22 = *p_centerChild;
  if ( !v22 )
    goto LABEL_191;
  v23 = &SpringPanel_OnFinished_TypeInfo;
  onFinished = (System_Delegate_o *)v22->fields.onFinished;
  p_onFinished = (CGThumbnailListItem_o *)&v22->fields.onFinished;
  v26 = (SpringPanel_OnFinished_o *)sub_1C3E7B0(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v26, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0);
  v27 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v26, 0);
  v30 = v27;
  if ( v27 )
  {
    v31 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v27->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v27;
    if ( (SpringPanel_OnFinished_c *)v27->klass != v31 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_1C3E508(p_onFinished, (int32_t)v27, v28, v29);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_191;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (CGThumbnailListItem_o *)&summonBannerScrollView->fields.onDragStarted;
  v34 = (UIScrollView_OnDragNotification_o *)sub_1C3E7B0(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v34, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0);
  v35 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v34, 0);
  v30 = v35;
  if ( v35 )
  {
    v38 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v35->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v35;
    if ( (UIScrollView_OnDragNotification_c *)v35->klass != v38 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_1C3E508(p_onFinished, (int32_t)v35, v36, v37);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_191;
  size = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0);
  v41 = (float)width / (float)UnityEngine_Screen__get_height(0);
  v42 = *p_bannerLoopCtr;
  v43 = (float)((float)(fminf(v41, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v41 < 1.7778 )
    v44 = 1028.0;
  else
    v44 = v43;
  if ( !byte_4C506A0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A0 = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v42 )
    goto LABEL_191;
  v45 = floorf(v44);
  if ( v45 == INFINITY )
    v46 = 0x80000000;
  else
    v46 = (int)v45;
  LODWORD(v42[1].monitor) = v46;
  v47 = this;
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonMBannerLoopCtr = &this->fields.summonMBannerLoopCtr;
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0, 0) )
  {
    noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v50 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_summonMBannerLoopCtr = (struct UIWrapContent_o *)v50;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.summonMBannerLoopCtr, (int32_t)v50, v51, v52);
    v47 = this;
  }
  summonMBannerCenterChild = (UnityEngine_Object_o *)v47->fields.summonMBannerCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonMBannerCenterChild = (__int64 *)&v47->fields.summonMBannerCenterChild;
  noneGachaInfo = UnityEngine_Object__op_Equality(summonMBannerCenterChild, 0, 0);
  if ( (noneGachaInfo & 1) != 0 )
  {
    noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
    if ( !*p_summonMBannerLoopCtr )
      goto LABEL_191;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    v55 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (__int64)v55;
    sub_1C3E508((CGThumbnailListItem_o *)&v47->fields.summonMBannerCenterChild, (int32_t)v55, v56, v57);
  }
  v58 = *p_summonMBannerCenterChild;
  v159 = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
  if ( !v58 )
    goto LABEL_191;
  v59 = *(System_Delegate_o **)(v58 + 40);
  p_onFinished = (CGThumbnailListItem_o *)(v58 + 40);
  v60 = (SpringPanel_OnFinished_o *)sub_1C3E7B0(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v60, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0);
  v61 = System_Delegate__Combine(v59, (System_Delegate_o *)v60, 0);
  v30 = v61;
  if ( v61 )
  {
    v64 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v61->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v61;
    v23 = this;
    if ( (SpringPanel_OnFinished_c *)v61->klass != v64 )
      goto LABEL_64;
  }
  else
  {
    v23 = this;
    p_onFinished->klass = 0;
  }
  sub_1C3E508(p_onFinished, (int32_t)v61, v62, v63);
  v65 = *((_QWORD *)v23 + 45);
  if ( !v65 )
    goto LABEL_191;
  v66 = *(System_Delegate_o **)(v65 + 88);
  p_onFinished = (CGThumbnailListItem_o *)(v65 + 88);
  v67 = (UIScrollView_OnDragNotification_o *)sub_1C3E7B0(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v67, (Il2CppObject *)v23, Method_SummonControl_OnDragStarted__, 0);
  v68 = System_Delegate__Combine(v66, (System_Delegate_o *)v67, 0);
  v30 = v68;
  v153 = v10;
  if ( !v68 )
    goto LABEL_65;
  v71 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v68->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (CGThumbnailListItem_c *)v68;
    if ( (UIScrollView_OnDragNotification_c *)v68->klass == v71 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1C3EA80(v30);
LABEL_65:
  p_onFinished->klass = (CGThumbnailListItem_c *)v30;
LABEL_66:
  sub_1C3E508(p_onFinished, (int32_t)v30, v69, v70);
  v161 = 2 * size;
  if ( 2 * size >= 1 )
  {
    v72 = 0;
    v155 = size - 1;
    v156 = size & 0x80000000;
    v154 = size;
    while ( 1 )
    {
      noneGachaInfo = (__int64)*p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        break;
      v73 = (UnityEngine_GameObject_o *)*((_QWORD *)v23 + 40);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v23, v73, transform, 0, 0);
      if ( !noneGachaInfo )
        break;
      v75 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
      v76 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4C506A6 )
      {
        noneGachaInfo = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      if ( !v76 )
        break;
      UnityEngine_Transform__set_localScale(v76, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v75, 0);
      if ( !*p_bannerLoopCtr )
        break;
      v77 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0);
      if ( !noneGachaInfo )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noneGachaInfo, 0);
      if ( !v77 )
        break;
      UnityEngine_Transform__set_localPosition(v77, localPosition, 0);
      v78 = v72 + 1;
      v162 = v72 + 1;
      v79 = System_Int32__ToString_65146576((int32_t)&v162, (System_String_o *)StringLiteral_4955/*"D5"*/, 0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v75, v79, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v75,
                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v82 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v82->fields._items;
      v84 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v82->fields._version;
      if ( !items )
        break;
      v85 = v82->fields._size;
      v86 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v85 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v82,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &items->obj.klass + v85;
        v82->fields._size = v85 + 1;
        v87[4] = (Il2CppClass *)v86;
        sub_1C3E508((CGThumbnailListItem_o *)(v87 + 4), (int32_t)v86, v80, v81);
      }
      noneGachaInfo = *((_QWORD *)v23 + 77);
      v88 = v72 | v156;
      v89 = (int)(v72 | v156) <= v155 ? 0 : size;
      if ( !noneGachaInfo )
        break;
      v90 = v88 - v89;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v88 - v89,
                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v91 = p_bannerLoopCtr;
      v92 = System_Int32__ToString((int)noneGachaInfo + 40, 0);
      v93 = System_String__Concat_63636468((System_String_o *)StringLiteral_20605/*"img_summon_"*/, v92, 0);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg((SummonControl_o *)v23, v93, v94);
      v95 = (System_Collections_Generic_List_object__o *)*((_QWORD *)v23 + 77);
      if ( !v95 )
        break;
      v96 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = (VaildGachaInfo_o *)System_Collections_Generic_List_object___get_Item(
                                   v95,
                                   v90,
                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = UnityEngine_Object__op_Equality(v96, 0, 0);
      if ( !v86 )
        break;
      v98 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v93;
      GachaBannerComponent__setBannerGachaInfo(v86, Item, v90, v72, (UnityEngine_GameObject_o *)v96, v98, 0);
      if ( !Item )
        break;
      noneGachaInfo = (__int64)this->fields.gachaIdToMiniBannerIndex;
      if ( !noneGachaInfo )
        break;
      if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
              (System_Collections_Generic_Dictionary_int__int__o *)noneGachaInfo,
              Item->fields.id,
              (const MethodInfo_3403B70 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      {
        noneGachaInfo = (__int64)this->fields.gachaIdToMiniBannerIndex;
        if ( !noneGachaInfo )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)noneGachaInfo,
          Item->fields.id,
          v72,
          (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
      }
      noneGachaInfo = (__int64)*v159;
      if ( !*v159 )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v100 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v100,
                                 0,
                                 0);
      if ( !noneGachaInfo )
        break;
      v101 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
      v102 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4C506A6 )
      {
        noneGachaInfo = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      if ( !v102 )
        break;
      UnityEngine_Transform__set_localScale(v102, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v101, 0);
      if ( !*v159 )
        break;
      v103 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*v159, 0);
      if ( !noneGachaInfo )
        break;
      v164 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)noneGachaInfo, 0);
      if ( !v103 )
        break;
      UnityEngine_Transform__set_localPosition(v103, v164, 0);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v75, 0);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v101, name, 0);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v101,
                                 (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v107 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v108 = v107->fields._items;
      v109 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v107->fields._version;
      if ( !v108 )
        break;
      v110 = v107->fields._size;
      v111 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v107,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v112 = &v108->obj.klass + v110;
        v107->fields._size = v110 + 1;
        v112[4] = (Il2CppClass *)v111;
        sub_1C3E508((CGThumbnailListItem_o *)(v112 + 4), (int32_t)v111, v105, v106);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v90,
                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v113 = System_Int32__ToString((int)noneGachaInfo + 40, 0);
      v114 = System_String__Concat_63636468((System_String_o *)StringLiteral_20607/*"img_summon_mini_"*/, v113, 0);
      v116 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v114, v115);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v116, 0, 0) )
      {
        v114 = (System_String_o *)StringLiteral_20608/*"img_summon_mini_236"*/;
        v116 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20608/*"img_summon_mini_236"*/,
                                         v117);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v116, 0, 0) )
          v114 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v119 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1C3E7B0(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v119,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0);
      if ( !v111 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v111,
        Item,
        v90,
        v72,
        (UnityEngine_GameObject_o *)v116,
        v114,
        v119,
        (UIPanel_o *)Component_object,
        0);
      size = v154;
      v23 = this;
      ++v72;
      p_bannerLoopCtr = v91;
      if ( v161 == v78 )
        goto LABEL_123;
    }
LABEL_191:
    sub_1C3E7C0(noneGachaInfo, v9);
  }
LABEL_123:
  v120 = (System_Action_int__bool__o *)sub_1C3E7B0(System_Action_int__bool__TypeInfo);
  System_Action_int__bool____ctor(v120, (Il2CppObject *)v23, (intptr_t)Method_SummonControl_OnClickMiniBanner__, 0);
  MainMenuBar__RegisterSummonBalloonClickAction(v120, 0);
  noneGachaInfo = *((_QWORD *)v23 + 21);
  if ( !noneGachaInfo )
    goto LABEL_191;
  noneGachaInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0);
  if ( !*((_QWORD *)v23 + 22) )
    goto LABEL_191;
  v121 = (UnityEngine_Transform_o *)noneGachaInfo;
  noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*((UnityEngine_Component_o **)v23 + 22), 0);
  if ( !v153 )
    goto LABEL_191;
  v122 = size >= 50 ? 14 : 16;
  v153->fields.slSpriteSize = v122;
  v123 = (UnityEngine_Transform_o *)noneGachaInfo;
  noneGachaInfo = (__int64)this->fields.slideIndexPrefab;
  if ( !noneGachaInfo )
    goto LABEL_191;
  ComponentsInChildren_object__51715312 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                                                                           (UnityEngine_GameObject_o *)noneGachaInfo,
                                                                                           (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ComponentsInChildren_object__51715312, 0) )
  {
    v125 = (System_Action_object__o *)sub_1C3E7B0(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      v125,
      (Il2CppObject *)v153,
      Method_SummonControl___c__DisplayClass180_0__createSummonInfo_b__0__,
      0);
    BasicHelper__ForEach_object_(
      ComponentsInChildren_object__51715312,
      (System_Action_T__o *)v125,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_UISprite___);
  }
  if ( size >= 101 )
  {
    if ( size + 1 >= 2 )
    {
      v129 = 0;
      do
      {
        v130 = (((_BYTE)v129 + 1) & 1) != 0 ? v121 : v123;
        noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   this->fields.slideIndexPrefab,
                                   v130,
                                   0,
                                   0);
        if ( !noneGachaInfo )
          goto LABEL_191;
        noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
        v131 = (UnityEngine_Transform_o *)noneGachaInfo;
        if ( !byte_4C506A6 )
        {
          noneGachaInfo = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
          byte_4C506A6 = 1;
        }
        if ( !v131 )
          goto LABEL_191;
        UnityEngine_Transform__set_localScale(v131, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      }
      while ( size != ++v129 );
    }
  }
  else if ( size >= 1 )
  {
    v126 = 0;
    do
    {
      v127 = v126 >= 0x32 ? v123 : v121;
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 this->fields.slideIndexPrefab,
                                 v127,
                                 0,
                                 0);
      if ( !noneGachaInfo )
        goto LABEL_191;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0);
      v128 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_4C506A6 )
      {
        noneGachaInfo = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      if ( !v128 )
        goto LABEL_191;
      UnityEngine_Transform__set_localScale(v128, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    while ( size != ++v126 );
  }
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_191;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_191;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_191;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)*v159;
  if ( !*v159 )
    goto LABEL_191;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)*v159;
  if ( !*v159 )
    goto LABEL_191;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0);
  noneGachaInfo = (__int64)*v159;
  if ( !*v159 )
    goto LABEL_191;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0);
  if ( !v121 )
    goto LABEL_191;
  noneGachaInfo = UnityEngine_Transform__get_childCount(v121, 0);
  if ( !v123 )
    goto LABEL_191;
  v132 = noneGachaInfo;
  childCount = UnityEngine_Transform__get_childCount(v123, 0);
  v134 = 702.0;
  v135 = childCount;
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( size < 50 )
    v134 = 640.0;
  v136 = v132 <= v135 ? v135 : v132;
  if ( !noneGachaInfo )
    goto LABEL_191;
  v137 = fminf(v134 / (float)v136, 25.0);
  *(float *)(noneGachaInfo + 48) = v137;
  sliderGrid2 = this->fields.sliderGrid2;
  if ( !sliderGrid2 )
    goto LABEL_191;
  sliderGrid2->fields.cellWidth = v137;
  ComponentHelper__SetLocalPositionX(
    (UnityEngine_Component_o *)noneGachaInfo,
    (float)(*(float *)(noneGachaInfo + 48) * -0.5) * (float)(v132 - 1),
    0);
  v139 = v135 - 1;
  if ( v135 < 1 )
  {
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.sliderGrid, 0.0, 0);
    noneGachaInfo = (__int64)this->fields.sliderGrid2;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 0, 0);
    v146 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    ComponentHelper__SetLocalPosition(v146, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  else
  {
    sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsUnderVista = FSUtility__IsUnderVista(0);
    v142 = 0.0;
    if ( IsUnderVista )
      v142 = 4.0;
    ComponentHelper__SetLocalPositionY(sliderGrid, v142, 0);
    noneGachaInfo = (__int64)this->fields.sliderGrid2;
    if ( !noneGachaInfo )
      goto LABEL_191;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0);
    if ( !noneGachaInfo )
      goto LABEL_191;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noneGachaInfo, 1, 0);
    ComponentHelper__SetLocalPositionX(
      (UnityEngine_Component_o *)this->fields.sliderGrid2,
      (float)(v137 * -0.5) * (float)v139,
      0);
    v143 = (UnityEngine_Component_o *)this->fields.sliderGrid2;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v144 = FSUtility__IsUnderVista(0);
    v145 = -13.0;
    if ( v144 )
      v145 = -9.0;
    ComponentHelper__SetLocalPositionY(v143, v145, 0);
  }
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_191;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0);
  noneGachaInfo = (__int64)this->fields.sliderGrid2;
  if ( !noneGachaInfo )
    goto LABEL_191;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0);
  SummonControl__UpdateSummonInfoControlLayout(this, v147);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_191;
  summonInfoCtr = this->fields.summonInfoCtr;
  v149 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v150 = (SummonInfoControl_ClickDelegate_o *)sub_1C3E7B0(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v150, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0);
  if ( !summonInfoCtr )
    goto LABEL_191;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v149, v150, 0);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v151);
  SummonControl__setResourceInfo(this, v152);
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

  if ( (byte_4C53294 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53294 = 1;
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
      UnityEngine_Object__DestroyImmediate_71341752(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_39:
    sub_1C3E7C0(bannerLoopCtr, method);
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
      UnityEngine_Object__DestroyImmediate_71341752(v10, 0);
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
      UnityEngine_Object__DestroyImmediate_71341752(v14, 0);
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
      UnityEngine_Object__DestroyImmediate_71341752(v16, 0);
    }
    while ( --v15 >= 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0;
}


void SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_4C53258 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_10501/*"PURCHASE_ERROR"*/);
    sub_1C3E564(&StringLiteral_10494/*"PURCHASE_CANCEL"*/);
    sub_1C3E564(&StringLiteral_10502/*"PURCHASE_OK"*/);
    byte_4C53258 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C3E7C0(Instance, v6);
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10494/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10501/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10502/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0);
}


void SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 *v7; // x8

  if ( (byte_4C53251 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_10501/*"PURCHASE_ERROR"*/);
    sub_1C3E564(&StringLiteral_10494/*"PURCHASE_CANCEL"*/);
    sub_1C3E564(&StringLiteral_10502/*"PURCHASE_OK"*/);
    byte_4C53251 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10494/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C3E7C0(Instance, v6);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10501/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10502/*"PURCHASE_OK"*/;
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

  if ( (byte_4C5324F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&StringLiteral_10501/*"PURCHASE_ERROR"*/);
    sub_1C3E564(&StringLiteral_10494/*"PURCHASE_CANCEL"*/);
    sub_1C3E564(&StringLiteral_10502/*"PURCHASE_OK"*/);
    byte_4C5324F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10494/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C3E7C0(Instance, v6);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10501/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10502/*"PURCHASE_OK"*/;
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
  SummonControl___c_c *v5; // x8
  float x; // s9
  float y; // s12
  float m_XMin; // s8
  float m_YMin; // s13
  float m_Height; // s10
  float m_Width; // s11
  CommonUI_o *v12; // x20
  System_Action_o *_9__164_0; // x21
  Il2CppObject *v14; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_o *v18; // x20
  UnityEngine_Vector2_o v19; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v20; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C53229 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__exeFormation_b__164_1__);
    sub_1C3E564(&Method_SummonControl___c__exeFormation_b__164_0__);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C53229 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  _9__164_0 = v5->static_fields->__9__164_0;
  if ( !_9__164_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonControl___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v5->static_fields->__9;
    _9__164_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__164_0, v14, Method_SummonControl___c__exeFormation_b__164_0__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__164_0 = _9__164_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__164_0, (int32_t)_9__164_0, v16, v17);
  }
  if ( !v12 )
    sub_1C3E7C0(Instance, v4);
  v20.fields.m_YMin = m_YMin + 33.0;
  v19.fields.y = y + 33.0;
  v19.fields.x = x;
  v20.fields.m_XMin = m_XMin;
  v20.fields.m_Width = m_Width;
  v20.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v12, v19, 0.0, v20, _9__164_0, 0);
  v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__164_1__, 0);
  MainMenuBar__SetDispBtnAct(1, v18, 0);
}


void SummonControl__exeSummon(SummonControl_o *this, GachaRqParamData_o *paramData, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v8; // x1
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_4C53249 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3352/*"CHECK_SERVANT_FRAME"*/);
    byte_4C53249 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.gachaParamData, (int32_t)paramData, v5, v6);
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
      sub_1C3E7C0(closeBtn, v8);
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
  __int64 v8; // x1

  if ( (byte_4C5328F & 1) == 0 )
  {
    sub_1C3E564(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__executeEnhanceTresureDevice_b__286_0__);
    byte_4C5328F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1C3E7B0(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__286_0__,
    0);
  if ( !v5 )
    sub_1C3E7C0(v7, v8);
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
  if ( (byte_4C5326A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
    sub_1C3E564(&Method_SummonControl_autoSellSettingChange2__);
    this = (SummonControl_o *)sub_1C3E564(&Method_SummonControl_friendSummonConfirmResult__);
    byte_4C5326A = 1;
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
    v6 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v7);
    v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0);
    gachaParamData = v2->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v6, v8, gachaParamData->fields.gachaId, v9);
      return;
    }
LABEL_22:
    sub_1C3E7C0(this, method);
  }
  this = (SummonControl_o *)v2->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v11 )
      break;
    v13 = v2->fields.gachaParamData;
    if ( !v13 )
      sub_1C3E7C0(v11, v12);
    gachaSubEntity = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C3E7C0(v11, v12);
    if ( v13->fields.gachaId == LODWORD(v27.fields._current[1].klass) )
    {
      SummonConfirmMessage = GachaSubEntity__GetSummonConfirmMessage((GachaSubEntity_o *)v27.fields._current, 0);
      goto LABEL_16;
    }
  }
  gachaSubEntity = 0;
  SummonConfirmMessage = 0;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v16 = v2->fields.gachaParamData;
  if ( !v16 )
    goto LABEL_22;
  friendPoint = v2->fields.friendPoint;
  v18 = v2->fields.confirmDlgInfo;
  gachaTime = v16->fields.gachaTime;
  gachaResourceNum = v16->fields.gachaResourceNum;
  needPoint = v2->fields.needPoint;
  v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v23);
  v24 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0);
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
void SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C5326B & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_friendSummonConfirmResult__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5326B = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close_35555300(confirmDlgInfo, 0, method);
  v6 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C3E57C(Method_SummonControl_friendSummonConfirmResult__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3E548(v6, v6[4]);
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
    sub_1C3E7C0(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *SummonControl__getCurrentGachaData(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_4C53234 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4C53234 = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1C3E7C0(0, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 *v14; // x24
  int32_t v15; // w23
  __int64 v16; // x8
  System_Predicate_object__o **v17; // x22
  System_Predicate_object__o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C53292 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&System_Predicate_VaildGachaInfo__TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass289_0__getFriendPointIndex_b__0__);
    sub_1C3E564(&SummonControl___c__DisplayClass289_0_TypeInfo);
    byte_4C53292 = 1;
  }
  v9 = sub_1C3E7B0(SummonControl___c__DisplayClass289_0_TypeInfo);
  SummonControl___c__DisplayClass289_0___ctor((SummonControl___c__DisplayClass289_0_o *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = oldGachas,
        v14 = (__int64 *)(v9 + 16),
        sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)oldGachas, v12, v13),
        (vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList) == 0) )
  {
LABEL_23:
    sub_1C3E7C0(vaildGachaList, v11);
  }
  v15 = 0;
  while ( v15 < vaildGachaList->fields._size )
  {
    if ( gachaId )
    {
      vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      vaildGachaList,
                                                                      v15,
                                                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !vaildGachaList )
        goto LABEL_23;
      if ( HIDWORD(vaildGachaList[1].monitor) == 3 )
      {
        vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
        if ( !vaildGachaList )
          goto LABEL_23;
        vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        vaildGachaList,
                                                                        v15,
                                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( !vaildGachaList )
          goto LABEL_23;
        if ( LODWORD(vaildGachaList->fields._items) == gachaId )
          return v15;
      }
    }
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
    ++v15;
    if ( !vaildGachaList )
      goto LABEL_23;
  }
  v16 = *v14;
  if ( *v14 )
  {
    *(_DWORD *)(v9 + 24) = oldCurrentIdx;
    v17 = (System_Predicate_object__o **)(v9 + 32);
    while ( oldCurrentIdx < *(_DWORD *)(v16 + 24) )
    {
      v18 = *v17;
      v19 = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
      if ( !*v17 )
      {
        v18 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_VaildGachaInfo__TypeInfo);
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v9,
          Method_SummonControl___c__DisplayClass289_0__getFriendPointIndex_b__0__,
          0);
        *(_QWORD *)(v9 + 32) = v18;
        sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v18, v20, v21);
      }
      if ( !v19 )
        goto LABEL_23;
      vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindIndex(
                                                                      v19,
                                                                      (System_Predicate_T__o *)v18,
                                                                      (const MethodInfo_37B5CB8 *)Method_System_Collections_Generic_List_VaildGachaInfo__FindIndex__);
      if ( ((unsigned int)vaildGachaList & 0x80000000) == 0 )
        return (int)vaildGachaList;
      v16 = *(_QWORD *)(v9 + 16);
      oldCurrentIdx = *(_DWORD *)(v9 + 24) + 1;
      *(_DWORD *)(v9 + 24) = oldCurrentIdx;
      if ( !v16 )
        goto LABEL_23;
    }
  }
  return 0;
}


UserGachaEntity_o *SummonControl__getUserGachaData(SummonControl_o *this, int32_t gachaId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C53233 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53233 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C3E7C0(Instance, v5);
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
  __int64 v5; // x1
  CGThumbnailListItem_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C53223 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C53223 = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1C3E7C0(0, v5);
    p_stoneFragmentsShopEntity = (CGThumbnailListItem_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0);
    p_stoneFragmentsShopEntity->klass = (CGThumbnailListItem_c *)EntityOfFragmentsShop;
    sub_1C3E508(p_stoneFragmentsShopEntity, (int32_t)EntityOfFragmentsShop, v8, v9);
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

  if ( (byte_4C53222 & 1) == 0 )
  {
    sub_1C3E564(&FSUtility_TypeInfo);
    byte_4C53222 = 1;
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
  if ( (byte_4C5328B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    this = (SummonControl_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5328B = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
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
        sub_1C3E7C8(this, svtId);
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
    sub_1C3E7C0(this, svtId);
  }
  v9 = 0;
LABEL_15:
  objectId = 0;
LABEL_16:
  result = v9;
  *svtId = objectId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
          sub_1C3E7C8(this, *(_QWORD *)&svtId);
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
    sub_1C3E7C0(this, *(_QWORD *)&svtId);
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
  if ( (byte_4C5327F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (SummonControl_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5327F = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1C3E7C8(this, method);
      v9 = v8->m_Items[v6];
      if ( !v9 || !v5 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v5,
                                  v9->fields.objectId,
                                  (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C3E7C0(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4C5329F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5329F = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0, 0);
      return;
    }
LABEL_9:
    sub_1C3E7C0(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3442/*"CLICK_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  void *limitWarningDlgInfo; // x0
  _DWORD *v6; // x20
  int32_t v7; // w20
  BalanceConfig_c *v8; // x0
  const MethodInfo *v9; // x1
  SummonLimitWarningDlgComponent_o *v10; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v11; // x21
  System_Action_o *v12; // x22

  if ( (byte_4C5329E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_ShowConfirmDialog__);
    sub_1C3E564(&Method_SummonControl_limitManaConfirmResult__);
    sub_1C3E564(&StringLiteral_3442/*"CLICK_CANCEL"*/);
    byte_4C5329E = 1;
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
        v7 = v6[48];
        v8 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = BalanceConfig_TypeInfo;
        }
        if ( v7 >= v8->static_fields->UserItemMax )
        {
          v10 = this->fields.limitWarningDlgInfo;
          v11 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1C3E7B0(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0);
          v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0);
          if ( !v10 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v10, v11, v12, 0);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0, 0);
          SummonControl__loadAssetsForSummon(this, v9);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0, 0);
        return;
      }
LABEL_21:
      sub_1C3E7C0(limitWarningDlgInfo, *(_QWORD *)&res);
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
  __int64 v4; // x1
  SummonRootComponent_o *klass; // x20
  System_Action_o *v6; // x21
  __int64 naturalAligment; // x9
  SummonControl_o *v8; // x0
  bool v9; // w1
  const MethodInfo *v10; // x2

  if ( (byte_4C53272 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl__loadAssetsForSummon_b__248_0__);
    sub_1C3E564(&SummonRootComponent_TypeInfo);
    byte_4C53272 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__248_0__, 0),
        !klass) )
  {
    sub_1C3E7C0(Instance, v4);
  }
  naturalAligment = SummonRootComponent_TypeInfo->_2.naturalAligment;
  if ( klass->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[naturalAligment - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v6, 0);
  }
  else
  {
    sub_1C3EA80(klass);
    SummonControl__friendSummonConfirmResult(v8, v9, v10);
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

  if ( (byte_4C53240 & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_onClickChangeBanner__);
    sub_1C3E564(&StringLiteral_12793/*"SetBannerCenter"*/);
    byte_4C53240 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_71326444(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12793/*"SetBannerCenter"*/,
      0);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_49221928(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0),
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
      sub_1C3E7C0(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_49221928(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0);
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

  if ( (byte_4C53241 & 1) == 0 )
  {
    sub_1C3E564(&Method_SummonControl_onClickLeftChangeBanner__);
    sub_1C3E564(&StringLiteral_12793/*"SetBannerCenter"*/);
    byte_4C53241 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_71326444(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12793/*"SetBannerCenter"*/,
      0);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_49221928(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0),
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
      sub_1C3E7C0(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_49221928(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0);
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
  __int64 v13; // x1
  float v14; // s0
  SummonControl___c_c *v15; // x0
  float v16; // s11
  System_Action_o *_9__163_0; // x22
  Il2CppObject *v18; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20
  UnityEngine_Rect_o v23; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C53228 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__openAfterSummonInfo_b__163_1__);
    sub_1C3E564(&Method_SummonControl___c__openAfterSummonInfo_b__163_0__);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    sub_1C3E564(&StringLiteral_13607/*"TUTORIAL_MESSAGE_SUMMON2"*/);
    byte_4C53228 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13607/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0);
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
  _9__163_0 = v15->static_fields->__9__163_0;
  if ( !_9__163_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = SummonControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__163_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__163_0, v18, Method_SummonControl___c__openAfterSummonInfo_b__163_0__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__163_0 = _9__163_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__163_0, (int32_t)_9__163_0, v20, v21);
  }
  if ( !Instance )
    sub_1C3E7C0(v15, v13);
  v23.fields.m_Height = m_Height + 33.0;
  v23.fields.m_YMin = m_YMin + 33.0;
  v23.fields.m_XMin = m_XMin + v16;
  v23.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v4,
    TUTORIAL_MENU_ARROW_POS_FS,
    v23,
    0.0,
    0,
    -1,
    _9__163_0,
    0);
  v22 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__163_1__, 0);
  MainMenuBar__SetMenuBtnAct(v22, 0);
}


void SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4C53227 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3435/*"CLEAR_TUTORIAL"*/);
    byte_4C53227 = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3435/*"CLEAR_TUTORIAL"*/, 0),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0) )
  {
    sub_1C3E7C0(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0);
}


void SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  void *Item; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v9; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w21
  __int64 v15; // x21
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_Collections_Generic_List_object__o *v26; // x21
  System_Comparison_T__o *v27; // x22
  Il2CppObject *v28; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *v32; // x22
  int32_t v33; // w21
  int32_t v34; // w22
  System_Action_o *v35; // x20

  if ( (byte_4C5322A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&System_Comparison_EventTutorialEntity__TypeInfo);
    sub_1C3E564(&EventTutorialEntity_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__openSvtEqInfo_b__165_1__);
    sub_1C3E564(&Method_SummonControl___c__DisplayClass165_0__openSvtEqInfo_b__0__);
    sub_1C3E564(&SummonControl___c__DisplayClass165_0_TypeInfo);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C5322A = 1;
  }
  v3 = sub_1C3E7B0(SummonControl___c__DisplayClass165_0_TypeInfo);
  SummonControl___c__DisplayClass165_0___ctor((SummonControl___c__DisplayClass165_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v9 = System_Int32__ToString((int)currentGachaInfo + 16, 0);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v9, 0);
  *(_QWORD *)(v3 + 16) = EventTutorialEntity;
  v11 = (void **)(v3 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)EventTutorialEntity, v12, v13);
  Item = *(void **)(v3 + 16);
  if ( !Item )
    goto LABEL_11;
  v14 = 0;
  while ( v14 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v14,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v11;
    ++v14;
    if ( !*v11 )
      goto LABEL_11;
  }
  v15 = sub_1C3E7B0(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v15, 0);
  if ( !v15 )
    goto LABEL_11;
  *(_DWORD *)(v15 + 24) = 1;
  v16 = sub_1C3E60C(int___TypeInfo, 1);
  *(_QWORD *)(v15 + 80) = v16;
  sub_1C3E508((CGThumbnailListItem_o *)(v15 + 80), v16, v17, v18);
  v21 = *(_QWORD *)(v15 + 80);
  if ( !v21 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v21 + 24) )
    sub_1C3E7C8(Item, v5);
  *(_DWORD *)(v21 + 32) = 1;
  Item = *v11;
  if ( !*v11 )
    goto LABEL_11;
  v22 = *((_QWORD *)Item + 2);
  v23 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++*((_DWORD *)Item + 7);
  if ( !v22 )
    goto LABEL_11;
  v24 = *((int *)Item + 6);
  if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v15,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * v24;
    *((_DWORD *)Item + 6) = v24 + 1;
    *(_QWORD *)(v25 + 32) = v15;
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 32), v15, v19, v20);
  }
  Item = SummonControl___c_TypeInfo;
  v26 = (System_Collections_Generic_List_object__o *)*v11;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    Item = SummonControl___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = SummonControl___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v27 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_SummonControl___c__openSvtEqInfo_b__165_1__, 0);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__165_1 = (struct System_Comparison_EventTutorialEntity__o *)v27;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__165_1, (int32_t)v27, v30, v31);
  }
  if ( !v26 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_58421028(
    v26,
    v27,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v32 = (System_Collections_Generic_List_object__o *)*v11;
  if ( !*v11 )
LABEL_11:
    sub_1C3E7C0(Item, v5);
  v33 = v32->fields._size - 1;
  if ( v33 >= 0 )
  {
    while ( v32 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               v33,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v11;
        if ( !*v11 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v33,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v34 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        Item = (void *)TutorialFlag__GetGachaFlg(v34, 0);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v11;
          if ( !*v11 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v33,
            (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v32 = (System_Collections_Generic_List_object__o *)*v11;
      if ( --v33 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v35 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v3, Method_SummonControl___c__DisplayClass165_0__openSvtEqInfo_b__0__, 0);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v32,
    v35,
    0);
}


void SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_4C53276 & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_callbackTutorialSet__);
    sub_1C3E564(&StringLiteral_11086/*"REQUEST_OK"*/);
    byte_4C53276 = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_1C3E7C0(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11086/*"REQUEST_OK"*/, 0);
}


void SummonControl__progTutorial(SummonControl_o *this, const MethodInfo *method)
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
      SummonControl__openSummonExeArrow(this, v6);
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
        sub_1C3E7C0(summonInfoCtr, v4);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0);
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

  if ( (byte_4C5322E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5322E = 1;
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
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo )
    goto LABEL_33;
  summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)summonBannerInfo,
                                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !summonBannerInfo )
    goto LABEL_33;
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0);
  this->fields.summonType = VaildPayType;
  v14 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C532BE )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532BE = 1;
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
    sub_1C3E7C0(summonBannerInfo, method);
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
  int32_t v10; // w24
  int32_t v11; // w23
  char v12; // w25
  const MethodInfo *v13; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  int32_t FriendPointIndex; // w4
  const MethodInfo *v20; // x7

  if ( (byte_4C53291 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53291 = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_29;
  currentIdx = this->fields.currentIdx;
  v5 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)vaildGachaList,
         (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_VaildGachaInfo__ToArray__);
  v6 = this->fields.vaildGachaList;
  v7 = (VaildGachaInfo_array *)v5;
  if ( !v6 || (method = (const MethodInfo *)(unsigned int)this->fields.currentIdx, v6->fields._size <= (int)method) )
  {
    v9 = 0;
    goto LABEL_12;
  }
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                     (int32_t)method,
                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !vaildGachaList
    || (v8 = vaildGachaList, (vaildGachaList = this->fields.vaildGachaList) == 0)
    || (v9 = v8[4],
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0) )
  {
LABEL_29:
    sub_1C3E7C0(vaildGachaList, method);
  }
  if ( *((_DWORD *)vaildGachaList + 13) != 3 )
  {
    vaildGachaList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( vaildGachaList )
    {
      vaildGachaList = DataManager__GetMasterData_object_(
                         (DataManager_o *)vaildGachaList,
                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( vaildGachaList )
      {
        vaildGachaList = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)vaildGachaList,
                           v9,
                           (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( vaildGachaList )
        {
          v11 = *((_DWORD *)vaildGachaList + 18);
          if ( v11 || *((_DWORD *)vaildGachaList + 36) )
          {
            v10 = *((_DWORD *)vaildGachaList + 36);
            goto LABEL_13;
          }
LABEL_12:
          v10 = 0;
          v11 = 0;
LABEL_13:
          v12 = 0;
          goto LABEL_14;
        }
      }
    }
    goto LABEL_29;
  }
  v10 = 0;
  v11 = 0;
  v12 = 1;
LABEL_14:
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
  System_String_o *assetPath; // x20
  CGThumbnailListItem_o *p_bannerAssetData; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5322D & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C5322D = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (CGThumbnailListItem_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0);
    p_bannerAssetData->klass = 0;
    sub_1C3E508(p_bannerAssetData, 0, v5, v6);
  }
}


void SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w27
  System_Int32_array *storyAdjustIds; // x21
  Il2CppObject *p_obj; // x28
  int32_t gachaSubId; // w26
  GachaDrawRequest_o *v10; // x20
  il2cpp_array_size_t max_length; // x8
  System_String_o *v12; // x22
  unsigned __int64 v13; // x24
  int32_t v14; // w29
  System_String_o *v15; // x0
  System_String_o *selectBonusListData; // x29
  int32_t shopIdIdx; // [xsp+10h] [xbp-70h]
  int32_t ticketItemId; // [xsp+14h] [xbp-6Ch]
  int32_t warId; // [xsp+18h] [xbp-68h]
  int32_t gachaTime; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C53273 & 1) == 0 )
  {
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_NetworkManager_getRequest_GachaDrawRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_callbackGachaDraw__);
    sub_1C3E564(&StringLiteral_166/*" : "*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53273 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v4,
                                             (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_22;
  gachaId = gachaParamData->fields.gachaId;
  storyAdjustIds = gachaParamData->fields.storyAdjustIds;
  p_obj = &gachaParamData->fields.selectBonusList->obj;
  warId = gachaParamData->fields.warId;
  gachaTime = gachaParamData->fields.gachaTime;
  gachaSubId = gachaParamData->fields.gachaSubId;
  v10 = (GachaDrawRequest_o *)maskObject;
  shopIdIdx = gachaParamData->fields.shopIdIdx;
  ticketItemId = gachaParamData->fields.ticketItemId;
  if ( storyAdjustIds )
  {
    max_length = storyAdjustIds->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v12 = (System_String_o *)StringLiteral_1/*""*/;
        v13 = 0;
        v14 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v13 >= (unsigned int)max_length )
            sub_1C3E7C8(maskObject, method);
          v15 = System_Int32__ToString(v14, 0);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_63674716(
                                                     v12,
                                                     v15,
                                                     (System_String_o *)StringLiteral_166/*" : "*/,
                                                     0);
          LODWORD(max_length) = storyAdjustIds->max_length;
          ++v13;
          v12 = (System_String_o *)maskObject;
          v14 += 4;
        }
        while ( (__int64)v13 < (int)max_length );
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0),
        this->fields.isShowingSummonEffect = 1,
        !v10) )
  {
LABEL_22:
    sub_1C3E7C0(maskObject, method);
  }
  GachaDrawRequest__beginRequest(
    v10,
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
  System_String_o *MainBgmName; // x20
  CommonUI_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C53290 & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C53290 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    goto LABEL_27;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0, 39, 0);
  MainMenuBar__setMenuActive(1, 0, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_39887836((TitleInfoControl_o *)Instance, 1, 0, 0, 0);
  SummonControl__setDispSummonInfo(this, 1, v7);
  SummonControl__setUserResourceDisp(this, v8);
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
    SummonControl__progTutorial(this, v9);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0);
    SummonControl__reDispSummonBannerList(this, v10);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_27:
    sub_1C3E7C0(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C3E7C0(0, v11);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v13.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v12);
}


void SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v4, v5);
  SummonControl__resetStoneInfo(this, v6);
}


void SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4C5328A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__resetResultList_b__281_0__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C5328A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0, 0);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0);
  }
  this->fields.isResult = 0;
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__281_0__, 0);
  if ( !v7 )
LABEL_13:
    sub_1C3E7C0(Instance, v4);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_4C53295 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C3E564(&StringLiteral_2949/*"BONUS_SELECT_GACHA"*/);
    byte_4C53295 = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0 )
    {
LABEL_14:
      sub_1C3E7C0(Master_object, v3);
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
          sub_1C3E7C8(gachaMst, method);
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
      sub_1C3E7C0(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (CGThumbnailListItem_c *)v7;
    sub_1C3E508(p_useGachaData, v7, v4, v5);
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

  if ( (byte_4C53237 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObjectList_GameObject___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53237 = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_30DAF98 *)Method_AssetData_GetObjectList_GameObject___);
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
        sub_1C3E7C8(bannerAssetData, searchTarget);
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v9 + 4),
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1C3E7C0(bannerAssetData, searchTarget);
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
    sub_1C3E7C0(indexPanel, method);
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
    sub_1C3E7C8(indexPanel, method);
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

  if ( (byte_4C53242 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&Method_SummonControl__setChangeSummonInfo_b__194_0__);
    sub_1C3E564(&Method_SummonControl_exeSummon__);
    byte_4C53242 = 1;
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
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v5, v6);
  SummonControl__setResourceInfo(this, v7);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v10 = (SummonInfoControl_ClickDelegate_o *)sub_1C3E7B0(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v10, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v10, 0),
        v11 = this->fields.summonInfoCtr,
        v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__194_0__, 0),
        !v11) )
  {
LABEL_8:
    sub_1C3E7C0(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v11, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4C53247 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_GachaBannerComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SummonMiniBannerComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    this = (SummonControl_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53247 = 1;
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_GachaBannerComponent___);
    v4->fields.currentBannerComp = (struct GachaBannerComponent_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.currentBannerComp, (int32_t)Component_object, v7, v8);
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
                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SummonMiniBannerComponent___);
          v4->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v11;
          sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.currentSummonMBannerComponent, (int32_t)v11, v12, v13);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_1C3E7C0(this, *(_QWORD *)&currentIdx);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1C3E7C0(0, isTutorial);
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
  __int64 v12; // x1
  __int64 v13; // x8
  SummonControl_o *v14; // x0
  int32_t v15; // w1

  if ( (byte_4C53245 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53245 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C532BF )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532BF = 1;
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
    if ( !byte_4C532BF )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C532BF = 1;
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
  if ( !byte_4C532C0 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532C0 = 1;
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
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !bannerInfoList )
LABEL_35:
          sub_1C3E7C0(bannerInfoList, v12);
        v13 = *((_QWORD *)bannerInfoList + 16);
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
      v15 = *((_DWORD *)bannerInfoList + 34);
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

  if ( (byte_4C53243 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_1C3E564(&SummonControl_TypeInfo);
    byte_4C53243 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v5, v6);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v9 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v10 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v11 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v12 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C3E7C0(vaildGachaList, method);
  }
}


void SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C53288 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C53288 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(summonResultInfo, method);
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

  if ( (byte_4C53244 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    byte_4C53244 = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__51315876(
                                                sliderGrid,
                                                (const MethodInfo_30F04A4 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    sub_1C3E7C0(sliderGrid, *(_QWORD *)&idx);
  }
}


void SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *Time; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UILabel_o *summonHelpLabel; // x21
  TerminalPramsManager_c *v11; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  long double v16; // q0
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct GachaEntity_array *ListValidData; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v31; // x20
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5322B & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&Method_SummonControl_LoadBannerEnd__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12456/*"SUMMON_HELP_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_13175/*"SummonBanners/DownloadSummonBanner"*/);
    sub_1C3E564(&StringLiteral_6396/*"FAIL_LOAD"*/);
    sub_1C3E564(&StringLiteral_20443/*"img_line_summon"*/);
    sub_1C3E564(&StringLiteral_20325/*"img_bg_banner"*/);
    byte_4C5322B = 1;
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
  SummonControl__setDispSummonInfo(this, 1, v6);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0, 39, 0);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_39887836((TitleInfoControl_o *)Time, 1, 0, 0, 0);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0;
  this->fields.isDoneTutorial = 1;
  v7 = StringLiteral_13175/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13175/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetPath, v7, v8, v9);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"SUMMON_HELP_MESSAGE"*/, 0);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C532BD )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C532BD = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v11->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v13, v14);
  SummonControl__setUserResourceDisp(this, v15);
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8EC78(v16);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8EC78(v16);
  Time = **(UnityEngine_Transform_o ***)(v18 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.gachaMst, (int32_t)MasterData_object, v20, v21);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0);
  this->fields.useGachaData = ListValidData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.useGachaData, (int32_t)ListValidData, v23, v24);
  SummonControl__CheckValidGachaList(this, v25);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.vaildGachaList, 0, v26, v27);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20443/*"img_line_summon"*/, 0);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&Time->klass[2]._1.this_arg.bits)(
    Time,
    Time->klass[2]._1.element_class);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_20325/*"img_bg_banner"*/, 0);
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
    sub_1C3E7C0(Time, v4);
  }
  v31 = this->fields.assetPath;
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v32, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v31, v32, 1, 0);
}


void SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SummonResultComponent_o *Instance; // x0
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  System_Action_o *_9__273_0; // x21
  Il2CppObject *v8; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C53284 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__setSummonResultList_b__273_0__);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    sub_1C3E564(&StringLiteral_9327/*"NO_EXIST"*/);
    sub_1C3E564(&StringLiteral_12219/*"SHOW_TALK"*/);
    byte_4C53284 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40473944(107, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_40473944(108, 0) && SummonControl__isSvtEqSummonResult(this, v3) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = (CommonUI_o *)Instance;
      v6 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v6 = SummonControl___c_TypeInfo;
      }
      _9__273_0 = v6->static_fields->__9__273_0;
      if ( !_9__273_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = SummonControl___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__273_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(_9__273_0, v8, Method_SummonControl___c__setSummonResultList_b__273_0__, 0);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__273_0 = _9__273_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__273_0, (int32_t)_9__273_0, v10, v11);
      }
      if ( !v5 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_31264116(v5, 2, 108, _9__273_0, 0, 0, 0);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12219/*"SHOW_TALK"*/, 0);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9327/*"NO_EXIST"*/, 0);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1C3E7C0(Instance, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  System_Collections_Generic_List_object__o *bannerInfoList; // x0
  int32_t v6; // w21
  bool v7; // w20
  const MethodInfo *v8; // x2

  v3 = isEnable;
  if ( (byte_4C53225 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    byte_4C53225 = 1;
  }
  if ( !this->fields.isDoneTutorial )
    v3 &= this->fields.tutorialKind != 2;
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_14;
  v6 = 0;
  while ( v6 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v6,
                                                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, v3 & 1, 0);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.bannerInfoList;
      ++v6;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_14;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.leftArrowBtn;
  if ( !bannerInfoList
    || (v7 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v7, 0),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.rightArrowBtn) == 0) )
  {
LABEL_14:
    sub_1C3E7C0(bannerInfoList, isEnable);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UILabel_o *currentFragmentNumLb; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  Il2CppObject *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C53230 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_SummonControl__setUserResourceDisp_b__171_0__);
    sub_1C3E564(&StringLiteral_25112/*"{0:N0}"*/);
    byte_4C53230 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v5, v6);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v9, v10, v11, v12, v13, v14);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v17, 0);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v19 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
  System_Action_int____ctor(v19, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__171_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v19, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v20, v21, v22, v23, v24, v25);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v27, 0);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v28, 0);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v30, v31, v32, v33, v34, v35);
  Master_object = System_String__Format((System_String_o *)StringLiteral_25112/*"{0:N0}"*/, v36, 0);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v37, 0)) == 0)
    || (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        GameObjectExtensions__SetLocalPositionX(v38, -179.0, 0),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0)
    || (v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v39, 0)) == 0) )
  {
LABEL_21:
    sub_1C3E7C0(Master_object, v8);
  }
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(v40, 179.0, 0);
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

  if ( (byte_4C53265 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SummonControl_ShowConfirmDialog__);
    byte_4C53265 = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  int32_t monitor; // w22
  _QWORD *v12; // x8
  _DWORD *v13; // x8
  int32_t v14; // w22
  int32_t klass; // w23
  int64_t klass_low; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppObject *v22; // x1
  Il2CppClass **v23; // x0
  int32_t v24; // w22

  if ( (byte_4C5323F & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C5323F = 1;
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
        v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v6->fields._size >= 1 )
        {
          v8 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v6,
                     v8,
                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v6,
                       v8,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v13 = Item[3].monitor;
                  if ( !v13 )
                    break;
                  if ( !v13[6] )
                    sub_1C3E7C8(Item, v10);
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
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v6,
                         v8,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                if ( CondType__IsOpen(klass, v14, klass_low, 0, 0, 0) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v7 )
                    break;
                  items = v7->fields._items;
                  v20 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v7->fields._version;
                  if ( !items )
                    break;
                  size = v7->fields._size;
                  v22 = Item;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v7,
                      Item,
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v23 = &items->obj.klass + size;
                    v7->fields._size = size + 1;
                    v23[4] = (Il2CppClass *)v22;
                    sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v6,
                           v8,
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v24 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                  TutorialFlag__SetGachaFlg(v24, 0);
                }
              }
            }
            if ( ++v8 >= v6->fields._size )
              goto LABEL_39;
          }
          sub_1C3E7C0(Item, v10);
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
  Il2CppObject *_40473944; // x0
  const MethodInfo *v4; // x1
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  System_Action_o *_9__268_0; // x21
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

  if ( (byte_4C53280 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C3E564(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl_DialogCallBack__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&Method_SummonControl___c__showServantDialog_b__268_0__);
    sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C53280 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40473944 = (Il2CppObject *)TutorialFlag__Get_40473944(107, 0);
  if ( ((unsigned __int8)_40473944 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _40473944 = (Il2CppObject *)TutorialFlag__Get_40473944(108, 0);
    if ( ((unsigned __int8)_40473944 & 1) == 0 )
    {
      _40473944 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v4);
      if ( ((unsigned __int8)_40473944 & 1) != 0 )
      {
        _40473944 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = (CommonUI_o *)_40473944;
        v6 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v6 = SummonControl___c_TypeInfo;
        }
        _9__268_0 = v6->static_fields->__9__268_0;
        if ( !_9__268_0 )
        {
          if ( !v6->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v6);
            v6 = SummonControl___c_TypeInfo;
          }
          v8 = (Il2CppObject *)v6->static_fields->__9;
          _9__268_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(_9__268_0, v8, Method_SummonControl___c__showServantDialog_b__268_0__, 0);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__268_0 = _9__268_0;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__268_0, (int32_t)_9__268_0, v10, v11);
        }
        if ( !v5 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_31264116(v5, 2, 108, _9__268_0, 0, 0, 0);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
LABEL_35:
    sub_1C3E7C8(_40473944, v4);
  v14 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v14 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v14->fields.type, 0) )
  {
    _40473944 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_40473944 )
      goto LABEL_34;
    _40473944 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_40473944,
                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v15 = this->fields.gachaResInfoList;
    if ( !v15 )
      goto LABEL_34;
    v16 = this->fields.getSvtIdx;
    if ( (unsigned int)v16 < LODWORD(v15->max_length) )
    {
      v17 = v15->m_Items[v16];
      if ( v17 )
      {
        if ( _40473944 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_40473944,
                     v17->fields.userSvtId,
                     (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v20, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_31250808(
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
      sub_1C3E7C0(_40473944, v4);
    }
    goto LABEL_35;
  }
  _40473944 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = (CommonUI_o *)_40473944;
  v26 = (ServantStatusDialog_EndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v26, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0);
  if ( !v25 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_31247424(v25, 6, userSvtId, v26, 0, 0);
}


void SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C53257 & 1) == 0 )
  {
    sub_1C3E564(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl_endPurchaseStone__);
    byte_4C53257 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C3E7B0(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0);
  if ( !Instance )
    sub_1C3E7C0(v5, v6);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v4, 0, 0, 0);
}


void SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C53279 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__showSummonEffect_b__255_0__);
    byte_4C53279 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__255_0__, 0);
  if ( !v5 )
    sub_1C3E7C0(v8, v9);
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

  if ( (byte_4C53283 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl__showSummonResultInfo_b__272_0__);
    byte_4C53283 = 1;
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
    TitleInfoControl__setBackBtnSprite_39887836(titleInfo, 1, 0, 0, 0);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && LODWORD(overflowSvtCoinInfos->max_length) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v7 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      v9 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__272_0__, 0);
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
    sub_1C3E7C0(titleInfo, method);
  SummonResultComponent__SetActive((SummonResultComponent_o *)titleInfo, 1, 0);
}


void SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C53250 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl_endPurchaseSvtEqFrame__);
    sub_1C3E564(&Method_SummonControl_resetStoneInfo__);
    byte_4C53250 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1C3E7B0(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0);
  if ( !Instance )
    sub_1C3E7C0(v6, v7);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v4, v5, 0);
}


void SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C5324E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SummonControl_endPurchaseSvtFrame__);
    sub_1C3E564(&Method_SummonControl_resetStoneInfo__);
    byte_4C5324E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1C3E7B0(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseSvtFrame__, 0);
  v5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0);
  if ( !Instance )
    sub_1C3E7C0(v6, v7);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v25; // x23
  System_Action_o *v26; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C5327D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C3E564(&ServantAssetArgs_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C3E564(&Method_SummonControl__showSvtTalk_b__263_0__);
    sub_1C3E564(&Method_SummonControl_close__);
    sub_1C3E564(&StringLiteral_3471/*"CLICK_OK"*/);
    byte_4C5327D = 1;
  }
  entity = 0;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_40;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= LODWORD(gachaResInfoList->max_length) )
    sub_1C3E7C8(Instance, v5);
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_40;
  userSvtId = v8->fields.userSvtId;
  objectId = v8->fields.objectId;
  limitCount = v8->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v12 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v12,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
    v14 = 0;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v12,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_40;
    v14 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0);
  if ( !MasterData_object )
LABEL_40:
    sub_1C3E7C0(Instance, v5);
  v15 = (int)Instance;
  v16 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0);
  if ( v16 && (v17 = ServantVoiceEntity__GetSummonScriptId(v16, v15, 0)) != 0 )
  {
    summonScriptId = v17;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v20 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__263_0__, 0);
    if ( !v19 )
      goto LABEL_40;
    ScriptManager__PlayGacha_44524380(
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
      v21 = (ServantAssetArgs_o *)sub_1C3E7B0(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_46680228(v21, objectId, limitCount, 0, 0, 0, 0);
      this->fields.battleAssetArgs = v21;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.battleAssetArgs, (int32_t)v21, v22, v23);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0);
    }
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v26 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl_close__, 0);
    if ( !v25 )
      goto LABEL_40;
    ScriptManager__PlayGacha_44524380(
      (ScriptManager_o *)v25,
      (UserServantEntity_o *)v14,
      objectId,
      limitCount,
      0,
      1,
      v26,
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *v4; // x19
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
  if ( (byte_4C532C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C532C9 = 1;
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
          sub_1C3E7C0(this, method);
        }
        UICenterOnChild__CenterOn_49221928(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v4->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._spring_5__2, (int32_t)Component_object, v9, v10);
    v11 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0, 0) )
    {
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, 0, v12, v13);
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
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._spring_5__2, 0, v2, v3);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__188_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  PlayMakerFSM_o *fsm; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C532CA & 1) == 0 )
  {
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&StringLiteral_3471/*"CLICK_OK"*/);
    byte_4C532CA = 1;
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
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    this->fields._wait_5__2 = v5;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields._wait_5__2, (int32_t)v5, v6, v7);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1C3E508((CGThumbnailListItem_o *)p__2__current, (int32_t)wait_5__2, v10, v11);
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
    sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.battleAssetArgs, 0, v16, v17);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1C3E7C0(fsm, v9);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3471/*"CLICK_OK"*/, 0);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_SummonControl__WaitBattleChrLoad_d__265_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C532C3 & 1) == 0 )
  {
    sub_1C3E564(&SummonControl___c_TypeInfo);
    byte_4C532C3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(SummonControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SummonControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c___BonusSelectServantSelectDialog_b__317_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C532C5 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C532C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void SummonControl___c___ShowConfirmDialog_b__231_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C532C4 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C532C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0);
}


void SummonControl___c___exeFormation_b__164_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0);
}


void SummonControl___c___openAfterSummonInfo_b__163_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0);
}


int32_t SummonControl___c___openSvtEqInfo_b__165_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C3E7C0(this, a);
  return a->fields.num - b->fields.num;
}


void SummonControl___c___setSummonResultList_b__273_0(SummonControl___c_o *this, const MethodInfo *method)
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


void SummonControl___c___showSummonResultInfo_b__272_1(SummonControl___c_o *this, const MethodInfo *method)
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
  void *Request_object; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  int32_t v6; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_4C532C6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_1C3E564(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&StringLiteral_3435/*"CLEAR_TUTORIAL"*/);
    byte_4C532C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_21;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_21;
  v5 = 0;
  while ( v5 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v5,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_21;
      v6 = *((_DWORD *)Request_object + 6);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetGachaFlg(v6, 0);
    }
    Request_object = this->fields.tutoList;
    ++v5;
    if ( !Request_object )
      goto LABEL_21;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0 )
LABEL_21:
    sub_1C3E7C0(Request_object, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3435/*"CLEAR_TUTORIAL"*/, 0);
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
    sub_1C3E7C0(this, 0);
  UIWidget__set_width((UIWidget_o *)sprite, this->fields.slSpriteSize, 0);
  UIWidget__set_height((UIWidget_o *)sprite, this->fields.slSpriteSize, 0);
}


void SummonControl___c__DisplayClass284_0___ctor(
        SummonControl___c__DisplayClass284_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass284_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass284_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass284_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C532C7 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass284_0_o *)sub_1C3E564(&StringLiteral_5785/*"EXECUTE"*/);
    byte_4C532C7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass284_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1C3E7C0(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5785/*"EXECUTE"*/, 0);
}


void SummonControl___c__DisplayClass285_0___ctor(
        SummonControl___c__DisplayClass285_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonControl___c__DisplayClass285_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass285_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass285_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C532C8 & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass285_0_o *)sub_1C3E564(&StringLiteral_5785/*"EXECUTE"*/);
    byte_4C532C8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass285_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1C3E7C0(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5785/*"EXECUTE"*/, 0);
}


void SummonControl___c__DisplayClass289_0___ctor(
        SummonControl___c__DisplayClass289_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass289_0___getFriendPointIndex_b__0(
        SummonControl___c__DisplayClass289_0_o *this,
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
    sub_1C3E7C8(this, info);
  v5 = oldGachas->m_Items[i];
  if ( !v5 )
LABEL_8:
    sub_1C3E7C0(this, info);
  return info->fields.id == v5->fields.id && v5->fields.type == 3;
}


void SummonControl___c__DisplayClass290_0___ctor(
        SummonControl___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass290_0___GetGachaIndex_b__0(
        SummonControl___c__DisplayClass290_0_o *this,
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
    sub_1C3E7C8(this, info);
  v5 = oldGachas->m_Items[i];
  if ( !v5 )
LABEL_6:
    sub_1C3E7C0(this, info);
  return info->fields.id == v5->fields.id;
}


void SummonControl___c__DisplayClass304_0___ctor(
        SummonControl___c__DisplayClass304_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonControl___c__DisplayClass304_0___OnClickSummonListBtn_b__1(
        SummonControl___c__DisplayClass304_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  struct GachaEntity_o *gachaInfo; // x8

  if ( !x || (gachaInfo = this->fields.gachaInfo) == 0 )
    sub_1C3E7C0(this, x);
  return x->fields.id == gachaInfo->fields.id;
}


void SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}