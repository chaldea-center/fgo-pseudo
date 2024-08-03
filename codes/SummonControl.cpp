void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct SummonControl_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49F8D11 & 1) == 0 )
  {
    sub_1B640C8(&SummonControl_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3301/*"BonusSelectSummonSaveKey"*/, v4);
    byte_49F8D11 = 1;
  }
  static_fields = SummonControl_TypeInfo->static_fields;
  static_fields->FRIEND_POINT_SUMMON_ID = 1;
  v6 = StringLiteral_3301/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_3301/*"BonusSelectSummonSaveKey"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v6, v2, v3);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49F8D10 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_19616/*"gachaIds"*/, v8);
    sub_1B640C8(&StringLiteral_6812/*"FrequencyType"*/, v9);
    byte_49F8D10 = 1;
  }
  this->fields.TUTORIAL_SUMMON_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA3EE0;
  this->fields.TUTORIAL_SUMMON_ARROW_POS = (struct UnityEngine_Vector2_o)-4387913408675840000LL;
  this->fields.TUTORIAL_MENU_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA4240;
  this->fields.TUTORIAL_MENU_ARROW_POS = (struct UnityEngine_Vector2_o)0xC366000043E10000LL;
  this->fields.TUTORIAL_FORMATION_ARROW_RECT = (struct UnityEngine_Rect_o)xmmword_BA4000;
  this->fields.TUTORIAL_FORMATION_ARROW_POS = (struct UnityEngine_Vector2_o)0xC3200000C385C000LL;
  v10 = StringLiteral_19616/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19616/*"gachaIds"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.DETAIL_SCRIPT_IDS, v10, v2, v3);
  v11 = StringLiteral_6812/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6812/*"FrequencyType"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.DETAIL_SCRIPT_TYPE, v11, v12, v13);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.vaildGachaList, (int32_t)v16, v17, v18);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v19, v20);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v21, v22, v23);
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
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_o *name; // x1
  int8x16_t v17; // q0
  System_String_o *WebViewAddress_38174564; // x0
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t gachaGroupId; // w8
  int32_t pickupId; // w8
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  DataManager_o *v29; // x22
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct System_Int32_array *adjustIds; // x1
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v35; // x8

  if ( (byte_49F8C9F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaSubMaster___, data);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&VaildGachaInfo_TypeInfo, v11);
    byte_49F8C9F = 1;
  }
  v12 = sub_1B64314(VaildGachaInfo_TypeInfo, data, adjustData);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v12, 0LL);
  if ( !data || !v12 )
    goto LABEL_20;
  *(_DWORD *)(v12 + 16) = data->fields.id;
  name = data->fields.name;
  *(_QWORD *)(v12 + 24) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)name, v14, v15);
  *(_DWORD *)(v12 + 32) = data->fields.beforeGachaId;
  v17 = vuzp1q_s32(
          *(int32x4_t *)&data->fields.imageId,
          vextq_s8(*(int8x16_t *)&data->fields.imageId, *(int8x16_t *)&data->fields.imageId, 0xCuLL));
  *(int8x16_t *)(v12 + 36) = vextq_s8(v17, v17, 0xCuLL);
  *(_DWORD *)(v12 + 52) = data->fields.type;
  *(_DWORD *)(v12 + 60) = data->fields.ticketItemId;
  *(_BYTE *)(v12 + 64) = 1;
  *(_BYTE *)(v12 + 84) = data->fields.freeDrawFlag > 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress_38174564 = NetworkManager__getWebViewAddress_38174564(1, 0LL);
  v19 = System_String__Concat_61375396(WebViewAddress_38174564, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v12 + 88) = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 88), (int32_t)v19, v20, v21);
  gachaGroupId = data->fields.gachaGroupId;
  *(_DWORD *)(v12 + 96) = gachaGroupId;
  *(_BYTE *)(v12 + 100) = gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 68) = 0;
  *(_BYTE *)(v12 + 101) = pickupId > 0;
  v24 = sub_1B64170(int___TypeInfo, 0LL);
  *(_QWORD *)(v12 + 72) = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 72), v24, v25, v26);
  *(_OWORD *)(v12 + 120) = *(_OWORD *)&data->fields.openedAt;
  *(_DWORD *)(v12 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v29 = Instance;
      this->fields.gachaSubEntity = (struct GachaSubEntity_o *)Instance;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.gachaSubEntity, (int32_t)Instance, v27, v28);
      *(_DWORD *)(v12 + 80) = *((_DWORD *)&v29->fields.UnityEngine_Behaviour_Fields + 1);
      *(_DWORD *)(v12 + 40) = HIDWORD(v29->fields.m_CancellationTokenSource);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 72), (int32_t)adjustIds, v27, v28);
  }
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance
    || (v32 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v33 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v32) )
  {
LABEL_20:
    sub_1B64324(Instance);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v32 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Instance,
      (Il2CppObject *)v12,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = v32 + 8 * m_CancellationTokenSource_low;
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v35 + 32) = v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 32), v12, v27, v28);
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
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  SummonInfoDlgComponent_CallbackFunc_o *v13; // x23

  if ( (byte_49F8CDA & 1) == 0 )
  {
    sub_1B640C8(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaDetailMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl_beforeConfirmCautionResult__, v5);
    byte_49F8CDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = GachaDetailMaster__GetGachaDetailEntity(
                     (GachaDetailMaster_o *)Instance,
                     gachaParamData->fields.gachaId,
                     0LL)) == 0LL
    || (v10 = (System_String_o *)*((_QWORD *)Instance + 3),
        v11 = (System_String_o *)*((_QWORD *)Instance + 4),
        infoDlgInfo = this->fields.infoDlgInfo,
        v13 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B64314(SummonInfoDlgComponent_CallbackFunc_TypeInfo, v8, v9),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, v10, v11, v13, 0LL);
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
  if ( (byte_49F8D0A & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_3034/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, method);
    byte_49F8D0A = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3034/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(this);
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
  if ( (byte_49F8D09 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3441/*"CHECK_STONE"*/, method);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_3034/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/, v3);
    byte_49F8D09 = 1;
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
    sub_1B64324(this);
  }
  if ( HaveChargeStoneNum_k__BackingField >= gachaResourceNum )
    v8 = &StringLiteral_3441/*"CHECK_STONE"*/;
  else
    v8 = &StringLiteral_3034/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_DIALOG"*/;
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

  if ( (byte_49F8D0F & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, res);
    sub_1B640C8(&StringLiteral_6908/*"GO_BUY_STONE"*/, v5);
    byte_49F8D0F = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v7 = Method_SummonControl_BonusSelectCloseShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_BonusSelectCloseShotStoneDlg__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_SummonControl_BonusSelectCloseShotStoneDlg__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  if ( res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_6908/*"GO_BUY_STONE"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(confirmDlgInfo);
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
  int32_t haveChargeStone; // w21
  int32_t haveFreeStone; // w22
  SummonConfirmDlgComponent_CallbackFunc_o *v10; // x23
  const MethodInfo *v11; // x3
  PlayMakerFSM_o *fsm; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x5

  if ( (byte_49F8D0D & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res);
    sub_1B640C8(&Method_SummonControl_GoBuyStone__, v5);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v6);
    byte_49F8D0D = 1;
  }
  if ( res )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    haveChargeStone = this->fields.haveChargeStone;
    haveFreeStone = this->fields.haveFreeStone;
    v10 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        res,
                                                        method);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_GoBuyStone__,
      v11);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        confirmDlgInfo,
        v13,
        haveChargeStone,
        haveFreeStone,
        v10,
        v14);
      return;
    }
LABEL_8:
    sub_1B64324(fsm);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_8;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
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
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_49F8D0B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SummonControl__BonusSelectServantSelectDialog_b__293_0__, v8);
    byte_49F8D0B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v14 = (Il2CppObject *)sub_1B64314(BonusSelectSummonAssetManager_TypeInfo, v11, v12);
        System_Object___ctor(v14, 0LL);
        this->fields.bonusSelectAssetManager = (struct BonusSelectSummonAssetManager_o *)v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v14, v15, v16);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SummonControl__BonusSelectServantSelectDialog_b__293_0__,
        0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v17, v18);
        return;
      }
    }
LABEL_15:
    sub_1B64324(Master_object);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectSummonConfirmResult(
        SummonControl_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SummonControl_o *v5; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  struct SelectBonus_array *selectBonusDatas; // x1
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_49F8CCF & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, result);
    byte_49F8CCF = 1;
  }
  selectBonusData = 0LL;
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
      SummonControl__showConfirmDlg_32837472(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width = selectBonusDatas;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width,
        (int32_t)selectBonusDatas,
        (int32_t)v7,
        v8);
      goto LABEL_10;
    }
LABEL_14:
    sub_1B64324(this);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectcloseShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  System_String_o **v7; // x8

  if ( (byte_49F8D0C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3035/*"BONUS_SELECT_SERVANT_SELECT"*/, res);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v5);
    byte_49F8D0C = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(confirmDlgInfo);
  }
  v7 = (System_String_o **)&StringLiteral_3035/*"BONUS_SELECT_SERVANT_SELECT"*/;
  if ( !res )
    v7 = (System_String_o **)&StringLiteral_3511/*"CLICK_CANCEL"*/;
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
  Il2CppObject *Instance; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaSubEntity_o *OpenEntity; // x0
  struct GachaSubEntity_o *gachaSubEntity; // x25
  struct GachaSubEntity_o *v14; // x20
  Il2CppObject *v15; // x21
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x24

  if ( (byte_49F8CD2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaSubMaster___, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_SummonSceneRefresh__, v7);
    sub_1B640C8(&StringLiteral_14741/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v8);
    sub_1B640C8(&StringLiteral_14740/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v9);
    byte_49F8CD2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData || !Instance )
    goto LABEL_12;
  OpenEntity = GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL);
  gachaSubEntity = this->fields.gachaSubEntity;
  v14 = OpenEntity;
  if ( OpenEntity != gachaSubEntity )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_14741/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_14740/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
    v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
    if ( v15 )
    {
      CommonUI__OpenNotificationDialog((CommonUI_o *)v15, v16, v17, v20, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return v14 != gachaSubEntity;
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  return v14 != gachaSubEntity;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  bool v5; // w20
  unsigned __int64 v6; // x21

  if ( !ids )
    sub_1B64324(this);
  v3 = *(_QWORD *)&ids->max_length;
  v5 = (int)v3 > 0;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B6432C(this, ids);
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
  if ( (byte_49F8CF1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9198/*"NEXT_SVT"*/, method);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_6352/*"FINAL_SVT"*/, v3);
    byte_49F8CF1 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v5 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v5;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_1B64324(this);
  if ( v5 >= (signed int)gachaResInfoList->max_length )
    v6 = &StringLiteral_6352/*"FINAL_SVT"*/;
  else
    v6 = &StringLiteral_9198/*"NEXT_SVT"*/;
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
  UserGameEntity_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  BalanceConfig_c *v13; // x8
  int v14; // w21
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int32_t QpMax; // w9
  struct BalanceConfig_StaticFields *v19; // x10
  int32_t v20; // w23
  int32_t qp; // w21
  struct BalanceConfig_StaticFields *v22; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x22
  SummonLimitWarningDlgComponent_o *v30; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x22
  SummonLimitWarningDlgComponent_o *v35; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x22

  if ( (byte_49F8CD3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v3);
    sub_1B640C8(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_SummonControl_autoSellSettingChange__, v5);
    sub_1B640C8(&Method_SummonControl_limitManaConfirmResult__, v6);
    sub_1B640C8(&Method_SummonControl_limitQpConfirmResult__, v7);
    sub_1B640C8(&Method_SummonControl_showConfirmDlg__, v8);
    byte_49F8CD3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_28;
  v10 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v13 = BalanceConfig_TypeInfo;
  v14 = (int)SelfUserGame;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  static_fields = v13->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BalanceConfig_TypeInfo;
      v19 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v19->QpMax;
      FriendPointSummonQpWarning = v19->FriendPointSummonQpWarning;
    }
    v20 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v14 )
      return 0;
  }
  else
  {
    v20 = QpMax + gachaParamData->fields.gachaResourceNum / -200 * FriendPointSummonQpWarning;
    if ( !v14 )
      return 0;
  }
  qp = v10->fields.qp;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = BalanceConfig_TypeInfo;
  }
  v22 = v13->static_fields;
  if ( qp >= v22->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v26 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v26, v29, 0LL);
  }
  else
  {
    if ( v10->fields.qp < v20 )
    {
      mana = v10->fields.mana;
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v22 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v22->UserItemMax )
        return 0;
      v35 = this->fields.limitWarningDlgInfo;
      v36 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                               SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                               v11,
                                                               v12);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v35 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v35, v36, v39, 0LL);
        return 1;
      }
LABEL_28:
      sub_1B64324(SelfUserGame);
    }
    v30 = this->fields.limitWarningDlgInfo;
    v31 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v30 )
      goto LABEL_28;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v30, v31, v34, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v5; // x8

  if ( (byte_49F8D08 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11059/*"RETURN_MAIN"*/, method);
    sub_1B640C8(&StringLiteral_11061/*"RETURN_RESULT"*/, v3);
    byte_49F8D08 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_11061/*"RETURN_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11059/*"RETURN_MAIN"*/;
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
  Il2CppObject *String_69086012; // x19
  System_Object_array *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x0

  if ( (byte_49F8CCE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_SelectBonusData___, v4);
    sub_1B640C8(&JsonManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&string_TypeInfo, v12);
    sub_1B640C8(&SummonControl_TypeInfo, v13);
    byte_49F8CCE = 1;
  }
  v14 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_69086012 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69086012(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_69086012, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_object_(
            String_69086012,
            (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                         v17,
                                                         v18);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v16 )
      sub_1B64324(v20);
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

  if ( (byte_49F8C9C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F8C9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  Il2CppObject *Instance; // x0

  if ( (byte_49F8CCA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F8CCA = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8CA8 & 1) == 0 )
  {
    sub_1B640C8(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_TypeInfo, method);
    byte_49F8CA8 = 1;
  }
  v4 = sub_1B64314(SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_TypeInfo, method, v2);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__170___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v27; // x1
  __int64 v28; // x2
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int klass; // w27
  int64_t v33; // x20
  char v34; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v35; // x24
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  __int64 v38; // x2
  struct GachaRqParamData_o *v39; // x8
  int32_t v40; // w25
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct GachaRqParamData_o *v45; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v48; // x22
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  __int64 v51; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v52; // x23
  const MethodInfo *v53; // x3
  __int64 v54; // x1
  __int64 v55; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v56; // x24
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x6
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v59; // x26
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // [xsp+8h] [xbp-58h]

  if ( (byte_49F8CD7 & 1) == 0 )
  {
    sub_1B640C8(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaDetailMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&Method_SummonControl_BonusSelectSummonConfirmResult__, v11);
    sub_1B640C8(&Method_SummonControl_ConfirmMessageOpen__, v12);
    sub_1B640C8(&Method_SummonControl_SetDispBtn__, v13);
    sub_1B640C8(&Method_SummonControl_TryGetSelectBonusDataInfo__, v14);
    sub_1B640C8(&Method_SummonControl_confirmCautionResult__, v15);
    sub_1B640C8(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v16);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v18);
    byte_49F8CD7 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method);
  v20 = Method_SummonControl_ConfirmMessageOpen__;
  if ( (*((_BYTE *)Method_SummonControl_ConfirmMessageOpen__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1B640E0(Method_SummonControl_ConfirmMessageOpen__);
  v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
  if ( !result )
  {
    OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v42);
              v45 = this->fields.gachaParamData;
              if ( v45 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v45->fields.gachaId;
                v48 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v43,
                                                                          v44);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v48,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  v49);
                v52 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v50,
                                                                          v51);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v52,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  v53);
                v56 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B64314(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v54,
                                                                                  v55);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v56,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  v57);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v48, v52, v56, 0LL, v58);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
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
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  v22 = this->fields.gachaParamData;
  if ( !v22 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
             v22->fields.gachaId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)confirmDlgInfo,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v24 = this->fields.gachaParamData;
  if ( !v24 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        (GachaDetailMaster_o *)confirmDlgInfo,
                        v24->fields.gachaId,
                        0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  v26 = this->fields.gachaParamData;
  if ( !v26 )
    goto LABEL_37;
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)confirmDlgInfo,
                                                    v26->fields.gachaId,
                                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_37;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL);
  if ( !GachaDetailEntity || !Entity )
    goto LABEL_37;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  title = GachaDetailEntity->fields.title;
  message = GachaDetailEntity->fields.message;
  klass = (int)Entity[9].klass;
  v33 = (int64_t)Entity[7].klass;
  v34 = (char)confirmDlgInfo;
  v35 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                      SummonCautionDlgComponent_CallbackFunc_TypeInfo,
                                                      v27,
                                                      v28);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v35,
    (Il2CppObject *)this,
    (intptr_t)Method_SummonControl_confirmCautionResult__,
    v36);
  if ( (v34 & 1) != 0 )
  {
    v39 = this->fields.gachaParamData;
    if ( !v39 )
      goto LABEL_37;
    v40 = v39->fields.gachaId;
  }
  else
  {
    v40 = 0;
  }
  v59 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B64314(
                                                              BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                              v37,
                                                              v38);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v59,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    v60);
  if ( !cautionDlgInfo )
