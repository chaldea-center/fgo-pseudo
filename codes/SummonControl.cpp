void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  struct SummonControl_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49B7587 & 1) == 0 )
  {
    sub_1B4CF90(&SummonControl_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_3214/*"BonusSelectSummonSaveKey"*/, v4);
    byte_49B7587 = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v6 = StringLiteral_3214/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3214/*"BonusSelectSummonSaveKey"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v6, v2, v3);
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
}


void __fastcall SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_49B7586 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaSubEntity___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_List_GachaSubEntity__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_19392/*"gachaIds"*/, v10);
    sub_1B4CF90(&StringLiteral_6756/*"FrequencyType"*/, v11);
    byte_49B7586 = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BAB040;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BAB410;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BAB180;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v12 = StringLiteral_19392/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19392/*"gachaIds"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.DETAIL_SCRIPT_IDS, v12, v2, v3);
  v13 = StringLiteral_6756/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6756/*"FrequencyType"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.DETAIL_SCRIPT_TYPE, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.vaildGachaList, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GachaSubEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GachaSubEntity___ctor__);
  this->fields.gachaSubEntityList = (struct System_Collections_Generic_List_GachaSubEntity__o *)v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.gachaSubEntityList, (int32_t)v22, v23, v24);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_String_o *name; // x1
  int8x16_t v22; // q0
  System_String_o *WebViewAddress_39117488; // x0
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t gachaGroupId; // w8
  int32_t gachaListGroupId; // w8
  int32_t maxDrawNum; // w8
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  DataManager_o *v35; // x24
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49B7512 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaSubMaster___, data);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaDetailMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__, v9);
    sub_1B4CF90(&int___TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaSubEntity__Add__, v12);
    sub_1B4CF90(&NetworkManager_TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B4CF90(&VaildGachaInfo_TypeInfo, v15);
    byte_49B7512 = 1;
  }
  entity = 0LL;
  v16 = sub_1B4D1DC(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v16, 0LL);
  if ( !data || !v16 )
    goto LABEL_32;
  *(_DWORD *)(v16 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v16 + 24) = name;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 24), (int32_t)name, v19, v20);
  *(_DWORD *)(v16 + 32) = data->fields.beforeGachaId;
  v22 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCuLL));
  *(int8x16_t *)(v16 + 36) = vextq_s8(v22, v22, 0xCuLL);
  *(_DWORD *)(v16 + 52) = data->fields.type;
  *(_DWORD *)(v16 + 60) = data->fields.ticketItemId;
  *(_BYTE *)(v16 + 64) = 1;
  *(_BYTE *)(v16 + 84) = data->fields.freeDrawFlag > 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_39117488 = NetworkManager__getWebViewAddress_39117488(1, 0LL);
  v24 = System_String__Concat_61093468(WebViewAddress_39117488, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v16 + 88) = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 88), (int32_t)v24, v25, v26);
  gachaGroupId = data->fields.gachaGroupId;
  *(_DWORD *)(v16 + 96) = gachaGroupId;
  *(_BYTE *)(v16 + 100) = gachaGroupId > 0;
  *(_BYTE *)(v16 + 101) = data->fields.pickupId > 0;
  gachaListGroupId = data->fields.gachaListGroupId;
  *(_DWORD *)(v16 + 104) = gachaListGroupId;
  *(_BYTE *)(v16 + 108) = gachaListGroupId > 0;
  maxDrawNum = data->fields.maxDrawNum;
  *(_DWORD *)(v16 + 80) = 0;
  *(_DWORD *)(v16 + 68) = 0;
  *(_DWORD *)(v16 + 112) = maxDrawNum;
  v30 = sub_1B4D038(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 72) = v30;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 72), v30, v31, v32);
  *(_OWORD *)(v16 + 128) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v16 + 144) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_32;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v35 = Instance;
      Instance = (DataManager_o *)this->fields.gachaSubEntityList;
      if ( !Instance )
        goto LABEL_32;
      v36 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_GachaSubEntity__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v36 )
        goto LABEL_32;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v35,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = v35;
        sub_1B4CF34((CGThumbnailListItem_o *)(v39 + 32), (int32_t)v35, v33, v34);
      }
      *(_DWORD *)(v16 + 80) = *((_DWORD *)&v35->fields.UnityEngine_Behaviour_Fields + 1);
      *(_DWORD *)(v16 + 40) = HIDWORD(v35->fields.m_CancellationTokenSource);
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_32;
    *(_DWORD *)(v16 + 40) = targetEntity->fields.imageId;
    *(_DWORD *)(v16 + 68) = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_QWORD *)(v16 + 72) = adjustIds;
    sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 72), (int32_t)adjustIds, v33, v34);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         data->fields.id,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_32;
    *(_BYTE *)(v16 + 148) = GachaDetailEntity__IsPrivilegeSummon(
                              (GachaDetailEntity_o *)entity,
                              (int64_t *)(v16 + 152),
                              0LL);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v44 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v45 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v44) )
  {
LABEL_32:
    sub_1B4D1EC(Instance, v18);
  }
  v46 = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v16,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = v44 + 8 * v46;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v46 + 1;
    *(_QWORD *)(v47 + 32) = v16;
    sub_1B4CF34((CGThumbnailListItem_o *)(v47 + 32), v16, v42, v43);
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

  if ( (byte_49B754D & 1) == 0 )
  {
    sub_1B4CF90(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaDetailMaster___, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl_beforeConfirmCautionResult__, v5);
    byte_49B754D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
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
        v12 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1B4D1EC(Instance, v7);
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
  if ( (byte_49B757F & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_2946/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, method);
    byte_49B757F = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2946/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1B4D1EC(this, method);
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
  if ( (byte_49B757E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3356/*"CHECK_STONE"*/, method);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_2946/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, v3);
    byte_49B757E = 1;
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
    sub_1B4D1EC(this, method);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v8 = &StringLiteral_3356/*"CHECK_STONE"*/;
  else
    v8 = &StringLiteral_2946/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
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

  if ( (byte_49B7584 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, res);
    sub_1B4CF90(&StringLiteral_6859/*"GO_BUY_STONE"*/, v5);
    byte_49B7584 = 1;
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
    v7 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_6859/*"GO_BUY_STONE"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B4D1EC(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
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

  if ( (byte_49B7582 & 1) == 0 )
  {
    sub_1B4CF90(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res);
    sub_1B4CF90(&Method_SummonControl_GoBuyStone__, v5);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v6);
    byte_49B7582 = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    needStone = this->fields.needStone;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v11 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_1B4D1EC(fsm, res);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x21

  if ( (byte_49B7580 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_SummonControl__BonusSelectServantSelectDialog_b__304_0__, v8);
    byte_49B7580 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v13 = (BonusSelectSummonAssetManager_o *)sub_1B4D1DC(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v13, 0LL);
        this->fields.bonusSelectAssetManager = v13;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v13, v14, v15);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__304_0__,
        0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v16, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B4D1EC(Master_object, v10);
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
  const MethodInfo *v8; // x3
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v4 = result;
  v5 = this;
  if ( (byte_49B7541 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, result);
    byte_49B7541 = 1;
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
      SummonControl__ShowConfirmDialogProcess(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_1B4CF34(
        (CGThumbnailListItem_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        result,
        (int32_t)v7,
        v8);
      goto LABEL_10;
    }
LABEL_14:
    sub_1B4D1EC(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v7; // x8

  if ( (byte_49B7581 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_2947/*"BONUS_SELECT_SERVANT_SELECT"*/, res);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v5);
    byte_49B7581 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B4D1EC(confirmDlgInfo, res);
  }
  v7 = (System_String_o **)&StringLiteral_2947/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v7 = (System_String_o **)&StringLiteral_3426/*"CLICK_CANCEL"*/;
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

  if ( (byte_49B7545 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaSubMaster___, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaSubEntity__Find__, v4);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v5);
    sub_1B4CF90(&System_Predicate_GachaSubEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B4CF90(&Method_SummonControl_SummonSceneRefresh__, v9);
    sub_1B4CF90(&Method_SummonControl__CheckFriendPointSummonUpdate_b__222_0__, v10);
    sub_1B4CF90(&StringLiteral_14524/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v11);
    sub_1B4CF90(&StringLiteral_14523/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v12);
    byte_49B7545 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_13;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL);
  gachaSubEntityList = (System_Collections_Generic_List_object__o *)this->fields.gachaSubEntityList;
  v18 = (Il2CppObject *)OpenEntity;
  v19 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_GachaSubEntity__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)this,
    Method_SummonControl__CheckFriendPointSummonUpdate_b__222_0__,
    0LL);
  if ( !gachaSubEntityList )
    goto LABEL_13;
  v20 = System_Collections_Generic_List_object___Find(
          gachaSubEntityList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_GachaSubEntity__Find__);
  if ( v18 != v20 )
  {
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_14524/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_14523/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
    v24 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
    if ( v21 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v21, v22, v23, v24, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return v18 != v20;
    }
LABEL_13:
    sub_1B4D1EC(Instance, v14);
  }
  return v18 != v20;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1B4D1EC(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B4D1F4(this, ids);
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
  if ( (byte_49B7564 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9067/*"NEXT_SVT"*/, method);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_6309/*"FINAL_SVT"*/, v3);
    byte_49B7564 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v5 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v5;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_1B4D1EC(this, method);
  if ( v5 >= (signed int)gachaResInfoList->max_length )
    v6 = &StringLiteral_6309/*"FINAL_SVT"*/;
  else
    v6 = &StringLiteral_9067/*"NEXT_SVT"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


bool __fastcall SummonControl__CheckLastDrawGachaId(SummonControl_o *this, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  gachaParamData = this->fields.gachaParamData;
  return gachaParamData && gachaParamData->fields.gachaId == this->fields.lastMaxDrawGachaId;
}


void __fastcall SummonControl__CheckOnExecuteGachaTutorial(
        SummonControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v14; // x0
  System_Collections_ICollection_o *EventTutorialEntity; // x21
  System_Collections_Generic_List_object__o *v16; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  int32_t monitor; // w22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v22; // x1
  int32_t v23; // w22
  _DWORD *v24; // x8
  int32_t klass; // w24
  int64_t klass_low; // x23
  _BOOL8 IsOpen; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_49B7585 & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, callback);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v11);
    this = (SummonControl_o *)sub_1B4CF90(&TutorialFlag_TypeInfo, v12);
    byte_49B7585 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  currentGachaInfo = v4->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  v14 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Collections_ICollection_o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v14, 0LL);
  if ( BasicHelper__IsNullOrEmpty(EventTutorialEntity, 0LL) )
  {
    ActionExtensions__Call(callback, 0LL);
    return;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
LABEL_37:
    sub_1B4D1EC(this, callback);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)EventTutorialEntity,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v37.fields._current;
    if ( !v37.fields._current )
      sub_1B4D1EC(v17, v18);
    monitor = (int32_t)v37.fields._current[1].monitor;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__GetGachaFlg(monitor, 0LL) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[3].monitor, 0LL);
      if ( IsNullOrEmpty )
      {
        v23 = 0;
      }
      else
      {
        v24 = current[3].monitor;
        if ( !v24 )
          sub_1B4D1EC(IsNullOrEmpty, v22);
        if ( !v24[6] )
          sub_1B4D1F4(IsNullOrEmpty, v22);
        v23 = v24[8];
      }
      klass = (int32_t)current[3].klass;
      klass_low = SLODWORD(current[4].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(klass, v23, klass_low, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v16 )
          sub_1B4D1EC(IsOpen, v28);
        items = v16->fields._items;
        v32 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          sub_1B4D1EC(IsOpen, v28);
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            current,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v34[4] = (Il2CppClass *)current;
          sub_1B4CF34((CGThumbnailListItem_o *)(v34 + 4), (int32_t)current, v29, v30);
        }
        if ( LODWORD(current[6].klass) != 2 )
        {
          v35 = (int32_t)current[1].monitor;
          if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          TutorialFlag__SetGachaFlg(v35, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v16,
    callback,
    0LL);
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

  if ( (byte_49B7546 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v3);
    sub_1B4CF90(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_SummonControl_ShowConfirmDialog__, v5);
    sub_1B4CF90(&Method_SummonControl_autoSellSettingChange__, v6);
    sub_1B4CF90(&Method_SummonControl_limitManaConfirmResult__, v7);
    sub_1B4CF90(&Method_SummonControl_limitQpConfirmResult__, v8);
    byte_49B7546 = 1;
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
    v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v26 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
      v31 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v32 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0LL);
      if ( v30 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v30, v31, v32, 0LL);
        return 1;
      }
LABEL_28:
      sub_1B4D1EC(SelfUserGame, v10);
    }
    v27 = this->fields.limitWarningDlgInfo;
    v28 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v29 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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

  if ( (byte_49B757D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_10903/*"RETURN_MAIN"*/, method);
    sub_1B4CF90(&StringLiteral_10905/*"RETURN_RESULT"*/, v3);
    byte_49B757D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, method);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_10905/*"RETURN_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10903/*"RETURN_MAIN"*/;
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
  Il2CppObject *String_68762736; // x19
  System_Object_array *v16; // x19
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_49B7540 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v2);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_SelectBonusData___, v4);
    sub_1B4CF90(&JsonManager_TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_TypeInfo, v11);
    sub_1B4CF90(&string_TypeInfo, v12);
    sub_1B4CF90(&SummonControl_TypeInfo, v13);
    byte_49B7540 = 1;
  }
  v14 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_68762736 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_68762736(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_68762736, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_object_(
            String_68762736,
            (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v17 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v16 )
      sub_1B4D1EC(v18, v19);
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

  if ( (byte_49B750F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49B750F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v8);
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
  if ( (byte_49B750E & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_VaildGachaInfo__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v9);
    this = (SummonControl_o *)sub_1B4CF90(&Method_SummonControl_SlotCompare__, v10);
    byte_49B750E = 1;
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
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B4D1EC(v17, v18);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
  v23 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v24 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v24, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0LL);
  if ( !v23 )
LABEL_21:
    sub_1B4D1EC(this, method);
  System_Collections_Generic_List_object___Sort_56106144(
    v23,
    v24,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49B753C & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B753C = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B751A & 1) == 0 )
  {
    sub_1B4CF90(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_TypeInfo, method);
    byte_49B751A = 1;
  }
  v3 = sub_1B4D1DC(SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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

  if ( (byte_49B754A & 1) == 0 )
  {
    sub_1B4CF90(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaDetailMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9);
    sub_1B4CF90(&int_TypeInfo, v10);
    sub_1B4CF90(&Method_SummonControl_BonusSelectSummonConfirmResult__, v11);
    sub_1B4CF90(&Method_SummonControl_ConfirmMessageOpen__, v12);
    sub_1B4CF90(&Method_SummonControl_SetDispBtn__, v13);
    sub_1B4CF90(&Method_SummonControl_TryGetSelectBonusDataInfo__, v14);
    sub_1B4CF90(&Method_SummonControl_confirmCautionResult__, v15);
    sub_1B4CF90(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v16);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_23041/*"showGroupRemainingDrawNum"*/, v18);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v19);
    byte_49B754A = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v21 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_ConfirmMessageOpen__);
  v22 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v21, v21[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v22, 1, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v40 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v40,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v41 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v41,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v42 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_43;
  }
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  v23 = this->fields.gachaParamData;
  if ( !v23 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v23->fields.gachaId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaDetailMaster___);
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
                                                    (System_String_o *)StringLiteral_23041/*"showGroupRemainingDrawNum"*/,
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
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  v44 = this->fields.gachaParamData;
  if ( !v44 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v44->fields.gachaId,
                                                    (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  v50 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
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
  v53 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v53,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_1B4D1EC(confirmDlgInfo, result);
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

  if ( (byte_49B755E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, flg);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_SummonControl__DialogCallBack_b__256_0__, v6);
    byte_49B755E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__256_0__, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49B755F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3476/*"CLOSE"*/, method);
    byte_49B755F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3476/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_49B753B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, result);
    byte_49B753B = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *Item; // x0
  int32_t v14; // w21
  System_Collections_Generic_List_object__o *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w24
  Il2CppObject *v18; // x22
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49B757A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v8);
    byte_49B757A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1B4D1EC(Item, v10);
  v14 = 0;
  while ( v14 < Item->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v14,
                                                          (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    v15 = (System_Collections_Generic_List_object__o *)*baseGachaList;
    if ( *baseGachaList )
    {
      v16 = Item;
      v17 = 0;
      v18 = (Il2CppObject *)Item;
      while ( v17 < v15->fields._size )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v15,
                                                              v17,
                                                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( v16 && Item )
        {
          if ( LODWORD(v16->fields._items) != LODWORD(Item->fields._items)
            && LODWORD(v16[1].monitor) == LODWORD(Item[1].monitor) )
          {
            if ( !v18 )
              goto LABEL_25;
            if ( SHIDWORD(v18[2].klass) < SHIDWORD(Item->fields._syncRoot) )
              v18 = (Il2CppObject *)Item;
          }
          v15 = (System_Collections_Generic_List_object__o *)*baseGachaList;
          ++v17;
          if ( *baseGachaList )
            continue;
        }
        goto LABEL_25;
      }
      if ( v9 )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                              v9,
                                                              v18,
                                                              (const MethodInfo_358056C *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          items = v9->fields._items;
          v20 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v18,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v18;
            sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v18, v11, v12);
          }
        }
        Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
        ++v14;
        if ( *baseGachaList )
          continue;
      }
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v9;
  sub_1B4CF34((CGThumbnailListItem_o *)baseGachaList, (int32_t)v9, v11, v12);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_49B74FF & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, method);
    byte_49B74FF = 1;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_array *v8; // x19
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49B7523 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B7523 = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B9 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B75B9 = 1;
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
  if ( !byte_49B75B9 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B75B9 = 1;
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
  v8 = System_String__Split(v3, 0x2Fu, 0, 0LL);
  if ( !byte_49B75BA )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v5);
    byte_49B75BA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v6, v7);
  if ( !v8 )
    goto LABEL_31;
  if ( (int)v8->max_length < 2 )
    return 0;
  v3 = v8->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_31:
    sub_1B4D1EC(v3, method);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1B4D1F4(v3, method);
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

  if ( (byte_49B7570 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, *(_QWORD *)&gachaId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    byte_49B7570 = 1;
  }
  entity = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_16:
    sub_1B4D1EC(vaildGachaList, *(_QWORD *)&gachaId);
  v14 = 0;
  while ( v14 < *((_DWORD *)vaildGachaList + 6) )
  {
    gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v14,
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList || !gachaMst )
      goto LABEL_16;
    vaildGachaList = (void *)DataMasterBase_object__object__int___TryGetEntity(
                               gachaMst,
                               &entity,
                               *((_DWORD *)vaildGachaList + 4),
                               (const MethodInfo_319D9E8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
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
    sub_1B4D1EC(0LL, groupId);
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

  if ( (byte_49B7583 & 1) == 0 )
  {
    sub_1B4CF90(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res);
    sub_1B4CF90(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, v5);
    sub_1B4CF90(&Method_SummonControl_GoBuyStone__, v6);
    sub_1B4CF90(&Method_SummonControl_TryGetSelectBonusDataInfo__, v7);
    sub_1B4CF90(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v8);
    byte_49B7583 = 1;
  }
  if ( res )
  {
    v9 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_GoBuyStone__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
          v22 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v22,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            0LL),
          !confirmDlgInfo) )
    {
      sub_1B4D1EC(v14, v15);
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

  if ( (byte_49B7557 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId);
    byte_49B7557 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49B7509 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_6286/*"FAIL_LOAD"*/, data);
    sub_1B4CF90(&StringLiteral_17233/*"btn_sumonhistory"*/, v6);
    sub_1B4CF90(&StringLiteral_5367/*"END_LOAD"*/, v7);
    sub_1B4CF90(&StringLiteral_17232/*"btn_summon_list"*/, v8);
    byte_49B7509 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_10;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6286/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bannerAssetData, (int32_t)data, (int32_t)method, v3);
  SummonControl__createSummonInfo(this, v10);
  SummonControl__setPositionByWarId(this, v11);
  SummonControl__ResetArrowTween(this, v12);
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17233/*"btn_sumonhistory"*/, v13);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17233/*"btn_sumonhistory"*/,
          0LL),
        fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17232/*"btn_summon_list"*/, v14),
        !this->fields.summonInfoCtr)
    || (SummonInfoControl__SetSummonListSprite(
          this->fields.summonInfoCtr,
          (UnityEngine_GameObject_o *)fsm,
          (System_String_o *)StringLiteral_17232/*"btn_summon_list"*/,
          0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_10:
    sub_1B4D1EC(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5367/*"END_LOAD"*/, 0LL);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct PlayMakerFSM_o *fsm; // x21
  int32_t titleInfo; // w20
  int32_t titleInfo_high; // w24
  UnityEngine_Object_o *v11; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  v2 = this;
  if ( (byte_49B7516 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_3324/*"CHANGE_BANNER"*/, v4);
    byte_49B7516 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_26;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_26;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_26;
  fsm = this->fields.fsm;
  titleInfo = (int32_t)this->fields.titleInfo;
  titleInfo_high = HIDWORD(this->fields.titleInfo);
  v11 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_29;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v11, currentBannerComp, 0LL)
    || fsm != (struct PlayMakerFSM_o *)v2->fields.currentGachaInfo
    || titleInfo != v2->fields.currentIdx
    || titleInfo_high != v2->fields.currentMoveIdx )
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
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v11;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.currentBannerComp, (int32_t)v11, v6, v7);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)fsm;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.currentGachaInfo, (int32_t)fsm, v13, v14);
    v2->fields.currentIdx = titleInfo;
    v2->fields.currentMoveIdx = titleInfo_high;
    SummonControl__setSliderIcon(v2, titleInfo, v15);
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
          UICenterOnChild__CenterOn_47223964(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          this = (SummonControl_o *)v2->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
            SummonControl__UpdateSummonInfoControlLayout(v2, v17);
            SummonControl__showHelpImg(v2, v18);
            this = (SummonControl_o *)v2->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3324/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B4D1EC(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct VaildGachaInfo_o *v7; // x20
  float m_Width; // w23
  float m_Height; // w24
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  bool *p_isNotCenterOnSync; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_49B7517 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method);
    this = (SummonControl_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B7517 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_20;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_20;
  v7 = *(struct VaildGachaInfo_o **)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v10 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_14;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v10, currentSummonMBannerComponent, 0LL)
    || v7 != v2->fields.currentGachaInfo
    || LODWORD(m_Width) != v2->fields.currentIdx
    || LODWORD(m_Height) != v2->fields.currentMoveIdx )
  {
LABEL_14:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v10;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.currentSummonMBannerComponent, (int32_t)v10, v5, v6);
    v2->fields.currentGachaInfo = v7;
    sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.currentGachaInfo, (int32_t)v7, v13, v14);
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
          UICenterOnChild__CenterOn_47223964(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B4D1EC(this, method);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_19:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_49B7573 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3421/*"CLICK_BACK"*/, method);
    byte_49B7573 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B4D1EC(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3421/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v17; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v19; // x0
  struct VaildGachaInfo_o *v20; // x8
  System_String_o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x19
  Il2CppObject *v24; // x20
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x21
  void *monitor; // x8
  __int64 v29; // x9
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  _QWORD *v40; // x8
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49B7576 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v10);
    sub_1B4CF90(&Method_SummonControl_OnClickHelp__, v11);
    sub_1B4CF90(&StringLiteral_15661/*"[]"*/, v12);
    byte_49B7576 = 1;
  }
  v13 = Method_SummonControl_OnClickHelp__;
  memset(&v42, 0, sizeof(v42));
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickHelp__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  v19 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v19, 0LL);
  if ( !v15 )
    goto LABEL_37;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)EventTutorialEntity,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v20 = this->fields.currentGachaInfo;
  if ( !v20 )
    goto LABEL_37;
  v21 = System_Int32__ToString((int)v20 + 16, 0LL);
  v22 = (System_Collections_Generic_IEnumerable_T__o *)EventTutorialMaster__GetEventTutorialEntity(0, 97, v21, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v15,
    v22,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__AddRange__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v15,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventTutorialEntity__GetEnumerator__);
  v24 = 0LL;
  v42 = v41;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v42.fields._current;
    if ( !v42.fields._current )
      sub_1B4D1EC(v25, v26);
    if ( !LODWORD(v42.fields._current[3].klass) )
    {
      monitor = v42.fields._current[2].monitor;
      if ( !monitor )
        sub_1B4D1EC(v25, v26);
      v29 = *((_QWORD *)monitor + 3);
      if ( !v29 )
        goto LABEL_21;
      if ( !(_DWORD)v29 )
        sub_1B4D1F4(v25, v26);
      v30 = System_String__op_Equality(*((System_String_o **)monitor + 4), (System_String_o *)StringLiteral_15661/*"[]"*/, 0LL);
      if ( v30 )
      {
LABEL_21:
        if ( !v24 )
          v24 = current;
      }
      else
      {
        if ( !v23 )
          sub_1B4D1EC(v30, v31);
        items = v23->fields._items;
        v35 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1B4D1EC(v30, v31);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            current,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v37[4] = (Il2CppClass *)current;
          sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 4), (int32_t)current, v32, v33);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialEntity__Dispose__);
  if ( !v23 )
    goto LABEL_37;
  if ( v24 && !v23->fields._size )
  {
    EventTutorialEntity = (System_Collections_Generic_List_EventTutorialEntity__o *)v23->fields._items;
    v40 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
    ++v23->fields._version;
    if ( EventTutorialEntity )
    {
      if ( EventTutorialEntity->fields._size )
      {
        v23->fields._size = 1;
        EventTutorialEntity->fields._syncRoot = v24;
        sub_1B4CF34((CGThumbnailListItem_o *)&EventTutorialEntity->fields._syncRoot, (int32_t)v24, v38, v39);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          v24,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      goto LABEL_31;
    }
LABEL_37:
    sub_1B4D1EC(EventTutorialEntity, v17);
  }
LABEL_31:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v23,
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

  if ( (byte_49B7577 & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_SummonControl_OnClickHisotry__, v5);
    sub_1B4CF90(&Method_SummonControl__OnClickHisotry_b__289_0__, v6);
    byte_49B7577 = 1;
  }
  v7 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickHisotry__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__289_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1B4D1EC(Request_object, v11);
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
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  v6 = this;
  if ( (byte_49B751B & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_OnClickMiniBanner__, *(_QWORD *)&moveIdx);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_12490/*"SetBannerCenter"*/, v7);
    byte_49B751B = 1;
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
            UnityEngine_MonoBehaviour__CancelInvoke_68789036(
              (UnityEngine_MonoBehaviour_o *)v6,
              (System_String_o *)StringLiteral_12490/*"SetBannerCenter"*/,
              0LL);
            if ( isPlaySe )
            {
              v8 = Method_SummonControl_OnClickMiniBanner__;
              if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
                v8 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickMiniBanner__);
              v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
              OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0LL);
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
                      UICenterOnChild__CenterOn_47223964(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
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
                            UICenterOnChild__CenterOn_47223964(
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
    sub_1B4D1EC(this, *(_QWORD *)&moveIdx);
  if ( currentGachaInfo->fields.isDispSummonListDialog )
    SummonControl__OnClickSummonListBtn(v6, *(const MethodInfo **)&moveIdx);
}


void __fastcall SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PossessionInfoDialog_o *possessionInfoDialog; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_49B7578 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_OnClickPossessionInfo__, method);
    byte_49B7578 = 1;
  }
  v3 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickPossessionInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo
    || (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL
    || (PossessionInfoDialog__Init(possessionInfoDialog, currentGachaInfo->fields.id, 0LL),
        (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL) )
  {
    sub_1B4D1EC(possessionInfoDialog, v6);
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

  if ( (byte_49B7537 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__, method);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v3);
    byte_49B7537 = 1;
  }
  v4 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B4D1EC(confirmDlgInfo, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v8);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49B7538 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_OnClickStoneFragmentsInfo__, method);
    byte_49B7538 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_49B7575 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SummonControl_reDispSummonBannerList__, v3);
    byte_49B7575 = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_1B4D1EC(v6, v7);
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
  __int64 v21; // x1
  __int64 v22; // x1
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *vaildGachaList; // x20
  System_Collections_Generic_List_object__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *useGachaData; // x20
  System_Func_object__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_ICollection_o *v30; // x20
  SummonListDialog_o *IsNullOrEmpty; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t current; // w1
  int32x2_t **v39; // x20
  System_Collections_Generic_List_object__o *v40; // x22
  System_Predicate_object__o *v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  _BOOL8 v44; // x0
  __int64 v45; // x1
  GachaMaster_o *gachaMst; // x0
  __int64 v47; // x21
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32x2_t *v52; // x8
  signed __int32 v53; // w9
  System_Collections_Generic_List_object__o *v54; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  SummonControl_o *v59; // x0
  const MethodInfo *v60; // x2
  System_Collections_Generic_List_object__o *v61; // x20
  System_Comparison_T__o *v62; // x21
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v64; // x9
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_object__o *v67; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49B7579 & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_VaildGachaInfo__TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_GachaEntity___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_GachaEntity___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__, v7);
    sub_1B4CF90(&System_Func_GachaEntity__bool__TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Exists__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor___75460296, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v15);
    sub_1B4CF90(&System_Predicate_VaildGachaInfo__TypeInfo, v16);
    sub_1B4CF90(&Method_SummonControl_OnClickSummonListBtn__, v17);
    sub_1B4CF90(&Method_SummonControl_SlotCompare__, v18);
    sub_1B4CF90(&Method_SummonControl__OnClickSummonListBtn_b__291_0__, v19);
    sub_1B4CF90(&Method_SummonControl___c__DisplayClass291_0__OnClickSummonListBtn_b__1__, v20);
    sub_1B4CF90(&SummonControl___c__DisplayClass291_0_TypeInfo, v21);
    sub_1B4CF90(&VaildGachaInfo_TypeInfo, v22);
    byte_49B7579 = 1;
  }
  v23 = Method_SummonControl_OnClickSummonListBtn__;
  memset(&v66, 0, sizeof(v66));
  if ( (*((_BYTE *)Method_SummonControl_OnClickSummonListBtn__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_OnClickSummonListBtn__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0LL);
  vaildGachaList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.vaildGachaList;
  v26 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_56097488(
    v26,
    vaildGachaList,
    (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor___75460296);
  v67 = v26;
  useGachaData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.useGachaData;
  v28 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_GachaEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickSummonListBtn_b__291_0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          useGachaData,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_GachaEntity___);
  v30 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_object_(
                                              v29,
                                              (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_GachaEntity___);
  IsNullOrEmpty = (SummonListDialog_o *)BasicHelper__IsNullOrEmpty(v30, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !v30 )
      goto LABEL_33;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v65,
      (System_Collections_Generic_List_object__o *)v30,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v66 = v65;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v66,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__) )
    {
      v33 = sub_1B4D1DC(SummonControl___c__DisplayClass291_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0LL);
      if ( !v33 )
        sub_1B4D1EC(v34, v35);
      current = (int32_t)v66.fields._current;
      *(_QWORD *)(v33 + 16) = v66.fields._current;
      v39 = (int32x2_t **)(v33 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 16), current, v36, v37);
      v40 = v67;
      v41 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_VaildGachaInfo__TypeInfo);
      System_Predicate_object____ctor(
        v41,
        (Il2CppObject *)v33,
        Method_SummonControl___c__DisplayClass291_0__OnClickSummonListBtn_b__1__,
        0LL);
      if ( !v40 )
        sub_1B4D1EC(v42, v43);
      v44 = System_Collections_Generic_List_object___Exists(
              v40,
              (System_Predicate_T__o *)v41,
              (const MethodInfo_3580808 *)Method_System_Collections_Generic_List_VaildGachaInfo__Exists__);
      if ( !v44 )
      {
        if ( !*v39 )
          sub_1B4D1EC(v44, v45);
        gachaMst = this->fields.gachaMst;
        if ( !gachaMst )
          sub_1B4D1EC(0LL, v45);
        if ( GachaMaster__GetGroupRemainingDrawNum(gachaMst, (*v39)[18].n64_i32[0], 0LL) )
        {
          v47 = sub_1B4D1DC(VaildGachaInfo_TypeInfo);
          VaildGachaInfo___ctor((VaildGachaInfo_o *)v47, 0LL);
          v52 = *v39;
          if ( !*v39 )
            sub_1B4D1EC(v48, v49);
          if ( !v47 )
            sub_1B4D1EC(v48, v49);
          *(_DWORD *)(v47 + 16) = v52[2].n64_u32[0];
          *(_DWORD *)(v47 + 48) = v52[5].n64_u32[1];
          *(int32x2_t *)(v47 + 36) = vrev64_s32(v52[4]);
          v53 = v52[18].n64_i32[1];
          *(_DWORD *)(v47 + 104) = v53;
          *(_BYTE *)(v47 + 108) = v53 > 0;
          *(_DWORD *)(v47 + 112) = v52[11].n64_u32[1];
          *(_DWORD *)(v47 + 144) = v52[19].n64_u32[1];
          v54 = v67;
          if ( !v67 )
            sub_1B4D1EC(0LL, v49);
          items = v67->fields._items;
          v56 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v67->fields._version;
          if ( !items )
            sub_1B4D1EC(v54, v49);
          size = v54->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v54,
              (Il2CppObject *)v47,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            v54->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v47;
            sub_1B4CF34((CGThumbnailListItem_o *)(v58 + 4), v47, v50, v51);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v66,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    SummonControl__ExtractVaildGachaInfoOnPriority(v59, (System_Collections_Generic_List_VaildGachaInfo__o **)&v67, v60);
    v61 = v67;
    v62 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_VaildGachaInfo__TypeInfo);
    System_Comparison_object____ctor(v62, (Il2CppObject *)this, Method_SummonControl_SlotCompare__, 0LL);
    if ( !v61 )
LABEL_33:
      sub_1B4D1EC(IsNullOrEmpty, v32);
    System_Collections_Generic_List_object___Sort_56106144(
      v61,
      v62,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_33;
  v64 = this->fields.vaildGachaList;
  if ( !v64 )
    goto LABEL_33;
  IsNullOrEmpty = this->fields.summonListDialog;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  SummonListDialog__Init(
    IsNullOrEmpty,
    this->fields.currentMoveIdx,
    currentGachaInfo->fields.summonListGroupId,
    v64->fields._size,
    (System_Collections_Generic_List_VaildGachaInfo__o *)v67,
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

  if ( (byte_49B753E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_49B753E = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_49B7515 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12490/*"SetBannerCenter"*/, method);
    byte_49B7515 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_68789036(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12490/*"SetBannerCenter"*/,
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
    sub_1B4D1EC(summonInfoCtr, v3);
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

  if ( (byte_49B7574 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_SummonControl__OnEndSummonEffect_b__286_0__, v6);
    byte_49B7574 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__286_0__, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v12, v13);
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

  if ( (byte_49B7539 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B4CF90(&Method_SummonControl_RequestStoneFragmentsShop__, v7);
    byte_49B7539 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v12 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v14),
        v16 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v16, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0LL),
        !Instance) )
  {
LABEL_11:
    sub_1B4D1EC(Master_object, v9);
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

  if ( (byte_49B753D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, *(_QWORD *)&buyCount);
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&Method_SummonControl_OnCloseResultDialog__, v9);
    byte_49B753D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v11);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B4D1EC(StoneFragmentsShopEntity, v13);
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

  if ( (byte_49B753A & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B4CF90(&Method_SummonControl_EndRequestStoneFragmentsShop__, v7);
    byte_49B753A = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v10);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1B4D1EC(StoneFragmentsShopEntity, v12);
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
  __int64 v3; // x1
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v5; // x22
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x21
  Il2CppObject *Component_object; // x19

  if ( (byte_49B750C & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B750C = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v7 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
    sub_1B4D1EC(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v5; // x8

  if ( (byte_49B7552 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, method);
    sub_1B4CF90(&StringLiteral_10846/*"REQUEST_NG_RESULT"*/, v3);
    byte_49B7552 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, method);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_10846/*"REQUEST_NG_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10845/*"REQUEST_NG"*/;
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

  if ( (byte_49B7518 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B7518 = 1;
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
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
        UICenterOnChild__CenterOn_47223964(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
           (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
              UICenterOnChild__CenterOn_47223964(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_35:
        sub_1B4D1EC(bannerLoopCtr, method);
      }
    }
    else
    {
      v11 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  char *v16; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  __int64 v36; // x8
  unsigned __int64 v37; // x23
  bool v38; // w21
  System_String_o *v39; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49B7555 & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, isDisp);
    sub_1B4CF90(&StringLiteral_17491/*"center_glow"*/, v5);
    sub_1B4CF90(&StringLiteral_22671/*"ring_gard1_3"*/, v6);
    sub_1B4CF90(&StringLiteral_22672/*"ring_gard2_1"*/, v7);
    sub_1B4CF90(&StringLiteral_22673/*"ring_gard2_2"*/, v8);
    sub_1B4CF90(&StringLiteral_22670/*"ring_gard1_2"*/, v9);
    sub_1B4CF90(&StringLiteral_22674/*"ring_gard2_3"*/, v10);
    sub_1B4CF90(&StringLiteral_22669/*"ring_gard1_1"*/, v11);
    byte_49B7555 = 1;
  }
  bgRoot = (char *)sub_1B4D038(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_19:
    sub_1B4D1EC(bgRoot, v13);
  v16 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v17 = StringLiteral_22669/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_22669/*"ring_gard1_1"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(bgRoot + 32), v17, v14, v15);
  if ( *((_DWORD *)v16 + 6) <= 1u )
    goto LABEL_20;
  v20 = StringLiteral_22670/*"ring_gard1_2"*/;
  *((_QWORD *)v16 + 5) = StringLiteral_22670/*"ring_gard1_2"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 40), v20, v18, v19);
  if ( *((_DWORD *)v16 + 6) <= 2u )
    goto LABEL_20;
  v23 = StringLiteral_22671/*"ring_gard1_3"*/;
  *((_QWORD *)v16 + 6) = StringLiteral_22671/*"ring_gard1_3"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 48), v23, v21, v22);
  if ( *((_DWORD *)v16 + 6) <= 3u )
    goto LABEL_20;
  v26 = StringLiteral_22672/*"ring_gard2_1"*/;
  *((_QWORD *)v16 + 7) = StringLiteral_22672/*"ring_gard2_1"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 56), v26, v24, v25);
  if ( *((_DWORD *)v16 + 6) <= 4u
    || (v29 = StringLiteral_22673/*"ring_gard2_2"*/,
        *((_QWORD *)v16 + 8) = StringLiteral_22673/*"ring_gard2_2"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 64), v29, v27, v28),
        *((_DWORD *)v16 + 6) <= 5u)
    || (v32 = StringLiteral_22674/*"ring_gard2_3"*/,
        *((_QWORD *)v16 + 9) = StringLiteral_22674/*"ring_gard2_3"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 72), v32, v30, v31),
        *((_DWORD *)v16 + 6) <= 6u) )
  {
LABEL_20:
    sub_1B4D1F4(bgRoot, v13);
  }
  v35 = StringLiteral_17491/*"center_glow"*/;
  *((_QWORD *)v16 + 10) = StringLiteral_17491/*"center_glow"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 80), v35, v33, v34);
  v36 = *((_QWORD *)v16 + 3);
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    v38 = isDisp;
    while ( v37 < (unsigned int)v36 )
    {
      bgRoot = (char *)this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_19;
      v39 = *(System_String_o **)&v16[8 * v37 + 32];
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bgRoot, 0LL);
      bgRoot = (char *)TransformHelper__getNodeFromName(transform, v39, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      bgRoot = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_19;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgRoot, v38, 0LL);
      LODWORD(v36) = *((_DWORD *)v16 + 6);
      if ( (__int64)++v37 >= (int)v36 )
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
    sub_1B4D1EC(summonInfoCtr, isDisp);
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
    sub_1B4D1EC(this, num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_BE288C[type - 1];
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

  if ( (byte_49B7536 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B4CF90(&MasterMissionComponent_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_17192/*"btn_event_3"*/, v8);
    byte_49B7536 = 1;
  }
  v18 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17192/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
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
    sub_1B4D1EC(fragmentsExchangeButton, method);
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


void __fastcall SummonControl__ShowConfirmDialog(SummonControl_o *this, const MethodInfo *method)
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *v17; // x21

  if ( (byte_49B7543 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_SummonControl__ShowConfirmDialog_b__219_0__, v8);
    byte_49B7543 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v14 = (BonusSelectSummonAssetManager_o *)sub_1B4D1DC(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v14, 0LL);
        this->fields.bonusSelectAssetManager = v14;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v14, v15, v16);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v17 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__ShowConfirmDialog_b__219_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v17, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B4D1EC(Master_object, v10);
  }
  SummonControl__ShowConfirmDialogProcess(this, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__ShowConfirmDialogProcess(
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
  int32_t gachaType; // w20
  struct GachaRqParamData_o *v20; // x8
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x21
  int32_t *v22; // x23
  int v23; // w8
  VaildGachaInfo_o *v24; // x20
  int32_t needStone; // w25
  int32_t haveFreeStone; // w29
  int32_t haveChargeStone; // w23
  int v28; // w8
  struct SummonInfoControl_o *v29; // x8
  const MethodInfo *v30; // x1
  struct SummonInfoControl_o *v31; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v33; // x9
  struct GachaRqParamData_o *v34; // x8
  GachaDetailEntity_o *v35; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v38; // x0
  const MethodInfo *v39; // x3
  System_Int32_array *v40; // x24
  SummonConfirmDlgComponent_CallbackFunc_o *v41; // x0
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x2
  struct GachaRqParamData_o *v44; // x8
  int32_t v45; // w22
  struct GachaRqParamData_o *v46; // x8
  SummonControl_o *v47; // x23
  int32_t v48; // w21
  int32_t v49; // w27
  int32_t v50; // w28
  struct GachaRqParamData_o *v51; // x8
  GachaDetailEntity_o *v52; // x25
  struct GachaRqParamData_o *v53; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x23
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  System_Int32_array *v57; // x26
  int32_t ScriptInt; // w0
  const MethodInfo *v59; // x3
  SummonControl_o *v60; // x0
  const MethodInfo *v61; // x2
  int32_t v62; // w22
  int afterChargeStoneNum; // w21
  SummonConfirmDlgComponent_o *v64; // x25
  struct SummonInfoControl_o *v65; // x9
  struct GachaRqParamData_o *v66; // x8
  struct SummonInfoControl_o *v67; // x9
  struct GachaRqParamData_o *v68; // x8
  int32_t v69; // w28
  System_String_o *v70; // x24
  int32_t v71; // w26
  _BOOL4 isAppendSummon; // w29
  _BOOL4 v73; // w27
  struct GachaRqParamData_o *v74; // x8
  int32_t gachaId; // w28
  int32_t haveStone; // w24
  struct GachaRqParamData_o *v77; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x24
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  System_Int32_array *ScriptIntArray; // x25
  const MethodInfo *v82; // x3
  const MethodInfo *v83; // x2
  struct GachaRqParamData_o *v84; // x8
  int32_t gachaTime; // w22
  struct GachaRqParamData_o *v86; // x8
  SummonControl_o *v87; // x22
  struct SummonInfoControl_o *summonInfoCtr; // x8
  VaildGachaInfo_o *v89; // x25
  System_String_o *name; // x9
  int32_t payGachaPrice; // w26
  int32_t v92; // w20
  GachaExtraGiftEntity_array *v93; // x23
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x24
  int32_t v95; // w27
  int32_t v96; // w28
  _BOOL4 isPickup; // w21
  struct GachaRqParamData_o *v98; // x8
  int32_t privilegeGachaTextId; // w9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x24
  struct GachaRqParamData_o *v101; // x8
  int32_t isPrivilege; // w9
  SummonControl_o *summonCloseAt; // [xsp+78h] [xbp-98h]
  int32_t v104; // [xsp+84h] [xbp-8Ch]
  int32_t v105; // [xsp+88h] [xbp-88h]
  int32_t v106; // [xsp+8Ch] [xbp-84h]
  int32_t v107; // [xsp+8Ch] [xbp-84h]
  int32_t v108; // [xsp+90h] [xbp-80h]
  System_String_o *v109; // [xsp+90h] [xbp-80h]
  System_String_o *title; // [xsp+98h] [xbp-78h]
  int32_t titlea; // [xsp+98h] [xbp-78h]
  bool HasFlag; // [xsp+A4h] [xbp-6Ch]
  int32_t v113; // [xsp+A4h] [xbp-6Ch]
  GachaExtraGiftEntity_array *v114; // [xsp+A8h] [xbp-68h]
  SummonConfirmDlgComponent_CallbackFunc_o *v115; // [xsp+A8h] [xbp-68h]

  v4 = this;
  if ( (byte_49B7544 & 1) == 0 )
  {
    sub_1B4CF90(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B4CF90(&Method_SummonControl_ConfirmMessageOpen__, v14);
    sub_1B4CF90(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15);
    sub_1B4CF90(&Method_SummonControl_confirmResult__, v16);
    this = (SummonControl_o *)sub_1B4CF90(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    byte_49B7544 = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_107;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_107;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v20 = v4->fields.gachaParamData;
  if ( !v20 )
    goto LABEL_107;
  if ( !this )
    goto LABEL_107;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v20->fields.gachaId,
                         0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_107;
  v22 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_107;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v22[24], v22[46], 0LL);
  this = (SummonControl_o *)v4->fields.vaildGachaList;
  if ( !this )
    goto LABEL_107;
  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v4->fields.currentIdx,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v23 = gachaType - 1;
  v24 = (VaildGachaInfo_o *)this;
  switch ( v23 )
  {
    case 0:
      needStone = v4->fields.needStone;
      haveFreeStone = v4->fields.haveFreeStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v28 = haveFreeStone - needStone;
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
        haveChargeStone += v28;
      }
      haveStone = v4->fields.haveStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v77 = v4->fields.gachaParamData;
      if ( !v77 )
        goto LABEL_107;
      v113 = haveStone;
      if ( !this )
        goto LABEL_107;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v77->fields.gachaId, 0LL);
      v115 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v115,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v79);
      titlea = needStone;
      if ( GachaDetailEntity )
      {
        this = (SummonControl_o *)GachaDetailEntity__HasText(GachaDetailEntity, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v115 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
          SummonConfirmDlgComponent_CallbackFunc___ctor(
            v115,
            (Il2CppObject *)v4,
            (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
            v80);
          ScriptIntArray = GachaDetailEntity__GetScriptIntArray(
                             GachaDetailEntity,
                             v4->fields.DETAIL_SCRIPT_IDS,
                             0LL,
                             0LL);
          this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(
                                      GachaDetailEntity,
                                      v4->fields.DETAIL_SCRIPT_TYPE,
                                      0,
                                      0LL);
          if ( ScriptIntArray )
          {
            if ( (_DWORD)this == 1 )
            {
              v115 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
              SummonConfirmDlgComponent_CallbackFunc___ctor(
                v115,
                (Il2CppObject *)v4,
                (intptr_t)Method_SummonControl_confirmResult__,
                v82);
              if ( beforeDetailFlag )
              {
                this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v83);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_106;
              }
            }
          }
        }
      }
      v84 = v4->fields.gachaParamData;
      if ( !v84 )
        goto LABEL_107;
      gachaTime = v84->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_92;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaMaster___);
      v86 = v4->fields.gachaParamData;
      if ( !v86 || !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v86->fields.gachaId,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( this && (v87 = this, LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_107;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_107;
        this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    LODWORD(v87->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                    0LL);
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
      if ( v24 )
      {
        summonInfoCtr = v4->fields.summonInfoCtr;
        if ( summonInfoCtr )
        {
          v89 = v24;
          name = v24->fields.name;
          payGachaPrice = summonInfoCtr->fields.payGachaPrice;
          v92 = haveChargeStone;
          v93 = ListGachaExtraGift;
          confirmDlgInfo = v4->fields.confirmDlgInfo;
          v95 = v4->fields.haveStone;
          v96 = v4->fields.haveFreeStone;
          isPickup = v89->fields.isPickup;
          v109 = name;
          v107 = v4->fields.haveChargeStone;
          this = (SummonControl_o *)VaildGachaInfo__CloseAt(v89, 0LL);
          v98 = v4->fields.gachaParamData;
          if ( v98 )
          {
            privilegeGachaTextId = v89->fields.isPrivilege;
            if ( v89->fields.isPrivilege )
              privilegeGachaTextId = v98->fields.gachaId;
            if ( confirmDlgInfo )
            {
              SummonConfirmDlgComponent__OpenConfirmStone(
                confirmDlgInfo,
                v109,
                1,
                payGachaPrice,
                gachaTime,
                v95,
                v96,
                v107,
                v113 - titlea,
                haveFreeStone,
                v92,
                v115,
                0,
                isPickup,
                (int64_t)this,
                0,
                0LL,
                0LL,
                v93,
                v98->fields.shopIdIdx,
                privilegeGachaTextId,
                0LL);
              return;
            }
          }
        }
      }
      goto LABEL_107;
    case 2:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v29 = v4->fields.summonInfoCtr;
      if ( !v29 )
        goto LABEL_107;
      v4->fields.isDailyGacha = v29->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v22[62], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v30) )
        SummonControl__friendPointSummonConfirm(v4, v30);
      return;
    case 4:
      v31 = v4->fields.summonInfoCtr;
      if ( !v31 )
        goto LABEL_107;
      ticketNum = v31->fields.ticketNum;
      v33 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v33 )
        goto LABEL_107;
      v4->fields.afterTicketNum = ticketNum - v33->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v34 = v4->fields.gachaParamData;
      if ( !v34 || !this )
        goto LABEL_107;
      v35 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v34->fields.gachaId, 0LL);
      v36 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v37);
      if ( v35 )
      {
        v38 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v38,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v39);
        v40 = GachaDetailEntity__GetScriptIntArray(v35, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v35, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v40 )
        {
          if ( (_DWORD)this == 1 )
          {
            v41 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v41,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v42);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v40, v43);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_106;
            }
          }
        }
      }
      v44 = v4->fields.gachaParamData;
      if ( !v44 )
        goto LABEL_107;
      v45 = v44->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaMaster___);
      v46 = v4->fields.gachaParamData;
      if ( !v46 || !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v46->fields.gachaId,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_39;
      v47 = this;
      if ( !LODWORD(this->fields.TUTORIAL_MENU_ARROW_POS.fields.x) )
        goto LABEL_39;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  LODWORD(v47->fields.TUTORIAL_MENU_ARROW_POS.fields.x),
                                  0LL);
      if ( (_DWORD)this == 9 )
        ++v45;
LABEL_39:
      if ( !v24 )
        goto LABEL_107;
      this = (SummonControl_o *)v4->fields.confirmDlgInfo;
      if ( !this )
        goto LABEL_107;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        (SummonConfirmDlgComponent_o *)this,
        v24->fields.name,
        v45,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v36,
        0LL);
      return;
    case 6:
      v114 = ListGachaExtraGift;
      v48 = v4->fields.haveStone;
      v49 = v4->fields.needStone;
      v50 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v51 = v4->fields.gachaParamData;
      if ( !v51 || !this )
        goto LABEL_107;
      v52 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v51->fields.gachaId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
      v53 = v4->fields.gachaParamData;
      if ( !v53 )
        goto LABEL_107;
      if ( !this )
        goto LABEL_107;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v53->fields.gachaId,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_107;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v55);
      if ( v52
        && GachaDetailEntity__HasText(v52, 0LL)
        && (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
              v56),
            v57 = GachaDetailEntity__GetScriptIntArray(v52, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL),
            ScriptInt = GachaDetailEntity__GetScriptInt(v52, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL),
            v57)
        && ScriptInt == 1
        && (callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo),
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v59),
            beforeDetailFlag)
        && !SummonControl__CheckGachaNum(v60, v57, v61) )
      {
LABEL_106:
        SummonControl__BeforeConfirmMessageOpen(v4, (const MethodInfo *)beforeDetailFlag);
      }
      else
      {
        this = (SummonControl_o *)v4->fields.summonInfoCtr;
        if ( !this )
          goto LABEL_107;
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
                  v64,
                  (int32_t)this,
                  v65->fields.payGachaPrice,
                  v4->fields.haveStone,
                  v4->fields.haveFreeStone,
                  v4->fields.haveChargeStone,
                  v62,
                  v4->fields.haveFreeStone,
                  afterChargeStoneNum,
                  callback,
                  v114,
                  v66->fields.shopIdIdx,
                  0LL);
                return;
              }
            }
          }
          goto LABEL_107;
        }
        if ( !v24 )
          goto LABEL_107;
        v67 = v4->fields.summonInfoCtr;
        if ( !v67 )
          goto LABEL_107;
        v68 = v4->fields.gachaParamData;
        if ( !v68 )
          goto LABEL_107;
        v69 = v67->fields.payGachaPrice;
        v70 = v24->fields.name;
        v71 = v4->fields.haveFreeStone;
        isAppendSummon = v68->fields.isAppendSummon;
        v105 = v4->fields.haveStone;
        v106 = v68->fields.gachaTime;
        v73 = v24->fields.isPickup;
        v104 = v4->fields.haveChargeStone;
        this = (SummonControl_o *)VaildGachaInfo__CloseAt(v24, 0LL);
        title = v70;
        v108 = v69;
        summonCloseAt = this;
        if ( HasFlag )
        {
          v74 = v4->fields.gachaParamData;
          if ( !v74 )
            goto LABEL_107;
          gachaId = v74->fields.gachaId;
        }
        else
        {
          gachaId = 0;
        }
        tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
        BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
          tryGetBonusSelectData,
          (Il2CppObject *)v4,
          Method_SummonControl_TryGetSelectBonusDataInfo__,
          0LL);
        v101 = v4->fields.gachaParamData;
        if ( !v101 )
          goto LABEL_107;
        isPrivilege = v24->fields.isPrivilege;
        if ( v24->fields.isPrivilege )
          isPrivilege = v101->fields.gachaId;
        if ( !v64 )
