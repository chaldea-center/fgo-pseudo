void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct SummonControl_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_48DF161 & 1) == 0 )
  {
    sub_1B00CCC(&SummonControl_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_3283/*"BonusSelectSummonSaveKey"*/, v4);
    byte_48DF161 = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v6 = StringLiteral_3283/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3283/*"BonusSelectSummonSaveKey"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v6, v2, v3);
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
}


void __fastcall SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48DF160 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B00CCC(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_19424/*"gachaIds"*/, v8);
    sub_1B00CCC(&StringLiteral_6773/*"FrequencyType"*/, v9);
    byte_48DF160 = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_B71AA0;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_B71DF0;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_B71BC0;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v10 = StringLiteral_19424/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19424/*"gachaIds"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.DETAIL_SCRIPT_IDS, v10, v2, v3);
  v11 = StringLiteral_6773/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6773/*"FrequencyType"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.DETAIL_SCRIPT_TYPE, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.vaildGachaList, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v17, v18, v19);
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
  __int64 v12; // x21
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_o *name; // x1
  int8x16_t v18; // q0
  System_String_o *WebViewAddress_37274204; // x0
  System_String_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t gachaGroupId; // w8
  int32_t pickupId; // w8
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  DataManager_o *v30; // x22
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8

  if ( (byte_48DF0F8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaSubMaster___, data);
    sub_1B00CCC(&int___TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v8);
    sub_1B00CCC(&NetworkManager_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&VaildGachaInfo_TypeInfo, v11);
    byte_48DF0F8 = 1;
  }
  v12 = sub_1B00F18(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v12, 0LL);
  if ( !data || !v12 )
    goto LABEL_20;
  *(_DWORD *)(v12 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v12 + 24) = name;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)name, v15, v16);
  *(_DWORD *)(v12 + 32) = data->fields.beforeGachaId;
  v18 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCuLL));
  *(int8x16_t *)(v12 + 36) = vextq_s8(v18, v18, 0xCuLL);
  *(_DWORD *)(v12 + 52) = data->fields.type;
  *(_DWORD *)(v12 + 60) = data->fields.ticketItemId;
  *(_BYTE *)(v12 + 64) = 1;
  *(_BYTE *)(v12 + 84) = data->fields.freeDrawFlag > 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_37274204 = NetworkManager__getWebViewAddress_37274204(1, 0LL);
  v20 = System_String__Concat_60325748(WebViewAddress_37274204, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v12 + 88) = v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 88), (int32_t)v20, v21, v22);
  gachaGroupId = data->fields.gachaGroupId;
  *(_DWORD *)(v12 + 96) = gachaGroupId;
  *(_BYTE *)(v12 + 100) = gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 68) = 0;
  *(_BYTE *)(v12 + 101) = pickupId > 0;
  v25 = sub_1B00D74(int___TypeInfo, 0LL);
  *(_QWORD *)(v12 + 72) = v25;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 72), v25, v26, v27);
  *(_OWORD *)(v12 + 120) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v12 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v30 = Instance;
      this->fields.gachaSubEntity = (struct GachaSubEntity_o *)Instance;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.gachaSubEntity, (int32_t)Instance, v28, v29);
      *(_DWORD *)(v12 + 80) = *((_DWORD *)&v30->fields.UnityEngine_Behaviour_Fields + 1);
      *(_DWORD *)(v12 + 40) = HIDWORD(v30->fields.m_CancellationTokenSource);
    }
  }
  if ( adjustData )
  {
    targetEntity = adjustData->fields.targetEntity;
    if ( !targetEntity )
      goto LABEL_20;
    *(_DWORD *)(v12 + 40) = targetEntity->fields.imageId;
    *(_DWORD *)(v12 + 68) = targetEntity->fields.idx;
    adjustIds = adjustData->fields.adjustIds;
    *(_QWORD *)(v12 + 72) = adjustIds;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 72), (int32_t)adjustIds, v28, v29);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v33 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v34 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v33) )
  {
LABEL_20:
    sub_1B00F28(Instance, v14);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v12,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = v33 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v36 + 32) = v12;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v36 + 32), v12, v28, v29);
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

  if ( (byte_48DF133 & 1) == 0 )
  {
    sub_1B00CCC(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl_beforeConfirmCautionResult__, v5);
    byte_48DF133 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
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
        v12 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1B00F28(Instance, v7);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v9, v10, v12, 0LL);
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
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v4 = result;
  v5 = this;
  if ( (byte_48DF128 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, result);
    byte_48DF128 = 1;
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
      SummonControl__showConfirmDlg_31937916(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = result;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        result,
        (int32_t)v7,
        v8);
      goto LABEL_10;
    }
LABEL_14:
    sub_1B00F28(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  struct GachaSubEntity_o *gachaSubEntity; // x25
  struct GachaSubEntity_o *v15; // x20
  Il2CppObject *v16; // x21
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  System_Action_o *v19; // x24

  if ( (byte_48DF12B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaSubMaster___, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl_SummonSceneRefresh__, v7);
    sub_1B00CCC(&StringLiteral_14587/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v8);
    sub_1B00CCC(&StringLiteral_14586/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v9);
    byte_48DF12B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData || !Instance )
    goto LABEL_12;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL);
  gachaSubEntity = this->fields.gachaSubEntity;
  v15 = OpenEntity;
  if ( OpenEntity != gachaSubEntity )
  {
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14587/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_14586/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
    v19 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
    if ( v16 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v16, v17, v18, v19, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return v15 != gachaSubEntity;
    }
LABEL_12:
    sub_1B00F28(Instance, v11);
  }
  return v15 != gachaSubEntity;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1B00F28(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B00F30(this, ids);
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
  if ( (byte_48DF14A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9137/*"NEXT_SVT"*/, method);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_6316/*"FINAL_SVT"*/, v3);
    byte_48DF14A = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v5 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v5;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_1B00F28(this, method);
  if ( v5 >= (signed int)gachaResInfoList->max_length )
    v6 = &StringLiteral_6316/*"FINAL_SVT"*/;
  else
    v6 = &StringLiteral_9137/*"NEXT_SVT"*/;
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

  if ( (byte_48DF12C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v3);
    sub_1B00CCC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_SummonControl_autoSellSettingChange__, v5);
    sub_1B00CCC(&Method_SummonControl_limitManaConfirmResult__, v6);
    sub_1B00CCC(&Method_SummonControl_limitQpConfirmResult__, v7);
    sub_1B00CCC(&Method_SummonControl_showConfirmDlg__, v8);
    byte_48DF12C = 1;
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
    v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v26 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
      v31 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v32 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v30 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v30, v31, v32, 0LL);
        return 1;
      }
LABEL_28:
      sub_1B00F28(SelfUserGame, v10);
    }
    v27 = this->fields.limitWarningDlgInfo;
    v28 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v29 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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

  if ( (byte_48DF15F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10938/*"RETURN_MAIN"*/, method);
    sub_1B00CCC(&StringLiteral_10940/*"RETURN_RESULT"*/, v3);
    byte_48DF15F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_10940/*"RETURN_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10938/*"RETURN_MAIN"*/;
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
  Il2CppObject *String_68035932; // x19
  System_Object_array *v16; // x19
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_48DF127 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v2);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v3);
    sub_1B00CCC(&Method_JsonManager_DeserializeArray_SelectBonusData___, v4);
    sub_1B00CCC(&JsonManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v10);
    sub_1B00CCC(&NetworkManager_TypeInfo, v11);
    sub_1B00CCC(&string_TypeInfo, v12);
    sub_1B00CCC(&SummonControl_TypeInfo, v13);
    byte_48DF127 = 1;
  }
  v14 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_68035932 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_68035932(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_68035932, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_object_(
            String_68035932,
            (const MethodInfo_2DB84AC *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v16 )
      sub_1B00F28(v18, v19);
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

  if ( (byte_48DF0F5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48DF0F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v8);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_48DF123 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DF123 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DF101 & 1) == 0 )
  {
    sub_1B00CCC(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_TypeInfo, method);
    byte_48DF101 = 1;
  }
  v3 = sub_1B00F18(SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__169___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct GachaRqParamData_o *v22; // x8
  Il2CppObject *Entity; // x20
  struct GachaRqParamData_o *v24; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  struct GachaRqParamData_o *v26; // x8
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int klass; // w27
  int64_t v31; // x20
  char v32; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v33; // x24
  const MethodInfo *v34; // x3
  struct GachaRqParamData_o *v35; // x8
  int32_t v36; // w25
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v38; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v41; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v42; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v43; // x24
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v44; // x26
  const MethodInfo *v45; // [xsp+8h] [xbp-58h]

  if ( (byte_48DF130 & 1) == 0 )
  {
    sub_1B00CCC(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result);
    sub_1B00CCC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B00CCC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v11);
    sub_1B00CCC(&Method_SummonControl_ConfirmMessageOpen__, v12);
    sub_1B00CCC(&Method_SummonControl_SetDispBtn__, v13);
    sub_1B00CCC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v14);
    sub_1B00CCC(&Method_SummonControl_confirmCautionResult__, v15);
    sub_1B00CCC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v16);
    sub_1B00CCC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v17);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v18);
    byte_48DF130 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  SummonConfirmDlgComponent__Close_31906084(confirmDlgInfo, 0LL, method);
  v20 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1B00CE4(Method_SummonControl_ConfirmMessageOpen__);
  v21 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v20, v20[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v38 = this->fields.gachaParamData;
              if ( v38 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v38->fields.gachaId;
                v41 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v41,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v42 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v42,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v43 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v43,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v41, v42, v43, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
  v22 = this->fields.gachaParamData;
  if ( !v22 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v22->fields.gachaId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)confirmDlgInfo,
                                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v24 = this->fields.gachaParamData;
  if ( !v24 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        (GachaDetailMaster_o *)confirmDlgInfo,
                        v24->fields.gachaId,
                        0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
  v26 = this->fields.gachaParamData;
  if ( !v26 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v26->fields.gachaId,
                                                    (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL);
  if ( !GachaDetailEntity || !Entity )
    goto LABEL_37;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  title = GachaDetailEntity->fields.title;
  message = GachaDetailEntity->fields.message;
  klass = (int)Entity[9].klass;
  v31 = (int64_t)Entity[7].klass;
  v32 = (char)confirmDlgInfo;
  v33 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    v34);
  if ( (v32 & 1) != 0 )
  {
    v35 = this->fields.gachaParamData;
    if ( !v35 )
      goto LABEL_37;
    v36 = v35->fields.gachaId;
  }
  else
  {
    v36 = 0;
  }
  v44 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B00F18(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v44,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_37:
    sub_1B00F28(confirmDlgInfo, result);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    klass > 0,
    v31,
    v33,
    v36,
    v44,
    this->fields.bonusSelectAssetManager,
    v45);
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

  if ( (byte_48DF144 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, flg);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SummonControl__DialogCallBack_b__248_0__, v6);
    byte_48DF144 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__248_0__, 0LL);
  if ( !v9 )
    sub_1B00F28(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF145 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3540/*"CLOSE"*/, method);
    byte_48DF145 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3540/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_48DF122 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, result);
    byte_48DF122 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21754/*"ng"*/, 0LL) )
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
  int32_t v12; // w3
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

  if ( (byte_48DF0F9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v8);
    byte_48DF0F9 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1B00F28(Item, v10);
  v14 = 0;
  while ( v14 < Item->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v14,
                                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
                                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
                                                              (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
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
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v18;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v18, v11, v12);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)baseGachaList, (int32_t)v9, v11, v12);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_48DF0E5 & 1) == 0 )
  {
    sub_1B00CCC(&FSUtility_TypeInfo, method);
    byte_48DF0E5 = 1;
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
  int32_t v7; // w3
  System_String_array *v8; // x19
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48DF10A & 1) == 0 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48DF10A = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF173 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48DF173 = 1;
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
  if ( !byte_48DF173 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, method);
    byte_48DF173 = 1;
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
  if ( !byte_48DF174 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v5);
    byte_48DF174 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v6, v7);
  if ( !v8 )
    goto LABEL_31;
  if ( (int)v8->max_length < 2 )
    return 0;
  v3 = v8->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_31:
    sub_1B00F28(v3, method);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1B00F30(v3, method);
  System_Int32__TryParse((System_String_o *)v3[1].monitor, &result, 0LL);
  return result;
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

  if ( (byte_48DF13D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId);
    byte_48DF13D = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_String_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_48DF0EF & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6293/*"FAIL_LOAD"*/, data);
    sub_1B00CCC(&StringLiteral_17304/*"btn_sumonhistory"*/, v6);
    sub_1B00CCC(&StringLiteral_5417/*"END_LOAD"*/, v7);
    byte_48DF0EF = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6293/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bannerAssetData, (int32_t)data, (int32_t)method, v3);
  SummonControl__createSummonInfo(this, v9);
  SummonControl__setPositionByWarId(this, v10);
  SummonControl__ResetArrowTween(this, v11);
  v12 = (System_String_o *)StringLiteral_17304/*"btn_sumonhistory"*/;
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17304/*"btn_sumonhistory"*/, v13);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, (UnityEngine_GameObject_o *)fsm, v12, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_1B00F28(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5417/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICenterOnChild_o *centerChild; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  struct VaildGachaInfo_o *v8; // x21
  float x; // w20
  float y; // w24
  UnityEngine_Object_o *v11; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  v2 = this;
  if ( (byte_48DF0FD & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_3392/*"CHANGE_BANNER"*/, v4);
    byte_48DF0FD = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_26;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_26;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_26;
  v8 = *(struct VaildGachaInfo_o **)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v11 = (UnityEngine_Object_o *)this;
  if ( v2->fields.isDragging )
    goto LABEL_29;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v11, currentBannerComp, 0LL)
    || v8 != v2->fields.currentGachaInfo
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
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v11;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.currentBannerComp, (int32_t)v11, v6, v7);
    v2->fields.currentGachaInfo = v8;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.currentGachaInfo, (int32_t)v8, v13, v14);
    *(float *)&v2->fields.currentIdx = x;
    *(float *)&v2->fields.currentMoveIdx = y;
    SummonControl__setSliderIcon(v2, SLODWORD(x), v15);
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
          UICenterOnChild__CenterOn_45525356(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3392/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B00F28(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  int32_t v5; // w2
  int32_t v6; // w3
  struct VaildGachaInfo_o *v7; // x20
  float m_Width; // w23
  float m_Height; // w24
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x22
  bool *p_isNotCenterOnSync; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_48DF0FE & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method);
    this = (SummonControl_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48DF0FE = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_20;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.currentSummonMBannerComponent, (int32_t)v10, v5, v6);
    v2->fields.currentGachaInfo = v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.currentGachaInfo, (int32_t)v7, v13, v14);
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
          UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B00F28(this, method);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_19:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_48DF158 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3488/*"CLICK_BACK"*/, method);
    byte_48DF158 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B00F28(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3488/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v10; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x20
  System_Action_o *v12; // x21

  if ( (byte_48DF15B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SummonControl_OnClickHelpClose__, v3);
    sub_1B00CCC(&Method_SummonControl_OnClickHelp__, v4);
    byte_48DF15B = 1;
  }
  v5 = Method_SummonControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B00CE4(Method_SummonControl_OnClickHelp__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 0, 0LL),
        (currentGachaInfo = this->fields.currentGachaInfo) == 0LL) )
  {
    sub_1B00F28(summonInfoCtr, v7);
  }
  v10 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v10, 0LL);
  v12 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(EventTutorialEntity, v12, 0LL);
}