LABEL_37:
    sub_1B64324(confirmDlgInfo);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    klass > 0,
    v33,
    v35,
    v40,
    v59,
    this->fields.bonusSelectAssetManager,
    v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x0

  if ( (byte_49F8CEB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, flg);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SummonControl__DialogCallBack_b__249_0__, v6);
    byte_49F8CEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__249_0__, 0LL);
  if ( !v11 )
    sub_1B64324(v14);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8CEC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    byte_49F8CEC = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3558/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_49F8CC9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, result);
    byte_49F8CC9 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
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
  int32_t v10; // w2
  int32_t v11; // w3
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

  if ( (byte_49F8CA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v8);
    byte_49F8CA0 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                      baseGachaList,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  Item = (System_Collections_Generic_List_object__o *)*baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_1B64324(Item);
  v13 = 0;
  while ( v13 < Item->fields._size )
  {
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          v13,
                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
      if ( v9 )
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                              v9,
                                                              v17,
                                                              (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_VaildGachaInfo__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_25;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v17,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v17;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v17, v10, v11);
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
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)baseGachaList, (int32_t)v9, v10, v11);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_49F8C8C & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49F8C8C = 1;
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
  __int64 v11; // x1
  System_String_c *klass; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F8CB1 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F8CB1 = 1;
  }
  result = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F8D24 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F8D24 = 1;
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
  if ( !byte_49F8D24 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F8D24 = 1;
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
  if ( !byte_49F8D25 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F8D25 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->_SelectedBannerEntity_k__BackingField, 0, v6, v7);
  if ( !v8 )
    goto LABEL_31;
  if ( (int)v8->max_length < 2 )
    return 0;
  v3 = v8->m_Items[1];
  if ( !v3 || (v3 = (System_String_o *)System_String__Split(v3, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_31:
    sub_1B64324(v3);
  klass = v3[1].klass;
  if ( !klass )
    return 0;
  result = 0;
  if ( !(_DWORD)klass )
    sub_1B6432C(v3, v11);
  System_Int32__TryParse((System_String_o *)v3[1].monitor, &result, 0LL);
  return result;
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
  __int64 v12; // x1
  __int64 v13; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w25
  int32_t haveStone; // w22
  int32_t haveFreeStone; // w23
  int32_t haveChargeStone; // w24
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x26
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v25; // x27
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // [xsp+0h] [xbp-60h]

  if ( (byte_49F8D0E & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, res);
    sub_1B640C8(&Method_SummonControl_BonusSelectCloseShotStoneDlg__, v5);
    sub_1B640C8(&Method_SummonControl_GoBuyStone__, v6);
    sub_1B640C8(&Method_SummonControl_TryGetSelectBonusDataInfo__, v7);
    sub_1B640C8(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v8);
    byte_49F8D0E = 1;
  }
  if ( res )
  {
    v9 = Method_SummonControl_GoBuyStone__;
    if ( (*((_BYTE *)Method_SummonControl_GoBuyStone__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_SummonControl_GoBuyStone__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v14 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v12,
                                                        v13);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_BonusSelectCloseShotStoneDlg__,
      v15);
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData
      || (gachaId = gachaParamData->fields.gachaId,
          haveStone = this->fields.haveStone,
          haveFreeStone = this->fields.haveFreeStone,
          haveChargeStone = this->fields.haveChargeStone,
          bonusSelectAssetManager = this->fields.bonusSelectAssetManager,
          v25 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B64314(
                                                                      BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                                      v17,
                                                                      v18),
          BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
            v25,
            (Il2CppObject *)this,
            Method_SummonControl_TryGetSelectBonusDataInfo__,
            v26),
          !confirmDlgInfo) )
    {
      sub_1B64324(v16);
    }
    SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
      confirmDlgInfo,
      v14,
      haveStone,
      haveFreeStone,
      haveChargeStone,
      gachaId,
      bonusSelectAssetManager,
      v25,
      v27);
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

  if ( (byte_49F8CE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId);
    byte_49F8CE4 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_49F8C96 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6330/*"FAIL_LOAD"*/, data);
    sub_1B640C8(&StringLiteral_17476/*"btn_sumonhistory"*/, v6);
    sub_1B640C8(&StringLiteral_5450/*"END_LOAD"*/, v7);
    byte_49F8C96 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6330/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bannerAssetData, (int32_t)data, (int32_t)method, v3);
  SummonControl__createSummonInfo(this, v9);
  SummonControl__setPositionByWarId(this, v10);
  SummonControl__ResetArrowTween(this, v11);
  v12 = (System_String_o *)StringLiteral_17476/*"btn_sumonhistory"*/;
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17476/*"btn_sumonhistory"*/, v13);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, (UnityEngine_GameObject_o *)fsm, v12, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_1B64324(fsm);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5450/*"END_LOAD"*/, 0LL);
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
  if ( (byte_49F8CA4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_3410/*"CHANGE_BANNER"*/, v4);
    byte_49F8CA4 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_26;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_26;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.currentBannerComp, (int32_t)v11, v6, v7);
    v2->fields.currentGachaInfo = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.currentGachaInfo, (int32_t)v8, v13, v14);
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
          UICenterOnChild__CenterOn_46383920(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3410/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_1B64324(this);
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
  if ( (byte_49F8CA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method);
    this = (SummonControl_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8CA5 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_20;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_20;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.currentSummonMBannerComponent, (int32_t)v10, v5, v6);
    v2->fields.currentGachaInfo = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.currentGachaInfo, (int32_t)v7, v13, v14);
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
          UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    sub_1B64324(this);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_19:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_49F8D00 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, method);
    byte_49F8D00 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B64324(0LL);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3506/*"CLICK_BACK"*/, 0LL);
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
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v12; // x0
  System_Collections_Generic_List_object__o *EventTutorialEntity; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w21
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_49F8D03 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v6);
    sub_1B640C8(&Method_SummonControl_OnClickHelp__, v7);
    byte_49F8D03 = 1;
  }
  v8 = Method_SummonControl_OnClickHelp__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHelp__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_SummonControl_OnClickHelp__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_18;
  v12 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Collections_Generic_List_object__o *)EventTutorialMaster__GetEventTutorialEntity(
                                                                       0,
                                                                       34,
                                                                       v12,
                                                                       0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
  if ( !EventTutorialEntity )
    goto LABEL_18;
  if ( EventTutorialEntity->fields._size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               EventTutorialEntity,
               v17,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( !LODWORD(Item[3].klass) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 EventTutorialEntity,
                 v17,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !v16 )
          break;
        items = v16->fields._items;
        v21 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        v23 = Item;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            Item,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
        }
      }
      if ( ++v17 >= EventTutorialEntity->fields._size )
        goto LABEL_17;
    }
LABEL_18:
    sub_1B64324(Item);
  }
LABEL_17:
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v16,
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
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_49F8D04 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_SummonControl_OnClickHisotry__, v5);
    sub_1B640C8(&Method_SummonControl__OnClickHisotry_b__281_0__, v6);
    byte_49F8D04 = 1;
  }
  v7 = Method_SummonControl_OnClickHisotry__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickHisotry__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_SummonControl_OnClickHisotry__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__281_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_object )
    sub_1B64324(Request_object);
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

  if ( (byte_49F8CA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_OnClickMiniBanner__, *(_QWORD *)&moveIdx);
    sub_1B640C8(&StringLiteral_12626/*"SetBannerCenter"*/, v5);
    byte_49F8CA9 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_69112316(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12626/*"SetBannerCenter"*/,
      0LL);
    v7 = Method_SummonControl_OnClickMiniBanner__;
    if ( (*((_BYTE *)Method_SummonControl_OnClickMiniBanner__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B640E0(Method_SummonControl_OnClickMiniBanner__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
      || (UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B64324(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_46383920(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickPossessionInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PossessionInfoDialog_o *possessionInfoDialog; // x0
  const MethodInfo *v6; // x2
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  const MethodInfo *v8; // x1

  if ( (byte_49F8D05 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_OnClickPossessionInfo__, method);
    byte_49F8D05 = 1;
  }
  v3 = Method_SummonControl_OnClickPossessionInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickPossessionInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SummonControl_OnClickPossessionInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo
    || (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL
    || (PossessionInfoDialog__Init(possessionInfoDialog, currentGachaInfo->fields.id, v6),
        (possessionInfoDialog = this->fields.possessionInfoDialog) == 0LL) )
  {
    sub_1B64324(possessionInfoDialog);
  }
  PossessionInfoDialog__Open(possessionInfoDialog, v8);
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49F8CC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_OnClickStoneFragmentsExchangeButton__, method);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v3);
    byte_49F8CC5 = 1;
  }
  v4 = Method_SummonControl_OnClickStoneFragmentsExchangeButton__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsExchangeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_SummonControl_OnClickStoneFragmentsExchangeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, v6),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(confirmDlgInfo);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v8);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F8CC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_OnClickStoneFragmentsInfo__, method);
    byte_49F8CC6 = 1;
  }
  v3 = Method_SummonControl_OnClickStoneFragmentsInfo__;
  if ( (*((_BYTE *)Method_SummonControl_OnClickStoneFragmentsInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SummonControl_OnClickStoneFragmentsInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49F8D02 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SummonControl_reDispSummonBannerList__, v4);
    byte_49F8D02 = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_1B64324(v7);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8CCC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_49F8CCC = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseItemExchangeResultDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_49F8CA3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12626/*"SetBannerCenter"*/, method);
    byte_49F8CA3 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12626/*"SetBannerCenter"*/,
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
    sub_1B64324(summonInfoCtr);
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
  __int64 v8; // x1
  __int64 v9; // x2
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x0

  if ( (byte_49F8D01 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SummonControl__OnEndSummonEffect_b__278_0__, v6);
    byte_49F8D01 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__278_0__, 0LL);
  if ( !v11 )
    sub_1B64324(v14);
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v11; // w22
  Il2CppObject *Instance; // x21
  const MethodInfo *v13; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_int__o *v17; // x24

  if ( (byte_49F8CC7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_RequestStoneFragmentsShop__, v7);
    byte_49F8CC7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_11;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone((ShopMaster_o *)Master_object, 0LL);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v11 = UserStoneFragmentNum,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v13),
        v17 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v15, v16),
        System_Action_int____ctor(v17, (Il2CppObject *)this, Method_SummonControl_RequestStoneFragmentsShop__, 0LL),
        !Instance) )
  {
LABEL_11:
    sub_1B64324(Master_object);
  }
  if ( v11 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v17, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog((CommonUI_o *)Instance, StoneFragmentsShopEntity, 7, v17, 0LL);
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
  Il2CppObject *Entity; // x22
  const MethodInfo *v14; // x1
  ShopEntity_o *v15; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v17; // x1
  ShopEntity_o *v18; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v20; // x1
  ShopEntity_o *v21; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  Il2CppObject *Instance; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_bool__o *v26; // x24

  if ( (byte_49F8CCB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, *(_QWORD *)&buyCount);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SummonControl_OnCloseResultDialog__, v9);
    byte_49F8CCB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v11);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_9;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_object )
    goto LABEL_9;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (int32_t)StoneFragmentsShopEntity,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v15 = SummonControl__get_StoneFragmentsShopEntity(this, v14);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v15,
                                               buyCount,
                                               0LL);
  v18 = SummonControl__get_StoneFragmentsShopEntity(this, v17);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v18,
                                           (ItemEntity_o *)Entity,
                                           buyCount,
                                           0LL);
  v21 = SummonControl__get_StoneFragmentsShopEntity(this, v20);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v21,
                                          (ItemEntity_o *)Entity,
                                          0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v24, v25);
  System_Action_bool____ctor(v26, (Il2CppObject *)this, Method_SummonControl_OnCloseResultDialog__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_1B64324(StoneFragmentsShopEntity);
  CommonUI__OpenItemExchangeResultDialog(
    (CommonUI_o *)Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v26,
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

  if ( (byte_49F8CC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_SummonControl_EndRequestStoneFragmentsShop__, v7);
    byte_49F8CC8 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  *(_QWORD *)&buyCount,
                                                  method);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v10);
    if ( !StoneFragmentsShopEntity || !Request_object )
      sub_1B64324(StoneFragmentsShopEntity);
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

  if ( (byte_49F8C99 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8C99 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_28;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_28;
  v7 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
    sub_1B64324(leftArrowSprite);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o **v5; // x8

  if ( (byte_49F8CDF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, method);
    sub_1B640C8(&StringLiteral_11005/*"REQUEST_NG_RESULT"*/, v3);
    byte_49F8CDF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  if ( this->fields.isResult )
    v5 = (System_String_o **)&StringLiteral_11005/*"REQUEST_NG_RESULT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11004/*"REQUEST_NG"*/;
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
  const MethodInfo *v9; // x1
  float v10; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_49F8CA6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F8CA6 = 1;
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
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
        UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
      v10 = *(float *)&v8[2].klass;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_35;
      if ( v10 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
              UICenterOnChild__CenterOn_46383920(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_35:
        sub_1B64324(bannerLoopCtr);
      }
    }
    else
    {
      v12 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, v9);
      UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
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

  if ( (byte_49F8CE2 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, isDisp);
    sub_1B640C8(&StringLiteral_17726/*"center_glow"*/, v5);
    sub_1B640C8(&StringLiteral_22852/*"ring_gard1_3"*/, v6);
    sub_1B640C8(&StringLiteral_22853/*"ring_gard2_1"*/, v7);
    sub_1B640C8(&StringLiteral_22854/*"ring_gard2_2"*/, v8);
    sub_1B640C8(&StringLiteral_22851/*"ring_gard1_2"*/, v9);
    sub_1B640C8(&StringLiteral_22855/*"ring_gard2_3"*/, v10);
    sub_1B640C8(&StringLiteral_22850/*"ring_gard1_1"*/, v11);
    byte_49F8CE2 = 1;
  }
  bgRoot = (char *)sub_1B64170(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_19:
    sub_1B64324(bgRoot);
  v16 = bgRoot;
  if ( !*((_DWORD *)bgRoot + 6) )
    goto LABEL_20;
  v17 = StringLiteral_22850/*"ring_gard1_1"*/;
  *((_QWORD *)bgRoot + 4) = StringLiteral_22850/*"ring_gard1_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(bgRoot + 32), v17, v14, v15);
  if ( *((_DWORD *)v16 + 6) <= 1u )
    goto LABEL_20;
  v20 = StringLiteral_22851/*"ring_gard1_2"*/;
  *((_QWORD *)v16 + 5) = StringLiteral_22851/*"ring_gard1_2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 40), v20, v18, v19);
  if ( *((_DWORD *)v16 + 6) <= 2u )
    goto LABEL_20;
  v23 = StringLiteral_22852/*"ring_gard1_3"*/;
  *((_QWORD *)v16 + 6) = StringLiteral_22852/*"ring_gard1_3"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 48), v23, v21, v22);
  if ( *((_DWORD *)v16 + 6) <= 3u )
    goto LABEL_20;
  v26 = StringLiteral_22853/*"ring_gard2_1"*/;
  *((_QWORD *)v16 + 7) = StringLiteral_22853/*"ring_gard2_1"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25);
  if ( *((_DWORD *)v16 + 6) <= 4u
    || (v29 = StringLiteral_22854/*"ring_gard2_2"*/,
        *((_QWORD *)v16 + 8) = StringLiteral_22854/*"ring_gard2_2"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 64), v29, v27, v28),
        *((_DWORD *)v16 + 6) <= 5u)
    || (v32 = StringLiteral_22855/*"ring_gard2_3"*/,
        *((_QWORD *)v16 + 9) = StringLiteral_22855/*"ring_gard2_3"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 72), v32, v30, v31),
        *((_DWORD *)v16 + 6) <= 6u) )
  {
LABEL_20:
    sub_1B6432C(bgRoot, v13);
  }
  v35 = StringLiteral_17726/*"center_glow"*/;
  *((_QWORD *)v16 + 10) = StringLiteral_17726/*"center_glow"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 80), v35, v33, v34);
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
    sub_1B64324(summonInfoCtr);
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
    sub_1B64324(this);
  gachaParamData->fields.gachaTime = num;
  if ( (unsigned int)(type - 1) > 6 )
    v5 = 3;
  else
    v5 = dword_BDC3F0[type - 1];
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

  if ( (byte_49F8CC4 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_1B640C8(&MasterMissionComponent_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_17436/*"btn_event_3"*/, v8);
    byte_49F8CC4 = 1;
  }
  v18 = 0;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       fragmentsExchangeButton,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner((UISprite_o *)Component_object, (System_String_o *)StringLiteral_17436/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_28;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
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
    sub_1B64324(fragmentsExchangeButton);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_49F8CD6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl__SummonSceneRefresh_b__223_0__, v4);
    byte_49F8CD6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__223_0__, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, v8, 0LL);
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
  System_String_o *String_69086012; // x21
  System_Object_array *v12; // x0
  SelectBonusData_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int max_length; // w8
  __int64 v17; // x9

  if ( (byte_49F8CCD & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    this = (SummonControl_o *)sub_1B640C8(&SummonControl_TypeInfo, v7);
    byte_49F8CCD = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)selectBonusData, 0, v8, v9);
  v10 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v10 = SummonControl_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v10->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_69086012, 0LL) )
    goto LABEL_6;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_object_(
          (Il2CppObject *)String_69086012,
          (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
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
        sub_1B6432C(v12, v13);
      v13 = (SelectBonusData_o *)v12->m_Items[v17];
      if ( !v13 )
        sub_1B64324(v12);
      if ( v13->fields.gachaId == gachaId )
        break;
      if ( (int)++v17 >= max_length )
        goto LABEL_6;
    }
    *selectBonusData = v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)selectBonusData, (int32_t)v13, v14, v15);
    LOBYTE(v12) = 1;
  }
  return (char)v12;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  struct SummonInfoControl_o *summonInfoCtr; // x9
  char v5; // w8

  if ( (byte_49F8CA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, method);
    byte_49F8CA7 = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList
    || (vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        vaildGachaList,
                                                                        this->fields.currentIdx,
                                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__)) == 0LL
    || (vaildGachaList = (System_Collections_Generic_List_object__o *)VaildGachaInfo__HasFlag(
                                                                        (VaildGachaInfo_o *)vaildGachaList,
                                                                        2,
                                                                        0LL),
        (summonInfoCtr = this->fields.summonInfoCtr) == 0LL)
    || (v5 = (char)vaildGachaList,
        (vaildGachaList = (System_Collections_Generic_List_object__o *)summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
    sub_1B64324(vaildGachaList);
  }
  if ( (v5 & 1) != 0 )
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)vaildGachaList, 0LL);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)vaildGachaList, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8CE8 & 1) == 0 )
  {
    sub_1B640C8(&SummonControl__WaitBattleChrLoad_d__245_TypeInfo, method);
    byte_49F8CE8 = 1;
  }
  v4 = sub_1B64314(SummonControl__WaitBattleChrLoad_d__245_TypeInfo, method, v2);
  SummonControl__WaitBattleChrLoad_d__245___ctor((SummonControl__WaitBattleChrLoad_d__245_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall SummonControl___BonusSelectServantSelectDialog_b__293_0(
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
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v25; // x22
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v29; // x23
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  __int64 v32; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v33; // x24
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x6
  System_Action_o *v38; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  v2 = this;
  if ( (byte_49F8D21 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__, v7);
    sub_1B640C8(&Method_SummonControl_SetDispBtn__, v8);
    sub_1B640C8(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1B640C8(&Method_SummonControl___c__BonusSelectServantSelectDialog_b__293_1__, v11);
    this = (SummonControl_o *)sub_1B640C8(&SummonControl___c_TypeInfo, v12);
    byte_49F8D21 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__49003980(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1B6406C(
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
    v19);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v20,
                                                            v21);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v25, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, v26);
  v29 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v27,
                                                            v28);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectNotHaveChargeStoneDialog__,
    v30);
  v33 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B64314(
                                                                    BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                    v31,
                                                                    v32);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v33,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    v34);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  v38 = *(System_Action_o **)&this->fields.confirmDlgInfo->fields.refuseInit;
  if ( !v38 )
  {
    if ( !LODWORD(this->fields.bonusSelectSummonConfirmDialog) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    v38 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
    System_Action___ctor(v38, klass, Method_SummonControl___c__BonusSelectServantSelectDialog_b__293_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__293_1 = v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__293_1, (int32_t)v38, v41, v42);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1B64324(this);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v25, v29, v33, v38, v37);
}


void __fastcall SummonControl___DialogCallBack_b__249_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  Il2CppObject *v10; // x0
  CommonUI_o *v11; // x19

  if ( (byte_49F8D1C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl_EndCloseDialogCallBack__, v5);
    byte_49F8D1C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
  v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)v10;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v11 )
LABEL_8:
    sub_1B64324(v10);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__281_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  if ( !this->fields.historyDialog )
    sub_1B64324(this);
  SummonHistoryDialog__Open(this->fields.historyDialog, this->fields.currentGachaInfo, method);
}


void __fastcall SummonControl___OnEndSummonEffect_b__278_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8D20 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5449/*"END_FADE"*/, method);
    byte_49F8D20 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5449/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__223_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F8D18 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_49F8D18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL),
        SummonControl__quit(this, v5),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__145_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_49F8D13 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl__exeFormation_b__145_2__, v4);
    byte_49F8D13 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__145_2__, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall SummonControl___exeFormation_b__145_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_49F8D14 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_TypeInfo, method);
    byte_49F8D14 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
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
  __int64 v5; // x1
  PlayMakerFSM_o *Instance; // x0
  CommonUI_o *v7; // x20

  if ( (byte_49F8D1F & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_5448/*"END_EFFECT"*/, v5);
    byte_49F8D1F = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__229_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8D19 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12186/*"START_GACHA"*/, method);
    byte_49F8D19 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12186/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__144_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_49F8D12 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl__openAfterSummonInfo_b__144_2__, v4);
    byte_49F8D12 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__144_2__, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__CloseTutorialNotificationDialogArrow_30370628((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__144_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__261_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v6; // x19

  if ( (byte_49F8D1E & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_5467/*"END_SUMMON"*/, v4);
    byte_49F8D1E = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5467/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)summonResultInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_11:
    sub_1B64324(summonResultInfo);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__176_0(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_49F8D16 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12626/*"SetBannerCenter"*/, method);
    byte_49F8D16 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12626/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__152_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8D15 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v5);
    byte_49F8D15 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v9 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v7, 0LL);
  if ( !currentStoneNumLb )
    sub_1B64324(v8);
  UILabel__set_text(currentStoneNumLb, v8, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__212_0(SummonControl_o *this, const MethodInfo *method)
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
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v25; // x22
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v29; // x23
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  __int64 v32; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v33; // x24
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x6
  System_Action_o *basePanel; // x19
  Il2CppObject *klass; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  v2 = this;
  if ( (byte_49F8D17 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SummonControl_BonusSelectSummonConfirmResult__, v7);
    sub_1B640C8(&Method_SummonControl_SetDispBtn__, v8);
    sub_1B640C8(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_1B640C8(&Method_SummonControl___c__showConfirmDlg_b__212_1__, v11);
    this = (SummonControl_o *)sub_1B640C8(&SummonControl___c_TypeInfo, v12);
    byte_49F8D17 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_17;
  ConfirmDialogPrefab_k__BackingField = (Il2CppObject *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_object__49003980(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_object;
  sub_1B6406C(
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
    v19);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_17;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v20,
                                                            v21);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v25, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, v26);
  v29 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v27,
                                                            v28);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v29,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    v30);
  v33 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B64314(
                                                                    BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                    v31,
                                                                    v32);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v33,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    v34);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  basePanel = (System_Action_o *)this->fields.confirmDlgInfo->fields.basePanel;
  if ( !basePanel )
  {
    if ( !LODWORD(this->fields.bonusSelectSummonConfirmDialog) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (SummonControl_o *)SummonControl___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.confirmDlgInfo->klass;
    basePanel = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
    System_Action___ctor(basePanel, klass, Method_SummonControl___c__showConfirmDlg_b__212_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__212_1 = basePanel;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__212_1, (int32_t)basePanel, v41, v42);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_17:
    sub_1B64324(this);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v25, v29, v33, basePanel, v37);
}