LABEL_107:
          sub_1B4D1EC(this, beforeDetailFlag);
        SummonConfirmDlgComponent__OpenConfirmStone(
          v64,
          title,
          7,
          v108,
          v106,
          v105,
          v71,
          v104,
          v62,
          v71,
          afterChargeStoneNum,
          callback,
          isAppendSummon,
          v73,
          (int64_t)summonCloseAt,
          gachaId,
          tryGetBonusSelectData,
          v4->fields.bonusSelectAssetManager,
          v114,
          v101->fields.shopIdIdx,
          isPrivilege,
          0LL);
      }
      return;
    default:
      return;
  }
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
    sub_1B4D1EC(this, a);
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

  if ( (byte_49B7549 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl__SummonSceneRefresh_b__230_0__, v4);
    byte_49B7549 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__230_0__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v7, v8);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SummonControl_c *v10; // x0
  System_String_o *String_68762736; // x21
  System_Object_array *v12; // x0
  SelectBonusData_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int max_length; // w8
  __int64 v17; // x9

  if ( (byte_49B753F & 1) == 0 )
  {
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData);
    sub_1B4CF90(&JsonManager_TypeInfo, v6);
    this = (SummonControl_o *)sub_1B4CF90(&SummonControl_TypeInfo, v7);
    byte_49B753F = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)selectBonusData, 0, v8, v9);
  v10 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v10 = SummonControl_TypeInfo;
  }
  String_68762736 = UnityEngine_PlayerPrefs__GetString_68762736(v10->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_68762736, 0LL) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_68762736,
          (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v12 )
  {
    max_length = v12->max_length;
    if ( max_length < 1 )
    {
LABEL_6:
      LOBYTE(v12) = 0;
      return (char)v12;
    }
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1B4D1F4(v12, v13);
      v13 = (SelectBonusData_o *)v12->m_Items[v17];
      if ( !v13 )
        sub_1B4D1EC(v12, 0LL);
      if ( v13->fields.gachaId == gachaId )
        break;
      if ( (int)++v17 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v13;
    sub_1B4CF34((CGThumbnailListItem_o *)selectBonusData, (int32_t)v13, v14, v15);
    LOBYTE(v12) = 1;
  }
  return (char)v12;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *vaildGachaList; // x0
  GachaAppendMaster_o *v6; // x20
  GachaAppendEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B7519 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaAppendMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    byte_49B7519 = 1;
  }
  entity = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_20;
  vaildGachaList = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)vaildGachaList,
                     this->fields.currentIdx,
                     (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
  vaildGachaList = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !this->fields.vaildGachaList
    || (v6 = (GachaAppendMaster_o *)vaildGachaList,
        (vaildGachaList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
                            this->fields.currentIdx,
                            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0LL)
    || !v6
    || (vaildGachaList = (void *)GachaAppendMaster__TryGetHundredSummon(
                                   v6,
                                   &entity,
                                   *((_DWORD *)vaildGachaList + 4),
                                   0LL),
        !this->fields.summonInfoCtr) )
  {
LABEL_20:
    sub_1B4D1EC(vaildGachaList, method);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B755B & 1) == 0 )
  {
    sub_1B4CF90(&SummonControl__WaitBattleChrLoad_d__252_TypeInfo, method);
    byte_49B755B = 1;
  }
  v3 = sub_1B4D1DC(SummonControl__WaitBattleChrLoad_d__252_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SummonControl___BonusSelectServantSelectDialog_b__304_0(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v22; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v23; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v24; // x24
  System_Action_o *v25; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_49B7597 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__, v7);
    sub_1B4CF90(&Method_SummonControl_SetDispBtn__, v8);
    sub_1B4CF90(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1B4CF90(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__304_1__, v11);
    this = (SummonControl_o *)sub_1B4CF90(&SummonControl___c_TypeInfo, v12);
    byte_49B7597 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__49839864(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.bonusSelectSummonConfirmDialog, (int32_t)Component_object, v17, v18);
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
  v22 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v22, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v23 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    0LL);
  v24 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v24,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  v25 = *(System_Action_o **)&this->fields.confirmDlgInfo->fields.refuseInit;
  if ( !v25 )
  {
    if ( !LODWORD(this->fields.limitWarningDlgInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    v25 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v25, klass, Method_SummonControl___c__BonusSelectServantSelectDialog_b__304_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__304_1 = v25;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__304_1, (int32_t)v25, v28, v29);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1B4D1EC(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v22, v23, v24, v25, 0LL);
}


bool __fastcall SummonControl___CheckFriendPointSummonUpdate_b__222_0(
        SummonControl_o *this,
        GachaSubEntity_o *ent,
        const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( !ent || (gachaParamData = this->fields.gachaParamData) == 0LL )
    sub_1B4D1EC(this, ent);
  return ent->fields.gachaId == gachaParamData->fields.gachaId;
}


void __fastcall SummonControl___DialogCallBack_b__256_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_49B7592 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl_EndCloseDialogCallBack__, v5);
    byte_49B7592 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1B4D1EC(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__289_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1B4D1EC(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


bool __fastcall SummonControl___OnClickSummonListBtn_b__291_0(
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
    sub_1B4D1EC(this, x);
  }
  return 0;
}


void __fastcall SummonControl___OnEndSummonEffect_b__286_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49B7596 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5366/*"END_FADE"*/, method);
    byte_49B7596 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5366/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___ShowConfirmDialog_b__219_0(SummonControl_o *this, const MethodInfo *method)
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v22; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v23; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v24; // x24
  System_Action_o *basePanel; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_49B758D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&Method_SummonControl_BonusSelectSummonConfirmResult__, v7);
    sub_1B4CF90(&Method_SummonControl_SetDispBtn__, v8);
    sub_1B4CF90(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1B4CF90(&Method_SummonControl___c__ShowConfirmDialog_b__219_1__, v11);
    this = (SummonControl_o *)sub_1B4CF90(&SummonControl___c_TypeInfo, v12);
    byte_49B758D = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__49839864(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.bonusSelectSummonConfirmDialog, (int32_t)Component_object, v17, v18);
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
  v22 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v22, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v23 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v24 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v24,
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
    basePanel = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(basePanel, klass, Method_SummonControl___c__ShowConfirmDialog_b__219_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__219_1 = basePanel;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__219_1, (int32_t)basePanel, v28, v29);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1B4D1EC(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v22, v23, v24, basePanel, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__230_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_49B758E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49B758E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        SummonControl__quit(this, v6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__152_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_49B7589 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl__exeFormation_b__152_2__, v4);
    byte_49B7589 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__152_2__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v7, v8);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall SummonControl___exeFormation_b__152_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_49B758A & 1) == 0 )
  {
    sub_1B4CF90(&TutorialFlag_TypeInfo, method);
    byte_49B758A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___executeEnhanceTresureDevice_b__273_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_49B7595 & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, isDecide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&StringLiteral_5365/*"END_EFFECT"*/, v5);
    byte_49B7595 = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8
    || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_1B4D1EC(Instance, v7);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5365/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__236_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49B758F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12044/*"START_GACHA"*/, method);
    byte_49B758F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12044/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__151_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_49B7588 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl__openAfterSummonInfo_b__151_2__, v4);
    byte_49B7588 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__151_2__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v7, v8);
  CommonUI__CloseTutorialNotificationDialogArrow_30273744((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__151_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__268_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v6; // x19

  if ( (byte_49B7594 & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&StringLiteral_5384/*"END_SUMMON"*/, v4);
    byte_49B7594 = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5384/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_10:
    sub_1B4D1EC(summonResultInfo, method);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__182_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_49B758C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12490/*"SetBannerCenter"*/, method);
    byte_49B758C = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12490/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1B4D1EC(0LL, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__159_0(
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

  if ( (byte_49B758B & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1B4CF90(&StringLiteral_24683/*"{0:N0}"*/, v7);
    byte_49B758B = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v12 = stoneCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_24683/*"{0:N0}"*/, v9, 0LL);
  if ( !currentStoneNumLb )
    sub_1B4D1EC(v10, v11);
  UILabel__set_text(currentStoneNumLb, v10, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__243_0(SummonControl_o *this, const MethodInfo *method)
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v39; // x9
  char v40; // w10
  Il2CppObject *v41; // x23
  System_String_o *Value; // x0
  System_String_array *v43; // x0
  SummonControl___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x24
  System_Func_object__int__o *_9__243_1; // x25
  Il2CppObject *v47; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_List_int__o *v52; // x24
  float v53; // s0
  struct GachaInfos_array *v54; // x8
  int max_length; // w21
  float v56; // s8
  il2cpp_array_size_t v57; // w22
  GachaInfos_o *v58; // x20
  int32_t v59; // w26
  char v60; // w25
  int32_t Data; // w28
  int32_t v62; // w29
  bool isNew; // w27
  int v64; // w28
  _DWORD *v65; // x25
  bool IsServant; // w27
  const MethodInfo *v67; // x2
  int v68; // w8
  bool v69; // w28
  struct System_Int32_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  _BOOL4 v73; // w27
  WeightRate_int__o *v74; // x28
  int32_t v75; // w0
  int32_t v76; // w0
  const MethodInfo *v77; // [xsp+10h] [xbp-A0h]
  ServantLimitMaster_o *v78; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_49B7590 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ConstantStrMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantVoiceMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_string__int___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_1B4CF90(&System_Func_string__int__TypeInfo, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B4CF90(&SoundManager_TypeInfo, v19);
    sub_1B4CF90(&Method_SummonControl___c__showSummonEffect_b__243_1__, v20);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v21);
    sub_1B4CF90(&Method_WeightRate_int___ctor__, v22);
    sub_1B4CF90(&Method_WeightRate_int__getData__, v23);
    sub_1B4CF90(&Method_WeightRate_int__getTotalWeight__, v24);
    sub_1B4CF90(&Method_WeightRate_int__setWeight__, v25);
    sub_1B4CF90(&WeightRate_int__TypeInfo, v26);
    sub_1B4CF90(&StringLiteral_5379/*"END_PREPARATION"*/, v27);
    sub_1B4CF90(&StringLiteral_12183/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v28);
    sub_1B4CF90(&StringLiteral_2916/*"BGM_SUMMON_1"*/, v29);
    byte_49B7590 = 1;
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
  SoundManager__playBgm((System_String_o *)StringLiteral_2916/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.summonComp, (int32_t)Component_object, v35, v36);
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
    v39 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v40 = 1;
  }
  else
  {
LABEL_15:
    v39 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_84;
    v40 = 0;
  }
  v39->fields.isNoSkip = v40;
  v39->fields.gachaId = gachaParamData->fields.gachaId;
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v78 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12183/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v43 = System_String__Split(Value, 0x2Cu, 0, 0LL);
    v44 = SummonControl___c_TypeInfo;
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
    if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v44 = SummonControl___c_TypeInfo;
    }
    _9__243_1 = (System_Func_object__int__o *)v44->static_fields->__9__243_1;
    if ( !_9__243_1 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = SummonControl___c_TypeInfo;
      }
      v47 = (Il2CppObject *)v44->static_fields->__9;
      _9__243_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__243_1, v47, Method_SummonControl___c__showSummonEffect_b__243_1__, 0LL);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__243_1 = (struct System_Func_string__int__o *)_9__243_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__243_1, (int32_t)_9__243_1, v49, v50);
    }
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v45,
                                                                 (System_Func_TSource__TResult__o *)_9__243_1,
                                                                 (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_string__int___);
    v52 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v51,
                                                      (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v52 = 0LL;
  }
  v53 = UnityEngine_Random__get_value(0LL);
  v54 = this->fields.gachaResInfoList;
  if ( v54 )
  {
    max_length = v54->max_length;
    if ( max_length >= 1 )
    {
      v56 = v53;
      v57 = 0;
      while ( 1 )
      {
        if ( v57 >= v54->max_length )
          sub_1B4D1F4(maskObject, method);
        v58 = v54->m_Items[v57];
        if ( !v58 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v58->fields.type, 0LL);
        method = (const MethodInfo *)(unsigned int)v58->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v41 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                       (int32_t)method,
                       (const MethodInfo_319D99C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v59 = *((_DWORD *)maskObject + 16);
        v60 = 0;
LABEL_40:
        Data = 0;
        v62 = 3;
        isNew = v58->fields.isNew;
        if ( v52 )
          goto LABEL_76;
LABEL_80:
        maskObject = 0LL;
LABEL_81:
        if ( !*p_summonComp )
          goto LABEL_84;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v58->fields.objectId,
          v58->fields.limitCount,
          v60,
          isNew,
          Data,
          v59,
          v62,
          (unsigned __int8)maskObject & 1,
          v58->fields.userSvtId,
          v77);
        if ( max_length == ++v57 )
          goto LABEL_85;
        v54 = this->fields.gachaResInfoList;
        if ( !v54 )
          goto LABEL_84;
      }
      maskObject = MasterData_object;
      if ( !MasterData_object )
        goto LABEL_84;
      maskObject = DataMasterBase_object__object__int___GetEntity(
                     MasterData_object,
                     (int32_t)method,
                     (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v64 = *((_DWORD *)maskObject + 21);
      v65 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = v78;
      if ( !v78 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v78, v58->fields.objectId, v58->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_84;
      v59 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v65[20], v67) )
        goto LABEL_51;
      if ( v59 == 5 )
      {
        if ( v56 >= 0.2 )
        {
LABEL_51:
          v60 = 0;
          goto LABEL_52;
        }
      }
      else if ( v59 != 4 || v56 >= 0.4 )
      {
        goto LABEL_51;
      }
      v60 = 1;
LABEL_52:
      v68 = v64 - 3;
      v62 = 0;
      Data = 0;
      isNew = 0;
      switch ( v68 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v69 = v58->fields.isNew;
          isNew = v69;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v58->fields.objectId,
                         0LL);
          if ( maskObject != 0LL && v69 )
          {
            if ( !v52 )
            {
              v52 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v52,
                (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v52 )
                goto LABEL_84;
            }
            method = (const MethodInfo *)(unsigned int)v58->fields.objectId;
            items = v52->fields._items;
            v71 = Method_System_Collections_Generic_List_int__Add__;
            ++v52->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v52->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v52,
                (int32_t)method,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v52->fields._size = size + 1;
              items->m_Items[size + 1] = (int)method;
            }
            v62 = 1;
          }
          else
          {
            Data = 0;
            v62 = 1;
LABEL_75:
            if ( !v52 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v62 = 1;
          if ( !v52 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v73 = v58->fields.isNew;
          v74 = (WeightRate_int__o *)sub_1B4D1DC(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v74, (const MethodInfo_3951A24 *)Method_WeightRate_int___ctor__);
          if ( v59 == 4 )
          {
            if ( !v74 )
              goto LABEL_84;
            WeightRate_int___setWeight(v74, 60, 0, (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v74, 40, 1, (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
            v75 = UnityEngine_Random__Range_68764200(0, v74->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v74, v75, (const MethodInfo_39513B4 *)Method_WeightRate_int__getData__);
            v62 = 2;
            isNew = v73;
            v60 &= Data == 0;
            v59 = 4;
            if ( v52 )
              break;
          }
          else
          {
            isNew = v73;
            if ( v59 == 5 )
            {
              if ( !v74 )
                goto LABEL_84;
              WeightRate_int___setWeight(v74, 60, 0, (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v74, 20, 1, (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
              v62 = 2;
              WeightRate_int___setWeight(v74, 20, 2, (const MethodInfo_3950F40 *)Method_WeightRate_int__setWeight__);
              v76 = UnityEngine_Random__Range_68764200(0, v74->fields.totalweight, 0LL);
              Data = WeightRate_int___getData(v74, v76, (const MethodInfo_39513B4 *)Method_WeightRate_int__getData__);
              v60 &= Data == 0;
              v59 = 5;
              if ( v52 )
                break;
            }
            else
            {
              Data = 0;
              v62 = 2;
              if ( v52 )
                break;
            }
          }
          goto LABEL_80;
      }
LABEL_76:
      maskObject = (void *)System_Collections_Generic_List_int___Contains(
                             v52,
                             v58->fields.objectId,
                             (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1B4D1EC(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5379/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__259_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonControl___c_c *v5; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__259_1; // x21
  Il2CppObject *v9; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B7593 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SummonControl___c__showSummonResultInfo_b__259_1__, v3);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v4);
    byte_49B7593 = 1;
  }
  v5 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v5 = SummonControl___c_TypeInfo;
  }
  _9__259_1 = v5->static_fields->__9__259_1;
  if ( !_9__259_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__259_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__259_1, v9, Method_SummonControl___c__showSummonResultInfo_b__259_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__259_1 = _9__259_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__259_1, (int32_t)_9__259_1, v11, v12);
  }
  if ( !overflowSvtCoinInfo )
    sub_1B4D1EC(v5, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__259_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__250_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49B7591 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3454/*"CLICK_OK"*/, method);
    byte_49B7591 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3454/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B4D1EC(0LL, v4);
  if ( UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL) )
    SummonControl__friendPointQpManaCheck(this, v5);
  else
    SummonControl__ShowConfirmDialog(this, v5);
}


void __fastcall SummonControl__autoSellSettingChange2(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B4D1EC(0LL, v4);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v5) )
  {
    SummonControl__ShowConfirmDialog(this, v5);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49B754E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_beforeConfirmCautionResult__, method);
    byte_49B754E = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1B4D1EC(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  SummonControl__ShowConfirmDialogProcess(this, 0, v6);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SummonControl_o *v14; // x20
  __int64 v15; // x8
  struct GachaInfos_array *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  struct System_Int32_array *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  struct GetSvtCoin_array *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  struct System_Int32_array *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  struct GachaExtraGifts_array *v32; // x1

  v4 = this;
  if ( (byte_49B7551 & 1) == 0 )
  {
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result);
    sub_1B4CF90(&JsonManager_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v6);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v7);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v8);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_15763/*"]"*/, v9);
    byte_49B7551 = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL)
    || System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v10);
    return;
  }
  v11 = (Il2CppObject *)System_String__Concat_61131716(
                          (System_String_o *)StringLiteral_15507/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15763/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v11,
                              (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_22;
  v14 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v15 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v15 )
    goto LABEL_22;
  v16 = *(struct GachaInfos_array **)(v15 + 16);
  v4->fields.gachaResInfoList = v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.gachaResInfoList, (int32_t)v16, v12, v13);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v19 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v19 )
    goto LABEL_22;
  v20 = *(struct System_Int32_array **)(v19 + 24);
  v4->fields.canRankUpClassIds = v20;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.canRankUpClassIds, (int32_t)v20, v17, v18);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v23 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v23 )
    goto LABEL_22;
  v24 = *(struct GetSvtCoin_array **)(v23 + 32);
  v4->fields.overflowSvtCoinInfos = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)v24, v21, v22);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v27 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v27 )
    goto LABEL_22;
  v28 = *(struct System_Int32_array **)(v27 + 40);
  v4->fields.extraGiftIds = v28;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.extraGiftIds, (int32_t)v28, v25, v26);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1B4D1F4(this, result);
  v31 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v31
    || (v32 = *(struct GachaExtraGifts_array **)(v31 + 48),
        v4->fields.GachaExtraGiftList = v32,
        sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.GachaExtraGiftList, (int32_t)v32, v29, v30),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_22:
    sub_1B4D1EC(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10847/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49B7554 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, result);
    byte_49B7554 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B4D1EC(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10847/*"REQUEST_OK"*/, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_49B756B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl___c__DisplayClass272_0__checkEnhanceTresureDevice_b__0__, v5);
    sub_1B4CF90(&SummonControl___c__DisplayClass272_0_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_9128/*"NO_EXIST"*/, v7);
    byte_49B756B = 1;
  }
  v8 = sub_1B4D1DC(SummonControl___c__DisplayClass272_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v8 + 24), v13) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v17 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v8,
      Method_SummonControl___c__DisplayClass272_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
      return;
    }
