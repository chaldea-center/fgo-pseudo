void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct SummonControl_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  SummonControl_c *v9; // x8
  struct SummonControl_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_435367C & 1) == 0 )
  {
    sub_B70694(&SummonControl_TypeInfo);
    sub_B70694(&StringLiteral_19678/*"icon_summon_arrow2"*/);
    sub_B70694(&StringLiteral_2914/*"BonusSelectSummonSaveKey"*/);
    byte_435367C = 1;
  }
  SummonControl_TypeInfo->static_fields->FRIEND_POINT_SUMMON_ID = 1;
  static_fields = SummonControl_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2914/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_2914/*"BonusSelectSummonSaveKey"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v8, v1, v2, v3, v4, v5, v6);
  v9 = SummonControl_TypeInfo;
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
  v10 = v9->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19678/*"icon_summon_arrow2"*/;
  v10->ARROW_SPRITE_NAME = (struct System_String_o *)StringLiteral_19678/*"icon_summon_arrow2"*/;
  sub_B70630((BattleServantConfConponent_o *)&v10->ARROW_SPRITE_NAME, v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_int__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int128 v43; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435367B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    sub_B70694(&StringLiteral_19244/*"gachaIds"*/);
    sub_B70694(&StringLiteral_6898/*"FrequencyType"*/);
    byte_435367B = 1;
  }
  v45.fields.m_XMin = -120.0;
  v45.fields.m_YMin = -205.0;
  v45.fields.m_Width = 240.0;
  v45.fields.m_Height = 100.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v45, v2, v3, v4, v5, (const MethodInfo *)&methoda.name);
  v46.fields.m_YMin = -315.0;
  *(_OWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.name;
  *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_POS.fields.y = -4387913408675840000LL;
  v46.fields.m_XMin = 320.0;
  v46.fields.m_Width = 200.0;
  v46.fields.m_Height = 100.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v46, v7, v8, v9, v10, &methoda);
  v47.fields.m_YMin = -310.0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.methodPointer;
  *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = 0xC366000043E10000LL;
  v47.fields.m_XMin = -335.0;
  v47.fields.m_Width = 135.0;
  v47.fields.m_Height = 150.0;
  v43 = 0uLL;
  UnityEngine_Rect___ctor(v47, v11, v12, v13, v14, (const MethodInfo *)&v43);
  *(_OWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin = v43;
  *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y = 0xC3200000C385C000LL;
  v15 = (System_Int32_array **)StringLiteral_19244/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19244/*"gachaIds"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_IDS, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_6898/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6898/*"FrequencyType"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_TYPE, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v29;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.vaildGachaList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v36;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  __int64 v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **name; // x1
  int32_t ticketItemId; // w8
  System_String_o *WebViewAddress_25961988; // x0
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t pickupId; // w8
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  DataManager_o *v40; // x22
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct GachaStoryAdjustEntity_o *v42; // x8
  System_Int32_array **adjustIds; // x1

  if ( (byte_4353613 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&VaildGachaInfo_TypeInfo);
    byte_4353613 = 1;
  }
  v7 = sub_B70764(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v7, 0LL);
  if ( !data || !v7 )
    goto LABEL_19;
  *(_DWORD *)(v7 + 16) = data->fields.id;
  name = (System_Int32_array **)data->fields.name;
  *(_QWORD *)(v7 + 24) = name;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), name, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = data->fields.beforeGachaId;
  *(_DWORD *)(v7 + 36) = data->fields.priority;
  *(_DWORD *)(v7 + 40) = data->fields.imageId;
  *(_DWORD *)(v7 + 44) = data->fields.warId;
  *(_DWORD *)(v7 + 48) = data->fields.gachaSlot;
  *(_DWORD *)(v7 + 52) = data->fields.type;
  ticketItemId = data->fields.ticketItemId;
  *(_BYTE *)(v7 + 64) = 1;
  *(_DWORD *)(v7 + 60) = ticketItemId;
  *(_BYTE *)(v7 + 84) = data->fields.freeDrawFlag > 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_25961988 = NetworkManager__getWebViewAddress_25961988(1, 0LL);
  v19 = (System_Int32_array **)System_String__Concat_44758168(WebViewAddress_25961988, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v7 + 88) = v19;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 88), v19, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v7 + 96) = data->fields.gachaGroupId;
  *(_BYTE *)(v7 + 100) = data->fields.gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 68) = 0;
  *(_BYTE *)(v7 + 101) = pickupId > 0;
  v27 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
  *(_QWORD *)(v7 + 72) = v27;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 72), v27, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v7 + 120) = data->fields.openedAt;
  *(_QWORD *)(v7 + 128) = data->fields.closedAt;
  *(_DWORD *)(v7 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v40 = Instance;
      this->fields.gachaSubEntity = (struct GachaSubEntity_o *)Instance;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.gachaSubEntity,
        (System_Int32_array **)Instance,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      *(_DWORD *)(v7 + 80) = *(_DWORD *)&v40->fields._DispLog;
      *(_DWORD *)(v7 + 40) = HIDWORD(v40->fields.datalist);
    }
  }
  if ( !adjustData )
    goto LABEL_17;
  targetEntity = adjustData->fields.targetEntity;
  if ( !targetEntity
    || (*(_DWORD *)(v7 + 40) = targetEntity->fields.imageId, (v42 = adjustData->fields.targetEntity) == 0LL) )
  {
LABEL_19:
    sub_B7076C(Instance, v9);
  }
  *(_DWORD *)(v7 + 68) = v42->fields.idx;
  adjustIds = (System_Int32_array **)adjustData->fields.adjustIds;
  *(_QWORD *)(v7 + 72) = adjustIds;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 72), adjustIds, v34, v35, v36, v37, v38, v39);
LABEL_17:
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
}


void __fastcall SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  System_String_o *datalist; // x21
  System_String_o *lookup; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v9; // x23

  if ( (byte_435364E & 1) == 0 )
  {
    sub_B70694(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SummonControl_beforeConfirmCautionResult__);
    byte_435364E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !Instance
    || (Instance = (DataManager_o *)GachaDetailMaster__GetGachaDetailEntity(
                                      (GachaDetailMaster_o *)Instance,
                                      gachaParamData->fields.gachaId,
                                      0LL)) == 0LL
    || (infoDlgInfo = this->fields.infoDlgInfo,
        datalist = (System_String_o *)Instance->fields.datalist,
        lookup = (System_String_o *)Instance->fields.lookup,
        v9 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B70764(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_B7076C(Instance, v4);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, datalist, lookup, v9, 0LL);
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
  MethodInfo *v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-18h] BYREF

  v4 = result;
  v5 = this;
  if ( (byte_4353643 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4353643 = 1;
  }
  selectBonusData = 0LL;
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
      SummonControl__showConfirmDlg_28207164(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = result;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y,
        (System_Int32_array **)result,
        (System_String_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      goto LABEL_10;
    }
LABEL_13:
    sub_B7076C(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
}


bool __fastcall SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  CommonUI_o *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  System_Action_o *v9; // x23
  bool v10; // w19

  if ( (byte_4353646 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GachaSubMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_SummonSceneRefresh__);
    sub_B70694(&StringLiteral_14912/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/);
    sub_B70694(&StringLiteral_14911/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/);
    byte_4353646 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData || !Instance )
    goto LABEL_14;
  if ( GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL) == this->fields.gachaSubEntity )
    return 0;
  v6 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_14912/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_14911/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
  v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
  if ( !v6 )
LABEL_14:
    sub_B7076C(Instance, v4);
  v10 = 1;
  CommonUI__OpenNotificationDialog(v6, v7, v8, v9, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  return v10;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v5; // x20
  __int64 v7; // x0

  if ( !ids )
    sub_B7076C(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v3 )
    {
      v7 = sub_B70798(this);
      sub_B70738(v7, 0LL);
    }
    this = (SummonControl_o *)SummonControl__getUserGachaData(this, ids->m_Items[v5 + 1], method);
    if ( this )
    {
      if ( SLODWORD(this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Width) > 0 )
        break;
    }
    LODWORD(v3) = ids->max_length;
    if ( (__int64)++v5 >= (int)v3 )
      return 0;
  }
  return 1;
}


void __fastcall SummonControl__CheckIncIdx(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x9
  int v4; // w8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4353665 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9409/*"NEXT_SVT"*/);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_6442/*"FINAL_SVT"*/);
    byte_4353665 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v4 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v4;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_B7076C(this, method);
  if ( v4 >= (signed int)gachaResInfoList->max_length )
    v5 = &StringLiteral_6442/*"FINAL_SVT"*/;
  else
    v5 = &StringLiteral_9409/*"NEXT_SVT"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0LL);
}


bool __fastcall SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  UserGameEntity_o *v5; // x20
  int v6; // w21
  BalanceConfig_c *v7; // x8
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

  if ( (byte_4353647 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SummonControl_autoSellSettingChange__);
    sub_B70694(&Method_SummonControl_limitManaConfirmResult__);
    sub_B70694(&Method_SummonControl_limitQpConfirmResult__);
    sub_B70694(&Method_SummonControl_showConfirmDlg__);
    byte_4353647 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v5 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v6 = (int)SelfUserGame;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_32;
  static_fields = v7->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
      v12 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v12->QpMax;
      FriendPointSummonQpWarning = v12->FriendPointSummonQpWarning;
    }
    v13 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v6 )
      return 0;
  }
  else
  {
    v13 = QpMax - gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
    if ( !v6 )
      return 0;
  }
  qp = v5->fields.qp;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BalanceConfig_TypeInfo;
  }
  v15 = v7->static_fields;
  if ( qp >= v15->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v19 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B70764(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v19, v20, 0LL);
  }
  else
  {
    if ( v5->fields.qp < v13 )
    {
      mana = v5->fields.mana;
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v15 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v15->UserItemMax )
        return 0;
      v24 = this->fields.limitWarningDlgInfo;
      v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B70764(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v26 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v24 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v24, v25, v26, 0LL);
        return 1;
      }
LABEL_32:
      sub_B7076C(SelfUserGame, v4);
    }
    v21 = this->fields.limitWarningDlgInfo;
    v22 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B70764(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v23 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v21 )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v21, v22, v23, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  __int64 *v4; // x8

  if ( (byte_435367A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11286/*"RETURN_MAIN"*/);
    sub_B70694(&StringLiteral_11288/*"RETURN_RESULT"*/);
    byte_435367A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  if ( this->fields.isResult )
    v4 = &StringLiteral_11288/*"RETURN_RESULT"*/;
  else
    v4 = &StringLiteral_11286/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v4, 0LL);
}


void __fastcall SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_c *v2; // x0
  Il2CppObject *String_36095200; // x19
  UserPresentBoxWindow_resData_array *v4; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4353642 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_B70694(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_B70694(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&SummonControl_TypeInfo);
    byte_4353642 = 1;
  }
  v2 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v2 = SummonControl_TypeInfo;
  }
  String_36095200 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36095200(
                                      v2->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_36095200, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
           String_36095200,
           (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v4 )
      sub_B7076C(v6, v7);
  }
}


bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4353610 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353610 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v7);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_435363E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435363E = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  if ( isStoneFragmentsBulkDialog )
    CommonUI__CloseFragmentsBulkExchangeDialog(Instance, 0LL);
  else
    CommonUI__CloseFragmentsExchangeDialog(Instance, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435361C & 1) == 0 )
  {
    sub_B70694(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_TypeInfo);
    byte_435361C = 1;
  }
  v3 = sub_B70764(SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__174___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  struct GachaRqParamData_o *v6; // x8
  WarEntity_o *Entity; // x20
  struct GachaRqParamData_o *v8; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  struct GachaRqParamData_o *v10; // x8
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int32_t id; // w27
  int64_t coordinates; // x20
  char v16; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v17; // x24
  struct GachaRqParamData_o *v18; // x8
  int32_t v19; // w25
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v21; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v24; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v25; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v26; // x24
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v27; // x26
  const MethodInfo *v28; // [xsp+8h] [xbp-58h]

  if ( (byte_435364B & 1) == 0 )
  {
    sub_B70694(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_B70694(&Method_SummonControl_SetDispBtn__);
    sub_B70694(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_B70694(&Method_SummonControl_confirmCautionResult__);
    sub_B70694(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_B70694(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_435364B = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close_28174604(confirmDlgInfo, 0LL, method);
  if ( !result )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v21 = this->fields.gachaParamData;
              if ( v21 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v21->fields.gachaId;
                v24 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B70764(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v24,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B70764(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v25,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v26 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B70764(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
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
            confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
            if ( confirmDlgInfo )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_43;
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
  v6 = this->fields.gachaParamData;
  if ( !v6 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
             v6->fields.gachaId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)confirmDlgInfo,
                                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v8 = this->fields.gachaParamData;
  if ( !v8 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        (GachaDetailMaster_o *)confirmDlgInfo,
                        v8->fields.gachaId,
                        0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
  v10 = this->fields.gachaParamData;
  if ( !v10 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
                                                    v10->fields.gachaId,
                                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)GachaEntity__HasFlag((GachaEntity_o *)confirmDlgInfo, 8, 0LL);
  if ( !GachaDetailEntity || !Entity )
    goto LABEL_43;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  title = GachaDetailEntity->fields.title;
  message = GachaDetailEntity->fields.message;
  id = Entity[1].fields.id;
  coordinates = (int64_t)Entity->fields.coordinates;
  v16 = (char)confirmDlgInfo;
  v17 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_B70764(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SummonControl_confirmCautionResult__,
    0LL);
  if ( (v16 & 1) != 0 )
  {
    v18 = this->fields.gachaParamData;
    if ( !v18 )
      goto LABEL_43;
    v19 = v18->fields.gachaId;
  }
  else
  {
    v19 = 0;
  }
  v27 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B70764(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_B7076C(confirmDlgInfo, result);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    id > 0,
    coordinates,
    v17,
    v19,
    v27,
    this->fields.bonusSelectAssetManager,
    v28);
}


void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_435365F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__DialogCallBack_b__253_0__);
    byte_435365F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__253_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v8, v9);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4353660 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3163/*"CLOSE"*/);
    byte_4353660 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3163/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_435363D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_435363D = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_List_VaildGachaInfo__o *v13; // x21
  unsigned __int64 v14; // x22
  System_Collections_Generic_List_VaildGachaInfo__o *v15; // x27
  __int64 v16; // x25
  VaildGachaInfo_o *v17; // x26
  VaildGachaInfo_o *v18; // x21
  int size; // w8
  VaildGachaInfo_o *v20; // x8

  if ( (byte_4353614 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
    byte_4353614 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  v13 = *baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_B7076C(v5, v6);
  v14 = 0LL;
  while ( (__int64)v14 < v13->fields._size )
  {
    v15 = v13;
    if ( v14 >= (unsigned int)v13->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v16 = 0LL;
    v17 = v13->fields._items->m_Items[v14];
    v18 = v17;
    while ( 1 )
    {
      size = v15->fields._size;
      if ( (int)v16 >= size )
        break;
      if ( size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( v17 )
      {
        v20 = v15->fields._items->m_Items[v16];
        if ( v20 )
        {
          if ( v17->fields.id != v20->fields.id && v17->fields.slotId == v20->fields.slotId )
          {
            if ( !v18 )
              goto LABEL_25;
            if ( v18->fields.priority < v20->fields.priority )
              v18 = v15->fields._items->m_Items[v16];
          }
          v15 = *baseGachaList;
          ++v16;
          if ( *baseGachaList )
            continue;
        }
      }
      goto LABEL_25;
    }
    if ( v4 )
    {
      v5 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4,
             (WarBoardManager_TaskList_o *)v18,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
      if ( !v5 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v4,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
      v13 = *baseGachaList;
      ++v14;
      if ( *baseGachaList )
        continue;
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v4;
  sub_B70630((BattleServantConfConponent_o *)baseGachaList, (System_Int32_array **)v4, v7, v8, v9, v10, v11, v12);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4353600 & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    byte_4353600 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
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
  void *v3; // x0
  __int64 v4; // x8
  System_String_o *v5; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array *v12; // x19
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v15; // x19
  __int64 v16; // x8
  __int64 v18; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4353625 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4353625 = 1;
  }
  result = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_435368D )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435368D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( !v2->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_435368D )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435368D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*((_QWORD *)v3 + 23) + 48LL);
  if ( !v4 )
    goto LABEL_40;
  v5 = *(System_String_o **)(v4 + 56);
  v3 = (void *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_40;
  method = (const MethodInfo *)v3;
  if ( !*((_DWORD *)v3 + 6) )
    goto LABEL_41;
  *((_WORD *)v3 + 16) = 47;
  if ( !v5 )
    goto LABEL_40;
  v12 = System_String__Split(v5, (System_Char_array *)v3, 0LL);
  if ( !byte_434DEF4 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEF4 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !v12 )
    goto LABEL_40;
  if ( (int)v12->max_length < 2 )
    return 0;
  v15 = v12->m_Items[1];
  v3 = (void *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_40;
  method = (const MethodInfo *)v3;
  if ( !*((_DWORD *)v3 + 6) )
    goto LABEL_41;
  *((_WORD *)v3 + 16) = 44;
  if ( !v15 || (v3 = System_String__Split(v15, (System_Char_array *)v3, 0LL)) == 0LL )
LABEL_40:
    sub_B7076C(v3, method);
  v16 = *((_QWORD *)v3 + 3);
  if ( v16 )
  {
    result = 0;
    if ( (_DWORD)v16 )
    {
      System_Int32__TryParse(*((System_String_o **)v3 + 4), &result, 0LL);
      return result;
    }
LABEL_41:
    v18 = sub_B70798(v3);
    sub_B70738(v18, 0LL);
  }
  return 0;
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

  if ( (byte_4353658 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4353658 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_435360A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6419/*"FAIL_LOAD"*/);
    sub_B70694(&StringLiteral_17282/*"btn_sumonhistory"*/);
    sub_B70694(&StringLiteral_5572/*"END_LOAD"*/);
    byte_435360A = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6419/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bannerAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v11);
  SummonControl__setPositionByWarId(this, v12);
  SummonControl__ResetArrowTween(this, v13);
  v14 = (System_String_o *)StringLiteral_17282/*"btn_sumonhistory"*/;
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17282/*"btn_sumonhistory"*/, v15);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, (UnityEngine_GameObject_o *)fsm, v14, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_B7076C(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5572/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *centerChild; // x8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x21
  float y; // w20
  int32_t v12; // w24
  System_Int32_array **v13; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  v2 = this;
  if ( (byte_4353618 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_3017/*"CHANGE_BANNER"*/);
    byte_4353618 = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_27;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_27;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_27;
  v10 = *(System_Int32_array ***)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v12 = *((_DWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v13 = (System_Int32_array **)this;
  if ( v2->fields.isDragging )
    goto LABEL_30;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, currentBannerComp, 0LL)
    || v10 != (System_Int32_array **)v2->fields.currentGachaInfo
    || LODWORD(y) != v2->fields.currentIdx
    || v12 != v2->fields.currentMoveIdx )
  {
LABEL_30:
    if ( v2->fields.isDoneTutorial )
    {
      this = (SummonControl_o *)v2->fields.leftArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.rightArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.titleInfo;
      if ( !this )
        goto LABEL_27;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.summonMBannerLeftArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v2->fields.summonMBannerRightArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    v2->fields.isDragging = 0;
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v13;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.currentBannerComp, v13, v4, v5, v6, v7, v8, v9);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v10;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.currentGachaInfo, v10, v15, v16, v17, v18, v19, v20);
    *(float *)&v2->fields.currentIdx = y;
    v2->fields.currentMoveIdx = v12;
    SummonControl__setSliderIcon(v2, SLODWORD(y), v21);
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
          UICenterOnChild__CenterOn_36424748(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3017/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B7076C(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x20
  float m_Height; // w24
  float x; // w25
  System_Int32_array **v13; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x23
  bool *p_isNotCenterOnSync; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_4353619 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    this = (SummonControl_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353619 = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_21;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_21;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_21;
  v10 = *(System_Int32_array ***)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  v13 = (System_Int32_array **)this;
  if ( v2->fields.isDragging )
    goto LABEL_15;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, currentSummonMBannerComponent, 0LL)
    || v10 != (System_Int32_array **)v2->fields.currentGachaInfo
    || LODWORD(m_Height) != v2->fields.currentIdx
    || LODWORD(x) != v2->fields.currentMoveIdx )
  {
LABEL_15:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v13;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.currentSummonMBannerComponent, v13, v4, v5, v6, v7, v8, v9);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v10;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.currentGachaInfo, v10, v16, v17, v18, v19, v20, v21);
    p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
    if ( v2->fields.isNotCenterOnSync )
      goto LABEL_20;
    this = (SummonControl_o *)v2->fields.bannerLoopCtr;
    *(float *)&v2->fields.currentIdx = m_Height;
    *(float *)&v2->fields.currentMoveIdx = x;
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
          UICenterOnChild__CenterOn_36424748(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_B7076C(this, method);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_20:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4353673 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3111/*"CLICK_BACK"*/);
    byte_4353673 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B7076C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3111/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v6; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x20
  System_Action_o *v8; // x21

  if ( (byte_4353676 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SummonControl_OnClickHelpClose__);
    byte_4353676 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 0, 0LL),
        (currentGachaInfo = this->fields.currentGachaInfo) == 0LL) )
  {
    sub_B7076C(summonInfoCtr, v3);
  }
  v6 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v6, 0LL);
  v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(EventTutorialEntity, v8, 0LL);
}


void __fastcall SummonControl__OnClickHelpClose(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B7076C(0LL, method);
  SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 1, 0LL);
}


void __fastcall SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  GachaHistoryRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4353677 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_GachaHistoryRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SummonControl__OnClickHisotry_b__285_0__);
    byte_4353677 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__285_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (GachaHistoryRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v3,
                                                                 (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_WarBoardWallAttackRequest )
    sub_B7076C(Request_WarBoardWallAttackRequest, v5);
  GachaHistoryRequest__beginRequest(Request_WarBoardWallAttackRequest, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20

  if ( (byte_435361D & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12970/*"SetBannerCenter"*/);
    byte_435361D = 1;
  }
  if ( this->fields.currentMoveIdx != moveIdx )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_36061308(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12970/*"SetBannerCenter"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    if ( !leftArrowBtn )
      goto LABEL_20;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_20;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.bannerLoopCtr;
    this->fields.isDragging = 1;
    if ( !leftArrowBtn )
      goto LABEL_20;
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
      || (UICenterOnChild__CenterOn_36424748(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
LABEL_20:
      sub_B7076C(leftArrowBtn, *(_QWORD *)&moveIdx);
    }
    UICenterOnChild__CenterOn_36424748(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4353639 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4353639 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_28174604(confirmDlgInfo, 0LL, v4),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_B7076C(confirmDlgInfo, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v6);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_435363A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435363A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v3);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4353675 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SummonControl_reDispSummonBannerList__);
    byte_4353675 = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_B7076C(v5, v6);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4353640 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353640 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4353617 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12970/*"SetBannerCenter"*/);
    byte_4353617 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_36061308(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12970/*"SetBannerCenter"*/,
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
    sub_B7076C(summonInfoCtr, v3);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0LL);
  this->fields.isDragging = 1;
}


void __fastcall SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4353674 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__OnEndSummonEffect_b__282_0__);
    byte_4353674 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__282_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v8, v9);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v7; // w22
  CommonUI_o *Instance; // x21
  const MethodInfo *v9; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  System_Action_int__o *v11; // x24

  if ( (byte_435363B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_RequestStoneFragmentsShop__);
    byte_435363B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(
                                 (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                                 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v7 = UserStoneFragmentNum,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v9),
        v11 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v11,
          (Il2CppObject *)this,
          Method_SummonControl_RequestStoneFragmentsShop__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__),
        !Instance) )
  {
LABEL_12:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  if ( v7 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v11, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v11, 0LL);
}


void __fastcall SummonControl__OpenStoneFragmentExchangeResultDialog(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v6; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v8; // x1
  ItemEntity_o *Entity; // x22
  const MethodInfo *v10; // x1
  ShopEntity_o *v11; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v13; // x1
  ShopEntity_o *v14; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v16; // x1
  ShopEntity_o *v17; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *Instance; // x23
  System_Action_bool__o *v20; // x24

  if ( (byte_435363F & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_OnCloseResultDialog__);
    byte_435363F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v6);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_10;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             Master_WarQuestSelectionMaster,
                             (int32_t)StoneFragmentsShopEntity,
                             (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v11 = SummonControl__get_StoneFragmentsShopEntity(this, v10);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v11,
                                               buyCount,
                                               0LL);
  v14 = SummonControl__get_StoneFragmentsShopEntity(this, v13);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v14,
                                           Entity,
                                           buyCount,
                                           0LL);
  v17 = SummonControl__get_StoneFragmentsShopEntity(this, v16);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v17,
                                          Entity,
                                          0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v20,
    (Il2CppObject *)this,
    Method_SummonControl_OnCloseResultDialog__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  if ( !Instance )
LABEL_10:
    sub_B7076C(StoneFragmentsShopEntity, v8);
  CommonUI__OpenItemExchangeResultDialog(
    Instance,
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
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v7; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v9; // x1

  if ( (byte_435363C & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SummonControl_EndRequestStoneFragmentsShop__);
    byte_435363C = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v5,
                                                               (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v7);
    if ( !StoneFragmentsShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B7076C(StoneFragmentsShopEntity, v9);
    PurchaseRequest__beginRequest(
      Request_WarBoardWallAttackRequest,
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
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v4; // x22
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *v6; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_435360D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435360D = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_32;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_32;
  v4 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_32;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_32;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v4, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v6, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v5, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( Component_WebViewObject )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_WebViewObject, 0LL);
      return;
    }
LABEL_32:
    sub_B7076C(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  __int64 *v4; // x8

  if ( (byte_4353653 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_11232/*"REQUEST_NG_RESULT"*/);
    byte_4353653 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  if ( this->fields.isResult )
    v4 = &StringLiteral_11232/*"REQUEST_NG_RESULT"*/;
  else
    v4 = &StringLiteral_11231/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v4, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v5; // s8
  UICenterOnChild_o *centerChild; // x20
  WebViewObject_o *v7; // x20
  float v8; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_435361A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435361A = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_37;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) >= 1 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
    if ( !bannerLoopCtr )
      goto LABEL_37;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                bannerLoopCtr,
                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_WebViewObject,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_37;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_37;
      v5 = *(float *)&Component_WebViewObject->fields.onJS;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_37;
      if ( v5 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
      {
        bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
        if ( !bannerLoopCtr )
          goto LABEL_37;
        centerChild = this->fields.centerChild;
        bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
        if ( !bannerLoopCtr )
          goto LABEL_37;
        bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                     (UnityEngine_Transform_o *)bannerLoopCtr,
                                                     this->fields.currentMoveIdx,
                                                     0LL);
        if ( !centerChild )
          goto LABEL_37;
        UICenterOnChild__CenterOn_36424748(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
      }
    }
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_37;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) >= 1 )
  {
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
    if ( !bannerLoopCtr )
      goto LABEL_37;
    v7 = UnityEngine_Component__GetComponent_WebViewObject_(
           bannerLoopCtr,
           (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_37;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_37;
      v8 = *(float *)&v7->fields.onJS;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_37;
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
              UICenterOnChild__CenterOn_36424748(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_B7076C(bannerLoopCtr, method);
      }
    }
    else
    {
      v10 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
    }
  }
}


void __fastcall SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgRoot; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *v13; // x20
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v59; // x23
  bool v60; // w21
  System_String_o *v61; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v63; // x0
  __int64 v64; // x0

  if ( (byte_4353656 & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_17522/*"center_glow"*/);
    sub_B70694(&StringLiteral_22202/*"ring_gard1_3"*/);
    sub_B70694(&StringLiteral_22203/*"ring_gard2_1"*/);
    sub_B70694(&StringLiteral_22204/*"ring_gard2_2"*/);
    sub_B70694(&StringLiteral_22201/*"ring_gard1_2"*/);
    sub_B70694(&StringLiteral_22205/*"ring_gard2_3"*/);
    sub_B70694(&StringLiteral_22200/*"ring_gard1_1"*/);
    byte_4353656 = 1;
  }
  bgRoot = (UnityEngine_GameObject_o *)sub_B706AC(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_47:
    sub_B7076C(bgRoot, v6);
  v13 = bgRoot;
  v14 = StringLiteral_22200/*"ring_gard1_1"*/;
  if ( StringLiteral_22200/*"ring_gard1_1"*/ )
  {
    v14 = sub_B70754(StringLiteral_22200/*"ring_gard1_1"*/, v13->klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v15 = (System_Int32_array **)StringLiteral_22200/*"ring_gard1_1"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !LODWORD(v13[1].klass) )
    goto LABEL_48;
  v13[1].monitor = v15;
  sub_B70630((BattleServantConfConponent_o *)&v13[1].monitor, v15, v7, v8, v9, v10, v11, v12);
  v14 = StringLiteral_22201/*"ring_gard1_2"*/;
  if ( StringLiteral_22201/*"ring_gard1_2"*/ )
  {
    v14 = sub_B70754(StringLiteral_22201/*"ring_gard1_2"*/, v13->klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v22 = (System_Int32_array **)StringLiteral_22201/*"ring_gard1_2"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( LODWORD(v13[1].klass) <= 1 )
    goto LABEL_48;
  *(_QWORD *)&v13[1].fields.m_CachedPtr = v22;
  sub_B70630((BattleServantConfConponent_o *)&v13[1].fields, v22, v16, v17, v18, v19, v20, v21);
  v14 = StringLiteral_22202/*"ring_gard1_3"*/;
  if ( StringLiteral_22202/*"ring_gard1_3"*/ )
  {
    v14 = sub_B70754(StringLiteral_22202/*"ring_gard1_3"*/, v13->klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v29 = (System_Int32_array **)StringLiteral_22202/*"ring_gard1_3"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( LODWORD(v13[1].klass) <= 2 )
    goto LABEL_48;
  v13[2].klass = (UnityEngine_GameObject_c *)v29;
  sub_B70630((BattleServantConfConponent_o *)&v13[2], v29, v23, v24, v25, v26, v27, v28);
  v14 = StringLiteral_22203/*"ring_gard2_1"*/;
  if ( StringLiteral_22203/*"ring_gard2_1"*/ )
  {
    v14 = sub_B70754(StringLiteral_22203/*"ring_gard2_1"*/, v13->klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v36 = (System_Int32_array **)StringLiteral_22203/*"ring_gard2_1"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( LODWORD(v13[1].klass) <= 3 )
    goto LABEL_48;
  v13[2].monitor = v36;
  sub_B70630((BattleServantConfConponent_o *)&v13[2].monitor, v36, v30, v31, v32, v33, v34, v35);
  v14 = StringLiteral_22204/*"ring_gard2_2"*/;
  if ( StringLiteral_22204/*"ring_gard2_2"*/ )
  {
    v14 = sub_B70754(StringLiteral_22204/*"ring_gard2_2"*/, v13->klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v43 = (System_Int32_array **)StringLiteral_22204/*"ring_gard2_2"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( LODWORD(v13[1].klass) <= 4 )
    goto LABEL_48;
  *(_QWORD *)&v13[2].fields.m_CachedPtr = v43;
  sub_B70630((BattleServantConfConponent_o *)&v13[2].fields, v43, v37, v38, v39, v40, v41, v42);
  v14 = StringLiteral_22205/*"ring_gard2_3"*/;
  if ( StringLiteral_22205/*"ring_gard2_3"*/ )
  {
    v14 = sub_B70754(StringLiteral_22205/*"ring_gard2_3"*/, v13->klass->_1.element_class);
    if ( !v14 )
      goto LABEL_49;
    v50 = (System_Int32_array **)StringLiteral_22205/*"ring_gard2_3"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( LODWORD(v13[1].klass) <= 5 )
    goto LABEL_48;
  v13[3].klass = (UnityEngine_GameObject_c *)v50;
  sub_B70630((BattleServantConfConponent_o *)&v13[3], v50, v44, v45, v46, v47, v48, v49);
  v14 = StringLiteral_17522/*"center_glow"*/;
  if ( StringLiteral_17522/*"center_glow"*/ )
  {
    v14 = sub_B70754(StringLiteral_17522/*"center_glow"*/, v13->klass->_1.element_class);
    if ( v14 )
    {
      v57 = (System_Int32_array **)StringLiteral_17522/*"center_glow"*/;
      goto LABEL_38;
    }
LABEL_49:
    v64 = sub_B7078C(v14);
    sub_B70738(v64, 0LL);
  }
  v57 = 0LL;
LABEL_38:
  if ( LODWORD(v13[1].klass) <= 6 )
    goto LABEL_48;
  v13[3].monitor = v57;
  sub_B70630((BattleServantConfConponent_o *)&v13[3].monitor, v57, v51, v52, v53, v54, v55, v56);
  klass = v13[1].klass;
  if ( (int)klass >= 1 )
  {
    v59 = 0LL;
    v60 = isDisp;
    while ( v59 < (unsigned int)klass )
    {
      bgRoot = this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_47;
      v61 = (System_String_o *)*((_QWORD *)&v13[1].monitor + v59);
      transform = UnityEngine_GameObject__get_transform(bgRoot, 0LL);
      bgRoot = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(transform, v61, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_47;
      bgRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(bgRoot, v60, 0LL);
      LODWORD(klass) = v13[1].klass;
      if ( (__int64)++v59 >= (int)klass )
        return;
    }
LABEL_48:
    v63 = sub_B70798(v14);
    sub_B70738(v63, 0LL);
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
    sub_B7076C(summonInfoCtr, isDisp);
  }
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, v5, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(v5, 0, 0LL);
  SummonControl__setDispSummonInfo(this, v5, v6);
  MainMenuBar__setMenuActive(v5, 0LL, 0LL);
}


void __fastcall SummonControl__SetGachaTime(SummonControl_o *this, int32_t num, int32_t type, const MethodInfo *method)
{
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v5; // x8
  int v6; // w9

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_8;
  gachaParamData->fields.gachaTime = num;
  if ( type != 3 )
  {
    v5 = this->fields.gachaParamData;
    if ( v5 )
    {
      v6 = 3;
      goto LABEL_7;
    }
LABEL_8:
    sub_B7076C(this, num);
  }
  v5 = this->fields.gachaParamData;
  if ( !v5 )
    goto LABEL_8;
  v6 = 200;
LABEL_7:
  v5->fields.gachaResourceNum = v6 * num;
}


void __fastcall SummonControl__SetupFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  UISprite_o *Component_srcLineSprite; // x20
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v7; // w21
  MasterMissionComponent_c *v8; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v11; // w1
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4353638 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&MasterMissionComponent_TypeInfo);
    sub_B70694(&StringLiteral_17244/*"btn_event_3"*/);
    byte_4353638 = 1;
  }
  v12 = 0LL;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            fragmentsExchangeButton,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(Component_srcLineSprite, (System_String_o *)StringLiteral_17244/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0LL);
  v7 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v7 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  HIDWORD(v12) = v7;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, this->fields.haveStone + v7 >= this->fields.needStone, 0LL);
  v8 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v8 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v8->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v7 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12 + 4, 0LL);
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
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_B7076C(fragmentsExchangeButton, method);
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  LODWORD(v12) = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !fragmentsCount )
    goto LABEL_32;
  UILabel__set_text(fragmentsCount, (System_String_o *)fragmentsExchangeButton, 0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)this->fields.fragmentsLimit;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  fragmentsExchangeButton = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)fragmentsExchangeButton,
                              0LL);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  v11 = 1;
LABEL_31:
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
    sub_B7076C(this, a);
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


void __fastcall SummonControl__SummonSceneRefresh(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435364A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__SummonSceneRefresh_b__227_0__);
    byte_435364A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__227_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
  CommonUI__maskFadein(Instance, 0.0, v4, 0LL);
}


bool __fastcall SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  SummonControl_c *v12; // x0
  System_String_o *String_36095200; // x21
  UserPresentBoxWindow_resData_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int max_length; // w8
  __int64 v22; // x9
  SelectBonusData_o *v23; // x1
  __int64 v24; // x0

  if ( (byte_4353641 & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_B70694(&JsonManager_TypeInfo);
    this = (SummonControl_o *)sub_B70694(&SummonControl_TypeInfo);
    byte_4353641 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_B70630((BattleServantConfConponent_o *)selectBonusData, 0LL, v6, v7, v8, v9, v10, v11);
  v12 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v12 = SummonControl_TypeInfo;
  }
  String_36095200 = UnityEngine_PlayerPrefs__GetString_36095200(v12->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_36095200, 0LL) )
    goto LABEL_7;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          (Il2CppObject *)String_36095200,
          (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v14 )
  {
    max_length = v14->max_length;
    if ( max_length < 1 )
    {
LABEL_7:
      LOBYTE(v14) = 0;
      return (char)v14;
    }
    v22 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v22 >= max_length )
      {
        v24 = sub_B70798(v14);
        sub_B70738(v24, 0LL);
      }
      v23 = (SelectBonusData_o *)v14->m_Items[v22];
      if ( !v23 )
        sub_B7076C(v14, 0LL);
      if ( v23->fields.gachaId == gachaId )
        break;
      if ( (int)++v22 >= max_length )
        goto LABEL_7;
    }
    *selectBonusData = v23;
    sub_B70630(
      (BattleServantConfConponent_o *)selectBonusData,
      (System_Int32_array **)v23,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    LOBYTE(v14) = 1;
  }
  return (char)v14;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct SummonInfoControl_o *summonInfoCtr; // x9
  char v6; // w8

  v2 = this;
  if ( (byte_435361B & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_435361B = 1;
  }
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_12;
  currentIdx = v2->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  this = (SummonControl_o *)vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !this
    || (this = (SummonControl_o *)VaildGachaInfo__HasFlag((VaildGachaInfo_o *)this, 2, 0LL),
        (summonInfoCtr = v2->fields.summonInfoCtr) == 0LL)
    || (v6 = (char)this, (this = (SummonControl_o *)summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
LABEL_12:
    sub_B7076C(this, method);
  }
  if ( (v6 & 1) != 0 )
    SummonInfoLayout__UpdatePc((SummonInfoLayout_o *)this, 0LL);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435365C & 1) == 0 )
  {
    sub_B70694(&SummonControl__WaitBattleChrLoad_d__249_TypeInfo);
    byte_435365C = 1;
  }
  v3 = sub_B70764(SummonControl__WaitBattleChrLoad_d__249_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__249___ctor((SummonControl__WaitBattleChrLoad_d__249_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SummonControl___DialogCallBack_b__253_0(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  WebViewManager_o *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4353687 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_EndCloseDialogCallBack__);
    byte_4353687 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v4, 0LL);
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
LABEL_9:
    sub_B7076C(v5, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__285_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_B7076C(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


void __fastcall SummonControl___OnEndSummonEffect_b__282_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_435368B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5571/*"END_FADE"*/);
    byte_435368B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5571/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__227_0(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4353683 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353683 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        SummonControl__quit(this, v5),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v4);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_1(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435367E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__exeFormation_b__149_2__);
    byte_435367E = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_2__, 0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
  CommonUI__CloseTutorialArrowMark(Instance, v4, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_435367F & 1) == 0 )
  {
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_435367F = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


void __fastcall SummonControl___executeEnhanceTresureDevice_b__270_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20

  if ( (byte_435368A & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_5570/*"END_EFFECT"*/);
    byte_435368A = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6
    || (CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_B7076C(Instance, v5);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5570/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__233_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4353684 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12517/*"START_GACHA"*/);
    byte_4353684 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12517/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_1(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435367D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__openAfterSummonInfo_b__148_2__);
    byte_435367D = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_2__, 0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
  CommonUI__CloseTutorialNotificationDialogArrow_17929536(Instance, v4, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__265_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v4; // x19

  if ( (byte_4353689 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_5588/*"END_SUMMON"*/);
    byte_4353689 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_12;
  SummonResultComponent__clearResultList(summonResultInfo, 0LL);
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_12;
  summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)summonResultInfo,
                                                  0LL);
  if ( !summonResultInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  summonResultInfo = (SummonResultComponent_o *)this->fields.fsm;
  if ( !summonResultInfo )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5588/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)summonResultInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v4 )
LABEL_12:
    sub_B7076C(summonResultInfo, method);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__180_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4353681 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12970/*"SetBannerCenter"*/);
    byte_4353681 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12970/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_B7076C(0LL, v3);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


void __fastcall SummonControl___setUserResourceDisp_b__156_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4353680 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23910/*"{0:N0}"*/);
    byte_4353680 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v9 = stoneCount;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method);
  v7 = System_String__Format((System_String_o *)StringLiteral_23910/*"{0:N0}"*/, v6, 0LL);
  if ( !currentStoneNumLb )
    sub_B7076C(v7, v8);
  UILabel__set_text(currentStoneNumLb, v7, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__216_0(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  UILabel_o *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v16; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v17; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v18; // x24
  void *cautionDlgInfo; // x8
  System_Action_o *v20; // x19
  Il2CppObject *v21; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  v2 = this;
  if ( (byte_4353682 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_B70694(&Method_SummonControl_SetDispBtn__);
    sub_B70694(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_B70694(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_B70694(&Method_SummonControl___c__showConfirmDlg_b__216_1__);
    this = (SummonControl_o *)sub_B70694(&SummonControl___c_TypeInfo);
    byte_4353682 = 1;
  }
  bonusSelectAssetManager = v2->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_20;
  ConfirmDialogPrefab_k__BackingField = (UILabel_o *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_UILabel_(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
  if ( !this )
    goto LABEL_20;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_srcLineSprite;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    Component_srcLineSprite,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this = (SummonControl_o *)v2->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_20;
  BonusSelectSummonConfirmDialog__Init(
    (BonusSelectSummonConfirmDialog_o *)this,
    v2->fields.bonusSelectAssetManager,
    0LL);
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_20;
  bonusSelectSummonConfirmDialog = v2->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v16 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B70764(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v17 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B70764(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v18 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B70764(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v18,
    (Il2CppObject *)v2,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  this = (SummonControl_o *)SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    this = (SummonControl_o *)SummonControl___c_TypeInfo;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  v20 = (System_Action_o *)*((_QWORD *)cautionDlgInfo + 4);
  if ( !v20 )
  {
    if ( (BYTE3(this->fields.summonMBannerPrefab) & 4) != 0 && !LODWORD(this->fields.summonResultInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      cautionDlgInfo = SummonControl___c_TypeInfo->static_fields;
    }
    v21 = *(Il2CppObject **)cautionDlgInfo;
    v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v20, v21, Method_SummonControl___c__showConfirmDlg_b__216_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__216_1 = v20;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->__9__216_1,
      (System_Int32_array **)v20,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_20:
    sub_B7076C(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v16, v17, v18, v20, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__240_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 maskObject; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  SummonEffectComponent_o **p_summonComp; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x8
  SummonEffectComponent_o *v17; // x8
  char v18; // w9
  struct GachaRqParamData_o *v19; // x8
  struct SummonEffectComponent_o *summonComp; // x9
  System_String_o *Value; // x0
  System_String_o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  SummonControl___c_c *v24; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__240_1; // x24
  Il2CppObject *v27; // x25
  struct SummonControl___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_int__o *v36; // x24
  float v37; // s0
  struct GachaInfos_array *v38; // x8
  float v39; // s8
  il2cpp_array_size_t v40; // w20
  GachaInfos_o *v41; // x23
  bool IsCommandCode; // w0
  int32_t v43; // w26
  char v44; // w25
  int32_t Data; // w28
  int32_t v46; // w21
  char isNew; // w27
  int v48; // w27
  __int64 v49; // x21
  bool IsServant; // w25
  const MethodInfo *v51; // x2
  int v52; // w8
  WeightRate_int__o *v53; // x28
  int32_t v54; // w0
  _BOOL4 v55; // w22
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  int32_t v57; // w0
  __int64 v58; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // [xsp+28h] [xbp-88h]
  ServantLimitMaster_o *v60; // [xsp+30h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+38h] [xbp-78h]
  int max_length; // [xsp+4Ch] [xbp-64h]

  if ( (byte_4353685 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SummonControl___c__showSummonEffect_b__240_1__);
    sub_B70694(&SummonControl___c_TypeInfo);
    sub_B70694(&Method_WeightRate_int___ctor__);
    sub_B70694(&Method_WeightRate_int__getData__);
    sub_B70694(&Method_WeightRate_int__getTotalWeight__);
    sub_B70694(&Method_WeightRate_int__setWeight__);
    sub_B70694(&WeightRate_int__TypeInfo);
    sub_B70694(&StringLiteral_5583/*"END_PREPARATION"*/);
    sub_B70694(&StringLiteral_12635/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/);
    sub_B70694(&StringLiteral_2618/*"BGM_SUMMON_1"*/);
    byte_4353685 = 1;
  }
  maskObject = (__int64)this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v4);
  SummonControl__setDispSummonInfo(this, 0, v5);
  maskObject = (__int64)this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_90;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  SummonControl__clearResultList(this, v6);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_2618/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = (__int64)this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_90;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskObject,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  p_summonComp = &this->fields.summonComp;
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.summonComp,
    (System_Int32_array **)Component_WebViewObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  maskObject = (__int64)this->fields.summonComp;
  if ( !maskObject )
    goto LABEL_90;
  SummonEffectComponent__Initialize((SummonEffectComponent_o *)maskObject, 0LL);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_90;
  if ( gachaParamData->fields.gachaTime != 1 )
    goto LABEL_16;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_90;
  if ( gachaResInfoList->max_length == 2 )
  {
    v17 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v18 = 1;
  }
  else
  {
LABEL_16:
    v17 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v18 = 0;
  }
  v17->fields.isNoSkip = v18;
  v19 = this->fields.gachaParamData;
  if ( !v19 )
    goto LABEL_90;
  summonComp = this->fields.summonComp;
  if ( !summonComp )
    goto LABEL_90;
  summonComp->fields.gachaId = v19->fields.gachaId;
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)maskObject,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  v60 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  v59 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)maskObject,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  maskObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)maskObject,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_90;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12635/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v22 = Value;
    maskObject = sub_B706AC(char___TypeInfo, 1LL);
    if ( !maskObject )
      goto LABEL_90;
    if ( !*(_DWORD *)(maskObject + 24) )
    {
LABEL_93:
      v58 = sub_B70798(maskObject);
      sub_B70738(v58, 0LL);
    }
    *(_WORD *)(maskObject + 32) = 44;
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v22,
                                                                 (System_Char_array *)maskObject,
                                                                 0LL);
    v24 = SummonControl___c_TypeInfo;
    if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v24 = SummonControl___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__240_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__240_1;
    if ( !_9__240_1 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = SummonControl___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__240_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__240_1,
        v27,
        Method_SummonControl___c__showSummonEffect_b__240_1__,
        (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
      v28 = SummonControl___c_TypeInfo->static_fields;
      v28->__9__240_1 = (struct System_Func_string__int__o *)_9__240_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v28->__9__240_1,
        (System_Int32_array **)_9__240_1,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)_9__240_1,
                                                                 (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
    v36 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v35,
                                                      (const MethodInfo_1CCB4A0 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v36 = 0LL;
  }
  v37 = UnityEngine_Random__get_value(0LL);
  v38 = this->fields.gachaResInfoList;
  if ( v38 )
  {
    max_length = v38->max_length;
    if ( max_length >= 1 )
    {
      v39 = v37;
      v40 = 0;
      while ( 1 )
      {
        if ( v40 >= v38->max_length )
          goto LABEL_93;
        v41 = v38->m_Items[v40];
        if ( !v41 )
          goto LABEL_90;
        IsCommandCode = SvtType__IsCommandCode(v41->fields.type, 0LL);
        method = (const MethodInfo *)(unsigned int)v41->fields.objectId;
        if ( !IsCommandCode )
          break;
        maskObject = (__int64)v59;
        if ( !v59 )
          goto LABEL_90;
        maskObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v59,
                                (int32_t)method,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_90;
        v43 = *(_DWORD *)(maskObject + 64);
        v44 = 0;
LABEL_47:
        Data = 0;
        v46 = 3;
        isNew = v41->fields.isNew;
        if ( v36 )
        {
LABEL_61:
          maskObject = System_Collections_Generic_List_int___Contains(
                         v36,
                         v41->fields.objectId,
                         (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
          goto LABEL_87;
        }
LABEL_86:
        maskObject = 0LL;
LABEL_87:
        if ( !*p_summonComp )
          goto LABEL_90;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v41->fields.objectId,
          v41->fields.limitCount,
          v44,
          isNew,
          Data,
          v43,
          v46,
          maskObject & 1,
          v41->fields.userSvtId,
          0LL);
        if ( (int)++v40 >= max_length )
          goto LABEL_91;
        v38 = this->fields.gachaResInfoList;
        if ( !v38 )
          goto LABEL_90;
      }
      maskObject = (__int64)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_90;
      maskObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              (int32_t)method,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_90;
      v48 = *(_DWORD *)(maskObject + 84);
      v49 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = (__int64)v60;
      if ( !v60 )
        goto LABEL_90;
      maskObject = (__int64)ServantLimitMaster__GetEntity(v60, v41->fields.objectId, v41->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_90;
      v43 = *(_DWORD *)(maskObject + 24);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, *(_DWORD *)(v49 + 80), v51) )
        goto LABEL_58;
      if ( v43 == 5 )
      {
        if ( v39 >= 0.2 )
        {
LABEL_58:
          v44 = 0;
          goto LABEL_59;
        }
      }
      else if ( v43 != 4 || v39 >= 0.4 )
      {
        goto LABEL_58;
      }
      v44 = 1;
LABEL_59:
      v52 = v48 - 3;
      v46 = 0;
      Data = 0;
      isNew = 0;
      switch ( v52 )
      {
        case 0:
        case 4:
          if ( v36 )
            goto LABEL_61;
          goto LABEL_86;
        case 3:
          v55 = v41->fields.isNew;
          isNew = v41->fields.isNew;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          maskObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_90;
          SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)maskObject,
                                  v41->fields.objectId,
                                  0LL);
          Data = 0;
          v46 = 1;
          if ( v55 && SvtEquipVoiceEntity )
          {
            p_summonComp = &this->fields.summonComp;
            if ( !v36 )
            {
              v36 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v36,
                (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v36 )
                goto LABEL_90;
            }
            System_Collections_Generic_List_int___Add(
              v36,
              v41->fields.objectId,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            Data = 0;
            isNew = 1;
            v46 = 1;
            goto LABEL_61;
          }
          p_summonComp = &this->fields.summonComp;
          if ( v36 )
            goto LABEL_61;
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v46 = 1;
          if ( !v36 )
            goto LABEL_86;
          goto LABEL_61;
        case 8:
          goto LABEL_47;
        default:
          isNew = v41->fields.isNew;
          v53 = (WeightRate_int__o *)sub_B70764(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v53, (const MethodInfo_2CBC9CC *)Method_WeightRate_int___ctor__);
          if ( v43 == 5 )
          {
            if ( !v53 )
              goto LABEL_90;
            WeightRate_int___setWeight(v53, 60, 0, (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v53, 20, 1, (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
            v46 = 2;
            WeightRate_int___setWeight(v53, 20, 2, (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
            v57 = UnityEngine_Random__Range_36100992(0, v53->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v53, v57, (const MethodInfo_2CBC018 *)Method_WeightRate_int__getData__);
            v44 &= Data == 0;
            v43 = 5;
            if ( v36 )
              goto LABEL_61;
          }
          else if ( v43 == 4 )
          {
            if ( !v53 )
              goto LABEL_90;
            WeightRate_int___setWeight(v53, 60, 0, (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v53, 40, 1, (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
            v54 = UnityEngine_Random__Range_36100992(0, v53->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v53, v54, (const MethodInfo_2CBC018 *)Method_WeightRate_int__getData__);
            v46 = 2;
            v44 &= Data == 0;
            v43 = 4;
            if ( v36 )
              goto LABEL_61;
          }
          else
          {
            Data = 0;
            v46 = 2;
            if ( v36 )
              goto LABEL_61;
          }
          goto LABEL_86;
      }
      goto LABEL_86;
    }
  }
LABEL_91:
  maskObject = (__int64)this->fields.fsm;
  if ( !maskObject )
LABEL_90:
    sub_B7076C(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5583/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__256_0(SummonControl_o *this, const MethodInfo *method)
{
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  SummonControl___c_c *v5; // x0
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__256_1; // x21
  Il2CppObject *v8; // x22
  struct SummonControl___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4353688 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SummonControl___c__showSummonResultInfo_b__256_1__);
    sub_B70694(&SummonControl___c_TypeInfo);
    byte_4353688 = 1;
  }
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  v5 = SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v5 = SummonControl___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__256_1 = static_fields->__9__256_1;
  if ( !_9__256_1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__256_1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__256_1, v8, Method_SummonControl___c__showSummonResultInfo_b__256_1__, 0LL);
    v9 = SummonControl___c_TypeInfo->static_fields;
    v9->__9__256_1 = _9__256_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__256_1,
      (System_Int32_array **)_9__256_1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !overflowSvtCoinInfo )
    sub_B7076C(v5, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__256_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__247_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4353686 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3141/*"CLICK_OK"*/);
    byte_4353686 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3141/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7076C(0LL, v4);
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
    sub_B7076C(0LL, v4);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v5) )
  {
    SummonControl__showConfirmDlg(this, v5);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  const MethodInfo *v4; // x2

  if ( (byte_435364F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435364F = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_B7076C(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SummonControl__showConfirmDlg_28207164(this, 0, v4);
}


void __fastcall SummonControl__callbackGachaDraw(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  SummonControl_o *v13; // x20
  __int64 v14; // x8
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x8
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x8
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x8
  System_Int32_array **v47; // x1
  __int64 v48; // x0

  v4 = this;
  if ( (byte_4353652 & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_DeserializeArray_SummonControl_resData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_4353652 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL)
    || System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v5);
    return;
  }
  v6 = (Il2CppObject *)System_String__Concat_44760452(
                         (System_String_o *)StringLiteral_15855/*"["*/,
                         result,
                         (System_String_o *)StringLiteral_16092/*"]"*/,
                         0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                              v6,
                              (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_23;
  v13 = this;
  if ( !LODWORD(this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v14 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v14 )
    goto LABEL_23;
  v15 = *(System_Int32_array ***)(v14 + 16);
  v4->fields.gachaResInfoList = (struct GachaInfos_array *)v15;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.gachaResInfoList, v15, v7, v8, v9, v10, v11, v12);
  if ( !LODWORD(v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v22 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v22 )
    goto LABEL_23;
  v23 = *(System_Int32_array ***)(v22 + 24);
  v4->fields.canRankUpClassIds = (struct System_Int32_array *)v23;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.canRankUpClassIds, v23, v16, v17, v18, v19, v20, v21);
  if ( !LODWORD(v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v30 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v30 )
    goto LABEL_23;
  v31 = *(System_Int32_array ***)(v30 + 32);
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v31;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.overflowSvtCoinInfos, v31, v24, v25, v26, v27, v28, v29);
  if ( !LODWORD(v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v38 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v38 )
    goto LABEL_23;
  v39 = *(System_Int32_array ***)(v38 + 40);
  v4->fields.extraGiftIds = (struct System_Int32_array *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.extraGiftIds, v39, v32, v33, v34, v35, v36, v37);
  if ( !LODWORD(v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
  {
LABEL_24:
    v48 = sub_B70798(this);
    sub_B70738(v48, 0LL);
  }
  v46 = *(_QWORD *)&v13->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v46
    || (v47 = *(System_Int32_array ***)(v46 + 48),
        v4->fields.GachaExtraGiftList = (struct GachaExtraGifts_array *)v47,
        sub_B70630((BattleServantConfConponent_o *)&v4->fields.GachaExtraGiftList, v47, v40, v41, v42, v43, v44, v45),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_23:
    sub_B7076C(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11233/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4353655 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    byte_4353655 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11233/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  PlayMakerFSM_o *fsm; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_435366C & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl___c__DisplayClass269_0__checkEnhanceTresureDevice_b__0__);
    sub_B70694(&SummonControl___c__DisplayClass269_0_TypeInfo);
    sub_B70694(&StringLiteral_9468/*"NO_EXIST"*/);
    byte_435366C = 1;
  }
  v3 = sub_B70764(SummonControl___c__DisplayClass269_0_TypeInfo);
  SummonControl___c__DisplayClass269_0___ctor((SummonControl___c__DisplayClass269_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v3 + 24), v12) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass269_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v16, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(fsm, v5);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9468/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_435366A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9468/*"NO_EXIST"*/);
    byte_435366A = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B7076C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9468/*"NO_EXIST"*/, 0LL);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v14; // x8
  int32_t objectId; // w21
  CommonUI_o *v16; // x19
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  __int64 v20; // x0

  if ( (byte_435366B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDeviceSingle_b__0__);
    sub_B70694(&SummonControl___c__DisplayClass268_0_TypeInfo);
    sub_B70694(&StringLiteral_9468/*"NO_EXIST"*/);
    byte_435366B = 1;
  }
  v3 = sub_B70764(SummonControl___c__DisplayClass268_0_TypeInfo);
  SummonControl___c__DisplayClass268_0___ctor((SummonControl___c__DisplayClass268_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_17;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v3 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v20 = sub_B70798(Instance);
    sub_B70738(v20, 0LL);
  }
  v14 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v14 )
    goto LABEL_17;
  objectId = v14->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v3 + 24) = objectId;
    v16 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v3,
      Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v16 )
    {
      CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v19, 0LL);
      return;
    }
LABEL_17:
    sub_B7076C(Instance, v5);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9468/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 *v4; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  v2 = this;
  if ( (byte_4353631 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3048/*"CHECK_STONE"*/);
    sub_B70694(&StringLiteral_12406/*"SHOW_CONFIRM_DLG"*/);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_3045/*"CHECK_POINT"*/);
    byte_4353631 = 1;
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
LABEL_15:
    sub_B7076C(this, method);
  switch ( gachaParamData->fields.gachaType )
  {
    case 1:
    case 7:
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      v4 = &StringLiteral_3048/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = v2->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_15;
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      if ( summonInfoCtr->fields.isFree )
LABEL_12:
        v4 = &StringLiteral_12406/*"SHOW_CONFIRM_DLG"*/;
      else
        v4 = &StringLiteral_3045/*"CHECK_POINT"*/;
      break;
    case 5:
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      goto LABEL_12;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v4, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4353659 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_6972/*"GET_MULTI"*/);
    byte_4353659 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B7076C(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6972/*"GET_MULTI"*/, 0LL);
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
    sub_B7076C(0LL, drawGachaEnt);
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
    sub_B7076C(0LL, drawUsrGachaEnt);
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
  __int64 v8; // x0

  v3 = this;
  if ( (byte_435365A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9407/*"NEW_SVT"*/);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_6985/*"GO_BACK"*/);
    byte_435365A = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v8 = sub_B70798(this);
    sub_B70738(v8, 0LL);
  }
  v6 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v6 )
    goto LABEL_14;
  if ( v6->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v6->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9407/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B7076C(this, method);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v7 = &StringLiteral_6985/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall SummonControl__checkIsNewSvtMulti(SummonControl_o *this, const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w9
  unsigned int v4; // w10
  GachaInfos_o *v5; // x11
  __int64 v6; // x0

  gachaResInfoList = this->fields.gachaResInfoList;
  this->fields.resType = 1;
  if ( !gachaResInfoList )
LABEL_13:
    sub_B7076C(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v6 = sub_B70798(this);
        sub_B70738(v6, 0LL);
      }
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
  __int64 v11; // x0

  v3 = this;
  if ( (byte_4353663 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&StringLiteral_9860/*"OLD_SVT"*/);
    sub_B70694(&StringLiteral_6442/*"FINAL_SVT"*/);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_9407/*"NEW_SVT"*/);
    byte_4353663 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_19;
  max_length = gachaResInfoList->max_length;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (int)getSvtIdx > (int)(max_length - 1) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_6442/*"FINAL_SVT"*/;
LABEL_15:
      v10 = (System_String_o *)*v7;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
  {
    v11 = sub_B70798(this);
    sub_B70738(v11, 0LL);
  }
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_19;
  if ( !v8->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v7 = &StringLiteral_9860/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_19:
    sub_B7076C(this, method);
  }
  objectId = v8->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_19;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v10 = (System_String_o *)StringLiteral_9860/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v10, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9407/*"NEW_SVT"*/, 0LL);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    objectId,
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B7076C(UserGachaData, v6);
  v10 = UserGachaData[23];
  if ( v10 >= 1 )
    return v9[7] >= v10;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v7; // w22

  v4 = this;
  if ( (byte_4353664 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (SummonControl_o *)sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4353664 = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B7076C(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( befSvtList->fields._items->m_Items[v7 + 1] == svtId )
      return 1;
    if ( (int)++v7 >= size )
      return 0;
    befSvtList = v4->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  __int64 *v6; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  int32_t v9; // w8
  CommonUI_o *v10; // x19

  if ( (byte_4353603 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&StringLiteral_3110/*"CLEAR_TUTORIAL"*/);
    sub_B70694(&StringLiteral_11289/*"RETURN_TUTORIAL"*/);
    byte_4353603 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__IsProgressDone(1, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29045252(101, 0LL) )
    {
      v9 = 1;
      this->fields.isDoneTutorial = 0;
      goto LABEL_50;
    }
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__IsProgressDone(2, 0LL) )
    goto LABEL_59;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29045252(101, 0LL) )
  {
LABEL_59:
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__IsProgressDone(2, 0LL) )
      goto LABEL_33;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29045252(101, 0LL) )
      goto LABEL_33;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29045252(107, 0LL) )
    {
LABEL_33:
      SummonControl__setTutorialCtrEnable(this, 1, v7);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_56;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 1, 0LL);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_56;
      SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 1, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.titleInfo;
      if ( !summonInfoCtr )
        goto LABEL_56;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)summonInfoCtr, 1, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.indexPanel;
      if ( !summonInfoCtr )
        goto LABEL_56;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 1, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.leftArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_56;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 1, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.rightArrowBtn;
      if ( !summonInfoCtr )
        goto LABEL_56;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 1, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.summonHelpInfo;
      if ( !summonInfoCtr )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 0, 0LL);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.detailInfo;
      if ( !summonInfoCtr )
        goto LABEL_56;
      summonInfoCtr = (SummonInfoControl_o *)UnityEngine_GameObject__get_gameObject(
                                               (UnityEngine_GameObject_o *)summonInfoCtr,
                                               0LL);
      if ( !summonInfoCtr )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonInfoCtr, 1, 0LL);
      this->fields.isResult = 0;
      SummonControl__showHelpImg(this, v8);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fsm;
      if ( !summonInfoCtr )
        goto LABEL_56;
      v6 = &StringLiteral_3110/*"CLEAR_TUTORIAL"*/;
      goto LABEL_47;
    }
    this->fields.isDoneSecTutorial = 0;
    v9 = 4;
LABEL_50:
    this->fields.tutorialKind = v9;
    SummonControl__progTutorial(this, v3);
    goto LABEL_51;
  }
  summonInfoCtr = (SummonInfoControl_o *)this->fields.fsm;
  this->fields.isDoneTutorial = 0;
  if ( !summonInfoCtr )
    goto LABEL_56;
  v6 = &StringLiteral_11289/*"RETURN_TUTORIAL"*/;
LABEL_47:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonInfoCtr, (System_String_o *)*v6, 0LL);
LABEL_51:
  summonInfoCtr = (SummonInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)summonInfoCtr;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
LABEL_56:
    sub_B7076C(summonInfoCtr, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtEquipKeep; // w21
  int32_t svtKeep; // w24
  BalanceConfig_c *v7; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w0
  int32_t Count; // w0
  int32_t v11; // w20
  SummonControl_o *v12; // x21
  BalanceConfig_c *v13; // x0
  int32_t v14; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v15; // x23
  int32_t v16; // w3
  CommonUI_o *v17; // x0
  int32_t v18; // w1
  struct UserGameEntity_o *v19; // x8
  int32_t v20; // w22
  int32_t v21; // w21
  SummonControl_o *v22; // x20
  int32_t v23; // w2
  struct UserGameEntity_o *v24; // x8
  int32_t v25; // w21
  SummonControl_o *v26; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4353629 & 1) == 0 )
  {
    sub_B70694(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_closeShotCommandCodeFrameDlg__);
    sub_B70694(&Method_SummonControl_closeShotSvtEqFrameDlg__);
    sub_B70694(&Method_SummonControl_closeShotSvtFrameDlg__);
    sub_B70694(&StringLiteral_6557/*"FRIEND_GACHA_ADD_LIMIT"*/);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_3046/*"CHECK_RESOURCE"*/);
    byte_4353629 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_44;
  if ( gachaParamData->fields.gachaType != 3 )
    goto LABEL_22;
  userGameEntity = v2->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_44;
  svtKeep = userGameEntity->fields.svtKeep;
  svtEquipKeep = userGameEntity->fields.svtEquipKeep;
  if ( !byte_434DEF6 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    byte_434DEF6 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v7->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_44;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6557/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( Value >= 1 )
  {
    svtKeep += Value;
    svtEquipKeep += Value;
    CommandCodeFrameMax += Value;
  }
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_44;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_44;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0LL);
  v11 = Count;
  if ( Count < CommandCodeFrameMax && servantEquipSum[1] < svtKeep && servantEquipSum[0] < svtEquipKeep )
  {
LABEL_22:
    this = (SummonControl_o *)v2->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3046/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_44:
    sub_B7076C(this, method);
  }
  if ( servantEquipSum[1] >= svtKeep )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = v2->fields.userGameEntity;
    if ( !v19 )
      goto LABEL_44;
    v20 = v19->fields.svtKeep;
    v21 = servantEquipSum[1];
    v22 = this;
    v15 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)v2,
      Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v22 )
      goto LABEL_44;
    v17 = (CommonUI_o *)v22;
    v18 = v21;
    v23 = v20;
    v16 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= svtEquipKeep )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = v2->fields.userGameEntity;
      if ( !v24 )
        goto LABEL_44;
      v14 = v24->fields.svtEquipKeep;
      v25 = servantEquipSum[0];
      v26 = this;
      v15 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v26 )
        goto LABEL_44;
      v16 = 1;
      v17 = (CommonUI_o *)v26;
      v18 = v25;
    }
    else
    {
      if ( Count < CommandCodeFrameMax )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_44;
      v12 = this;
      if ( !byte_434DEF6 )
      {
        sub_B70694(&BalanceConfig_TypeInfo);
        byte_434DEF6 = 1;
      }
      v13 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      v14 = v13->static_fields->CommandCodeFrameMax;
      v15 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B70764(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v2,
        Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v12 )
        goto LABEL_44;
      v16 = 2;
      v17 = (CommonUI_o *)v12;
      v18 = v11;
    }
    v23 = v14;
  }
  CommonUI__OpenSvtFrameShortDlg(v17, v18, v23, v16, 0, v15, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t v7; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_4353632 & 1) == 0 )
  {
    sub_B70694(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SummonControl_closeShotPointDlg__);
    sub_B70694(&StringLiteral_12406/*"SHOW_CONFIRM_DLG"*/);
    byte_4353632 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(v4);
  MasterData_WarQuestSelectionMaster = **(void ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblUserMaster___);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_17;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = TblUserMaster__getUserData(
                                         (TblUserMaster_o *)MasterData_WarQuestSelectionMaster,
                                         userGameEntity->fields.userId,
                                         0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  v7 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v7;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v7 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v11 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SummonControl_closeShotPointDlg__,
      0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v7, v11, v12);
      return;
    }
LABEL_17:
    sub_B7076C(MasterData_WarQuestSelectionMaster, method);
  }
  MasterData_WarQuestSelectionMaster = this->fields.fsm;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)MasterData_WarQuestSelectionMaster,
    (System_String_o *)StringLiteral_12406/*"SHOW_CONFIRM_DLG"*/,
    0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x10
  int32_t haveStoneNum; // w11
  int32_t gachaType; // w9
  int32_t HaveFreeStoneNum_k__BackingField; // w20
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w22
  int32_t v10; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x24
  const MethodInfo *v13; // x5
  SummonConfirmDlgComponent_o *v14; // x20
  int32_t haveStone; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x3

  v2 = this;
  if ( (byte_4353634 & 1) == 0 )
  {
    sub_B70694(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SummonControl_closeShotStoneDlg__);
    this = (SummonControl_o *)sub_B70694(&StringLiteral_12406/*"SHOW_CONFIRM_DLG"*/);
    byte_4353634 = 1;
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
    v10 = HaveChargeStoneNum_k__BackingField;
  else
    v10 = haveStoneNum;
  v2->fields.needStone = gachaResourceNum;
  if ( v10 >= gachaResourceNum )
  {
    this = (SummonControl_o *)v2->fields.fsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12406/*"SHOW_CONFIRM_DLG"*/, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = v2->fields.confirmDlgInfo;
      v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v2,
        Method_SummonControl_closeShotStoneDlg__,
        0LL);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v12,
          v13);
        return;
      }
LABEL_16:
      sub_B7076C(this, method);
    }
    SummonControl__SetupFragmentsExchangeButton(v2, method);
    v14 = v2->fields.confirmDlgInfo;
    haveStone = v2->fields.haveStone;
    v16 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)v2,
      Method_SummonControl_closeShotStoneDlg__,
      0LL);
    if ( !v14 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v14, haveStone, v16, v17);
  }
}


void __fastcall SummonControl__checkValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t userId; // x20
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x21
  GachaReleaseMaster_o *v6; // x22
  const MethodInfo *v7; // x2
  struct GachaEntity_array *useGachaData; // x8
  __int64 v9; // x26
  int max_length; // w9
  GachaEntity_o *v11; // x24
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v17; // x25
  UserGachaEntity_o *UserGachaData; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *vaildGachaList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v20; // x21
  __int64 v21; // x0
  StoryGachaAdjustData_o *adjustData; // [xsp+8h] [xbp-58h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_435360F & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_VaildGachaInfo___ctor__);
    sub_B70694(&System_Comparison_VaildGachaInfo__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_GachaReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
    sub_B70694(&Method_SummonControl_SlotCompare__);
    this = (SummonControl_o *)sub_B70694(&TutorialFlag_TypeInfo);
    byte_435360F = 1;
  }
  entity = 0LL;
  adjustData = 0LL;
  userGameEntity = v2->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_39;
  userId = userGameEntity->fields.userId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserQuestMaster___);
  this = (SummonControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  if ( !v2->fields.vaildGachaList )
    goto LABEL_39;
  v6 = (GachaReleaseMaster_o *)this;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.vaildGachaList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  useGachaData = v2->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_39;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
    {
      v21 = sub_B70798(this);
      sub_B70738(v21, 0LL);
    }
    v11 = useGachaData->m_Items[v9];
    if ( !v11 || !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    this = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                userId,
                                v11->fields.condQuestId,
                                0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonControl_o *)entity;
      if ( !entity )
        goto LABEL_39;
      this = (SummonControl_o *)UserQuestEntity__getClearNum(entity, 0LL);
      if ( (int)this > 0 )
        goto LABEL_19;
      this = (SummonControl_o *)entity;
      if ( !entity )
        goto LABEL_39;
      this = (SummonControl_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
      if ( (int)this >= v11->fields.condQuestPhase )
      {
LABEL_19:
        if ( !v6 )
          goto LABEL_39;
        this = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v6, v11->fields.id, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v13 = SummonControl__CheckStoryGachaAdjustData(this, &adjustData, v11->fields.id, v12);
          if ( !v13 )
            adjustData = 0LL;
          beforeGachaId = v11->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            this = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v13, beforeGachaId, v14);
            if ( !this )
              goto LABEL_38;
            v17 = this;
            this = (SummonControl_o *)SummonControl__getCurrentGachaData(v2, v11->fields.beforeGachaId, v7);
            if ( !this )
              goto LABEL_39;
            if ( SLODWORD(v17->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Width) < *((_DWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS
                                                                                   + 2) )
              goto LABEL_38;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            this = (SummonControl_o *)TutorialFlag__IsProgressDone(2, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_38;
            UserGachaData = SummonControl__getUserGachaData(this, v11->fields.id, v7);
            if ( UserGachaData )
            {
              this = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(v2, UserGachaData, v11, v15);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_38;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)v11->fields.gachaGroupId;
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
          SummonControl__AddVaildGachaInfoList(v2, v11, adjustData, v15);
        }
      }
    }
LABEL_38:
    useGachaData = v2->fields.useGachaData;
    ++v9;
    if ( !useGachaData )
      goto LABEL_39;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(this, &v2->fields.vaildGachaList, v7);
  vaildGachaList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v2->fields.vaildGachaList;
  v20 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v20,
    (Il2CppObject *)v2,
    Method_SummonControl_SlotCompare__,
    (const MethodInfo_2B05B38 *)Method_System_Comparison_VaildGachaInfo___ctor__);
  if ( !vaildGachaList )
LABEL_39:
    sub_B7076C(this, method);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    vaildGachaList,
    (System_Comparison_T__o *)v20,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__clearBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int v4; // w20
  bool v5; // cc
  int32_t v6; // w21
  int32_t childCount; // w20
  UnityEngine_Object_o *gameObject; // x22
  bool v9; // vf
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w20
  UnityEngine_Object_o *v13; // x21

  if ( (byte_4353627 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353627 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)bannerLoopCtr,
                                               0LL);
  if ( !this->fields.sliderGrid )
    goto LABEL_34;
  v4 = (int)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid,
                                               0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v6 = v4 - 1;
  v5 = v4 < 1;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( !v5 )
  {
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
                                                   v6,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_15;
    }
LABEL_34:
    sub_B7076C(bannerLoopCtr, method);
  }
LABEL_15:
  v9 = __OFSUB__(childCount, 1);
  v10 = childCount - 1;
  if ( v10 < 0 == v9 )
  {
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !bannerLoopCtr )
        goto LABEL_34;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v10,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v11, 0LL);
    }
    while ( --v10 >= 0 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v12 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v12 >= 0 )
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
                                                   v12,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v13, 0LL);
      if ( --v12 < 0 )
        return;
    }
    goto LABEL_34;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4353667 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4353667 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL)
    || (summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)summonResultInfo,
                                                        0LL)) == 0LL )
  {
    sub_B7076C(summonResultInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall SummonControl__closeShotCommandCodeFrameDlg(
        SummonControl_o *this,
        int32_t res,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  AvalonSceneManager_o *v7; // x19
  SceneJumpInfo_o *v8; // x20

  if ( (byte_435362C & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_435362C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  if ( res == 2 )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (CommonUI_o *)this->fields.fsm;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
      v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17523760(v8, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 2, 0LL);
      if ( v7 )
      {
        AvalonSceneManager__transitionScene(v7, 22, 1, (Il2CppObject *)v8, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B7076C(Instance, v6);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0

  if ( (byte_4353633 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4353633 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  SummonConfirmDlgComponent__Close_28174604(confirmDlgInfo, 0LL, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_9:
    sub_B7076C(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  __int64 *v6; // x8

  if ( (byte_4353635 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    sub_B70694(&StringLiteral_6987/*"GO_BUY_STONE"*/);
    byte_4353635 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_17;
  SummonConfirmDlgComponent__Close_28174604(confirmDlgInfo, 0LL, method);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton;
  if ( !confirmDlgInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL);
  if ( !res )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      v6 = &StringLiteral_3116/*"CLICK_CANCEL"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_B7076C(confirmDlgInfo, res);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
    goto LABEL_17;
  v6 = &StringLiteral_6987/*"GO_BUY_STONE"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v6, 0LL);
}


void __fastcall SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  AvalonSceneManager_o *v7; // x19
  SceneJumpInfo_o *v8; // x20
  int32_t v9; // w1

  if ( (byte_435362B & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12883/*"ServantEquipList"*/);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_12882/*"ServantEQCombine"*/);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_435362B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
        v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v8 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17523760(v8, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 1, 0LL);
        if ( v7 )
        {
          v9 = 22;
          goto LABEL_25;
        }
      }
LABEL_31:
      sub_B7076C(Instance, v6);
    case 1:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
        v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v8 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17523664(v8, (System_String_o *)StringLiteral_12883/*"ServantEquipList"*/, 0LL);
        if ( v7 )
        {
          v9 = 71;
          goto LABEL_25;
        }
      }
      goto LABEL_31;
    case 0:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
        v7 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v8 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17523664(v8, (System_String_o *)StringLiteral_12882/*"ServantEQCombine"*/, 0LL);
        if ( v7 )
        {
          v9 = 32;
LABEL_25:
          AvalonSceneManager__transitionScene(v7, v9, 1, (Il2CppObject *)v8, 0LL);
          return;
        }
      }
      goto LABEL_31;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_31;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  WebViewManager_o *v7; // x19
  SceneJumpInfo_o *v8; // x20
  int32_t v9; // w1
  Il2CppObject *v10; // x3

  if ( (byte_435362A & 1) == 0 )
  {
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    sub_B70694(&StringLiteral_12879/*"ServantCombine"*/);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_435362A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSvtFrameShortDlg(Instance, 0LL, 0LL);
  switch ( res )
  {
    case 2:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
        v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v8 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17523760(v8, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 0, 0LL);
        if ( v7 )
        {
          v9 = 22;
          goto LABEL_19;
        }
      }
LABEL_32:
      sub_B7076C(Instance, v6);
    case 1:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v9 = 71;
          v10 = 0LL;
          goto LABEL_26;
        }
      }
      goto LABEL_32;
    case 0:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
        v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v8 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17523664(v8, (System_String_o *)StringLiteral_12879/*"ServantCombine"*/, 0LL);
        if ( v7 )
        {
          v9 = 32;
LABEL_19:
          Instance = (CommonUI_o *)v7;
          v10 = (Il2CppObject *)v8;
LABEL_26:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v9, 1, v10, 0LL);
          return;
        }
      }
      goto LABEL_32;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_32;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonCautionDlgComponent_o *cautionDlgInfo; // x0
  const MethodInfo *v6; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v8; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v11; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v12; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v13; // x24

  if ( (byte_435364D & 1) == 0 )
  {
    sub_B70694(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SummonControl_BonusSelectSummonConfirmResult__);
    sub_B70694(&Method_SummonControl_SetDispBtn__);
    sub_B70694(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_B70694(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_435364D = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_25;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, method);
  if ( !res )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v8 = this->fields.gachaParamData;
              if ( v8 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v8->fields.gachaId;
                v11 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B70764(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v11,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v12 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B70764(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v12,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v13 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B70764(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v13,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v11, v12, v13, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7076C(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__loadAssetsForSummon(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_435364C & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_435364C = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close_28174604(confirmDlgInfo, 0LL, method);
  if ( !res )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__loadAssetsForSummon(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x27
  UnityEngine_Component_o *summonBannerScrollView; // x0
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UICenterOnChild_o *v37; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v40; // x22
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x8
  struct UIScrollView_o *v49; // x21
  BattleServantConfConponent_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v52; // x22
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  int32_t height; // w0
  float v63; // s0
  UnityEngine_Component_o *v64; // x20
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  struct UIWrapContent_o **p_summonMBannerLoopCtr; // x22
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct UICenterOnChild_o *v83; // x21
  BattleServantConfConponent_o *v84; // x21
  System_Delegate_o *v85; // t1
  SpringPanel_OnFinished_o *v86; // x22
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct UIScrollView_o *summonMBannerScrollView; // x21
  BattleServantConfConponent_o *v95; // x21
  System_Delegate_o *v96; // t1
  UIScrollView_OnDragNotification_o *v97; // x22
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  int v105; // w23
  int v106; // w22
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v109; // x26
  UnityEngine_Transform_o *v110; // x20
  int v111; // s0
  UnityEngine_Transform_o *v114; // x21
  int v115; // s0
  int v118; // w27
  System_String_o *v119; // x0
  System_String_o *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  GachaBannerComponent_o *v123; // x28
  struct System_Collections_Generic_List_VaildGachaInfo__o *v124; // x20
  int v125; // w8
  int v126; // w9
  int32_t v127; // w25
  VaildGachaInfo_o *v128; // x8
  System_String_o *v129; // x0
  System_String_o *v130; // x21
  const MethodInfo *v131; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v132; // x20
  UnityEngine_Object_o *v133; // x22
  VaildGachaInfo_o *v134; // x24
  System_String_o *v135; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x28
  UnityEngine_Transform_o *v139; // x20
  int v140; // s0
  UnityEngine_Transform_o *v143; // x21
  int v144; // s0
  System_String_o *name; // x0
  SummonMiniBannerComponent_o *v148; // x26
  struct System_Collections_Generic_List_VaildGachaInfo__o *v149; // x20
  VaildGachaInfo_o *v150; // x8
  System_String_o *v151; // x0
  System_String_o *v152; // x21
  const MethodInfo *v153; // x2
  UnityEngine_Object_o *v154; // x28
  const MethodInfo *v155; // x2
  WebViewObject_o *Component_WebViewObject; // x22
  SummonMiniBannerComponent_CallbackFunc_o *v157; // x20
  bool v158; // cc
  struct UIGrid_o *sliderGrid; // x8
  float v160; // s8
  int v161; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v163; // x0
  UnityEngine_Transform_o *v164; // x20
  int v165; // s0
  const MethodInfo *v168; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *v169; // x21
  __int64 currentIdx; // x22
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *v172; // x21
  SummonInfoControl_ClickDelegate_o *v173; // x22
  const MethodInfo *v174; // x2
  const MethodInfo *v175; // x1
  SummonControl_o *v176; // x0
  const MethodInfo *v177; // x1
  int v178; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_summonMBannerInfoList; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_bannerInfoList; // [xsp+28h] [xbp-78h]
  UnityEngine_Component_o **v181; // [xsp+30h] [xbp-70h]
  int size; // [xsp+3Ch] [xbp-64h]
  int32_t moveIdx; // [xsp+48h] [xbp-58h]
  int v184; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353615 & 1) == 0 )
  {
    sub_B70694(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    sub_B70694(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&UIScrollView_OnDragNotification_TypeInfo);
    sub_B70694(&SpringPanel_OnFinished_TypeInfo);
    sub_B70694(&Method_SummonControl_OnCenterOnChildFinishedMBanner__);
    sub_B70694(&Method_SummonControl_OnCenterOnChildFinished__);
    sub_B70694(&Method_SummonControl_OnClickMiniBanner__);
    sub_B70694(&Method_SummonControl_OnDragStarted__);
    sub_B70694(&Method_SummonControl_exeSummon__);
    sub_B70694(&StringLiteral_19946/*"img_summon_"*/);
    sub_B70694(&StringLiteral_19948/*"img_summon_mini_236"*/);
    sub_B70694(&StringLiteral_19947/*"img_summon_mini_"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_1031/*"1"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    byte_4353615 = 1;
  }
  v184 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v3;
  p_bannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.bannerInfoList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bannerInfoList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v10;
  p_summonMBannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.summonMBannerInfoList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.summonMBannerInfoList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( this->fields.vaildGachaList )
  {
    bannerLoopCtr = (UnityEngine_Object_o *)this->fields.bannerLoopCtr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
    if ( UnityEngine_Object__op_Equality(bannerLoopCtr, 0LL, 0LL) )
    {
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            summonBannerScrollView,
                                                            0LL);
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v21 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)summonBannerScrollView,
                                     (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_bannerLoopCtr = (UnityEngine_Component_o *)v21;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.bannerLoopCtr, v21, v22, v23, v24, v25, v26, v27);
    }
    p_centerChild = &this->fields.centerChild;
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
    if ( ((unsigned __int8)summonBannerScrollView & 1) != 0 )
    {
      summonBannerScrollView = *p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        goto LABEL_105;
      summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            summonBannerScrollView,
                                                            0LL);
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v30 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)summonBannerScrollView,
                                     (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_centerChild = (struct UICenterOnChild_o *)v30;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.centerChild, v30, v31, v32, v33, v34, v35, v36);
    }
    v37 = *p_centerChild;
    if ( !v37 )
      goto LABEL_105;
    onFinished = (System_Delegate_o *)v37->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v37->fields.onFinished;
    v40 = (SpringPanel_OnFinished_o *)sub_B70764(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(v40, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
    v41 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v40, 0LL);
    v48 = v41;
    if ( v41 && *v41 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      goto LABEL_122;
    p_onFinished->klass = (BattleServantConfConponent_c *)v41;
    sub_B70630(p_onFinished, v41, v42, v43, v44, v45, v46, v47);
    v49 = this->fields.summonBannerScrollView;
    if ( !v49 )
      goto LABEL_105;
    onDragFinished = (System_Delegate_o *)v49->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&v49->fields.onDragFinished;
    v52 = (UIScrollView_OnDragNotification_o *)sub_B70764(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(v52, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v53 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v52, 0LL);
    v48 = v53;
    if ( v53 )
    {
      if ( *v53 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_122;
    }
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v53;
    sub_B70630(p_onDragFinished, v53, v54, v55, v56, v57, v58, v59);
    vaildGachaList = this->fields.vaildGachaList;
    if ( !vaildGachaList )
      goto LABEL_105;
    size = vaildGachaList->fields._size;
    width = UnityEngine_Screen__get_width(0LL);
    height = UnityEngine_Screen__get_height(0LL);
    v63 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
    v64 = *p_bannerLoopCtr;
    summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Mathf__FloorToInt(
                                                          (float)((float)(v63 / 1.7778) * 1024.0) + 4.0,
                                                          0LL);
    if ( !v64 )
      goto LABEL_105;
    LODWORD(v64[1].klass) = (_DWORD)summonBannerScrollView;
    summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_summonMBannerLoopCtr = &this->fields.summonMBannerLoopCtr;
    if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0LL, 0LL) )
    {
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            summonBannerScrollView,
                                                            0LL);
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v67 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)summonBannerScrollView,
                                     (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_summonMBannerLoopCtr = (struct UIWrapContent_o *)v67;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.summonMBannerLoopCtr, v67, v68, v69, v70, v71, v72, v73);
    }
    summonMBannerCenterChild = (UnityEngine_Object_o *)this->fields.summonMBannerCenterChild;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_summonMBannerCenterChild = &this->fields.summonMBannerCenterChild;
    summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                          summonMBannerCenterChild,
                                                          0LL,
                                                          0LL);
    if ( ((unsigned __int8)summonBannerScrollView & 1) != 0 )
    {
      summonBannerScrollView = (UnityEngine_Component_o *)*p_summonMBannerLoopCtr;
      if ( !*p_summonMBannerLoopCtr )
        goto LABEL_105;
      summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            summonBannerScrollView,
                                                            0LL);
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v76 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)summonBannerScrollView,
                                     (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v76;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerCenterChild,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
    v83 = *p_summonMBannerCenterChild;
    v181 = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
    if ( !v83 )
      goto LABEL_105;
    v85 = (System_Delegate_o *)v83->fields.onFinished;
    v84 = (BattleServantConfConponent_o *)&v83->fields.onFinished;
    v86 = (SpringPanel_OnFinished_o *)sub_B70764(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(v86, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinishedMBanner__, 0LL);
    v87 = (System_Int32_array **)System_Delegate__Combine(v85, (System_Delegate_o *)v86, 0LL);
    v48 = v87;
    if ( v87 )
    {
      if ( *v87 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
        goto LABEL_122;
    }
    v84->klass = (BattleServantConfConponent_c *)v87;
    sub_B70630(v84, v87, v88, v89, v90, v91, v92, v93);
    summonMBannerScrollView = this->fields.summonMBannerScrollView;
    if ( !summonMBannerScrollView )
      goto LABEL_105;
    v96 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragFinished;
    v95 = (BattleServantConfConponent_o *)&summonMBannerScrollView->fields.onDragFinished;
    v97 = (UIScrollView_OnDragNotification_o *)sub_B70764(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(v97, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v98 = (System_Int32_array **)System_Delegate__Combine(v96, (System_Delegate_o *)v97, 0LL);
    v48 = v98;
    if ( v98 && *v98 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
    {
LABEL_122:
      v176 = (SummonControl_o *)sub_B70A60(v48);
      SummonControl__setPositionByWarId(v176, v177);
    }
    else
    {
      v105 = size;
      v95->klass = (BattleServantConfConponent_c *)v98;
      sub_B70630(v95, v98, v99, v100, v101, v102, v103, v104);
      if ( 2 * size >= 1 )
      {
        v106 = 0;
        v178 = (size & 0x7FFFFFFF) - size;
        while ( 1 )
        {
          summonBannerScrollView = *p_bannerLoopCtr;
          if ( !*p_bannerLoopCtr )
            break;
          summonBannerPrefab = this->fields.summonBannerPrefab;
          transform = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                summonBannerPrefab,
                                                                transform,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v109 = (UnityEngine_GameObject_o *)summonBannerScrollView;
          v110 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v111 = UnityEngine_Vector3__get_one(0LL);
          if ( !v110 )
            break;
          UnityEngine_Transform__set_localScale(v110, *(UnityEngine_Vector3_o *)&v111, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v109, 0LL);
          if ( !*p_bannerLoopCtr )
            break;
          v114 = (UnityEngine_Transform_o *)summonBannerScrollView;
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                *p_bannerLoopCtr,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          *(UnityEngine_Vector3_o *)&v115 = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)summonBannerScrollView,
                                              0LL);
          if ( !v114 )
            break;
          UnityEngine_Transform__set_localPosition(v114, *(UnityEngine_Vector3_o *)&v115, 0LL);
          v118 = v106 + 1;
          v184 = v106 + 1;
          v119 = System_Int32__ToString((int32_t)&v184, 0LL);
          v120 = System_String__Concat_44758168((System_String_o *)StringLiteral_978/*"0"*/, v119, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v109, v120, 0LL);
          if ( v184 >= 10 )
          {
            v121 = System_Int32__ToString((int32_t)&v184, 0LL);
            v122 = System_String__Concat_44758168((System_String_o *)StringLiteral_1031/*"1"*/, v121, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v109, v122, 0LL);
          }
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v109,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
          if ( !*p_bannerInfoList )
            break;
          v123 = (GachaBannerComponent_o *)summonBannerScrollView;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_bannerInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summonBannerScrollView,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
          v124 = this->fields.vaildGachaList;
          v125 = v178 + v106;
          v126 = v178 + v106 <= size - 1 ? 0 : v105;
          if ( !v124 )
            break;
          v127 = v125 - v126;
          if ( v124->fields._size <= (unsigned int)(v125 - v126) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          moveIdx = v106;
          v128 = v124->fields._items->m_Items[v127];
          if ( !v128 )
            break;
          v129 = System_Int32__ToString((int)v128 + 40, 0LL);
          v130 = System_String__Concat_44758168((System_String_o *)StringLiteral_19946/*"img_summon_"*/, v129, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)SummonControl__searchBannerImg(this, v130, v131);
          v132 = this->fields.vaildGachaList;
          if ( !v132 )
            break;
          v133 = (UnityEngine_Object_o *)summonBannerScrollView;
          if ( v132->fields._size <= (unsigned int)v127 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v134 = v132->fields._items->m_Items[v127];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v133, 0LL, 0LL);
          if ( !v123 )
            break;
          v135 = ((unsigned __int8)summonBannerScrollView & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v130;
          GachaBannerComponent__setBannerGachaInfo(
            v123,
            v134,
            v127,
            moveIdx,
            (UnityEngine_GameObject_o *)v133,
            v135,
            0LL);
          summonBannerScrollView = *v181;
          if ( !*v181 )
            break;
          summonMBannerPrefab = this->fields.summonMBannerPrefab;
          v137 = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                summonMBannerPrefab,
                                                                v137,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v138 = (UnityEngine_GameObject_o *)summonBannerScrollView;
          v139 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v140 = UnityEngine_Vector3__get_one(0LL);
          if ( !v139 )
            break;
          UnityEngine_Transform__set_localScale(v139, *(UnityEngine_Vector3_o *)&v140, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v138, 0LL);
          if ( !*v181 )
            break;
          v143 = (UnityEngine_Transform_o *)summonBannerScrollView;
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v181, 0LL);
          if ( !summonBannerScrollView )
            break;
          *(UnityEngine_Vector3_o *)&v144 = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)summonBannerScrollView,
                                              0LL);
          if ( !v143 )
            break;
          UnityEngine_Transform__set_localPosition(v143, *(UnityEngine_Vector3_o *)&v144, 0LL);
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v109, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v138, name, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v138,
                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
          if ( !*p_summonMBannerInfoList )
            break;
          v148 = (SummonMiniBannerComponent_o *)summonBannerScrollView;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_summonMBannerInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summonBannerScrollView,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
          v149 = this->fields.vaildGachaList;
          if ( !v149 )
            break;
          if ( v149->fields._size <= (unsigned int)v127 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v150 = v149->fields._items->m_Items[v127];
          if ( !v150 )
            break;
          v151 = System_Int32__ToString((int)v150 + 40, 0LL);
          v152 = System_String__Concat_44758168((System_String_o *)StringLiteral_19947/*"img_summon_mini_"*/, v151, 0LL);
          v154 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v152, v153);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v154, 0LL, 0LL) )
          {
            v152 = (System_String_o *)StringLiteral_19948/*"img_summon_mini_236"*/;
            v154 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                             this,
                                             (System_String_o *)StringLiteral_19948/*"img_summon_mini_236"*/,
                                             v155);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v154, 0LL, 0LL) )
              v152 = (System_String_o *)StringLiteral_1/*""*/;
          }
          summonBannerScrollView = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
          if ( !summonBannerScrollView )
            break;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      summonBannerScrollView,
                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          v157 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_B70764(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
          SummonMiniBannerComponent_CallbackFunc___ctor(
            v157,
            (Il2CppObject *)this,
            Method_SummonControl_OnClickMiniBanner__,
            0LL);
          if ( !v148 )
            break;
          SummonMiniBannerComponent__SetBannerInfo(
            v148,
            v134,
            v127,
            moveIdx,
            (UnityEngine_GameObject_o *)v154,
            v152,
            v157,
            (UIPanel_o *)Component_WebViewObject,
            0LL);
          v106 = v118;
          v105 = size;
          v158 = v118 < 2 * size;
          p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
          if ( !v158 )
            goto LABEL_97;
        }
LABEL_105:
        sub_B7076C(summonBannerScrollView, v17);
      }
LABEL_97:
      sliderGrid = this->fields.sliderGrid;
      if ( !sliderGrid )
        goto LABEL_105;
      sliderGrid->fields.cellHeight = fminf(640.0 / (float)v105, 25.0);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v160 = *(float *)&summonBannerScrollView[1].fields.m_CachedPtr;
      if ( v105 >= 1 )
      {
        v161 = 0;
        do
        {
          slideIndexPrefab = this->fields.slideIndexPrefab;
          v163 = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                slideIndexPrefab,
                                                                v163,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v164 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v165 = UnityEngine_Vector3__get_one(0LL);
          if ( !v164 )
            break;
          UnityEngine_Transform__set_localScale(v164, *(UnityEngine_Vector3_o *)&v165, 0LL);
          if ( ++v161 >= v105 )
            goto LABEL_106;
          summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
        }
        while ( summonBannerScrollView );
        goto LABEL_105;
      }
LABEL_106:
      summonBannerScrollView = *p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        goto LABEL_105;
      UIWrapContent__SortAlphabetically((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        goto LABEL_105;
      UIWrapContent__resetScroll((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *p_bannerLoopCtr;
      if ( !*p_bannerLoopCtr )
        goto LABEL_105;
      UIWrapContent__WrapContent((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v181;
      if ( !*v181 )
        goto LABEL_105;
      UIWrapContent__SortAlphabetically((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v181;
      if ( !*v181 )
        goto LABEL_105;
      UIWrapContent__resetScroll((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v181;
      if ( !*v181 )
        goto LABEL_105;
      UIWrapContent__WrapContent((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                            summonBannerScrollView,
                                                            0LL);
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v185.fields.z = this->fields.center.fields.z;
      v185.fields.y = this->fields.center.fields.y;
      v185.fields.x = -(float)((float)(v160 * 0.5) * (float)(v105 - 1));
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerScrollView, v185, 0LL);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      UIGrid__set_repositionNow((UIGrid_o *)summonBannerScrollView, 1, 0LL);
      SummonControl__UpdateSummonInfoControlLayout(this, v168);
      v169 = this->fields.vaildGachaList;
      if ( !v169 )
        goto LABEL_105;
      currentIdx = this->fields.currentIdx;
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( v169->fields._size <= (unsigned int)currentIdx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v172 = v169->fields._items->m_Items[currentIdx];
      v173 = (SummonInfoControl_ClickDelegate_o *)sub_B70764(SummonInfoControl_ClickDelegate_TypeInfo);
      SummonInfoControl_ClickDelegate___ctor(v173, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
      if ( !summonInfoCtr )
        goto LABEL_105;
      SummonInfoControl__SetSummonInfo(summonInfoCtr, v172, v173, 0LL);
      SummonControl__setSliderIcon(this, this->fields.currentIdx, v174);
      SummonControl__setResourceInfo(this, v175);
    }
  }
  else
  {
    summonBannerScrollView = (UnityEngine_Component_o *)this->fields.noneGachaInfo;
    if ( !summonBannerScrollView )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonBannerScrollView, 1, 0LL);
  }
}


void __fastcall SummonControl__deleteBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w0
  int32_t v8; // w20
  UnityEngine_Object_o *v9; // x21
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4353672 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353672 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
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
                                                   v5,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_13;
    }
LABEL_34:
    sub_B7076C(bannerLoopCtr, method);
  }
LABEL_13:
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  v8 = v7 - 1;
  if ( v7 >= 1 )
  {
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !bannerLoopCtr )
        goto LABEL_34;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v8,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(v9, 0LL);
    }
    while ( --v8 >= 0 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v10 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v10 >= 0 )
  {
    do
    {
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !bannerLoopCtr )
        goto LABEL_34;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                   (UnityEngine_Transform_o *)bannerLoopCtr,
                                                   v10,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36067420(v11, 0LL);
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

  if ( (byte_4353637 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_10689/*"PURCHASE_ERROR"*/);
    sub_B70694(&StringLiteral_10688/*"PURCHASE_CANCEL"*/);
    sub_B70694(&StringLiteral_10690/*"PURCHASE_OK"*/);
    byte_4353637 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B7076C(Instance, v6);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10688/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10689/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v7 = &StringLiteral_10690/*"PURCHASE_OK"*/;
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

  if ( (byte_4353630 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_10689/*"PURCHASE_ERROR"*/);
    sub_B70694(&StringLiteral_10688/*"PURCHASE_CANCEL"*/);
    sub_B70694(&StringLiteral_10690/*"PURCHASE_OK"*/);
    byte_4353630 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10688/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10689/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_B7076C(Instance, v6);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10690/*"PURCHASE_OK"*/;
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

  if ( (byte_435362E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_10689/*"PURCHASE_ERROR"*/);
    sub_B70694(&StringLiteral_10688/*"PURCHASE_CANCEL"*/);
    sub_B70694(&StringLiteral_10690/*"PURCHASE_OK"*/);
    byte_435362E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10688/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10689/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_B7076C(Instance, v6);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v7 = &StringLiteral_10690/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v7, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  float y; // s8
  float v5; // s13
  CommonUI_o *v6; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s11
  SummonControl___c_c *v12; // x0
  float m_Height; // s12
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__149_0; // x21
  Il2CppObject *v16; // x22
  struct SummonControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o *v24; // x20
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o TUTORIAL_FORMATION_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4353607 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__exeFormation_b__149_1__);
    sub_B70694(&Method_SummonControl___c__exeFormation_b__149_0__);
    sub_B70694(&SummonControl___c_TypeInfo);
    byte_4353607 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v5 = *((float *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v6 = (CommonUI_o *)Instance;
  TUTORIAL_FORMATION_ARROW_RECT_FS = SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(this, v7);
  m_XMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Width;
  v12 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v12 = SummonControl___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__149_0 = static_fields->__9__149_0;
  if ( !_9__149_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__149_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__149_0, v16, Method_SummonControl___c__exeFormation_b__149_0__, 0LL);
    v17 = SummonControl___c_TypeInfo->static_fields;
    v17->__9__149_0 = _9__149_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__149_0,
      (System_Int32_array **)_9__149_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v6 )
    sub_B7076C(v12, v8);
  v27.fields.m_XMin = m_XMin;
  v25.fields.y = v5 + 33.0;
  v25.fields.x = y;
  v27.fields.m_YMin = m_YMin;
  v27.fields.m_Width = m_Width;
  v27.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v6, v25, 0.0, v27, _9__149_0, 0LL);
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v24, 0LL);
}


void __fastcall SummonControl__exeSummon(
        SummonControl_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v12; // x1
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_4353628 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3047/*"CHECK_SERVANT_FRAME"*/);
    byte_4353628 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.gachaParamData,
    (System_Int32_array **)paramData,
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
      || (closeBtn = (UnityEngine_GameObject_o *)confirmDlgInfo->fields.closeBtn) == 0LL
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))closeBtn->klass[1]._1.namespaze)(
            closeBtn,
            0LL,
            closeBtn->klass[1]._1.byval_arg.data),
          (closeBtn = this->fields.tutorialArrowObj) == 0LL) )
    {
LABEL_10:
      sub_B7076C(closeBtn, v12);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3047/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v5; // x21
  CombineResultEffectComponent_ClickDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_435366D & 1) == 0 )
  {
    sub_B70694(&CombineResultEffectComponent_ClickDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__executeEnhanceTresureDevice_b__270_0__);
    byte_435366D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v5 = (CommonUI_o *)Instance;
  v6 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B70764(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__270_0__,
    0LL);
  if ( !v5 )
    sub_B7076C(v7, v8);
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
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w25
  int32_t friendPoint; // w20
  SummonConfirmDlgComponent_o *v12; // x22
  int32_t needPoint; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v14; // x23
  System_Action_o *v15; // x24
  const MethodInfo *v16; // x6

  v2 = this;
  if ( (byte_4353648 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SummonControl_autoSellSettingChange2__);
    this = (SummonControl_o *)sub_B70694(&Method_SummonControl_friendSummonConfirmResult__);
    byte_4353648 = 1;
  }
  summonInfoCtr = v2->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  isFree = summonInfoCtr->fields.isFree;
  v2->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v2->fields.confirmDlgInfo;
    v6 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)v2,
      Method_SummonControl_friendSummonConfirmResult__,
      0LL);
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v6, v7, v8);
      return;
    }
LABEL_10:
    sub_B7076C(this, method);
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_10;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  friendPoint = v2->fields.friendPoint;
  v12 = v2->fields.confirmDlgInfo;
  needPoint = v2->fields.needPoint;
  v14 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_SummonControl_friendSummonConfirmResult__,
    0LL);
  v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v12 )
    goto LABEL_10;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v12,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4353649 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4353649 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close_28174604(confirmDlgInfo, 0LL, method);
  if ( !res )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
    if ( confirmDlgInfo )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(confirmDlgInfo, res);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__friendPointQpManaCheck(this, v6);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  struct GachaMaster_o *gachaMst; // x0

  if ( (byte_4353612 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4353612 = 1;
  }
  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_B7076C(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gachaMst,
                            gachaId,
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x21
  __int64 v4; // x20
  int size; // w8
  VaildGachaInfo_o *v6; // x8

  v2 = this;
  if ( (byte_4353670 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    this = (SummonControl_o *)sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    byte_4353670 = 1;
  }
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_11:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    if ( (int)v4 >= size )
      break;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v6 = vaildGachaList->fields._items->m_Items[v4];
    if ( v6 )
    {
      if ( v6->fields.type == 3 )
        return v4;
      vaildGachaList = v2->fields.vaildGachaList;
      ++v4;
      if ( vaildGachaList )
        continue;
    }
    goto LABEL_11;
  }
  LODWORD(v4) = 0;
  return v4;
}


UserGachaEntity_o *__fastcall SummonControl__getUserGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353611 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353611 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Instance, v5);
  UserGachaMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, gachaId, 0LL);
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
  ShopEntity_o *result; // x0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  BattleServantConfConponent_o *p_stoneFragmentsShopEntity; // x19
  System_Int32_array **EntityOfFragmentsShop; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4353602 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4353602 = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B7076C(0LL, v5);
    p_stoneFragmentsShopEntity = (BattleServantConfConponent_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = (System_Int32_array **)ShopMaster__GetEntityOfFragmentsShop(
                                                     Master_WarQuestSelectionMaster,
                                                     0LL);
    p_stoneFragmentsShopEntity->klass = (BattleServantConfConponent_c *)EntityOfFragmentsShop;
    sub_B70630(p_stoneFragmentsShopEntity, EntityOfFragmentsShop, v8, v9, v10, v11, v12, v13);
    return (ShopEntity_o *)p_stoneFragmentsShopEntity->klass;
  }
  return result;
}