void __fastcall SummonControl___showSummonEffect_b__236_0(SummonControl_o *this, const MethodInfo *method)
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
  __int64 v44; // x1
  __int64 v45; // x2
  SummonControl___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x24
  System_Func_object__int__o *_9__236_1; // x25
  Il2CppObject *v49; // x26
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_int__o *v54; // x24
  __int64 v55; // x1
  float v56; // s0
  struct GachaInfos_array *v57; // x8
  int max_length; // w21
  float v59; // s8
  il2cpp_array_size_t v60; // w22
  GachaInfos_o *v61; // x20
  int32_t objectId; // w1
  int32_t v63; // w26
  char v64; // w25
  int32_t Data; // w28
  int32_t v66; // w29
  bool isNew; // w27
  int v68; // w28
  _DWORD *v69; // x25
  bool IsServant; // w27
  __int64 v71; // x1
  const MethodInfo *v72; // x2
  int v73; // w8
  bool v74; // w28
  __int64 v75; // x1
  __int64 v76; // x2
  int32_t v77; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  _BOOL4 v81; // w27
  WeightRate_int__o *v82; // x28
  int32_t v83; // w0
  int32_t v84; // w0
  ServantLimitMaster_o *v85; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+28h] [xbp-88h]
  SummonEffectComponent_o **p_summonComp; // [xsp+38h] [xbp-78h]

  if ( (byte_49F8D1A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ConstantStrMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantVoiceMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&SoundManager_TypeInfo, v19);
    sub_1B640C8(&Method_SummonControl___c__showSummonEffect_b__236_1__, v20);
    sub_1B640C8(&SummonControl___c_TypeInfo, v21);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v22);
    sub_1B640C8(&Method_WeightRate_int__getData__, v23);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v24);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v25);
    sub_1B640C8(&WeightRate_int__TypeInfo, v26);
    sub_1B640C8(&StringLiteral_5462/*"END_PREPARATION"*/, v27);
    sub_1B640C8(&StringLiteral_12318/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v28);
    sub_1B640C8(&StringLiteral_3003/*"BGM_SUMMON_1"*/, v29);
    byte_49F8D1A = 1;
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
  SoundManager__playBgm((System_String_o *)StringLiteral_3003/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_84;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskObject,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_object;
  p_summonComp = &this->fields.summonComp;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.summonComp, (int32_t)Component_object, v35, v36);
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
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)maskObject,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v85 = (ServantLimitMaster_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)maskObject,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_84;
  maskObject = DataManager__GetMasterData_object_(
                 (DataManager_o *)maskObject,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_84;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12318/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v43 = System_String__Split(Value, 0x2Cu, 0, 0LL);
    v46 = SummonControl___c_TypeInfo;
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
    if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v46 = SummonControl___c_TypeInfo;
    }
    _9__236_1 = (System_Func_object__int__o *)v46->static_fields->__9__236_1;
    if ( !_9__236_1 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = SummonControl___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v46->static_fields->__9;
      _9__236_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v44, v45);
      System_Func_object__int____ctor(_9__236_1, v49, Method_SummonControl___c__showSummonEffect_b__236_1__, 0LL);
      static_fields = SummonControl___c_TypeInfo->static_fields;
      static_fields->__9__236_1 = (struct System_Func_string__int__o *)_9__236_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__236_1, (int32_t)_9__236_1, v51, v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v47,
                                                                 (System_Func_TSource__TResult__o *)_9__236_1,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
    v54 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v53,
                                                      (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v54 = 0LL;
  }
  v56 = UnityEngine_Random__get_value(0LL);
  v57 = this->fields.gachaResInfoList;
  if ( v57 )
  {
    max_length = v57->max_length;
    if ( max_length >= 1 )
    {
      v59 = v56;
      v60 = 0;
      while ( 1 )
      {
        if ( v60 >= v57->max_length )
          sub_1B6432C(maskObject, v55);
        v61 = v57->m_Items[v60];
        if ( !v61 )
          goto LABEL_84;
        maskObject = (void *)SvtType__IsCommandCode(v61->fields.type, 0LL);
        objectId = v61->fields.objectId;
        if ( ((unsigned __int8)maskObject & 1) == 0 )
          break;
        if ( !v41 )
          goto LABEL_84;
        maskObject = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                       objectId,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_84;
        v63 = *((_DWORD *)maskObject + 16);
        v64 = 0;
LABEL_40:
        Data = 0;
        v66 = 3;
        isNew = v61->fields.isNew;
        if ( v54 )
          goto LABEL_76;
LABEL_80:
        maskObject = 0LL;
LABEL_81:
        if ( !*p_summonComp )
          goto LABEL_84;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v61->fields.objectId,
          v61->fields.limitCount,
          v64,
          isNew,
          Data,
          v63,
          v66,
          (unsigned __int8)maskObject & 1,
          v61->fields.userSvtId,
          0LL);
        if ( max_length == ++v60 )
          goto LABEL_85;
        v57 = this->fields.gachaResInfoList;
        if ( !v57 )
          goto LABEL_84;
      }
      maskObject = MasterData_object;
      if ( !MasterData_object )
        goto LABEL_84;
      maskObject = DataMasterBase_object__object__int___GetEntity(
                     MasterData_object,
                     objectId,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_84;
      v68 = *((_DWORD *)maskObject + 21);
      v69 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = v85;
      if ( !v85 )
        goto LABEL_84;
      maskObject = ServantLimitMaster__GetEntity(v85, v61->fields.objectId, v61->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_84;
      v63 = *((_DWORD *)maskObject + 6);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v69[20], v72) )
        goto LABEL_51;
      if ( v63 == 5 )
      {
        if ( v59 >= 0.2 )
        {
LABEL_51:
          v64 = 0;
          goto LABEL_52;
        }
      }
      else if ( v63 != 4 || v59 >= 0.4 )
      {
        goto LABEL_51;
      }
      v64 = 1;
LABEL_52:
      v73 = v68 - 3;
      v66 = 0;
      Data = 0;
      isNew = 0;
      switch ( v73 )
      {
        case 0:
        case 4:
          goto LABEL_75;
        case 3:
          v74 = v61->fields.isNew;
          isNew = v74;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          maskObject = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_84;
          maskObject = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                         (ServantVoiceMaster_o *)maskObject,
                         v61->fields.objectId,
                         0LL);
          if ( maskObject != 0LL && v74 )
          {
            if ( !v54 )
            {
              v54 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v75,
                                                                v76);
              System_Collections_Generic_List_int____ctor(
                v54,
                (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v54 )
                goto LABEL_84;
            }
            v77 = v61->fields.objectId;
            items = v54->fields._items;
            v79 = Method_System_Collections_Generic_List_int__Add__;
            ++v54->fields._version;
            if ( !items )
              goto LABEL_84;
            size = v54->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v54,
                v77,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              Data = 0;
            }
            else
            {
              Data = 0;
              v54->fields._size = size + 1;
              items->m_Items[size + 1] = v77;
            }
            v66 = 1;
          }
          else
          {
            Data = 0;
            v66 = 1;
LABEL_75:
            if ( !v54 )
              goto LABEL_80;
          }
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v66 = 1;
          if ( !v54 )
            goto LABEL_80;
          break;
        case 8:
          goto LABEL_40;
        default:
          v81 = v61->fields.isNew;
          v82 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v71, v72);
          WeightRate_int____ctor(v82, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
          if ( v63 == 4 )
          {
            if ( !v82 )
              goto LABEL_84;
            WeightRate_int___setWeight(v82, 60, 0, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v82, 40, 1, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
            v83 = UnityEngine_Random__Range_69087476(0, v82->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v82, v83, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
            v66 = 2;
            isNew = v81;
            v64 &= Data == 0;
            v63 = 4;
            if ( v54 )
              break;
          }
          else
          {
            isNew = v81;
            if ( v63 == 5 )
            {
              if ( !v82 )
                goto LABEL_84;
              WeightRate_int___setWeight(v82, 60, 0, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
              WeightRate_int___setWeight(v82, 20, 1, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
              v66 = 2;
              WeightRate_int___setWeight(v82, 20, 2, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
              v84 = UnityEngine_Random__Range_69087476(0, v82->fields.totalweight, 0LL);
              Data = WeightRate_int___getData(v82, v84, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
              v64 &= Data == 0;
              v63 = 5;
              if ( v54 )
                break;
            }
            else
            {
              Data = 0;
              v66 = 2;
              if ( v54 )
                break;
            }
          }
          goto LABEL_80;
      }
LABEL_76:
      maskObject = (void *)System_Collections_Generic_List_int___Contains(
                             v54,
                             v61->fields.objectId,
                             (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      goto LABEL_81;
    }
  }
LABEL_85:
  maskObject = this->fields.fsm;
  if ( !maskObject )
LABEL_84:
    sub_1B64324(maskObject);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5462/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__252_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  SummonControl___c_c *v6; // x0
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  System_Action_o *_9__252_1; // x21
  Il2CppObject *v10; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F8D1D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SummonControl___c__showSummonResultInfo_b__252_1__, v4);
    sub_1B640C8(&SummonControl___c_TypeInfo, v5);
    byte_49F8D1D = 1;
  }
  v6 = SummonControl___c_TypeInfo;
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v6 = SummonControl___c_TypeInfo;
  }
  _9__252_1 = v6->static_fields->__9__252_1;
  if ( !_9__252_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SummonControl___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v6->static_fields->__9;
    _9__252_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__252_1, v10, Method_SummonControl___c__showSummonResultInfo_b__252_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__252_1 = _9__252_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__252_1, (int32_t)_9__252_1, v12, v13);
  }
  if ( !overflowSvtCoinInfo )
    sub_1B64324(v6);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__252_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__243_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8D1B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3536/*"CLICK_OK"*/, method);
    byte_49F8D1B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3536/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
  if ( UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL) )
    SummonControl__friendPointQpManaCheck(this, v4);
  else
    SummonControl__showConfirmDlg(this, v4);
}


void __fastcall SummonControl__autoSellSettingChange2(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v4) )
  {
    SummonControl__showConfirmDlg(this, v4);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49F8CDB & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_beforeConfirmCautionResult__, method);
    byte_49F8CDB = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_1B64324(0LL);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  v4 = Method_SummonControl_beforeConfirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_beforeConfirmCautionResult__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_SummonControl_beforeConfirmCautionResult__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  SummonControl__showConfirmDlg_32837472(this, 0, v6);
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
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  SummonControl_o *v15; // x20
  __int64 v16; // x8
  struct GachaInfos_array *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  struct System_Int32_array *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  struct GetSvtCoin_array *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  struct System_Int32_array *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  struct GachaExtraGifts_array *v33; // x1

  v4 = this;
  if ( (byte_49F8CDE & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result);
    sub_1B640C8(&JsonManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v6);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v7);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v8);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v9);
    byte_49F8CDE = 1;
  }
  if ( !result )
    goto LABEL_22;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL)
    || System_String__Equals_61383712(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v10);
    return;
  }
  v11 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_object_(
                              v11,
                              (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.gachaResInfoList, (int32_t)v17, v13, v14);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v20 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v20 )
    goto LABEL_22;
  v21 = *(struct System_Int32_array **)(v20 + 24);
  v4->fields.canRankUpClassIds = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.canRankUpClassIds, (int32_t)v21, v18, v19);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v24 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v24 )
    goto LABEL_22;
  v25 = *(struct GetSvtCoin_array **)(v24 + 32);
  v4->fields.overflowSvtCoinInfos = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.overflowSvtCoinInfos, (int32_t)v25, v22, v23);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_23;
  v28 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v28 )
    goto LABEL_22;
  v29 = *(struct System_Int32_array **)(v28 + 40);
  v4->fields.extraGiftIds = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.extraGiftIds, (int32_t)v29, v26, v27);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_23:
    sub_1B6432C(this, v12);
  v32 = *(_QWORD *)&v15->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_XMin;
  if ( !v32
    || (v33 = *(struct GachaExtraGifts_array **)(v32 + 48),
        v4->fields.GachaExtraGiftList = v33,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.GachaExtraGiftList, (int32_t)v33, v30, v31),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_22:
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11006/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8CE1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, result);
    byte_49F8CE1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11006/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  PlayMakerFSM_o *fsm; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_49F8CF8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SummonControl___c__DisplayClass265_0__checkEnhanceTresureDevice_b__0__, v6);
    sub_1B640C8(&SummonControl___c__DisplayClass265_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_9258/*"NO_EXIST"*/, v8);
    byte_49F8CF8 = 1;
  }
  v9 = sub_1B64314(SummonControl___c__DisplayClass265_0_TypeInfo, method, v2);
  SummonControl___c__DisplayClass265_0___ctor((SummonControl___c__DisplayClass265_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v9 + 24), v13) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v9,
      Method_SummonControl___c__DisplayClass265_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v19, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(fsm);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9258/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F8CF6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9258/*"NO_EXIST"*/, method);
    byte_49F8CF6 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9258/*"NO_EXIST"*/, 0LL);
  }
  else
  {
    SummonControl__checkEnhanceTresureDevice(this, method);
  }
}


void __fastcall SummonControl__checkEnhanceTresureDeviceSingle(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  DataManager_o *Instance; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v18; // x8
  int32_t objectId; // w21
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x19
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_49F8CF7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SummonControl___c__DisplayClass264_0__checkEnhanceTresureDeviceSingle_b__0__, v8);
    sub_1B640C8(&SummonControl___c__DisplayClass264_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_9258/*"NO_EXIST"*/, v10);
    byte_49F8CF7 = 1;
  }
  v11 = sub_1B64314(SummonControl___c__DisplayClass264_0_TypeInfo, method, v2);
  SummonControl___c__DisplayClass264_0___ctor((SummonControl___c__DisplayClass264_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v11 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_16;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B6432C(Instance, v15);
  v18 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v18 )
    goto LABEL_16;
  objectId = v18->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_16;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v11 + 24) = objectId;
    v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v23 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
    v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_SummonControl___c__DisplayClass264_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v22 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v22, 1, DEFAULT_FADE_TIME, v25, 0LL);
      return;
    }
LABEL_16:
    sub_1B64324(Instance);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9258/*"NO_EXIST"*/, 0LL);
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
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v11; // x8
  struct GachaRqParamData_o *v12; // x8
  __int64 *v13; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_49F8CBD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4);
    sub_1B640C8(&StringLiteral_3441/*"CHECK_STONE"*/, v5);
    sub_1B640C8(&StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/, v6);
    sub_1B640C8(&StringLiteral_3438/*"CHECK_POINT"*/, v7);
    sub_1B640C8(&StringLiteral_3031/*"BONUS_SELECT_CHECK_STONE"*/, v8);
    byte_49F8CBD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_25;
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GachaEntity__HasFlag(
                                                                  (GachaEntity_o *)Master_object,
                                                                  8,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v11 = this->fields.gachaParamData;
    if ( !v11 )
      goto LABEL_25;
    if ( v11->fields.gachaType == 7 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3031/*"BONUS_SELECT_CHECK_STONE"*/, 0LL);
    }
  }
  v12 = this->fields.gachaParamData;
  if ( !v12 )
LABEL_25:
    sub_1B64324(Master_object);
  switch ( v12->fields.gachaType )
  {
    case 1:
    case 7:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v13 = &StringLiteral_3441/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_25;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      if ( summonInfoCtr->fields.isFree )
        v13 = &StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/;
      else
        v13 = (__int64 *)&StringLiteral_3438/*"CHECK_POINT"*/;
      break;
    case 5:
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
      if ( !Master_object )
        goto LABEL_25;
      v13 = &StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)*v13, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_49F8CE5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6892/*"GET_MULTI"*/, method);
    byte_49F8CE5 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_1B64324(maskBgObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6892/*"GET_MULTI"*/, 0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  if ( (byte_49F8CE6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9196/*"NEW_SVT"*/, method);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_6906/*"GO_BACK"*/, v4);
    byte_49F8CE6 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B6432C(this, method);
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_14;
  if ( v7->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v7->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v8 = &StringLiteral_9196/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(this);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v8 = &StringLiteral_6906/*"GO_BACK"*/;
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
    sub_1B64324(this);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1B6432C(this, method);
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
  if ( (byte_49F8CEF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&StringLiteral_9575/*"OLD_SVT"*/, v4);
    sub_1B640C8(&StringLiteral_6352/*"FINAL_SVT"*/, v5);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_9196/*"NEW_SVT"*/, v6);
    byte_49F8CEF = 1;
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
      v10 = &StringLiteral_6352/*"FINAL_SVT"*/;
LABEL_15:
      v13 = (System_String_o *)*v10;
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
    sub_1B6432C(this, method);
  v11 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v11 )
    goto LABEL_22;
  if ( !v11->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v10 = &StringLiteral_9575/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_22:
    sub_1B64324(this);
  }
  objectId = v11->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_22;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v13 = (System_String_o *)StringLiteral_9575/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v13, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9196/*"NEW_SVT"*/, 0LL);
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
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
  const MethodInfo *v6; // x2
  struct GachaRqParamData_o *v7; // x8
  _DWORD *v8; // x19
  int v9; // w8

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    return 0;
  UserGachaData = SummonControl__getUserGachaData(this, gachaParamData->fields.gachaId, v2);
  v7 = this->fields.gachaParamData;
  if ( !v7 )
    goto LABEL_8;
  v8 = UserGachaData;
  UserGachaData = SummonControl__getCurrentGachaData(this, v7->fields.gachaId, v6);
  if ( !v8 )
    return 0;
  if ( !UserGachaData )
LABEL_8:
    sub_1B64324(UserGachaData);
  v9 = UserGachaData[23];
  if ( v9 >= 1 )
    return v8[7] >= v9;
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

  if ( (byte_49F8CF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_49F8CF0 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B64324(befSvtList);
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
               (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  PlayMakerFSM_o *fsm; // x0
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int32_t v12; // w8
  CommonUI_o *v13; // x19

  if ( (byte_49F8C8F & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&TutorialFlag_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_3504/*"CLEAR_TUTORIAL"*/, v5);
    sub_1B640C8(&StringLiteral_11062/*"RETURN_TUTORIAL"*/, v6);
    byte_49F8C8F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(1, 0LL) )
    goto LABEL_51;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37376848(101, 0LL) )
  {
    this->fields.isDoneTutorial = 0;
    v12 = 1;
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
      if ( TutorialFlag__Get_37376848(101, 0LL) )
      {
        fsm = this->fields.fsm;
        this->fields.isDoneTutorial = 0;
        if ( !fsm )
          goto LABEL_48;
        v9 = &StringLiteral_11062/*"RETURN_TUTORIAL"*/;
LABEL_40:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v9, 0LL);
        goto LABEL_44;
      }
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37376848(101, 0LL) )
      goto LABEL_26;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37376848(107, 0LL) )
    {
LABEL_26:
      SummonControl__setTutorialCtrEnable(this, 1, v10);
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
      SummonControl__showHelpImg(this, v11);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_48;
      v9 = &StringLiteral_3504/*"CLEAR_TUTORIAL"*/;
      goto LABEL_40;
    }
    v12 = 4;
  }
  this->fields.tutorialKind = v12;
  SummonControl__progTutorial(this, v7);