LABEL_11:
    sub_1B4D1EC(fsm, v10);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9128/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49B7569 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9128/*"NO_EXIST"*/, method);
    byte_49B7569 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B4D1EC(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9128/*"NO_EXIST"*/, 0LL);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v17; // x8
  int32_t objectId; // w21
  Il2CppObject *v19; // x19
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_49B756A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B4CF90(&Method_SummonControl___c__DisplayClass271_0__checkEnhanceTresureDeviceSingle_b__0__, v7);
    sub_1B4CF90(&SummonControl___c__DisplayClass271_0_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_9128/*"NO_EXIST"*/, v9);
    byte_49B756A = 1;
  }
  v10 = sub_1B4D1DC(SummonControl___c__DisplayClass271_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v10 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B4D1F4(Instance, v12);
  v17 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v17 )
    goto LABEL_16;
  objectId = v17->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v10 + 24) = objectId;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v10,
      Method_SummonControl___c__DisplayClass271_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v19 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v19, 1, DEFAULT_FADE_TIME, v22, 0LL);
      return;
    }
LABEL_16:
    sub_1B4D1EC(Instance, v12);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9128/*"NO_EXIST"*/, 0LL);
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

  if ( (byte_49B752F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4);
    sub_1B4CF90(&StringLiteral_3356/*"CHECK_STONE"*/, v5);
    sub_1B4CF90(&StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/, v6);
    sub_1B4CF90(&StringLiteral_3353/*"CHECK_POINT"*/, v7);
    sub_1B4CF90(&StringLiteral_2943/*"BONUS_SELECT_CHECK_STONE"*/, v8);
    byte_49B752F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_2943/*"BONUS_SELECT_CHECK_STONE"*/, 0LL);
    }
  }
  v13 = this->fields.gachaParamData;
  if ( !v13 )