UnityEngine_Vector2_o __fastcall SummonControl__get_TUTORIAL_FORMATION_ARROW_POS_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  float y; // s0
  float v3; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v3 = *((float *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2) + 33.0;
  result.fields.y = v3;
  result.fields.x = y;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  int v5; // s0
  float y; // s0
  float v7; // s4
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  __int128 v12; // [xsp+0h] [xbp-10h] BYREF
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = *(_OWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
  v5 = v12;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&v12);
  v13.fields.m_YMin = 33.0;
  v13.fields.m_XMin = y + 33.0;
  UnityEngine_Rect__set_y(v13, v7, (const MethodInfo *)&v12);
  v9 = *((float *)&v12 + 1);
  v8 = *(float *)&v12;
  v11 = *((float *)&v12 + 3);
  v10 = *((float *)&v12 + 2);
  result.fields.m_Height = v11;
  result.fields.m_Width = v10;
  result.fields.m_YMin = v9;
  result.fields.m_XMin = v8;
  return result;
}


UnityEngine_Vector2_o __fastcall SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  float m_XMin; // s8
  float y; // s9
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4353601 & 1) == 0 )
  {
    sub_B70694(&FSUtility_TypeInfo);
    byte_4353601 = 1;
  }
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v5 = y + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v6 = m_XMin + 33.0;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(
        SummonControl_o *this,
        const MethodInfo *method)
{
  int v2; // s1
  int v5; // s0
  float x; // s0
  SummonControl_o *v7; // x0
  const MethodInfo *v8; // x1
  float v9; // s4
  float v10; // s4
  float v11; // s4
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s3
  __int128 v16; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v16 = *(_OWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  v5 = v16;
  x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)(&v2 - 1), (const MethodInfo *)&v16);
  v17.fields.m_XMin = x + SummonControl__FSMenuOffsetX(v7, v8);
  UnityEngine_Rect__set_x(v17, v9, (const MethodInfo *)&v16);
  v19.fields.m_XMin = UnityEngine_Rect__get_y(v18, (const MethodInfo *)&v16) + 33.0;
  UnityEngine_Rect__set_y(v19, v10, (const MethodInfo *)&v16);
  v21.fields.m_XMin = UnityEngine_Rect__get_height(v20, (const MethodInfo *)&v16) + 33.0;
  UnityEngine_Rect__set_height(v21, v11, (const MethodInfo *)&v16);
  v13 = *((float *)&v16 + 1);
  v12 = *(float *)&v16;
  v15 = *((float *)&v16 + 3);
  v14 = *((float *)&v16 + 2);
  result.fields.m_Height = v15;
  result.fields.m_Width = v14;
  result.fields.m_YMin = v13;
  result.fields.m_XMin = v12;
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
  __int64 v8; // x24
  struct GachaInfos_array *v9; // x8
  GachaInfos_o *v10; // x8
  int32_t objectId; // w22
  bool result; // w0
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4353669 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
    this = (SummonControl_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353669 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B7076C(this, svtId);
  }
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length < 1 )
  {
LABEL_13:
    objectId = 0;
    result = 0;
  }
  else
  {
    v7 = (ServantFlagReleaseMaster_o *)this;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = v4->fields.gachaResInfoList;
      if ( !v9 )
        goto LABEL_16;
      if ( (unsigned int)v8 >= v9->max_length )
      {
        v13 = sub_B70798(this);
        sub_B70738(v13, 0LL);
      }
      v10 = v9->m_Items[v8];
      if ( !v10 || !v7 )
        goto LABEL_16;
      objectId = v10->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v7, objectId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
    result = 1;
  }
  *svtId = objectId;
  return result;
}