void __fastcall SummonControl__OnClickHelpClose(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1B00F28(0LL, method);
  SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 1, 0LL);
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

  if ( (byte_48DF15C & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_SummonControl_OnClickHisotry__, v5);
    sub_1B00CCC(&Method_SummonControl__OnClickHisotry_b__280_0__, v6);
    byte_48DF15C = 1;
  }
  v7 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B00CE4(Method_SummonControl_OnClickHisotry__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__280_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1B00F28(Request_object, v11);
  GachaHistoryRequest__beginRequest((GachaHistoryRequest_o *)Request_object, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20

  if ( (byte_48DF102 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_OnClickMiniBanner__, *(_QWORD *)&moveIdx);
    sub_1B00CCC(&StringLiteral_12476/*"SetBannerCenter"*/, v5);
    byte_48DF102 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_68062236(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12476/*"SetBannerCenter"*/,
      0LL);
    v7 = Method_SummonControl_OnClickMiniBanner__;
    if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B00CE4(Method_SummonControl_OnClickMiniBanner__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
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
      || (UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B00F28(leftArrowBtn, *(_QWORD *)&moveIdx);
    }
    UICenterOnChild__CenterOn_45525356(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_48DF11E & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__, method);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v3);
    byte_48DF11E = 1;
  }
  v4 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_31906084(confirmDlgInfo, 0LL, v7),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B00F28(confirmDlgInfo, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v9);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_48DF11F & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_OnClickStoneFragmentsInfo__, method);
    byte_48DF11F = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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

  if ( (byte_48DF15A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SummonControl_reDispSummonBannerList__, v3);
    byte_48DF15A = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_1B00F28(v6, v7);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_48DF125 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_48DF125 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_48DF0FC & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_12476/*"SetBannerCenter"*/, method);
    byte_48DF0FC = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12476/*"SetBannerCenter"*/,
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
    sub_1B00F28(summonInfoCtr, v3);
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

  if ( (byte_48DF159 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SummonControl__OnEndSummonEffect_b__277_0__, v6);
    byte_48DF159 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__277_0__, 0LL);
  if ( !v9 )
    sub_1B00F28(v12, v13);
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

  if ( (byte_48DF120 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl_RequestStoneFragmentsShop__, v7);
    byte_48DF120 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v12 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v14),
        v16 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo),
        System_Action_int____ctor(v16, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0LL),
        !Instance) )
  {
LABEL_11:
    sub_1B00F28(Master_object, v9);
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

  if ( (byte_48DF124 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_bool__TypeInfo, *(_QWORD *)&buyCount);
    sub_1B00CCC(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_SummonControl_OnCloseResultDialog__, v9);
    byte_48DF124 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v11);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (System_Action_bool__o *)sub_1B00F18(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B00F28(StoneFragmentsShopEntity, v13);
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

  if ( (byte_48DF121 & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B00CCC(&Method_SummonControl_EndRequestStoneFragmentsShop__, v7);
    byte_48DF121 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v10);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1B00F28(StoneFragmentsShopEntity, v12);
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

  if ( (byte_48DF0F2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48DF0F2 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v7 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
    sub_1B00F28(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v5; // x8

  if ( (byte_48DF138 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, method);
    sub_1B00CCC(&StringLiteral_10884/*"REQUEST_NG_RESULT"*/, v3);
    byte_48DF138 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_10884/*"REQUEST_NG_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10883/*"REQUEST_NG"*/;
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

  if ( (byte_48DF0FF & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48DF0FF = 1;
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
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
        UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
              UICenterOnChild__CenterOn_45525356(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_35:
        sub_1B00F28(bannerLoopCtr, method);
      }
    }
    else
    {
      v11 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  int32_t v15; // w3
  char *v16; // x20
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  __int64 v36; // x8
  unsigned __int64 v37; // x23
  bool v38; // w21
  System_String_o *v39; // x22
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_48DF13B & 1) == 0 )
  {
    sub_1B00CCC(&string___TypeInfo, isDisp);
    sub_1B00CCC(&StringLiteral_17552/*"center_glow"*/, v5);
    sub_1B00CCC(&StringLiteral_22630/*"ring_gard1_3"*/, v6);
    sub_1B00CCC(&StringLiteral_22631/*"ring_gard2_1"*/, v7);
    sub_1B00CCC(&StringLiteral_22632/*"ring_gard2_2"*/, v8);
    sub_1B00CCC(&StringLiteral_22629/*"ring_gard1_2"*/, v9);
    sub_1B00CCC(&StringLiteral_22633/*"ring_gard2_3"*/, v10);
    sub_1B00CCC(&StringLiteral_22628/*"ring_gard1_1"*/, v11);
    byte_48DF13B = 1;
  }
  bgRoot = (char *)sub_1B00D74(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_19:
    sub_1B00F28(bgRoot, v13);
  v16 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v17 = StringLiteral_22628/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_22628/*"ring_gard1_1"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(bgRoot + 32), v17, v14, v15);
  if ( *((_DWORD *)v16 + 6) <= 1u )
    goto LABEL_20;
  v20 = StringLiteral_22629/*"ring_gard1_2"*/;
  *((_QWORD *)v16 + 5) = StringLiteral_22629/*"ring_gard1_2"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 40), v20, v18, v19);
  if ( *((_DWORD *)v16 + 6) <= 2u )
    goto LABEL_20;
  v23 = StringLiteral_22630/*"ring_gard1_3"*/;
  *((_QWORD *)v16 + 6) = StringLiteral_22630/*"ring_gard1_3"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 48), v23, v21, v22);
  if ( *((_DWORD *)v16 + 6) <= 3u )
    goto LABEL_20;
  v26 = StringLiteral_22631/*"ring_gard2_1"*/;
  *((_QWORD *)v16 + 7) = StringLiteral_22631/*"ring_gard2_1"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25);
  if ( *((_DWORD *)v16 + 6) <= 4u
    || (v29 = StringLiteral_22632/*"ring_gard2_2"*/,
        *((_QWORD *)v16 + 8) = StringLiteral_22632/*"ring_gard2_2"*/,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 64), v29, v27, v28),
        *((_DWORD *)v16 + 6) <= 5u)
    || (v32 = StringLiteral_22633/*"ring_gard2_3"*/,
        *((_QWORD *)v16 + 9) = StringLiteral_22633/*"ring_gard2_3"*/,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 72), v32, v30, v31),
        *((_DWORD *)v16 + 6) <= 6u) )
  {
LABEL_20:
    sub_1B00F30(bgRoot, v13);
  }
  v35 = StringLiteral_17552/*"center_glow"*/;
  *((_QWORD *)v16 + 10) = StringLiteral_17552/*"center_glow"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 80), v35, v33, v34);
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
    sub_1B00F28(summonInfoCtr, isDisp);
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
    sub_1B00F28(this, num);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_BA97A8[type - 1];
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

  if ( (byte_48DF11D & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B00CCC(&MasterMissionComponent_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_17265/*"btn_event_3"*/, v8);
    byte_48DF11D = 1;
  }
  v18 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17265/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserItemMaster___);
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
    sub_1B00F28(fragmentsExchangeButton, method);
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
    sub_1B00F28(this, a);
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

  if ( (byte_48DF12F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl__SummonSceneRefresh_b__222_0__, v4);
    byte_48DF12F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__222_0__, 0LL);
  if ( !Instance )
    sub_1B00F28(v7, v8);
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
  int32_t v9; // w3
  SummonControl_c *v10; // x0
  System_String_o *String_68035932; // x21
  System_Object_array *v12; // x0
  SelectBonusData_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int max_length; // w8
  __int64 v17; // x9

  if ( (byte_48DF126 & 1) == 0 )
  {
    sub_1B00CCC(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData);
    sub_1B00CCC(&JsonManager_TypeInfo, v6);
    this = (SummonControl_o *)sub_1B00CCC(&SummonControl_TypeInfo, v7);
    byte_48DF126 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)selectBonusData, 0, v8, v9);
  v10 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v10 = SummonControl_TypeInfo;
  }
  String_68035932 = UnityEngine_PlayerPrefs__GetString_68035932(v10->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_68035932, 0LL) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_68035932,
          (const MethodInfo_2DB84AC *)Method_JsonManager_DeserializeArray_SelectBonusData___);
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
        sub_1B00F30(v12, v13);
      v13 = (SelectBonusData_o *)v12->m_Items[v17];
      if ( !v13 )
        sub_1B00F28(v12, 0LL);
      if ( v13->fields.gachaId == gachaId )
        break;
      if ( (int)++v17 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v13;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)selectBonusData, (int32_t)v13, v14, v15);
    LOBYTE(v12) = 1;
  }
  return (char)v12;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  struct SummonInfoControl_o *summonInfoCtr; // x9
  char v5; // w8

  if ( (byte_48DF100 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, method);
    byte_48DF100 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList
    || (vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        vaildGachaList,
                                                                        this->fields.currentIdx,
                                                                        (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0LL
    || (vaildGachaList = (System_Collections_Generic_List_object__o *)VaildGachaInfo__HasFlag(
                                                                        (VaildGachaInfo_o *)vaildGachaList,
                                                                        2,
                                                                        0LL),
        (summonInfoCtr = this->fields.summonInfoCtr) == 0LL)
    || (v5 = (char)vaildGachaList,
        (vaildGachaList = (System_Collections_Generic_List_object__o *)summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
    sub_1B00F28(vaildGachaList, method);
  }
  if ( (v5 & 1) != 0 )
    SummonInfoLayout__UpdatePc((SummonInfoLayout_o *)vaildGachaList, 0LL);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)vaildGachaList, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DF141 & 1) == 0 )
  {
    sub_1B00CCC(&SummonControl__WaitBattleChrLoad_d__244_TypeInfo, method);
    byte_48DF141 = 1;
  }
  v3 = sub_1B00F18(SummonControl__WaitBattleChrLoad_d__244_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__244___ctor((SummonControl__WaitBattleChrLoad_d__244_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SummonControl___DialogCallBack_b__248_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_48DF16C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl_EndCloseDialogCallBack__, v5);
    byte_48DF16C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1B00F28(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__280_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_1B00F28(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


void __fastcall SummonControl___OnEndSummonEffect_b__277_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF170 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_5416/*"END_FADE"*/, method);
    byte_48DF170 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5416/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__222_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_48DF168 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_48DF168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        SummonControl__quit(this, v6),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B00F28(Instance, v5);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__144_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_48DF163 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl__exeFormation_b__144_2__, v4);
    byte_48DF163 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__144_2__, 0LL);
  if ( !Instance )
    sub_1B00F28(v7, v8);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall SummonControl___exeFormation_b__144_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_48DF164 & 1) == 0 )
  {
    sub_1B00CCC(&TutorialFlag_TypeInfo, method);
    byte_48DF164 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___executeEnhanceTresureDevice_b__265_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20

  if ( (byte_48DF16F & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, isDecide);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&StringLiteral_5415/*"END_EFFECT"*/, v5);
    byte_48DF16F = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v8
    || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_1B00F28(Instance, v7);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5415/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__228_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF169 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_12050/*"START_GACHA"*/, method);
    byte_48DF169 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12050/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__143_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_48DF162 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl__openAfterSummonInfo_b__143_2__, v4);
    byte_48DF162 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__143_2__, 0LL);
  if ( !Instance )
    sub_1B00F28(v7, v8);
  CommonUI__CloseTutorialNotificationDialogArrow_29961696((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__143_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__260_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v6; // x19

  if ( (byte_48DF16E & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_5434/*"END_SUMMON"*/, v4);
    byte_48DF16E = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5434/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_11:
    sub_1B00F28(summonResultInfo, method);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__175_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_48DF166 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_12476/*"SetBannerCenter"*/, method);
    byte_48DF166 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12476/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1B00F28(0LL, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__151_0(
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

  if ( (byte_48DF165 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1B00CCC(&StringLiteral_24606/*"{0:N0}"*/, v7);
    byte_48DF165 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v12 = stoneCount;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v10 = System_String__Format((System_String_o *)StringLiteral_24606/*"{0:N0}"*/, v9, 0LL);
  if ( !currentStoneNumLb )
    sub_1B00F28(v10, v11);
  UILabel__set_text(currentStoneNumLb, v10, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__211_0(SummonControl_o *this, const MethodInfo *method)
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
  int32_t v18; // w3
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
  int32_t v29; // w3

  v2 = this;
  if ( (byte_48DF167 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v7);
    sub_1B00CCC(&Method_SummonControl_SetDispBtn__, v8);
    sub_1B00CCC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1B00CCC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1B00CCC(&Method_SummonControl___c__showConfirmDlg_b__211_1__, v11);
    this = (SummonControl_o *)sub_1B00CCC(&SummonControl___c_TypeInfo, v12);
    byte_48DF167 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__48061460(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    (int32_t)Component_object,
    v17,
    v18);
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
  v22 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v22, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v23 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v24 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
    if ( !LODWORD(this->fields.summonInstance) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    basePanel = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(basePanel, klass, Method_SummonControl___c__showConfirmDlg_b__211_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__211_1 = basePanel;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__211_1, (int32_t)basePanel, v28, v29);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1B00F28(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v22, v23, v24, basePanel, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__235_0(SummonControl_o *this, const MethodInfo *method)
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
  int32_t v36; // w3
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x9
  SummonEffectComponent_o *v39; // x9
  char v40; // w10
  Il2CppObject *v41; // x23
  System_String_o *Value; // x0
  System_String_array *v43; // x0
  SummonControl___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x24
  System_Func_object__int__o *_9__235_1; // x25
  Il2CppObject *v47; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
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
  ServantLimitMaster_o *v77; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_48DF16A & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantVoiceMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B00CCC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_string__int___, v11);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_1B00CCC(&System_Func_string__int__TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B00CCC(&SoundManager_TypeInfo, v19);
    sub_1B00CCC(&Method_SummonControl___c__showSummonEffect_b__235_1__, v20);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v21);
    sub_1B00CCC(&Method_WeightRate_int___ctor__, v22);
    sub_1B00CCC(&Method_WeightRate_int__getData__, v23);
    sub_1B00CCC(&Method_WeightRate_int__getTotalWeight__, v24);
    sub_1B00CCC(&Method_WeightRate_int__setWeight__, v25);
    sub_1B00CCC(&WeightRate_int__TypeInfo, v26);
    sub_1B00CCC(&StringLiteral_5429/*"END_PREPARATION"*/, v27);
    sub_1B00CCC(&StringLiteral_12169/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v28);
    sub_1B00CCC(&StringLiteral_2997/*"BGM_SUMMON_1"*/, v29);
    byte_48DF16A = 1;
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
  SoundManager__playBgm((System_String_o *)StringLiteral_2997/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.summonComp, (int32_t)Component_object, v35, v36);
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
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v77 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12169/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
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
    _9__235_1 = (System_Func_object__int__o *)v44->static_fields->__9__235_1;
    if ( !_9__235_1 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = SummonControl___c_TypeInfo;
      }
      v47 = (Il2CppObject *)v44->static_fields->__9;
      _9__235_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(_9__235_1, v47, Method_SummonControl___c__showSummonEffect_b__235_1__, 0LL);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__235_1 = (struct System_Func_string__int__o *)_9__235_1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__235_1, (int32_t)_9__235_1, v49, v50);
    }
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v45,
                                                                 (System_Func_TSource__TResult__o *)_9__235_1,
                                                                 (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_string__int___);
    v52 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v51,
                                                      (const MethodInfo_2D9AD68 *)Method_System_Linq_Enumerable_ToList_int___);
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
          sub_1B00F30(maskObject, method);
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
                       (const MethodInfo_2FE6A4C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
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
          0LL);
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
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v64 = *((_DWORD *)maskObject + 21);
      v65 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = v77;
      if ( !v77 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v77, v58->fields.objectId, v58->fields.limitCount, 0LL);
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
          maskObject = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantVoiceMaster___);
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
              v52 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v52,
                (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
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
                *(const MethodInfo_33A49AC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
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
          v74 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v74, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
          if ( v59 == 4 )
          {
            if ( !v74 )
              goto LABEL_84;
            WeightRate_int___setWeight(v74, 60, 0, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v74, 40, 1, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
            v75 = UnityEngine_Random__Range_68037396(0, v74->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v74, v75, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
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
              WeightRate_int___setWeight(v74, 60, 0, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v74, 20, 1, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
              v62 = 2;
              WeightRate_int___setWeight(v74, 20, 2, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
              v76 = UnityEngine_Random__Range_68037396(0, v74->fields.totalweight, 0LL);
              Data = WeightRate_int___getData(v74, v76, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
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
                             (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1B00F28(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5429/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__251_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonControl___c_c *v5; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__251_1; // x21
  Il2CppObject *v9; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48DF16D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SummonControl___c__showSummonResultInfo_b__251_1__, v3);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v4);
    byte_48DF16D = 1;
  }
  v5 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v5 = SummonControl___c_TypeInfo;
  }
  _9__251_1 = v5->static_fields->__9__251_1;
  if ( !_9__251_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SummonControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v5->static_fields->__9;
    _9__251_1 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(_9__251_1, v9, Method_SummonControl___c__showSummonResultInfo_b__251_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__251_1 = _9__251_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__251_1, (int32_t)_9__251_1, v11, v12);
  }
  if ( !overflowSvtCoinInfo )
    sub_1B00F28(v5, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__251_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__242_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF16B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3518/*"CLICK_OK"*/, method);
    byte_48DF16B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3518/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B00F28(0LL, v4);
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
    sub_1B00F28(0LL, v4);
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

  if ( (byte_48DF134 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_beforeConfirmCautionResult__, method);
    byte_48DF134 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1B00F28(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B00CE4(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  SummonControl__showConfirmDlg_31937916(this, 0, v6);
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
  int32_t v13; // w3
  SummonControl_o *v14; // x20
  __int64 v15; // x8
  struct GachaInfos_array *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  struct System_Int32_array *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  struct GetSvtCoin_array *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  struct System_Int32_array *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  struct GachaExtraGifts_array *v32; // x1

  v4 = this;
  if ( (byte_48DF137 & 1) == 0 )
  {
    sub_1B00CCC(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result);
    sub_1B00CCC(&JsonManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v6);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v7);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v8);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_15837/*"]"*/, v9);
    byte_48DF137 = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21754/*"ng"*/, 0LL)
    || System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21754/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v10);
    return;
  }
  v11 = (Il2CppObject *)System_String__Concat_60337008(
                          (System_String_o *)StringLiteral_15581/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15837/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v11,
                              (const MethodInfo_2DB84AC *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.gachaResInfoList, (int32_t)v16, v12, v13);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v19 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v19 )
    goto LABEL_22;
  v20 = *(struct System_Int32_array **)(v19 + 24);
  v4->fields.canRankUpClassIds = v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.canRankUpClassIds, (int32_t)v20, v17, v18);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v23 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v23 )
    goto LABEL_22;
  v24 = *(struct GetSvtCoin_array **)(v23 + 32);
  v4->fields.overflowSvtCoinInfos = v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)v24, v21, v22);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v27 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v27 )
    goto LABEL_22;
  v28 = *(struct System_Int32_array **)(v27 + 40);
  v4->fields.extraGiftIds = v28;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.extraGiftIds, (int32_t)v28, v25, v26);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1B00F30(this, result);
  v31 = *(_QWORD *)&v14->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v31
    || (v32 = *(struct GachaExtraGifts_array **)(v31 + 48),
        v4->fields.GachaExtraGiftList = v32,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.GachaExtraGiftList, (int32_t)v32, v29, v30),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_22:
    sub_1B00F28(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10885/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF13A & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, result);
    byte_48DF13A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10885/*"REQUEST_OK"*/, 0LL);
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
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_48DF151 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl___c__DisplayClass264_0__checkEnhanceTresureDevice_b__0__, v5);
    sub_1B00CCC(&SummonControl___c__DisplayClass264_0_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_9197/*"NO_EXIST"*/, v7);
    byte_48DF151 = 1;
  }
  v8 = sub_1B00F18(SummonControl___c__DisplayClass264_0_TypeInfo);
  SummonControl___c__DisplayClass264_0___ctor((SummonControl___c__DisplayClass264_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v8 + 24), v13) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v17 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v8,
      Method_SummonControl___c__DisplayClass264_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
      return;
    }