LABEL_44:
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)fsm;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_48:
    sub_1B64324(fsm);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v26; // x1
  __int64 v27; // x2
  SummonControl_o *v28; // x21
  BalanceConfig_c *v29; // x0
  int32_t v30; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v31; // x23
  int32_t v32; // w3
  CommonUI_o *v33; // x0
  int32_t v34; // w1
  __int64 v35; // x1
  __int64 v36; // x2
  struct UserGameEntity_o *v37; // x8
  int32_t v38; // w22
  int32_t v39; // w21
  SummonControl_o *v40; // x20
  int32_t v41; // w2
  __int64 v42; // x1
  __int64 v43; // x2
  struct UserGameEntity_o *v44; // x8
  int32_t v45; // w21
  SummonControl_o *v46; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_49F8CB5 & 1) == 0 )
  {
    sub_1B640C8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v8);
    sub_1B640C8(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9);
    sub_1B640C8(&Method_SummonControl_closeShotSvtFrameDlg__, v10);
    sub_1B640C8(&StringLiteral_6471/*"FRIEND_GACHA_ADD_LIMIT"*/, v11);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_3439/*"CHECK_RESOURCE"*/, v12);
    byte_49F8CB5 = 1;
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
  if ( !byte_49F7B7B )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F7B7B = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v17->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_40;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6471/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_40;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_40;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3439/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_40:
    sub_1B64324(this);
  }
  if ( servantEquipSum[1] >= v23 )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v37 = v2->fields.userGameEntity;
    if ( !v37 )
      goto LABEL_40;
    v38 = v37->fields.svtKeep;
    v39 = servantEquipSum[1];
    v40 = this;
    v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                            ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                            v35,
                                                            v36);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)v2,
      (intptr_t)Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v40 )
      goto LABEL_40;
    v33 = (CommonUI_o *)v40;
    v34 = v39;
    v41 = v38;
    v32 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= v22 )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v44 = v2->fields.userGameEntity;
      if ( !v44 )
        goto LABEL_40;
      v30 = v44->fields.svtEquipKeep;
      v45 = servantEquipSum[0];
      v46 = this;
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v42,
                                                              v43);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v46 )
        goto LABEL_40;
      v32 = 1;
      v33 = (CommonUI_o *)v46;
      v34 = v45;
    }
    else
    {
      if ( Count < v21 )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_40;
      v28 = this;
      if ( !byte_49F7B7B )
      {
        sub_1B640C8(&BalanceConfig_TypeInfo, v26);
        byte_49F7B7B = 1;
      }
      v29 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v30 = v29->static_fields->CommandCodeFrameMax;
      v31 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v26,
                                                              v27);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)v2,
        (intptr_t)Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v28 )
        goto LABEL_40;
      v32 = 2;
      v33 = (CommonUI_o *)v28;
      v34 = v25;
    }
    v41 = v30;
  }
  CommonUI__OpenSvtFrameShortDlg(v33, v34, v41, v32, 0, v31, 0, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_49F8CBE & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_1B640C8(&Method_SummonControl_closeShotPointDlg__, v5);
    sub_1B640C8(&StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/, v6);
    byte_49F8CBE = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BB5FA4(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB5FA4(v8);
  MasterData_object = **(void ***)(v8 + 184);
  if ( !MasterData_object )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v13 = *((_DWORD *)MasterData_object + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v13;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v13 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v17 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v11,
                                                        v12);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      (intptr_t)Method_SummonControl_closeShotPointDlg__,
      v18);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v13, v17, v19);
      return;
    }
LABEL_17:
    sub_1B64324(MasterData_object);
  }
  MasterData_object = this->fields.fsm;
  if ( !MasterData_object )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)MasterData_object, (System_String_o *)StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/, 0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x10
  int32_t haveStoneNum; // w11
  int32_t gachaType; // w9
  int32_t HaveFreeStoneNum_k__BackingField; // w20
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w22
  int32_t v13; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v15; // x24
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x5
  SummonConfirmDlgComponent_o *v18; // x20
  int32_t haveStone; // w21
  __int64 v20; // x1
  __int64 v21; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v22; // x22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  v3 = this;
  if ( (byte_49F8CC0 & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SummonControl_closeShotStoneDlg__, v4);
    this = (SummonControl_o *)sub_1B640C8(&StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/, v5);
    byte_49F8CC0 = 1;
  }
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_16;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  gachaType = gachaParamData->fields.gachaType;
  v3->fields.haveStone = haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  v3->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  v3->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  if ( gachaType == 7 )
    v13 = HaveChargeStoneNum_k__BackingField;
  else
    v13 = haveStoneNum;
  v3->fields.needStone = gachaResourceNum;
  if ( v13 >= gachaResourceNum )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12079/*"SHOW_CONFIRM_DLG"*/, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = v3->fields.confirmDlgInfo;
      v15 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          method,
                                                          v2);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v3,
        (intptr_t)Method_SummonControl_closeShotStoneDlg__,
        v16);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v15,
          v17);
        return;
      }
LABEL_16:
      sub_1B64324(this);
    }
    SummonControl__SetupFragmentsExchangeButton(v3, method);
    v18 = v3->fields.confirmDlgInfo;
    haveStone = v3->fields.haveStone;
    v22 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v20,
                                                        v21);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)v3,
      (intptr_t)Method_SummonControl_closeShotStoneDlg__,
      v23);
    if ( !v18 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v18, haveStone, v22, v24);
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
  __int64 v13; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  const MethodInfo *size; // x2
  GachaReleaseMaster_o *v16; // x22
  int v17; // w9
  struct GachaEntity_array *useGachaData; // x8
  __int64 v19; // x29
  int max_length; // w9
  GachaEntity_o *v21; // x24
  const MethodInfo *v22; // x3
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v27; // x25
  UserGachaEntity_o *UserGachaData; // x0
  int32_t gachaGroupId; // w1
  System_Collections_Generic_List_object__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Comparison_T__o *v33; // x21
  StoryGachaAdjustData_o *adjustData; // [xsp+0h] [xbp-70h] BYREF
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_49F8C9B & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_VaildGachaInfo__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaReleaseMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v7);
    sub_1B640C8(&Method_SummonControl_SlotCompare__, v8);
    this = (SummonControl_o *)sub_1B640C8(&TutorialFlag_TypeInfo, v9);
    byte_49F8C9B = 1;
  }
  adjustData = 0LL;
  userGameEntity = v2->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_39;
  userId = userGameEntity->fields.userId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
  this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_39;
  size = (const MethodInfo *)(unsigned int)vaildGachaList->fields._size;
  v16 = (GachaReleaseMaster_o *)this;
  v17 = vaildGachaList->fields._version + 1;
  vaildGachaList->fields._size = 0;
  vaildGachaList->fields._version = v17;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)vaildGachaList->fields._items, 0, (int32_t)size, 0LL);
  useGachaData = v2->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_39;
  v19 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v19 >= max_length )
      break;
    if ( (unsigned int)v19 >= max_length )
      sub_1B6432C(this, v13);
    v21 = useGachaData->m_Items[v19];
    if ( !v21 || !Master_object )
      goto LABEL_39;
    this = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                (UserQuestMaster_o *)Master_object,
                                &entity,
                                userId,
                                v21->fields.condQuestId,
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
      if ( (int)this >= v21->fields.condQuestPhase )
      {
LABEL_20:
        if ( !v16 )
          goto LABEL_39;
        this = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v16, v21->fields.id, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v23 = SummonControl__CheckStoryGachaAdjustData(this, &adjustData, v21->fields.id, v22);
          if ( !v23 )
            adjustData = 0LL;
          beforeGachaId = v21->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            this = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v23, beforeGachaId, v24);
            if ( !this )
              goto LABEL_38;
            v27 = this;
            this = (SummonControl_o *)SummonControl__getCurrentGachaData(v2, v21->fields.beforeGachaId, size);
            if ( !this )
              goto LABEL_39;
            if ( SHIDWORD(v27->fields.m_CancellationTokenSource) < SLODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height) )
              goto LABEL_38;
            if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            this = (SummonControl_o *)TutorialFlag__IsProgressDone(2, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_38;
            UserGachaData = SummonControl__getUserGachaData(this, v21->fields.id, size);
            if ( UserGachaData )
            {
              this = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(v2, UserGachaData, v21, v25);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_38;
            }
            else
            {
              gachaGroupId = v21->fields.gachaGroupId;
              if ( gachaGroupId >= 1 )
              {
                this = (SummonControl_o *)v2->fields.gachaMst;
                if ( !this )
                  goto LABEL_39;
                this = (SummonControl_o *)GachaMaster__CheckIsDrawGroupSummon((GachaMaster_o *)this, gachaGroupId, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_38;
              }
            }
          }
          SummonControl__AddVaildGachaInfoList(v2, v21, adjustData, v25);
        }
      }
    }
LABEL_38:
    useGachaData = v2->fields.useGachaData;
    ++v19;
    if ( !useGachaData )
      goto LABEL_39;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(this, &v2->fields.vaildGachaList, size);
  v30 = (System_Collections_Generic_List_object__o *)v2->fields.vaildGachaList;
  v33 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_VaildGachaInfo__TypeInfo, v31, v32);
  System_Comparison_object____ctor(v33, (Il2CppObject *)v2, Method_SummonControl_SlotCompare__, 0LL);
  if ( !v30 )
LABEL_39:
    sub_1B64324(this);
  System_Collections_Generic_List_object___Sort_55243320(
    v30,
    v33,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
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

  if ( (byte_49F8CB3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8CB3 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_15;
    }
LABEL_33:
    sub_1B64324(bannerLoopCtr);
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
      UnityEngine_Object__Destroy_69127736(v9, 0LL);
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
      UnityEngine_Object__Destroy_69127736(v11, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F8CF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_49F8CF3 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL)
    || (summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)summonResultInfo,
                                                        0LL)) == 0LL )
  {
    sub_1B64324(summonResultInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v5, v6);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v7, v8, v9);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  SceneJumpInfo_o *v16; // x20

  if ( (byte_49F8CB8 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v7);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v8);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v9);
    byte_49F8CB8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  v11 = Method_SummonControl_closeShotCommandCodeFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotCommandCodeFrameDlg__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotCommandCodeFrameDlg__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
  if ( res == 2 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
      v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v16 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_38274744(v16, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 2, 0LL);
      if ( v13 )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v13, 22, 1, (Il2CppObject *)v16, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_49F8CBF & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_closeShotPointDlg__, res);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v4);
    byte_49F8CBF = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_8;
  SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method);
  v6 = Method_SummonControl_closeShotPointDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotPointDlg__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotPointDlg__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_8:
    sub_1B64324(confirmDlgInfo);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_49F8CC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_closeShotStoneDlg__, res);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v5);
    sub_1B640C8(&StringLiteral_6908/*"GO_BUY_STONE"*/, v6);
    byte_49F8CC1 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  v8 = Method_SummonControl_closeShotStoneDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotStoneDlg__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotStoneDlg__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  if ( !res )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v10 = &StringLiteral_3511/*"CLICK_CANCEL"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B64324(confirmDlgInfo);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_13;
  v10 = &StringLiteral_6908/*"GO_BUY_STONE"*/;
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  SceneJumpInfo_o *v18; // x20
  int32_t v19; // w1
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0

  if ( (byte_49F8CB7 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_closeShotSvtEqFrameDlg__, v7);
    sub_1B640C8(&StringLiteral_12566/*"ServantEquipList"*/, v8);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v9);
    sub_1B640C8(&StringLiteral_12565/*"ServantEQCombine"*/, v10);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v11);
    byte_49F8CB7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v20 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v18 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v22, v23);
        SceneJumpInfo___ctor_38274744(v18, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 1, 0LL);
        if ( v15 )
        {
          v19 = 22;
          goto LABEL_22;
        }
      }
LABEL_27:
      sub_1B64324(Instance);
    case 1:
      v24 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v25 = (System_Reflection_MethodBase_o *)sub_1B640AC(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v18 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v26, v27);
        SceneJumpInfo___ctor_38274656(v18, (System_String_o *)StringLiteral_12566/*"ServantEquipList"*/, 0LL);
        if ( v15 )
        {
          v19 = 71;
          goto LABEL_22;
        }
      }
      goto LABEL_27;
    case 0:
      v13 = Method_SummonControl_closeShotSvtEqFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtEqFrameDlg__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v18 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v16, v17);
        SceneJumpInfo___ctor_38274656(v18, (System_String_o *)StringLiteral_12565/*"ServantEQCombine"*/, 0LL);
        if ( v15 )
        {
          v19 = 32;
LABEL_22:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v15, v19, 1, (Il2CppObject *)v18, 0LL);
          return;
        }
      }
      goto LABEL_27;
  }
  v28 = Method_SummonControl_closeShotSvtEqFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtEqFrameDlg__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtEqFrameDlg__);
  v29 = (System_Reflection_MethodBase_o *)sub_1B640AC(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  SceneJumpInfo_o *v17; // x20
  int32_t v18; // w1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0

  if ( (byte_49F8CB6 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_closeShotSvtFrameDlg__, v7);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v8);
    sub_1B640C8(&StringLiteral_12562/*"ServantCombine"*/, v9);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v10);
    byte_49F8CB6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      v19 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtFrameDlg__);
      v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v21, v22);
        SceneJumpInfo___ctor_38274744(v17, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 0, 0LL);
        if ( v14 )
        {
          v18 = 22;
          goto LABEL_17;
        }
      }