bool __fastcall SummonControl__isMultipleCheck(
        SummonControl_o *this,
        int32_t svtId,
        int32_t max,
        const MethodInfo *method)
{
  struct GachaInfos_array *gachaResInfoList; // x10
  unsigned int max_length; // w9
  __int64 v6; // x8
  GachaInfos_o **m_Items; // x10
  GachaInfos_o *v8; // x11
  __int64 v10; // x0

  if ( max < 1 )
    return 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
LABEL_12:
    sub_B7076C(this, svtId);
  max_length = gachaResInfoList->max_length;
  v6 = 0LL;
  m_Items = gachaResInfoList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    v8 = m_Items[v6];
    if ( !v8 )
      goto LABEL_12;
    if ( v8->fields.objectId == svtId )
      return 1;
    if ( (int)++v6 >= max )
      return 0;
  }
}


bool __fastcall SummonControl__isSvtEqSummonResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x20
  __int64 v6; // x22
  struct GachaInfos_array *v7; // x8
  GachaInfos_o *v8; // x24
  __int64 v10; // x0

  v2 = this;
  if ( (byte_435365D & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (SummonControl_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435365D = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B7076C(this, method);
  }
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length < 1 )
    return 0;
  v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = v2->fields.gachaResInfoList;
    if ( !v7 )
      goto LABEL_17;
    if ( (unsigned int)v6 >= v7->max_length )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    v8 = v7->m_Items[v6];
    if ( !v8 || !v5 )
      goto LABEL_17;
    this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v5,
                                v8->fields.objectId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this )
    {
      this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && v8->fields.isNew )
        return 1;
    }
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4353679 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4353679 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_B7076C(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_4353678 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SummonControl_limitManaConfirmResult__);
    sub_B70694(&Method_SummonControl_showConfirmDlg__);
    sub_B70694(&StringLiteral_3116/*"CLICK_CANCEL"*/);
    byte_4353678 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_22;
  SummonLimitWarningDlgComponent__Close((SummonLimitWarningDlgComponent_o *)limitWarningDlgInfo, 0LL);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, *(const MethodInfo **)&res) )
      {
        limitWarningDlgInfo = UserGameMaster__getSelfUserGame(0LL);
        if ( !limitWarningDlgInfo )
          goto LABEL_22;
        v6 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 60), 0LL) )
          goto LABEL_19;
        v7 = v6[44];
        v8 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = BalanceConfig_TypeInfo;
        }
        if ( v7 >= v8->static_fields->UserItemMax )
        {
          v10 = this->fields.limitWarningDlgInfo;
          v11 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B70764(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v10 )
            goto LABEL_22;
          SummonLimitWarningDlgComponent__OpenManaWarning(v10, v11, v12, 0LL);
        }
        else
        {
LABEL_19:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v9);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_22:
      sub_B7076C(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3116/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  SummonRootComponent_o *basePanel; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x9
  SummonControl_o *v8; // x0
  bool v9; // w1
  const MethodInfo *v10; // x2

  if ( (byte_4353650 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SummonControl__loadAssetsForSummon_b__233_0__);
    sub_B70694(&SummonRootComponent_TypeInfo);
    byte_4353650 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = (SummonRootComponent_o *)Instance->fields.basePanel,
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__233_0__, 0LL),
        !basePanel) )
  {
    sub_B7076C(Instance, v4);
  }
  v7 = *(&SummonRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (SummonRootComponent_c *)basePanel->klass->_2.typeHierarchy[v7 - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(basePanel, v6, 0LL);
  }
  else
  {
    v8 = (SummonControl_o *)sub_B70A60(basePanel);
    SummonControl__friendSummonConfirmResult(v8, v9, v10);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v6; // w8
  int32_t v7; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_435361F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12970/*"SetBannerCenter"*/);
    byte_435361F = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_36061308(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12970/*"SetBannerCenter"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
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
    v6 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v7 = currentMoveIdx + 1 < v6 ? currentMoveIdx + 1 : 0;
    if ( !leftArrowBtn )
      goto LABEL_25;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
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
                                                      v7,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_36424748(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v7,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_25:
      sub_B7076C(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_36424748(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w8
  int v5; // w8
  int32_t v6; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4353620 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_12970/*"SetBannerCenter"*/);
    byte_4353620 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_36061308(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12970/*"SetBannerCenter"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
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
    v5 = childCount - 1;
    v6 = this->fields.currentMoveIdx - 1 < 0 ? v5 : this->fields.currentMoveIdx - 1;
    if ( !leftArrowBtn )
      goto LABEL_25;
    SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.titleInfo;
    if ( !leftArrowBtn )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)leftArrowBtn, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
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
                                                      v6,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_36424748(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v6,
                                                      0LL),
          !summonMBannerCenterChild) )
    {
LABEL_25:
      sub_B7076C(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_36424748(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v4; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  SummonControl___c_c *v12; // x0
  float m_Height; // s13
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__148_0; // x22
  Il2CppObject *v16; // x23
  struct SummonControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o *v24; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v26; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4353606 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__openAfterSummonInfo_b__148_1__);
    sub_B70694(&Method_SummonControl___c__openAfterSummonInfo_b__148_0__);
    sub_B70694(&SummonControl___c_TypeInfo);
    sub_B70694(&StringLiteral_13703/*"TUTORIAL_MESSAGE_SUMMON2"*/);
    byte_4353606 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13703/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v5);
  TUTORIAL_MENU_ARROW_RECT_FS = SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(this, v7);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v12 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v12 = SummonControl___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__148_0 = static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v16, Method_SummonControl___c__openAfterSummonInfo_b__148_0__, 0LL);
    v17 = SummonControl___c_TypeInfo->static_fields;
    v17->__9__148_0 = _9__148_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v17->__9__148_0,
      (System_Int32_array **)_9__148_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !Instance )
    sub_B7076C(v12, v8);
  v26.fields.m_XMin = m_XMin;
  v26.fields.m_YMin = m_YMin;
  v26.fields.m_Width = m_Width;
  v26.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v4,
    TUTORIAL_MENU_ARROW_POS_FS,
    v26,
    0.0,
    0LL,
    -1,
    _9__148_0,
    0LL);
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v24, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4353605 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3110/*"CLEAR_TUTORIAL"*/);
    byte_4353605 = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3110/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_B7076C(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *GachaFlg; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v13; // x0
  System_Int32_array **EventTutorialEntity; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v22; // x22
  __int64 v23; // x21
  int size; // w8
  TitleInfoControl_EventEndTimeInfo_o *v25; // x8
  __int64 v26; // x21
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v35; // x21
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__150_1; // x22
  Il2CppObject *v38; // x23
  struct SummonControl___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventTutorialEntity__o *v46; // x22
  int32_t v47; // w21
  EventTutorialEntity_o *v48; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v49; // x22
  TitleInfoControl_EventEndTimeInfo_o *v50; // x8
  int32_t end_time; // w22
  System_Action_o *v52; // x20
  __int64 v53; // x0

  if ( (byte_4353608 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Comparison_EventTutorialEntity___ctor__);
    sub_B70694(&System_Comparison_EventTutorialEntity__TypeInfo);
    sub_B70694(&EventTutorialEntity_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&Method_SummonControl___c__openSvtEqInfo_b__150_1__);
    sub_B70694(&Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__);
    sub_B70694(&SummonControl___c__DisplayClass150_0_TypeInfo);
    sub_B70694(&SummonControl___c_TypeInfo);
    byte_4353608 = 1;
  }
  v3 = sub_B70764(SummonControl___c__DisplayClass150_0_TypeInfo);
  SummonControl___c__DisplayClass150_0___ctor((SummonControl___c__DisplayClass150_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_47;
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_47;
  v13 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Int32_array **)EventTutorialMaster__GetEventTutorialEntity(0, 34, v13, 0LL);
  *(_QWORD *)(v3 + 16) = EventTutorialEntity;
  v15 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v3 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), EventTutorialEntity, v16, v17, v18, v19, v20, v21);
  v22 = *(System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v3 + 16);
  if ( !v22 )
    goto LABEL_47;
  v23 = 0LL;
  while ( 1 )
  {
    size = v22->fields._size;
    if ( (int)v23 >= size )
      break;
    if ( size <= (unsigned int)v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v25 = v22->fields._items->m_Items[v23];
    if ( v25 )
    {
      if ( LODWORD(v25->fields.end_time) == 1 )
        goto LABEL_28;
      v22 = *v15;
      ++v23;
      if ( *v15 )
        continue;
    }
    goto LABEL_47;
  }
  v26 = sub_B70764(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_47;
  *(_DWORD *)(v26 + 24) = 1;
  v27 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 1LL);
  *(_QWORD *)(v26 + 80) = v27;
  sub_B70630((BattleServantConfConponent_o *)(v26 + 80), v27, v28, v29, v30, v31, v32, v33);
  v34 = *(_QWORD *)(v26 + 80);
  if ( !v34 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v34 + 24) )
  {
    v53 = sub_B70798(GachaFlg);
    sub_B70738(v53, 0LL);
  }
  *(_DWORD *)(v34 + 32) = 1;
  GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*v15;
  if ( !*v15 )
    goto LABEL_47;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    GachaFlg,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v35 = *v15;
  GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SummonControl___c_TypeInfo;
  }
  static_fields = *(struct SummonControl___c_StaticFields **)&GachaFlg[4].fields._size;
  _9__150_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__150_1;
  if ( !_9__150_1 )
  {
    if ( (GachaFlg[7].fields._size & 0x4000000) != 0 && !GachaFlg[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(GachaFlg);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__150_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__150_1,
      v38,
      Method_SummonControl___c__openSvtEqInfo_b__150_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventTutorialEntity___ctor__);
    v39 = SummonControl___c_TypeInfo->static_fields;
    v39->__9__150_1 = (struct System_Comparison_EventTutorialEntity__o *)_9__150_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v39->__9__150_1,
      (System_Int32_array **)_9__150_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v35 )
    goto LABEL_47;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v35,
    (System_Comparison_T__o *)_9__150_1,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v46 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v15;
  if ( !*v15 )
LABEL_47:
    sub_B7076C(GachaFlg, v5);
  v47 = v46->fields._size - 1;
  if ( v47 >= 0 )
  {
    while ( v46 )
    {
      if ( v46->fields._size <= (unsigned int)v47 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v48 = v46->fields._items->m_Items[v47];
      if ( !v48 )
        break;
      if ( v48->fields.num != 1 )
      {
        v49 = *v15;
        if ( !*v15 )
          goto LABEL_47;
        if ( v49->fields._size <= (unsigned int)v47 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v50 = v49->fields._items->m_Items[v47];
        if ( !v50 )
          goto LABEL_47;
        end_time = v50->fields.end_time;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)TutorialFlag__GetGachaFlg(end_time, 0LL);
        if ( ((unsigned __int8)GachaFlg & 1) != 0 )
        {
          GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*v15;
          if ( !*v15 )
            goto LABEL_47;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)GachaFlg,
            v47,
            (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v46 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v15;
      if ( --v47 < 0 )
        goto LABEL_46;
    }
    goto LABEL_47;
  }
LABEL_46:
  v52 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)v3, Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(v46, v52, 0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4353654 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B70694(&Method_SummonControl_callbackTutorialSet__);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    byte_4353654 = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v3,
                                                                  (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 101, 0LL);
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_WarBoardWallAttackRequest )
      {
        AdManager__TrackEvent((AdManager_o *)Request_WarBoardWallAttackRequest, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B7076C(Request_WarBoardWallAttackRequest, method);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11233/*"REQUEST_OK"*/,
    0LL);
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
        sub_B7076C(summonInfoCtr, v4);
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x0
  int32_t VaildPayType; // w0
  const MethodInfo *v14; // x1
  int32_t v15; // w20
  TerminalPramsManager_c *v16; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_435360C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435360C = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_22;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  this->fields.gachaSubEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.gachaSubEntity, 0LL, v4, v5, v6, v7, v8, v9);
  SummonControl__clearBannerList(this, v10);
  SummonControl__clearResultList(this, v11);
  summonBannerInfo = (UnityEngine_GameObject_o *)this->fields.summonResultInfo;
  if ( !summonBannerInfo )
    goto LABEL_22;
  summonBannerInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(summonBannerInfo, 0, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)vaildGachaList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_22:
    sub_B7076C(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v15 = VaildPayType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DED9 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DED9 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->_SummonType_k__BackingField = v15;
  SummonControl__releaseBannerData(this, v14);
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( bonusSelectAssetManager )
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0LL);
}


void __fastcall SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int size; // w8
  __int64 currentIdx; // x21
  VaildGachaInfo_o *v6; // x8
  int32_t emptyMessage; // w21
  int v8; // w22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  SummonControl_o *v14; // x0
  int32_t FriendPointIndex; // w0
  const MethodInfo *v16; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v17; // x20
  __int64 v18; // x21
  VaildGachaInfo_o *v19; // x8
  WarEntity_o *Entity; // x0

  v2 = this;
  if ( (byte_435366F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    this = (SummonControl_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435366F = 1;
  }
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_11;
  size = vaildGachaList->fields._size;
  currentIdx = v2->fields.currentIdx;
  if ( size <= (int)currentIdx )
  {
    LODWORD(vaildGachaList) = 0;
    goto LABEL_11;
  }
  if ( size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !v6 )
LABEL_29:
    sub_B7076C(this, method);
  if ( v6->fields.type != 3 )
  {
    v17 = v2->fields.vaildGachaList;
    if ( v17 )
    {
      v18 = v2->fields.currentIdx;
      if ( v17->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v19 = v17->fields._items->m_Items[v18];
      if ( v19 )
      {
        LODWORD(vaildGachaList) = v19->fields.id;
        this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( this )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                       (int32_t)vaildGachaList,
                       (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Entity )
            {
              emptyMessage = (int32_t)Entity->fields.emptyMessage;
              goto LABEL_12;
            }
LABEL_11:
            emptyMessage = 0;
LABEL_12:
            v8 = 0;
            goto LABEL_13;
          }
        }
      }
    }
    goto LABEL_29;
  }
  LODWORD(vaildGachaList) = 0;
  emptyMessage = 0;
  v8 = 1;
LABEL_13:
  if ( !SummonControl__resetSummonVaildData(v2, method) || SummonControl__checkMaxDrawNum(v2, v9) )
  {
    SummonControl__deleteBannerList(v2, v9);
    SummonControl__checkValidGachaList(v2, v10);
    SummonControl__createSummonInfo(v2, v11);
    v14 = v2;
    if ( !v8 )
    {
      FriendPointIndex = SummonControl__searchExtraGroupIdIndex(v2, emptyMessage, (int32_t)vaildGachaList, v13);
      if ( FriendPointIndex != -1 )
      {
LABEL_19:
        SummonControl__setDispRePosition(v2, FriendPointIndex, v16);
        return;
      }
      v14 = v2;
    }
    FriendPointIndex = SummonControl__getFriendPointIndex(v14, v12);
    if ( FriendPointIndex )
      goto LABEL_19;
  }
}


void __fastcall SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  System_String_o *assetPath; // x20
  BattleServantConfConponent_o *p_bannerAssetData; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_435360B & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_435360B = 1;
  }
  if ( this->fields.bannerAssetData )
  {
    assetPath = this->fields.assetPath;
    p_bannerAssetData = (BattleServantConfConponent_o *)&this->fields.bannerAssetData;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(assetPath, 0LL);
    p_bannerAssetData->klass = 0LL;
    sub_B70630(p_bannerAssetData, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t ticketItemId; // w24
  int32_t gachaTime; // w21
  int32_t warId; // w23
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  Il2CppObject *p_obj; // x28
  GachaDrawRequest_o *v13; // x19
  System_String_o *selectBonusListData; // x27
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  int32_t v17; // w21
  System_String_o *v18; // x0
  __int64 v19; // x0
  int32_t v20; // [xsp+14h] [xbp-5Ch]
  int32_t v21; // [xsp+18h] [xbp-58h]
  int32_t shopIdIdx; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4353651 & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_GachaDrawRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&Method_SummonControl_callbackGachaDraw__);
    sub_B70694(&StringLiteral_133/*" : "*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353651 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                             v4,
                                             (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_GachaDrawRequest___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_28;
  ticketItemId = gachaParamData->fields.ticketItemId;
  warId = gachaParamData->fields.warId;
  gachaTime = gachaParamData->fields.gachaTime;
  gachaId = gachaParamData->fields.gachaId;
  shopIdIdx = gachaParamData->fields.shopIdIdx;
  gachaSubId = gachaParamData->fields.gachaSubId;
  storyAdjustIds = gachaParamData->fields.storyAdjustIds;
  p_obj = &gachaParamData->fields.selectBonusList->obj;
  v13 = (GachaDrawRequest_o *)maskObject;
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  if ( storyAdjustIds )
  {
    v15 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v15 )
    {
      if ( (int)v15 >= 1 )
      {
        v20 = warId;
        v21 = gachaTime;
        v16 = 0LL;
        v17 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v16 >= (unsigned int)v15 )
          {
            v19 = sub_B70798(maskObject);
            sub_B70738(v19, 0LL);
          }
          v18 = System_Int32__ToString(v17, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_44760452(
                                                     selectBonusListData,
                                                     v18,
                                                     (System_String_o *)StringLiteral_133/*" : "*/,
                                                     0LL);
          LODWORD(v15) = storyAdjustIds->max_length;
          ++v16;
          selectBonusListData = (System_String_o *)maskObject;
          v17 += 4;
        }
        while ( (__int64)v16 < (int)v15 );
        selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
        warId = v20;
        gachaTime = v21;
      }
    }
  }
  if ( p_obj && p_obj[1].monitor )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    selectBonusListData = JsonManager__toJson(p_obj, 0, 0, 0LL);
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v13) )
LABEL_28:
    sub_B7076C(maskObject, method);
  GachaDrawRequest__beginRequest(
    v13,
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
  MissionNotifyManager_o *maskBgObject; // x0
  __int64 v4; // x1
  System_String_o *MainBgmName; // x20
  CommonUI_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_435366E & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435366E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  maskBgObject = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskBgObject )
    goto LABEL_33;
  MissionNotifyManager__EndPause(maskBgObject, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.maskBgObject;
  if ( !maskBgObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskBgObject, 0, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.maskObject;
  if ( !maskBgObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskBgObject, 0, 0LL);
  maskBgObject = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)maskBgObject;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
    goto LABEL_33;
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)maskBgObject, this->fields.fsm, 1, 0LL, 36, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_18532552((TitleInfoControl_o *)maskBgObject, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v7);
  SummonControl__setUserResourceDisp(this, v8);
  maskBgObject = (MissionNotifyManager_o *)this->fields.summonInfoCtr;
  this->fields.getSvtIdx = 0;
  if ( !maskBgObject )
    goto LABEL_33;
  SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)maskBgObject, 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  if ( this->fields.tutorialKind == 2 )
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskBgObject, 0, 0LL);
    SummonControl__progTutorial(this, v9);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskBgObject, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v10);
  }
  maskBgObject = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !maskBgObject )