LABEL_11:
    sub_1B00F28(fsm, v10);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9197/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF14F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9197/*"NO_EXIST"*/, method);
    byte_48DF14F = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B00F28(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9197/*"NO_EXIST"*/, 0LL);
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
  int32_t v14; // w3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v17; // x8
  int32_t objectId; // w21
  Il2CppObject *v19; // x19
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_48DF150 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl___c__DisplayClass263_0__checkEnhanceTresureDeviceSingle_b__0__, v7);
    sub_1B00CCC(&SummonControl___c__DisplayClass263_0_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_9197/*"NO_EXIST"*/, v9);
    byte_48DF150 = 1;
  }
  v10 = sub_1B00F18(SummonControl___c__DisplayClass263_0_TypeInfo);
  SummonControl___c__DisplayClass263_0___ctor((SummonControl___c__DisplayClass263_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v10 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B00F30(Instance, v12);
  v17 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v17 )
    goto LABEL_16;
  objectId = v17->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v10 + 24) = objectId;
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v10,
      Method_SummonControl___c__DisplayClass263_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v19 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v19, 1, DEFAULT_FADE_TIME, v22, 0LL);
      return;
    }
LABEL_16:
    sub_1B00F28(Instance, v12);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9197/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 *v6; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  v2 = this;
  if ( (byte_48DF116 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3423/*"CHECK_STONE"*/, method);
    sub_1B00CCC(&StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/, v3);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_3420/*"CHECK_POINT"*/, v4);
    byte_48DF116 = 1;
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
LABEL_15:
    sub_1B00F28(this, method);
  switch ( gachaParamData->fields.gachaType )
  {
    case 1:
    case 7:
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      v6 = &StringLiteral_3423/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = v2->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_15;
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      if ( summonInfoCtr->fields.isFree )
        v6 = &StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/;
      else
        v6 = (__int64 *)&StringLiteral_3420/*"CHECK_POINT"*/;
      break;
    case 5:
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      v6 = &StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_48DF13E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_6846/*"GET_MULTI"*/, method);
    byte_48DF13E = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B00F28(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6846/*"GET_MULTI"*/, 0LL);
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
    sub_1B00F28(0LL, drawGachaEnt);
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
    sub_1B00F28(0LL, drawUsrGachaEnt);
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
  if ( (byte_48DF13F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_9135/*"NEW_SVT"*/, method);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_6860/*"GO_BACK"*/, v4);
    byte_48DF13F = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B00F30(this, method);
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_14;
  if ( v7->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v7->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v8 = &StringLiteral_9135/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B00F28(this, method);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v8 = &StringLiteral_6860/*"GO_BACK"*/;
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
    sub_1B00F28(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1B00F30(this, method);
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
  if ( (byte_48DF148 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B00CCC(&StringLiteral_9512/*"OLD_SVT"*/, v4);
    sub_1B00CCC(&StringLiteral_6316/*"FINAL_SVT"*/, v5);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_9135/*"NEW_SVT"*/, v6);
    byte_48DF148 = 1;
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
      v10 = &StringLiteral_6316/*"FINAL_SVT"*/;
LABEL_15:
      v13 = (System_String_o *)*v10;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1B00F30(this, method);
  v11 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v11 )
    goto LABEL_22;
  if ( !v11->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v10 = &StringLiteral_9512/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1B00F28(this, method);
  }
  objectId = v11->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v13 = (System_String_o *)StringLiteral_9512/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v13, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9135/*"NEW_SVT"*/, 0LL);
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
      *(const MethodInfo_33A49AC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1B00F28(UserGachaData, v6);
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

  if ( (byte_48DF149 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_48DF149 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B00F28(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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

  if ( (byte_48DF0E8 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_3486/*"CLEAR_TUTORIAL"*/, v5);
    sub_1B00CCC(&StringLiteral_10941/*"RETURN_TUTORIAL"*/, v6);
    byte_48DF0E8 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
    goto LABEL_51;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_36489460(101, 0LL) )
  {
    this->fields.isDoneTutorial = 0;
    v13 = 1;
  }
  else
  {
LABEL_51:
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_36489460(101, 0LL) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_48;
        v10 = &StringLiteral_10941/*"RETURN_TUTORIAL"*/;
LABEL_40:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v10, 0LL);
        goto LABEL_44;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_36489460(101, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_36489460(107, 0LL) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v11);
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
      SummonControl__showHelpImg(this, v12);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_48;
      v10 = &StringLiteral_3486/*"CLEAR_TUTORIAL"*/;
      goto LABEL_40;
    }
    v13 = 4;
  }
  this->fields.tutorialKind = v13;
  SummonControl__progTutorial(this, v7);
LABEL_44:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14 )
LABEL_48:
    sub_1B00F28(fsm, v8);
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
  if ( (byte_48DF10E & 1) == 0 )
  {
    sub_1B00CCC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v8);
    sub_1B00CCC(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9);
    sub_1B00CCC(&Method_SummonControl_closeShotSvtFrameDlg__, v10);
    sub_1B00CCC(&StringLiteral_6434/*"FRIEND_GACHA_ADD_LIMIT"*/, v11);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_3421/*"CHECK_RESOURCE"*/, v12);
    byte_48DF10E = 1;
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
  if ( !byte_48DE284 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    byte_48DE284 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v17->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6434/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3421/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_40:
    sub_1B00F28(this, method);
  }
  if ( servantEquipSum[1] >= v23 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = v2->fields.userGameEntity;
    if ( !v33 )
      goto LABEL_40;
    v34 = v33->fields.svtKeep;
    v35 = servantEquipSum[1];
    v36 = this;
    v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B00F18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = v2->fields.userGameEntity;
      if ( !v38 )
        goto LABEL_40;
      v28 = v38->fields.svtEquipKeep;
      v39 = servantEquipSum[0];
      v40 = this;
      v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B00F18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v26 = this;
      if ( !byte_48DE284 )
      {
        sub_1B00CCC(&BalanceConfig_TypeInfo, method);
        byte_48DE284 = 1;
      }
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      v28 = v27->static_fields->CommandCodeFrameMax;
      v29 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B00F18(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t v11; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_48DF117 & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_1B00CCC(&Method_SummonControl_closeShotPointDlg__, v5);
    sub_1B00CCC(&StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/, v6);
    byte_48DF117 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B52BA8(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1B52BA8(v8);
  MasterData_object = **(void ***)(v8 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v11 = *((_DWORD *)MasterData_object + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v11;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v11 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v15 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_closeShotPointDlg__,
      v16);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v11, v15, v17);
      return;
    }
LABEL_17:
    sub_1B00F28(MasterData_object, method);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/, 0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x10
  int32_t haveStoneNum; // w11
  int32_t gachaType; // w9
  int32_t HaveFreeStoneNum_k__BackingField; // w20
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w22
  int32_t v12; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v14; // x24
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x5
  SummonConfirmDlgComponent_o *v17; // x20
  int32_t haveStone; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  v2 = this;
  if ( (byte_48DF119 & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_SummonControl_closeShotStoneDlg__, v3);
    this = (SummonControl_o *)sub_1B00CCC(&StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/, v4);
    byte_48DF119 = 1;
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_16;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  gachaType = gachaParamData->fields.gachaType;
  v2->fields.haveStone = haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  v2->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  v2->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  if ( gachaType == 7 )
    v12 = HaveChargeStoneNum_k__BackingField;
  else
    v12 = haveStoneNum;
  v2->fields.needStone = gachaResourceNum;
  if ( v12 >= gachaResourceNum )
  {
    this = (SummonControl_o *)v2->fields.fsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11943/*"SHOW_CONFIRM_DLG"*/, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = v2->fields.confirmDlgInfo;
      v14 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v15);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v14,
          v16);
        return;
      }
LABEL_16:
      sub_1B00F28(this, method);
    }
    SummonControl__SetupFragmentsExchangeButton(v2, method);
    v17 = v2->fields.confirmDlgInfo;
    haveStone = v2->fields.haveStone;
    v19 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_closeShotStoneDlg__,
      v20);
    if ( !v17 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v17, haveStone, v19, v21);
  }
}