LABEL_28:
      sub_1B64324(Instance);
    case 1:
      v24 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtFrameDlg__);
      v25 = (System_Reflection_MethodBase_o *)sub_1B640AC(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v18 = 71;
          v23 = 0LL;
          goto LABEL_23;
        }
      }
      goto LABEL_28;
    case 0:
      v12 = Method_SummonControl_closeShotSvtFrameDlg__;
      if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtFrameDlg__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v17 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v15, v16);
        SceneJumpInfo___ctor_38274656(v17, (System_String_o *)StringLiteral_12562/*"ServantCombine"*/, 0LL);
        if ( v14 )
        {
          v18 = 32;
LABEL_17:
          Instance = (CommonUI_o *)v14;
          v23 = (Il2CppObject *)v17;
LABEL_23:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v18, 1, v23, 0LL);
          return;
        }
      }
      goto LABEL_28;
  }
  v26 = Method_SummonControl_closeShotSvtFrameDlg__;
  if ( (*((_BYTE *)Method_SummonControl_closeShotSvtFrameDlg__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1B640E0(Method_SummonControl_closeShotSvtFrameDlg__);
  v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_28;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
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
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct GachaRqParamData_o *v24; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v27; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  __int64 v30; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v31; // x23
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  __int64 v34; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v35; // x24
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x6

  if ( (byte_49F8CD9 & 1) == 0 )
  {
    sub_1B640C8(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_SummonControl_BonusSelectSummonConfirmResult__, v8);
    sub_1B640C8(&Method_SummonControl_SetDispBtn__, v9);
    sub_1B640C8(&Method_SummonControl_TryGetSelectBonusDataInfo__, v10);
    sub_1B640C8(&Method_SummonControl_confirmCautionResult__, v11);
    sub_1B640C8(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v13);
    byte_49F8CD9 = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_22;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, method);
  if ( !res )
  {
    v18 = Method_SummonControl_confirmCautionResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B640E0(Method_SummonControl_confirmCautionResult__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
                v21);
              v24 = this->fields.gachaParamData;
              if ( v24 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v24->fields.gachaId;
                v27 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v22,
                                                                          v23);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v27,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  v28);
                v31 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v29,
                                                                          v30);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v31,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  v32);
                v35 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_1B64314(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v33,
                                                                                  v34);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v35,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  v36);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v27, v31, v35, 0LL, v37);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B64324(cautionDlgInfo);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v15 = Method_SummonControl_confirmCautionResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmCautionResult__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B640E0(Method_SummonControl_confirmCautionResult__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
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

  if ( (byte_49F8CD8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_confirmResult__, res);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v5);
    byte_49F8CD8 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_12;
  SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method);
  if ( !res )
  {
    v10 = Method_SummonControl_confirmResult__;
    if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B640E0(Method_SummonControl_confirmResult__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(confirmDlgInfo);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  v7 = Method_SummonControl_confirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_confirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_SummonControl_confirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  SummonControl__loadAssetsForSummon(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **v3; // x24
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
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x19
  __int64 noneGachaInfo; // x0
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct UICenterOnChild_o *v54; // x21
  ServantStatusBattleListViewItem_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v57; // x22
  System_Delegate_o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Delegate_o *v61; // x8
  SpringPanel_OnFinished_c *v62; // x1
  __int64 v63; // x1
  __int64 v64; // x2
  struct UIScrollView_o *summonBannerScrollView; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v67; // x22
  System_Delegate_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  UIScrollView_OnDragNotification_c *v71; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  __int64 v74; // x1
  float v75; // s0
  UnityEngine_Component_o *v76; // x20
  float v77; // s2
  float v78; // s8
  float v79; // s0
  int v80; // w8
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  Il2CppObject *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  Il2CppObject *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  struct UICenterOnChild_o *v92; // x21
  System_Delegate_o *v93; // t1
  SpringPanel_OnFinished_o *v94; // x22
  System_Delegate_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  SpringPanel_OnFinished_c *v98; // x1
  __int64 v99; // x1
  __int64 v100; // x2
  struct UIScrollView_o *summonMBannerScrollView; // x21
  System_Delegate_o *v102; // t1
  UIScrollView_OnDragNotification_o *v103; // x22
  System_Delegate_o *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  UIScrollView_OnDragNotification_c *v107; // x1
  int32_t v108; // w23
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v111; // x27
  __int64 v112; // x1
  UnityEngine_Transform_o *v113; // x20
  UnityEngine_Transform_o *v114; // x21
  int v115; // s0
  int v118; // w25
  System_String_o *v119; // x0
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_Collections_Generic_List_object__o *v125; // x8
  struct System_Object_array *items; // x9
  _QWORD *v127; // x10
  __int64 size; // x11
  GachaBannerComponent_o *v129; // x29
  Il2CppClass **v130; // x0
  int v131; // w8
  int v132; // w9
  int32_t v133; // w26
  System_String_o *v134; // x0
  System_String_o *v135; // x21
  const MethodInfo *v136; // x2
  UnityEngine_Object_o *v137; // x22
  Il2CppObject *Item; // x20
  const MethodInfo *v139; // x6
  System_String_o *v140; // x5
  VaildGachaInfo_o *v141; // x19
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x29
  __int64 v145; // x1
  UnityEngine_Transform_o *v146; // x20
  UnityEngine_Transform_o *v147; // x21
  int v148; // s0
  System_String_o *name; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  System_Collections_Generic_List_object__o *v154; // x8
  struct System_Object_array *v155; // x9
  _QWORD *v156; // x10
  __int64 v157; // x11
  SummonMiniBannerComponent_o *v158; // x27
  Il2CppClass **v159; // x0
  System_String_o *v160; // x0
  System_String_o *v161; // x21
  const MethodInfo *v162; // x2
  UnityEngine_Object_o *v163; // x29
  const MethodInfo *v164; // x2
  Il2CppObject *Component_object; // x22
  __int64 v166; // x1
  __int64 v167; // x2
  SummonMiniBannerComponent_CallbackFunc_o *v168; // x20
  float v169; // s8
  int v170; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v172; // x0
  __int64 v173; // x1
  UnityEngine_Transform_o *v174; // x20
  const MethodInfo *v175; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  Il2CppObject *v177; // x21
  __int64 v178; // x1
  __int64 v179; // x2
  SummonInfoControl_ClickDelegate_o *v180; // x22
  const MethodInfo *v181; // x2
  const MethodInfo *v182; // x1
  int v183; // [xsp+Ch] [xbp-94h]
  int v184; // [xsp+10h] [xbp-90h]
  unsigned int v185; // [xsp+14h] [xbp-8Ch]
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o **p_summonMBannerInfoList; // [xsp+18h] [xbp-88h]
  struct System_Collections_Generic_List_GachaBannerComponent__o **p_bannerInfoList; // [xsp+20h] [xbp-80h]
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // [xsp+28h] [xbp-78h]
  int v189; // [xsp+38h] [xbp-68h]
  int v190; // [xsp+3Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v191; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Component_o **)&byte_49F8000;
  if ( (byte_49F8CA1 & 1) == 0 )
  {
    sub_1B640C8(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&SummonInfoControl_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIPanel___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&UIScrollView_OnDragNotification_TypeInfo, v20);
    sub_1B640C8(&SpringPanel_OnFinished_TypeInfo, v21);
    sub_1B640C8(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v22);
    sub_1B640C8(&Method_SummonControl_OnCenterOnChildFinished__, v23);
    sub_1B640C8(&Method_SummonControl_OnClickMiniBanner__, v24);
    sub_1B640C8(&Method_SummonControl_OnDragStarted__, v25);
    sub_1B640C8(&Method_SummonControl_exeSummon__, v26);
    sub_1B640C8(&StringLiteral_20394/*"img_summon_"*/, v27);
    sub_1B640C8(&StringLiteral_20396/*"img_summon_mini_236"*/, v28);
    sub_1B640C8(&StringLiteral_20395/*"img_summon_mini_"*/, v29);
    sub_1B640C8(&StringLiteral_1/*""*/, v30);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v31);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v32);
    byte_49F8CA1 = 1;
  }
  v190 = 0;
  v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GachaBannerComponent__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v33;
  p_bannerInfoList = &this->fields.bannerInfoList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bannerInfoList, (int32_t)v33, v34, v35);
  v38 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v38;
  p_summonMBannerInfoList = &this->fields.summonMBannerInfoList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.summonMBannerInfoList, (int32_t)v38, v39, v40);
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
    v44 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    *p_bannerLoopCtr = (UnityEngine_Component_o *)v44;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bannerLoopCtr, (int32_t)v44, v45, v46);
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
    v51 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v51;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.centerChild, (int32_t)v51, v52, v53);
  }
  v54 = *p_centerChild;
  if ( !v54 )
    goto LABEL_128;
  onFinished = (System_Delegate_o *)v54->fields.onFinished;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&v54->fields.onFinished;
  v57 = (SpringPanel_OnFinished_o *)sub_1B64314(SpringPanel_OnFinished_TypeInfo, v49, v50);
  SpringPanel_OnFinished___ctor(v57, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
  v58 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v57, 0LL);
  v61 = v58;
  if ( v58 )
  {
    v62 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v58->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v58;
    if ( (SpringPanel_OnFinished_c *)v58->klass != v62 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B6406C(p_onFinished, (int32_t)v58, v59, v60);
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_128;
  onDragStarted = (System_Delegate_o *)summonBannerScrollView->fields.onDragStarted;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&summonBannerScrollView->fields.onDragStarted;
  v67 = (UIScrollView_OnDragNotification_o *)sub_1B64314(UIScrollView_OnDragNotification_TypeInfo, v63, v64);
  UIScrollView_OnDragNotification___ctor(v67, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v68 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v67, 0LL);
  v61 = v68;
  if ( v68 )
  {
    v71 = UIScrollView_OnDragNotification_TypeInfo;
    if ( (UIScrollView_OnDragNotification_c *)v68->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v68;
    if ( (UIScrollView_OnDragNotification_c *)v68->klass != v71 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B6406C(p_onFinished, (int32_t)v68, v69, v70);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_128;
  LODWORD(v3) = vaildGachaList->fields._size;
  width = UnityEngine_Screen__get_width(0LL);
  v75 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  v76 = *p_bannerLoopCtr;
  v77 = (float)((float)(fminf(v75, 2.3333) / 1.7778) * 1024.0) + 4.0;
  if ( v75 < 1.7778 )
    v78 = 1028.0;
  else
    v78 = v77;
  if ( !byte_49F7110 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v74);
    byte_49F7110 = 1;
  }
  noneGachaInfo = (__int64)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !v76 )
    goto LABEL_128;
  v79 = floorf(v78);
  if ( v79 == INFINITY )
    v80 = 0x80000000;
  else
    v80 = (int)v79;
  LODWORD(v76[1].monitor) = v80;
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
    v82 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    this->fields.summonMBannerLoopCtr = (struct UIWrapContent_o *)v82;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.summonMBannerLoopCtr, (int32_t)v82, v83, v84);
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
    v89 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)noneGachaInfo,
            (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v89;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.summonMBannerCenterChild, (int32_t)v89, v90, v91);
  }
  v92 = *p_summonMBannerCenterChild;
  if ( !v92 )
    goto LABEL_128;
  v93 = (System_Delegate_o *)v92->fields.onFinished;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&v92->fields.onFinished;
  v94 = (SpringPanel_OnFinished_o *)sub_1B64314(SpringPanel_OnFinished_TypeInfo, v87, v88);
  SpringPanel_OnFinished___ctor(v94, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
  v95 = System_Delegate__Combine(v93, (System_Delegate_o *)v94, 0LL);
  v61 = v95;
  if ( v95 )
  {
    v98 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v95->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v95;
    if ( (SpringPanel_OnFinished_c *)v95->klass != v98 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0LL;
  }
  sub_1B6406C(p_onFinished, (int32_t)v95, v96, v97);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_128;
  v102 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragStarted;
  p_onFinished = (ServantStatusBattleListViewItem_o *)&summonMBannerScrollView->fields.onDragStarted;
  v103 = (UIScrollView_OnDragNotification_o *)sub_1B64314(UIScrollView_OnDragNotification_TypeInfo, v99, v100);
  UIScrollView_OnDragNotification___ctor(v103, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
  v104 = System_Delegate__Combine(v102, (System_Delegate_o *)v103, 0LL);
  v61 = v104;
  if ( !v104 )
    goto LABEL_65;
  v107 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v104->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v104;
    if ( (UIScrollView_OnDragNotification_c *)v104->klass == v107 )
      goto LABEL_66;
  }
LABEL_64:
  sub_1B645E4(v61);
LABEL_65:
  p_onFinished->klass = (ServantStatusBattleListViewItem_c *)v61;
LABEL_66:
  sub_1B6406C(p_onFinished, (int32_t)v61, v105, v106);
  v189 = 2 * (_DWORD)v3;
  if ( 2 * (int)v3 >= 1 )
  {
    v108 = 0;
    v184 = (_DWORD)v3 - 1;
    v185 = (unsigned int)v3 & 0x80000000;
    v183 = (int)v3;
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
      v111 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v113 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_49F7116 )
      {
        noneGachaInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v112);
        byte_49F7116 = 1;
      }
      if ( !v113 )
        break;
      UnityEngine_Transform__set_localScale(v113, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v111, 0LL);
      if ( !*p_bannerLoopCtr )
        break;
      v114 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v115 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v114 )
        break;
      UnityEngine_Transform__set_localPosition(v114, *(UnityEngine_Vector3_o *)&v115, 0LL);
      v118 = v108 + 1;
      v190 = v108 + 1;
      v119 = System_Int32__ToString((int32_t)&v190, 0LL);
      v120 = System_String__Concat_61375396((System_String_o *)StringLiteral_1213/*"0"*/, v119, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v111, v120, 0LL);
      if ( v190 >= 10 )
      {
        v121 = System_Int32__ToString((int32_t)&v190, 0LL);
        v122 = System_String__Concat_61375396((System_String_o *)StringLiteral_1267/*"1"*/, v121, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v111, v122, 0LL);
      }
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v111,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
      v125 = (System_Collections_Generic_List_object__o *)*p_bannerInfoList;
      if ( !*p_bannerInfoList )
        break;
      items = v125->fields._items;
      v127 = Method_System_Collections_Generic_List_GachaBannerComponent__Add__;
      ++v125->fields._version;
      if ( !items )
        break;
      size = v125->fields._size;
      v129 = (GachaBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v125,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v130 = &items->obj.klass + size;
        v125->fields._size = size + 1;
        v130[4] = (Il2CppClass *)v129;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v130 + 4), (int32_t)v129, v123, v124);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      v131 = v108 | v185;
      v132 = (int)(v108 | v185) <= v184 ? 0 : (int)v3;
      if ( !noneGachaInfo )
        break;
      v133 = v131 - v132;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v131 - v132,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v3 = p_bannerLoopCtr;
      v134 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v135 = System_String__Concat_61375396((System_String_o *)StringLiteral_20394/*"img_summon_"*/, v134, 0LL);
      noneGachaInfo = (__int64)SummonControl__searchBannerImg(this, v135, v136);
      if ( !this->fields.vaildGachaList )
        break;
      v137 = (UnityEngine_Object_o *)noneGachaInfo;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList,
               v133,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      noneGachaInfo = UnityEngine_Object__op_Equality(v137, 0LL, 0LL);
      if ( !v129 )
        break;
      v140 = (noneGachaInfo & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v135;
      v141 = (VaildGachaInfo_o *)Item;
      GachaBannerComponent__setBannerGachaInfo(
        v129,
        (VaildGachaInfo_o *)Item,
        v133,
        v108,
        (UnityEngine_GameObject_o *)v137,
        v140,
        v139);
      noneGachaInfo = (__int64)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        break;
      summonMBannerPrefab = this->fields.summonMBannerPrefab;
      v143 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 summonMBannerPrefab,
                                 v143,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      v144 = (UnityEngine_GameObject_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v146 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_49F7116 )
      {
        noneGachaInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v145);
        byte_49F7116 = 1;
      }
      if ( !v146 )
        break;
      UnityEngine_Transform__set_localScale(v146, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform(v144, 0LL);
      if ( !*p_summonMBannerLoopCtr )
        break;
      v147 = (UnityEngine_Transform_o *)noneGachaInfo;
      noneGachaInfo = (__int64)UnityEngine_Component__get_transform(*p_summonMBannerLoopCtr, 0LL);
      if ( !noneGachaInfo )
        break;
      *(UnityEngine_Vector3_o *)&v148 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)noneGachaInfo,
                                          0LL);
      if ( !v147 )
        break;
      UnityEngine_Transform__set_localPosition(v147, *(UnityEngine_Vector3_o *)&v148, 0LL);
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v111, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v144, name, 0LL);
      noneGachaInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v144,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
      v154 = (System_Collections_Generic_List_object__o *)*p_summonMBannerInfoList;
      if ( !*p_summonMBannerInfoList )
        break;
      v155 = v154->fields._items;
      v156 = Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__;
      ++v154->fields._version;
      if ( !v155 )
        break;
      v157 = v154->fields._size;
      v158 = (SummonMiniBannerComponent_o *)noneGachaInfo;
      if ( (unsigned int)v157 >= v155->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v154,
          (Il2CppObject *)noneGachaInfo,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
      }
      else
      {
        v159 = &v155->obj.klass + v157;
        v154->fields._size = v157 + 1;
        v159[4] = (Il2CppClass *)v158;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v159 + 4), (int32_t)v158, v152, v153);
      }
      noneGachaInfo = (__int64)this->fields.vaildGachaList;
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)noneGachaInfo,
                                 v133,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !noneGachaInfo )
        break;
      v160 = System_Int32__ToString((int)noneGachaInfo + 40, 0LL);
      v161 = System_String__Concat_61375396((System_String_o *)StringLiteral_20395/*"img_summon_mini_"*/, v160, 0LL);
      v163 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v161, v162);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v163, 0LL, 0LL) )
      {
        v161 = (System_String_o *)StringLiteral_20396/*"img_summon_mini_236"*/;
        v163 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                         this,
                                         (System_String_o *)StringLiteral_20396/*"img_summon_mini_236"*/,
                                         v164);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v163, 0LL, 0LL) )
          v161 = (System_String_o *)StringLiteral_1/*""*/;
      }
      noneGachaInfo = (__int64)this->fields.summonMBannerScrollView;
      if ( !noneGachaInfo )
        break;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)noneGachaInfo,
                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      v168 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_1B64314(
                                                           SummonMiniBannerComponent_CallbackFunc_TypeInfo,
                                                           v166,
                                                           v167);
      SummonMiniBannerComponent_CallbackFunc___ctor(
        v168,
        (Il2CppObject *)this,
        (intptr_t)Method_SummonControl_OnClickMiniBanner__,
        0LL);
      if ( !v158 )
        break;
      SummonMiniBannerComponent__SetBannerInfo(
        v158,
        v141,
        v133,
        v108,
        (UnityEngine_GameObject_o *)v163,
        v161,
        v168,
        (UIPanel_o *)Component_object,
        0LL);
      p_bannerLoopCtr = v3;
      LODWORD(v3) = v183;
      ++v108;
      if ( v189 == v118 )
        goto LABEL_120;
    }
LABEL_128:
    sub_1B64324(noneGachaInfo);
  }
LABEL_120:
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  v169 = fminf(640.0 / (float)(int)v3, 25.0);
  v170 = (_DWORD)v3 - 1;
  *(float *)(noneGachaInfo + 48) = v169;
  if ( (int)v3 >= 1 )
  {
    do
    {
      slideIndexPrefab = this->fields.slideIndexPrefab;
      v172 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)noneGachaInfo, 0LL);
      noneGachaInfo = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 slideIndexPrefab,
                                 v172,
                                 0LL,
                                 0LL);
      if ( !noneGachaInfo )
        break;
      noneGachaInfo = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)noneGachaInfo, 0LL);
      v174 = (UnityEngine_Transform_o *)noneGachaInfo;
      if ( !byte_49F7116 )
      {
        noneGachaInfo = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v173);
        byte_49F7116 = 1;
      }
      if ( !v174 )
        break;
      UnityEngine_Transform__set_localScale(v174, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      LODWORD(v3) = (_DWORD)v3 - 1;
      if ( !(_DWORD)v3 )
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
  v191.fields.z = this->fields.center.fields.z;
  v191.fields.y = this->fields.center.fields.y;
  v191.fields.x = (float)(v169 * -0.5) * (float)v170;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)noneGachaInfo, v191, 0LL);
  noneGachaInfo = (__int64)this->fields.sliderGrid;
  if ( !noneGachaInfo )
    goto LABEL_128;
  UIGrid__set_repositionNow((UIGrid_o *)noneGachaInfo, 1, 0LL);
  SummonControl__UpdateSummonInfoControlLayout(this, v175);
  noneGachaInfo = (__int64)this->fields.vaildGachaList;
  if ( !noneGachaInfo )
    goto LABEL_128;
  summonInfoCtr = this->fields.summonInfoCtr;
  v177 = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)noneGachaInfo,
           this->fields.currentIdx,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  v180 = (SummonInfoControl_ClickDelegate_o *)sub_1B64314(SummonInfoControl_ClickDelegate_TypeInfo, v178, v179);
  SummonInfoControl_ClickDelegate___ctor(v180, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr )
    goto LABEL_128;
  SummonInfoControl__SetSummonInfo(summonInfoCtr, (VaildGachaInfo_o *)v177, v180, 0LL);
  SummonControl__setSliderIcon(this, this->fields.currentIdx, v181);
  SummonControl__setResourceInfo(this, v182);
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

  if ( (byte_49F8CFE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8CFE = 1;
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
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_33:
    sub_1B64324(bannerLoopCtr);
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
      UnityEngine_Object__DestroyImmediate_69127924(v9, 0LL);
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
      UnityEngine_Object__DestroyImmediate_69127924(v11, 0LL);
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
  __int64 *v9; // x8

  if ( (byte_49F8CC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B640C8(&StringLiteral_10446/*"PURCHASE_ERROR"*/, v5);
    sub_1B640C8(&StringLiteral_10445/*"PURCHASE_CANCEL"*/, v6);
    sub_1B640C8(&StringLiteral_10447/*"PURCHASE_OK"*/, v7);
    byte_49F8CC3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B64324(Instance);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v9 = &StringLiteral_10445/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v9 = &StringLiteral_10446/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v9 = &StringLiteral_10447/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  __int64 *v9; // x8

  if ( (byte_49F8CBC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B640C8(&StringLiteral_10446/*"PURCHASE_ERROR"*/, v5);
    sub_1B640C8(&StringLiteral_10445/*"PURCHASE_CANCEL"*/, v6);
    sub_1B640C8(&StringLiteral_10447/*"PURCHASE_OK"*/, v7);
    byte_49F8CBC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10445/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B64324(Instance);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10446/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10447/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
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
  __int64 *v9; // x8

  if ( (byte_49F8CBA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B640C8(&StringLiteral_10446/*"PURCHASE_ERROR"*/, v5);
    sub_1B640C8(&StringLiteral_10445/*"PURCHASE_CANCEL"*/, v6);
    sub_1B640C8(&StringLiteral_10447/*"PURCHASE_OK"*/, v7);
    byte_49F8CBA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10445/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B64324(Instance);
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10446/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10447/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0LL);
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
  __int64 v9; // x2
  SummonControl___c_c *v10; // x8
  float x; // s9
  float y; // s12
  float m_XMin; // s8
  float m_YMin; // s13
  float m_Height; // s10
  float m_Width; // s11
  CommonUI_o *v17; // x20
  System_Action_o *_9__145_0; // x21
  Il2CppObject *v19; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x20
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_49F8C93 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl__exeFormation_b__145_1__, v4);
    sub_1B640C8(&Method_SummonControl___c__exeFormation_b__145_0__, v5);
    sub_1B640C8(&SummonControl___c_TypeInfo, v6);
    byte_49F8C93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = SummonControl___c_TypeInfo;
  x = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.x;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  v17 = (CommonUI_o *)Instance;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v10 = SummonControl___c_TypeInfo;
  }
  _9__145_0 = v10->static_fields->__9__145_0;
  if ( !_9__145_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SummonControl___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v10->static_fields->__9;
    _9__145_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(_9__145_0, v19, Method_SummonControl___c__exeFormation_b__145_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__145_0 = _9__145_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__145_0, (int32_t)_9__145_0, v21, v22);
  }
  if ( !v17 )
    sub_1B64324(Instance);
  v27.fields.m_YMin = m_YMin + 33.0;
  v26.fields.y = y + 33.0;
  v26.fields.x = x;
  v27.fields.m_XMin = m_XMin;
  v27.fields.m_Width = m_Width;
  v27.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v17, v26, 0.0, v27, _9__145_0, 0LL);
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__145_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v25, 0LL);
}


void __fastcall SummonControl__exeSummon(
        SummonControl_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_GameObject_o *closeBtn; // x0
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_49F8CB4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3440/*"CHECK_SERVANT_FRAME"*/, paramData);
    byte_49F8CB4 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.gachaParamData, (int32_t)paramData, v5, v6);
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
      sub_1B64324(closeBtn);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3440/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  CombineResultEffectComponent_ClickDelegate_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_49F8CF9 & 1) == 0 )
  {
    sub_1B640C8(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl__executeEnhanceTresureDevice_b__266_0__, v4);
    byte_49F8CF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v7 = (CommonUI_o *)Instance;
  v10 = (CombineResultEffectComponent_ClickDelegate_o *)sub_1B64314(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v8,
                                                          v9);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__266_0__,
    0LL);
  if ( !v7 )
    sub_1B64324(v11);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v7, npEnhanceSvtId, v10, 0LL);
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
  SummonControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SummonInfoControl_o *summonInfoCtr; // x9
  _BOOL4 isFree; // w9
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t friendPoint; // w20
  int32_t gachaResourceNum; // w26
  SummonConfirmDlgComponent_o *v19; // x22
  int32_t needPoint; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v21; // x23
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x24
  const MethodInfo *v26; // x6

  v3 = this;
  if ( (byte_49F8CD4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_SummonControl_autoSellSettingChange2__, v5);
    this = (SummonControl_o *)sub_1B640C8(&Method_SummonControl_friendSummonConfirmResult__, v6);
    byte_49F8CD4 = 1;
  }
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  isFree = summonInfoCtr->fields.isFree;
  v3->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v3->fields.confirmDlgInfo;
    v10 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)v3,
      (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
      v11);
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)v3, Method_SummonControl_autoSellSettingChange2__, 0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v10, v14, v15);
      return;
    }