LABEL_33:
    sub_B7076C(maskBgObject, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)maskBgObject,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B7076C(0LL, v11);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v13.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v12);
}


void __fastcall SummonControl__resetMaxSvtInfo(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SummonControl__resetStoneInfo(this, v10);
}


void __fastcall SummonControl__resetResultList(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21

  if ( (byte_4353668 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__resetResultList_b__265_0__);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_4353668 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_15;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__265_0__, 0LL);
  if ( !v5 )
LABEL_15:
    sub_B7076C(Instance, v4);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v8, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  SummonControl__setUserResourceDisp(this, method);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B7076C(0LL, v3);
  SummonInfoControl__SetSummonDispInfo(summonInfoCtr, 0LL);
}


bool __fastcall SummonControl__resetSummonVaildData(SummonControl_o *this, const MethodInfo *method)
{
  __int64 gachaMst; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct GachaEntity_array *useGachaData; // x8
  __int64 v11; // x19
  __int64 v12; // x9
  BattleServantConfConponent_o *p_useGachaData; // x20
  unsigned int v14; // w10
  unsigned int v15; // w21
  __int64 v17; // x0

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
  p_useGachaData = (BattleServantConfConponent_o *)&this->fields.useGachaData;
  if ( (_DWORD)v12 == *(_DWORD *)(gachaMst + 24) )
  {
    if ( (int)v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12 || (v15 = v14, v14 >= *(_DWORD *)(v11 + 24)) )
        {
          v17 = sub_B70798(gachaMst);
          sub_B70738(v17, 0LL);
        }
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
      sub_B7076C(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (BattleServantConfConponent_c *)v11;
    sub_B70630(p_useGachaData, (System_Int32_array **)v11, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  __int64 v13; // x0

  if ( (byte_4353616 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObjectList_GameObject___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353616 = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_18;
  bannerAssetData = AssetData__GetObjectList_Texture2D_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_1BD68D4 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_18;
  v6 = *((_DWORD *)bannerAssetData + 6);
  v7 = bannerAssetData;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
      {
        v13 = sub_B70798(bannerAssetData);
        sub_B70738(v13, 0LL);
      }
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_GameObject_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          *((UnityEngine_GameObject_o **)v9 + 4),
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      bannerAssetData = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)bannerAssetData & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          break;
        bannerAssetData = UIAtlas__GetSprite((UIAtlas_o *)Component_srcLineSprite, searchTarget, 0LL);
        if ( bannerAssetData )
          return v10;
      }
      v6 = v7[6];
      if ( (int)++v8 >= v6 )
        return 0LL;
    }
LABEL_18:
    sub_B7076C(bannerAssetData, searchTarget);
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
  SummonControl_o *v6; // x21
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x23
  int32_t v8; // w22
  __int64 v9; // x24
  int size; // w8
  unsigned int v11; // w28
  __int64 v12; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v13; // x23
  __int64 v14; // x8
  int32_t v15; // w23
  float m_YMin; // w8
  intptr_t m_CachedPtr; // w8

  v6 = this;
  if ( (byte_4353671 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    this = (SummonControl_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353671 = 1;
  }
  vaildGachaList = v6->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_22:
    sub_B7076C(this, *(_QWORD *)&extraGroupId);
  v8 = 0;
  v9 = 4LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    v11 = v9 - 4;
    if ( (int)v9 - 4 >= size )
      return -1;
    if ( size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v12 = *((_QWORD *)&vaildGachaList->fields._items->obj.klass + v9);
    if ( !v12 )
      goto LABEL_22;
    if ( *(_DWORD *)(v12 + 52) == 3 )
      return -1;
    v13 = v6->fields.vaildGachaList;
    if ( !v13 )
      goto LABEL_22;
    if ( v13->fields._size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v14 = *((_QWORD *)&v13->fields._items->obj.klass + v9);
    if ( !v14 )
      goto LABEL_22;
    v15 = *(_DWORD *)(v14 + 16);
    this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_22;
    this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)this,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !this )
      goto LABEL_22;
    this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v15,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    if ( !this )
      return -1;
    m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
    if ( m_YMin != 0.0 && LODWORD(m_YMin) == extraGroupId )
      return v9 - 4;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( m_CachedPtr && m_CachedPtr == gachaId )
      return v8;
    vaildGachaList = v6->fields.vaildGachaList;
    ++v8;
    ++v9;
    if ( !vaildGachaList )
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setCenter(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *indexPanel; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  float *p_m_CachedPtr; // x21
  unsigned __int64 v7; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float32x2_t v14; // d8
  float v15; // s9
  float32x2_t v16; // d10
  float v17; // s11
  float v18; // s0
  __int64 v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
  if ( !indexPanel
    || (indexPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))indexPanel->klass[1]._1.klass)(
                                                  indexPanel,
                                                  indexPanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_B7076C(indexPanel, method);
  }
  klass = (unsigned int)indexPanel[1].klass;
  v5 = (float32x2_t *)indexPanel;
  p_m_CachedPtr = (float *)&indexPanel[1].fields.m_CachedPtr;
  v7 = -1LL;
  do
  {
    if ( v7 + 1 >= klass )
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
    v20.fields.x = v8;
    v20.fields.y = v9;
    v20.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)indexPanel,
                                       v20,
                                       0LL);
    if ( v7 + 1 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v7;
  }
  while ( v7 <= 2 );
  if ( klass < 3 )
  {
LABEL_12:
    v19 = sub_B70798(indexPanel);
    sub_B70738(v19, 0LL);
  }
  v14.n64_u64[0] = v5[4].n64_u64[0];
  v15 = v5[5].n64_f32[0];
  v16.n64_u64[0] = v5[7].n64_u64[0];
  v17 = v5[8].n64_f32[0];
  v18 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v18));
  this->fields.center.fields.z = v15 + (float)((float)(v17 - v15) * v18);
}


void __fastcall SummonControl__setChangeSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct VaildGachaInfo_o *v12; // x1
  const MethodInfo *v13; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v16; // x22
  SummonInfoControl_o *v17; // x20
  System_Action_o *v18; // x21

  if ( (byte_4353621 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SummonInfoControl_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_B70694(&Method_SummonControl__setChangeSummonInfo_b__180_0__);
    sub_B70694(&Method_SummonControl_exeSummon__);
    byte_4353621 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_10;
  currentIdx = this->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v12 = vaildGachaList->fields._items->m_Items[currentIdx];
  this->fields.currentGachaInfo = v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentGachaInfo,
    (System_Int32_array **)v12,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SummonControl__setResourceInfo(this, v13);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v16 = (SummonInfoControl_ClickDelegate_o *)sub_B70764(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v16, 0LL),
        v17 = this->fields.summonInfoCtr,
        v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v18, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__180_0__, 0LL),
        !v17) )
  {
LABEL_10:
    sub_B7076C(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v17, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4353626 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    byte_4353626 = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_B7076C(this, *(_QWORD *)&currentIdx);
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
    sub_B7076C(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B7076C(0LL, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 GachaIdFromSelectedBannerEntity; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x23
  int size; // w21
  unsigned int v8; // w22
  GachaBannerComponent_o *v9; // x8
  struct VaildGachaInfo_o *info; // x9
  SummonControl_o *v11; // x0
  int32_t bannerIdx; // w1

  v2 = this;
  if ( (byte_4353624 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    this = (SummonControl_o *)sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    byte_4353624 = 1;
  }
  GachaIdFromSelectedBannerEntity = SummonControl__GetGachaIdFromSelectedBannerEntity(this, method);
  bannerInfoList = v2->fields.bannerInfoList;
  if ( v2->fields.summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_18;
  }
  else if ( bannerInfoList )
  {
    size = bannerInfoList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( bannerInfoList->fields._size <= v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v9 = bannerInfoList->fields._items->m_Items[v8];
        if ( !v9 )
LABEL_16:
          sub_B7076C(GachaIdFromSelectedBannerEntity, v4);
        info = v9->fields.info;
        if ( !info )
        {
          bannerIdx = 1;
          goto LABEL_22;
        }
        if ( info->fields.type == v2->fields.summonType
          && ((int)GachaIdFromSelectedBannerEntity < 1 || info->fields.id == (_DWORD)GachaIdFromSelectedBannerEntity) )
        {
          break;
        }
        if ( (int)++v8 >= size )
          goto LABEL_18;
        bannerInfoList = v2->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_16;
      }
      bannerIdx = v9->fields.bannerIdx;
LABEL_22:
      v11 = v2;
      goto LABEL_23;
    }
LABEL_18:
    v11 = v2;
    bannerIdx = 0;
LABEL_23:
    SummonControl__setDispRePosition(v11, bannerIdx, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setResourceInfo(SummonControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SummonControl_o *v8; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  System_Int32_array **v11; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v14; // x25
  UIWidget_o *v15; // x23
  UIWidget_o *v16; // x24
  UIWidget_o *v17; // x21
  UIWidget_o *v18; // x22
  WebViewObject_o *Component_WebViewObject; // x20
  int v20; // s3
  float v21; // s4
  float v22; // s5
  float v23; // s6
  SummonControl_c *v24; // x8
  float COLOR_VAL; // s0
  float v26; // s1
  float v27; // s2
  int v28; // s0
  int v32; // s0
  int v36; // s0
  int v40; // s0
  int v44; // s0
  int v48; // s0
  MethodInfo v52; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  v8 = this;
  if ( (byte_4353622 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    this = (SummonControl_o *)sub_B70694(&SummonControl_TypeInfo);
    byte_4353622 = 1;
  }
  v52.methodPointer = 0LL;
  v52.invoker_method = 0LL;
  vaildGachaList = v8->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_37;
  currentIdx = v8->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v11 = (System_Int32_array **)vaildGachaList->fields._items->m_Items[currentIdx];
  v8->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v11;
  sub_B70630((BattleServantConfConponent_o *)&v8->fields.currentGachaInfo, v11, v2, v3, v4, v5, v6, v7);
  currentGachaInfo = v8->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  this = (SummonControl_o *)v8->fields.stoneNumInfo;
  if ( !this )
    goto LABEL_37;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentStoneNumLb )
    goto LABEL_37;
  v14 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentStoneNumLb,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.pointNumInfo )
    goto LABEL_37;
  v15 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.pointNumInfo,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentPointNumLb )
    goto LABEL_37;
  v16 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentPointNumLb,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.fragmentNumInfo )
    goto LABEL_37;
  v17 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.fragmentNumInfo,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentFragmentNumLb )
    goto LABEL_37;
  v18 = (UIWidget_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentFragmentNumLb,
                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v24 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v24 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v24->static_fields->COLOR_VAL;
  v26 = COLOR_VAL;
  v27 = COLOR_VAL;
  UnityEngine_Color___ctor_41064944(*(UnityEngine_Color_o *)(&v20 - 3), v21, v22, v23, &v52);
  *(_QWORD *)&v57.fields.r = v52.methodPointer;
  *(_QWORD *)&v57.fields.b = v52.invoker_method;
  if ( isPointSummon )
  {
    if ( !v14 )
      goto LABEL_37;
    UIWidget__set_color(v14, v57, 0LL);
    if ( !v15 )
      goto LABEL_37;
    *(_QWORD *)&v53.fields.b = v52.invoker_method;
    *(_QWORD *)&v53.fields.r = v52.methodPointer;
    UIWidget__set_color(v15, v53, 0LL);
    if ( !v18 )
      goto LABEL_37;
    *(_QWORD *)&v54.fields.b = v52.invoker_method;
    *(_QWORD *)&v54.fields.r = v52.methodPointer;
    UIWidget__set_color(v18, v54, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_37;
    *(_QWORD *)&v55.fields.b = v52.invoker_method;
    *(_QWORD *)&v55.fields.r = v52.methodPointer;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v55, 0LL);
    this = (SummonControl_o *)v8->fields.fragmentNumCollider;
    if ( !this )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !v16 )
      goto LABEL_37;
    UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v28, 0LL);
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( !v17 )
      goto LABEL_37;
    UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v32, 0LL);
  }
  else
  {
    if ( !v16 )
      goto LABEL_37;
    UIWidget__set_color(v16, v57, 0LL);
    if ( !v17 )
      goto LABEL_37;
    *(_QWORD *)&v56.fields.b = v52.invoker_method;
    *(_QWORD *)&v56.fields.r = v52.methodPointer;
    UIWidget__set_color(v17, v56, 0LL);
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
    if ( !v14 )
      goto LABEL_37;
    UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v36, 0LL);
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
    if ( !v15 )
      goto LABEL_37;
    UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v40, 0LL);
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
    if ( !v18 )
      goto LABEL_37;
    UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v44, 0LL);
    *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_37;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v48, 0LL);
    this = (SummonControl_o *)v8->fields.fragmentNumCollider;
    if ( !this )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 1, 0LL);
  }
  if ( (unsigned int)(v8->fields.tutorialKind - 1) > 2 )
    return;
  this = (SummonControl_o *)v8->fields.fragmentNumCollider;
  if ( !this )