void __fastcall SummonControl__checkValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t userId; // x20
  Il2CppObject *Master_object; // x21
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  const MethodInfo *size; // x2
  GachaReleaseMaster_o *v15; // x22
  int v16; // w9
  struct GachaEntity_array *useGachaData; // x8
  __int64 v18; // x29
  int max_length; // w9
  GachaEntity_o *v20; // x24
  const MethodInfo *v21; // x3
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v26; // x25
  UserGachaEntity_o *UserGachaData; // x0
  System_Collections_Generic_List_object__o *v28; // x20
  System_Comparison_T__o *v29; // x21
  StoryGachaAdjustData_o *adjustData; // [xsp+0h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_48DF0F4 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_VaildGachaInfo__TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaReleaseMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v7);
    sub_1B00CCC(&Method_SummonControl_SlotCompare__, v8);
    this = (SummonControl_o *)sub_1B00CCC(&TutorialFlag_TypeInfo, v9);
    byte_48DF0F4 = 1;
  }
  adjustData = 0LL;
  userGameEntity = v2->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_39;
  userId = userGameEntity->fields.userId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestMaster___);
  this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_39;
  size = (const MethodInfo *)(unsigned int)vaildGachaList->fields._size;
  v15 = (GachaReleaseMaster_o *)this;
  v16 = vaildGachaList->fields._version + 1;
  vaildGachaList->fields._size = 0;
  vaildGachaList->fields._version = v16;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, (int32_t)size, 0LL);
  useGachaData = v2->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_39;
  v18 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v18 >= max_length )
      break;
    if ( (unsigned int)v18 >= max_length )
      sub_1B00F30(this, method);
    v20 = useGachaData->m_Items[v18];
    if ( !v20 || !Master_object )
      goto LABEL_39;
    this = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                (UserQuestMaster_o *)Master_object,
                                &entity,
                                userId,
                                v20->fields.condQuestId,
                                0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonControl_o *)entity;
      if ( !entity )
        goto LABEL_39;
      this = (SummonControl_o *)UserQuestEntity__getClearNum(entity, 0LL);
      if ( (int)this > 0 )
        goto LABEL_20;
      this = (SummonControl_o *)entity;
      if ( !entity )
        goto LABEL_39;
      this = (SummonControl_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
      if ( (int)this >= v20->fields.condQuestPhase )
      {
LABEL_20:
        if ( !v15 )
          goto LABEL_39;
        this = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v15, v20->fields.id, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = SummonControl__CheckStoryGachaAdjustData(this, &adjustData, v20->fields.id, v21);
          if ( !v22 )
            adjustData = 0LL;
          beforeGachaId = v20->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            this = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v22, beforeGachaId, v23);
            if ( !this )
              goto LABEL_38;
            v26 = this;
            this = (SummonControl_o *)SummonControl__getCurrentGachaData(v2, v20->fields.beforeGachaId, size);
            if ( !this )
              goto LABEL_39;
            if ( SHIDWORD(v26->fields.m_CancellationTokenSource) < SLODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height) )
              goto LABEL_38;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            this = (SummonControl_o *)TutorialFlag__IsProgressDone(2, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_38;
            UserGachaData = SummonControl__getUserGachaData(this, v20->fields.id, size);
            if ( UserGachaData )
            {
              this = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(v2, UserGachaData, v20, v24);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_38;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)v20->fields.gachaGroupId;
              if ( (int)method >= 1 )
              {
                this = (SummonControl_o *)v2->fields.gachaMst;
                if ( !this )
                  goto LABEL_39;
                this = (SummonControl_o *)GachaMaster__CheckIsDrawGroupSummon(
                                            (GachaMaster_o *)this,
                                            (int32_t)method,
                                            0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_38;
              }
            }
          }
          SummonControl__AddVaildGachaInfoList(v2, v20, adjustData, v24);
        }
      }
    }
LABEL_38:
    useGachaData = v2->fields.useGachaData;
    ++v18;
    if ( !useGachaData )
      goto LABEL_39;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(this, &v2->fields.vaildGachaList, size);
  v28 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v29 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_object____ctor(v29, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0LL);
  if ( !v28 )
LABEL_39:
    sub_1B00F28(this, method);
  System_Collections_Generic_List_object___Sort_54277268(
    v28,
    v29,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
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

  if ( (byte_48DF10C & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DF10C = 1;
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
      UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_33:
    sub_1B00F28(bannerLoopCtr, method);
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
      UnityEngine_Object__Destroy_68077656(v9, 0LL);
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
      UnityEngine_Object__Destroy_68077656(v11, 0LL);
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
  int32_t v7; // w3

  if ( (byte_48DF14C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_48DF14C = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL)
    || (summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)summonResultInfo,
                                                        0LL)) == 0LL )
  {
    sub_1B00F28(summonResultInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v5 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v5, v6, v7);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_48DF111 & 1) == 0 )
  {
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v7);
    sub_1B00CCC(&StringLiteral_12375/*"SellServant"*/, v8);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v9);
    byte_48DF111 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  v12 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v12, v12[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
      v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_37367716(v15, (System_String_o *)StringLiteral_12375/*"SellServant"*/, 2, 0LL);
      if ( v14 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v14, 22, 1, (Il2CppObject *)v15, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B00F28(Instance, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_48DF118 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_closeShotPointDlg__, res);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v4);
    byte_48DF118 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close_31906084(confirmDlgInfo, 0LL, method);
  v6 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotPointDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1B00F28(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_48DF11A & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_closeShotStoneDlg__, res);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v5);
    sub_1B00CCC(&StringLiteral_6862/*"GO_BUY_STONE"*/, v6);
    byte_48DF11A = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close_31906084(confirmDlgInfo, 0LL, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v8 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotStoneDlg__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v8, v8[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v10 = &StringLiteral_3493/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B00F28(confirmDlgInfo, res);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v10 = &StringLiteral_6862/*"GO_BUY_STONE"*/;
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

  if ( (byte_48DF110 & 1) == 0 )
  {
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl_closeShotSvtEqFrameDlg__, v7);
    sub_1B00CCC(&StringLiteral_12416/*"ServantEquipList"*/, v8);
    sub_1B00CCC(&StringLiteral_12375/*"SellServant"*/, v9);
    sub_1B00CCC(&StringLiteral_12415/*"ServantEQCombine"*/, v10);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v11);
    byte_48DF110 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v19 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v20 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_37367716(v17, (System_String_o *)StringLiteral_12375/*"SellServant"*/, 1, 0LL);
        if ( v16 )
        {
          v18 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1B00F28(Instance, v13);
    case 1:
      v21 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_37367628(v17, (System_String_o *)StringLiteral_12416/*"ServantEquipList"*/, 0LL);
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
        v14 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v15 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_37367628(v17, (System_String_o *)StringLiteral_12415/*"ServantEQCombine"*/, 0LL);
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
    v23 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_48DF10F & 1) == 0 )
  {
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl_closeShotSvtFrameDlg__, v7);
    sub_1B00CCC(&StringLiteral_12375/*"SellServant"*/, v8);
    sub_1B00CCC(&StringLiteral_12412/*"ServantCombine"*/, v9);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v10);
    byte_48DF10F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v18 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtFrameDlg__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_37367716(v16, (System_String_o *)StringLiteral_12375/*"SellServant"*/, 0, 0LL);
        if ( v15 )
        {
          v17 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1B00F28(Instance, v12);
    case 1:
      v21 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtFrameDlg__);
      v22 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v13 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtFrameDlg__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_1B00F18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_37367628(v16, (System_String_o *)StringLiteral_12412/*"ServantCombine"*/, 0LL);
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
    v23 = (_QWORD *)sub_1B00CE4(Method_SummonControl_closeShotSvtFrameDlg__);
  v24 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_48DF132 & 1) == 0 )
  {
    sub_1B00CCC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v8);
    sub_1B00CCC(&Method_SummonControl_SetDispBtn__, v9);
    sub_1B00CCC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v10);
    sub_1B00CCC(&Method_SummonControl_confirmCautionResult__, v11);
    sub_1B00CCC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v13);
    byte_48DF132 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, method);
  if ( !res )
  {
    v18 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B00CE4(Method_SummonControl_confirmCautionResult__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v24 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v25,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v26 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B00F18(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B00F28(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v15 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B00CE4(Method_SummonControl_confirmCautionResult__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v15, v15[4]);
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

  if ( (byte_48DF131 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_confirmResult__, res);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v5);
    byte_48DF131 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_31906084(confirmDlgInfo, 0LL, method);
  if ( !res )
  {
    v10 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B00CE4(Method_SummonControl_confirmResult__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B00F28(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v7 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B00CE4(Method_SummonControl_confirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
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
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x19
  __int64 noneGachaInfo; // x0
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  Il2CppObject *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct UICenterOnChild_o *v50; // x21
  ServantStatusBattleListViewItem_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v53; // x22
  System_Delegate_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Delegate_o *v57; // x8
  SpringPanel_OnFinished_c *v58; // x1
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v61; // x22
  System_Delegate_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  UIScrollView_OnDragNotification_c *v65; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  float v68; // s0
  UnityEngine_Component_o *v69; // x20
  float v70; // s2
  float v71; // s8
  float v72; // s0
  int v73; // w8
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  Il2CppObject *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  Il2CppObject *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  struct UICenterOnChild_o *v83; // x21
  System_Delegate_o *v84; // t1
  SpringPanel_OnFinished_o *v85; // x22
  System_Delegate_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  SpringPanel_OnFinished_c *v89; // x1
  struct UIScrollView_o *summonMBannerScrollView; // x21
  System_Delegate_o *v91; // t1
  UIScrollView_OnDragNotification_o *v92; // x22
  System_Delegate_o *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  UIScrollView_OnDragNotification_c *v96; // x1
  int32_t v97; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v100; // x27
  UnityEngine_Transform_o *v101; // x20
  UnityEngine_Transform_o *v102; // x21
  int v103; // s0
  int v106; // w25
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  System_String_o *v109; // x0
  System_String_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_Collections_Generic_List_object__o *v113; // x8
  struct System_Object_array *items; // x9
  _QWORD *v115; // x10
  __int64 size; // x11
  GachaBannerComponent_o *v117; // x29
  Il2CppClass **v118; // x0
  int v119; // w8
  int v120; // w9
  int32_t v121; // w26
  System_String_o *v122; // x0
  System_String_o *v123; // x21
  const MethodInfo *v124; // x2
  UnityEngine_Object_o *v125; // x22
  Il2CppObject *Item; // x20
  System_String_o *v127; // x5
  VaildGachaInfo_o *v128; // x19
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v130; // x0
  UnityEngine_GameObject_o *v131; // x29
  UnityEngine_Transform_o *v132; // x20
  UnityEngine_Transform_o *v133; // x21
  int v134; // s0
  System_String_o *name; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  System_Collections_Generic_List_object__o *v140; // x8
  struct System_Object_array *v141; // x9
  _QWORD *v142; // x10
  __int64 v143; // x11
  SummonMiniBannerComponent_o *v144; // x27
  Il2CppClass **v145; // x0
  System_String_o *v146; // x0
  System_String_o *v147; // x21
  const MethodInfo *v148; // x2
  UnityEngine_Object_o *v149; // x29
  const MethodInfo *v150; // x2
  Il2CppObject *Component_object; // x22
  SummonMiniBannerComponent_CallbackFunc_o *v152; // x20
  float v153; // s8
  int v154; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v156; // x0
  UnityEngine_Transform_o *v157; // x20
  const MethodInfo *v158; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v160; // x21
  SummonInfoControl_ClickDelegate_o *v161; // x22
  const MethodInfo *v162; // x2
  const MethodInfo *v163; // x1
  int v164; // [xsp+Ch] [xbp-94h]
  int v165; // [xsp+10h] [xbp-90h]
  unsigned int v166; // [xsp+14h] [xbp-8Ch]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+20h] [xbp-80h]
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // [xsp+28h] [xbp-78h]
  int v170; // [xsp+38h] [xbp-68h]
  int v171; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v172; // 0:s0.4,4:s1.4,8:s2.4

  v2 = (UnityEngine_Component_o **)&byte_48DF000;
  if ( (byte_48DF0FA & 1) == 0 )
  {
    sub_1B00CCC(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&SummonInfoControl_ClickDelegate_TypeInfo, v4);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v7);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v8);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v15);
    sub_1B00CCC(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v16);
    sub_1B00CCC(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v17);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v18);
    sub_1B00CCC(&UIScrollView_OnDragNotification_TypeInfo, v19);
    sub_1B00CCC(&SpringPanel_OnFinished_TypeInfo, v20);
    sub_1B00CCC(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v21);
    sub_1B00CCC(&Method_SummonControl_OnCenterOnChildFinished__, v22);
    sub_1B00CCC(&Method_SummonControl_OnClickMiniBanner__, v23);
    sub_1B00CCC(&Method_SummonControl_OnDragStarted__, v24);
    sub_1B00CCC(&Method_SummonControl_exeSummon__, v25);
    sub_1B00CCC(&StringLiteral_20196/*"img_summon_"*/, v26);
    sub_1B00CCC(&StringLiteral_20198/*"img_summon_mini_236"*/, v27);
    sub_1B00CCC(&StringLiteral_20197/*"img_summon_mini_"*/, v28);
    sub_1B00CCC(&StringLiteral_1/*""*/, v29);
    sub_1B00CCC(&StringLiteral_1261/*"1"*/, v30);
    sub_1B00CCC(&StringLiteral_1207/*"0"*/, v31);
    byte_48DF0FA = 1;
  }
  v171 = 0;
  v32 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v32;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bannerInfoList, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v35;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.summonMBannerInfoList, (int32_t)v35, v36, v37);
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
    v42 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v42;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bannerLoopCtr, (int32_t)v42, v43, v44);
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
    v47 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v47;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.centerChild, (int32_t)v47, v48, v49);
  }
  v50 = *p_centerChild;
  if ( !v50 )
    goto LABEL_128;
  onFinished = (System_Delegate_o *)v50->fields.onFinished;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&v50->fields.onFinished;
  v53 = (SpringPanel_OnFinished_o *)sub_1B00F18(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v53, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
  v54 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v53, 0LL);
  v57 = v54;
  if ( v54 )
  {
    v58 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v54->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v54;
    if ( (SpringPanel_OnFinished_c *)v54->klass != v58 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B00C70(p_onFinished, (int32_t)v54, v55, v56);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_128;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&summonBannerScrollView->fields.onDragStarted;
  v61 = (UIScrollView_OnDragNotification_o *)sub_1B00F18(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v61, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v62 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v61, 0LL);
  v57 = v62;
  if ( v62 )
  {
    v65 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v62->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v62;
    if ( (UIScrollView_OnDragNotification_c *)v62->klass != v65 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B00C70(p_onFinished, (int32_t)v62, v63, v64);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_128;
  LODWORD(v2) = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0LL);
  v68 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v69 = *p_bannerLoopCtr;
  v70 = (float)((float)(fminf(v68, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v68 < 1.7778 )
    v71 = 1028.0;
  else
    v71 = v70;
  if ( !byte_48DD9F0 )
  {
    sub_1B00CCC(&System_Math_TypeInfo, v38);
    byte_48DD9F0 = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v69 )
    goto LABEL_128;
  v72 = floorf(v71);
  if ( v72 == INFINITY )
    v73 = 0x80000000;
  else
    v73 = (int)v72;
  LODWORD(v69[1].monitor) = v73;
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
    v75 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v75;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.summonMBannerLoopCtr, (int32_t)v75, v76, v77);
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
    v80 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v80;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.summonMBannerCenterChild, (int32_t)v80, v81, v82);
  }
  v83 = *p_summonMBannerCenterChild;
  if ( !v83 )
    goto LABEL_128;
  v84 = (System_Delegate_o *)v83->fields.onFinished;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&v83->fields.onFinished;
  v85 = (SpringPanel_OnFinished_o *)sub_1B00F18(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v85, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
  v86 = System_Delegate__Combine(v84, (System_Delegate_o *)v85, 0LL);
  v57 = v86;
  if ( v86 )
  {
    v89 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v86->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v86;
    if ( (SpringPanel_OnFinished_c *)v86->klass != v89 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B00C70(p_onFinished, (int32_t)v86, v87, v88);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_128;
  v91 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&summonMBannerScrollView->fields.onDragStarted;
  v92 = (UIScrollView_OnDragNotification_o *)sub_1B00F18(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v92, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v93 = System_Delegate__Combine(v91, (System_Delegate_o *)v92, 0LL);
  v57 = v93;
  if ( !v93 )
    goto LABEL_65;
  v96 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v93->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v93;
    if ( (UIScrollView_OnDragNotification_c *)v93->klass == v96 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1B011E8(v57);
LABEL_65:
  p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v57;
LABEL_66:
  sub_1B00C70(p_onFinished, (int32_t)v57, v94, v95);
  v170 = 2 * (_DWORD)v2;
  if ( 2 * (int)v2 >= 1 )
  {
    v97 = 0;
    v165 = (_DWORD)v2 - 1;
    v166 = (unsigned int)v2 & 0x80000000;
    v164 = (int)v2;
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
      v100 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v101 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_48DD9F6 )
      {
        noneGachaInfo = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v38);
        byte_48DD9F6 = 1;
      }
      if ( !v101 )
        break;
      UnityEngine_Transform__set_localScale(v101, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v100, 0LL);
      if ( !*p_bannerLoopCtr )
        break;
      v102 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v103 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v102 )
        break;
      UnityEngine_Transform__set_localPosition(v102, *(UnityEngine_Vector3_o *)&v103, 0LL);
      v106 = v97 + 1;
      v171 = v97 + 1;
      v107 = System_Int32__ToString((int32_t)&v171, 0LL);
      v108 = System_String__Concat_60325748((System_String_o *)StringLiteral_1207/*"0"*/, v107, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v100, v108, 0LL);
      if ( v171 >= 10 )
      {
        v109 = System_Int32__ToString((int32_t)&v171, 0LL);
        v110 = System_String__Concat_60325748((System_String_o *)StringLiteral_1261/*"1"*/, v109, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v100, v110, 0LL);
      }
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v100,
                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v113 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v113->fields._items;
      v115 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v113->fields._version;
      if ( !items )
        break;
      size = v113->fields._size;
      v117 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v113,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
      }
      else
      {
        v118 = &items->obj.klass + size;
        v113->fields._size = size + 1;
        v118[4] = (Il2CppClass *)v117;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v117, v111, v112);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      v119 = v97 | v166;
      v120 = (int)(v97 | v166) <= v165 ? 0 : (int)v2;
      if ( !noneGachaInfo )
        break;
      v121 = v119 - v120;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v119 - v120,
                                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v2 = p_bannerLoopCtr;
      v122 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v123 = System_String__Concat_60325748((System_String_o *)StringLiteral_20196/*"img_summon_"*/, v122, 0LL);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg(this, v123, v124);
      if ( !this->fields.vaildGachaList )
        break;
      v125 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
               v121,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = UnityEngine_Object__op_Equality(v125, 0LL, 0LL);
      if ( !v117 )
        break;
      v127 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v123;
      v128 = (VaildGachaInfo_o *)Item;
      GachaBannerComponent__setBannerGachaInfo(
        v117,
        (VaildGachaInfo_o *)Item,
        v121,
        v97,
        (UnityEngine_GameObject_o *)v125,
        v127,
        0LL);
      noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v130 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v130,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      v131 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v132 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_48DD9F6 )
      {
        noneGachaInfo = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v38);
        byte_48DD9F6 = 1;
      }
      if ( !v132 )
        break;
      UnityEngine_Transform__set_localScale(v132, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v131, 0LL);
      if ( !*p_summonMBannerLoopCtr )
        break;
      v133 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_summonMBannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v134 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v133 )
        break;
      UnityEngine_Transform__set_localPosition(v133, *(UnityEngine_Vector3_o *)&v134, 0LL);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v100, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v131, name, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v131,
                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v140 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v141 = v140->fields._items;
      v142 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v140->fields._version;
      if ( !v141 )
        break;
      v143 = v140->fields._size;
      v144 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v143 >= v141->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v140,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
      }
      else
      {
        v145 = &v141->obj.klass + v143;
        v140->fields._size = v143 + 1;
        v145[4] = (Il2CppClass *)v144;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v145 + 4), (int32_t)v144, v138, v139);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v121,
                                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v146 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v147 = System_String__Concat_60325748((System_String_o *)StringLiteral_20197/*"img_summon_mini_"*/, v146, 0LL);
      v149 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v147, v148);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v149, 0LL, 0LL) )
      {
        v147 = (System_String_o *)StringLiteral_20198/*"img_summon_mini_236"*/;
        v149 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20198/*"img_summon_mini_236"*/,
                                         v150);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v149, 0LL, 0LL) )
          v147 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v152 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1B00F18(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v152,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0LL);
      if ( !v144 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v144,
        v128,
        v121,
        v97,
        (UnityEngine_GameObject_o *)v149,
        v147,
        v152,
        (UIPanel_o *)Component_object,
        0LL);
      p_bannerLoopCtr = v2;
      LODWORD(v2) = v164;
      ++v97;
      if ( v170 == v106 )
        goto LABEL_120;
    }