LABEL_25:
    sub_1B4D1EC(Master_object, v10);
  switch ( v13->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v14 = &StringLiteral_3356/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v14 = &StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/;
      else
        v14 = (__int64 *)&StringLiteral_3353/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v14 = &StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)*v14, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_49B7558 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_6843/*"GET_MULTI"*/, method);
    byte_49B7558 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B4D1EC(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6843/*"GET_MULTI"*/, 0LL);
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
    sub_1B4D1EC(0LL, drawUsrGachaEnt);
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
  if ( (byte_49B7559 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9065/*"NEW_SVT"*/, method);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_6857/*"GO_BACK"*/, v4);
    byte_49B7559 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B4D1F4(this, method);
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_14;
  if ( v7->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v7->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v8 = &StringLiteral_9065/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B4D1EC(this, method);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v8 = &StringLiteral_6857/*"GO_BACK"*/;
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
    sub_1B4D1EC(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1B4D1F4(this, method);
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
  if ( (byte_49B7562 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B4CF90(&StringLiteral_9421/*"OLD_SVT"*/, v4);
    sub_1B4CF90(&StringLiteral_6309/*"FINAL_SVT"*/, v5);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_9065/*"NEW_SVT"*/, v6);
    byte_49B7562 = 1;
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
      v10 = &StringLiteral_6309/*"FINAL_SVT"*/;
LABEL_15:
      v13 = (System_String_o *)*v10;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1B4D1F4(this, method);
  v11 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v11 )
    goto LABEL_22;
  if ( !v11->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v10 = &StringLiteral_9421/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1B4D1EC(this, method);
  }
  objectId = v11->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v13 = (System_String_o *)StringLiteral_9421/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v13, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9065/*"NEW_SVT"*/, 0LL);
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
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1B4D1EC(0LL, v9);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  bool result; // w0

  if ( (byte_49B7563 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_49B7563 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B4D1EC(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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

  if ( (byte_49B7502 & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_3419/*"CLEAR_TUTORIAL"*/, v5);
    sub_1B4CF90(&StringLiteral_10906/*"RETURN_TUTORIAL"*/, v6);
    byte_49B7502 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
    goto LABEL_52;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38224448(101, 0LL) )
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
      if ( TutorialFlag__Get_38224448(101, 0LL) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_49;
        v10 = &StringLiteral_10906/*"RETURN_TUTORIAL"*/;
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
    if ( !TutorialFlag__Get_38224448(101, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38224448(107, 0LL) )
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
      v10 = &StringLiteral_3419/*"CLEAR_TUTORIAL"*/;
      goto LABEL_41;
    }
    v13 = 4;
  }
  this->fields.tutorialKind = v13;
  SummonControl__progTutorial(this, v7);
LABEL_45:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14 )
LABEL_49:
    sub_1B4D1EC(fsm, v8);
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
  if ( (byte_49B7527 & 1) == 0 )
  {
    sub_1B4CF90(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B4CF90(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v8);
    sub_1B4CF90(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9);
    sub_1B4CF90(&Method_SummonControl_closeShotSvtFrameDlg__, v10);
    sub_1B4CF90(&StringLiteral_6421/*"FRIEND_GACHA_ADD_LIMIT"*/, v11);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_3354/*"CHECK_RESOURCE"*/, v12);
    byte_49B7527 = 1;
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
  if ( !byte_49B5CB8 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B5CB8 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v17->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6421/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3354/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_40:
    sub_1B4D1EC(this, method);
  }
  if ( servantEquipSum[1] >= v23 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = v2->fields.userGameEntity;
    if ( !v33 )
      goto LABEL_40;
    v34 = v33->fields.svtKeep;
    v35 = servantEquipSum[1];
    v36 = this;
    v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B4D1DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = v2->fields.userGameEntity;
      if ( !v38 )
        goto LABEL_40;
      v28 = v38->fields.svtEquipKeep;
      v39 = servantEquipSum[0];
      v40 = this;
      v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B4D1DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v26 = this;
      if ( !byte_49B5CB8 )
      {
        sub_1B4CF90(&BalanceConfig_TypeInfo, method);
        byte_49B5CB8 = 1;
      }
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      v28 = v27->static_fields->CommandCodeFrameMax;
      v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B4D1DC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_49B7530 & 1) == 0 )
  {
    sub_1B4CF90(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TblUserMaster___, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_1B4CF90(&Method_SummonControl_closeShotPointDlg__, v6);
    sub_1B4CF90(&StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/, v7);
    byte_49B7530 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B9D620(v2);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1B9D620(v2);
  MasterData_object = **(void ***)(v9 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
    v16 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
    sub_1B4D1EC(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/, 0LL);
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
  if ( (byte_49B7532 & 1) == 0 )
  {
    sub_1B4CF90(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&System_Math_TypeInfo, v3);
    sub_1B4CF90(&Method_SummonControl_closeShotStoneDlg__, v4);
    this = (SummonControl_o *)sub_1B4CF90(&StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/, v5);
    byte_49B7532 = 1;
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
      v15 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
      sub_1B4D1EC(this, method);
    }
  }
  else
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = (SummonControl_o *)System_Math__Max_62621788(haveStoneNum, HaveChargeStoneNum_k__BackingField, 0LL);
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
      v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11937/*"SHOW_CONFIRM_DLG"*/, 0LL);
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

  if ( (byte_49B7525 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7525 = 1;
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
      UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_33:
    sub_1B4D1EC(bannerLoopCtr, method);
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
      UnityEngine_Object__Destroy_68804456(v9, 0LL);
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
      UnityEngine_Object__Destroy_68804456(v11, 0LL);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49B7566 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_49B7566 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL) )
  {
    sub_1B4D1EC(summonResultInfo, method);
  }
  SummonResultComponent__SetActive(summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v5, v6, v7);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_49B752A & 1) == 0 )
  {
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B4CF90(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v7);
    sub_1B4CF90(&StringLiteral_12392/*"SellServant"*/, v8);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v9);
    byte_49B752A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  v12 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v12, v12[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216272(v15, (System_String_o *)StringLiteral_12392/*"SellServant"*/, 2, 0LL);
      if ( v14 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v14, 22, 1, (Il2CppObject *)v15, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B4D1EC(Instance, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_49B7531 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_closeShotPointDlg__, res);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v4);
    byte_49B7531 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v6 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotPointDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1B4D1EC(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_49B7533 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_closeShotStoneDlg__, res);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v5);
    sub_1B4CF90(&StringLiteral_6859/*"GO_BUY_STONE"*/, v6);
    byte_49B7533 = 1;
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
    v8 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotStoneDlg__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v10 = &StringLiteral_3426/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B4D1EC(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v10 = &StringLiteral_6859/*"GO_BUY_STONE"*/;
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

  if ( (byte_49B7529 & 1) == 0 )
  {
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B4CF90(&Method_SummonControl_closeShotSvtEqFrameDlg__, v7);
    sub_1B4CF90(&StringLiteral_12432/*"ServantEquipList"*/, v8);
    sub_1B4CF90(&StringLiteral_12392/*"SellServant"*/, v9);
    sub_1B4CF90(&StringLiteral_12431/*"ServantEQCombine"*/, v10);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v11);
    byte_49B7529 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v19 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v20 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39216272(v17, (System_String_o *)StringLiteral_12392/*"SellServant"*/, 1, 0LL);
        if ( v16 )
        {
          v18 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1B4D1EC(Instance, v13);
    case 1:
      v21 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39216184(v17, (System_String_o *)StringLiteral_12432/*"ServantEquipList"*/, 0LL);
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
        v14 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39216184(v17, (System_String_o *)StringLiteral_12431/*"ServantEQCombine"*/, 0LL);
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
    v23 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 1, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_49B7528 & 1) == 0 )
  {
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B4CF90(&Method_SummonControl_closeShotSvtFrameDlg__, v7);
    sub_1B4CF90(&StringLiteral_12392/*"SellServant"*/, v8);
    sub_1B4CF90(&StringLiteral_12428/*"ServantCombine"*/, v9);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v10);
    byte_49B7528 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v18 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtFrameDlg__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39216272(v16, (System_String_o *)StringLiteral_12392/*"SellServant"*/, 0, 0LL);
        if ( v15 )
        {
          v17 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1B4D1EC(Instance, v12);
    case 1:
      v21 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v13 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtFrameDlg__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39216184(v16, (System_String_o *)StringLiteral_12428/*"ServantCombine"*/, 0LL);
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
    v23 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_closeShotSvtFrameDlg__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 1, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_49B754C & 1) == 0 )
  {
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_SummonControl_BonusSelectSummonConfirmResult__, v8);
    sub_1B4CF90(&Method_SummonControl_SetDispBtn__, v9);
    sub_1B4CF90(&Method_SummonControl_TryGetSelectBonusDataInfo__, v10);
    sub_1B4CF90(&Method_SummonControl_confirmCautionResult__, v11);
    sub_1B4CF90(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v13);
    byte_49B754C = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, 0LL);
  if ( !res )
  {
    v18 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_confirmCautionResult__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v24 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v25,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v26 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B4D1DC(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B4D1EC(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v15 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_confirmCautionResult__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0, 0LL);
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

  if ( (byte_49B754B & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_confirmResult__, res);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v5);
    byte_49B754B = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  if ( !res )
  {
    v10 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_confirmResult__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B4D1EC(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v7 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_confirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
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
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x19
  __int64 noneGachaInfo; // x0
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  Il2CppObject *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UICenterOnChild_o *v49; // x21
  CGThumbnailListItem_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v52; // x22
  System_Delegate_o *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Delegate_o *v56; // x8
  SpringPanel_OnFinished_c *v57; // x1
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v60; // x22
  System_Delegate_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UIScrollView_OnDragNotification_c *v64; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  float v67; // s0
  UnityEngine_Component_o *v68; // x20
  float v69; // s2
  float v70; // s8
  float v71; // s0
  int v72; // w8
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct UICenterOnChild_o *v82; // x21
  System_Delegate_o *v83; // t1
  SpringPanel_OnFinished_o *v84; // x22
  System_Delegate_o *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  SpringPanel_OnFinished_c *v88; // x1
  struct UIScrollView_o *summonMBannerScrollView; // x21
  System_Delegate_o *v90; // t1
  UIScrollView_OnDragNotification_o *v91; // x22
  System_Delegate_o *v92; // x0
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  UIScrollView_OnDragNotification_c *v95; // x1
  int32_t v96; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v99; // x27
  UnityEngine_Transform_o *v100; // x20
  UnityEngine_Transform_o *v101; // x21
  int v102; // s0
  int v105; // w25
  System_String_o *v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  System_Collections_Generic_List_object__o *v109; // x8
  struct System_Object_array *items; // x9
  _QWORD *v111; // x10
  __int64 size; // x11
  GachaBannerComponent_o *v113; // x29
  Il2CppClass **v114; // x0
  int v115; // w8
  int v116; // w9
  int32_t v117; // w26
  System_String_o *v118; // x0
  System_String_o *v119; // x21
  const MethodInfo *v120; // x2
  UnityEngine_Object_o *v121; // x22
  Il2CppObject *Item; // x20
  System_String_o *v123; // x5
  VaildGachaInfo_o *v124; // x19
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x29
  UnityEngine_Transform_o *v128; // x20
  UnityEngine_Transform_o *v129; // x21
  int v130; // s0
  System_String_o *name; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  System_Collections_Generic_List_object__o *v136; // x8
  struct System_Object_array *v137; // x9
  _QWORD *v138; // x10
  __int64 v139; // x11
  SummonMiniBannerComponent_o *v140; // x27
  Il2CppClass **v141; // x0
  System_String_o *v142; // x0
  System_String_o *v143; // x21
  const MethodInfo *v144; // x2
  UnityEngine_Object_o *v145; // x29
  const MethodInfo *v146; // x2
  Il2CppObject *Component_object; // x22
  SummonMiniBannerComponent_CallbackFunc_o *v148; // x20
  float v149; // s8
  int v150; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v152; // x0
  UnityEngine_Transform_o *v153; // x20
  const MethodInfo *v154; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v156; // x21
  SummonInfoControl_ClickDelegate_o *v157; // x22
  const MethodInfo *v158; // x2
  const MethodInfo *v159; // x1
  int v160; // [xsp+Ch] [xbp-94h]
  int v161; // [xsp+10h] [xbp-90h]
  unsigned int v162; // [xsp+14h] [xbp-8Ch]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+20h] [xbp-80h]
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // [xsp+28h] [xbp-78h]
  int v166; // [xsp+38h] [xbp-68h]
  int v167; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (UnityEngine_Component_o **)&byte_49B7000;
  if ( (byte_49B7513 & 1) == 0 )
  {
    sub_1B4CF90(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&SummonInfoControl_ClickDelegate_TypeInfo, v4);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_1B4CF90(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v7);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v8);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v15);
    sub_1B4CF90(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v16);
    sub_1B4CF90(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v17);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    sub_1B4CF90(&UIScrollView_OnDragNotification_TypeInfo, v19);
    sub_1B4CF90(&SpringPanel_OnFinished_TypeInfo, v20);
    sub_1B4CF90(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v21);
    sub_1B4CF90(&Method_SummonControl_OnCenterOnChildFinished__, v22);
    sub_1B4CF90(&Method_SummonControl_OnClickMiniBanner__, v23);
    sub_1B4CF90(&Method_SummonControl_OnDragStarted__, v24);
    sub_1B4CF90(&Method_SummonControl_exeSummon__, v25);
    sub_1B4CF90(&StringLiteral_4894/*"D5"*/, v26);
    sub_1B4CF90(&StringLiteral_20184/*"img_summon_"*/, v27);
    sub_1B4CF90(&StringLiteral_20187/*"img_summon_mini_236"*/, v28);
    sub_1B4CF90(&StringLiteral_20186/*"img_summon_mini_"*/, v29);
    sub_1B4CF90(&StringLiteral_1/*""*/, v30);
    byte_49B7513 = 1;
  }
  v167 = 0;
  v31 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v31;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bannerInfoList, (int32_t)v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v34;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.summonMBannerInfoList, (int32_t)v34, v35, v36);
  if ( !this->fields.vaildGachaList )
  {
    noneGachaInfo = (__int64)this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_126;
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
      goto LABEL_126;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v41 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v41;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bannerLoopCtr, (int32_t)v41, v42, v43);
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
      goto LABEL_126;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v46 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v46;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.centerChild, (int32_t)v46, v47, v48);
  }
  v49 = *p_centerChild;
  if ( !v49 )
    goto LABEL_126;
  onFinished = (System_Delegate_o *)v49->fields.onFinished;
  p_onFinished = (CGThumbnailListItem_o *)&v49->fields.onFinished;
  v52 = (SpringPanel_OnFinished_o *)sub_1B4D1DC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v52, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
  v53 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v52, 0LL);
  v56 = v53;
  if ( v53 )
  {
    v57 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v53->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v53;
    if ( (SpringPanel_OnFinished_c *)v53->klass != v57 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B4CF34(p_onFinished, (int32_t)v53, v54, v55);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_126;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (CGThumbnailListItem_o *)&summonBannerScrollView->fields.onDragStarted;
  v60 = (UIScrollView_OnDragNotification_o *)sub_1B4D1DC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v60, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v61 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v60, 0LL);
  v56 = v61;
  if ( v61 )
  {
    v64 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v61->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v61;
    if ( (UIScrollView_OnDragNotification_c *)v61->klass != v64 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B4CF34(p_onFinished, (int32_t)v61, v62, v63);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_126;
  LODWORD(v2) = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0LL);
  v67 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v68 = *p_bannerLoopCtr;
  v69 = (float)((float)(fminf(v67, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v67 < 1.7778 )
    v70 = 1028.0;
  else
    v70 = v69;
  if ( !byte_49B5360 )
  {
    sub_1B4CF90(&System_Math_TypeInfo, v37);
    byte_49B5360 = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v68 )
    goto LABEL_126;
  v71 = floorf(v70);
  if ( v71 == INFINITY )
    v72 = 0x80000000;
  else
    v72 = (int)v71;
  LODWORD(v68[1].monitor) = v72;
  summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0LL, 0LL) )
  {
    noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
    if ( !noneGachaInfo )
      goto LABEL_126;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v74 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v74;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.summonMBannerLoopCtr, (int32_t)v74, v75, v76);
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
      goto LABEL_126;
    noneGachaInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)noneGachaInfo, 0LL);
    if ( !noneGachaInfo )
      goto LABEL_126;
    v79 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v79;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.summonMBannerCenterChild, (int32_t)v79, v80, v81);
  }
  v82 = *p_summonMBannerCenterChild;
  if ( !v82 )
    goto LABEL_126;
  v83 = (System_Delegate_o *)v82->fields.onFinished;
  p_onFinished = (CGThumbnailListItem_o *)&v82->fields.onFinished;
  v84 = (SpringPanel_OnFinished_o *)sub_1B4D1DC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v84, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
  v85 = System_Delegate__Combine(v83, (System_Delegate_o *)v84, 0LL);
  v56 = v85;
  if ( v85 )
  {
    v88 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v85->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (CGThumbnailListItem_c *)v85;
    if ( (SpringPanel_OnFinished_c *)v85->klass != v88 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B4CF34(p_onFinished, (int32_t)v85, v86, v87);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_126;
  v90 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (CGThumbnailListItem_o *)&summonMBannerScrollView->fields.onDragStarted;
  v91 = (UIScrollView_OnDragNotification_o *)sub_1B4D1DC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v91, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v92 = System_Delegate__Combine(v90, (System_Delegate_o *)v91, 0LL);
  v56 = v92;
  if ( !v92 )
    goto LABEL_65;
  v95 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v92->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (CGThumbnailListItem_c *)v92;
    if ( (UIScrollView_OnDragNotification_c *)v92->klass == v95 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1B4D4AC(v56);
LABEL_65:
  p_onFinished->klass = (CGThumbnailListItem_c *)v56;
LABEL_66:
  sub_1B4CF34(p_onFinished, (int32_t)v56, v93, v94);
  v166 = 2 * (_DWORD)v2;
  if ( 2 * (int)v2 >= 1 )
  {
    v96 = 0;
    v161 = (_DWORD)v2 - 1;
    v162 = (unsigned int)v2 & 0x80000000;
    v160 = (int)v2;
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
      v99 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v100 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_49B5366 )
      {
        noneGachaInfo = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v37);
        byte_49B5366 = 1;
      }
      if ( !v100 )
        break;
      UnityEngine_Transform__set_localScale(v100, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v99, 0LL);
      if ( !*p_bannerLoopCtr )
        break;
      v101 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v102 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v101 )
        break;
      UnityEngine_Transform__set_localPosition(v101, *(UnityEngine_Vector3_o *)&v102, 0LL);
      v105 = v96 + 1;
      v167 = v96 + 1;
      v106 = System_Int32__ToString_62608464((int32_t)&v167, (System_String_o *)StringLiteral_4894/*"D5"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v99, v106, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v99,
                                 (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v109 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v109->fields._items;
      v111 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v109->fields._version;
      if ( !items )
        break;
      size = v109->fields._size;
      v113 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v109,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &items->obj.klass + size;
        v109->fields._size = size + 1;
        v114[4] = (Il2CppClass *)v113;
        sub_1B4CF34((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v113, v107, v108);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      v115 = v96 | v162;
      v116 = (int)(v96 | v162) <= v161 ? 0 : (int)v2;
      if ( !noneGachaInfo )
        break;
      v117 = v115 - v116;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v115 - v116,
                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v2 = p_bannerLoopCtr;
      v118 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v119 = System_String__Concat_61093468((System_String_o *)StringLiteral_20184/*"img_summon_"*/, v118, 0LL);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg(this, v119, v120);
      if ( !this->fields.vaildGachaList )
        break;
      v121 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
               v117,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = UnityEngine_Object__op_Equality(v121, 0LL, 0LL);
      if ( !v113 )
        break;
      v123 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v119;
      v124 = (VaildGachaInfo_o *)Item;
      GachaBannerComponent__setBannerGachaInfo(
        v113,
        (VaildGachaInfo_o *)Item,
        v117,
        v96,
        (UnityEngine_GameObject_o *)v121,
        v123,
        0LL);
      noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v126 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v126,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      v127 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v128 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_49B5366 )
      {
        noneGachaInfo = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v37);
        byte_49B5366 = 1;
      }
      if ( !v128 )
        break;
      UnityEngine_Transform__set_localScale(v128, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v127, 0LL);
      if ( !*p_summonMBannerLoopCtr )
        break;
      v129 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_summonMBannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v130 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v129 )
        break;
      UnityEngine_Transform__set_localPosition(v129, *(UnityEngine_Vector3_o *)&v130, 0LL);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v99, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v127, name, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v127,
                                 (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v136 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v137 = v136->fields._items;
      v138 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v136->fields._version;
      if ( !v137 )
        break;
      v139 = v136->fields._size;
      v140 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v139 >= v137->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v136,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
      }
      else
      {
        v141 = &v137->obj.klass + v139;
        v136->fields._size = v139 + 1;
        v141[4] = (Il2CppClass *)v140;
        sub_1B4CF34((CGThumbnailListItem_o *)(v141 + 4), (int32_t)v140, v134, v135);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v117,
                                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v142 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v143 = System_String__Concat_61093468((System_String_o *)StringLiteral_20186/*"img_summon_mini_"*/, v142, 0LL);
      v145 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v143, v144);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v145, 0LL, 0LL) )
      {
        v143 = (System_String_o *)StringLiteral_20187/*"img_summon_mini_236"*/;
        v145 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20187/*"img_summon_mini_236"*/,
                                         v146);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v145, 0LL, 0LL) )
          v143 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v148 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1B4D1DC(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v148,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0LL);
      if ( !v140 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v140,
        v124,
        v117,
        v96,
        (UnityEngine_GameObject_o *)v145,
        v143,
        v148,
        (UIPanel_o *)Component_object,
        0LL);
      p_bannerLoopCtr = v2;
      LODWORD(v2) = v160;
      ++v96;
      if ( v166 == v105 )
        goto LABEL_118;
    }