LABEL_37:
    sub_B7076C(this, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4353666 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4353666 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo )
    goto LABEL_9;
  SummonResultComponent__setListByType(summonResultInfo, 1, 0LL);
  SummonControl__showSummonResultInfo(this, v4);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !summonResultInfo )
LABEL_9:
    sub_B7076C(summonResultInfo, method);
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

  if ( (byte_4353623 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
    byte_4353623 = 1;
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
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                sliderGrid,
                                                (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !sliderGrid )
        break;
      v9 = (SelectBannerSliderIcon_o *)sliderGrid;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)sliderGrid, 0, 0LL);
      if ( idx == v8 )
        SelectBannerSliderIcon__setEnableOnImg(v9, 1, 0LL);
      if ( ++v8 >= v7 )
        return;
    }
LABEL_15:
    sub_B7076C(sliderGrid, *(_QWORD *)&idx);
  }
}


void __fastcall SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *Time; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v6; // x2
  System_Int32_array **v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UILabel_o *summonHelpLabel; // x21
  TerminalPramsManager_c *v15; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  __int64 v24; // x21
  __int64 v25; // x21
  struct GachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct GachaEntity_array *ListValidData; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v50; // x20
  AssetLoader_LoadEndDataHandler_o *v51; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4353609 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&Method_SummonControl_LoadBannerEnd__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&StringLiteral_12613/*"SUMMON_HELP_MESSAGE"*/);
    sub_B70694(&StringLiteral_13338/*"SummonBanners/DownloadSummonBanner"*/);
    sub_B70694(&StringLiteral_6419/*"FAIL_LOAD"*/);
    sub_B70694(&StringLiteral_19810/*"img_line_summon"*/);
    sub_B70694(&StringLiteral_19734/*"img_bg_banner"*/);
    byte_4353609 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (UnityEngine_Transform_o *)NetworkManager__getTime(0LL);
  summonBannerInfo = this->fields.summonBannerInfo;
  this->fields.summonSceneInTime = (int64_t)Time;
  if ( !summonBannerInfo )
    goto LABEL_52;
  Time = UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !Time )
    goto LABEL_52;
  localPosition = UnityEngine_Transform__get_localPosition(Time, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.maskBgObject;
  this->fields.initBannerPos = localPosition;
  if ( !Time )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.maskObject;
  if ( !Time )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v6);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 36, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setBackBtnSprite_18532552((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  *(_WORD *)&this->fields.isDoneTutorial = 257;
  v7 = (System_Int32_array **)StringLiteral_13338/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13338/*"SummonBanners/DownloadSummonBanner"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.assetPath, v7, v8, v9, v10, v11, v12, v13);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12613/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_52;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_435368C )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_435368C = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v15->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  SummonControl__setUserResourceDisp(this, v23);
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_B08394(v25);
  Time = **(UnityEngine_Transform_o ***)(v25 + 184);
  if ( !Time )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Time,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = MasterData_WarQuestSelectionMaster;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.gachaMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_52;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.useGachaData,
    (System_Int32_array **)ListValidData,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  SummonControl__checkValidGachaList(this, v40);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_52;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.vaildGachaList, 0LL, v41, v42, v43, v44, v45, v46);
  }
  Time = (UnityEngine_Transform_o *)this->fields.summonBannerScrollView;
  if ( !Time )
    goto LABEL_52;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonHelpInfo;
  if ( !Time )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerObject;
  if ( !Time )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
  summonMBannerLineSprite = this->fields.summonMBannerLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_19810/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_52;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_19734/*"img_bg_banner"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerScrollView;
  if ( !Time )
    goto LABEL_52;
  UIScrollView__ResetPosition((UIScrollView_o *)Time, 0LL);
  assetPath = this->fields.assetPath;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(assetPath, 0LL) )
  {
    Time = (UnityEngine_Transform_o *)this->fields.fsm;
    if ( Time )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6419/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_52:
    sub_B7076C(Time, v4);
  }
  v50 = this->fields.assetPath;
  v51 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v51, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v50, v51, 1, 0LL);
}


void __fastcall SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SummonResultComponent_o *Instance; // x0
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__257_0; // x21
  Il2CppObject *v9; // x22
  struct SummonControl___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4353662 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&Method_SummonControl___c__setSummonResultList_b__257_0__);
    sub_B70694(&SummonControl___c_TypeInfo);
    sub_B70694(&StringLiteral_9468/*"NO_EXIST"*/);
    sub_B70694(&StringLiteral_12409/*"SHOW_TALK"*/);
    byte_4353662 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29045252(107, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29045252(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v3) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v5 = (CommonUI_o *)Instance;
      v6 = SummonControl___c_TypeInfo;
      if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v6 = SummonControl___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__257_0 = static_fields->__9__257_0;
      if ( !_9__257_0 )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          static_fields = SummonControl___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__257_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__257_0, v9, Method_SummonControl___c__setSummonResultList_b__257_0__, 0LL);
        v10 = SummonControl___c_TypeInfo->static_fields;
        v10->__9__257_0 = _9__257_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v10->__9__257_0,
          (System_Int32_array **)_9__257_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      if ( !v5 )
        goto LABEL_31;
      CommonUI__OpenTutorialImageDialog_17929856(v5, 2, 108, _9__257_0, 0LL, 0LL, 0LL);
    }
  }
  Instance = this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_31;
  SummonResultComponent__initGachaResultList(
    Instance,
    this->fields.gachaResInfoList,
    this->fields.resType,
    this->fields.extraGiftIds,
    this->fields.GachaExtraGiftList,
    0LL);
  Instance = (SummonResultComponent_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_31;
  if ( this->fields.resType == 2 )
  {
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12409/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9468/*"NO_EXIST"*/, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Instance = (SummonResultComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_B7076C(Instance, v3);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  SummonControl_o *v4; // x19
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x22
  __int64 v6; // x21
  int size; // w8
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o *summonMBannerInfoList; // x22
  __int64 v9; // x21
  int v10; // w8
  bool v11; // w20

  v3 = isEnable;
  v4 = this;
  if ( (byte_4353604 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__);
    this = (SummonControl_o *)sub_B70694(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__);
    byte_4353604 = 1;
  }
  if ( !v4->fields.isDoneTutorial )
    v3 &= v4->fields.tutorialKind != 2;
  bannerInfoList = v4->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_26;
  v6 = 0LL;
  while ( 1 )
  {
    size = bannerInfoList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (SummonControl_o *)bannerInfoList->fields._items->m_Items[v6];
    if ( this )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)this, v3 & 1, 0LL);
      bannerInfoList = v4->fields.bannerInfoList;
      ++v6;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  this = (SummonControl_o *)v4->fields.leftArrowBtn;
  if ( !this )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v3 & 1, 0LL);
  this = (SummonControl_o *)v4->fields.rightArrowBtn;
  if ( !this )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v3 & 1, 0LL);
  summonMBannerInfoList = v4->fields.summonMBannerInfoList;
  if ( !summonMBannerInfoList )
    goto LABEL_26;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = summonMBannerInfoList->fields._size;
    if ( (int)v9 >= v10 )
      break;
    if ( v10 <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (SummonControl_o *)summonMBannerInfoList->fields._items->m_Items[v9];
    if ( this )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)this, v3 & 1, 0LL);
      summonMBannerInfoList = v4->fields.summonMBannerInfoList;
      ++v9;
      if ( summonMBannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  this = (SummonControl_o *)v4->fields.summonMBannerLeftArrowBtn;
  if ( !this
    || (v11 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v11, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_26:
    sub_B7076C(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v11, 0LL);
}


void __fastcall SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v18; // x22
  __int64 v19; // x2
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *currentFragmentNumLb; // x20
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-3Ch] BYREF
  int klass; // [xsp+8h] [xbp-38h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_435360E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_SummonControl__setUserResourceDisp_b__156_0__);
    sub_B70694(&StringLiteral_23910/*"{0:N0}"*/);
    byte_435360E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_22;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v13);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23910/*"{0:N0}"*/, v16, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_22;
  UILabel__set_text(currentStoneNumLb, Master_WarQuestSelectionMaster, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v18,
    (Il2CppObject *)this,
    Method_SummonControl__setUserResourceDisp_b__156_0__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v18, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !*p_userGameEntity )
    goto LABEL_22;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (System_String_o *)TblUserMaster__getUserData(
                                                        (TblUserMaster_o *)Master_WarQuestSelectionMaster,
                                                        (*p_userGameEntity)->fields.userId,
                                                        0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  currentPointNumLb = this->fields.currentPointNumLb;
  klass = (int)Master_WarQuestSelectionMaster[1].klass;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v19);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23910/*"{0:N0}"*/, v21, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_22;
  UILabel__set_text(currentPointNumLb, Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v22, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(
                           (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                           0LL);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum, v24);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23910/*"{0:N0}"*/, v25, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_22;
  UILabel__set_text(currentFragmentNumLb, Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_WarQuestSelectionMaster
    || (v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v26, 0LL)) == 0LL)
    || (v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        GameObjectExtensions__SetLocalPositionX(v27, -179.0, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v28, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_B7076C(Master_WarQuestSelectionMaster, v12);
  }
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionX(v29, 179.0, 0LL);
}