LABEL_128:
    sub_1B00F28(noneGachaInfo, v38);
  }
LABEL_120:
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  v153 = fminf(640.0 / (float)(int)v2, 25.0);
  v154 = (_DWORD)v2 - 1;
  *(float *)(noneGachaInfo + 48) = v153;
  if ( (int)v2 >= 1 )
  {
    do
    {
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v156 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 slideIndexPrefab,
                                 v156,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v157 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_48DD9F6 )
      {
        noneGachaInfo = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v38);
        byte_48DD9F6 = 1;
      }
      if ( !v157 )
        break;
      UnityEngine_Transform__set_localScale(v157, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  v172.fields.z = this->fields.center.fields.z;
  v172.fields.y = this->fields.center.fields.y;
  v172.fields.x = (float)(v153 * -0.5) * (float)v154;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noneGachaInfo, v172, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0LL);
  SummonControl__UpdateSummonInfoControlLayout(this, v158);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_128;
  summonInfoCtr = this->fields.summonInfoCtr;
  v160 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v161 = (SummonInfoControl_ClickDelegate_o *)sub_1B00F18(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v161, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr )
    goto LABEL_128;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v160, v161, 0LL);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v162);
  SummonControl__setResourceInfo(this, v163);
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

  if ( (byte_48DF157 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DF157 = 1;
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
      UnityEngine_Object__DestroyImmediate_68077844(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_33:
    sub_1B00F28(bannerLoopCtr, method);
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
      UnityEngine_Object__DestroyImmediate_68077844(v9, 0LL);
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
      UnityEngine_Object__DestroyImmediate_68077844(v11, 0LL);
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

  if ( (byte_48DF11C & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B00CCC(&StringLiteral_10367/*"PURCHASE_ERROR"*/, v5);
    sub_1B00CCC(&StringLiteral_10366/*"PURCHASE_CANCEL"*/, v6);
    sub_1B00CCC(&StringLiteral_10368/*"PURCHASE_OK"*/, v7);
    byte_48DF11C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B00F28(Instance, v9);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10366/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10367/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v10 = &StringLiteral_10368/*"PURCHASE_OK"*/;
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

  if ( (byte_48DF115 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B00CCC(&StringLiteral_10367/*"PURCHASE_ERROR"*/, v5);
    sub_1B00CCC(&StringLiteral_10366/*"PURCHASE_CANCEL"*/, v6);
    sub_1B00CCC(&StringLiteral_10368/*"PURCHASE_OK"*/, v7);
    byte_48DF115 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10366/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B00F28(Instance, v9);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10367/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10368/*"PURCHASE_OK"*/;
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

  if ( (byte_48DF113 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B00CCC(&StringLiteral_10367/*"PURCHASE_ERROR"*/, v5);
    sub_1B00CCC(&StringLiteral_10366/*"PURCHASE_CANCEL"*/, v6);
    sub_1B00CCC(&StringLiteral_10368/*"PURCHASE_OK"*/, v7);
    byte_48DF113 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10366/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B00F28(Instance, v9);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10367/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v10 = &StringLiteral_10368/*"PURCHASE_OK"*/;
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
  System_Action_o *_9__144_0; // x21
  Il2CppObject *v18; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_o *v22; // x20
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v24; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_48DF0EC & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl__exeFormation_b__144_1__, v4);
    sub_1B00CCC(&Method_SummonControl___c__exeFormation_b__144_0__, v5);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v6);
    byte_48DF0EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  _9__144_0 = v9->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = SummonControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v9->static_fields->__9;
    _9__144_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(_9__144_0, v18, Method_SummonControl___c__exeFormation_b__144_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = _9__144_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v20, v21);
  }
  if ( !v16 )
    sub_1B00F28(Instance, v8);
  v24.fields.m_YMin = m_YMin + 33.0;
  v23.fields.y = y + 33.0;
  v23.fields.x = x;
  v24.fields.m_XMin = m_XMin;
  v24.fields.m_Width = m_Width;
  v24.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v16, v23, 0.0, v24, _9__144_0, 0LL);
  v22 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__144_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v22, 0LL);
}


void __fastcall SummonControl__exeSummon(
        SummonControl_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v8; // x1
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_48DF10D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3422/*"CHECK_SERVANT_FRAME"*/, paramData);
    byte_48DF10D = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.gachaParamData, (int32_t)paramData, v5, v6);
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
      sub_1B00F28(closeBtn, v8);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3422/*"CHECK_SERVANT_FRAME"*/, 0LL);
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

  if ( (byte_48DF152 & 1) == 0 )
  {
    sub_1B00CCC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl__executeEnhanceTresureDevice_b__265_0__, v4);
    byte_48DF152 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v7 = (CommonUI_o *)Instance;
  v8 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B00F18(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__265_0__,
    0LL);
  if ( !v7 )
    sub_1B00F28(v9, v10);
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
  struct SummonInfoControl_o *summonInfoCtr; // x9
  _BOOL4 isFree; // w9
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x3
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t friendPoint; // w20
  int32_t gachaResourceNum; // w26
  SummonConfirmDlgComponent_o *v16; // x22
  int32_t needPoint; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v18; // x23
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x24
  const MethodInfo *v21; // x6

  v2 = this;
  if ( (byte_48DF12D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&Method_SummonControl_autoSellSettingChange2__, v4);
    this = (SummonControl_o *)sub_1B00CCC(&Method_SummonControl_friendSummonConfirmResult__, v5);
    byte_48DF12D = 1;
  }
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  isFree = summonInfoCtr->fields.isFree;
  v2->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v2->fields.confirmDlgInfo;
    v9 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v10);
    v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v9, v11, v12);
      return;
    }