LABEL_10:
    sub_1B64324(this);
  }
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_10;
  friendPoint = v3->fields.friendPoint;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  v19 = v3->fields.confirmDlgInfo;
  needPoint = v3->fields.needPoint;
  v21 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                      SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                      method,
                                                      v2);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)v3,
    (intptr_t)Method_SummonControl_friendSummonConfirmResult__,
    v22);
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)v3, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v19 )
    goto LABEL_10;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v19,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v21,
    v25,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_49F8CD5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_friendSummonConfirmResult__, res);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v5);
    byte_49F8CD5 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_10;
  SummonConfirmDlgComponent__Close_32804452(confirmDlgInfo, 0LL, method);
  v7 = Method_SummonControl_friendSummonConfirmResult__;
  if ( (*((_BYTE *)Method_SummonControl_friendSummonConfirmResult__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_SummonControl_friendSummonConfirmResult__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
    sub_1B64324(confirmDlgInfo);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *gachaMst; // x0

  if ( (byte_49F8C9E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId);
    byte_49F8C9E = 1;
  }
  gachaMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.gachaMst;
  if ( !gachaMst )
    sub_1B64324(0LL);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            gachaMst,
                            gachaId,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *vaildGachaList; // x0
  int32_t v5; // w20

  if ( (byte_49F8CFC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    byte_49F8CFC = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_9:
    sub_1B64324(vaildGachaList);
  v5 = 0;
  while ( v5 < vaildGachaList->fields._size )
  {
    vaildGachaList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    vaildGachaList,
                                                                    v5,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
  Il2CppObject *MasterData_object; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8C9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F8C9D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B64324(Instance);
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
  ServantStatusBattleListViewItem_o *p_stoneFragmentsShopEntity; // x19
  ShopEntity_o *EntityOfFragmentsShop; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F8C8E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49F8C8E = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_object )
      sub_1B64324(0LL);
    p_stoneFragmentsShopEntity = (ServantStatusBattleListViewItem_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = ShopMaster__GetEntityOfFragmentsShop((ShopMaster_o *)Master_object, 0LL);
    p_stoneFragmentsShopEntity->klass = (ServantStatusBattleListViewItem_c *)EntityOfFragmentsShop;
    sub_1B6406C(p_stoneFragmentsShopEntity, (int32_t)EntityOfFragmentsShop, v8, v9);
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

  if ( (byte_49F8C8D & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49F8C8D = 1;
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
  __int64 v8; // x1
  ServantFlagReleaseMaster_o *v9; // x21
  il2cpp_array_size_t v10; // w25
  bool v11; // w24
  struct GachaInfos_array *v12; // x8
  GachaInfos_o *v13; // x8
  int32_t objectId; // w22
  bool result; // w0

  v4 = this;
  if ( (byte_49F8CF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId);
    this = (SummonControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F8CF5 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_17;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
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
        sub_1B6432C(this, v8);
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
    sub_1B64324(this);
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
          sub_1B6432C(this, *(_QWORD *)&svtId);
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
    sub_1B64324(this);
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
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  il2cpp_array_size_t v9; // w22
  bool v10; // w24
  struct GachaInfos_array *v11; // x8
  GachaInfos_o *v12; // x25

  v2 = this;
  if ( (byte_49F8CE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    this = (SummonControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F8CE9 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_18;
  max_length = gachaResInfoList->max_length;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_18;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      v11 = v2->fields.gachaResInfoList;
      if ( !v11 )
        break;
      if ( v9 >= v11->max_length )
        sub_1B6432C(this, v7);
      v12 = v11->m_Items[v9];
      if ( !v12 || !v8 )
        break;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  v8,
                                  v12->fields.objectId,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !this
        || (this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL),
            ((unsigned __int8)this & 1) == 0)
        || !v12->fields.isNew )
      {
        v10 = (int)++v9 < max_length;
        if ( max_length != v9 )
          continue;
      }
      return v10;
    }
LABEL_18:
    sub_1B64324(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_49F8D07 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v5);
    byte_49F8D07 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(limitWarningDlgInfo);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
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
  const MethodInfo *v12; // x1
  _DWORD *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w20
  BalanceConfig_c *v17; // x0
  const MethodInfo *v18; // x1
  SummonLimitWarningDlgComponent_o *v19; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x22

  if ( (byte_49F8D06 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&res);
    sub_1B640C8(&BalanceConfig_TypeInfo, v5);
    sub_1B640C8(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B640C8(&Method_SummonControl_limitManaConfirmResult__, v8);
    sub_1B640C8(&Method_SummonControl_showConfirmDlg__, v9);
    sub_1B640C8(&StringLiteral_3511/*"CLICK_CANCEL"*/, v10);
    byte_49F8D06 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_21;
  SummonLimitWarningDlgComponent__Close((SummonLimitWarningDlgComponent_o *)limitWarningDlgInfo, 0LL);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, v12) )
      {
        limitWarningDlgInfo = UserGameMaster__getSelfUserGame(0LL);
        if ( !limitWarningDlgInfo )
          goto LABEL_21;
        v13 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 62), 0LL) )
          goto LABEL_18;
        v16 = v13[46];
        v17 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        if ( v16 >= v17->static_fields->UserItemMax )
        {
          v19 = this->fields.limitWarningDlgInfo;
          v20 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                   SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                                   v14,
                                                                   v15);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
          System_Action___ctor(v23, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v19 )
            goto LABEL_21;
          SummonLimitWarningDlgComponent__OpenManaWarning(v19, v20, v23, 0LL);
        }
        else
        {
LABEL_18:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v18);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_21:
      sub_1B64324(limitWarningDlgInfo);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_21;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3511/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SummonRootComponent_o *klass; // x20
  System_Action_o *v10; // x21
  __int64 methodPtr_low; // x9
  SummonControl_o *v12; // x0
  bool v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_49F8CDC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl__loadAssetsForSummon_b__229_0__, v4);
    sub_1B640C8(&SummonRootComponent_TypeInfo, v5);
    byte_49F8CDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (klass = (SummonRootComponent_o *)Instance[2].klass,
        v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__229_0__, 0LL),
        !klass) )
  {
    sub_1B64324(Instance);
  }
  methodPtr_low = LOBYTE(SummonRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(klass->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SummonRootComponent_c *)klass->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(klass, v10, 0LL);
  }
  else
  {
    sub_1B645E4(klass);
    SummonControl__friendSummonConfirmResult(v12, v13, v14);
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

  if ( (byte_49F8CAB & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_onClickChangeBanner__, method);
    sub_1B640C8(&StringLiteral_12626/*"SetBannerCenter"*/, v3);
    byte_49F8CAB = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_69112316(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12626/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SummonControl_onClickChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B64324(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_46383920(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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

  if ( (byte_49F8CAC & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonControl_onClickLeftChangeBanner__, method);
    sub_1B640C8(&StringLiteral_12626/*"SetBannerCenter"*/, v3);
    byte_49F8CAC = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_69112316(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12626/*"SetBannerCenter"*/,
      0LL);
    v5 = Method_SummonControl_onClickLeftChangeBanner__;
    if ( (*((_BYTE *)Method_SummonControl_onClickLeftChangeBanner__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SummonControl_onClickLeftChangeBanner__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
      || (UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_1B64324(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_46383920(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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
  __int64 v20; // x2
  float v21; // s0
  SummonControl___c_c *v22; // x0
  float v23; // s11
  System_Action_o *_9__144_0; // x22
  Il2CppObject *v25; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x20
  UnityEngine_Rect_o v32; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_49F8C92 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl__openAfterSummonInfo_b__144_1__, v5);
    sub_1B640C8(&Method_SummonControl___c__openAfterSummonInfo_b__144_0__, v6);
    sub_1B640C8(&SummonControl___c_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_13435/*"TUTORIAL_MESSAGE_SUMMON2"*/, v8);
    byte_49F8C92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13435/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v11);
  m_XMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_XMin;
  m_YMin = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Width = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Width;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  v21 = SummonControl__FSMenuOffsetX(v17, v18);
  v22 = SummonControl___c_TypeInfo;
  v23 = v21;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v22 = SummonControl___c_TypeInfo;
  }
  _9__144_0 = v22->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = SummonControl___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__144_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
    System_Action___ctor(_9__144_0, v25, Method_SummonControl___c__openAfterSummonInfo_b__144_0__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = _9__144_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v27, v28);
  }
  if ( !Instance )
    sub_1B64324(v22);
  v32.fields.m_Height = m_Height + 33.0;
  v32.fields.m_YMin = m_YMin + 33.0;
  v32.fields.m_XMin = m_XMin + v23;
  v32.fields.m_Width = m_Width;
  CommonUI__OpenTutorialNotificationDialogArrow(
    (CommonUI_o *)Instance,
    v10,
    TUTORIAL_MENU_ARROW_POS_FS,
    v32,
    0.0,
    0LL,
    -1,
    _9__144_0,
    0LL);
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__144_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v31, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_49F8C91 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3504/*"CLEAR_TUTORIAL"*/, method);
    byte_49F8C91 = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3504/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_1B64324(tutorialArrowObj);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v17; // x19
  void *Item; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v22; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  void **v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w21
  __int64 v30; // x21
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x21
  System_Comparison_T__o *v45; // x22
  Il2CppObject *v46; // x23
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_List_object__o *v50; // x22
  int32_t v51; // w21
  int32_t v52; // w22
  System_Action_o *v53; // x20

  if ( (byte_49F8C94 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Comparison_EventTutorialEntity__TypeInfo, v4);
    sub_1B640C8(&EventTutorialEntity_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v11);
    sub_1B640C8(&TutorialFlag_TypeInfo, v12);
    sub_1B640C8(&Method_SummonControl___c__openSvtEqInfo_b__146_1__, v13);
    sub_1B640C8(&Method_SummonControl___c__DisplayClass146_0__openSvtEqInfo_b__0__, v14);
    sub_1B640C8(&SummonControl___c__DisplayClass146_0_TypeInfo, v15);
    sub_1B640C8(&SummonControl___c_TypeInfo, v16);
    byte_49F8C94 = 1;
  }
  v17 = sub_1B64314(SummonControl___c__DisplayClass146_0_TypeInfo, method, v2);
  SummonControl___c__DisplayClass146_0___ctor((SummonControl___c__DisplayClass146_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  *(_QWORD *)(v17 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v19, v20);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_11;
  v22 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v22, 0LL);
  *(_QWORD *)(v17 + 16) = EventTutorialEntity;
  v24 = (void **)(v17 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)EventTutorialEntity, v25, v26);
  Item = *(void **)(v17 + 16);
  if ( !Item )
    goto LABEL_11;
  v29 = 0;
  while ( v29 < *((_DWORD *)Item + 6) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v29,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Item )
      goto LABEL_11;
    if ( *((_DWORD *)Item + 6) == 1 )
      goto LABEL_28;
    Item = *v24;
    ++v29;
    if ( !*v24 )
      goto LABEL_11;
  }
  v30 = sub_1B64314(EventTutorialEntity_TypeInfo, v27, v28);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_11;
  *(_DWORD *)(v30 + 24) = 1;
  v31 = sub_1B64170(int___TypeInfo, 1LL);
  *(_QWORD *)(v30 + 80) = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 80), v31, v32, v33);
  v37 = *(_QWORD *)(v30 + 80);
  if ( !v37 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v37 + 24) )
    sub_1B6432C(Item, v34);
  *(_DWORD *)(v37 + 32) = 1;
  Item = *v24;
  if ( !*v24 )
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
      (Il2CppObject *)v30,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v38 + 8 * v40;
    *((_DWORD *)Item + 6) = v40 + 1;
    *(_QWORD *)(v41 + 32) = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 32), v30, v35, v36);
  }
  Item = SummonControl___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)*v24;
  if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    Item = SummonControl___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)Item + 23) + 24LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = SummonControl___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v45 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventTutorialEntity__TypeInfo, v42, v43);
    System_Comparison_object____ctor(v45, v46, Method_SummonControl___c__openSvtEqInfo_b__146_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__146_1 = (struct System_Comparison_EventTutorialEntity__o *)v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__146_1, (int32_t)v45, v48, v49);
  }
  if ( !v44 )
    goto LABEL_11;
  System_Collections_Generic_List_object___Sort_55243320(
    v44,
    v45,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v50 = (System_Collections_Generic_List_object__o *)*v24;
  if ( !*v24 )
LABEL_11:
    sub_1B64324(Item);
  v51 = v50->fields._size - 1;
  if ( v51 >= 0 )
  {
    while ( v50 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v50,
               v51,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Item )
        break;
      if ( *((_DWORD *)Item + 6) != 1 )
      {
        Item = *v24;
        if ( !*v24 )
          goto LABEL_11;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Item,
                 v51,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
        if ( !Item )
          goto LABEL_11;
        v52 = *((_DWORD *)Item + 6);
        if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        Item = (void *)TutorialFlag__GetGachaFlg(v52, 0LL);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = *v24;
          if ( !*v24 )
            goto LABEL_11;
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)Item,
            v51,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v50 = (System_Collections_Generic_List_object__o *)*v24;
      if ( --v51 < 0 )
        goto LABEL_41;
    }
    goto LABEL_11;
  }
LABEL_41:
  v53 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(v53, (Il2CppObject *)v17, Method_SummonControl___c__DisplayClass146_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v50,
    v53,
    0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  TutorialSetRequest_o *Request_object; // x0

  if ( (byte_49F8CE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_callbackTutorialSet__, v7);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v8);
    byte_49F8CE0 = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (TutorialSetRequest_o *)NetworkManager__getRequest_object_(
                                               v9,
                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_object )
    {
      TutorialSetRequest__beginRequest(Request_object, 101, 0LL);
      Request_object = (TutorialSetRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_object )
      {
        AdManager__TrackEvent((AdManager_o *)Request_object, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B64324(Request_object);
  }
  Request_object = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_object )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11006/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__progTutorial(SummonControl_o *this, const MethodInfo *method)
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
      SummonControl__openSummonExeArrow(this, v5);
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
        sub_1B64324(summonInfoCtr);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
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
  const MethodInfo *v18; // x1
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_49F8C98 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49F8C98 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_21;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  this->fields.gachaSubEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.gachaSubEntity, 0, v7, v8);
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
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B64324(summonBannerInfo);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v16 = VaildPayType;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F8D23 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
    byte_49F8D23 = 1;
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
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, v18);
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

  if ( (byte_49F8CFB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49F8CFB = 1;
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
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  if ( !Item )
LABEL_25:
    sub_1B64324(Item);
  if ( *((_DWORD *)Item + 13) != 3 )
  {
    Item = this->fields.vaildGachaList;
    if ( Item )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               this->fields.currentIdx,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( Item )
      {
        v9 = *((_DWORD *)Item + 4);
        Item = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Item )
        {
          Item = DataManager__GetMasterData_object_(
                   (DataManager_o *)Item,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( Item )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Item,
                       v9,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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

  if ( (byte_49F8C97 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49F8C97 = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.bannerAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_1B6406C(p_bannerAssetData, 0, v5, v6);
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
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  int32_t shopIdIdx; // w24
  Il2CppObject *p_obj; // x27
  GachaDrawRequest_o *v21; // x19
  __int64 v22; // x8
  System_String_o *v23; // x29
  unsigned __int64 v24; // x22
  int32_t v25; // w28
  System_String_o *v26; // x0
  System_String_o *selectBonusListData; // x28
  int32_t ticketItemId; // [xsp+14h] [xbp-6Ch]
  int32_t warId; // [xsp+18h] [xbp-68h]
  int32_t gachaTime; // [xsp+1Ch] [xbp-64h]

  if ( (byte_49F8CDD & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_GachaDrawRequest___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B640C8(&Method_SummonControl_callbackGachaDraw__, v7);
    sub_1B640C8(&StringLiteral_175/*" : "*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49F8CDD = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
  NetworkManager_ResultCallbackFunc___ctor(v13, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_object_(
                                             v13,
                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
  v21 = (GachaDrawRequest_o *)maskObject;
  ticketItemId = gachaParamData->fields.ticketItemId;
  if ( storyAdjustIds )
  {
    v22 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v22 )
    {
      if ( (int)v22 >= 1 )
      {
        v23 = (System_String_o *)StringLiteral_1/*""*/;
        v24 = 0LL;
        v25 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v24 >= (unsigned int)v22 )
            sub_1B6432C(maskObject, v14);
          v26 = System_Int32__ToString(v25, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_61386656(
                                                     v23,
                                                     v26,
                                                     (System_String_o *)StringLiteral_175/*" : "*/,
                                                     0LL);
          LODWORD(v22) = storyAdjustIds->max_length;
          ++v24;
          v23 = (System_String_o *)maskObject;
          v25 += 4;
        }
        while ( (__int64)v24 < (int)v22 );
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v21) )
LABEL_22:
    sub_1B64324(maskObject);
  GachaDrawRequest__beginRequest(
    v21,
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
  System_String_o *MainBgmName; // x20
  CommonUI_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8CFA & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&BgmManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1B640C8(&SoundManager_TypeInfo, v10);
    byte_49F8CFA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
    goto LABEL_27;
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Instance, this->fields.fsm, 1, 0LL, 36, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_27;
  TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)Instance, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v14);
  SummonControl__setUserResourceDisp(this, v15);
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
    SummonControl__progTutorial(this, v16);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)Instance, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v17);
  }
  Instance = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !Instance )
LABEL_27:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_1B64324(0LL);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v20.fields._current, v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v19);
}


void __fastcall SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v4, v5);
  SummonControl__resetStoneInfo(this, v6);
}


void __fastcall SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_49F8CF4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl__resetResultList_b__261_0__, v5);
    sub_1B640C8(&TutorialFlag_TypeInfo, v6);
    byte_49F8CF4 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_13;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__261_0__, 0LL);
  if ( !v12 )
LABEL_13:
    sub_1B64324(Instance);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  struct GachaRqParamData_o *gachaParamData; // x8

  if ( (byte_49F8CFF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v4);
    sub_1B640C8(&StringLiteral_3032/*"BONUS_SELECT_GACHA"*/, v5);
    byte_49F8CFF = 1;
  }
  SummonControl__setUserResourceDisp(this, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_13;
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  gachaParamData->fields.gachaId,
                                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_13;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.fsm;
    if ( !Master_object )
      goto LABEL_13;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Master_object, (System_String_o *)StringLiteral_3032/*"BONUS_SELECT_GACHA"*/, 0LL);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.summonInfoCtr;
  if ( !Master_object )
LABEL_13:
    sub_1B64324(Master_object);
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)Master_object, 0LL);
}


bool __fastcall SummonControl__resetSummonVaildData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 gachaMst; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct GachaEntity_array *useGachaData; // x8
  __int64 v8; // x19
  __int64 v9; // x9
  ServantStatusBattleListViewItem_o *p_useGachaData; // x20
  unsigned int v11; // w10
  unsigned int v12; // w21

  gachaMst = (__int64)this->fields.gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  gachaMst = (__int64)GachaMaster__getListValidData((GachaMaster_o *)gachaMst, 0LL);
  useGachaData = this->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_15;
  v8 = gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  v9 = *(_QWORD *)&useGachaData->max_length;
  p_useGachaData = (ServantStatusBattleListViewItem_o *)&this->fields.useGachaData;
  if ( (_DWORD)v9 == *(_DWORD *)(gachaMst + 24) )
  {
    if ( (int)v9 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v9 || (v12 = v11, v11 >= *(_DWORD *)(v8 + 24)) )
          sub_1B6432C(gachaMst, v4);
        gachaMst = (__int64)useGachaData->m_Items[v11];
        if ( !gachaMst )
          break;
        gachaMst = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)gachaMst + 312LL))(
                     gachaMst,
                     *(_QWORD *)(v8 + 8LL * (int)v11 + 32),
                     *(_QWORD *)(*(_QWORD *)gachaMst + 320LL));
        if ( (gachaMst & 1) == 0 )
          goto LABEL_14;
        useGachaData = (struct GachaEntity_array *)p_useGachaData->klass;
        if ( !p_useGachaData->klass )
          break;
        LODWORD(v9) = useGachaData->max_length;
        v11 = v12 + 1;
        if ( (int)(v12 + 1) >= (int)v9 )
          return 1;
      }