void __fastcall SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void __fastcall SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v6; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o *v15; // x21

  if ( (byte_4353644 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BonusSelectSummonAssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__showConfirmDlg_b__216_0__);
    byte_4353644 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    gachaParamData->fields.gachaId,
                                                                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_WarQuestSelectionMaster, 8, 0LL) )
  {
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v8 = (BonusSelectSummonAssetManager_o *)sub_B70764(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v8, 0LL);
        this->fields.bonusSelectAssetManager = v8;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.bonusSelectAssetManager,
          (System_Int32_array **)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__216_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v15, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  SummonControl__showConfirmDlg_28207164(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_28207164(
        SummonControl_o *this,
        bool beforeDetailFlag,
        const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w20
  struct GachaRqParamData_o *v7; // x8
  GachaExtraGiftEntity_array *giftEntList; // x23
  int32_t *v9; // x22
  int32_t needStone; // w20
  int32_t haveStone; // w24
  int32_t haveChargeStone; // w22
  int v13; // w28
  int v14; // w26
  struct GachaRqParamData_o *v15; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v17; // x24
  System_Int32_array *ScriptIntArray; // x24
  const MethodInfo *v19; // x2
  struct SummonInfoControl_o *v20; // x8
  const MethodInfo *v21; // x1
  struct SummonInfoControl_o *v22; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v24; // x9
  struct GachaRqParamData_o *v25; // x8
  GachaDetailEntity_o *v26; // x22
  SummonConfirmDlgComponent_CallbackFunc_o *v27; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v28; // x0
  System_Int32_array *v29; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v30; // x0
  const MethodInfo *v31; // x2
  struct GachaRqParamData_o *v32; // x8
  int32_t v33; // w21
  struct GachaRqParamData_o *v34; // x8
  const MethodInfo *v35; // x6
  SummonControl_o *v36; // x22
  struct System_Collections_Generic_List_VaildGachaInfo__o *v37; // x23
  __int64 v38; // x24
  VaildGachaInfo_o *v39; // x8
  int32_t v40; // w20
  int32_t v41; // w26
  int32_t v42; // w27
  struct GachaRqParamData_o *v43; // x8
  GachaDetailEntity_o *v44; // x24
  struct GachaRqParamData_o *v45; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  System_Int32_array *v47; // x25
  int32_t ScriptInt; // w0
  SummonControl_o *v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w21
  int afterChargeStoneNum; // w20
  SummonConfirmDlgComponent_o *v53; // x24
  struct SummonInfoControl_o *v54; // x9
  struct GachaRqParamData_o *v55; // x8
  struct GachaRqParamData_o *v56; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v58; // x8
  SummonControl_o *v59; // x21
  struct System_Collections_Generic_List_VaildGachaInfo__o *v60; // x23
  __int64 v61; // x25
  VaildGachaInfo_o *v62; // x9
  struct SummonInfoControl_o *v63; // x10
  struct GachaRqParamData_o *v64; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v65; // x23
  System_String_o *v66; // x25
  __int64 v67; // x26
  int32_t v68; // w28
  VaildGachaInfo_o *v69; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v70; // x23
  __int64 v71; // x26
  _BOOL4 v72; // w28
  VaildGachaInfo_o *v73; // x8
  int64_t summonCloseAt; // x26
  struct GachaRqParamData_o *v75; // x8
  int32_t gachaId; // w27
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int32_t v78; // w26
  __int64 currentIdx; // x22
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  VaildGachaInfo_o *v81; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  struct System_Collections_Generic_List_VaildGachaInfo__o *v83; // x20
  __int64 v84; // x22
  VaildGachaInfo_o *v85; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v86; // x22
  __int64 v87; // x24
  _BOOL4 isPickup; // w20
  VaildGachaInfo_o *v89; // x8
  struct GachaRqParamData_o *v90; // x9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v92; // x8
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-D0h]
  const MethodInfo *v94; // [xsp+60h] [xbp-90h]
  _BOOL4 v95; // [xsp+68h] [xbp-88h]
  int32_t v96; // [xsp+6Ch] [xbp-84h]
  int32_t payGachaPrice; // [xsp+6Ch] [xbp-84h]
  int32_t haveFreeStone; // [xsp+70h] [xbp-80h]
  System_String_o *name; // [xsp+70h] [xbp-80h]
  int32_t v100; // [xsp+7Ch] [xbp-74h]
  int32_t v101; // [xsp+7Ch] [xbp-74h]
  int v102; // [xsp+80h] [xbp-70h]
  int32_t v103; // [xsp+80h] [xbp-70h]
  int32_t v104; // [xsp+84h] [xbp-6Ch]
  int32_t v105; // [xsp+84h] [xbp-6Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v106; // [xsp+88h] [xbp-68h]
  bool HasFlag; // [xsp+88h] [xbp-68h]
  GachaExtraGiftEntity_array *v108; // [xsp+90h] [xbp-60h]
  GachaExtraGiftEntity_array *v109; // [xsp+90h] [xbp-60h]

  v4 = this;
  if ( (byte_4353645 & 1) == 0 )
  {
    sub_B70694(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GachaDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_B70694(&Method_DataManager_GetMaster_GachaMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SummonControl_ConfirmMessageOpen__);
    sub_B70694(&Method_SummonControl_TryGetSelectBonusDataInfo__);
    sub_B70694(&Method_SummonControl_confirmResult__);
    this = (SummonControl_o *)sub_B70694(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
    byte_4353645 = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_126;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_126;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v7 = v4->fields.gachaParamData;
  if ( !v7 )
    goto LABEL_126;
  if ( !this )
    goto LABEL_126;
  giftEntList = GachaExtraGiftMaster__GetListGachaExtraGift((GachaExtraGiftMaster_o *)this, v7->fields.gachaId, 0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_126;
  v9 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_126;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v9[24], v9[44], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v4->fields.needStone;
      haveStone = v4->fields.haveStone;
      haveChargeStone = v4->fields.haveChargeStone;
      v13 = v4->fields.haveFreeStone - needStone;
      if ( v13 < 0 )
        v14 = v4->fields.haveFreeStone - needStone;
      else
        v14 = 0;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v15 = v4->fields.gachaParamData;
      if ( !v15 )
        goto LABEL_126;
      v102 = v14;
      v104 = haveStone;
      if ( !this )
        goto LABEL_126;
      v108 = giftEntList;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v15->fields.gachaId, 0LL);
      v17 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(v17, (Il2CppObject *)v4, Method_SummonControl_confirmResult__, 0LL);
      if ( GachaDetailEntity )
      {
        v106 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v106,
          (Il2CppObject *)v4,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
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
            v106 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v106,
              (Il2CppObject *)v4,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v19);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
LABEL_120:
                SummonControl__BeforeConfirmMessageOpen(v4, (const MethodInfo *)beforeDetailFlag);
                return;
              }
            }
          }
        }
      }
      else
      {
        v106 = v17;
      }
      v56 = v4->fields.gachaParamData;
      if ( !v56 )
        goto LABEL_126;
      gachaTime = v56->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_104;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
      v58 = v4->fields.gachaParamData;
      if ( !v58 || !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v58->fields.gachaId,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( this && (v59 = this, LODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_126;
        this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_126;
        this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    LODWORD(v59->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin),
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
LABEL_104:
      v101 = needStone;
      vaildGachaList = v4->fields.vaildGachaList;
      if ( vaildGachaList )
      {
        v78 = haveChargeStone;
        currentIdx = v4->fields.currentIdx;
        confirmDlgInfo = v4->fields.confirmDlgInfo;
        if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v81 = vaildGachaList->fields._items->m_Items[currentIdx];
        if ( v81 )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v83 = v4->fields.vaildGachaList;
            if ( v83 )
            {
              v84 = v4->fields.currentIdx;
              name = v81->fields.name;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              if ( v83->fields._size <= (unsigned int)v84 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              v85 = v83->fields._items->m_Items[v84];
              if ( v85 )
              {
                v86 = v4->fields.vaildGachaList;
                if ( v86 )
                {
                  v87 = v4->fields.currentIdx;
                  isPickup = v85->fields.isPickup;
                  if ( v86->fields._size <= (unsigned int)v87 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                  v89 = v86->fields._items->m_Items[v87];
                  if ( v89 )
                  {
                    v90 = v4->fields.gachaParamData;
                    if ( v90 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          name,
                          1,
                          payGachaPrice,
                          gachaTime,
                          v4->fields.haveStone,
                          v4->fields.haveFreeStone,
                          v4->fields.haveChargeStone,
                          v104 - v101,
                          v13 & ~(v13 >> 31),
                          v102 + v78,
                          v106,
                          0,
                          isPickup,
                          v89->fields.closedAt,
                          0,
                          0LL,
                          0LL,
                          v108,
                          v90->fields.shopIdIdx,
                          v94);
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
      goto LABEL_126;
    case 3:
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v20 = v4->fields.summonInfoCtr;
      if ( !v20 )
        goto LABEL_126;
      v4->fields.isDailyGacha = v20->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v9[60], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v21) )
        SummonControl__friendPointSummonConfirm(v4, v21);
      return;
    case 5:
      v22 = v4->fields.summonInfoCtr;
      if ( !v22 )
        goto LABEL_126;
      ticketNum = v22->fields.ticketNum;
      v24 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v24 )
        goto LABEL_126;
      v4->fields.afterTicketNum = ticketNum - v24->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v25 = v4->fields.gachaParamData;
      if ( !v25 || !this )
        goto LABEL_126;
      v26 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v25->fields.gachaId, 0LL);
      v27 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(v27, (Il2CppObject *)v4, Method_SummonControl_confirmResult__, 0LL);
      if ( v26 )
      {
        v28 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v28,
          (Il2CppObject *)v4,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v29 = GachaDetailEntity__GetScriptIntArray(v26, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v26, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v29 )
        {
          if ( (_DWORD)this == 1 )
          {
            v30 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v30,
              (Il2CppObject *)v4,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v29, v31);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_120;
            }
          }
        }
      }
      v32 = v4->fields.gachaParamData;
      if ( !v32 )
        goto LABEL_126;
      v33 = v32->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaMaster___);
      v34 = v4->fields.gachaParamData;
      if ( !v34 || !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v34->fields.gachaId,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_47;
      v36 = this;
      if ( !LODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin) )
        goto LABEL_47;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  LODWORD(v36->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin),
                                  0LL);
      if ( (_DWORD)this == 9 )
        ++v33;
LABEL_47:
      v37 = v4->fields.vaildGachaList;
      if ( !v37 )
        goto LABEL_126;
      v38 = v4->fields.currentIdx;
      if ( v37->fields._size <= (unsigned int)v38 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v39 = v37->fields._items->m_Items[v38];
      if ( !v39 || !v4->fields.confirmDlgInfo )
        goto LABEL_126;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v4->fields.confirmDlgInfo,
        v39->fields.name,
        v33,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v27,
        v35);
      return;
    case 7:
      v40 = v4->fields.haveStone;
      v41 = v4->fields.needStone;
      v42 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v43 = v4->fields.gachaParamData;
      if ( !v43 )
        goto LABEL_126;
      v109 = giftEntList;
      if ( !this )
        goto LABEL_126;
      v44 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v43->fields.gachaId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (SummonControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_GachaMaster___);
      v45 = v4->fields.gachaParamData;
      if ( !v45 )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v45->fields.gachaId,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_126;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        Method_SummonControl_confirmResult__,
        0LL);
      if ( v44 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v47 = GachaDetailEntity__GetScriptIntArray(v44, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v44, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v47 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B70764(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v49, v47, v50) )
              goto LABEL_120;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_126;
      v51 = v40 - v41;
      afterChargeStoneNum = (v42 - v41) & ~((v42 - v41) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v53 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v54 = v4->fields.summonInfoCtr;
        if ( v54 )
        {
          v55 = v4->fields.gachaParamData;
          if ( v55 )
          {
            if ( v53 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v53,
                (int32_t)this,
                v54->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v51,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                giftEntList,
                v55->fields.shopIdIdx,
                isAppendSummon);
              return;
            }
          }
        }
        goto LABEL_126;
      }
      v60 = v4->fields.vaildGachaList;
      if ( !v60 )
        goto LABEL_126;
      v61 = v4->fields.currentIdx;
      if ( v60->fields._size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v62 = v60->fields._items->m_Items[v61];
      if ( !v62 )
        goto LABEL_126;
      v63 = v4->fields.summonInfoCtr;
      if ( !v63 )
        goto LABEL_126;
      v64 = v4->fields.gachaParamData;
      if ( !v64 )
        goto LABEL_126;
      v65 = v4->fields.vaildGachaList;
      if ( !v65 )
        goto LABEL_126;
      v66 = v62->fields.name;
      v67 = v4->fields.currentIdx;
      v68 = v64->fields.gachaTime;
      v100 = v4->fields.haveStone;
      haveFreeStone = v4->fields.haveFreeStone;
      v95 = v64->fields.isAppendSummon;
      v96 = v4->fields.haveChargeStone;
      if ( v65->fields._size <= (unsigned int)v67 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v69 = v65->fields._items->m_Items[v67];
      if ( !v69 )
        goto LABEL_126;
      v70 = v4->fields.vaildGachaList;
      v103 = v68;
      if ( !v70 )
        goto LABEL_126;
      v71 = v4->fields.currentIdx;
      v72 = v69->fields.isPickup;
      if ( v70->fields._size <= (unsigned int)v71 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v73 = v70->fields._items->m_Items[v71];
      if ( !v73 )
        goto LABEL_126;
      summonCloseAt = v73->fields.closedAt;
      v105 = v63->fields.payGachaPrice;
      if ( HasFlag )
      {
        v75 = v4->fields.gachaParamData;
        if ( !v75 )
          goto LABEL_126;
        gachaId = v75->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B70764(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v92 = v4->fields.gachaParamData;
      if ( !v92 || !v53 )
LABEL_126:
        sub_B7076C(this, beforeDetailFlag);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v53,
        v66,
        7,
        v105,
        v103,
        v100,
        haveFreeStone,
        v96,
        v51,
        haveFreeStone,
        afterChargeStoneNum,
        callback,
        v95,
        v72,
        summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        v109,
        v92->fields.shopIdIdx,
        v94);
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
  __int64 v6; // x1
  System_Collections_Generic_List_EventTutorialEntity__o *v7; // x20
  EventTutorialEntity_o *v8; // x8
  int32_t num; // w21
  EventTutorialEntity_o *v10; // x8
  int32_t v11; // w21
  System_Action_o *v12; // x21

  if ( (byte_435361E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_B70694(&Method_SummonControl_OnClickHelpClose__);
    sub_B70694(&TutorialFlag_TypeInfo);
    byte_435361E = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v4 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v4, 0LL);
    if ( EventTutorialEntity )
    {
      v7 = EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v8 = EventTutorialEntity->fields._items->m_Items[0];
        if ( v8 )
        {
          num = v8->fields.num;
          if ( num == 1 )
            return;
          if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TutorialFlag_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
          }
          EventTutorialEntity = (System_Collections_Generic_List_EventTutorialEntity__o *)TutorialFlag__GetGachaFlg(
                                                                                            num,
                                                                                            0LL);
          if ( ((unsigned __int8)EventTutorialEntity & 1) != 0 )
            return;
          if ( !v7->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v10 = v7->fields._items->m_Items[0];
          if ( v10 )
          {
            v11 = v10->fields.num;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            TutorialFlag__SetGachaFlg(v11, 0LL);
            v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
            EventTutorialMaster__TutorialChainWithoutCheckStart(v7, v12, 0LL);
            return;
          }
        }
        sub_B7076C(EventTutorialEntity, v6);
      }
    }
  }
}


void __fastcall SummonControl__showServantDialog(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *_29045252; // x0
  const MethodInfo *v4; // x1
  CommonUI_o *v5; // x20
  SummonControl___c_c *v6; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__252_0; // x21
  Il2CppObject *v9; // x22
  struct SummonControl___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v19; // x8
  struct GachaInfos_array *v20; // x8
  __int64 v21; // x9
  GachaInfos_o *v22; // x8
  UserServantEntity_o *Entity; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v25; // x22
  struct GachaInfos_array *v26; // x8
  __int64 v27; // x9
  GachaInfos_o *v28; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v30; // x20
  ServantStatusDialog_EndDelegate_o *v31; // x22
  __int64 v32; // x0

  if ( (byte_435365E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_DialogCallBack__);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&Method_SummonControl___c__showServantDialog_b__252_0__);
    sub_B70694(&SummonControl___c_TypeInfo);
    byte_435365E = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29045252 = (CommonUI_o *)TutorialFlag__Get_29045252(107, 0LL);
  if ( ((unsigned __int8)_29045252 & 1) != 0 )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    _29045252 = (CommonUI_o *)TutorialFlag__Get_29045252(108, 0LL);
    if ( ((unsigned __int8)_29045252 & 1) == 0 )
    {
      _29045252 = (CommonUI_o *)SummonControl__isSvtEqSummonResult(this, v4);
      if ( ((unsigned __int8)_29045252 & 1) != 0 )
      {
        _29045252 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = _29045252;
        v6 = SummonControl___c_TypeInfo;
        if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v6 = SummonControl___c_TypeInfo;
        }
        static_fields = v6->static_fields;
        _9__252_0 = static_fields->__9__252_0;
        if ( !_9__252_0 )
        {
          if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v6);
            static_fields = SummonControl___c_TypeInfo->static_fields;
          }
          v9 = (Il2CppObject *)static_fields->__9;
          _9__252_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(_9__252_0, v9, Method_SummonControl___c__showServantDialog_b__252_0__, 0LL);
          v10 = SummonControl___c_TypeInfo->static_fields;
          v10->__9__252_0 = _9__252_0;
          sub_B70630(
            (BattleServantConfConponent_o *)&v10->__9__252_0,
            (System_Int32_array **)_9__252_0,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
        }
        if ( !v5 )
          goto LABEL_38;
        CommonUI__OpenTutorialImageDialog_17929856(v5, 2, 108, _9__252_0, 0LL, 0LL, 0LL);
      }
    }
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_38;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
LABEL_39:
    v32 = sub_B70798(_29045252);
    sub_B70738(v32, 0LL);
  }
  v19 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v19 )
    goto LABEL_38;
  if ( SvtType__IsCommandCode(v19->fields.type, 0LL) )
  {
    _29045252 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_29045252 )
      goto LABEL_38;
    _29045252 = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)_29045252,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v20 = this->fields.gachaResInfoList;
    if ( !v20 )
      goto LABEL_38;
    v21 = this->fields.getSvtIdx;
    if ( (unsigned int)v21 < v20->max_length )
    {
      v22 = v20->m_Items[v21];
      if ( v22 )
      {
        if ( _29045252 )
        {
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)_29045252,
                     v22->fields.userSvtId,
                     (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v25 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v25, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_17917372(Instance, 0, (UserCommandCodeEntity_o *)Entity, v25, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_38:
      sub_B7076C(_29045252, v4);
    }
    goto LABEL_39;
  }
  _29045252 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = this->fields.gachaResInfoList;
  if ( !v26 )
    goto LABEL_38;
  v27 = this->fields.getSvtIdx;
  if ( (unsigned int)v27 >= v26->max_length )
    goto LABEL_39;
  v28 = v26->m_Items[v27];
  if ( !v28 )
    goto LABEL_38;
  userSvtId = v28->fields.userSvtId;
  v30 = _29045252;
  v31 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v31, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v30 )
    goto LABEL_38;
  CommonUI__OpenServantStatusDialog_17913800(v30, 6, userSvtId, v31, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4353636 & 1) == 0 )
  {
    sub_B70694(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_endPurchaseStone__);
    byte_4353636 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (StonePurchaseMenu_CallbackFunc_o *)sub_B70764(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v4, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_B7076C(v5, v6);
  CommonUI__OpenStonePurchaseMenu(Instance, v4, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4353657 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__showSummonEffect_b__240_0__);
    byte_4353657 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__240_0__, 0LL);
  if ( !Instance )
    sub_B7076C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21

  if ( (byte_4353661 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl__showSummonResultInfo_b__256_0__);
    byte_4353661 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_25;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 0, 0LL, 36, 0LL);
  }
  else
  {
    titleInfo = (TitleInfoControl_o *)this->fields.maskBgObject;
    if ( !titleInfo )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_25;
    TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0LL, 36, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_25;
    TitleInfoControl__setBackBtnSprite_18532552(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v7 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__256_0__, 0LL);
      if ( !Instance )
        goto LABEL_25;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v9, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v4);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_25;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo )
    goto LABEL_25;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
  if ( !titleInfo )
    goto LABEL_25;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)titleInfo, 0LL) )
    return;
  titleInfo = (TitleInfoControl_o *)this->fields.summonResultInfo;
  if ( !titleInfo
    || (titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)titleInfo,
                                            0LL)) == 0LL )
  {
LABEL_25:
    sub_B7076C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_435362F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_endPurchaseSvtEqFrame__);
    sub_B70694(&Method_SummonControl_resetStoneInfo__);
    byte_435362F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__OpenServantEquipFramePurchaseMenu(Instance, v4, v5, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_435362D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SummonControl_endPurchaseSvtFrame__);
    sub_B70694(&Method_SummonControl_resetStoneInfo__);
    byte_435362D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_B70764(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__OpenServantFramePurchaseMenu(Instance, v4, v5, 0LL);
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
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantEntity_o *v14; // x22
  int32_t v15; // w24
  ServantVoiceEntity_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *summonScriptId; // x23
  WebViewManager_o *v19; // x24
  System_Action_o *v20; // x25
  ServantAssetArgs_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ServantAssetArgs_o *battleAssetArgs; // x23
  WebViewManager_o *v29; // x23
  System_Action_o *v30; // x24
  __int64 v31; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_435365B & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B70694(&ServantAssetArgs_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SummonControl__showSvtTalk_b__247_0__);
    sub_B70694(&Method_SummonControl_close__);
    sub_B70694(&StringLiteral_3141/*"CLICK_OK"*/);
    byte_435365B = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_42;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v31 = sub_B70798(Instance);
    sub_B70738(v31, 0LL);
  }
  v8 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v8 )
    goto LABEL_42;
  userSvtId = v8->fields.userSvtId;
  objectId = v8->fields.objectId;
  limitCount = v8->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v12 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v12,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_42;
    if ( !ServantVoiceMaster__GetSvtEquipVoiceEntity(MasterData_WarQuestSelectionMaster, objectId, 0LL) )
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3141/*"CLICK_OK"*/, 0LL);
        return;
      }
      goto LABEL_42;
    }
  }
  Instance = (DataManager_o *)this->fields.summonResultInfo;
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_42;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  if ( userSvtId < 1 )
  {
    v14 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v12,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_42;
    v14 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            userSvtId,
            (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B7076C(Instance, v5);
  v15 = (int)Instance;
  v16 = ServantVoiceMaster__getEntity(MasterData_WarQuestSelectionMaster, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v16 && (v17 = ServantVoiceEntity__GetSummonScriptId(v16, v15, 0LL)) != 0LL )
  {
    summonScriptId = v17;
    v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__247_0__, 0LL);
    if ( !v19 )
      goto LABEL_42;
    ScriptManager__PlayGacha_18223432(
      (ScriptManager_o *)v19,
      v14,
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
      v21 = (ServantAssetArgs_o *)sub_B70764(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_26964072(v21, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v21;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.battleAssetArgs,
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v29 )
      goto LABEL_42;
    ScriptManager__PlayGacha_18223432((ScriptManager_o *)v29, v14, objectId, limitCount, 0, 1, v30, 0, 0, 0LL, 0LL);
  }
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__174___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__174__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *this,
        const MethodInfo *method)
{
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *v2; // x19
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x22
  int mBannerSpringPanelRetryCount; // w8
  UnityEngine_Object_o **p_spring_5__2; // x20
  UnityEngine_Object_o *spring_5__2; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *v10; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v2 = this;
  if ( (byte_434F0DC & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SpringPanel___);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F0DC = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    mBannerSpringPanelRetryCount = _4__this->fields.mBannerSpringPanelRetryCount;
    _4__this->fields.mBannerSpringPanelRetryCount = mBannerSpringPanelRetryCount + 1;
    if ( mBannerSpringPanelRetryCount >= 10 )
    {
      p_spring_5__2 = (UnityEngine_Object_o **)&v2->fields._spring_5__2;
LABEL_16:
      v10 = *p_spring_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
      {
        this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !this
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL)) == 0LL)
          || (this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)UnityEngine_Transform__GetChild(
                                                                                  (UnityEngine_Transform_o *)this,
                                                                                  _4__this->fields.currentMoveIdx,
                                                                                  0LL),
              !summonMBannerCenterChild) )
        {
LABEL_25:
          sub_B7076C(this, method);
        }
        UICenterOnChild__CenterOn_36424748(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_10:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_25;
    v2->fields._spring_5__2 = (struct SpringPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    p_spring_5__2 = (UnityEngine_Object_o **)&v2->fields._spring_5__2;
    sub_B70630(&v2->fields._spring_5__2);
    spring_5__2 = (UnityEngine_Object_o *)v2->fields._spring_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(spring_5__2, 0LL, 0LL) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B70630(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    v2->fields._spring_5__2 = 0LL;
    v2->fields.__1__state = -1;
    sub_B70630(&v2->fields._spring_5__2);
    if ( !_4__this )
      goto LABEL_25;
    goto LABEL_10;
  }
  return 0;
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__174__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__174__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__174__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__174__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__249___ctor(
        SummonControl__WaitBattleChrLoad_d__249_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__249__MoveNext(
        SummonControl__WaitBattleChrLoad_d__249_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  PlayMakerFSM_o *fsm; // x0
  __int64 v7; // x1
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19

  if ( (byte_434F0DD & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B70694(&StringLiteral_3141/*"CLICK_OK"*/);
    byte_434F0DD = 1;
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
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    this->fields._wait_5__2 = v5;
    sub_B70630(&this->fields._wait_5__2);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    this->fields.__2__current = (Il2CppObject *)this->fields._wait_5__2;
    sub_B70630(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_21;
  battleAssetArgs = _4__this->fields.battleAssetArgs;
  if ( battleAssetArgs )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__unloadServant(battleAssetArgs, 0LL);
    _4__this->fields.battleAssetArgs = 0LL;
    sub_B70630(&_4__this->fields.battleAssetArgs);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_21:
    sub_B7076C(fsm, v7);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3141/*"CLICK_OK"*/, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__249__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__249_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__249__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__249_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SummonControl__WaitBattleChrLoad_d__249_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__249__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__249_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__249__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__249_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SummonControl___c_StaticFields *static_fields; // x0

  if ( (byte_434F0D7 & 1) == 0 )
  {
    sub_B70694(&SummonControl___c_TypeInfo);
    byte_434F0D7 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SummonControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SummonControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonControl___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
    sub_B7076C(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__257_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__216_1(SummonControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_434F0D8 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434F0D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall SummonControl___c___showServantDialog_b__252_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__240_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__256_1(SummonControl___c_o *this, const MethodInfo *method)
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
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutoList; // x20
  __int64 v6; // x21
  int size; // w8
  unsigned int v8; // w23
  __int64 v9; // x8
  struct System_Collections_Generic_List_EventTutorialEntity__o *v10; // x20
  __int64 v11; // x8
  int32_t v12; // w20
  struct SummonControl_o *_4__this; // x8

  if ( (byte_434F0D9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__);
    sub_B70694(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&StringLiteral_3110/*"CLEAR_TUTORIAL"*/);
    byte_434F0D9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                0LL,
                                                                (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_27;
  TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 107, 0LL);
  tutoList = this->fields.tutoList;
  if ( !tutoList )
    goto LABEL_27;
  v6 = 4LL;
  while ( 1 )
  {
    size = tutoList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
      break;
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v9 = *((_QWORD *)&tutoList->fields._items->obj.klass + v6);
    if ( !v9 )
      goto LABEL_27;
    if ( *(_DWORD *)(v9 + 24) != 1 )
    {
      v10 = this->fields.tutoList;
      if ( !v10 )
        goto LABEL_27;
      if ( v10->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v11 = *((_QWORD *)&v10->fields._items->obj.klass + v6);
      if ( !v11 )
        goto LABEL_27;
      v12 = *(_DWORD *)(v11 + 24);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__SetGachaFlg(v12, 0LL);
    }
    tutoList = this->fields.tutoList;
    ++v6;
    if ( !tutoList )
      goto LABEL_27;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)_4__this->fields.fsm) == 0LL )
LABEL_27:
    sub_B7076C(Request_WarBoardWallAttackRequest, v4);
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3110/*"CLEAR_TUTORIAL"*/,
    0LL);
}


void __fastcall SummonControl___c__DisplayClass268_0___ctor(
        SummonControl___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass268_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass268_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass268_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8
  struct SummonControl_o *v4; // x8

  v2 = this;
  if ( (byte_434F0DA & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass268_0_o *)sub_B70694(&StringLiteral_5847/*"EXECUTE"*/);
    byte_434F0DA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = v2->fields.svtId, (v4 = v2->fields.__4__this) == 0LL)
    || (this = (SummonControl___c__DisplayClass268_0_o *)v4->fields.fsm) == 0LL )
  {
    sub_B7076C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5847/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl___c__DisplayClass269_0___ctor(
        SummonControl___c__DisplayClass269_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass269_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass269_0_o *this,
        const MethodInfo *method)
{
  SummonControl___c__DisplayClass269_0_o *v2; // x19
  struct SummonControl_o *_4__this; // x8
  struct SummonControl_o *v4; // x8

  v2 = this;
  if ( (byte_434F0DB & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass269_0_o *)sub_B70694(&StringLiteral_5847/*"EXECUTE"*/);
    byte_434F0DB = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = v2->fields.svtId, (v4 = v2->fields.__4__this) == 0LL)
    || (this = (SummonControl___c__DisplayClass269_0_o *)v4->fields.fsm) == 0LL )
  {
    sub_B7076C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5847/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}