LABEL_10:
    sub_1B00F28(this, method);
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_10;
  friendPoint = v2->fields.friendPoint;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  v16 = v2->fields.confirmDlgInfo;
  needPoint = v2->fields.needPoint;
  v18 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)v2,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v19);
  v20 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v16 )
    goto LABEL_10;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v16,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v18,
    v20,
    v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_48DF12E & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_friendSummonConfirmResult__, res);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v5);
    byte_48DF12E = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close_31906084(confirmDlgInfo, 0LL, method);
  v7 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B00CE4(Method_SummonControl_friendSummonConfirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
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
    sub_1B00F28(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_48DF0F7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId);
    byte_48DF0F7 = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1B00F28(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  int32_t v5; // w20

  if ( (byte_48DF155 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    byte_48DF155 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_9:
    sub_1B00F28(vaildGachaList, method);
  v5 = 0;
  while ( v5 < vaildGachaList->fields._size )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    vaildGachaList,
                                                                    v5,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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

  if ( (byte_48DF0F6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF0F6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B00F28(Instance, v7);
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
  __int64 v3; // x1
  ShopEntity_o *result; // x0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  ServantStatusBattleListViewItem_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48DF0E7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    byte_48DF0E7 = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1B00F28(0LL, v6);
    p_stoneFragmentsShopEntity = (ServantStatusBattleListViewItem_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0LL);
    p_stoneFragmentsShopEntity->klass = (ServantStatusBattleListViewItem_c *)EntityOfFragmentsShop;
    sub_1B00C70(p_stoneFragmentsShopEntity, (int32_t)EntityOfFragmentsShop, v9, v10);
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

  if ( (byte_48DF0E6 & 1) == 0 )
  {
    sub_1B00CCC(&FSUtility_TypeInfo, method);
    byte_48DF0E6 = 1;
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
  if ( (byte_48DF14E & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId);
    this = (SummonControl_o *)sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_48DF14E = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
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
        sub_1B00F30(this, svtId);
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
    sub_1B00F28(this, svtId);
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
          sub_1B00F30(this, *(_QWORD *)&svtId);
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
    sub_1B00F28(this, svtId);
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
  if ( (byte_48DF142 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    this = (SummonControl_o *)sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_48DF142 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1B00F30(this, method);
      v11 = v10->m_Items[v8];
      if ( !v11 || !v7 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v7,
                                  v11->fields.objectId,
                                  (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1B00F28(this, method);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_48DF15E & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v5);
    byte_48DF15E = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1B00F28(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_48DF15D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&res);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v5);
    sub_1B00CCC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SummonControl_limitManaConfirmResult__, v8);
    sub_1B00CCC(&Method_SummonControl_showConfirmDlg__, v9);
    sub_1B00CCC(&StringLiteral_3493/*"CLICK_CANCEL"*/, v10);
    byte_48DF15D = 1;
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
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 60), 0LL) )
          goto LABEL_18;
        v13 = v12[44];
        v14 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v14 = BalanceConfig_TypeInfo;
        }
        if ( v13 >= v14->static_fields->UserItemMax )
        {
          v16 = this->fields.limitWarningDlgInfo;
          v17 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_21:
      sub_1B00F28(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3493/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_48DF135 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl__loadAssetsForSummon_b__228_0__, v4);
    sub_1B00CCC(&SummonRootComponent_TypeInfo, v5);
    byte_48DF135 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__228_0__, 0LL),
        !klass) )
  {
    sub_1B00F28(Instance, v7);
  }
  methodPtr_low = LOBYTE(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v9, 0LL);
  }
  else
  {
    sub_1B011E8(klass);
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

  if ( (byte_48DF104 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_onClickChangeBanner__, method);
    sub_1B00CCC(&StringLiteral_12476/*"SetBannerCenter"*/, v3);
    byte_48DF104 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_68062236(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12476/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B00F28(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_45525356(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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

  if ( (byte_48DF105 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonControl_onClickLeftChangeBanner__, method);
    sub_1B00CCC(&StringLiteral_12476/*"SetBannerCenter"*/, v3);
    byte_48DF105 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_68062236(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12476/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B00F28(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_45525356(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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
  System_Action_o *_9__143_0; // x22
  Il2CppObject *v24; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Action_o *v28; // x20
  UnityEngine_Rect_o v29; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_48DF0EB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl__openAfterSummonInfo_b__143_1__, v5);
    sub_1B00CCC(&Method_SummonControl___c__openAfterSummonInfo_b__143_0__, v6);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_13282/*"TUTORIAL_MESSAGE_SUMMON2"*/, v8);
    byte_48DF0EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13282/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
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
  _9__143_0 = v21->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SummonControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__143_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(_9__143_0, v24, Method_SummonControl___c__openAfterSummonInfo_b__143_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = _9__143_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v26, v27);
  }
  if ( !Instance )
    sub_1B00F28(v21, v19);
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
    _9__143_0,
    0LL);
  v28 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__143_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v28, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_48DF0EA & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3486/*"CLEAR_TUTORIAL"*/, method);
    byte_48DF0EA = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3486/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_1B00F28(tutorialArrowObj, method);
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
  int32_t v20; // w3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v22; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w21
  __int64 v28; // x21
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
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
  int32_t v44; // w3
  System_Collections_Generic_List_object__o *v45; // x22
  int32_t v46; // w21
  int32_t v47; // w22
  System_Action_o *v48; // x20

  if ( (byte_48DF0ED & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&System_Comparison_EventTutorialEntity__TypeInfo, v3);
    sub_1B00CCC(&EventTutorialEntity_TypeInfo, v4);
    sub_1B00CCC(&int___TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v10);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v11);
    sub_1B00CCC(&Method_SummonControl___c__openSvtEqInfo_b__145_1__, v12);
    sub_1B00CCC(&Method_SummonControl___c__DisplayClass145_0__openSvtEqInfo_b__0__, v13);
    sub_1B00CCC(&SummonControl___c__DisplayClass145_0_TypeInfo, v14);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v15);
    byte_48DF0ED = 1;
  }
  v16 = sub_1B00F18(SummonControl___c__DisplayClass145_0_TypeInfo);
  SummonControl___c__DisplayClass145_0___ctor((SummonControl___c__DisplayClass145_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_QWORD *)(v16 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v22 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v22, 0LL);
  *(_QWORD *)(v16 + 16) = EventTutorialEntity;
  v24 = (void **)(v16 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)EventTutorialEntity, v25, v26);
  Item = *(void **)(v16 + 16);
  if ( !Item )
    goto LABEL_11;
  v27 = 0;
  while ( v27 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v27,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v24;
    ++v27;
    if ( !*v24 )
      goto LABEL_11;
  }
  v28 = sub_1B00F18(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_11;
  *(_DWORD *)(v28 + 24) = 1;
  v29 = sub_1B00D74(int___TypeInfo, 1LL);
  *(_QWORD *)(v28 + 80) = v29;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 80), v29, v30, v31);
  v34 = *(_QWORD *)(v28 + 80);
  if ( !v34 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v34 + 24) )
    sub_1B00F30(Item, v18);
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
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * v37;
    *((_DWORD *)Item + 6) = v37 + 1;
    *(_QWORD *)(v38 + 32) = v28;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v38 + 32), v28, v32, v33);
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
    v40 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v41, Method_SummonControl___c__openSvtEqInfo_b__145_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__145_1 = (struct System_Comparison_EventTutorialEntity__o *)v40;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__145_1, (int32_t)v40, v43, v44);
  }
  if ( !v39 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_54277268(
    v39,
    v40,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v45 = (System_Collections_Generic_List_object__o *)*v24;
  if ( !*v24 )
LABEL_11:
    sub_1B00F28(Item, v18);
  v46 = v45->fields._size - 1;
  if ( v46 >= 0 )
  {
    while ( v45 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v45,
               v46,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
            (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v45 = (System_Collections_Generic_List_object__o *)*v24;
      if ( --v46 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v48 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)v16, Method_SummonControl___c__DisplayClass145_0__openSvtEqInfo_b__0__, 0LL);
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

  if ( (byte_48DF139 & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v5);
    sub_1B00CCC(&Method_SummonControl_callbackTutorialSet__, v6);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v7);
    byte_48DF139 = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v8,
                                               (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0LL);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B00F28(Request_object, method);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10885/*"REQUEST_OK"*/, 0LL);
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
        sub_1B00F28(summonInfoCtr, v4);
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
  UnityEngine_GameObject_o *summonBannerInfo; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t size; // w2
  int v13; // w9
  int32_t VaildPayType; // w0
  const MethodInfo *v15; // x1
  int32_t v16; // w20
  TerminalPramsManager_c *v17; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_48DF0F1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v5);
    byte_48DF0F1 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_21;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  this->fields.gachaSubEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.gachaSubEntity, 0, v7, v8);
  SummonControl__clearBannerList(this, v9);
  SummonControl__clearResultList(this, v10);
  summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonResultInfo;
  if ( !summonBannerInfo )
    goto LABEL_21;
  summonBannerInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(summonBannerInfo, 0, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
  {
    size = vaildGachaList->fields._size;
    v13 = vaildGachaList->fields._version + 1;
    vaildGachaList->fields._size = 0;
    vaildGachaList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, size, 0LL);
  }
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B00F28(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v16 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF172 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v15);
    byte_48DF172 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_SummonType_k__BackingField = v16;
  SummonControl__releaseBannerData(this, v15);
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
  int32_t monitor; // w21
  int v11; // w22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  SummonControl_o *v17; // x0
  int32_t FriendPointIndex; // w0
  const MethodInfo *v19; // x2
  Il2CppObject *Entity; // x0

  if ( (byte_48DF154 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48DF154 = 1;
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
           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !Item )
LABEL_25:
    sub_1B00F28(Item, method);
  if ( *((_DWORD *)Item + 13) != 3 )
  {
    Item = this->fields.vaildGachaList;
    if ( Item )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               this->fields.currentIdx,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( Item )
      {
        v9 = *((_DWORD *)Item + 4);
        Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Item )
        {
          Item = DataManager__GetMasterData_object_(
                   (DataManager_o *)Item,
                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( Item )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                       v9,
                       (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Entity )
            {
              monitor = (int32_t)Entity[4].monitor;
              goto LABEL_10;
            }
LABEL_9:
            monitor = 0;
LABEL_10:
            v11 = 0;
            goto LABEL_11;
          }
        }
      }
    }
    goto LABEL_25;
  }
  v9 = 0;
  monitor = 0;
  v11 = 1;
LABEL_11:
  if ( !SummonControl__resetSummonVaildData(this, method) || SummonControl__checkMaxDrawNum(this, v12) )
  {
    SummonControl__deleteBannerList(this, v12);
    SummonControl__checkValidGachaList(this, v13);
    SummonControl__createSummonInfo(this, v14);
    v17 = this;
    if ( !v11 )
    {
      FriendPointIndex = SummonControl__searchExtraGroupIdIndex(this, monitor, v9, v16);
      if ( FriendPointIndex != -1 )
      {
LABEL_17:
        SummonControl__setDispRePosition(this, FriendPointIndex, v19);
        return;
      }
      v17 = this;
    }
    FriendPointIndex = SummonControl__getFriendPointIndex(v17, v15);
    if ( FriendPointIndex )
      goto LABEL_17;
  }
}