LABEL_15:
      sub_1B64324(gachaMst);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B6406C(p_useGachaData, v8, v5, v6);
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
  __int64 v8; // x1
  int v9; // w8
  _DWORD *v10; // x20
  unsigned int v11; // w23
  char *v12; // x8
  UnityEngine_GameObject_o *v13; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_49F8CA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObjectList_GameObject___, searchTarget);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F8CA2 = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_17;
  bannerAssetData = AssetData__GetObjectList_object_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_2E1BBD4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_17;
  v9 = *((_DWORD *)bannerAssetData + 6);
  v10 = bannerAssetData;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1B6432C(bannerAssetData, v8);
      v12 = (char *)&v10[2 * v11];
      v13 = (UnityEngine_GameObject_o *)*((_QWORD *)v12 + 4);
      if ( !v13 )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           *((UnityEngine_GameObject_o **)v12 + 4),
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bannerAssetData = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)bannerAssetData & 1) != 0 )
      {
        if ( !Component_object )
          break;
        bannerAssetData = UIAtlas__GetSprite((UIAtlas_o *)Component_object, searchTarget, 0LL);
        if ( bannerAssetData )
          return v13;
      }
      v9 = v10[6];
      if ( (int)++v11 >= v9 )
        return 0LL;
    }
LABEL_17:
    sub_1B64324(bannerAssetData);
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

  if ( (byte_49F8CFD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, *(_QWORD *)&extraGroupId);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49F8CFD = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_18:
    sub_1B64324(vaildGachaList);
  v12 = 0;
  while ( v12 < *((_DWORD *)vaildGachaList + 6) )
  {
    vaildGachaList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)vaildGachaList,
                       v12,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
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
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    if ( !vaildGachaList )
      goto LABEL_18;
    v13 = *((_DWORD *)vaildGachaList + 4);
    vaildGachaList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !vaildGachaList )
      goto LABEL_18;
    vaildGachaList = DataManager__GetMasterData_object_(
                       (DataManager_o *)vaildGachaList,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !vaildGachaList )
      goto LABEL_18;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)vaildGachaList,
               v13,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  __int64 v4; // x1
  unsigned int klass; // w8
  float32x2_t *v6; // x20
  unsigned __int64 v7; // x21
  float *p_m_CachedPtr; // x22
  float v9; // s8
  float v10; // s9
  float v11; // s10
  int v12; // s0
  int v13; // s1
  int v14; // s2
  float v15; // s1
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
  if ( !indexPanel
    || (indexPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))indexPanel->klass[1]._1.klass)(
                                                  indexPanel,
                                                  indexPanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1B64324(indexPanel);
  }
  klass = (unsigned int)indexPanel[1].klass;
  v6 = (float32x2_t *)indexPanel;
  v7 = 0LL;
  p_m_CachedPtr = (float *)&indexPanel[1].fields.m_CachedPtr;
  do
  {
    if ( v7 >= klass )
      goto LABEL_12;
    indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
    if ( !indexPanel )
      goto LABEL_11;
    v9 = *(p_m_CachedPtr - 2);
    v10 = *(p_m_CachedPtr - 1);
    v11 = *p_m_CachedPtr;
    indexPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(indexPanel, 0LL);
    if ( !indexPanel )
      goto LABEL_11;
    v16.fields.x = v9;
    v16.fields.y = v10;
    v16.fields.z = v11;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)indexPanel,
                                       v16,
                                       0LL);
    if ( v7 >= v6[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v12;
    *((_DWORD *)p_m_CachedPtr - 1) = v13;
    *(_DWORD *)p_m_CachedPtr = v14;
    p_m_CachedPtr += 3;
    klass = v6[3].n64_u32[0];
    ++v7;
  }
  while ( v7 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1B6432C(indexPanel, v4);
  v15 = v6[5].n64_f32[0] + (float)((float)(v6[8].n64_f32[0] - v6[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v6[4],
                                                    vmul_f32(vsub_f32(v6[7], v6[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15;
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
  __int64 v14; // x1
  __int64 v15; // x2
  SummonInfoControl_ClickDelegate_o *v16; // x22
  SummonInfoControl_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21

  if ( (byte_49F8CAD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&SummonInfoControl_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    sub_1B640C8(&Method_SummonControl__setChangeSummonInfo_b__176_0__, v5);
    sub_1B640C8(&Method_SummonControl_exeSummon__, v6);
    byte_49F8CAD = 1;
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
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v9, v10);
  SummonControl__setResourceInfo(this, v11);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v16 = (SummonInfoControl_ClickDelegate_o *)sub_1B64314(SummonInfoControl_ClickDelegate_TypeInfo, v14, v15);
  SummonInfoControl_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v16, 0LL),
        v17 = this->fields.summonInfoCtr,
        v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19),
        System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__176_0__, 0LL),
        !v17) )
  {
LABEL_8:
    sub_1B64324(maskObject);
  }
  SummonInfoControl__SetAlphaSummonBtn(v17, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_49F8CB2 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_1B640C8(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                *(_QWORD *)&currentIdx);
    byte_49F8CB2 = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_1B64324(this);
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
    sub_1B64324(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_1B64324(0LL);
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
  _DWORD *monitor; // x8
  SummonControl_o *v12; // x0
  int32_t klass; // w1

  v2 = this;
  if ( (byte_49F8CB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method);
    this = (SummonControl_o *)sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v3);
    byte_49F8CB0 = 1;
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
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
        if ( !Item )
LABEL_14:
          sub_1B64324(Item);
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
      v12 = v2;
      goto LABEL_21;
    }
LABEL_16:
    v12 = v2;
    klass = 0;
LABEL_21:
    SummonControl__setDispRePosition(v12, klass, v5);
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

  if ( (byte_49F8CAE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    sub_1B640C8(&SummonControl_TypeInfo, v4);
    byte_49F8CAE = 1;
  }
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_34;
  Item = System_Collections_Generic_List_object___get_Item(
           vaildGachaList,
           this->fields.currentIdx,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
  this->fields.currentGachaInfo = (struct VaildGachaInfo_o *)Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentGachaInfo, (int32_t)Item, v7, v8);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_34;
  vaildGachaList = (System_Collections_Generic_List_object__o *)this->fields.stoneNumInfo;
  if ( !vaildGachaList )
    goto LABEL_34;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)vaildGachaList,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_34;
  v11 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_34;
  v12 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.pointNumInfo,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_34;
  v13 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentPointNumLb,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_34;
  v14 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_34;
  v15 = (UIWidget_o *)vaildGachaList;
  vaildGachaList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B64324(vaildGachaList);
  }
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49F8CF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49F8CF2 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo
    || (SummonResultComponent__setListByType(summonResultInfo, 1, 0LL),
        SummonControl__showSummonResultInfo(this, v4),
        (summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(summonResultInfo);
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

  if ( (byte_49F8CAF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx);
    byte_49F8CAF = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                sliderGrid,
                                                (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    sub_1B64324(sliderGrid);
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
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v19; // x2
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  UILabel_o *summonHelpLabel; // x21
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  __int64 v30; // x0
  __int64 v31; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct GachaEntity_array *ListValidData; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x20
  AssetLoader_LoadEndDataHandler_o *v47; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8C95 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_1B640C8(&Method_SummonControl_LoadBannerEnd__, v10);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_12296/*"SUMMON_HELP_MESSAGE"*/, v12);
    sub_1B640C8(&StringLiteral_13009/*"SummonBanners/DownloadSummonBanner"*/, v13);
    sub_1B640C8(&StringLiteral_6330/*"FAIL_LOAD"*/, v14);
    sub_1B640C8(&StringLiteral_20250/*"img_line_summon"*/, v15);
    sub_1B640C8(&StringLiteral_20171/*"img_bg_banner"*/, v16);
    byte_49F8C95 = 1;
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
  SummonControl__setDispSummonInfo(this, 1, v19);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 36, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnSprite_36875508((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_45;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  this->fields.isDoneTutorial = 1;
  v20 = StringLiteral_13009/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13009/*"SummonBanners/DownloadSummonBanner"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetPath, v20, v21, v22);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_45;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F8D22 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v24);
    byte_49F8D22 = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v25->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v27, v28);
  SummonControl__setUserResourceDisp(this, v29);
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1BB5FA4(v30);
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BB5FA4(v31);
  Time = **(UnityEngine_Transform_o ***)(v31 + 184);
  if ( !Time )
    goto LABEL_45;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Time,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = (struct GachaMaster_o *)MasterData_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.gachaMst, (int32_t)MasterData_object, v33, v34);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_45;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.useGachaData, (int32_t)ListValidData, v36, v37);
  SummonControl__checkValidGachaList(this, v38);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_45;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.vaildGachaList, 0, v39, v40);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_20250/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_45;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_20171/*"img_bg_banner"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6330/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_45:
    sub_1B64324(Time);
  }
  v46 = this->fields.assetPath;
  v47 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v44, v45);
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
  __int64 v12; // x1
  __int64 v13; // x2
  CommonUI_o *v14; // x20
  SummonControl___c_c *v15; // x8
  System_Action_o *_9__253_0; // x21
  Il2CppObject *v17; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49F8CEE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B640C8(&TutorialFlag_TypeInfo, v5);
    sub_1B640C8(&Method_SummonControl___c__setSummonResultList_b__253_0__, v6);
    sub_1B640C8(&SummonControl___c_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_9258/*"NO_EXIST"*/, v8);
    sub_1B640C8(&StringLiteral_12082/*"SHOW_TALK"*/, v9);
    byte_49F8CEE = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37376848(107, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_37376848(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v10) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (CommonUI_o *)Instance;
      v15 = SummonControl___c_TypeInfo;
      if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v15 = SummonControl___c_TypeInfo;
      }
      _9__253_0 = v15->static_fields->__9__253_0;
      if ( !_9__253_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = SummonControl___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v15->static_fields->__9;
        _9__253_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
        System_Action___ctor(_9__253_0, v17, Method_SummonControl___c__setSummonResultList_b__253_0__, 0LL);
        static_fields = SummonControl___c_TypeInfo->static_fields;
        static_fields->__9__253_0 = _9__253_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__253_0, (int32_t)_9__253_0, v19, v20);
      }
      if ( !v14 )
        goto LABEL_24;
      CommonUI__OpenTutorialImageDialog_30370944(v14, 2, 108, _9__253_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12082/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9258/*"NO_EXIST"*/, 0LL);
  Instance = (SummonResultComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_24:
    sub_1B64324(Instance);
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
  const MethodInfo *v10; // x2
  int32_t v11; // w21
  bool v12; // w20

  v3 = isEnable;
  if ( (byte_49F8C90 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__, v7);
    byte_49F8C90 = 1;
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
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)bannerInfoList, v3 & 1, v10);
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
  v11 = 0;
  while ( v11 < bannerInfoList->fields._size )
  {
    bannerInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    bannerInfoList,
                                                                    v11,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
    if ( bannerInfoList )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)bannerInfoList, v3 & 1, 0LL);
      bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerInfoList;
      ++v11;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_22;
  }
  bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !bannerInfoList
    || (v12 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v12, 0LL),
        (bannerInfoList = (System_Collections_Generic_List_object__o *)this->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_22:
    sub_1B64324(bannerInfoList);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bannerInfoList, v12, 0LL);
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
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_int__o *v20; // x22
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UILabel_o *currentFragmentNumLb; // x20
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-5Ch] BYREF
  int klass; // [xsp+8h] [xbp-58h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49F8C9A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_TblUserMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&Method_SummonControl__setUserResourceDisp_b__152_0__, v7);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v8);
    byte_49F8C9A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v11, v12);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_21;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v16, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_21;
  UILabel__set_text(currentStoneNumLb, Master_object, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v18, v19);
  System_Action_int____ctor(v20, (Il2CppObject *)this, Method_SummonControl__setUserResourceDisp_b__152_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v20, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v22, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_21;
  UILabel__set_text(currentPointNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_object )
    goto LABEL_21;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  Master_object = (System_String_o *)GameObjectExtensions__GetParent(v23, 0LL);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL);
  if ( !Master_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_21;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)Master_object, 0LL);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum);
  Master_object = System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v25, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_21;
  UILabel__set_text(currentFragmentNumLb, Master_object, 0LL);
  Master_object = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_object
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v26, 0LL)) == 0LL)
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        GameObjectExtensions__SetLocalPositionX(v27, -179.0, 0LL),
        (Master_object = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL),
        (Master_object = (System_String_o *)GameObjectExtensions__GetParent(v28, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_1B64324(Master_object);
  }
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v29, 179.0, 0LL);
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
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_49F8CD0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SummonControl__showConfirmDlg_b__212_0__, v8);
    byte_49F8CD0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_15;
  if ( !Master_object )
    goto LABEL_15;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    gachaParamData->fields.gachaId,
                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_15;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_object, 8, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_object )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_object, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v15 = (Il2CppObject *)sub_1B64314(BonusSelectSummonAssetManager_TypeInfo, v12, v13);
        System_Object___ctor(v15, 0LL);
        this->fields.bonusSelectAssetManager = (struct BonusSelectSummonAssetManager_o *)v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectAssetManager, (int32_t)v15, v16, v17);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__212_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v18, v19);
        return;
      }
    }
LABEL_15:
    sub_1B64324(Master_object);
  }
  SummonControl__showConfirmDlg_32837472(this, 1, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_32837472(
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
  const MethodInfo *v23; // x1
  int32_t needStone; // w28
  int32_t haveStone; // w23
  int32_t haveChargeStone; // w22
  int v27; // w29
  int v28; // w24
  struct GachaRqParamData_o *v29; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v33; // x24
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x3
  System_Int32_array *ScriptIntArray; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  struct SummonInfoControl_o *v44; // x8
  const MethodInfo *v45; // x1
  struct SummonInfoControl_o *v46; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v48; // x9
  struct GachaRqParamData_o *v49; // x8
  GachaDetailEntity_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v53; // x20
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v57; // x0
  const MethodInfo *v58; // x3
  System_Int32_array *v59; // x23
  __int64 v60; // x1
  __int64 v61; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v62; // x0
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x2
  struct GachaRqParamData_o *v65; // x8
  int32_t v66; // w21
  struct GachaRqParamData_o *v67; // x8
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x22
  SummonConfirmDlgComponent_o *v70; // x22
  const MethodInfo *v71; // x6
  int32_t v72; // w26
  int32_t v73; // w27
  int32_t v74; // w28
  struct GachaRqParamData_o *v75; // x8
  GachaDetailEntity_o *v76; // x24
  struct GachaRqParamData_o *v77; // x8
  __int64 v78; // x1
  __int64 v79; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  __int64 v83; // x2
  const MethodInfo *v84; // x3
  System_Int32_array *v85; // x25
  int32_t ScriptInt; // w0
  __int64 v87; // x1
  __int64 v88; // x2
  const MethodInfo *v89; // x3
  SummonControl_o *v90; // x0
  const MethodInfo *v91; // x2
  int32_t v92; // w21
  int afterChargeStoneNum; // w26
  SummonConfirmDlgComponent_o *v94; // x24
  struct SummonInfoControl_o *v95; // x9
  struct GachaRqParamData_o *v96; // x8
  struct GachaRqParamData_o *v97; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v99; // x8
  Il2CppObject *Entity; // x0
  Il2CppObject *v101; // x21
  struct SummonInfoControl_o *v102; // x10
  struct GachaRqParamData_o *v103; // x9
  SummonControl_o *v104; // x8
  System_String_o *v105; // x27
  int32_t v106; // w25
  int32_t v107; // w28
  int32_t v108; // w29
  SummonControl_o *v109; // x8
  int v110; // w25
  __int64 v111; // x1
  __int64 v112; // x2
  struct PlayMakerFSM_o *summonCloseAt; // x28
  struct GachaRqParamData_o *v114; // x8
  GachaExtraGiftEntity_array *v115; // x27
  int32_t gachaId; // w20
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  struct SummonInfoControl_o *summonInfoCtr; // x9
  SummonControl_o *v119; // x8
  int32_t v120; // w26
  int32_t haveFreeStone; // w27
  SummonControl_o *v122; // x8
  int v123; // w24
  int v124; // w29
  struct GachaRqParamData_o *v125; // x8
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  const MethodInfo *v127; // x3
  struct GachaRqParamData_o *v128; // x8
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-D0h]
  const MethodInfo *v130; // [xsp+60h] [xbp-90h]
  System_String_o *title; // [xsp+68h] [xbp-88h]
  int32_t num; // [xsp+70h] [xbp-80h]
  int32_t numa; // [xsp+70h] [xbp-80h]
  int32_t v134; // [xsp+74h] [xbp-7Ch]
  int32_t payGachaPrice; // [xsp+74h] [xbp-7Ch]
  _BOOL4 v136; // [xsp+78h] [xbp-78h]
  System_String_o *m_CancellationTokenSource; // [xsp+78h] [xbp-78h]
  int v138; // [xsp+80h] [xbp-70h]
  int32_t v139; // [xsp+80h] [xbp-70h]
  int32_t v140; // [xsp+84h] [xbp-6Ch]
  int32_t v141; // [xsp+84h] [xbp-6Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v142; // [xsp+88h] [xbp-68h]
  bool HasFlag; // [xsp+88h] [xbp-68h]

  v4 = this;
  if ( (byte_49F8CD1 & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_SummonControl_ConfirmMessageOpen__, v14);
    sub_1B640C8(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15);
    sub_1B640C8(&Method_SummonControl_confirmResult__, v16);
    this = (SummonControl_o *)sub_1B640C8(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    byte_49F8CD1 = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_111;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_111;
  this = (SummonControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
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
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v22[24], v22[46], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v4->fields.needStone;
      haveStone = v4->fields.haveStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v27 = v4->fields.haveFreeStone - needStone;
      if ( v27 < 0 )
        v28 = v4->fields.haveFreeStone - needStone;
      else
        v28 = 0;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v29 = v4->fields.gachaParamData;
      if ( !v29 || !this )
        goto LABEL_111;
      v138 = v28;
      v140 = haveStone;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v29->fields.gachaId, 0LL);
      v33 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v31,
                                                          v32);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v34);
      if ( GachaDetailEntity )
      {
        v142 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                             SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                             v35,
                                                             v36);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v142,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v37);
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
            v142 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 v39,
                                                                 v40);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v142,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v41);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v42);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