LABEL_126:
    sub_1B4D1EC(noneGachaInfo, v37);
  }
LABEL_118:
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_126;
  v149 = fminf(640.0 / (float)(int)v2, 25.0);
  v150 = (_DWORD)v2 - 1;
  *(float *)(noneGachaInfo + 48) = v149;
  if ( (int)v2 >= 1 )
  {
    do
    {
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v152 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 slideIndexPrefab,
                                 v152,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v153 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_49B5366 )
      {
        noneGachaInfo = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v37);
        byte_49B5366 = 1;
      }
      if ( !v153 )
        break;
      UnityEngine_Transform__set_localScale(v153, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      LODWORD(v2) = (_DWORD)v2 - 1;
      if ( !(_DWORD)v2 )
        goto LABEL_127;
      noneGachaInfo = (__int64)this->fields.sliderGrid;
    }
    while ( noneGachaInfo );
    goto LABEL_126;
  }
LABEL_127:
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_bannerLoopCtr;
  if ( !*p_bannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__resetScroll((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
  if ( !*p_summonMBannerLoopCtr )
    goto LABEL_126;
  UIWrapContent__WrapContent((UIWrapContent_o *)noneGachaInfo, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_126;
  noneGachaInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
  if ( !noneGachaInfo )
    goto LABEL_126;
  v168.fields.z = this->fields.center.fields.z;
  v168.fields.y = this->fields.center.fields.y;
  v168.fields.x = (float)(v149 * -0.5) * (float)v150;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noneGachaInfo, v168, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_126;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0LL);
  SummonControl__UpdateSummonInfoControlLayout(this, v154);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_126;
  summonInfoCtr = this->fields.summonInfoCtr;
  v156 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v157 = (SummonInfoControl_ClickDelegate_o *)sub_1B4D1DC(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v157, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr )
    goto LABEL_126;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v156, v157, 0LL);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v158);
  SummonControl__setResourceInfo(this, v159);
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

  if ( (byte_49B7571 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7571 = 1;
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
      UnityEngine_Object__DestroyImmediate_68804644(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_33:
    sub_1B4D1EC(bannerLoopCtr, method);
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
      UnityEngine_Object__DestroyImmediate_68804644(v9, 0LL);
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
      UnityEngine_Object__DestroyImmediate_68804644(v11, 0LL);
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

  if ( (byte_49B7535 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B4CF90(&StringLiteral_10284/*"PURCHASE_ERROR"*/, v5);
    sub_1B4CF90(&StringLiteral_10283/*"PURCHASE_CANCEL"*/, v6);
    sub_1B4CF90(&StringLiteral_10285/*"PURCHASE_OK"*/, v7);
    byte_49B7535 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B4D1EC(Instance, v9);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10283/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10284/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10285/*"PURCHASE_OK"*/;
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

  if ( (byte_49B752E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B4CF90(&StringLiteral_10284/*"PURCHASE_ERROR"*/, v5);
    sub_1B4CF90(&StringLiteral_10283/*"PURCHASE_CANCEL"*/, v6);
    sub_1B4CF90(&StringLiteral_10285/*"PURCHASE_OK"*/, v7);
    byte_49B752E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10283/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B4D1EC(Instance, v9);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10284/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10285/*"PURCHASE_OK"*/;
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

  if ( (byte_49B752C & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B4CF90(&StringLiteral_10284/*"PURCHASE_ERROR"*/, v5);
    sub_1B4CF90(&StringLiteral_10283/*"PURCHASE_CANCEL"*/, v6);
    sub_1B4CF90(&StringLiteral_10285/*"PURCHASE_OK"*/, v7);
    byte_49B752C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10283/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B4D1EC(Instance, v9);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10284/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10285/*"PURCHASE_OK"*/;
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
  System_Action_o *_9__152_0; // x21
  Il2CppObject *v18; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v24; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_49B7506 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl__exeFormation_b__152_1__, v4);
    sub_1B4CF90(&Method_SummonControl___c__exeFormation_b__152_0__, v5);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v6);
    byte_49B7506 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  _9__152_0 = v9->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = SummonControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v9->static_fields->__9;
    _9__152_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__152_0, v18, Method_SummonControl___c__exeFormation_b__152_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__152_0, (int32_t)_9__152_0, v20, v21);
  }
  if ( !v16 )
    sub_1B4D1EC(Instance, v8);
  v24.fields.m_YMin = m_YMin + 33.0;
  v23.fields.y = y + 33.0;
  v23.fields.x = x;
  v24.fields.m_XMin = m_XMin;
  v24.fields.m_Width = m_Width;
  v24.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v16, v23, 0.0, v24, _9__152_0, 0LL);
  v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__152_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v22, 0LL);
}


void __fastcall SummonControl__exeSummon(
        SummonControl_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0

  if ( (byte_49B7526 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3355/*"CHECK_SERVANT_FRAME"*/, paramData);
    byte_49B7526 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.gachaParamData, (int32_t)paramData, v5, v6);
  if ( this->fields.tutorialKind == 1 )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    if ( !confirmDlgInfo
      || (SummonConfirmDlgComponent__setTutorial(confirmDlgInfo, 0, 0LL),
          (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.tutorialArrowObj) == 0LL) )
    {
LABEL_9:
      sub_1B4D1EC(confirmDlgInfo, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3355/*"CHECK_SERVANT_FRAME"*/, 0LL);
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

  if ( (byte_49B756C & 1) == 0 )
  {
    sub_1B4CF90(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl__executeEnhanceTresureDevice_b__273_0__, v4);
    byte_49B756C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v7 = (CommonUI_o *)Instance;
  v8 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B4D1DC(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__273_0__,
    0LL);
  if ( !v7 )
    sub_1B4D1EC(v9, v10);
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
  if ( (byte_49B7547 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__, v7);
    sub_1B4CF90(&Method_SummonControl_autoSellSettingChange2__, v8);
    this = (SummonControl_o *)sub_1B4CF90(&Method_SummonControl_friendSummonConfirmResult__, v9);
    byte_49B7547 = 1;
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
    v13 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v14);
    v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
    gachaParamData = v2->fields.gachaParamData;
    if ( gachaParamData && confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v13, v15, gachaParamData->fields.gachaId, 0LL);
      return;
    }
LABEL_22:
    sub_1B4D1EC(this, method);
  }
  this = (SummonControl_o *)v2->fields.gachaSubEntityList;
  if ( !this )
    goto LABEL_22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GachaSubEntity__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__MoveNext__);
    if ( !v17 )
      break;
    v19 = v2->fields.gachaParamData;
    if ( !v19 )
      sub_1B4D1EC(v17, v18);
    gachaSubEntity = v32.fields._current;
    if ( !v32.fields._current )
      sub_1B4D1EC(v17, v18);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GachaSubEntity__Dispose__);
  v22 = v2->fields.gachaParamData;
  if ( !v22 )
    goto LABEL_22;
  friendPoint = v2->fields.friendPoint;
  v24 = v2->fields.confirmDlgInfo;
  gachaTime = v22->fields.gachaTime;
  gachaResourceNum = v22->fields.gachaResourceNum;
  needPoint = v2->fields.needPoint;
  v28 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v29);
  v30 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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

  if ( (byte_49B7548 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_friendSummonConfirmResult__, res);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v5);
    byte_49B7548 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  v7 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_friendSummonConfirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    SummonControl__friendPointQpManaCheck(this, v9);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_10:
    sub_1B4D1EC(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_49B7511 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId);
    byte_49B7511 = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1B4D1EC(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  int32_t v5; // w20

  if ( (byte_49B756F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    byte_49B756F = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_9:
    sub_1B4D1EC(vaildGachaList, method);
  v5 = 0;
  while ( v5 < vaildGachaList->fields._size )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    vaildGachaList,
                                                                    v5,
                                                                    (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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

  if ( (byte_49B7510 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49B7510 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    byte_49B57A5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1B4D1EC(Instance, v7);
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
  __int64 v3; // x1
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  CGThumbnailListItem_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49B7501 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49B7501 = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1B4D1EC(0LL, v6);
    p_stoneFragmentsShopEntity = (CGThumbnailListItem_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0LL);
    p_stoneFragmentsShopEntity->klass = (CGThumbnailListItem_c *)EntityOfFragmentsShop;
    sub_1B4CF34(p_stoneFragmentsShopEntity, (int32_t)EntityOfFragmentsShop, v9, v10);
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

  if ( (byte_49B7500 & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, method);
    byte_49B7500 = 1;
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
  if ( (byte_49B7568 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId);
    this = (SummonControl_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49B7568 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
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
        sub_1B4D1F4(this, svtId);
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
    sub_1B4D1EC(this, svtId);
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
          sub_1B4D1F4(this, *(_QWORD *)&svtId);
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
    sub_1B4D1EC(this, svtId);
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
  if ( (byte_49B755C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    this = (SummonControl_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49B755C = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1B4D1F4(this, method);
      v11 = v10->m_Items[v8];
      if ( !v11 || !v7 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v7,
                                  v11->fields.objectId,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1B4D1EC(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_49B757C & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v5);
    byte_49B757C = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1B4D1EC(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_49B757B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&res);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v5);
    sub_1B4CF90(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B4CF90(&Method_SummonControl_ShowConfirmDialog__, v8);
    sub_1B4CF90(&Method_SummonControl_limitManaConfirmResult__, v9);
    sub_1B4CF90(&StringLiteral_3426/*"CLICK_CANCEL"*/, v10);
    byte_49B757B = 1;
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
          v17 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B4D1DC(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0LL);
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
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_21:
      sub_1B4D1EC(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3426/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_49B754F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl__loadAssetsForSummon_b__236_0__, v4);
    sub_1B4CF90(&SummonRootComponent_TypeInfo, v5);
    byte_49B754F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__236_0__, 0LL),
        !klass) )
  {
    sub_1B4D1EC(Instance, v7);
  }
  methodPtr_low = LOBYTE(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v9, 0LL);
  }
  else
  {
    sub_1B4D4AC(klass);
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

  if ( (byte_49B751D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_onClickChangeBanner__, method);
    sub_1B4CF90(&StringLiteral_12490/*"SetBannerCenter"*/, v3);
    byte_49B751D = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_68789036(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12490/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0LL);
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
    v9 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v10 = currentMoveIdx + 1 < v9 ? currentMoveIdx + 1 : 0;
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
                                                      v10,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_47223964(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
LABEL_25:
      sub_1B4D1EC(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47223964(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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

  if ( (byte_49B751E & 1) == 0 )
  {
    sub_1B4CF90(&Method_SummonControl_onClickLeftChangeBanner__, method);
    sub_1B4CF90(&StringLiteral_12490/*"SetBannerCenter"*/, v3);
    byte_49B751E = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_68789036(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12490/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0LL);
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
    v8 = childCount - 1;
    v9 = this->fields.currentMoveIdx - 1 < 0 ? v8 : this->fields.currentMoveIdx - 1;
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
      || (UICenterOnChild__CenterOn_47223964(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B4D1EC(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_47223964(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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
  System_Action_o *_9__151_0; // x22
  Il2CppObject *v24; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x20
  UnityEngine_Rect_o v29; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_49B7505 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl__openAfterSummonInfo_b__151_1__, v5);
    sub_1B4CF90(&Method_SummonControl___c__openAfterSummonInfo_b__151_0__, v6);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_13299/*"TUTORIAL_MESSAGE_SUMMON2"*/, v8);
    byte_49B7505 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13299/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
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
  _9__151_0 = v21->static_fields->__9__151_0;
  if ( !_9__151_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SummonControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__151_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__151_0, v24, Method_SummonControl___c__openAfterSummonInfo_b__151_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__151_0 = _9__151_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__151_0, (int32_t)_9__151_0, v26, v27);
  }
  if ( !Instance )
    sub_1B4D1EC(v21, v19);
  v29.fields.m_Height = m_Height + 33.0;
  v29.fields.m_YMin = m_YMin + 33.0;
  v29.fields.m_XMin = m_XMin + v22;
  v29.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v10,
    TUTORIAL_MENU_ARROW_POS_FS,
    v29,
    0.0,
    0LL,
    -1,
    _9__151_0,
    0LL);
  v28 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__151_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v28, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_49B7504 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3419/*"CLEAR_TUTORIAL"*/, method);
    byte_49B7504 = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3419/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_1B4D1EC(tutorialArrowObj, method);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v22; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w21
  __int64 v28; // x21
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  System_Collections_Generic_List_object__o *v39; // x21
  System_Comparison_T__o *v40; // x22
  Il2CppObject *v41; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_object__o *v45; // x22
  int32_t v46; // w21
  int32_t v47; // w22
  System_Action_o *v48; // x20

  if ( (byte_49B7507 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&System_Comparison_EventTutorialEntity__TypeInfo, v3);
    sub_1B4CF90(&EventTutorialEntity_TypeInfo, v4);
    sub_1B4CF90(&int___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v11);
    sub_1B4CF90(&Method_SummonControl___c__openSvtEqInfo_b__153_1__, v12);
    sub_1B4CF90(&Method_SummonControl___c__DisplayClass153_0__openSvtEqInfo_b__0__, v13);
    sub_1B4CF90(&SummonControl___c__DisplayClass153_0_TypeInfo, v14);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v15);
    byte_49B7507 = 1;
  }
  v16 = sub_1B4D1DC(SummonControl___c__DisplayClass153_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v22 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v22, 0LL);
  *(_QWORD *)(v16 + 16) = EventTutorialEntity;
  v24 = (void **)(v16 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 16), (int32_t)EventTutorialEntity, v25, v26);
  Item = *(void **)(v16 + 16);
  if ( !Item )
    goto LABEL_11;
  v27 = 0;
  while ( v27 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v27,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v24;
    ++v27;
    if ( !*v24 )
      goto LABEL_11;
  }
  v28 = sub_1B4D1DC(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_11;
  *(_DWORD *)(v28 + 24) = 1;
  v29 = sub_1B4D038(int___TypeInfo, 1LL);
  *(_QWORD *)(v28 + 80) = v29;
  sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 80), v29, v30, v31);
  v34 = *(_QWORD *)(v28 + 80);
  if ( !v34 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v34 + 24) )
    sub_1B4D1F4(Item, v18);
  *(_DWORD *)(v34 + 32) = 1;
  Item = *v24;
  if ( !*v24 )
    goto LABEL_11;
  v35 = *((_QWORD *)Item + 2);
  v36 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
  ++*((_DWORD *)Item + 7);
  if ( !v35 )
    goto LABEL_11;
  v37 = *((int *)Item + 6);
  if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      (Il2CppObject *)v28,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * v37;
    *((_DWORD *)Item + 6) = v37 + 1;
    *(_QWORD *)(v38 + 32) = v28;
    sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 32), v28, v32, v33);
  }
  Item = SummonControl___c_TypeInfo;
  v39 = (System_Collections_Generic_List_object__o *)*v24;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    Item = SummonControl___c_TypeInfo;
  }
  v40 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = SummonControl___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v40 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_SummonControl___c__openSvtEqInfo_b__153_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__153_1 = (struct System_Comparison_EventTutorialEntity__o *)v40;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__153_1, (int32_t)v40, v43, v44);
  }
  if ( !v39 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_56106144(
    v39,
    v40,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v45 = (System_Collections_Generic_List_object__o *)*v24;
  if ( !*v24 )
LABEL_11:
    sub_1B4D1EC(Item, v18);
  v46 = v45->fields._size - 1;
  if ( v46 >= 0 )
  {
    while ( v45 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v45,
               v46,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v24;
        if ( !*v24 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v46,
                 (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v47 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        Item = (void *)TutorialFlag__GetGachaFlg(v47, 0LL);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v24;
          if ( !*v24 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v46,
            (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v45 = (System_Collections_Generic_List_object__o *)*v24;
      if ( --v46 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v48 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v16, Method_SummonControl___c__DisplayClass153_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v45,
    v48,
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

  if ( (byte_49B7553 & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5);
    sub_1B4CF90(&Method_SummonControl_callbackTutorialSet__, v6);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v7);
    byte_49B7553 = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v8,
                                               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0LL);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B4D1EC(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10847/*"REQUEST_OK"*/, 0LL);
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
        sub_1B4D1EC(summonInfoCtr, v4);
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

  if ( (byte_49B750B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaSubEntity__Clear__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v6);
    byte_49B750B = 1;
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
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_23:
    sub_1B4D1EC(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v18 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B6 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v17);
    byte_49B75B6 = 1;
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
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  int FriendPointIndex; // w4
  const MethodInfo *v20; // x5

  if ( (byte_49B756E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49B756E = 1;
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
           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !Item )
LABEL_28:
    sub_1B4D1EC(Item, method);
  if ( *((_DWORD *)Item + 13) != 3 )
  {
    Item = this->fields.vaildGachaList;
    if ( Item )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               this->fields.currentIdx,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( Item )
      {
        v9 = *((_DWORD *)Item + 4);
        Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Item )
        {
          Item = DataManager__GetMasterData_object_(
                   (DataManager_o *)Item,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( Item )
          {
            Item = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                     v9,
                     (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
    goto LABEL_28;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 1;
LABEL_11:
  if ( !SummonControl__resetSummonVaildData(this, method)
    || ((gachaParamData = this->fields.gachaParamData) == 0LL
     || gachaParamData->fields.gachaId != this->fields.lastMaxDrawGachaId)
    && SummonControl__checkMaxDrawNum(this, v13) )
  {
    SummonControl__deleteBannerList(this, v13);
    SummonControl__CheckValidGachaList(this, v15);
    SummonControl__createSummonInfo(this, v16);
    FriendPointIndex = SummonControl__getFriendPointIndex(this, v17);
    if ( (v12 & 1) == 0 )
      FriendPointIndex = SummonControl__GetGachaIndex(this, v9, v11, v10, FriendPointIndex, v20);
    if ( FriendPointIndex >= 1 )
      SummonControl__setDispRePosition(this, FriendPointIndex, v18);
  }
}


void __fastcall SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  System_String_o *assetPath; // x20
  CGThumbnailListItem_o *p_bannerAssetData; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49B750A & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    byte_49B750A = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (CGThumbnailListItem_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_1B4CF34(p_bannerAssetData, 0, v5, v6);
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

  if ( (byte_49B7550 & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_GachaDrawRequest___, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B4CF90(&Method_SummonControl_callbackGachaDraw__, v7);
    sub_1B4CF90(&StringLiteral_167/*" : "*/, v8);
    sub_1B4CF90(&StringLiteral_1/*""*/, v9);
    byte_49B7550 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v11,
                                             (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
            sub_1B4D1F4(maskObject, method);
          v23 = System_Int32__ToString(v22, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_61131716(
                                                     v20,
                                                     v23,
                                                     (System_String_o *)StringLiteral_167/*" : "*/,
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v18) )
LABEL_22:
    sub_1B4D1EC(maskObject, method);
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

  if ( (byte_49B756D & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, method);
    sub_1B4CF90(&BgmManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1B4CF90(&SoundManager_TypeInfo, v10);
    byte_49B756D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  TitleInfoControl__setBackBtnSprite_37675944((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
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
    sub_1B4D1EC(Instance, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1B4D1EC(0LL, v19);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v21.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v20);
}


void __fastcall SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v4, v5);
  SummonControl__resetStoneInfo(this, v6);
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

  if ( (byte_49B7567 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl__resetResultList_b__268_0__, v5);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v6);
    byte_49B7567 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__268_0__, 0LL);
  if ( !v11 )
LABEL_13:
    sub_1B4D1EC(Instance, v8);
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

  if ( (byte_49B7572 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4);
    sub_1B4CF90(&StringLiteral_2944/*"BONUS_SELECT_GACHA"*/, v5);
    byte_49B7572 = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( this->fields.gachaParamData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || !Master_object
      || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                          Master_object,
                                                                          gachaParamData->fields.gachaId,
                                                                          (const MethodInfo_319D99C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__)) == 0LL )
    {
LABEL_14:
      sub_1B4D1EC(Master_object, v6);
    }
    if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_14;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_2944/*"BONUS_SELECT_GACHA"*/, 0LL);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct GachaEntity_array *useGachaData; // x8
  __int64 v7; // x19
  __int64 v8; // x9
  CGThumbnailListItem_o *p_useGachaData; // x20
  unsigned int v10; // w10
  unsigned int v11; // w21

  gachaMst = (__int64)this->fields.gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  gachaMst = (__int64)GachaMaster__getListValidData((GachaMaster_o *)gachaMst, 0LL);
  useGachaData = this->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_15;
  v7 = gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  v8 = *(_QWORD *)&useGachaData->max_length;
  p_useGachaData = (CGThumbnailListItem_o *)&this->fields.useGachaData;
  if ( (_DWORD)v8 == *(_DWORD *)(gachaMst + 24) )
  {
    if ( (int)v8 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v8 || (v11 = v10, v10 >= *(_DWORD *)(v7 + 24)) )
          sub_1B4D1F4(gachaMst, method);
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
        LODWORD(v8) = useGachaData->max_length;
        v10 = v11 + 1;
        if ( (int)(v11 + 1) >= (int)v8 )
          return 1;
      }
LABEL_15:
      sub_1B4D1EC(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (CGThumbnailListItem_c *)v7;
    sub_1B4CF34(p_useGachaData, v7, v4, v5);
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

  if ( (byte_49B7514 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObjectList_GameObject___, searchTarget);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    byte_49B7514 = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_2EE479C *)Method_AssetData_GetObjectList_GameObject___);
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
        sub_1B4D1F4(bannerAssetData, searchTarget);
      v11 = (char *)&v9[2 * v10];
      v12 = (UnityEngine_GameObject_o *)*((_QWORD *)v11 + 4);
      if ( !v12 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v11 + 4),
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1B4D1EC(bannerAssetData, searchTarget);
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
    sub_1B4D1EC(indexPanel, method);
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
    sub_1B4D1F4(indexPanel, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v14; // x22
  SummonInfoControl_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_49B751F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&SummonInfoControl_ClickDelegate_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    sub_1B4CF90(&Method_SummonControl__setChangeSummonInfo_b__182_0__, v5);
    sub_1B4CF90(&Method_SummonControl_exeSummon__, v6);
    byte_49B751F = 1;
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
           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v9, v10);
  SummonControl__setResourceInfo(this, v11);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v14 = (SummonInfoControl_ClickDelegate_o *)sub_1B4D1DC(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v14, 0LL),
        v15 = this->fields.summonInfoCtr,
        v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__182_0__, 0LL),
        !v15) )
  {
LABEL_8:
    sub_1B4D1EC(maskObject, method);
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
  if ( (byte_49B7524 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B4CF90(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                *(_QWORD *)&currentIdx);
    byte_49B7524 = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_1B4D1EC(this, *(_QWORD *)&currentIdx);
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
    sub_1B4D1EC(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1B4D1EC(0LL, isTutorial);
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

  if ( (byte_49B7522 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v4);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v5);
    byte_49B7522 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B7 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B75B7 = 1;
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
    if ( !byte_49B75B7 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
      byte_49B75B7 = 1;
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
  if ( !byte_49B75B8 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B75B8 = 1;
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
                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !bannerInfoList )
LABEL_35:
          sub_1B4D1EC(bannerInfoList, v14);
        v15 = *((_QWORD *)bannerInfoList + 16);
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
      v17 = *((_DWORD *)bannerInfoList + 34);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v11; // x25
  UIWidget_o *v12; // x22
  UIWidget_o *v13; // x23
  UIWidget_o *v14; // x20
  UIWidget_o *v15; // x24
  SummonControl_c *v16; // x8
  UIWidget_o *v17; // x21
  float COLOR_VAL; // s8
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
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7520 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    sub_1B4CF90(&SummonControl_TypeInfo, v4);
    byte_49B7520 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v7, v8);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v11 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v12 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v14 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v15 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v16 = SummonControl_TypeInfo;
  v17 = (UIWidget_o *)vaildGachaList;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v16 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v16->static_fields->COLOR_VAL;
  if ( isPointSummon )
  {
    if ( !v11 )
      goto LABEL_34;
    v19.fields.a = 1.0;
    v19.fields.r = v16->static_fields->COLOR_VAL;
    v19.fields.g = v19.fields.r;
    v19.fields.b = v19.fields.r;
    UIWidget__set_color(v11, v19, 0LL);
    if ( !v12 )
      goto LABEL_34;
    v20.fields.a = 1.0;
    v20.fields.r = COLOR_VAL;
    v20.fields.g = COLOR_VAL;
    v20.fields.b = COLOR_VAL;
    UIWidget__set_color(v12, v20, 0LL);
    if ( !v15 )
      goto LABEL_34;
    v21.fields.a = 1.0;
    v21.fields.r = COLOR_VAL;
    v21.fields.g = COLOR_VAL;
    v21.fields.b = COLOR_VAL;
    UIWidget__set_color(v15, v21, 0LL);
    if ( !v17 )
      goto LABEL_34;
    v22.fields.a = 1.0;
    v22.fields.r = COLOR_VAL;
    v22.fields.g = COLOR_VAL;
    v22.fields.b = COLOR_VAL;
    UIWidget__set_color(v17, v22, 0LL);
    vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.fragmentNumCollider;
    if ( !vaildGachaList )
      goto LABEL_34;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)vaildGachaList, 0, 0LL);
    if ( !v13 )
      goto LABEL_34;
    v23.fields.r = 1.0;
    v23.fields.g = 1.0;
    v23.fields.b = 1.0;
    v23.fields.a = 1.0;
    UIWidget__set_color(v13, v23, 0LL);
    if ( !v14 )
      goto LABEL_34;
    v24.fields.r = 1.0;
    v24.fields.g = 1.0;
    v24.fields.b = 1.0;
    v24.fields.a = 1.0;
    UIWidget__set_color(v14, v24, 0LL);
  }
  else
  {
    if ( !v13 )
      goto LABEL_34;
    v25.fields.a = 1.0;
    v25.fields.r = v16->static_fields->COLOR_VAL;
    v25.fields.g = v25.fields.r;
    v25.fields.b = v25.fields.r;
    UIWidget__set_color(v13, v25, 0LL);
    if ( !v14 )
      goto LABEL_34;
    v26.fields.a = 1.0;
    v26.fields.r = COLOR_VAL;
    v26.fields.g = COLOR_VAL;
    v26.fields.b = COLOR_VAL;
    UIWidget__set_color(v14, v26, 0LL);
    if ( !v11 )
      goto LABEL_34;
    v27.fields.r = 1.0;
    v27.fields.g = 1.0;
    v27.fields.b = 1.0;
    v27.fields.a = 1.0;
    UIWidget__set_color(v11, v27, 0LL);
    if ( !v12 )
      goto LABEL_34;
    v28.fields.r = 1.0;
    v28.fields.g = 1.0;
    v28.fields.b = 1.0;
    v28.fields.a = 1.0;
    UIWidget__set_color(v12, v28, 0LL);
    if ( !v15 )
      goto LABEL_34;
    v29.fields.r = 1.0;
    v29.fields.g = 1.0;
    v29.fields.b = 1.0;
    v29.fields.a = 1.0;
    UIWidget__set_color(v15, v29, 0LL);
    if ( !v17 )
      goto LABEL_34;
    v30.fields.r = 1.0;
    v30.fields.g = 1.0;
    v30.fields.b = 1.0;
    v30.fields.a = 1.0;
    UIWidget__set_color(v17, v30, 0LL);
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
    sub_1B4D1EC(vaildGachaList, method);
  }
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49B7565 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49B7565 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0LL),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B4D1EC(summonResultInfo, method);
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

  if ( (byte_49B7521 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx);
    byte_49B7521 = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__49252240(
                                                sliderGrid,
                                                (const MethodInfo_2EF8790 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    sub_1B4D1EC(sliderGrid, *(_QWORD *)&idx);
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
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UILabel_o *summonHelpLabel; // x21
  __int64 v25; // x1
  TerminalPramsManager_c *v26; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  long double v31; // q0
  __int64 v32; // x0
  __int64 v33; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct GachaEntity_array *ListValidData; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v46; // x20
  AssetLoader_LoadEndDataHandler_o *v47; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B7508 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&AtlasManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_GachaMaster___, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v5);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v7);
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B4CF90(&Method_SummonControl_LoadBannerEnd__, v10);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_12158/*"SUMMON_HELP_MESSAGE"*/, v12);
    sub_1B4CF90(&StringLiteral_12870/*"SummonBanners/DownloadSummonBanner"*/, v13);
    sub_1B4CF90(&StringLiteral_6286/*"FAIL_LOAD"*/, v14);
    sub_1B4CF90(&StringLiteral_20036/*"img_line_summon"*/, v15);
    sub_1B4CF90(&StringLiteral_19949/*"img_bg_banner"*/, v16);
    byte_49B7508 = 1;
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
  TitleInfoControl__setBackBtnSprite_37675944((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  this->fields.isDoneTutorial = 1;
  v21 = StringLiteral_12870/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_12870/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.assetPath, v21, v22, v23);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12158/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B5 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v25);
    byte_49B75B5 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v26->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v28, v29);
  SummonControl__setUserResourceDisp(this, v30);
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1B9D620(v31);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1B9D620(v31);
  Time = **(UnityEngine_Transform_o ***)(v33 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.gachaMst, (int32_t)MasterData_object, v35, v36);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.useGachaData, (int32_t)ListValidData, v38, v39);
  SummonControl__CheckValidGachaList(this, v40);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.vaildGachaList, 0, v41, v42);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20036/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_19949/*"img_bg_banner"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6286/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_45:
    sub_1B4D1EC(Time, v18);
  }
  v46 = this->fields.assetPath;
  v47 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v47, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v46, v47, 1, 0LL);
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
  System_Action_o *_9__260_0; // x21
  Il2CppObject *v15; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_49B7561 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v5);
    sub_1B4CF90(&Method_SummonControl___c__setSummonResultList_b__260_0__, v6);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_9128/*"NO_EXIST"*/, v8);
    sub_1B4CF90(&StringLiteral_11940/*"SHOW_TALK"*/, v9);
    byte_49B7561 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38224448(107, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38224448(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v10) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (CommonUI_o *)Instance;
      v13 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v13 = SummonControl___c_TypeInfo;
      }
      _9__260_0 = v13->static_fields->__9__260_0;
      if ( !_9__260_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = SummonControl___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__260_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(_9__260_0, v15, Method_SummonControl___c__setSummonResultList_b__260_0__, 0LL);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__260_0 = _9__260_0;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__260_0, (int32_t)_9__260_0, v17, v18);
      }
      if ( !v12 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_30274060(v12, 2, 108, _9__260_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11940/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9128/*"NO_EXIST"*/, 0LL);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1B4D1EC(Instance, v10);
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
  if ( (byte_49B7503 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__, v7);
    byte_49B7503 = 1;
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
                                                                    (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
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
                                                                    (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
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
    sub_1B4D1EC(bannerInfoList, isEnable);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UILabel_o *currentFragmentNumLb; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49B750D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_TblUserMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&int_TypeInfo, v6);
    sub_1B4CF90(&Method_SummonControl__setUserResourceDisp_b__159_0__, v7);
    sub_1B4CF90(&StringLiteral_24683/*"{0:N0}"*/, v8);
    byte_49B750D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v11, v12);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v15, v16, v17);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24683/*"{0:N0}"*/, v20, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v22, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__159_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v22, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v23, v24, v25);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24683/*"{0:N0}"*/, v27, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v28, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v30, v31, v32);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24683/*"{0:N0}"*/, v33, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v34, 0LL)) == 0LL)
    || (v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        GameObjectExtensions__SetLocalPositionX(v35, -179.0, 0LL),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v36, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_1B4D1EC(Master_object, v14);
  }
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v37, 179.0, 0LL);
}


void __fastcall SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void __fastcall SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B7542 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SummonControl_ShowConfirmDialog__, v3);
    byte_49B7542 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_ShowConfirmDialog__, 0LL);
  SummonControl__CheckOnExecuteGachaTutorial(this, v4, v5);
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
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppObject *v28; // x1
  Il2CppClass **v29; // x0
  int32_t v30; // w22

  if ( (byte_49B751C & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v7);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v8);
    byte_49B751C = 1;
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
        v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventTutorialEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v12->fields._size >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v12,
                     v14,
                     (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v12,
                       v14,
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v14,
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v19 = Item[3].monitor;
                  if ( !v19 )
                    break;
                  if ( !v19[6] )
                    sub_1B4D1F4(Item, v16);
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
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v12,
                         v14,
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v13 )
                    break;
                  items = v13->fields._items;
                  v26 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v13->fields._version;
                  if ( !items )
                    break;
                  size = v13->fields._size;
                  v28 = Item;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v13,
                      Item,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v29 = &items->obj.klass + size;
                    v13->fields._size = size + 1;
                    v29[4] = (Il2CppClass *)v28;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v28, v23, v24);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v12,
                           v14,
                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v30 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                  TutorialFlag__SetGachaFlg(v30, 0LL);
                }
              }
            }
            if ( ++v14 >= v12->fields._size )
              goto LABEL_39;
          }
          sub_1B4D1EC(Item, v16);
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
  Il2CppObject *_38224448; // x0
  const MethodInfo *v13; // x1
  CommonUI_o *v14; // x20
  SummonControl___c_c *v15; // x8
  System_Action_o *_9__255_0; // x21
  Il2CppObject *v17; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v23; // x8
  struct GachaInfos_array *v24; // x8
  __int64 v25; // x9
  GachaInfos_o *v26; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v29; // x22
  struct GachaInfos_array *v30; // x8
  __int64 v31; // x9
  GachaInfos_o *v32; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v34; // x20
  ServantStatusDialog_EndDelegate_o *v35; // x22

  if ( (byte_49B755D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B4CF90(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B4CF90(&Method_SummonControl_DialogCallBack__, v8);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v9);
    sub_1B4CF90(&Method_SummonControl___c__showServantDialog_b__255_0__, v10);
    sub_1B4CF90(&SummonControl___c_TypeInfo, v11);
    byte_49B755D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38224448 = (Il2CppObject *)TutorialFlag__Get_38224448(107, 0LL);
  if ( ((unsigned __int8)_38224448 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _38224448 = (Il2CppObject *)TutorialFlag__Get_38224448(108, 0LL);
    if ( ((unsigned __int8)_38224448 & 1) == 0 )
    {
      _38224448 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v13);
      if ( ((unsigned __int8)_38224448 & 1) != 0 )
      {
        _38224448 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (CommonUI_o *)_38224448;
        v15 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v15 = SummonControl___c_TypeInfo;
        }
        _9__255_0 = v15->static_fields->__9__255_0;
        if ( !_9__255_0 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = SummonControl___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v15->static_fields->__9;
          _9__255_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(_9__255_0, v17, Method_SummonControl___c__showServantDialog_b__255_0__, 0LL);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__255_0 = _9__255_0;
          sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__255_0, (int32_t)_9__255_0, v19, v20);
        }
        if ( !v14 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_30274060(v14, 2, 108, _9__255_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
LABEL_35:
    sub_1B4D1F4(_38224448, v13);
  v23 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v23 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v23->fields.type, 0LL) )
  {
    _38224448 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_38224448 )
      goto LABEL_34;
    _38224448 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_38224448,
                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v24 = this->fields.gachaResInfoList;
    if ( !v24 )
      goto LABEL_34;
    v25 = this->fields.getSvtIdx;
    if ( (unsigned int)v25 < v24->max_length )
    {
      v26 = v24->m_Items[v25];
      if ( v26 )
      {
        if ( _38224448 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_38224448,
                     v26->fields.userSvtId,
                     (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v29 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v29, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_30260788(
              (CommonUI_o *)Instance,
              0,
              (UserCommandCodeEntity_o *)Entity,
              v29,
              0LL,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      sub_1B4D1EC(_38224448, v13);
    }
    goto LABEL_35;
  }
  _38224448 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = this->fields.gachaResInfoList;
  if ( !v30 )
    goto LABEL_34;
  v31 = this->fields.getSvtIdx;
  if ( (unsigned int)v31 >= v30->max_length )
    goto LABEL_35;
  v32 = v30->m_Items[v31];
  if ( !v32 )
    goto LABEL_34;
  userSvtId = v32->fields.userSvtId;
  v34 = (CommonUI_o *)_38224448;
  v35 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v35, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v34 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_30257464(v34, 6, userSvtId, v35, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_49B7534 & 1) == 0 )
  {
    sub_1B4CF90(&StonePurchaseMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SummonControl_endPurchaseStone__, v4);
    byte_49B7534 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B4D1DC(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v6, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v7, v8);
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

  if ( (byte_49B7556 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl__showSummonEffect_b__243_0__, v5);
    byte_49B7556 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__243_0__, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v11, v12);
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

  if ( (byte_49B7560 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl__showSummonResultInfo_b__259_0__, v5);
    byte_49B7560 = 1;
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
    TitleInfoControl__setBackBtnSprite_37675944(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v10 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
      v12 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__259_0__, 0LL);
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
    sub_1B4D1EC(titleInfo, method);
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

  if ( (byte_49B752D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl_endPurchaseSvtEqFrame__, v5);
    sub_1B4CF90(&Method_SummonControl_resetStoneInfo__, v6);
    byte_49B752D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1B4D1DC(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v10, v11);
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

  if ( (byte_49B752B & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B4CF90(&Method_SummonControl_endPurchaseSvtFrame__, v5);
    sub_1B4CF90(&Method_SummonControl_resetStoneInfo__, v6);
    byte_49B752B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1B4D1DC(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v10, v11);
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
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v37; // x23
  System_Action_o *v38; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49B755A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&ServantAssetArgs_TypeInfo, v9);
    sub_1B4CF90(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_1B4CF90(&Method_SummonControl__showSvtTalk_b__250_0__, v13);
    sub_1B4CF90(&Method_SummonControl_close__, v14);
    sub_1B4CF90(&StringLiteral_3454/*"CLICK_OK"*/, v15);
    byte_49B755A = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_40;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B4D1F4(Instance, v17);
  v20 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v20 )
    goto LABEL_40;
  userSvtId = v20->fields.userSvtId;
  objectId = v20->fields.objectId;
  limitCount = v20->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v24 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v24,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_319D9E8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3454/*"CLICK_OK"*/, 0LL);
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
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_40;
    v26 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_object )
LABEL_40:
    sub_1B4D1EC(Instance, v17);
  v27 = (int)Instance;
  v28 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v28 && (v29 = ServantVoiceEntity__GetSummonScriptId(v28, v27, 0LL)) != 0LL )
  {
    summonScriptId = v29;
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v32 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__250_0__, 0LL);
    if ( !v31 )
      goto LABEL_40;
    ScriptManager__PlayGacha_42050672(
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
      v33 = (ServantAssetArgs_o *)sub_1B4D1DC(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_44043040(v33, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v33;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.battleAssetArgs, (int32_t)v33, v34, v35);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v38 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v37 )
      goto LABEL_40;
    ScriptManager__PlayGacha_42050672(
      (ScriptManager_o *)v37,
      (UserServantEntity_o *)v26,
      objectId,
      limitCount,
      0,
      1,
      v38,
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *v4; // x19
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v4 = this;
  if ( (byte_49B759E & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    byte_49B759E = 1;
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
          sub_1B4D1EC(this, method);
        }
        UICenterOnChild__CenterOn_47223964(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v4->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._spring_5__2, (int32_t)Component_object, v10, v11);
    v12 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(p__2__current, 0, v13, v14);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v4->fields._spring_5__2 = 0LL;
    v4->fields.__1__state = -1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._spring_5__2, 0, v2, v3);
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__176_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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


void __fastcall SummonControl__WaitBattleChrLoad_d__252___ctor(
        SummonControl__WaitBattleChrLoad_d__252_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__252__MoveNext(
        SummonControl__WaitBattleChrLoad_d__252_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  PlayMakerFSM_o *fsm; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_49B759F & 1) == 0 )
  {
    sub_1B4CF90(&ServantAssetLoadManager_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_3454/*"CLICK_OK"*/, v4);
    byte_49B759F = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B4D1DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields._wait_5__2 = v7;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, (int32_t)wait_5__2, v12, v13);
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
    sub_1B4CF34((CGThumbnailListItem_o *)&_4__this->fields.battleAssetArgs, 0, v18, v19);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1B4D1EC(fsm, v11);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3454/*"CLICK_OK"*/, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__252__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__252_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__252__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__252_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_SummonControl__WaitBattleChrLoad_d__252_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__252__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__252_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__252__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__252_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7598 & 1) == 0 )
  {
    sub_1B4CF90(&SummonControl___c_TypeInfo, v1);
    byte_49B7598 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(SummonControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)SummonControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___BonusSelectServantSelectDialog_b__304_1(
        SummonControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49B759A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B759A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___ShowConfirmDialog_b__219_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49B7599 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B7599 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
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
    sub_1B4D1EC(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__260_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showServantDialog_b__255_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__243_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__259_1(SummonControl___c_o *this, const MethodInfo *method)
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

  if ( (byte_49B759B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v3);
    sub_1B4CF90(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_3419/*"CLEAR_TUTORIAL"*/, v7);
    byte_49B759B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
                       (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                         (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
    sub_1B4D1EC(Request_object, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3419/*"CLEAR_TUTORIAL"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass271_0___ctor(
        SummonControl___c__DisplayClass271_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass271_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass271_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass271_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_49B759C & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass271_0_o *)sub_1B4CF90(&StringLiteral_5683/*"EXECUTE"*/, method);
    byte_49B759C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass271_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1B4D1EC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5683/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass272_0___ctor(
        SummonControl___c__DisplayClass272_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass272_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass272_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass272_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_49B759D & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass272_0_o *)sub_1B4CF90(&StringLiteral_5683/*"EXECUTE"*/, method);
    byte_49B759D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass272_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1B4D1EC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5683/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass291_0___ctor(
        SummonControl___c__DisplayClass291_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonControl___c__DisplayClass291_0___OnClickSummonListBtn_b__1(
        SummonControl___c__DisplayClass291_0_o *this,
        VaildGachaInfo_o *x,
        const MethodInfo *method)
{
  struct GachaEntity_o *gachaInfo; // x8

  if ( !x || (gachaInfo = this->fields.gachaInfo) == 0LL )
    sub_1B4D1EC(this, x);
  return x->fields.id == gachaInfo->fields.id;
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}