void __fastcall SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  System_String_o *assetPath; // x20
  ServantStatusBattleListViewItem_o *p_bannerAssetData; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48DF0F0 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    byte_48DF0F0 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_1B00C70(p_bannerAssetData, 0, v5, v6);
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

  if ( (byte_48DF136 & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_GachaDrawRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonControl_callbackGachaDraw__, v7);
    sub_1B00CCC(&StringLiteral_173/*" : "*/, v8);
    sub_1B00CCC(&StringLiteral_1/*""*/, v9);
    byte_48DF136 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v11,
                                             (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
            sub_1B00F30(maskObject, method);
          v23 = System_Int32__ToString(v22, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_60337008(
                                                     v20,
                                                     v23,
                                                     (System_String_o *)StringLiteral_173/*" : "*/,
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v18) )
LABEL_22:
    sub_1B00F28(maskObject, method);
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

  if ( (byte_48DF153 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&BgmManager_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1B00CCC(&SoundManager_TypeInfo, v10);
    byte_48DF153 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v14 )
    goto LABEL_27;
  CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0LL, 36, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_35990020((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
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
    sub_1B00F28(Instance, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1B00F28(0LL, v19);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v21.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v20);
}


void __fastcall SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v4, v5);
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

  if ( (byte_48DF14D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl__resetResultList_b__260_0__, v5);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v6);
    byte_48DF14D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__260_0__, 0LL);
  if ( !v11 )
LABEL_13:
    sub_1B00F28(Instance, v8);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  SummonControl__setUserResourceDisp(this, method);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1B00F28(0LL, v3);
  SummonInfoControl__SetSummonDispInfo(summonInfoCtr, 0LL);
}


bool __fastcall SummonControl__resetSummonVaildData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 gachaMst; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct GachaEntity_array *useGachaData; // x8
  __int64 v7; // x19
  __int64 v8; // x9
  ServantStatusBattleListViewItem_o *p_useGachaData; // x20
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
  p_useGachaData = (ServantStatusBattleListViewItem_o *)&this->fields.useGachaData;
  if ( (_DWORD)v8 == *(_DWORD *)(gachaMst + 24) )
  {
    if ( (int)v8 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)v8 || (v11 = v10, v10 >= *(_DWORD *)(v7 + 24)) )
          sub_1B00F30(gachaMst, method);
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
      sub_1B00F28(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (ServantStatusBattleListViewItem_c *)v7;
    sub_1B00C70(p_useGachaData, v7, v4, v5);
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

  if ( (byte_48DF0FB & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObjectList_GameObject___, searchTarget);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    byte_48DF0FB = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_2D45AE4 *)Method_AssetData_GetObjectList_GameObject___);
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
        sub_1B00F30(bannerAssetData, searchTarget);
      v11 = (char *)&v9[2 * v10];
      v12 = (UnityEngine_GameObject_o *)*((_QWORD *)v11 + 4);
      if ( !v12 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v11 + 4),
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1B00F28(bannerAssetData, searchTarget);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *vaildGachaList; // x0
  int32_t v12; // w22
  int32_t v13; // w23
  Il2CppObject *Entity; // x0
  int monitor; // w8
  int klass; // w8

  if ( (byte_48DF156 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, *(_QWORD *)&extraGroupId);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_48DF156 = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_18:
    sub_1B00F28(vaildGachaList, *(_QWORD *)&extraGroupId);
  v12 = 0;
  while ( v12 < *((_DWORD *)vaildGachaList + 6) )
  {
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v12,
                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_18;
    if ( *((_DWORD *)vaildGachaList + 13) == 3 )
      break;
    vaildGachaList = this->fields.vaildGachaList;
    if ( !vaildGachaList )
      goto LABEL_18;
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v12,
                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_18;
    v13 = *((_DWORD *)vaildGachaList + 4);
    vaildGachaList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !vaildGachaList )
      goto LABEL_18;
    vaildGachaList = DataManager__GetMasterData_object_(
                       (DataManager_o *)vaildGachaList,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !vaildGachaList )
      goto LABEL_18;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)vaildGachaList,
               v13,
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    if ( !Entity )
      return -1;
    monitor = (int)Entity[4].monitor;
    if ( monitor && monitor == extraGroupId )
      return v12;
    klass = (int)Entity[1].klass;
    if ( klass )
    {
      if ( klass == gachaId )
        return v12;
    }
    vaildGachaList = this->fields.vaildGachaList;
    ++v12;
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
    sub_1B00F28(indexPanel, method);
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
    sub_1B00F30(indexPanel, method);
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
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v14; // x22
  SummonInfoControl_o *v15; // x20
  System_Action_o *v16; // x21

  if ( (byte_48DF106 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&SummonInfoControl_ClickDelegate_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    sub_1B00CCC(&Method_SummonControl__setChangeSummonInfo_b__175_0__, v5);
    sub_1B00CCC(&Method_SummonControl_exeSummon__, v6);
    byte_48DF106 = 1;
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
           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v9, v10);
  SummonControl__setResourceInfo(this, v11);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v14 = (SummonInfoControl_ClickDelegate_o *)sub_1B00F18(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v14, 0LL),
        v15 = this->fields.summonInfoCtr,
        v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__175_0__, 0LL),
        !v15) )
  {
LABEL_8:
    sub_1B00F28(maskObject, method);
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
  if ( (byte_48DF10B & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B00CCC(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                *(_QWORD *)&currentIdx);
    byte_48DF10B = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_1B00F28(this, *(_QWORD *)&currentIdx);
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
    sub_1B00F28(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1B00F28(0LL, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  int32_t GachaIdFromSelectedBannerEntity; // w0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_object__o *bannerInfoList; // x8
  int size; // w22
  int v8; // w20
  int32_t v9; // w21
  Il2CppObject *Item; // x0
  __int64 v11; // x1
  _DWORD *monitor; // x8
  SummonControl_o *v13; // x0
  int32_t klass; // w1

  v2 = this;
  if ( (byte_48DF109 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method);
    this = (SummonControl_o *)sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v3);
    byte_48DF109 = 1;
  }
  GachaIdFromSelectedBannerEntity = SummonControl__GetGachaIdFromSelectedBannerEntity(this, method);
  bannerInfoList = (System_Collections_Generic_List_object__o *)v2->fields.bannerInfoList;
  if ( v2->fields.summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_16;
  }
  else if ( bannerInfoList )
  {
    size = bannerInfoList->fields._size;
    if ( size >= 1 )
    {
      v8 = GachaIdFromSelectedBannerEntity;
      v9 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 bannerInfoList,
                 v9,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !Item )
LABEL_14:
          sub_1B00F28(Item, v11);
        monitor = Item[5].monitor;
        if ( !monitor )
        {
          klass = 1;
          goto LABEL_20;
        }
        if ( monitor[13] == v2->fields.summonType && (v8 < 1 || monitor[4] == v8) )
          break;
        if ( size == ++v9 )
          goto LABEL_16;
        bannerInfoList = (System_Collections_Generic_List_object__o *)v2->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_14;
      }
      klass = (int32_t)Item[6].klass;
LABEL_20:
      v13 = v2;
      goto LABEL_21;
    }
LABEL_16:
    v13 = v2;
    klass = 0;
LABEL_21:
    SummonControl__setDispRePosition(v13, klass, v5);
  }
}


void __fastcall SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  Il2CppObject *Item; // x0
  int32_t v7; // w2
  int32_t v8; // w3
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

  if ( (byte_48DF107 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    sub_1B00CCC(&SummonControl_TypeInfo, v4);
    byte_48DF107 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v7, v8);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v11 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v12 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v14 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v15 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B00F28(vaildGachaList, method);
  }
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_48DF14B & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_48DF14B = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0LL),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B00F28(summonResultInfo, method);
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

  if ( (byte_48DF108 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx);
    byte_48DF108 = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__47552792(
                                                sliderGrid,
                                                (const MethodInfo_2D59918 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    sub_1B00F28(sliderGrid, *(_QWORD *)&idx);
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
  int32_t v23; // w3
  UILabel_o *summonHelpLabel; // x21
  __int64 v25; // x1
  TerminalPramsManager_c *v26; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x1
  __int64 v31; // x0
  __int64 v32; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct GachaEntity_array *ListValidData; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v45; // x20
  AssetLoader_LoadEndDataHandler_o *v46; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DF0EE & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v5);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B00CCC(&Method_SummonControl_LoadBannerEnd__, v10);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v11);
    sub_1B00CCC(&StringLiteral_12147/*"SUMMON_HELP_MESSAGE"*/, v12);
    sub_1B00CCC(&StringLiteral_12856/*"SummonBanners/DownloadSummonBanner"*/, v13);
    sub_1B00CCC(&StringLiteral_6293/*"FAIL_LOAD"*/, v14);
    sub_1B00CCC(&StringLiteral_20055/*"img_line_summon"*/, v15);
    sub_1B00CCC(&StringLiteral_19977/*"img_bg_banner"*/, v16);
    byte_48DF0EE = 1;
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
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 36, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_35990020((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  this->fields.isDoneTutorial = 1;
  v21 = StringLiteral_12856/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_12856/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.assetPath, v21, v22, v23);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_48DF171 )
  {
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v25);
    byte_48DF171 = 1;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v28, v29);
  SummonControl__setUserResourceDisp(this, v30);
  v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1B52BA8(v31);
  v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1B52BA8(v32);
  Time = **(UnityEngine_Transform_o ***)(v32 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.gachaMst, (int32_t)MasterData_object, v34, v35);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.useGachaData, (int32_t)ListValidData, v37, v38);
  SummonControl__checkValidGachaList(this, v39);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.vaildGachaList, 0, v40, v41);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20055/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_19977/*"img_bg_banner"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6293/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_45:
    sub_1B00F28(Time, v18);
  }
  v45 = this->fields.assetPath;
  v46 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v46, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v45, v46, 1, 0LL);
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
  System_Action_o *_9__252_0; // x21
  Il2CppObject *v15; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_48DF147 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v5);
    sub_1B00CCC(&Method_SummonControl___c__setSummonResultList_b__252_0__, v6);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_9197/*"NO_EXIST"*/, v8);
    sub_1B00CCC(&StringLiteral_11946/*"SHOW_TALK"*/, v9);
    byte_48DF147 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_36489460(107, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_36489460(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v10) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (CommonUI_o *)Instance;
      v13 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v13 = SummonControl___c_TypeInfo;
      }
      _9__252_0 = v13->static_fields->__9__252_0;
      if ( !_9__252_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = SummonControl___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__252_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(_9__252_0, v15, Method_SummonControl___c__setSummonResultList_b__252_0__, 0LL);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__252_0 = _9__252_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__252_0, (int32_t)_9__252_0, v17, v18);
      }
      if ( !v12 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_29962012(v12, 2, 108, _9__252_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11946/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9197/*"NO_EXIST"*/, 0LL);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1B00F28(Instance, v10);
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
  if ( (byte_48DF0E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__, v7);
    byte_48DF0E9 = 1;
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
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
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
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
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
    sub_1B00F28(bannerInfoList, isEnable);
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
  int32_t v12; // w3
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

  if ( (byte_48DF0F3 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_TblUserMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&int_TypeInfo, v6);
    sub_1B00CCC(&Method_SummonControl__setUserResourceDisp_b__151_0__, v7);
    sub_1B00CCC(&StringLiteral_24606/*"{0:N0}"*/, v8);
    byte_48DF0F3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v11, v12);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v15, v16, v17);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24606/*"{0:N0}"*/, v20, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo);
  System_Action_int____ctor(v22, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__151_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v22, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_TblUserMaster___);
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
  Master_object = System_String__Format((System_String_o *)StringLiteral_24606/*"{0:N0}"*/, v27, 0LL);
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
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v30, v31, v32);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24606/*"{0:N0}"*/, v33, 0LL);
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
    sub_1B00F28(Master_object, v14);
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
  int32_t v16; // w3
  System_Action_o *v17; // x21

  if ( (byte_48DF129 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B00CCC(&Method_SummonControl__showConfirmDlg_b__211_0__, v8);
    byte_48DF129 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v14 = (BonusSelectSummonAssetManager_o *)sub_1B00F18(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v14, 0LL);
        this->fields.bonusSelectAssetManager = v14;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v14, v15, v16);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v17 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__211_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v17, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B00F28(Master_object, v10);
  }
  SummonControl__showConfirmDlg_31937916(this, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_31937916(
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
  int32_t needStone; // w28
  int32_t haveStone; // w23
  int32_t haveChargeStone; // w22
  int v26; // w29
  int v27; // w24
  struct GachaRqParamData_o *v28; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v30; // x24
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  System_Int32_array *ScriptIntArray; // x24
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  struct SummonInfoControl_o *v36; // x8
  const MethodInfo *v37; // x1
  struct SummonInfoControl_o *v38; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v40; // x9
  struct GachaRqParamData_o *v41; // x8
  GachaDetailEntity_o *v42; // x22
  SummonConfirmDlgComponent_CallbackFunc_o *v43; // x20
  const MethodInfo *v44; // x3
  SummonConfirmDlgComponent_CallbackFunc_o *v45; // x0
  const MethodInfo *v46; // x3
  System_Int32_array *v47; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v48; // x0
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  struct GachaRqParamData_o *v51; // x8
  int32_t v52; // w21
  struct GachaRqParamData_o *v53; // x8
  Il2CppObject *v54; // x0
  Il2CppObject *v55; // x22
  SummonConfirmDlgComponent_o *v56; // x22
  const MethodInfo *v57; // x6
  int32_t v58; // w26
  int32_t v59; // w27
  int32_t v60; // w28
  struct GachaRqParamData_o *v61; // x8
  GachaDetailEntity_o *v62; // x24
  struct GachaRqParamData_o *v63; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  System_Int32_array *v67; // x25
  int32_t ScriptInt; // w0
  const MethodInfo *v69; // x3
  SummonControl_o *v70; // x0
  const MethodInfo *v71; // x2
  int32_t v72; // w21
  int afterChargeStoneNum; // w26
  SummonConfirmDlgComponent_o *v74; // x24
  struct SummonInfoControl_o *v75; // x9
  struct GachaRqParamData_o *v76; // x8
  struct GachaRqParamData_o *v77; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v79; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v81; // x21
  struct SummonInfoControl_o *v82; // x10
  struct GachaRqParamData_o *v83; // x9
  SummonControl_o *v84; // x8
  System_String_o *v85; // x27
  int32_t v86; // w25
  int32_t v87; // w28
  int32_t v88; // w29
  SummonControl_o *v89; // x8
  int v90; // w25
  struct PlayMakerFSM_o *summonCloseAt; // x28
  struct GachaRqParamData_o *v92; // x8
  int32_t gachaId; // w27
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  struct SummonInfoControl_o *summonInfoCtr; // x9
  SummonControl_o *v96; // x8
  int32_t v97; // w26
  int32_t haveFreeStone; // w27
  SummonControl_o *v99; // x8
  int v100; // w24
  int v101; // w29
  struct GachaRqParamData_o *v102; // x8
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v104; // x8
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-D0h]
  const MethodInfo *v106; // [xsp+60h] [xbp-90h]
  System_String_o *title; // [xsp+68h] [xbp-88h]
  int32_t num; // [xsp+70h] [xbp-80h]
  int32_t numa; // [xsp+70h] [xbp-80h]
  int32_t v110; // [xsp+74h] [xbp-7Ch]
  int32_t payGachaPrice; // [xsp+74h] [xbp-7Ch]
  _BOOL4 v112; // [xsp+78h] [xbp-78h]
  System_String_o *m_CancellationTokenSource; // [xsp+78h] [xbp-78h]
  int v114; // [xsp+80h] [xbp-70h]
  int32_t v115; // [xsp+80h] [xbp-70h]
  int32_t v116; // [xsp+84h] [xbp-6Ch]
  int32_t v117; // [xsp+84h] [xbp-6Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v118; // [xsp+88h] [xbp-68h]
  bool HasFlag; // [xsp+88h] [xbp-68h]

  v4 = this;
  if ( (byte_48DF12A & 1) == 0 )
  {
    sub_1B00CCC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B00CCC(&Method_SummonControl_ConfirmMessageOpen__, v14);
    sub_1B00CCC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15);
    sub_1B00CCC(&Method_SummonControl_confirmResult__, v16);
    this = (SummonControl_o *)sub_1B00CCC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    byte_48DF12A = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_111;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_111;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v20 = v4->fields.gachaParamData;
  if ( !v20 )
    goto LABEL_111;
  if ( !this )
    goto LABEL_111;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)this,
                         v20->fields.gachaId,
                         0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_111;
  v22 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_111;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v22[24], v22[44], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v4->fields.needStone;
      haveStone = v4->fields.haveStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v26 = v4->fields.haveFreeStone - needStone;
      if ( v26 < 0 )
        v27 = v4->fields.haveFreeStone - needStone;
      else
        v27 = 0;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v28 = v4->fields.gachaParamData;
      if ( !v28 || !this )
        goto LABEL_111;
      v114 = v27;
      v116 = haveStone;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v28->fields.gachaId, 0LL);
      v30 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v31);
      if ( GachaDetailEntity )
      {
        v118 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v118,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v32);
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
            v118 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v118,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v34);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v35);
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
        v118 = v30;
      }
      v77 = v4->fields.gachaParamData;
      if ( !v77 )
        goto LABEL_111;
      gachaTime = v77->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_95;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
      v79 = v4->fields.gachaParamData;
      if ( !v79 || !this )
        goto LABEL_111;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v79->fields.gachaId,
                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity && (v81 = Entity, LODWORD(Entity[4].monitor)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_111;
        if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v81[4].monitor, 0LL) == 9 )
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
                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( this )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v96 = this;
            this = (SummonControl_o *)v4->fields.vaildGachaList;
            if ( this )
            {
              m_CancellationTokenSource = (System_String_o *)v96->fields.m_CancellationTokenSource;
              v97 = v4->fields.haveStone;
              haveFreeStone = v4->fields.haveFreeStone;
              numa = v4->fields.haveChargeStone;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v4->fields.currentIdx,
                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
              if ( this )
              {
                v99 = this;
                this = (SummonControl_o *)v4->fields.vaildGachaList;
                if ( this )
                {
                  v100 = v26;
                  v101 = BYTE1(v99->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
                  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v4->fields.currentIdx,
                                              (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
                  if ( this )
                  {
                    v102 = v4->fields.gachaParamData;
                    if ( v102 )
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
                          haveFreeStone,
                          numa,
                          v116 - needStone,
                          v100 & ~(v100 >> 31),
                          v114 + haveChargeStone,
                          v118,
                          0,
                          v101 != 0,
                          (int64_t)this->fields.fsm,
                          0,
                          0LL,
                          0LL,
                          ListGachaExtraGift,
                          v102->fields.shopIdIdx,
                          v106);
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
      v36 = v4->fields.summonInfoCtr;
      if ( !v36 )
        goto LABEL_111;
      v4->fields.isDailyGacha = v36->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v22[60], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v37) )
        SummonControl__friendPointSummonConfirm(v4, v37);
      return;
    case 5:
      v38 = v4->fields.summonInfoCtr;
      if ( !v38 )
        goto LABEL_111;
      ticketNum = v38->fields.ticketNum;
      v40 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v40 )
        goto LABEL_111;
      v4->fields.afterTicketNum = ticketNum - v40->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v41 = v4->fields.gachaParamData;
      if ( !v41 || !this )
        goto LABEL_111;
      v42 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v41->fields.gachaId, 0LL);
      v43 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v44);
      if ( v42 )
      {
        v45 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v45,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v46);
        v47 = GachaDetailEntity__GetScriptIntArray(v42, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v42, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v47 )
        {
          if ( (_DWORD)this == 1 )
          {
            v48 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v48,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v49);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v47, v50);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_105;
            }
          }
        }
      }
      v51 = v4->fields.gachaParamData;
      if ( !v51 )
        goto LABEL_111;
      v52 = v51->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
      v53 = v4->fields.gachaParamData;
      if ( !v53 || !this )
        goto LABEL_111;
      v54 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v53->fields.gachaId,
              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v54 )
        goto LABEL_47;
      v55 = v54;
      if ( !LODWORD(v54[4].monitor) )
        goto LABEL_47;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_111;
      if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v55[4].monitor, 0LL) == 9 )
        ++v52;