LABEL_105:
                SummonControl__BeforeConfirmMessageOpen(v4, v43);
                return;
              }
            }
          }
        }
      }
      else
      {
        v142 = v33;
      }
      v97 = v4->fields.gachaParamData;
      if ( !v97 )
        goto LABEL_111;
      gachaTime = v97->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_95;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
      v99 = v4->fields.gachaParamData;
      if ( !v99 || !this )
        goto LABEL_111;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v99->fields.gachaId,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity && (v101 = Entity, LODWORD(Entity[4].monitor)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_111;
        this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_111;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)this,
               (int32_t)v101[4].monitor,
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
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
        if ( this )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v119 = this;
            this = (SummonControl_o *)v4->fields.vaildGachaList;
            if ( this )
            {
              m_CancellationTokenSource = (System_String_o *)v119->fields.m_CancellationTokenSource;
              v120 = v4->fields.haveStone;
              haveFreeStone = v4->fields.haveFreeStone;
              numa = v4->fields.haveChargeStone;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          v4->fields.currentIdx,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
              if ( this )
              {
                v122 = this;
                this = (SummonControl_o *)v4->fields.vaildGachaList;
                if ( this )
                {
                  v123 = v27;
                  v124 = BYTE1(v122->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
                  this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v4->fields.currentIdx,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
                  if ( this )
                  {
                    v125 = v4->fields.gachaParamData;
                    if ( v125 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          m_CancellationTokenSource,
                          1,
                          payGachaPrice,
                          gachaTime,
                          v120,
                          haveFreeStone,
                          numa,
                          v140 - needStone,
                          v123 & ~(v123 >> 31),
                          v138 + haveChargeStone,
                          v142,
                          0,
                          v124 != 0,
                          (int64_t)this->fields.fsm,
                          0,
                          0LL,
                          0LL,
                          ListGachaExtraGift,
                          v125->fields.shopIdIdx,
                          v130);
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
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, v23);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v44 = v4->fields.summonInfoCtr;
      if ( !v44 )
        goto LABEL_111;
      v4->fields.isDailyGacha = v44->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v22[62], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v45) )
        SummonControl__friendPointSummonConfirm(v4, v45);
      return;
    case 5:
      v46 = v4->fields.summonInfoCtr;
      if ( !v46 )
        goto LABEL_111;
      ticketNum = v46->fields.ticketNum;
      v48 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v48 )
        goto LABEL_111;
      v4->fields.afterTicketNum = ticketNum - v48->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v49 = v4->fields.gachaParamData;
      if ( !v49 || !this )
        goto LABEL_111;
      v50 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v49->fields.gachaId, 0LL);
      v53 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v51,
                                                          v52);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v53,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v54);
      if ( v50 )
      {
        v57 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                            SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                            v55,
                                                            v56);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v57,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v58);
        v59 = GachaDetailEntity__GetScriptIntArray(v50, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v50, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v59 )
        {
          if ( (_DWORD)this == 1 )
          {
            v62 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                v60,
                                                                v61);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v62,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v63);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v59, v64);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_105;
            }
          }
        }
      }
      v65 = v4->fields.gachaParamData;
      if ( !v65 )
        goto LABEL_111;
      v66 = v65->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
      v67 = v4->fields.gachaParamData;
      if ( !v67 || !this )
        goto LABEL_111;
      v68 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v67->fields.gachaId,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v68 )
        goto LABEL_47;
      v69 = v68;
      if ( !LODWORD(v68[4].monitor) )
        goto LABEL_47;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_111;
      if ( UserGachaExtraCountMaster__getExtraCount((UserGachaExtraCountMaster_o *)this, (int32_t)v69[4].monitor, 0LL) == 9 )
        ++v66;
LABEL_47:
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      v70 = v4->fields.confirmDlgInfo;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this || !v70 )
        goto LABEL_111;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v70,
        (System_String_o *)this->fields.m_CancellationTokenSource,
        v66,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v53,
        v71);
      return;
    case 7:
      v72 = v4->fields.haveStone;
      v73 = v4->fields.needStone;
      v74 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v75 = v4->fields.gachaParamData;
      if ( !v75 || !this )
        goto LABEL_111;
      v76 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v75->fields.gachaId, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (SummonControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
      v77 = v4->fields.gachaParamData;
      if ( !v77 )
        goto LABEL_111;
      if ( !this )
        goto LABEL_111;
      this = (SummonControl_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  v77->fields.gachaId,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_111;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                               SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                               v78,
                                                               v79);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        (intptr_t)Method_SummonControl_confirmResult__,
        v81);
      if ( v76 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 v82,
                                                                 v83);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          (intptr_t)Method_SummonControl_ConfirmMessageOpen__,
          v84);
        v85 = GachaDetailEntity__GetScriptIntArray(v76, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v76, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v85 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                     SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                     v87,
                                                                     v88);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              (intptr_t)Method_SummonControl_confirmResult__,
              v89);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v90, v85, v91) )
              goto LABEL_105;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_111;
      v92 = v72 - v73;
      afterChargeStoneNum = (v74 - v73) & ~((v74 - v73) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v94 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v95 = v4->fields.summonInfoCtr;
        if ( v95 )
        {
          v96 = v4->fields.gachaParamData;
          if ( v96 )
          {
            if ( v94 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v4->fields.confirmDlgInfo,
                (int32_t)this,
                v95->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v92,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                ListGachaExtraGift,
                v96->fields.shopIdIdx,
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
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      v102 = v4->fields.summonInfoCtr;
      if ( !v102 )
        goto LABEL_111;
      v103 = v4->fields.gachaParamData;
      if ( !v103 )
        goto LABEL_111;
      v104 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      v105 = (System_String_o *)v104->fields.m_CancellationTokenSource;
      v106 = v102->fields.payGachaPrice;
      v107 = v103->fields.gachaTime;
      v139 = v4->fields.haveChargeStone;
      v141 = v4->fields.haveStone;
      v108 = v4->fields.haveFreeStone;
      v136 = v103->fields.isAppendSummon;
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      v109 = this;
      this = (SummonControl_o *)v4->fields.vaildGachaList;
      if ( !this )
        goto LABEL_111;
      num = v107;
      v134 = v106;
      v110 = BYTE1(v109->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y);
      this = (SummonControl_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v4->fields.currentIdx,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
      if ( !this )
        goto LABEL_111;
      summonCloseAt = this->fields.fsm;
      title = v105;
      if ( HasFlag )
      {
        v114 = v4->fields.gachaParamData;
        if ( !v114 )
          goto LABEL_111;
        v115 = ListGachaExtraGift;
        gachaId = v114->fields.gachaId;
      }
      else
      {
        v115 = ListGachaExtraGift;
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_1B64314(
                                                                                    BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                                                    v111,
                                                                                    v112);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        v127);
      v128 = v4->fields.gachaParamData;
      if ( !v128 || !v94 )
LABEL_111:
        sub_1B64324(this);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v94,
        title,
        7,
        v134,
        num,
        v141,
        v108,
        v139,
        v92,
        v108,
        afterChargeStoneNum,
        callback,
        v136,
        v110 != 0,
        (int64_t)summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        v115,
        v128->fields.shopIdIdx,
        v130);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  Il2CppObject *Item; // x0
  int32_t monitor; // w22
  _QWORD *v19; // x8
  __int64 v20; // x1
  _DWORD *v21; // x8
  int32_t v22; // w22
  int32_t klass; // w23
  int64_t klass_low; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppObject *v30; // x1
  Il2CppClass **v31; // x0
  int32_t v32; // w22

  if ( (byte_49F8CAA & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v6);
    sub_1B640C8(&System_Collections_Generic_List_EventTutorialEntity__TypeInfo, v7);
    sub_1B640C8(&TutorialFlag_TypeInfo, v8);
    byte_49F8CAA = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v10 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v10, 0LL);
    if ( EventTutorialEntity )
    {
      v14 = (System_Collections_Generic_List_object__o *)EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventTutorialEntity__TypeInfo,
                                                             v12,
                                                             v13);
        System_Collections_Generic_List_object____ctor(
          v15,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTutorialEntity___ctor__);
        if ( v14->fields._size >= 1 )
        {
          v16 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v14,
                     v16,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
            if ( !Item )
              break;
            if ( LODWORD(Item[1].monitor) != 1 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       v14,
                       v16,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
              if ( !Item )
                break;
              monitor = (int32_t)Item[1].monitor;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              if ( !TutorialFlag__GetGachaFlg(monitor, 0LL) )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         v14,
                         v16,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                if ( !Item[3].monitor )
                  goto LABEL_23;
                Item = System_Collections_Generic_List_object___get_Item(
                         v14,
                         v16,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                v19 = Item[3].monitor;
                if ( !v19 )
                  break;
                if ( v19[3] )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v14,
                           v16,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v21 = Item[3].monitor;
                  if ( !v21 )
                    break;
                  if ( !v21[6] )
                    sub_1B6432C(Item, v20);
                  v22 = v21[8];
                }
                else
                {
LABEL_23:
                  v22 = 0;
                }
                Item = System_Collections_Generic_List_object___get_Item(
                         v14,
                         v16,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass = (int32_t)Item[3].klass;
                Item = System_Collections_Generic_List_object___get_Item(
                         v14,
                         v16,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                if ( !Item )
                  break;
                klass_low = SLODWORD(Item[4].klass);
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                if ( CondType__IsOpen(klass, v22, klass_low, 0, 0LL) )
                {
                  Item = System_Collections_Generic_List_object___get_Item(
                           v14,
                           v16,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !v15 )
                    break;
                  items = v15->fields._items;
                  v28 = Method_System_Collections_Generic_List_EventTutorialEntity__Add__;
                  ++v15->fields._version;
                  if ( !items )
                    break;
                  size = v15->fields._size;
                  v30 = Item;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v15,
                      Item,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v31 = &items->obj.klass + size;
                    v15->fields._size = size + 1;
                    v31[4] = (Il2CppClass *)v30;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v30, v25, v26);
                  }
                  Item = System_Collections_Generic_List_object___get_Item(
                           v14,
                           v16,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
                  if ( !Item )
                    break;
                  v32 = (int32_t)Item[1].monitor;
                  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                  TutorialFlag__SetGachaFlg(v32, 0LL);
                }
              }
            }
            if ( ++v16 >= v14->fields._size )
              goto LABEL_39;
          }
          sub_1B64324(Item);
        }
LABEL_39:
        EventTutorialMaster__TutorialChainWithoutCheckStart(
          (System_Collections_Generic_List_EventTutorialEntity__o *)v15,
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
  Il2CppObject *_37376848; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  CommonUI_o *v16; // x20
  SummonControl___c_c *v17; // x8
  System_Action_o *_9__248_0; // x21
  Il2CppObject *v19; // x22
  struct SummonControl___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v25; // x8
  struct GachaInfos_array *v26; // x8
  __int64 v27; // x9
  GachaInfos_o *v28; // x8
  Il2CppObject *Entity; // x20
  Il2CppObject *Instance; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  ServantStatusDialog_EndDelegate_o *v33; // x22
  __int64 v34; // x2
  struct GachaInfos_array *v35; // x8
  __int64 v36; // x9
  GachaInfos_o *v37; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v39; // x20
  ServantStatusDialog_EndDelegate_o *v40; // x22

  if ( (byte_49F8CEA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SummonControl_DialogCallBack__, v8);
    sub_1B640C8(&TutorialFlag_TypeInfo, v9);
    sub_1B640C8(&Method_SummonControl___c__showServantDialog_b__248_0__, v10);
    sub_1B640C8(&SummonControl___c_TypeInfo, v11);
    byte_49F8CEA = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _37376848 = (Il2CppObject *)TutorialFlag__Get_37376848(107, 0LL);
  if ( ((unsigned __int8)_37376848 & 1) != 0 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    _37376848 = (Il2CppObject *)TutorialFlag__Get_37376848(108, 0LL);
    if ( ((unsigned __int8)_37376848 & 1) == 0 )
    {
      _37376848 = (Il2CppObject *)SummonControl__isSvtEqSummonResult(this, v13);
      if ( ((unsigned __int8)_37376848 & 1) != 0 )
      {
        _37376848 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = (CommonUI_o *)_37376848;
        v17 = SummonControl___c_TypeInfo;
        if ( !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v17 = SummonControl___c_TypeInfo;
        }
        _9__248_0 = v17->static_fields->__9__248_0;
        if ( !_9__248_0 )
        {
          if ( !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            v17 = SummonControl___c_TypeInfo;
          }
          v19 = (Il2CppObject *)v17->static_fields->__9;
          _9__248_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
          System_Action___ctor(_9__248_0, v19, Method_SummonControl___c__showServantDialog_b__248_0__, 0LL);
          static_fields = SummonControl___c_TypeInfo->static_fields;
          static_fields->__9__248_0 = _9__248_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__248_0, (int32_t)_9__248_0, v21, v22);
        }
        if ( !v16 )
          goto LABEL_34;
        CommonUI__OpenTutorialImageDialog_30370944(v16, 2, 108, _9__248_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_34;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
LABEL_35:
    sub_1B6432C(_37376848, v13);
  v25 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v25 )
    goto LABEL_34;
  if ( SvtType__IsCommandCode(v25->fields.type, 0LL) )
  {
    _37376848 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_37376848 )
      goto LABEL_34;
    _37376848 = DataManager__GetMasterData_object_(
                  (DataManager_o *)_37376848,
                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v26 = this->fields.gachaResInfoList;
    if ( !v26 )
      goto LABEL_34;
    v27 = this->fields.getSvtIdx;
    if ( (unsigned int)v27 < v26->max_length )
    {
      v28 = v26->m_Items[v27];
      if ( v28 )
      {
        if ( _37376848 )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)_37376848,
                     v28->fields.userSvtId,
                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v31, v32);
          ServantStatusDialog_EndDelegate___ctor(v33, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_30357696(
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
      sub_1B64324(_37376848);
    }
    goto LABEL_35;
  }
  _37376848 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = this->fields.gachaResInfoList;
  if ( !v35 )
    goto LABEL_34;
  v36 = this->fields.getSvtIdx;
  if ( (unsigned int)v36 >= v35->max_length )
    goto LABEL_35;
  v37 = v35->m_Items[v36];
  if ( !v37 )
    goto LABEL_34;
  userSvtId = v37->fields.userSvtId;
  v39 = (CommonUI_o *)_37376848;
  v40 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v13, v34);
  ServantStatusDialog_EndDelegate___ctor(v40, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v39 )
    goto LABEL_34;
  CommonUI__OpenServantStatusDialog_30354372(v39, 6, userSvtId, v40, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  StonePurchaseMenu_CallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_49F8CC2 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SummonControl_endPurchaseStone__, v4);
    byte_49F8CC2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B64314(StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7);
  StonePurchaseMenu_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_1B64324(v9);
  CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v8, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_49F8CE3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl__showSummonEffect_b__236_0__, v5);
    byte_49F8CE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__236_0__, 0LL);
  if ( !v10 )
    sub_1B64324(v13);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_49F8CED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl__showSummonResultInfo_b__252_0__, v5);
    byte_49F8CED = 1;
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
    TitleInfoControl__setBackBtnSprite_36875508(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v12 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
      v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__252_0__, 0LL);
      if ( !Instance )
        goto LABEL_24;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v14, 0LL);
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
    sub_1B64324(titleInfo);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49F8CBB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl_endPurchaseSvtEqFrame__, v5);
    sub_1B640C8(&Method_SummonControl_resetStoneInfo__, v6);
    byte_49F8CBB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_1B64314(
                                                          ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo,
                                                          v8,
                                                          v9);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1B64324(v14);
  CommonUI__OpenServantEquipFramePurchaseMenu((CommonUI_o *)Instance, v10, v13, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantFramePurchaseMenu_CallbackFunc_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_49F8CB9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SummonControl_endPurchaseSvtFrame__, v5);
    sub_1B640C8(&Method_SummonControl_resetStoneInfo__, v6);
    byte_49F8CB9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_1B64314(ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v8, v9);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_1B64324(v14);
  CommonUI__OpenServantFramePurchaseMenu((CommonUI_o *)Instance, v10, v13, 0LL);
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
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x25
  __int64 v35; // x1
  __int64 v36; // x2
  ServantAssetArgs_o *v37; // x23
  int32_t v38; // w2
  int32_t v39; // w3
  ServantAssetArgs_o *battleAssetArgs; // x23
  Il2CppObject *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x24
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49F8CE7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&ServantAssetArgs_TypeInfo, v9);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_1B640C8(&Method_SummonControl__showSvtTalk_b__243_0__, v13);
    sub_1B640C8(&Method_SummonControl_close__, v14);
    sub_1B640C8(&StringLiteral_3536/*"CLICK_OK"*/, v15);
    byte_49F8CE7 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_41;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
    sub_1B6432C(Instance, v17);
  v20 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v20 )
    goto LABEL_41;
  userSvtId = v20->fields.userSvtId;
  objectId = v20->fields.objectId;
  limitCount = v20->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v24 = Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v24,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3536/*"CLICK_OK"*/, 0LL);
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
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_41;
    v26 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            userSvtId,
            (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_object )
LABEL_41:
    sub_1B64324(Instance);
  v27 = (int)Instance;
  v28 = ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)MasterData_object, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v28 && (v29 = ServantVoiceEntity__GetSummonScriptId(v28, v27, 0LL)) != 0LL )
  {
    summonScriptId = v29;
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v34 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__243_0__, 0LL);
    if ( !v31 )
      goto LABEL_41;
    ScriptManager__PlayGacha_41065816(
      (ScriptManager_o *)v31,
      (UserServantEntity_o *)v26,
      objectId,
      limitCount,
      0,
      1,
      v34,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v37 = (ServantAssetArgs_o *)sub_1B64314(ServantAssetArgs_TypeInfo, v35, v36);
      ServantAssetArgs___ctor_42870468(v37, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleAssetArgs, (int32_t)v37, v38, v39);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v44 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v42, v43);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v41 )
      goto LABEL_41;
    ScriptManager__PlayGacha_41065816(
      (ScriptManager_o *)v41,
      (UserServantEntity_o *)v26,
      objectId,
      limitCount,
      0,
      1,
      v44,
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
  int32_t v2; // w2
  int32_t v3; // w3
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *v4; // x19
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
  if ( (byte_49F8D2C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49F8D2C = 1;
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
          sub_1B64324(this);
        }
        UICenterOnChild__CenterOn_46383920(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_9:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v4->fields._spring_5__2 = (struct SpringPanel_o *)Component_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._spring_5__2, (int32_t)Component_object, v10, v11);
    v12 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v13, v14);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._spring_5__2, 0, v2, v3);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__170_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  PlayMakerFSM_o *fsm; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49F8D2D & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_3536/*"CLICK_OK"*/, v5);
    byte_49F8D2D = 1;
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
    v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
    this->fields._wait_5__2 = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._wait_5__2, (int32_t)v8, v9, v10);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    p__2__current = &this->fields.__2__current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)wait_5__2, v12, v13);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.battleAssetArgs, 0, v18, v19);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_19:
    sub_1B64324(fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3536/*"CLICK_OK"*/, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SummonControl__WaitBattleChrLoad_d__245_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8D26 & 1) == 0 )
  {
    sub_1B640C8(&SummonControl___c_TypeInfo, v1);
    byte_49F8D26 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SummonControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SummonControl___c_TypeInfo->static_fields->__9 = (struct SummonControl___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SummonControl___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___BonusSelectServantSelectDialog_b__293_1(
        SummonControl___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8D28 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F8D28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__253_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__212_1(SummonControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8D27 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F8D27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *Request_object; // x0
  int32_t v9; // w20
  int32_t v10; // w21
  struct SummonControl_o *_4__this; // x8

  if ( (byte_49F8D29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&TutorialFlag_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_3504/*"CLEAR_TUTORIAL"*/, v7);
    byte_49F8D29 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     0LL,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_object )
    goto LABEL_21;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 107, 0LL);
  Request_object = this->fields.tutoList;
  if ( !Request_object )
    goto LABEL_21;
  v9 = 0;
  while ( v9 < *((_DWORD *)Request_object + 6) )
  {
    Request_object = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Request_object,
                       v9,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    if ( !Request_object )
      goto LABEL_21;
    if ( *((_DWORD *)Request_object + 6) != 1 )
    {
      Request_object = this->fields.tutoList;
      if ( !Request_object )
        goto LABEL_21;
      Request_object = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Request_object,
                         v9,
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
      if ( !Request_object )
        goto LABEL_21;
      v10 = *((_DWORD *)Request_object + 6);
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetGachaFlg(v10, 0LL);
    }
    Request_object = this->fields.tutoList;
    ++v9;
    if ( !Request_object )
      goto LABEL_21;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_object = _4__this->fields.fsm) == 0LL )
LABEL_21:
    sub_1B64324(Request_object);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3504/*"CLEAR_TUTORIAL"*/, 0LL);
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
  SummonControl___c__DisplayClass264_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_49F8D2A & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass264_0_o *)sub_1B640C8(&StringLiteral_5725/*"EXECUTE"*/, method);
    byte_49F8D2A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass264_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5725/*"EXECUTE"*/, 0LL);
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
  SummonControl___c__DisplayClass265_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_49F8D2B & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass265_0_o *)sub_1B640C8(&StringLiteral_5725/*"EXECUTE"*/, method);
    byte_49F8D2B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (SummonControl___c__DisplayClass265_0_o *)_4__this->fields.fsm,
        _4__this->fields.npEnhanceSvtId = v2->fields.svtId,
        !this) )
  {
    sub_1B64324(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5725/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}