LABEL_47:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      v56 = v4->fields.confirmDlgInfo;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this || !v56 )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v56,
        (System_String_o *)this->fields.m_CancellationTokenSource,
        v52,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v43,
        v57);
      return;
    case 7:
      v58 = v4->fields.haveStone;
      v59 = v4->fields.needStone;
      v60 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v61 = v4->fields.gachaParamData;
      if ( !v61 || !this )
        goto LABEL_111;
      v62 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v61->fields.gachaId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
      v63 = v4->fields.gachaParamData;
      if ( !v63 )
        goto LABEL_111;
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v63->fields.gachaId,
                                  (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_111;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v65);
      if ( v62 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v66);
        v67 = GachaDetailEntity__GetScriptIntArray(v62, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v62, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v67 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B00F18(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v69);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v70, v67, v71) )
              goto LABEL_105;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_111;
      v72 = v58 - v59;
      afterChargeStoneNum = (v60 - v59) & ~((v60 - v59) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v74 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v75 = v4->fields.summonInfoCtr;
        if ( v75 )
        {
          v76 = v4->fields.gachaParamData;
          if ( v76 )
          {
            if ( v74 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v4->fields.confirmDlgInfo,
                (int32_t)this,
                v75->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v72,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                ListGachaExtraGift,
                v76->fields.shopIdIdx,
                isAppendSummon);
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
                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      v82 = v4->fields.summonInfoCtr;
      if ( !v82 )
        goto LABEL_111;
      v83 = v4->fields.gachaParamData;
      if ( !v83 )
        goto LABEL_111;
      v84 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      v85 = (System_String_o *)v84->fields.m_CancellationTokenSource;
      v86 = v82->fields.payGachaPrice;
      v87 = v83->fields.gachaTime;
      v115 = v4->fields.haveChargeStone;
      v117 = v4->fields.haveStone;
      v88 = v4->fields.haveFreeStone;
      v112 = v83->fields.isAppendSummon;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      v89 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      num = v87;
      v110 = v86;
      v90 = BYTE1(v89->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      summonCloseAt = this->fields.fsm;
      title = v85;
      if ( HasFlag )
      {
        v92 = v4->fields.gachaParamData;
        if ( !v92 )
          goto LABEL_111;
        gachaId = v92->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B00F18(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v104 = v4->fields.gachaParamData;
      if ( !v104 || !v74 )
LABEL_111:
        sub_1B00F28(this, beforeDetailFlag);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v74,
        title,
        7,
        v110,
        num,
        v117,
        v88,
        v115,
        v72,
        v88,
        afterChargeStoneNum,
        callback,
        v112,
        v90 != 0,
        (int64_t)summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        ListGachaExtraGift,
        v104->fields.shopIdIdx,
        v106);
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
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v8; // x0
  System_Collections_Generic_List_object__o *EventTutorialEntity; // x0
  System_Collections_Generic_List_object__o *v10; // x20
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  int32_t monitor; // w21
  int32_t v14; // w21
  System_Action_o *v15; // x21

  if ( (byte_48DF103 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v4);
    sub_1B00CCC(&Method_SummonControl_OnClickHelpClose__, v5);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v6);
    byte_48DF103 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v8 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = (System_Collections_Generic_List_object__o *)EventTutorialMaster__GetEventTutorialEntity(
                                                                         0,
                                                                         34,
                                                                         v8,
                                                                         0LL);
    if ( EventTutorialEntity )
    {
      v10 = EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 EventTutorialEntity,
                 0,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( Item )
        {
          if ( LODWORD(Item[1].monitor) == 1 )
            return;
          Item = System_Collections_Generic_List_object___get_Item(
                   v10,
                   0,
                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
          if ( Item )
          {
            monitor = (int32_t)Item[1].monitor;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            if ( TutorialFlag__GetGachaFlg(monitor, 0LL) )
              return;
            Item = System_Collections_Generic_List_object___get_Item(
                     v10,
                     0,
                     (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( Item )
            {
              v14 = (int32_t)Item[1].monitor;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              TutorialFlag__SetGachaFlg(v14, 0LL);
              v15 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
              EventTutorialMaster__TutorialChainWithoutCheckStart(
                (System_Collections_Generic_List_EventTutorialEntity__o *)v10,
                v15,
                0LL);
              return;
            }
          }
        }
        sub_1B00F28(Item, v12);
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
  Il2CppObject *_36489460; // x0
  const MethodInfo *v13; // x1
  CommonUI_o *v14; // x20
  SummonControl___c_c *v15; // x8
  System_Action_o *_9__247_0; // x21
  Il2CppObject *v17; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
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

  if ( (byte_48DF143 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B00CCC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SummonControl_DialogCallBack__, v8);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v9);
    sub_1B00CCC(&Method_SummonControl___c__showServantDialog_b__247_0__, v10);
    sub_1B00CCC(&SummonControl___c_TypeInfo, v11);
    byte_48DF143 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _36489460 = (Il2CppObject *)TutorialFlag__Get_36489460(107, 0LL);
  if ( ((unsigned __int8)_36489460 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _36489460 = (Il2CppObject *)TutorialFlag__Get_36489460(108, 0LL);
    if ( ((unsigned __int8)_36489460 & 1) == 0 )
    {
      _36489460 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v13);
      if ( ((unsigned __int8)_36489460 & 1) != 0 )
      {
        _36489460 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (CommonUI_o *)_36489460;
        v15 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v15 = SummonControl___c_TypeInfo;
        }
        _9__247_0 = v15->static_fields->__9__247_0;
        if ( !_9__247_0 )
        {
          if ( !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = SummonControl___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v15->static_fields->__9;
          _9__247_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
          System_Action___ctor(_9__247_0, v17, Method_SummonControl___c__showServantDialog_b__247_0__, 0LL);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__247_0 = _9__247_0;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__247_0, (int32_t)_9__247_0, v19, v20);
        }
        if ( !v14 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_29962012(v14, 2, 108, _9__247_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
LABEL_35:
    sub_1B00F30(_36489460, v13);
  v23 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v23 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v23->fields.type, 0LL) )
  {
    _36489460 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_36489460 )
      goto LABEL_34;
    _36489460 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_36489460,
                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v24 = this->fields.gachaResInfoList;
    if ( !v24 )
      goto LABEL_34;
    v25 = this->fields.getSvtIdx;
    if ( (unsigned int)v25 < v24->max_length )
    {
      v26 = v24->m_Items[v25];
      if ( v26 )
      {
        if ( _36489460 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_36489460,
                     v26->fields.userSvtId,
                     (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v29 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v29, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_29949432(
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
      sub_1B00F28(_36489460, v13);
    }
    goto LABEL_35;
  }
  _36489460 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v34 = (CommonUI_o *)_36489460;
  v35 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v35, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v34 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_29946108(v34, 6, userSvtId, v35, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_48DF11B & 1) == 0 )
  {
    sub_1B00CCC(&StonePurchaseMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&Method_SummonControl_endPurchaseStone__, v4);
    byte_48DF11B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B00F18(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v6, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_1B00F28(v7, v8);
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

  if ( (byte_48DF13C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl__showSummonEffect_b__235_0__, v5);
    byte_48DF13C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__235_0__, 0LL);
  if ( !v8 )
    sub_1B00F28(v11, v12);
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

  if ( (byte_48DF146 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl__showSummonResultInfo_b__251_0__, v5);
    byte_48DF146 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_24;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 0, 0LL, 36, 0LL);
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
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0LL, 36, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_24;
    TitleInfoControl__setBackBtnSprite_35990020(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v10 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
      v12 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__251_0__, 0LL);
      if ( !Instance )
        goto LABEL_24;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v12, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v7);
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
    sub_1B00F28(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
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

  if ( (byte_48DF114 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl_endPurchaseSvtEqFrame__, v5);
    sub_1B00CCC(&Method_SummonControl_resetStoneInfo__, v6);
    byte_48DF114 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1B00F18(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1B00F28(v10, v11);
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

  if ( (byte_48DF112 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonControl_endPurchaseSvtFrame__, v5);
    sub_1B00CCC(&Method_SummonControl_resetStoneInfo__, v6);
    byte_48DF112 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1B00F18(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1B00F28(v10, v11);
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
  int32_t v35; // w3
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v37; // x23
  System_Action_o *v38; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_48DF140 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B00CCC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B00CCC(&ServantAssetArgs_TypeInfo, v9);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_1B00CCC(&Method_SummonControl__showSvtTalk_b__242_0__, v13);
    sub_1B00CCC(&Method_SummonControl_close__, v14);
    sub_1B00CCC(&StringLiteral_3518/*"CLICK_OK"*/, v15);
    byte_48DF140 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_41;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B00F30(Instance, v17);
  v20 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v20 )
    goto LABEL_41;
  userSvtId = v20->fields.userSvtId;
  objectId = v20->fields.objectId;
  limitCount = v20->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v24 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v24,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
      || SvtType__IsCommandCode(v20->fields.type, 0LL) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3518/*"CLICK_OK"*/, 0LL);
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
    v26 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v24,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    v26 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_object )
LABEL_41:
    sub_1B00F28(Instance, v17);
  v27 = (int)Instance;
  v28 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v28 && (v29 = ServantVoiceEntity__GetSummonScriptId(v28, v27, 0LL)) != 0LL )
  {
    summonScriptId = v29;
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v32 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__242_0__, 0LL);
    if ( !v31 )
      goto LABEL_41;
    ScriptManager__PlayGacha_40130768(
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
      v33 = (ServantAssetArgs_o *)sub_1B00F18(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_41877248(v33, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v33;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.battleAssetArgs, (int32_t)v33, v34, v35);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v38 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v37 )
      goto LABEL_41;
    ScriptManager__PlayGacha_40130768(
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


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__169___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__169__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *v4; // x19
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  int mBannerSpringPanelRetryCount; // w8
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *spring_5__2; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v4 = this;
  if ( (byte_48DF1ED & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DF1ED = 1;
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
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL)) == 0LL)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0LL),
              !summonMBannerCenterChild) )
        {
LABEL_22:
          sub_1B00F28(this, method);
        }
        UICenterOnChild__CenterOn_45525356(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v4->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._spring_5__2, (int32_t)Component_object, v10, v11);
    v12 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B00C70(p__2__current, 0, v13, v14);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v4->fields._spring_5__2 = 0LL;
    v4->fields.__1__state = -1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._spring_5__2, 0, v2, v3);
    if ( !_4__this )
      goto LABEL_22;
    goto LABEL_9;
  }
  return 0;
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__169__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__169__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__169__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__169_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__244___ctor(
        SummonControl__WaitBattleChrLoad_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__244__MoveNext(
        SummonControl__WaitBattleChrLoad_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  PlayMakerFSM_o *fsm; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48DF1EE & 1) == 0 )
  {
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_3518/*"CLICK_OK"*/, v4);
    byte_48DF1EE = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields._wait_5__2 = v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)wait_5__2, v12, v13);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.battleAssetArgs, 0, v18, v19);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1B00F28(fsm, v11);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3518/*"CLICK_OK"*/, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__244__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__244__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_SummonControl__WaitBattleChrLoad_d__244_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__244__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__244__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__244_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DF1E8 & 1) == 0 )
  {
    sub_1B00CCC(&SummonControl___c_TypeInfo, v1);
    byte_48DF1E8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SummonControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)SummonControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___exeFormation_b__144_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0LL);
}


void __fastcall SummonControl___c___openAfterSummonInfo_b__143_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


int32_t __fastcall SummonControl___c___openSvtEqInfo_b__145_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B00F28(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__252_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__211_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_48DF1E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48DF1E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v3);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall SummonControl___c___showServantDialog_b__247_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__235_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__251_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c__DisplayClass145_0___ctor(
        SummonControl___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass145_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass145_0_o *this,
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

  if ( (byte_48DF1EA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v3);
    sub_1B00CCC(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_3486/*"CLEAR_TUTORIAL"*/, v7);
    byte_48DF1EA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
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
    sub_1B00F28(Request_object, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3486/*"CLEAR_TUTORIAL"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass263_0___ctor(
        SummonControl___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass263_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass263_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_48DF1EB & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass263_0_o *)sub_1B00CCC(&StringLiteral_5692/*"EXECUTE"*/, method);
    byte_48DF1EB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass263_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1B00F28(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5692/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass264_0___ctor(
        SummonControl___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass264_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass264_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_48DF1EC & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass264_0_o *)sub_1B00CCC(&StringLiteral_5692/*"EXECUTE"*/, method);
    byte_48DF1EC = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass264_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1B00F28(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5692/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}