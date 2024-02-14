void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct SummonControl_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  SummonControl_c *v12; // x8
  struct SummonControl_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4216002 & 1) == 0 )
  {
    sub_B0D8A4(&SummonControl_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19436/*"icon_summon_arrow2"*/, v8);
    sub_B0D8A4(&StringLiteral_2861/*"BonusSelectSummonSaveKey"*/, v9);
    byte_4216002 = 1;
  }
  SummonControl_TypeInfo->static_fields->FRIEND_POINT_SUMMON_ID = 1;
  static_fields = SummonControl_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2861/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_2861/*"BonusSelectSummonSaveKey"*/;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v11, v2, v3, v4, v5, v6, v7);
  v12 = SummonControl_TypeInfo;
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
  v13 = v12->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19436/*"icon_summon_arrow2"*/;
  v13->ARROW_SPRITE_NAME = (struct System_String_o *)StringLiteral_19436/*"icon_summon_arrow2"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->ARROW_SPRITE_NAME, v14, v15, v16, v17, v18, v19, v20);
}


void __fastcall SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_int__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int128 v52; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216001 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_19007/*"gachaIds"*/, v10);
    sub_B0D8A4(&StringLiteral_6822/*"FrequencyType"*/, v11);
    byte_4216001 = 1;
  }
  v54.fields.m_XMin = -120.0;
  v54.fields.m_YMin = -205.0;
  v54.fields.m_Width = 240.0;
  v54.fields.m_Height = 100.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v54, v2, v3, v4, v5, (const MethodInfo *)&methoda.name);
  v55.fields.m_YMin = -315.0;
  *(_OWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.name;
  *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_POS.fields.y = -4387913408675840000LL;
  v55.fields.m_XMin = 320.0;
  v55.fields.m_Width = 200.0;
  v55.fields.m_Height = 100.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v55, v12, v13, v14, v15, &methoda);
  v56.fields.m_YMin = -310.0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.methodPointer;
  *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = 0xC366000043E10000LL;
  v56.fields.m_XMin = -335.0;
  v56.fields.m_Width = 135.0;
  v56.fields.m_Height = 150.0;
  v52 = 0uLL;
  UnityEngine_Rect___ctor(v56, v16, v17, v18, v19, (const MethodInfo *)&v52);
  *(_OWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin = v52;
  *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y = 0xC3200000C385C000LL;
  v20 = (System_Int32_array **)StringLiteral_19007/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19007/*"gachaIds"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_IDS, v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_6822/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6822/*"FrequencyType"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_TYPE, v27, v28, v29, v30, v31, v32, v33);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.vaildGachaList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v43, v44);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **name; // x1
  int32_t ticketItemId; // w8
  System_String_o *WebViewAddress_25518740; // x0
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t pickupId; // w8
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  DataManager_o *v44; // x22
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct GachaStoryAdjustEntity_o *v46; // x8
  System_Int32_array **adjustIds; // x1

  if ( (byte_4215F99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaSubMaster___, data);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&VaildGachaInfo_TypeInfo, v11);
    byte_4215F99 = 1;
  }
  v12 = sub_B0D974(VaildGachaInfo_TypeInfo, data, adjustData);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v12, 0LL);
  if ( !data || !v12 )
    goto LABEL_19;
  *(_DWORD *)(v12 + 16) = data->fields.id;
  name = (System_Int32_array **)data->fields.name;
  *(_QWORD *)(v12 + 24) = name;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), name, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v12 + 32) = data->fields.beforeGachaId;
  *(_DWORD *)(v12 + 36) = data->fields.priority;
  *(_DWORD *)(v12 + 40) = data->fields.imageId;
  *(_DWORD *)(v12 + 44) = data->fields.warId;
  *(_DWORD *)(v12 + 48) = data->fields.gachaSlot;
  *(_DWORD *)(v12 + 52) = data->fields.type;
  ticketItemId = data->fields.ticketItemId;
  *(_BYTE *)(v12 + 64) = 1;
  *(_DWORD *)(v12 + 60) = ticketItemId;
  *(_BYTE *)(v12 + 84) = data->fields.freeDrawFlag > 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_25518740 = NetworkManager__getWebViewAddress_25518740(1, 0LL);
  v23 = (System_Int32_array **)System_String__Concat_43849904(WebViewAddress_25518740, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v12 + 88) = v23;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 88), v23, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v12 + 96) = data->fields.gachaGroupId;
  *(_BYTE *)(v12 + 100) = data->fields.gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 68) = 0;
  *(_BYTE *)(v12 + 101) = pickupId > 0;
  v31 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
  *(_QWORD *)(v12 + 72) = v31;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 72), v31, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v12 + 120) = data->fields.openedAt;
  *(_QWORD *)(v12 + 128) = data->fields.closedAt;
  *(_DWORD *)(v12 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v44 = Instance;
      this->fields.gachaSubEntity = (struct GachaSubEntity_o *)Instance;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.gachaSubEntity,
        (System_Int32_array **)Instance,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      *(_DWORD *)(v12 + 80) = *(_DWORD *)&v44->fields._DispLog;
      *(_DWORD *)(v12 + 40) = HIDWORD(v44->fields.datalist);
    }
  }
  if ( !adjustData )
    goto LABEL_17;
  targetEntity = adjustData->fields.targetEntity;
  if ( !targetEntity
    || (*(_DWORD *)(v12 + 40) = targetEntity->fields.imageId, (v46 = adjustData->fields.targetEntity) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(Instance);
  }
  *(_DWORD *)(v12 + 68) = v46->fields.idx;
  adjustIds = (System_Int32_array **)adjustData->fields.adjustIds;
  *(_QWORD *)(v12 + 72) = adjustIds;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 72), adjustIds, v38, v39, v40, v41, v42, v43);
LABEL_17:
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
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
  DataManager_o *Instance; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  System_String_o *datalist; // x21
  System_String_o *lookup; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v13; // x23

  if ( (byte_4215FD4 & 1) == 0 )
  {
    sub_B0D8A4(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaDetailMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl_beforeConfirmCautionResult__, v5);
    byte_4215FD4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
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
        v13 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B0D974(SummonInfoDlgComponent_CallbackFunc_TypeInfo, v8, v9),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_B0D97C(Instance);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, datalist, lookup, v13, 0LL);
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
  MethodInfo *v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **selectBonusDatas; // x1
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_4215FC9 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, result);
    byte_4215FC9 = 1;
  }
  selectBonusData = 0LL;
  if ( result )
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
    selectBonusDatas = (System_Int32_array **)selectBonusData->fields.selectBonusDatas;
    if ( !selectBonusDatas )
    {
LABEL_10:
      SummonControl__showConfirmDlg_27155268(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = selectBonusDatas;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y,
        selectBonusDatas,
        (System_String_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      goto LABEL_10;
    }
LABEL_13:
    sub_B0D97C(this);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
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
  DataManager_o *Instance; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  CommonUI_o *v12; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x23
  bool v18; // w19

  if ( (byte_4215FCC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaSubMaster___, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SummonControl_SummonSceneRefresh__, v7);
    sub_B0D8A4(&StringLiteral_14772/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v8);
    sub_B0D8A4(&StringLiteral_14771/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v9);
    byte_4215FCC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData || !Instance )
    goto LABEL_14;
  if ( GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL) == this->fields.gachaSubEntity )
    return 0;
  v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_14772/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14771/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
  if ( !v12 )
LABEL_14:
    sub_B0D97C(Instance);
  v18 = 1;
  CommonUI__OpenNotificationDialog(v12, v13, v14, v17, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  return v18;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v5; // x20
  __int64 v7; // x0

  if ( !ids )
    sub_B0D97C(this);
  v3 = *(_QWORD *)&ids->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v3 )
    {
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
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
  __int64 v3; // x1
  struct GachaInfos_array *gachaResInfoList; // x9
  int v5; // w8
  __int64 *v6; // x8

  v2 = this;
  if ( (byte_4215FEB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9322/*"NEXT_SVT"*/, method);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_6367/*"FINAL_SVT"*/, v3);
    byte_4215FEB = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  v5 = v2->fields.getSvtIdx + 1;
  v2->fields.getSvtIdx = v5;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v2->fields.fsm) == 0LL )
    sub_B0D97C(this);
  if ( v5 >= (signed int)gachaResInfoList->max_length )
    v6 = &StringLiteral_6367/*"FINAL_SVT"*/;
  else
    v6 = &StringLiteral_9322/*"NEXT_SVT"*/;
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
  int v13; // w21
  BalanceConfig_c *v14; // x8
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

  if ( (byte_4215FCD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    sub_B0D8A4(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_SummonControl_autoSellSettingChange__, v5);
    sub_B0D8A4(&Method_SummonControl_limitManaConfirmResult__, v6);
    sub_B0D8A4(&Method_SummonControl_limitQpConfirmResult__, v7);
    sub_B0D8A4(&Method_SummonControl_showConfirmDlg__, v8);
    byte_4215FCD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v10 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v13 = (int)SelfUserGame;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_32;
  static_fields = v14->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BalanceConfig_TypeInfo;
      v19 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v19->QpMax;
      FriendPointSummonQpWarning = v19->FriendPointSummonQpWarning;
    }
    v20 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v13 )
      return 0;
  }
  else
  {
    v20 = QpMax - gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
    if ( !v13 )
      return 0;
  }
  qp = v10->fields.qp;
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = BalanceConfig_TypeInfo;
  }
  v22 = v14->static_fields;
  if ( qp >= v22->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v26 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v26, v29, 0LL);
  }
  else
  {
    if ( v10->fields.qp < v20 )
    {
      mana = v10->fields.mana;
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v22 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v22->UserItemMax )
        return 0;
      v35 = this->fields.limitWarningDlgInfo;
      v36 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                               SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                               v11,
                                                               v12);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v35 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v35, v36, v39, 0LL);
        return 1;
      }
LABEL_32:
      sub_B0D97C(SelfUserGame);
    }
    v30 = this->fields.limitWarningDlgInfo;
    v31 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v30 )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v30, v31, v34, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v5; // x8

  if ( (byte_4216000 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11159/*"RETURN_MAIN"*/, method);
    sub_B0D8A4(&StringLiteral_11161/*"RETURN_RESULT"*/, v3);
    byte_4216000 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  if ( this->fields.isResult )
    v5 = &StringLiteral_11161/*"RETURN_RESULT"*/;
  else
    v5 = &StringLiteral_11159/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0LL);
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
  Il2CppObject *String_34963268; // x19
  UserPresentBoxWindow_resData_array *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x0
  __int64 v20; // x0

  if ( (byte_4215FC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v2);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_SelectBonusData___, v4);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&string_TypeInfo, v12);
    sub_B0D8A4(&SummonControl_TypeInfo, v13);
    byte_4215FC8 = 1;
  }
  v14 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_34963268 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_34963268, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            String_34963268,
            (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v16 )
      sub_B0D97C(v20);
  }
}


bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4215F96 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215F96 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  CommonUI_o *Instance; // x0

  if ( (byte_4215FC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4215FC4 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  if ( isStoneFragmentsBulkDialog )
    CommonUI__CloseFragmentsBulkExchangeDialog(Instance, 0LL);
  else
    CommonUI__CloseFragmentsExchangeDialog(Instance, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215FA2 & 1) == 0 )
  {
    sub_B0D8A4(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_TypeInfo, method);
    byte_4215FA2 = 1;
  }
  v4 = sub_B0D974(SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_TypeInfo, method, v2);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__174___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  struct GachaRqParamData_o *v20; // x8
  WarEntity_o *Entity; // x20
  struct GachaRqParamData_o *v22; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  struct GachaRqParamData_o *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int32_t id; // w27
  int64_t coordinates; // x20
  char v32; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v33; // x24
  __int64 v34; // x1
  __int64 v35; // x2
  struct GachaRqParamData_o *v36; // x8
  int32_t v37; // w25
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  struct GachaRqParamData_o *v41; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v50; // x24
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v51; // x26
  const MethodInfo *v52; // [xsp+8h] [xbp-58h]

  if ( (byte_4215FD1 & 1) == 0 )
  {
    sub_B0D8A4(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaDetailMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SummonControl_BonusSelectSummonConfirmResult__, v12);
    sub_B0D8A4(&Method_SummonControl_SetDispBtn__, v13);
    sub_B0D8A4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v14);
    sub_B0D8A4(&Method_SummonControl_confirmCautionResult__, v15);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v16);
    sub_B0D8A4(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v18);
    byte_4215FD1 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close_27122708(confirmDlgInfo, 0LL, method);
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
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v41 = this->fields.gachaParamData;
              if ( v41 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v41->fields.gachaId;
                v44 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v39,
                                                                          v40);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v44,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v47 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v45,
                                                                          v46);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v47,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v50 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B0D974(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v48,
                                                                                  v49);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v50,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v44, v47, v50, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
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
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
  v20 = this->fields.gachaParamData;
  if ( !v20 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
             v20->fields.gachaId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)confirmDlgInfo,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v22 = this->fields.gachaParamData;
  if ( !v22 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        (GachaDetailMaster_o *)confirmDlgInfo,
                        v22->fields.gachaId,
                        0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
  v24 = this->fields.gachaParamData;
  if ( !v24 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
                                                    v24->fields.gachaId,
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  v32 = (char)confirmDlgInfo;
  v33 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                      SummonCautionDlgComponent_CallbackFunc_TypeInfo,
                                                      v25,
                                                      v26);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_SummonControl_confirmCautionResult__,
    0LL);
  if ( (v32 & 1) != 0 )
  {
    v36 = this->fields.gachaParamData;
    if ( !v36 )
      goto LABEL_43;
    v37 = v36->fields.gachaId;
  }
  else
  {
    v37 = 0;
  }
  v51 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B0D974(
                                                              BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                              v34,
                                                              v35);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v51,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_B0D97C(confirmDlgInfo);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    id > 0,
    coordinates,
    v33,
    v37,
    v51,
    this->fields.bonusSelectAssetManager,
    v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4215FE5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, flg);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SummonControl__DialogCallBack_b__253_0__, v6);
    byte_4215FE5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__253_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4215FE6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    byte_4215FE6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3101/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4215FC3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, result);
    byte_4215FC3 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  _BOOL8 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_VaildGachaInfo__o *v17; // x21
  unsigned __int64 v18; // x22
  System_Collections_Generic_List_VaildGachaInfo__o *v19; // x27
  __int64 v20; // x25
  VaildGachaInfo_o *v21; // x26
  VaildGachaInfo_o *v22; // x21
  int size; // w8
  VaildGachaInfo_o *v24; // x8

  if ( (byte_4215F9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v8);
    byte_4215F9A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                                                                 baseGachaList,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  v17 = *baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_B0D97C(v10);
  v18 = 0LL;
  while ( (__int64)v18 < v17->fields._size )
  {
    v19 = v17;
    if ( v18 >= (unsigned int)v17->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v20 = 0LL;
    v21 = v17->fields._items->m_Items[v18];
    v22 = v21;
    while ( 1 )
    {
      size = v19->fields._size;
      if ( (int)v20 >= size )
        break;
      if ( size <= (unsigned int)v20 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( v21 )
      {
        v24 = v19->fields._items->m_Items[v20];
        if ( v24 )
        {
          if ( v21->fields.id != v24->fields.id && v21->fields.slotId == v24->fields.slotId )
          {
            if ( !v22 )
              goto LABEL_25;
            if ( v22->fields.priority < v24->fields.priority )
              v22 = v19->fields._items->m_Items[v20];
          }
          v19 = *baseGachaList;
          ++v20;
          if ( *baseGachaList )
            continue;
        }
      }
      goto LABEL_25;
    }
    if ( v9 )
    {
      v10 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v9,
              (WarBoardManager_TaskList_o *)v22,
              (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
      if ( !v10 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
      v17 = *baseGachaList;
      ++v18;
      if ( *baseGachaList )
        continue;
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v9;
  sub_B0D840((BattleServantConfConponent_o *)baseGachaList, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4215F86 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_4215F86 = 1;
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
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  void *v4; // x0
  __int64 v5; // x8
  System_String_o *v6; // x19
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array *v14; // x19
  TerminalPramsManager_c *v15; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v17; // x19
  __int64 v18; // x8
  __int64 v20; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215FAB & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_4215FAB = 1;
  }
  result = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4216013 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4216013 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( !v3->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v3);
  if ( !byte_4216013 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4216013 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = *(_QWORD *)(*((_QWORD *)v4 + 23) + 40LL);
  if ( !v5 )
    goto LABEL_40;
  v6 = *(System_String_o **)(v5 + 56);
  v4 = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_40;
  if ( !*((_DWORD *)v4 + 6) )
    goto LABEL_41;
  *((_WORD *)v4 + 16) = 47;
  if ( !v6 )
    goto LABEL_40;
  v14 = System_String__Split(v6, (System_Char_array *)v4, 0LL);
  if ( !byte_421088D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    byte_421088D = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !v14 )
    goto LABEL_40;
  if ( (int)v14->max_length < 2 )
    return 0;
  v17 = v14->m_Items[1];
  v4 = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_40;
  if ( !*((_DWORD *)v4 + 6) )
    goto LABEL_41;
  *((_WORD *)v4 + 16) = 44;
  if ( !v17 || (v4 = System_String__Split(v17, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_40:
    sub_B0D97C(v4);
  v18 = *((_QWORD *)v4 + 3);
  if ( v18 )
  {
    result = 0;
    if ( (_DWORD)v18 )
    {
      System_Int32__TryParse(*((System_String_o **)v4 + 4), &result, 0LL);
      return result;
    }
LABEL_41:
    v20 = sub_B0D9A8(v4);
    sub_B0D948(v20, 0LL);
  }
  return 0;
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

  if ( (byte_4215FDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId);
    byte_4215FDE = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_String_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4215F90 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6344/*"FAIL_LOAD"*/, data);
    sub_B0D8A4(&StringLiteral_17077/*"btn_sumonhistory"*/, v10);
    sub_B0D8A4(&StringLiteral_5500/*"END_LOAD"*/, v11);
    byte_4215F90 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6344/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bannerAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v13);
  SummonControl__setPositionByWarId(this, v14);
  SummonControl__ResetArrowTween(this, v15);
  v16 = (System_String_o *)StringLiteral_17077/*"btn_sumonhistory"*/;
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17077/*"btn_sumonhistory"*/, v17);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, (UnityEngine_GameObject_o *)fsm, v16, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(fsm);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5500/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICenterOnChild_o *centerChild; // x8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x21
  float y; // w20
  int32_t v14; // w24
  System_Int32_array **v15; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  v2 = this;
  if ( (byte_4215F9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_2961/*"CHANGE_BANNER"*/, v4);
    byte_4215F9E = 1;
  }
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_27;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_27;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_27;
  v12 = *(System_Int32_array ***)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v14 = *((_DWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v15 = (System_Int32_array **)this;
  if ( v2->fields.isDragging )
    goto LABEL_30;
  currentBannerComp = (UnityEngine_Object_o *)v2->fields.currentBannerComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, currentBannerComp, 0LL)
    || v12 != (System_Int32_array **)v2->fields.currentGachaInfo
    || LODWORD(y) != v2->fields.currentIdx
    || v14 != v2->fields.currentMoveIdx )
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
    v2->fields.currentBannerComp = (struct GachaBannerComponent_o *)v15;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.currentBannerComp, v15, v6, v7, v8, v9, v10, v11);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v12;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.currentGachaInfo, v12, v17, v18, v19, v20, v21, v22);
    *(float *)&v2->fields.currentIdx = y;
    v2->fields.currentMoveIdx = v14;
    SummonControl__setSliderIcon(v2, SLODWORD(y), v23);
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
          UICenterOnChild__CenterOn_35227608(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2961/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B0D97C(this);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **v11; // x20
  float m_Height; // w24
  float x; // w25
  System_Int32_array **v14; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x23
  bool *p_isNotCenterOnSync; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UICenterOnChild_o *centerChild; // x20

  v2 = this;
  if ( (byte_4215F9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method);
    this = (SummonControl_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215F9F = 1;
  }
  summonMBannerCenterChild = v2->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_21;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_21;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_21;
  v11 = *(System_Int32_array ***)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  v14 = (System_Int32_array **)this;
  if ( v2->fields.isDragging )
    goto LABEL_15;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v2->fields.currentSummonMBannerComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, currentSummonMBannerComponent, 0LL)
    || v11 != (System_Int32_array **)v2->fields.currentGachaInfo
    || LODWORD(m_Height) != v2->fields.currentIdx
    || LODWORD(x) != v2->fields.currentMoveIdx )
  {
LABEL_15:
    v2->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v14;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.currentSummonMBannerComponent, v14, v5, v6, v7, v8, v9, v10);
    v2->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v11;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.currentGachaInfo, v11, v17, v18, v19, v20, v21, v22);
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
          UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_B0D97C(this);
  }
  p_isNotCenterOnSync = &v2->fields.isNotCenterOnSync;
LABEL_20:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_4215FF9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, method);
    byte_4215FF9 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B0D97C(0LL);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3055/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v7; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_4215FFC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SummonControl_OnClickHelpClose__, v4);
    byte_4215FFC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 0, 0LL),
        (currentGachaInfo = this->fields.currentGachaInfo) == 0LL) )
  {
    sub_B0D97C(summonInfoCtr);
  }
  v7 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v7, 0LL);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(EventTutorialEntity, v11, 0LL);
}


void __fastcall SummonControl__OnClickHelpClose(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B0D97C(0LL);
  SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 1, 0LL);
}


void __fastcall SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  GachaHistoryRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_4215FFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SummonControl__OnClickHisotry_b__285_0__, v6);
    byte_4215FFD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__285_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (GachaHistoryRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v9,
                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_WarBoardWallAttackRequest )
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  GachaHistoryRequest__beginRequest(Request_WarBoardWallAttackRequest, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20

  if ( (byte_4215FA3 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&moveIdx);
    sub_B0D8A4(&StringLiteral_12837/*"SetBannerCenter"*/, v5);
    byte_4215FA3 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12837/*"SetBannerCenter"*/,
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
      || (UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_B0D97C(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_35227608(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4215FBF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v3);
    byte_4215FBF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_27122708(confirmDlgInfo, 0LL, v4),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(confirmDlgInfo);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v6);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4215FC0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215FC0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v3);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4215FFB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SummonControl_reDispSummonBannerList__, v4);
    byte_4215FFB = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_B0D97C(v7);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4215FC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_4215FC6 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_4215F9D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12837/*"SetBannerCenter"*/, method);
    byte_4215F9D = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12837/*"SetBannerCenter"*/,
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
    sub_B0D97C(summonInfoCtr);
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
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4215FFA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SummonControl__OnEndSummonEffect_b__282_0__, v6);
    byte_4215FFA = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__282_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v12, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v12; // w22
  CommonUI_o *Instance; // x21
  const MethodInfo *v14; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_int__o *v18; // x24

  if ( (byte_4215FC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonControl_RequestStoneFragmentsShop__, v8);
    byte_4215FC1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(
                                 (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                                 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v12 = UserStoneFragmentNum,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v14),
        v18 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v16, v17),
        System_Action_int____ctor(
          v18,
          (Il2CppObject *)this,
          Method_SummonControl_RequestStoneFragmentsShop__,
          (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__),
        !Instance) )
  {
LABEL_12:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( v12 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v18, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v18, 0LL);
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
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v12; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  ItemEntity_o *Entity; // x22
  const MethodInfo *v15; // x1
  ShopEntity_o *v16; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v18; // x1
  ShopEntity_o *v19; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v21; // x1
  ShopEntity_o *v22; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *Instance; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_bool__o *v27; // x24

  if ( (byte_4215FC5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, *(_QWORD *)&buyCount);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_SummonControl_OnCloseResultDialog__, v10);
    byte_4215FC5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v12);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_10;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             Master_WarQuestSelectionMaster,
                             (int32_t)StoneFragmentsShopEntity,
                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v16 = SummonControl__get_StoneFragmentsShopEntity(this, v15);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v16,
                                               buyCount,
                                               0LL);
  v19 = SummonControl__get_StoneFragmentsShopEntity(this, v18);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v19,
                                           Entity,
                                           buyCount,
                                           0LL);
  v22 = SummonControl__get_StoneFragmentsShopEntity(this, v21);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v22,
                                          Entity,
                                          0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v25, v26);
  System_Action_bool____ctor(
    v27,
    (Il2CppObject *)this,
    Method_SummonControl_OnCloseResultDialog__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !Instance )
LABEL_10:
    sub_B0D97C(StoneFragmentsShopEntity);
  CommonUI__OpenItemExchangeResultDialog(
    Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v27,
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
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v10; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0

  if ( (byte_4215FC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_SummonControl_EndRequestStoneFragmentsShop__, v7);
    byte_4215FC2 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  *(_QWORD *)&buyCount,
                                                  method);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v8,
                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v10);
    if ( !StoneFragmentsShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B0D97C(StoneFragmentsShopEntity);
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
  __int64 v3; // x1
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v5; // x22
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_4215F93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215F93 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_32;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_32;
  v5 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_32;
  v6 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_32;
  v7 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
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
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v7, 0LL);
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
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( Component_WebViewObject )
    {
      UITweener__ResetToBeginning((UITweener_o *)Component_WebViewObject, 0LL);
      return;
    }
LABEL_32:
    sub_B0D97C(leftArrowSprite);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v5; // x8

  if ( (byte_4215FD9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, method);
    sub_B0D8A4(&StringLiteral_11105/*"REQUEST_NG_RESULT"*/, v3);
    byte_4215FD9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  if ( this->fields.isResult )
    v5 = &StringLiteral_11105/*"REQUEST_NG_RESULT"*/;
  else
    v5 = &StringLiteral_11104/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bannerLoopCtr; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v6; // s8
  UICenterOnChild_o *centerChild; // x20
  WebViewObject_o *v8; // x20
  const MethodInfo *v9; // x1
  float v10; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_4215FA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215FA0 = 1;
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
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
      v6 = *(float *)&Component_WebViewObject->fields.onJS;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_37;
      if ( v6 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
        UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
    v8 = UnityEngine_Component__GetComponent_WebViewObject_(
           bannerLoopCtr,
           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_37;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_37;
      v10 = *(float *)&v8->fields.onJS;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_37;
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
              UICenterOnChild__CenterOn_35227608(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_B0D97C(bannerLoopCtr);
      }
    }
    else
    {
      v12 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, v9);
      UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
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
  UnityEngine_GameObject_o *bgRoot; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *v19; // x20
  __int64 v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v65; // x23
  bool v66; // w21
  System_String_o *v67; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v69; // x0
  __int64 v70; // x0

  if ( (byte_4215FDC & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, isDisp);
    sub_B0D8A4(&StringLiteral_17312/*"center_glow"*/, v5);
    sub_B0D8A4(&StringLiteral_21909/*"ring_gard1_3"*/, v6);
    sub_B0D8A4(&StringLiteral_21910/*"ring_gard2_1"*/, v7);
    sub_B0D8A4(&StringLiteral_21911/*"ring_gard2_2"*/, v8);
    sub_B0D8A4(&StringLiteral_21908/*"ring_gard1_2"*/, v9);
    sub_B0D8A4(&StringLiteral_21912/*"ring_gard2_3"*/, v10);
    sub_B0D8A4(&StringLiteral_21907/*"ring_gard1_1"*/, v11);
    byte_4215FDC = 1;
  }
  bgRoot = (UnityEngine_GameObject_o *)sub_B0D8BC(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_47:
    sub_B0D97C(bgRoot);
  v19 = bgRoot;
  v20 = StringLiteral_21907/*"ring_gard1_1"*/;
  if ( StringLiteral_21907/*"ring_gard1_1"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21907/*"ring_gard1_1"*/, v19->klass->_1.element_class);
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21907/*"ring_gard1_1"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !LODWORD(v19[1].klass) )
    goto LABEL_48;
  v19[1].monitor = v21;
  sub_B0D840((BattleServantConfConponent_o *)&v19[1].monitor, v21, v13, v14, v15, v16, v17, v18);
  v20 = StringLiteral_21908/*"ring_gard1_2"*/;
  if ( StringLiteral_21908/*"ring_gard1_2"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21908/*"ring_gard1_2"*/, v19->klass->_1.element_class);
    if ( !v20 )
      goto LABEL_49;
    v28 = (System_Int32_array **)StringLiteral_21908/*"ring_gard1_2"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( LODWORD(v19[1].klass) <= 1 )
    goto LABEL_48;
  *(_QWORD *)&v19[1].fields.m_CachedPtr = v28;
  sub_B0D840((BattleServantConfConponent_o *)&v19[1].fields, v28, v22, v23, v24, v25, v26, v27);
  v20 = StringLiteral_21909/*"ring_gard1_3"*/;
  if ( StringLiteral_21909/*"ring_gard1_3"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21909/*"ring_gard1_3"*/, v19->klass->_1.element_class);
    if ( !v20 )
      goto LABEL_49;
    v35 = (System_Int32_array **)StringLiteral_21909/*"ring_gard1_3"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( LODWORD(v19[1].klass) <= 2 )
    goto LABEL_48;
  v19[2].klass = (UnityEngine_GameObject_c *)v35;
  sub_B0D840((BattleServantConfConponent_o *)&v19[2], v35, v29, v30, v31, v32, v33, v34);
  v20 = StringLiteral_21910/*"ring_gard2_1"*/;
  if ( StringLiteral_21910/*"ring_gard2_1"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21910/*"ring_gard2_1"*/, v19->klass->_1.element_class);
    if ( !v20 )
      goto LABEL_49;
    v42 = (System_Int32_array **)StringLiteral_21910/*"ring_gard2_1"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( LODWORD(v19[1].klass) <= 3 )
    goto LABEL_48;
  v19[2].monitor = v42;
  sub_B0D840((BattleServantConfConponent_o *)&v19[2].monitor, v42, v36, v37, v38, v39, v40, v41);
  v20 = StringLiteral_21911/*"ring_gard2_2"*/;
  if ( StringLiteral_21911/*"ring_gard2_2"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21911/*"ring_gard2_2"*/, v19->klass->_1.element_class);
    if ( !v20 )
      goto LABEL_49;
    v49 = (System_Int32_array **)StringLiteral_21911/*"ring_gard2_2"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( LODWORD(v19[1].klass) <= 4 )
    goto LABEL_48;
  *(_QWORD *)&v19[2].fields.m_CachedPtr = v49;
  sub_B0D840((BattleServantConfConponent_o *)&v19[2].fields, v49, v43, v44, v45, v46, v47, v48);
  v20 = StringLiteral_21912/*"ring_gard2_3"*/;
  if ( StringLiteral_21912/*"ring_gard2_3"*/ )
  {
    v20 = sub_B0D964(StringLiteral_21912/*"ring_gard2_3"*/, v19->klass->_1.element_class);
    if ( !v20 )
      goto LABEL_49;
    v56 = (System_Int32_array **)StringLiteral_21912/*"ring_gard2_3"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( LODWORD(v19[1].klass) <= 5 )
    goto LABEL_48;
  v19[3].klass = (UnityEngine_GameObject_c *)v56;
  sub_B0D840((BattleServantConfConponent_o *)&v19[3], v56, v50, v51, v52, v53, v54, v55);
  v20 = StringLiteral_17312/*"center_glow"*/;
  if ( StringLiteral_17312/*"center_glow"*/ )
  {
    v20 = sub_B0D964(StringLiteral_17312/*"center_glow"*/, v19->klass->_1.element_class);
    if ( v20 )
    {
      v63 = (System_Int32_array **)StringLiteral_17312/*"center_glow"*/;
      goto LABEL_38;
    }
LABEL_49:
    v70 = sub_B0D99C(v20);
    sub_B0D948(v70, 0LL);
  }
  v63 = 0LL;
LABEL_38:
  if ( LODWORD(v19[1].klass) <= 6 )
    goto LABEL_48;
  v19[3].monitor = v63;
  sub_B0D840((BattleServantConfConponent_o *)&v19[3].monitor, v63, v57, v58, v59, v60, v61, v62);
  klass = v19[1].klass;
  if ( (int)klass >= 1 )
  {
    v65 = 0LL;
    v66 = isDisp;
    while ( v65 < (unsigned int)klass )
    {
      bgRoot = this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_47;
      v67 = (System_String_o *)*((_QWORD *)&v19[1].monitor + v65);
      transform = UnityEngine_GameObject__get_transform(bgRoot, 0LL);
      bgRoot = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(transform, v67, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_47;
      bgRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(bgRoot, v66, 0LL);
      LODWORD(klass) = v19[1].klass;
      if ( (__int64)++v65 >= (int)klass )
        return;
    }
LABEL_48:
    v69 = sub_B0D9A8(v20);
    sub_B0D948(v69, 0LL);
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
    sub_B0D97C(summonInfoCtr);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  UISprite_o *Component_srcLineSprite; // x20
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v13; // w21
  MasterMissionComponent_c *v14; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v17; // w1
  __int64 v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4215FBE & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B0D8A4(&MasterMissionComponent_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_17039/*"btn_event_3"*/, v8);
    byte_4215FBE = 1;
  }
  v18 = 0LL;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            fragmentsExchangeButton,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(Component_srcLineSprite, (System_String_o *)StringLiteral_17039/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0LL);
  v13 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v13 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  HIDWORD(v18) = v13;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(
    fragmentsExchangeButton,
    this->fields.haveStone + v13 >= this->fields.needStone,
    0LL);
  v14 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v14 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v14->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v13 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v18 + 4, 0LL);
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
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_B0D97C(fragmentsExchangeButton);
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  LODWORD(v18) = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v18, 0LL);
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
  v17 = 1;
LABEL_31:
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4215FD0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl__SummonSceneRefresh_b__227_0__, v4);
    byte_4215FD0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__227_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  CommonUI__maskFadein(Instance, 0.0, v8, 0LL);
}


bool __fastcall SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  SummonControl_c *v14; // x0
  System_String_o *String_34963268; // x21
  UserPresentBoxWindow_resData_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int max_length; // w8
  __int64 v24; // x9
  SelectBonusData_o *v25; // x1
  __int64 v26; // x0

  if ( (byte_4215FC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData);
    sub_B0D8A4(&JsonManager_TypeInfo, v6);
    this = (SummonControl_o *)sub_B0D8A4(&SummonControl_TypeInfo, v7);
    byte_4215FC7 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)selectBonusData, 0LL, v8, v9, v10, v11, v12, v13);
  v14 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_34963268, 0LL) )
    goto LABEL_7;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          (Il2CppObject *)String_34963268,
          (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v16 )
  {
    max_length = v16->max_length;
    if ( max_length < 1 )
    {
LABEL_7:
      LOBYTE(v16) = 0;
      return (char)v16;
    }
    v24 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= max_length )
      {
        v26 = sub_B0D9A8(v16);
        sub_B0D948(v26, 0LL);
      }
      v25 = (SelectBonusData_o *)v16->m_Items[v24];
      if ( !v25 )
        sub_B0D97C(v16);
      if ( v25->fields.gachaId == gachaId )
        break;
      if ( (int)++v24 >= max_length )
        goto LABEL_7;
    }
    *selectBonusData = v25;
    sub_B0D840(
      (BattleServantConfConponent_o *)selectBonusData,
      (System_Int32_array **)v25,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    LOBYTE(v16) = 1;
  }
  return (char)v16;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct SummonInfoControl_o *summonInfoCtr; // x9
  char v6; // w8

  v2 = this;
  if ( (byte_4215FA1 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, method);
    byte_4215FA1 = 1;
  }
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_12;
  currentIdx = v2->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (SummonControl_o *)vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !this
    || (this = (SummonControl_o *)VaildGachaInfo__HasFlag((VaildGachaInfo_o *)this, 2, 0LL),
        (summonInfoCtr = v2->fields.summonInfoCtr) == 0LL)
    || (v6 = (char)this, (this = (SummonControl_o *)summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(this);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215FE2 & 1) == 0 )
  {
    sub_B0D8A4(&SummonControl__WaitBattleChrLoad_d__249_TypeInfo, method);
    byte_4215FE2 = 1;
  }
  v4 = sub_B0D974(SummonControl__WaitBattleChrLoad_d__249_TypeInfo, method, v2);
  SummonControl__WaitBattleChrLoad_d__249___ctor((SummonControl__WaitBattleChrLoad_d__249_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall SummonControl___DialogCallBack_b__253_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  WebViewManager_o *v10; // x0
  CommonUI_o *v11; // x19

  if ( (byte_421600D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl_EndCloseDialogCallBack__, v5);
    byte_421600D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)v10;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v11 )
LABEL_9:
    sub_B0D97C(v10);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__285_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_B0D97C(0LL);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


void __fastcall SummonControl___OnEndSummonEffect_b__282_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4216011 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5499/*"END_FADE"*/, method);
    byte_4216011 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5499/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__227_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4216009 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4216009 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        SummonControl__quit(this, v5),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4216004 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl__exeFormation_b__149_2__, v4);
    byte_4216004 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_2__, 0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  CommonUI__CloseTutorialArrowMark(Instance, v8, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_4216005 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_4216005 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___executeEnhanceTresureDevice_b__270_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *Instance; // x0
  CommonUI_o *v7; // x20

  if ( (byte_4216010 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_5498/*"END_EFFECT"*/, v5);
    byte_4216010 = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7
    || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5498/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__233_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_421600A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12386/*"START_GACHA"*/, method);
    byte_421600A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12386/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4216003 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl__openAfterSummonInfo_b__148_2__, v4);
    byte_4216003 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_2__, 0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  CommonUI__CloseTutorialNotificationDialogArrow_17042172(Instance, v8, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__265_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v6; // x19

  if ( (byte_421600F & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_5516/*"END_SUMMON"*/, v4);
    byte_421600F = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5516/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)summonResultInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v6 )
LABEL_12:
    sub_B0D97C(summonResultInfo);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__180_0(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4216007 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12837/*"SetBannerCenter"*/, method);
    byte_4216007 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12837/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__156_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4216006 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v5);
    byte_4216006 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v9 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v7, 0LL);
  if ( !currentStoneNumLb )
    sub_B0D97C(v8);
  UILabel__set_text(currentStoneNumLb, v8, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__216_0(SummonControl_o *this, const MethodInfo *method)
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
  UILabel_o *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v34; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  void *cautionDlgInfo; // x8
  System_Action_o *v38; // x19
  Il2CppObject *v39; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  v2 = this;
  if ( (byte_4216008 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SummonControl_BonusSelectSummonConfirmResult__, v7);
    sub_B0D8A4(&Method_SummonControl_SetDispBtn__, v8);
    sub_B0D8A4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_B0D8A4(&Method_SummonControl___c__showConfirmDlg_b__216_1__, v11);
    this = (SummonControl_o *)sub_B0D8A4(&SummonControl___c_TypeInfo, v12);
    byte_4216008 = 1;
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
                              (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  if ( !this )
    goto LABEL_20;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v2->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields.bonusSelectSummonConfirmDialog,
    Component_srcLineSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
  v28 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v23,
                                                            v24);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v28, (Il2CppObject *)v2, Method_SummonControl_SetDispBtn__, 0LL);
  v31 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v29,
                                                            v30);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)v2,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v34 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B0D974(
                                                                    BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                    v32,
                                                                    v33);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v34,
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
  v38 = (System_Action_o *)*((_QWORD *)cautionDlgInfo + 4);
  if ( !v38 )
  {
    if ( (BYTE3(this->fields.summonMBannerPrefab) & 4) != 0 && !LODWORD(this->fields.summonResultInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      cautionDlgInfo = SummonControl___c_TypeInfo->static_fields;
    }
    v39 = *(Il2CppObject **)cautionDlgInfo;
    v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
    System_Action___ctor(v38, v39, Method_SummonControl___c__showConfirmDlg_b__216_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__216_1 = v38;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->__9__216_1,
      (System_Int32_array **)v38,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_20:
    sub_B0D97C(this);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v28, v31, v34, v38, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__240_0(SummonControl_o *this, const MethodInfo *method)
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 maskObject; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  SummonEffectComponent_o **p_summonComp; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x8
  SummonEffectComponent_o *v46; // x8
  char v47; // w9
  struct GachaRqParamData_o *v48; // x8
  struct SummonEffectComponent_o *summonComp; // x9
  System_String_o *Value; // x0
  System_String_o *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  SummonControl___c_c *v55; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__240_1; // x24
  Il2CppObject *v58; // x25
  struct SummonControl___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Collections_Generic_List_int__o *v67; // x24
  float v68; // s0
  struct GachaInfos_array *v69; // x8
  float v70; // s8
  il2cpp_array_size_t v71; // w20
  GachaInfos_o *v72; // x23
  bool IsCommandCode; // w0
  int32_t objectId; // w1
  int32_t v75; // w26
  char v76; // w25
  int32_t Data; // w28
  int32_t v78; // w21
  char isNew; // w27
  int v80; // w27
  __int64 v81; // x21
  bool IsServant; // w25
  __int64 v83; // x1
  const MethodInfo *v84; // x2
  int v85; // w8
  WeightRate_int__o *v86; // x28
  int32_t v87; // w0
  _BOOL4 v88; // w22
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  int32_t v92; // w0
  __int64 v93; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v94; // [xsp+28h] [xbp-88h]
  ServantLimitMaster_o *v95; // [xsp+30h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+38h] [xbp-78h]
  int max_length; // [xsp+4Ch] [xbp-64h]

  if ( (byte_421600B & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantVoiceMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v13);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v14);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&SoundManager_TypeInfo, v21);
    sub_B0D8A4(&Method_SummonControl___c__showSummonEffect_b__240_1__, v22);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v23);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v24);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v25);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v26);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v27);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v28);
    sub_B0D8A4(&StringLiteral_5511/*"END_PREPARATION"*/, v29);
    sub_B0D8A4(&StringLiteral_12504/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v30);
    sub_B0D8A4(&StringLiteral_2567/*"BGM_SUMMON_1"*/, v31);
    byte_421600B = 1;
  }
  maskObject = (__int64)this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v33);
  SummonControl__setDispSummonInfo(this, 0, v34);
  maskObject = (__int64)this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_90;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  SummonControl__clearResultList(this, v35);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_2567/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = (__int64)this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_90;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskObject,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  p_summonComp = &this->fields.summonComp;
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.summonComp,
    (System_Int32_array **)Component_WebViewObject,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
    v46 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v47 = 1;
  }
  else
  {
LABEL_16:
    v46 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v47 = 0;
  }
  v46->fields.isNoSkip = v47;
  v48 = this->fields.gachaParamData;
  if ( !v48 )
    goto LABEL_90;
  summonComp = this->fields.summonComp;
  if ( !summonComp )
    goto LABEL_90;
  summonComp->fields.gachaId = v48->fields.gachaId;
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)maskObject,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  v95 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)maskObject,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  v94 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)maskObject,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  maskObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)maskObject,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_90;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12504/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v51 = Value;
    maskObject = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !maskObject )
      goto LABEL_90;
    if ( !*(_DWORD *)(maskObject + 24) )
    {
LABEL_93:
      v93 = sub_B0D9A8(maskObject);
      sub_B0D948(v93, 0LL);
    }
    *(_WORD *)(maskObject + 32) = 44;
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 v51,
                                                                 (System_Char_array *)maskObject,
                                                                 0LL);
    v55 = SummonControl___c_TypeInfo;
    if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v55 = SummonControl___c_TypeInfo;
    }
    static_fields = v55->static_fields;
    _9__240_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__240_1;
    if ( !_9__240_1 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        static_fields = SummonControl___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)static_fields->__9;
      _9__240_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_string__int__TypeInfo,
                                                                                    v52,
                                                                                    v53);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__240_1,
        v58,
        Method_SummonControl___c__showSummonEffect_b__240_1__,
        (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
      v59 = SummonControl___c_TypeInfo->static_fields;
      v59->__9__240_1 = (struct System_Func_string__int__o *)_9__240_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v59->__9__240_1,
        (System_Int32_array **)_9__240_1,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v54,
                                                                 (System_Func_TSource__TResult__o *)_9__240_1,
                                                                 (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v67 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v66,
                                                      (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v67 = 0LL;
  }
  v68 = UnityEngine_Random__get_value(0LL);
  v69 = this->fields.gachaResInfoList;
  if ( v69 )
  {
    max_length = v69->max_length;
    if ( max_length >= 1 )
    {
      v70 = v68;
      v71 = 0;
      while ( 1 )
      {
        if ( v71 >= v69->max_length )
          goto LABEL_93;
        v72 = v69->m_Items[v71];
        if ( !v72 )
          goto LABEL_90;
        IsCommandCode = SvtType__IsCommandCode(v72->fields.type, 0LL);
        objectId = v72->fields.objectId;
        if ( !IsCommandCode )
          break;
        maskObject = (__int64)v94;
        if ( !v94 )
          goto LABEL_90;
        maskObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v94,
                                objectId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_90;
        v75 = *(_DWORD *)(maskObject + 64);
        v76 = 0;
LABEL_47:
        Data = 0;
        v78 = 3;
        isNew = v72->fields.isNew;
        if ( v67 )
        {
LABEL_61:
          maskObject = System_Collections_Generic_List_int___Contains(
                         v67,
                         v72->fields.objectId,
                         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          goto LABEL_87;
        }
LABEL_86:
        maskObject = 0LL;
LABEL_87:
        if ( !*p_summonComp )
          goto LABEL_90;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v72->fields.objectId,
          v72->fields.limitCount,
          v76,
          isNew,
          Data,
          v75,
          v78,
          maskObject & 1,
          v72->fields.userSvtId,
          0LL);
        if ( (int)++v71 >= max_length )
          goto LABEL_91;
        v69 = this->fields.gachaResInfoList;
        if ( !v69 )
          goto LABEL_90;
      }
      maskObject = (__int64)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_90;
      maskObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              objectId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_90;
      v80 = *(_DWORD *)(maskObject + 84);
      v81 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = (__int64)v95;
      if ( !v95 )
        goto LABEL_90;
      maskObject = (__int64)ServantLimitMaster__GetEntity(v95, v72->fields.objectId, v72->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_90;
      v75 = *(_DWORD *)(maskObject + 24);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, *(_DWORD *)(v81 + 80), v84) )
        goto LABEL_58;
      if ( v75 == 5 )
      {
        if ( v70 >= 0.2 )
        {
LABEL_58:
          v76 = 0;
          goto LABEL_59;
        }
      }
      else if ( v75 != 4 || v70 >= 0.4 )
      {
        goto LABEL_58;
      }
      v76 = 1;
LABEL_59:
      v85 = v80 - 3;
      v78 = 0;
      Data = 0;
      isNew = 0;
      switch ( v85 )
      {
        case 0:
        case 4:
          if ( v67 )
            goto LABEL_61;
          goto LABEL_86;
        case 3:
          v88 = v72->fields.isNew;
          isNew = v72->fields.isNew;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          maskObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_90;
          SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)maskObject,
                                  v72->fields.objectId,
                                  0LL);
          Data = 0;
          v78 = 1;
          if ( v88 && SvtEquipVoiceEntity )
          {
            p_summonComp = &this->fields.summonComp;
            if ( !v67 )
            {
              v67 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v90,
                                                                v91);
              System_Collections_Generic_List_int____ctor(
                v67,
                (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v67 )
                goto LABEL_90;
            }
            System_Collections_Generic_List_int___Add(
              v67,
              v72->fields.objectId,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            Data = 0;
            isNew = 1;
            v78 = 1;
            goto LABEL_61;
          }
          p_summonComp = &this->fields.summonComp;
          if ( v67 )
            goto LABEL_61;
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v78 = 1;
          if ( !v67 )
            goto LABEL_86;
          goto LABEL_61;
        case 8:
          goto LABEL_47;
        default:
          isNew = v72->fields.isNew;
          v86 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v83, v84);
          WeightRate_int____ctor(v86, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
          if ( v75 == 5 )
          {
            if ( !v86 )
              goto LABEL_90;
            WeightRate_int___setWeight(v86, 60, 0, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v86, 20, 1, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
            v78 = 2;
            WeightRate_int___setWeight(v86, 20, 2, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
            v92 = UnityEngine_Random__Range_34969060(0, v86->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v86, v92, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
            v76 &= Data == 0;
            v75 = 5;
            if ( v67 )
              goto LABEL_61;
          }
          else if ( v75 == 4 )
          {
            if ( !v86 )
              goto LABEL_90;
            WeightRate_int___setWeight(v86, 60, 0, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v86, 40, 1, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
            v87 = UnityEngine_Random__Range_34969060(0, v86->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v86, v87, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
            v78 = 2;
            v76 &= Data == 0;
            v75 = 4;
            if ( v67 )
              goto LABEL_61;
          }
          else
          {
            Data = 0;
            v78 = 2;
            if ( v67 )
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
    sub_B0D97C(maskObject);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5511/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__256_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  SummonControl___c_c *v8; // x0
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__256_1; // x21
  Il2CppObject *v11; // x22
  struct SummonControl___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421600E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SummonControl___c__showSummonResultInfo_b__256_1__, v4);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v5);
    byte_421600E = 1;
  }
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  v8 = SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v8 = SummonControl___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__256_1 = static_fields->__9__256_1;
  if ( !_9__256_1 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__256_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__256_1, v11, Method_SummonControl___c__showSummonResultInfo_b__256_1__, 0LL);
    v12 = SummonControl___c_TypeInfo->static_fields;
    v12->__9__256_1 = _9__256_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v12->__9__256_1,
      (System_Int32_array **)_9__256_1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !overflowSvtCoinInfo )
    sub_B0D97C(v8);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__256_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__247_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_421600C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3082/*"CLICK_OK"*/, method);
    byte_421600C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3082/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v4) )
  {
    SummonControl__showConfirmDlg(this, v4);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4215FD5 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215FD5 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_B0D97C(0LL);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SummonControl__showConfirmDlg_27155268(this, 0, v4);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SummonControl_o *v18; // x20
  __int64 v19; // x8
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x8
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x8
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x8
  System_Int32_array **v52; // x1
  __int64 v53; // x0

  v4 = this;
  if ( (byte_4215FD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result);
    sub_B0D8A4(&JsonManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v6);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v7);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v8);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v9);
    byte_4215FD8 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL)
    || System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v4, v10);
    return;
  }
  v11 = (Il2CppObject *)System_String__Concat_43852188(
                          (System_String_o *)StringLiteral_15681/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15917/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                              v11,
                              (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_23;
  v18 = this;
  if ( !LODWORD(this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v19 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v19 )
    goto LABEL_23;
  v20 = *(System_Int32_array ***)(v19 + 16);
  v4->fields.gachaResInfoList = (struct GachaInfos_array *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.gachaResInfoList, v20, v12, v13, v14, v15, v16, v17);
  if ( !LODWORD(v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v27 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v27 )
    goto LABEL_23;
  v28 = *(System_Int32_array ***)(v27 + 24);
  v4->fields.canRankUpClassIds = (struct System_Int32_array *)v28;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.canRankUpClassIds, v28, v21, v22, v23, v24, v25, v26);
  if ( !LODWORD(v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v35 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v35 )
    goto LABEL_23;
  v36 = *(System_Int32_array ***)(v35 + 32);
  v4->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.overflowSvtCoinInfos, v36, v29, v30, v31, v32, v33, v34);
  if ( !LODWORD(v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v43 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v43 )
    goto LABEL_23;
  v44 = *(System_Int32_array ***)(v43 + 40);
  v4->fields.extraGiftIds = (struct System_Int32_array *)v44;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.extraGiftIds, v44, v37, v38, v39, v40, v41, v42);
  if ( !LODWORD(v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
  {
LABEL_24:
    v53 = sub_B0D9A8(this);
    sub_B0D948(v53, 0LL);
  }
  v51 = *(_QWORD *)&v18->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v51
    || (v52 = *(System_Int32_array ***)(v51 + 48),
        v4->fields.GachaExtraGiftList = (struct GachaExtraGifts_array *)v52,
        sub_B0D840((BattleServantConfConponent_o *)&v4->fields.GachaExtraGiftList, v52, v45, v46, v47, v48, v49, v50),
        (this = (SummonControl_o *)v4->fields.fsm) == 0LL) )
  {
LABEL_23:
    sub_B0D97C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4215FDB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, result);
    byte_4215FDB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  PlayMakerFSM_o *fsm; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_4215FF2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SummonControl___c__DisplayClass269_0__checkEnhanceTresureDevice_b__0__, v6);
    sub_B0D8A4(&SummonControl___c__DisplayClass269_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_9379/*"NO_EXIST"*/, v8);
    byte_4215FF2 = 1;
  }
  v9 = sub_B0D974(SummonControl___c__DisplayClass269_0_TypeInfo, method, v2);
  SummonControl___c__DisplayClass269_0___ctor((SummonControl___c__DisplayClass269_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v9 + 24), v17) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
    v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v9,
      Method_SummonControl___c__DisplayClass269_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v23, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(fsm);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9379/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4215FF0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9379/*"NO_EXIST"*/, method);
    byte_4215FF0 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9379/*"NO_EXIST"*/, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v21; // x8
  int32_t objectId; // w21
  __int64 v23; // x1
  __int64 v24; // x2
  CommonUI_o *v25; // x19
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21
  __int64 v29; // x0

  if ( (byte_4215FF1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDeviceSingle_b__0__, v8);
    sub_B0D8A4(&SummonControl___c__DisplayClass268_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_9379/*"NO_EXIST"*/, v10);
    byte_4215FF1 = 1;
  }
  v11 = sub_B0D974(SummonControl___c__DisplayClass268_0_TypeInfo, method, v2);
  SummonControl___c__DisplayClass268_0___ctor((SummonControl___c__DisplayClass268_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v11 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v29 = sub_B0D9A8(Instance);
    sub_B0D948(v29, 0LL);
  }
  v21 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v21 )
    goto LABEL_17;
  objectId = v21->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v11 + 24) = objectId;
    v25 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v26 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
    v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v11,
      Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v25 )
    {
      CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v28, 0LL);
      return;
    }
LABEL_17:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9379/*"NO_EXIST"*/, 0LL);
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
  if ( (byte_4215FB7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2992/*"CHECK_STONE"*/, method);
    sub_B0D8A4(&StringLiteral_12276/*"SHOW_CONFIRM_DLG"*/, v3);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_2989/*"CHECK_POINT"*/, v4);
    byte_4215FB7 = 1;
  }
  gachaParamData = v2->fields.gachaParamData;
  if ( !gachaParamData )
LABEL_15:
    sub_B0D97C(this);
  switch ( gachaParamData->fields.gachaType )
  {
    case 1:
    case 7:
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      v6 = &StringLiteral_2992/*"CHECK_STONE"*/;
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
        v6 = &StringLiteral_12276/*"SHOW_CONFIRM_DLG"*/;
      else
        v6 = &StringLiteral_2989/*"CHECK_POINT"*/;
      break;
    case 5:
      this = (SummonControl_o *)v2->fields.fsm;
      if ( !this )
        goto LABEL_15;
      goto LABEL_12;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_4215FDF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6895/*"GET_MULTI"*/, method);
    byte_4215FDF = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B0D97C(maskBgObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6895/*"GET_MULTI"*/, 0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v9; // x0

  v3 = this;
  if ( (byte_4215FE0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9320/*"NEW_SVT"*/, method);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_6908/*"GO_BACK"*/, v4);
    byte_4215FE0 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v9 = sub_B0D9A8(this);
    sub_B0D948(v9, 0LL);
  }
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_14;
  if ( v7->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v7->fields.objectId, getSvtIdx, v2)) )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v8 = &StringLiteral_9320/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B0D97C(this);
  }
  this = (SummonControl_o *)v3->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v8 = &StringLiteral_6908/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v8, 0LL);
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
    sub_B0D97C(this);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
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
  __int64 v14; // x0

  v3 = this;
  if ( (byte_4215FE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&StringLiteral_9770/*"OLD_SVT"*/, v4);
    sub_B0D8A4(&StringLiteral_6367/*"FINAL_SVT"*/, v5);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_9320/*"NEW_SVT"*/, v6);
    byte_4215FE9 = 1;
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
      v10 = &StringLiteral_6367/*"FINAL_SVT"*/;
LABEL_15:
      v13 = (System_String_o *)*v10;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
  {
    v14 = sub_B0D9A8(this);
    sub_B0D948(v14, 0LL);
  }
  v11 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v11 )
    goto LABEL_19;
  if ( !v11->fields.isNew )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    if ( this )
    {
      v10 = &StringLiteral_9770/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_19:
    sub_B0D97C(this);
  }
  objectId = v11->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_19;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v3->fields.fsm;
    v13 = (System_String_o *)StringLiteral_9770/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v13, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9320/*"NEW_SVT"*/, 0LL);
  this = (SummonControl_o *)v3->fields.befSvtList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    objectId,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B0D97C(UserGachaData);
  v9 = UserGachaData[23];
  if ( v9 >= 1 )
    return v8[7] >= v9;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  SummonControl_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v8; // w22

  v4 = this;
  if ( (byte_4215FEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    this = (SummonControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4215FEA = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B0D97C(this);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( befSvtList->fields._items->m_Items[v8 + 1] == svtId )
      return 1;
    if ( (int)++v8 >= size )
      return 0;
    befSvtList = v4->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int32_t v12; // w8
  CommonUI_o *v13; // x19

  if ( (byte_4215F89 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_3054/*"CLEAR_TUTORIAL"*/, v5);
    sub_B0D8A4(&StringLiteral_11162/*"RETURN_TUTORIAL"*/, v6);
    byte_4215F89 = 1;
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
    if ( !TutorialFlag__Get_28088484(101, 0LL) )
    {
      v12 = 1;
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
  if ( !TutorialFlag__Get_28088484(101, 0LL) )
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
    if ( !TutorialFlag__Get_28088484(101, 0LL) )
      goto LABEL_33;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28088484(107, 0LL) )
    {
LABEL_33:
      SummonControl__setTutorialCtrEnable(this, 1, v10);
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
      SummonControl__showHelpImg(this, v11);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fsm;
      if ( !summonInfoCtr )
        goto LABEL_56;
      v9 = &StringLiteral_3054/*"CLEAR_TUTORIAL"*/;
      goto LABEL_47;
    }
    this->fields.isDoneSecTutorial = 0;
    v12 = 4;
LABEL_50:
    this->fields.tutorialKind = v12;
    SummonControl__progTutorial(this, v7);
    goto LABEL_51;
  }
  summonInfoCtr = (SummonInfoControl_o *)this->fields.fsm;
  this->fields.isDoneTutorial = 0;
  if ( !summonInfoCtr )
    goto LABEL_56;
  v9 = &StringLiteral_11162/*"RETURN_TUTORIAL"*/;
LABEL_47:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonInfoCtr, (System_String_o *)*v9, 0LL);
LABEL_51:
  summonInfoCtr = (SummonInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)summonInfoCtr;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v13 )
LABEL_56:
    sub_B0D97C(summonInfoCtr);
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
  int32_t svtEquipKeep; // w21
  int32_t svtKeep; // w24
  BalanceConfig_c *v17; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w0
  int32_t Count; // w0
  int32_t v21; // w20
  __int64 v22; // x1
  __int64 v23; // x2
  SummonControl_o *v24; // x21
  BalanceConfig_c *v25; // x0
  int32_t v26; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v27; // x23
  int32_t v28; // w3
  CommonUI_o *v29; // x0
  int32_t v30; // w1
  __int64 v31; // x1
  __int64 v32; // x2
  struct UserGameEntity_o *v33; // x8
  int32_t v34; // w22
  int32_t v35; // w21
  SummonControl_o *v36; // x20
  int32_t v37; // w2
  __int64 v38; // x1
  __int64 v39; // x2
  struct UserGameEntity_o *v40; // x8
  int32_t v41; // w21
  SummonControl_o *v42; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4215FAF & 1) == 0 )
  {
    sub_B0D8A4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v8);
    sub_B0D8A4(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9);
    sub_B0D8A4(&Method_SummonControl_closeShotSvtFrameDlg__, v10);
    sub_B0D8A4(&StringLiteral_6482/*"FRIEND_GACHA_ADD_LIMIT"*/, v11);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_2990/*"CHECK_RESOURCE"*/, v12);
    byte_4215FAF = 1;
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
  if ( !byte_421088F )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_421088F = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v17->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_44;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6482/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( Value >= 1 )
  {
    svtKeep += Value;
    svtEquipKeep += Value;
    CommandCodeFrameMax += Value;
  }
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_44;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_44;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0LL);
  v21 = Count;
  if ( Count < CommandCodeFrameMax && servantEquipSum[1] < svtKeep && servantEquipSum[0] < svtEquipKeep )
  {
LABEL_22:
    this = (SummonControl_o *)v2->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2990/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_44:
    sub_B0D97C(this);
  }
  if ( servantEquipSum[1] >= svtKeep )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = v2->fields.userGameEntity;
    if ( !v33 )
      goto LABEL_44;
    v34 = v33->fields.svtKeep;
    v35 = servantEquipSum[1];
    v36 = this;
    v27 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                            ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                            v31,
                                                            v32);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v27,
      (Il2CppObject *)v2,
      Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v36 )
      goto LABEL_44;
    v29 = (CommonUI_o *)v36;
    v30 = v35;
    v37 = v34;
    v28 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= svtEquipKeep )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = v2->fields.userGameEntity;
      if ( !v40 )
        goto LABEL_44;
      v26 = v40->fields.svtEquipKeep;
      v41 = servantEquipSum[0];
      v42 = this;
      v27 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v38,
                                                              v39);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v2,
        Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v42 )
        goto LABEL_44;
      v28 = 1;
      v29 = (CommonUI_o *)v42;
      v30 = v41;
    }
    else
    {
      if ( Count < CommandCodeFrameMax )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v2->fields.userGameEntity )
        goto LABEL_44;
      v24 = this;
      if ( !byte_421088F )
      {
        sub_B0D8A4(&BalanceConfig_TypeInfo, v22);
        byte_421088F = 1;
      }
      v25 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      v26 = v25->static_fields->CommandCodeFrameMax;
      v27 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v22,
                                                              v23);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v2,
        Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v24 )
        goto LABEL_44;
      v28 = 2;
      v29 = (CommonUI_o *)v24;
      v30 = v21;
    }
    v37 = v26;
  }
  CommonUI__OpenSvtFrameShortDlg(v29, v30, v37, v28, 0, v27, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4215FB8 & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_B0D8A4(&Method_SummonControl_closeShotPointDlg__, v5);
    sub_B0D8A4(&StringLiteral_12276/*"SHOW_CONFIRM_DLG"*/, v6);
    byte_4215FB8 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  MasterData_WarQuestSelectionMaster = **(void ***)(v8 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v13 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v13;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v13 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v17 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v11,
                                                        v12);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_SummonControl_closeShotPointDlg__,
      0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v13, v17, v18);
      return;
    }
LABEL_17:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  MasterData_WarQuestSelectionMaster = this->fields.fsm;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)MasterData_WarQuestSelectionMaster,
    (System_String_o *)StringLiteral_12276/*"SHOW_CONFIRM_DLG"*/,
    0LL);
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
  const MethodInfo *v16; // x5
  SummonConfirmDlgComponent_o *v17; // x20
  int32_t haveStone; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v21; // x22
  const MethodInfo *v22; // x3

  v3 = this;
  if ( (byte_4215FBA & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SummonControl_closeShotStoneDlg__, v4);
    this = (SummonControl_o *)sub_B0D8A4(&StringLiteral_12276/*"SHOW_CONFIRM_DLG"*/, v5);
    byte_4215FBA = 1;
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12276/*"SHOW_CONFIRM_DLG"*/, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = v3->fields.confirmDlgInfo;
      v15 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          method,
                                                          v2);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v3,
        Method_SummonControl_closeShotStoneDlg__,
        0LL);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v15,
          v16);
        return;
      }
LABEL_16:
      sub_B0D97C(this);
    }
    SummonControl__SetupFragmentsExchangeButton(v3, method);
    v17 = v3->fields.confirmDlgInfo;
    haveStone = v3->fields.haveStone;
    v21 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v19,
                                                        v20);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)v3,
      Method_SummonControl_closeShotStoneDlg__,
      0LL);
    if ( !v17 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v17, haveStone, v21, v22);
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
  __int64 v10; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t userId; // x20
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x21
  GachaReleaseMaster_o *v14; // x22
  const MethodInfo *v15; // x2
  struct GachaEntity_array *useGachaData; // x8
  __int64 v17; // x26
  int max_length; // w9
  GachaEntity_o *v19; // x24
  const MethodInfo *v20; // x3
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v25; // x25
  UserGachaEntity_o *UserGachaData; // x0
  int32_t gachaGroupId; // w1
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *vaildGachaList; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v31; // x21
  __int64 v32; // x0
  StoryGachaAdjustData_o *adjustData; // [xsp+8h] [xbp-58h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4215F95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_VaildGachaInfo___ctor__, method);
    sub_B0D8A4(&System_Comparison_VaildGachaInfo__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaReleaseMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v8);
    sub_B0D8A4(&Method_SummonControl_SlotCompare__, v9);
    this = (SummonControl_o *)sub_B0D8A4(&TutorialFlag_TypeInfo, v10);
    byte_4215F95 = 1;
  }
  entity = 0LL;
  adjustData = 0LL;
  userGameEntity = v2->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_39;
  userId = userGameEntity->fields.userId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserQuestMaster___);
  this = (SummonControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  if ( !v2->fields.vaildGachaList )
    goto LABEL_39;
  v14 = (GachaReleaseMaster_o *)this;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.vaildGachaList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  useGachaData = v2->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_39;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v17 >= max_length )
      break;
    if ( (unsigned int)v17 >= max_length )
    {
      v32 = sub_B0D9A8(this);
      sub_B0D948(v32, 0LL);
    }
    v19 = useGachaData->m_Items[v17];
    if ( !v19 || !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    this = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                userId,
                                v19->fields.condQuestId,
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
      if ( (int)this >= v19->fields.condQuestPhase )
      {
LABEL_19:
        if ( !v14 )
          goto LABEL_39;
        this = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v14, v19->fields.id, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = SummonControl__CheckStoryGachaAdjustData(this, &adjustData, v19->fields.id, v20);
          if ( !v21 )
            adjustData = 0LL;
          beforeGachaId = v19->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            this = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v21, beforeGachaId, v22);
            if ( !this )
              goto LABEL_38;
            v25 = this;
            this = (SummonControl_o *)SummonControl__getCurrentGachaData(v2, v19->fields.beforeGachaId, v15);
            if ( !this )
              goto LABEL_39;
            if ( SLODWORD(v25->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Width) < *((_DWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS
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
            UserGachaData = SummonControl__getUserGachaData(this, v19->fields.id, v15);
            if ( UserGachaData )
            {
              this = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(v2, UserGachaData, v19, v23);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_38;
            }
            else
            {
              gachaGroupId = v19->fields.gachaGroupId;
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
          SummonControl__AddVaildGachaInfoList(v2, v19, adjustData, v23);
        }
      }
    }
LABEL_38:
    useGachaData = v2->fields.useGachaData;
    ++v17;
    if ( !useGachaData )
      goto LABEL_39;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(this, &v2->fields.vaildGachaList, v15);
  vaildGachaList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v2->fields.vaildGachaList;
  v31 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                    System_Comparison_VaildGachaInfo__TypeInfo,
                                                                    v29,
                                                                    v30);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v31,
    (Il2CppObject *)v2,
    Method_SummonControl_SlotCompare__,
    (const MethodInfo_2412E90 *)Method_System_Comparison_VaildGachaInfo___ctor__);
  if ( !vaildGachaList )
LABEL_39:
    sub_B0D97C(this);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    vaildGachaList,
    (System_Comparison_T__o *)v31,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
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

  if ( (byte_4215FAD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215FAD = 1;
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
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_15;
    }
LABEL_34:
    sub_B0D97C(bannerLoopCtr);
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
      UnityEngine_Object__Destroy_34935276(v11, 0LL);
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
      UnityEngine_Object__Destroy_34935276(v13, 0LL);
      if ( --v12 < 0 )
        return;
    }
    goto LABEL_34;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4215FED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4215FED = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL)
    || (summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)summonResultInfo,
                                                        0LL)) == 0LL )
  {
    sub_B0D97C(summonResultInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v5, v6);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  AvalonSceneManager_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  SceneJumpInfo_o *v14; // x20

  if ( (byte_4215FB2 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v8);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v9);
    byte_4215FB2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
      v11 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v14 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v12, v13);
      SceneJumpInfo___ctor_16651652(v14, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 2, 0LL);
      if ( v11 )
      {
        AvalonSceneManager__transitionScene(v11, 22, 1, (Il2CppObject *)v14, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B0D97C(Instance);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0

  if ( (byte_4215FB9 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v4);
    byte_4215FB9 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  SummonConfirmDlgComponent__Close_27122708(confirmDlgInfo, 0LL, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_9:
    sub_B0D97C(confirmDlgInfo);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  __int64 *v8; // x8

  if ( (byte_4215FBB & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v5);
    sub_B0D8A4(&StringLiteral_6910/*"GO_BUY_STONE"*/, v6);
    byte_4215FBB = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_17;
  SummonConfirmDlgComponent__Close_27122708(confirmDlgInfo, 0LL, method);
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
      v8 = &StringLiteral_3060/*"CLICK_CANCEL"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_B0D97C(confirmDlgInfo);
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
  v8 = &StringLiteral_6910/*"GO_BUY_STONE"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v8, 0LL);
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
  AvalonSceneManager_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  SceneJumpInfo_o *v16; // x20
  int32_t v17; // w1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2

  if ( (byte_4215FB1 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12750/*"ServantEquipList"*/, v8);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v9);
    sub_B0D8A4(&StringLiteral_12749/*"ServantEQCombine"*/, v10);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v11);
    byte_4215FB1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
        v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v18, v19);
        SceneJumpInfo___ctor_16651652(v16, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 1, 0LL);
        if ( v13 )
        {
          v17 = 22;
          goto LABEL_25;
        }
      }
LABEL_31:
      sub_B0D97C(Instance);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
        v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v20, v21);
        SceneJumpInfo___ctor_16651556(v16, (System_String_o *)StringLiteral_12750/*"ServantEquipList"*/, 0LL);
        if ( v13 )
        {
          v17 = 71;
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
        v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v16 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v14, v15);
        SceneJumpInfo___ctor_16651556(v16, (System_String_o *)StringLiteral_12749/*"ServantEQCombine"*/, 0LL);
        if ( v13 )
        {
          v17 = 32;
LABEL_25:
          AvalonSceneManager__transitionScene(v13, v17, 1, (Il2CppObject *)v16, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
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
  WebViewManager_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  SceneJumpInfo_o *v15; // x20
  int32_t v16; // w1
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x3

  if ( (byte_4215FB0 & 1) == 0 )
  {
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_12706/*"SellServant"*/, v8);
    sub_B0D8A4(&StringLiteral_12746/*"ServantCombine"*/, v9);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v10);
    byte_4215FB0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
        v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v15 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v17, v18);
        SceneJumpInfo___ctor_16651652(v15, (System_String_o *)StringLiteral_12706/*"SellServant"*/, 0, 0LL);
        if ( v12 )
        {
          v16 = 22;
          goto LABEL_19;
        }
      }
LABEL_32:
      sub_B0D97C(Instance);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v16 = 71;
          v19 = 0LL;
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
        v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v15 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v13, v14);
        SceneJumpInfo___ctor_16651556(v15, (System_String_o *)StringLiteral_12746/*"ServantCombine"*/, 0LL);
        if ( v12 )
        {
          v16 = 32;
LABEL_19:
          Instance = (CommonUI_o *)v12;
          v19 = (Il2CppObject *)v15;
LABEL_26:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v16, 1, v19, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
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
  const MethodInfo *v15; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  struct GachaRqParamData_o *v19; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v28; // x24

  if ( (byte_4215FD3 & 1) == 0 )
  {
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SummonControl_BonusSelectSummonConfirmResult__, v9);
    sub_B0D8A4(&Method_SummonControl_SetDispBtn__, v10);
    sub_B0D8A4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v11);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v13);
    byte_4215FD3 = 1;
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
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v19 = this->fields.gachaParamData;
              if ( v19 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v19->fields.gachaId;
                v22 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v17,
                                                                          v18);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v22,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v25 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v23,
                                                                          v24);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v25,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v28 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B0D974(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v26,
                                                                                  v27);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v28,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v22, v25, v28, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B0D97C(cautionDlgInfo);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__loadAssetsForSummon(this, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4215FD2 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v5);
    byte_4215FD2 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close_27122708(confirmDlgInfo, 0LL, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(confirmDlgInfo);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__loadAssetsForSummon(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x27
  UnityEngine_Component_o *summonBannerScrollView; // x0
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  __int64 v60; // x1
  __int64 v61; // x2
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct UICenterOnChild_o *v69; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v72; // x22
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x8
  __int64 v81; // x1
  __int64 v82; // x2
  struct UIScrollView_o *v83; // x21
  BattleServantConfConponent_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v86; // x22
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  int32_t height; // w0
  float v97; // s0
  UnityEngine_Component_o *v98; // x20
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  struct UIWrapContent_o **p_summonMBannerLoopCtr; // x22
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  __int64 v110; // x1
  __int64 v111; // x2
  System_Int32_array **v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct UICenterOnChild_o *v119; // x21
  BattleServantConfConponent_o *v120; // x21
  System_Delegate_o *v121; // t1
  SpringPanel_OnFinished_o *v122; // x22
  System_Int32_array **v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  __int64 v130; // x1
  __int64 v131; // x2
  struct UIScrollView_o *summonMBannerScrollView; // x21
  BattleServantConfConponent_o *v133; // x21
  System_Delegate_o *v134; // t1
  UIScrollView_OnDragNotification_o *v135; // x22
  System_Int32_array **v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  int v143; // w23
  int v144; // w22
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v147; // x26
  UnityEngine_Transform_o *v148; // x20
  int v149; // s0
  UnityEngine_Transform_o *v152; // x21
  int v153; // s0
  int v156; // w27
  System_String_o *v157; // x0
  System_String_o *v158; // x0
  System_String_o *v159; // x0
  System_String_o *v160; // x0
  GachaBannerComponent_o *v161; // x28
  struct System_Collections_Generic_List_VaildGachaInfo__o *v162; // x20
  int v163; // w8
  int v164; // w9
  int32_t v165; // w25
  VaildGachaInfo_o *v166; // x8
  System_String_o *v167; // x0
  System_String_o *v168; // x21
  const MethodInfo *v169; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v170; // x20
  UnityEngine_Object_o *v171; // x22
  VaildGachaInfo_o *v172; // x24
  System_String_o *v173; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v175; // x0
  UnityEngine_GameObject_o *v176; // x28
  UnityEngine_Transform_o *v177; // x20
  int v178; // s0
  UnityEngine_Transform_o *v181; // x21
  int v182; // s0
  System_String_o *name; // x0
  SummonMiniBannerComponent_o *v186; // x26
  struct System_Collections_Generic_List_VaildGachaInfo__o *v187; // x20
  VaildGachaInfo_o *v188; // x8
  System_String_o *v189; // x0
  System_String_o *v190; // x21
  const MethodInfo *v191; // x2
  UnityEngine_Object_o *v192; // x28
  const MethodInfo *v193; // x2
  WebViewObject_o *Component_WebViewObject; // x22
  __int64 v195; // x1
  __int64 v196; // x2
  SummonMiniBannerComponent_CallbackFunc_o *v197; // x20
  bool v198; // cc
  struct UIGrid_o *sliderGrid; // x8
  float v200; // s8
  int v201; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v203; // x0
  UnityEngine_Transform_o *v204; // x20
  int v205; // s0
  const MethodInfo *v208; // x1
  __int64 v209; // x1
  __int64 v210; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v211; // x21
  __int64 currentIdx; // x22
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *v214; // x21
  SummonInfoControl_ClickDelegate_o *v215; // x22
  const MethodInfo *v216; // x2
  const MethodInfo *v217; // x1
  SummonControl_o *v218; // x0
  const MethodInfo *v219; // x1
  int v220; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_summonMBannerInfoList; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_bannerInfoList; // [xsp+28h] [xbp-78h]
  UnityEngine_Component_o **v223; // [xsp+30h] [xbp-70h]
  int size; // [xsp+3Ch] [xbp-64h]
  int32_t moveIdx; // [xsp+48h] [xbp-58h]
  int v226; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v227; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215F9B & 1) == 0 )
  {
    sub_B0D8A4(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SummonInfoControl_ClickDelegate_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIPanel___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&UIScrollView_OnDragNotification_TypeInfo, v19);
    sub_B0D8A4(&SpringPanel_OnFinished_TypeInfo, v20);
    sub_B0D8A4(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v21);
    sub_B0D8A4(&Method_SummonControl_OnCenterOnChildFinished__, v22);
    sub_B0D8A4(&Method_SummonControl_OnClickMiniBanner__, v23);
    sub_B0D8A4(&Method_SummonControl_OnDragStarted__, v24);
    sub_B0D8A4(&Method_SummonControl_exeSummon__, v25);
    sub_B0D8A4(&StringLiteral_19700/*"img_summon_"*/, v26);
    sub_B0D8A4(&StringLiteral_19702/*"img_summon_mini_236"*/, v27);
    sub_B0D8A4(&StringLiteral_19701/*"img_summon_mini_"*/, v28);
    sub_B0D8A4(&StringLiteral_1/*""*/, v29);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v30);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v31);
    byte_4215F9B = 1;
  }
  v226 = 0;
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaBannerComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v32;
  p_bannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.bannerInfoList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bannerInfoList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v41;
  p_summonMBannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.summonMBannerInfoList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.summonMBannerInfoList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
      v51 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)summonBannerScrollView,
                                     (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_bannerLoopCtr = (UnityEngine_Component_o *)v51;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.bannerLoopCtr, v51, v52, v53, v54, v55, v56, v57);
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
      v62 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     (UnityEngine_GameObject_o *)summonBannerScrollView,
                                     (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_centerChild = (struct UICenterOnChild_o *)v62;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.centerChild, v62, v63, v64, v65, v66, v67, v68);
    }
    v69 = *p_centerChild;
    if ( !v69 )
      goto LABEL_105;
    onFinished = (System_Delegate_o *)v69->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v69->fields.onFinished;
    v72 = (SpringPanel_OnFinished_o *)sub_B0D974(SpringPanel_OnFinished_TypeInfo, v60, v61);
    SpringPanel_OnFinished___ctor(v72, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
    v73 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v72, 0LL);
    v80 = v73;
    if ( v73 && *v73 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      goto LABEL_122;
    p_onFinished->klass = (BattleServantConfConponent_c *)v73;
    sub_B0D840(p_onFinished, v73, v74, v75, v76, v77, v78, v79);
    v83 = this->fields.summonBannerScrollView;
    if ( !v83 )
      goto LABEL_105;
    onDragFinished = (System_Delegate_o *)v83->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&v83->fields.onDragFinished;
    v86 = (UIScrollView_OnDragNotification_o *)sub_B0D974(UIScrollView_OnDragNotification_TypeInfo, v81, v82);
    UIScrollView_OnDragNotification___ctor(v86, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v87 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v86, 0LL);
    v80 = v87;
    if ( v87 )
    {
      if ( *v87 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_122;
    }
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v87;
    sub_B0D840(p_onDragFinished, v87, v88, v89, v90, v91, v92, v93);
    vaildGachaList = this->fields.vaildGachaList;
    if ( !vaildGachaList )
      goto LABEL_105;
    size = vaildGachaList->fields._size;
    width = UnityEngine_Screen__get_width(0LL);
    height = UnityEngine_Screen__get_height(0LL);
    v97 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
    v98 = *p_bannerLoopCtr;
    summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Mathf__FloorToInt(
                                                          (float)((float)(v97 / 1.7778) * 1024.0) + 4.0,
                                                          0LL);
    if ( !v98 )
      goto LABEL_105;
    LODWORD(v98[1].klass) = (_DWORD)summonBannerScrollView;
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
      v101 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      (UnityEngine_GameObject_o *)summonBannerScrollView,
                                      (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_summonMBannerLoopCtr = (struct UIWrapContent_o *)v101;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerLoopCtr,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
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
      v112 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      (UnityEngine_GameObject_o *)summonBannerScrollView,
                                      (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v112;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerCenterChild,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
    }
    v119 = *p_summonMBannerCenterChild;
    v223 = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
    if ( !v119 )
      goto LABEL_105;
    v121 = (System_Delegate_o *)v119->fields.onFinished;
    v120 = (BattleServantConfConponent_o *)&v119->fields.onFinished;
    v122 = (SpringPanel_OnFinished_o *)sub_B0D974(SpringPanel_OnFinished_TypeInfo, v110, v111);
    SpringPanel_OnFinished___ctor(
      v122,
      (Il2CppObject *)this,
      Method_SummonControl_OnCenterOnChildFinishedMBanner__,
      0LL);
    v123 = (System_Int32_array **)System_Delegate__Combine(v121, (System_Delegate_o *)v122, 0LL);
    v80 = v123;
    if ( v123 )
    {
      if ( *v123 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
        goto LABEL_122;
    }
    v120->klass = (BattleServantConfConponent_c *)v123;
    sub_B0D840(v120, v123, v124, v125, v126, v127, v128, v129);
    summonMBannerScrollView = this->fields.summonMBannerScrollView;
    if ( !summonMBannerScrollView )
      goto LABEL_105;
    v134 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragFinished;
    v133 = (BattleServantConfConponent_o *)&summonMBannerScrollView->fields.onDragFinished;
    v135 = (UIScrollView_OnDragNotification_o *)sub_B0D974(UIScrollView_OnDragNotification_TypeInfo, v130, v131);
    UIScrollView_OnDragNotification___ctor(v135, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v136 = (System_Int32_array **)System_Delegate__Combine(v134, (System_Delegate_o *)v135, 0LL);
    v80 = v136;
    if ( v136 && *v136 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
    {
LABEL_122:
      v218 = (SummonControl_o *)sub_B0DC70(v80);
      SummonControl__setPositionByWarId(v218, v219);
    }
    else
    {
      v143 = size;
      v133->klass = (BattleServantConfConponent_c *)v136;
      sub_B0D840(v133, v136, v137, v138, v139, v140, v141, v142);
      if ( 2 * size >= 1 )
      {
        v144 = 0;
        v220 = (size & 0x7FFFFFFF) - size;
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
          v147 = (UnityEngine_GameObject_o *)summonBannerScrollView;
          v148 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v149 = UnityEngine_Vector3__get_one(0LL);
          if ( !v148 )
            break;
          UnityEngine_Transform__set_localScale(v148, *(UnityEngine_Vector3_o *)&v149, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v147, 0LL);
          if ( !*p_bannerLoopCtr )
            break;
          v152 = (UnityEngine_Transform_o *)summonBannerScrollView;
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                *p_bannerLoopCtr,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          *(UnityEngine_Vector3_o *)&v153 = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)summonBannerScrollView,
                                              0LL);
          if ( !v152 )
            break;
          UnityEngine_Transform__set_localPosition(v152, *(UnityEngine_Vector3_o *)&v153, 0LL);
          v156 = v144 + 1;
          v226 = v144 + 1;
          v157 = System_Int32__ToString((int32_t)&v226, 0LL);
          v158 = System_String__Concat_43849904((System_String_o *)StringLiteral_960/*"0"*/, v157, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v147, v158, 0LL);
          if ( v226 >= 10 )
          {
            v159 = System_Int32__ToString((int32_t)&v226, 0LL);
            v160 = System_String__Concat_43849904((System_String_o *)StringLiteral_1013/*"1"*/, v159, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v147, v160, 0LL);
          }
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v147,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
          if ( !*p_bannerInfoList )
            break;
          v161 = (GachaBannerComponent_o *)summonBannerScrollView;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_bannerInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summonBannerScrollView,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
          v162 = this->fields.vaildGachaList;
          v163 = v220 + v144;
          v164 = v220 + v144 <= size - 1 ? 0 : v143;
          if ( !v162 )
            break;
          v165 = v163 - v164;
          if ( v162->fields._size <= (unsigned int)(v163 - v164) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          moveIdx = v144;
          v166 = v162->fields._items->m_Items[v165];
          if ( !v166 )
            break;
          v167 = System_Int32__ToString((int)v166 + 40, 0LL);
          v168 = System_String__Concat_43849904((System_String_o *)StringLiteral_19700/*"img_summon_"*/, v167, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)SummonControl__searchBannerImg(this, v168, v169);
          v170 = this->fields.vaildGachaList;
          if ( !v170 )
            break;
          v171 = (UnityEngine_Object_o *)summonBannerScrollView;
          if ( v170->fields._size <= (unsigned int)v165 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v172 = v170->fields._items->m_Items[v165];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v171, 0LL, 0LL);
          if ( !v161 )
            break;
          v173 = ((unsigned __int8)summonBannerScrollView & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v168;
          GachaBannerComponent__setBannerGachaInfo(
            v161,
            v172,
            v165,
            moveIdx,
            (UnityEngine_GameObject_o *)v171,
            v173,
            0LL);
          summonBannerScrollView = *v223;
          if ( !*v223 )
            break;
          summonMBannerPrefab = this->fields.summonMBannerPrefab;
          v175 = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                summonMBannerPrefab,
                                                                v175,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v176 = (UnityEngine_GameObject_o *)summonBannerScrollView;
          v177 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v178 = UnityEngine_Vector3__get_one(0LL);
          if ( !v177 )
            break;
          UnityEngine_Transform__set_localScale(v177, *(UnityEngine_Vector3_o *)&v178, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v176, 0LL);
          if ( !*v223 )
            break;
          v181 = (UnityEngine_Transform_o *)summonBannerScrollView;
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v223, 0LL);
          if ( !summonBannerScrollView )
            break;
          *(UnityEngine_Vector3_o *)&v182 = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)summonBannerScrollView,
                                              0LL);
          if ( !v181 )
            break;
          UnityEngine_Transform__set_localPosition(v181, *(UnityEngine_Vector3_o *)&v182, 0LL);
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v147, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v176, name, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v176,
                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
          if ( !*p_summonMBannerInfoList )
            break;
          v186 = (SummonMiniBannerComponent_o *)summonBannerScrollView;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_summonMBannerInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summonBannerScrollView,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
          v187 = this->fields.vaildGachaList;
          if ( !v187 )
            break;
          if ( v187->fields._size <= (unsigned int)v165 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v188 = v187->fields._items->m_Items[v165];
          if ( !v188 )
            break;
          v189 = System_Int32__ToString((int)v188 + 40, 0LL);
          v190 = System_String__Concat_43849904((System_String_o *)StringLiteral_19701/*"img_summon_mini_"*/, v189, 0LL);
          v192 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v190, v191);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v192, 0LL, 0LL) )
          {
            v190 = (System_String_o *)StringLiteral_19702/*"img_summon_mini_236"*/;
            v192 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                             this,
                                             (System_String_o *)StringLiteral_19702/*"img_summon_mini_236"*/,
                                             v193);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v192, 0LL, 0LL) )
              v190 = (System_String_o *)StringLiteral_1/*""*/;
          }
          summonBannerScrollView = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
          if ( !summonBannerScrollView )
            break;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      summonBannerScrollView,
                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          v197 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_B0D974(
                                                               SummonMiniBannerComponent_CallbackFunc_TypeInfo,
                                                               v195,
                                                               v196);
          SummonMiniBannerComponent_CallbackFunc___ctor(
            v197,
            (Il2CppObject *)this,
            Method_SummonControl_OnClickMiniBanner__,
            0LL);
          if ( !v186 )
            break;
          SummonMiniBannerComponent__SetBannerInfo(
            v186,
            v172,
            v165,
            moveIdx,
            (UnityEngine_GameObject_o *)v192,
            v190,
            v197,
            (UIPanel_o *)Component_WebViewObject,
            0LL);
          v144 = v156;
          v143 = size;
          v198 = v156 < 2 * size;
          p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
          if ( !v198 )
            goto LABEL_97;
        }
LABEL_105:
        sub_B0D97C(summonBannerScrollView);
      }
LABEL_97:
      sliderGrid = this->fields.sliderGrid;
      if ( !sliderGrid )
        goto LABEL_105;
      sliderGrid->fields.cellHeight = fminf(640.0 / (float)v143, 25.0);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v200 = *(float *)&summonBannerScrollView[1].fields.m_CachedPtr;
      if ( v143 >= 1 )
      {
        v201 = 0;
        do
        {
          slideIndexPrefab = this->fields.slideIndexPrefab;
          v203 = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                slideIndexPrefab,
                                                                v203,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v204 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v205 = UnityEngine_Vector3__get_one(0LL);
          if ( !v204 )
            break;
          UnityEngine_Transform__set_localScale(v204, *(UnityEngine_Vector3_o *)&v205, 0LL);
          if ( ++v201 >= v143 )
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
      summonBannerScrollView = *v223;
      if ( !*v223 )
        goto LABEL_105;
      UIWrapContent__SortAlphabetically((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v223;
      if ( !*v223 )
        goto LABEL_105;
      UIWrapContent__resetScroll((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v223;
      if ( !*v223 )
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
      v227.fields.z = this->fields.center.fields.z;
      v227.fields.y = this->fields.center.fields.y;
      v227.fields.x = -(float)((float)(v200 * 0.5) * (float)(v143 - 1));
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerScrollView, v227, 0LL);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      UIGrid__set_repositionNow((UIGrid_o *)summonBannerScrollView, 1, 0LL);
      SummonControl__UpdateSummonInfoControlLayout(this, v208);
      v211 = this->fields.vaildGachaList;
      if ( !v211 )
        goto LABEL_105;
      currentIdx = this->fields.currentIdx;
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( v211->fields._size <= (unsigned int)currentIdx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v214 = v211->fields._items->m_Items[currentIdx];
      v215 = (SummonInfoControl_ClickDelegate_o *)sub_B0D974(SummonInfoControl_ClickDelegate_TypeInfo, v209, v210);
      SummonInfoControl_ClickDelegate___ctor(v215, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
      if ( !summonInfoCtr )
        goto LABEL_105;
      SummonInfoControl__SetSummonInfo(summonInfoCtr, v214, v215, 0LL);
      SummonControl__setSliderIcon(this, this->fields.currentIdx, v216);
      SummonControl__setResourceInfo(this, v217);
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

  if ( (byte_4215FF8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215FF8 = 1;
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
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
      if ( --v5 < 0 )
        goto LABEL_13;
    }
LABEL_34:
    sub_B0D97C(bannerLoopCtr);
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
      UnityEngine_Object__DestroyImmediate_34935488(v9, 0LL);
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
      UnityEngine_Object__DestroyImmediate_34935488(v11, 0LL);
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

  if ( (byte_4215FBD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B0D8A4(&StringLiteral_10574/*"PURCHASE_ERROR"*/, v5);
    sub_B0D8A4(&StringLiteral_10573/*"PURCHASE_CANCEL"*/, v6);
    sub_B0D8A4(&StringLiteral_10575/*"PURCHASE_OK"*/, v7);
    byte_4215FBD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B0D97C(Instance);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v9 = &StringLiteral_10573/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v9 = &StringLiteral_10574/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v9 = &StringLiteral_10575/*"PURCHASE_OK"*/;
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

  if ( (byte_4215FB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B0D8A4(&StringLiteral_10574/*"PURCHASE_ERROR"*/, v5);
    sub_B0D8A4(&StringLiteral_10573/*"PURCHASE_CANCEL"*/, v6);
    sub_B0D8A4(&StringLiteral_10575/*"PURCHASE_OK"*/, v7);
    byte_4215FB6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10573/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10574/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_B0D97C(Instance);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10575/*"PURCHASE_OK"*/;
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

  if ( (byte_4215FB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B0D8A4(&StringLiteral_10574/*"PURCHASE_ERROR"*/, v5);
    sub_B0D8A4(&StringLiteral_10573/*"PURCHASE_CANCEL"*/, v6);
    sub_B0D8A4(&StringLiteral_10575/*"PURCHASE_OK"*/, v7);
    byte_4215FB4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10573/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10574/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_B0D97C(Instance);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v9 = &StringLiteral_10575/*"PURCHASE_OK"*/;
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
  WebViewManager_o *Instance; // x0
  float y; // s8
  float v9; // s13
  CommonUI_o *v10; // x20
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s11
  SummonControl___c_c *v17; // x0
  float m_Height; // s12
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__149_0; // x21
  Il2CppObject *v21; // x22
  struct SummonControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x20
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o TUTORIAL_FORMATION_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v34; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4215F8D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl__exeFormation_b__149_1__, v4);
    sub_B0D8A4(&Method_SummonControl___c__exeFormation_b__149_0__, v5);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v6);
    byte_4215F8D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v9 = *((float *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v10 = (CommonUI_o *)Instance;
  TUTORIAL_FORMATION_ARROW_RECT_FS = SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(this, v11);
  m_XMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Width;
  v17 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v17 = SummonControl___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__149_0 = static_fields->__9__149_0;
  if ( !_9__149_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__149_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
    System_Action___ctor(_9__149_0, v21, Method_SummonControl___c__exeFormation_b__149_0__, 0LL);
    v22 = SummonControl___c_TypeInfo->static_fields;
    v22->__9__149_0 = _9__149_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v22->__9__149_0,
      (System_Int32_array **)_9__149_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v10 )
    sub_B0D97C(v17);
  v34.fields.m_XMin = m_XMin;
  v32.fields.y = v9 + 33.0;
  v32.fields.x = y;
  v34.fields.m_YMin = m_YMin;
  v34.fields.m_Width = m_Width;
  v34.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v10, v32, 0.0, v34, _9__149_0, 0LL);
  v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v31, 0LL);
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
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_4215FAE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2991/*"CHECK_SERVANT_FRAME"*/, paramData);
    byte_4215FAE = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_B0D840(
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
      sub_B0D97C(closeBtn);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_2991/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  CombineResultEffectComponent_ClickDelegate_o *v10; // x22
  __int64 v11; // x0

  if ( (byte_4215FF3 & 1) == 0 )
  {
    sub_B0D8A4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl__executeEnhanceTresureDevice_b__270_0__, v4);
    byte_4215FF3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v7 = (CommonUI_o *)Instance;
  v10 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B0D974(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v8,
                                                          v9);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__270_0__,
    0LL);
  if ( !v7 )
    sub_B0D97C(v11);
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
  struct SummonInfoControl_o *summonInfoCtr; // x8
  _BOOL4 isFree; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w25
  int32_t friendPoint; // w20
  SummonConfirmDlgComponent_o *v18; // x22
  int32_t needPoint; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x24
  const MethodInfo *v24; // x6

  v3 = this;
  if ( (byte_4215FCE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_SummonControl_autoSellSettingChange2__, v5);
    this = (SummonControl_o *)sub_B0D8A4(&Method_SummonControl_friendSummonConfirmResult__, v6);
    byte_4215FCE = 1;
  }
  summonInfoCtr = v3->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  isFree = summonInfoCtr->fields.isFree;
  v3->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v3->fields.confirmDlgInfo;
    v10 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)v3,
      Method_SummonControl_friendSummonConfirmResult__,
      0LL);
    v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)v3, Method_SummonControl_autoSellSettingChange2__, 0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v10, v13, v14);
      return;
    }
LABEL_10:
    sub_B0D97C(this);
  }
  gachaParamData = v3->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_10;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  friendPoint = v3->fields.friendPoint;
  v18 = v3->fields.confirmDlgInfo;
  needPoint = v3->fields.needPoint;
  v20 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                      SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                      method,
                                                      v2);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)v3,
    Method_SummonControl_friendSummonConfirmResult__,
    0LL);
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)v3, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v18 )
    goto LABEL_10;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v18,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v20,
    v23,
    v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4215FCF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v5);
    byte_4215FCF = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close_27122708(confirmDlgInfo, 0LL, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(confirmDlgInfo);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__friendPointQpManaCheck(this, v7);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  struct GachaMaster_o *gachaMst; // x0

  if ( (byte_4215F98 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId);
    byte_4215F98 = 1;
  }
  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_B0D97C(0LL);
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gachaMst,
                            gachaId,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x21
  __int64 v5; // x20
  int size; // w8
  VaildGachaInfo_o *v7; // x8

  v2 = this;
  if ( (byte_4215FF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method);
    this = (SummonControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    byte_4215FF6 = 1;
  }
  vaildGachaList = v2->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_11:
    sub_B0D97C(this);
  v5 = 0LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v7 = vaildGachaList->fields._items->m_Items[v5];
    if ( v7 )
    {
      if ( v7->fields.type == 3 )
        return v5;
      vaildGachaList = v2->fields.vaildGachaList;
      ++v5;
      if ( vaildGachaList )
        continue;
    }
    goto LABEL_11;
  }
  LODWORD(v5) = 0;
  return v5;
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
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215F97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215F97 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B0D97C(Instance);
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
  __int64 v3; // x1
  ShopEntity_o *result; // x0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  BattleServantConfConponent_o *p_stoneFragmentsShopEntity; // x19
  System_Int32_array **EntityOfFragmentsShop; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4215F88 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4215F88 = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    p_stoneFragmentsShopEntity = (BattleServantConfConponent_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = (System_Int32_array **)ShopMaster__GetEntityOfFragmentsShop(
                                                     Master_WarQuestSelectionMaster,
                                                     0LL);
    p_stoneFragmentsShopEntity->klass = (BattleServantConfConponent_c *)EntityOfFragmentsShop;
    sub_B0D840(p_stoneFragmentsShopEntity, EntityOfFragmentsShop, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4215F87 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_4215F87 = 1;
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
  __int64 v5; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  ServantFlagReleaseMaster_o *v8; // x21
  __int64 v9; // x24
  struct GachaInfos_array *v10; // x8
  GachaInfos_o *v11; // x8
  int32_t objectId; // w22
  bool result; // w0
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4215FEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId);
    this = (SummonControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215FEF = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(this);
  }
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length < 1 )
  {
LABEL_13:
    objectId = 0;
    result = 0;
  }
  else
  {
    v8 = (ServantFlagReleaseMaster_o *)this;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = v4->fields.gachaResInfoList;
      if ( !v10 )
        goto LABEL_16;
      if ( (unsigned int)v9 >= v10->max_length )
      {
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
      v11 = v10->m_Items[v9];
      if ( !v11 || !v8 )
        goto LABEL_16;
      objectId = v11->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v8, objectId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( (int)++v9 >= max_length )
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
    sub_B0D97C(this);
  max_length = gachaResInfoList->max_length;
  v6 = 0LL;
  m_Items = gachaResInfoList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x20
  __int64 v8; // x22
  struct GachaInfos_array *v9; // x8
  GachaInfos_o *v10; // x24
  __int64 v12; // x0

  v2 = this;
  if ( (byte_4215FE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    this = (SummonControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4215FE3 = 1;
  }
  gachaResInfoList = v2->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(this);
  }
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length < 1 )
    return 0;
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = v2->fields.gachaResInfoList;
    if ( !v9 )
      goto LABEL_17;
    if ( (unsigned int)v8 >= v9->max_length )
    {
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
    v10 = v9->m_Items[v8];
    if ( !v10 || !v7 )
      goto LABEL_17;
    this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v7,
                                v10->fields.objectId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this )
    {
      this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && v10->fields.isNew )
        return 1;
    }
    if ( (int)++v8 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_4215FFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v5);
    byte_4215FFF = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_B0D97C(limitWarningDlgInfo);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
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

  if ( (byte_4215FFE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&res);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v5);
    sub_B0D8A4(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonControl_limitManaConfirmResult__, v8);
    sub_B0D8A4(&Method_SummonControl_showConfirmDlg__, v9);
    sub_B0D8A4(&StringLiteral_3060/*"CLICK_CANCEL"*/, v10);
    byte_4215FFE = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_22;
  SummonLimitWarningDlgComponent__Close((SummonLimitWarningDlgComponent_o *)limitWarningDlgInfo, 0LL);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, v12) )
      {
        limitWarningDlgInfo = UserGameMaster__getSelfUserGame(0LL);
        if ( !limitWarningDlgInfo )
          goto LABEL_22;
        v13 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 60), 0LL) )
          goto LABEL_19;
        v16 = v13[44];
        v17 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        if ( v16 >= v17->static_fields->UserItemMax )
        {
          v19 = this->fields.limitWarningDlgInfo;
          v20 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                   SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                                   v14,
                                                                   v15);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
          System_Action___ctor(v23, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v19 )
            goto LABEL_22;
          SummonLimitWarningDlgComponent__OpenManaWarning(v19, v20, v23, 0LL);
        }
        else
        {
LABEL_19:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v18);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_22:
      sub_B0D97C(limitWarningDlgInfo);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3060/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SummonRootComponent_o *basePanel; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x9
  SummonControl_o *v12; // x0
  bool v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_4215FD6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl__loadAssetsForSummon_b__233_0__, v4);
    sub_B0D8A4(&SummonRootComponent_TypeInfo, v5);
    byte_4215FD6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = (SummonRootComponent_o *)Instance->fields.basePanel,
        v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__233_0__, 0LL),
        !basePanel) )
  {
    sub_B0D97C(Instance);
  }
  v11 = *(&SummonRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (SummonRootComponent_c *)basePanel->klass->_2.typeHierarchy[v11 - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(basePanel, v10, 0LL);
  }
  else
  {
    v12 = (SummonControl_o *)sub_B0DC70(basePanel);
    SummonControl__friendSummonConfirmResult(v12, v13, v14);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v7; // w8
  int32_t v8; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4215FA5 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12837/*"SetBannerCenter"*/, v3);
    byte_4215FA5 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12837/*"SetBannerCenter"*/,
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
    v7 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v8 = currentMoveIdx + 1 < v7 ? currentMoveIdx + 1 : 0;
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
                                                      v8,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_B0D97C(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_35227608(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w8
  int v6; // w8
  int32_t v7; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_4215FA6 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12837/*"SetBannerCenter"*/, v3);
    byte_4215FA6 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12837/*"SetBannerCenter"*/,
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
    v6 = childCount - 1;
    v7 = this->fields.currentMoveIdx - 1 < 0 ? v6 : this->fields.currentMoveIdx - 1;
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
      || (UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_B0D97C(leftArrowBtn);
    }
    UICenterOnChild__CenterOn_35227608(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
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
  CommonUI_o *Instance; // x20
  System_String_o *v10; // x21
  const MethodInfo *v11; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  SummonControl___c_c *v19; // x0
  float m_Height; // s13
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__148_0; // x22
  Il2CppObject *v23; // x23
  struct SummonControl___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4215F8C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl__openAfterSummonInfo_b__148_1__, v5);
    sub_B0D8A4(&Method_SummonControl___c__openAfterSummonInfo_b__148_0__, v6);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_13563/*"TUTORIAL_MESSAGE_SUMMON2"*/, v8);
    byte_4215F8C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13563/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v11);
  TUTORIAL_MENU_ARROW_RECT_FS = SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(this, v13);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v19 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v19 = SummonControl___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__148_0 = static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(_9__148_0, v23, Method_SummonControl___c__openAfterSummonInfo_b__148_0__, 0LL);
    v24 = SummonControl___c_TypeInfo->static_fields;
    v24->__9__148_0 = _9__148_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v24->__9__148_0,
      (System_Int32_array **)_9__148_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !Instance )
    sub_B0D97C(v19);
  v35.fields.m_XMin = m_XMin;
  v35.fields.m_YMin = m_YMin;
  v35.fields.m_Width = m_Width;
  v35.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v10,
    TUTORIAL_MENU_ARROW_POS_FS,
    v35,
    0.0,
    0LL,
    -1,
    _9__148_0,
    0LL);
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v33, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_4215F8B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3054/*"CLEAR_TUTORIAL"*/, method);
    byte_4215F8B = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3054/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_B0D97C(tutorialArrowObj);
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
  __int64 v17; // x1
  __int64 v18; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *GachaFlg; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v27; // x0
  System_Int32_array **EventTutorialEntity; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v38; // x22
  __int64 v39; // x21
  int size; // w8
  TitleInfoControl_EventEndTimeInfo_o *v41; // x8
  __int64 v42; // x21
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v53; // x21
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__150_1; // x22
  Il2CppObject *v56; // x23
  struct SummonControl___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_List_EventTutorialEntity__o *v64; // x22
  int32_t v65; // w21
  EventTutorialEntity_o *v66; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v67; // x22
  TitleInfoControl_EventEndTimeInfo_o *v68; // x8
  int32_t event_id; // w22
  System_Action_o *v70; // x20
  __int64 v71; // x0

  if ( (byte_4215F8E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Comparison_EventTutorialEntity___ctor__, v4);
    sub_B0D8A4(&System_Comparison_EventTutorialEntity__TypeInfo, v5);
    sub_B0D8A4(&EventTutorialEntity_TypeInfo, v6);
    sub_B0D8A4(&int___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v12);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v13);
    sub_B0D8A4(&Method_SummonControl___c__openSvtEqInfo_b__150_1__, v14);
    sub_B0D8A4(&Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, v15);
    sub_B0D8A4(&SummonControl___c__DisplayClass150_0_TypeInfo, v16);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v17);
    byte_4215F8E = 1;
  }
  v18 = sub_B0D974(SummonControl___c__DisplayClass150_0_TypeInfo, method, v2);
  SummonControl___c__DisplayClass150_0___ctor((SummonControl___c__DisplayClass150_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_47;
  *(_QWORD *)(v18 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_47;
  v27 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Int32_array **)EventTutorialMaster__GetEventTutorialEntity(0, 34, v27, 0LL);
  *(_QWORD *)(v18 + 16) = EventTutorialEntity;
  v29 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v18 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), EventTutorialEntity, v30, v31, v32, v33, v34, v35);
  v38 = *(System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v18 + 16);
  if ( !v38 )
    goto LABEL_47;
  v39 = 0LL;
  while ( 1 )
  {
    size = v38->fields._size;
    if ( (int)v39 >= size )
      break;
    if ( size <= (unsigned int)v39 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v41 = v38->fields._items->m_Items[v39];
    if ( v41 )
    {
      if ( v41->fields.event_id == 1 )
        goto LABEL_28;
      v38 = *v29;
      ++v39;
      if ( *v29 )
        continue;
    }
    goto LABEL_47;
  }
  v42 = sub_B0D974(EventTutorialEntity_TypeInfo, v36, v37);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v42, 0LL);
  if ( !v42 )
    goto LABEL_47;
  *(_DWORD *)(v42 + 16) = 1;
  v43 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 1LL);
  *(_QWORD *)(v42 + 64) = v43;
  sub_B0D840((BattleServantConfConponent_o *)(v42 + 64), v43, v44, v45, v46, v47, v48, v49);
  v50 = *(_QWORD *)(v42 + 64);
  if ( !v50 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v50 + 24) )
  {
    v71 = sub_B0D9A8(GachaFlg);
    sub_B0D948(v71, 0LL);
  }
  *(_DWORD *)(v50 + 32) = 1;
  GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*v29;
  if ( !*v29 )
    goto LABEL_47;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    GachaFlg,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v53 = *v29;
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
    v56 = (Il2CppObject *)static_fields->__9;
    _9__150_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_EventTutorialEntity__TypeInfo,
                                                                            v51,
                                                                            v52);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__150_1,
      v56,
      Method_SummonControl___c__openSvtEqInfo_b__150_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventTutorialEntity___ctor__);
    v57 = SummonControl___c_TypeInfo->static_fields;
    v57->__9__150_1 = (struct System_Comparison_EventTutorialEntity__o *)_9__150_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v57->__9__150_1,
      (System_Int32_array **)_9__150_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v53 )
    goto LABEL_47;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v53,
    (System_Comparison_T__o *)_9__150_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v64 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v29;
  if ( !*v29 )
LABEL_47:
    sub_B0D97C(GachaFlg);
  v65 = v64->fields._size - 1;
  if ( v65 >= 0 )
  {
    while ( v64 )
    {
      if ( v64->fields._size <= (unsigned int)v65 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v66 = v64->fields._items->m_Items[v65];
      if ( !v66 )
        break;
      if ( v66->fields.num != 1 )
      {
        v67 = *v29;
        if ( !*v29 )
          goto LABEL_47;
        if ( v67->fields._size <= (unsigned int)v65 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v68 = v67->fields._items->m_Items[v65];
        if ( !v68 )
          goto LABEL_47;
        event_id = v68->fields.event_id;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)TutorialFlag__GetGachaFlg(event_id, 0LL);
        if ( ((unsigned __int8)GachaFlg & 1) != 0 )
        {
          GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*v29;
          if ( !*v29 )
            goto LABEL_47;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)GachaFlg,
            v65,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v64 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v29;
      if ( --v65 < 0 )
        goto LABEL_46;
    }
    goto LABEL_47;
  }
LABEL_46:
  v70 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
  System_Action___ctor(v70, (Il2CppObject *)v18, Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(v64, v70, 0LL);
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
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4215FDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SummonControl_callbackTutorialSet__, v7);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v8);
    byte_4215FDA = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v9,
                                                                  (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 101, 0LL);
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_WarBoardWallAttackRequest )
      {
        AdManager__TrackEvent((AdManager_o *)Request_WarBoardWallAttackRequest, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/,
    0LL);
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
        sub_B0D97C(summonInfoCtr);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x0
  int32_t VaildPayType; // w0
  const MethodInfo *v17; // x1
  int32_t v18; // w20
  TerminalPramsManager_c *v19; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_4215F92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4215F92 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_22;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  this->fields.gachaSubEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.gachaSubEntity, 0LL, v7, v8, v9, v10, v11, v12);
  SummonControl__clearBannerList(this, v13);
  SummonControl__clearResultList(this, v14);
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
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_22:
    sub_B0D97C(summonBannerInfo);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v18 = VaildPayType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210875 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v17);
    byte_4210875 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int size; // w8
  __int64 currentIdx; // x21
  VaildGachaInfo_o *v10; // x8
  int32_t emptyMessage; // w21
  int v12; // w22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  SummonControl_o *v18; // x0
  int32_t FriendPointIndex; // w0
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v21; // x20
  __int64 v22; // x21
  VaildGachaInfo_o *v23; // x8
  WarEntity_o *Entity; // x0

  v2 = this;
  if ( (byte_4215FF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5);
    this = (SummonControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215FF5 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v10 = vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !v10 )
LABEL_29:
    sub_B0D97C(this);
  if ( v10->fields.type != 3 )
  {
    v21 = v2->fields.vaildGachaList;
    if ( v21 )
    {
      v22 = v2->fields.currentIdx;
      if ( v21->fields._size <= (unsigned int)v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v23 = v21->fields._items->m_Items[v22];
      if ( v23 )
      {
        LODWORD(vaildGachaList) = v23->fields.id;
        this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( this )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                       (int32_t)vaildGachaList,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Entity )
            {
              emptyMessage = (int32_t)Entity->fields.emptyMessage;
              goto LABEL_12;
            }
LABEL_11:
            emptyMessage = 0;
LABEL_12:
            v12 = 0;
            goto LABEL_13;
          }
        }
      }
    }
    goto LABEL_29;
  }
  LODWORD(vaildGachaList) = 0;
  emptyMessage = 0;
  v12 = 1;
LABEL_13:
  if ( !SummonControl__resetSummonVaildData(v2, method) || SummonControl__checkMaxDrawNum(v2, v13) )
  {
    SummonControl__deleteBannerList(v2, v13);
    SummonControl__checkValidGachaList(v2, v14);
    SummonControl__createSummonInfo(v2, v15);
    v18 = v2;
    if ( !v12 )
    {
      FriendPointIndex = SummonControl__searchExtraGroupIdIndex(v2, emptyMessage, (int32_t)vaildGachaList, v17);
      if ( FriendPointIndex != -1 )
      {
LABEL_19:
        SummonControl__setDispRePosition(v2, FriendPointIndex, v20);
        return;
      }
      v18 = v2;
    }
    FriendPointIndex = SummonControl__getFriendPointIndex(v18, v16);
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

  if ( (byte_4215F91 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_4215F91 = 1;
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
    sub_B0D840(p_bannerAssetData, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v10; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t ticketItemId; // w24
  int32_t gachaTime; // w21
  int32_t warId; // w23
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  Il2CppObject *p_obj; // x28
  GachaDrawRequest_o *v23; // x19
  System_String_o *selectBonusListData; // x27
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  int32_t v27; // w21
  System_String_o *v28; // x0
  __int64 v29; // x0
  int32_t v30; // [xsp+14h] [xbp-5Ch]
  int32_t v31; // [xsp+18h] [xbp-58h]
  int32_t shopIdIdx; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4215FD7 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_GachaDrawRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B0D8A4(&Method_SummonControl_callbackGachaDraw__, v8);
    sub_B0D8A4(&StringLiteral_132/*" : "*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4215FD7 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
  NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                             v14,
                                             (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
  v23 = (GachaDrawRequest_o *)maskObject;
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  if ( storyAdjustIds )
  {
    v25 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v25 )
    {
      if ( (int)v25 >= 1 )
      {
        v30 = warId;
        v31 = gachaTime;
        v26 = 0LL;
        v27 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v26 >= (unsigned int)v25 )
          {
            v29 = sub_B0D9A8(maskObject);
            sub_B0D948(v29, 0LL);
          }
          v28 = System_Int32__ToString(v27, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_43852188(
                                                     selectBonusListData,
                                                     v28,
                                                     (System_String_o *)StringLiteral_132/*" : "*/,
                                                     0LL);
          LODWORD(v25) = storyAdjustIds->max_length;
          ++v26;
          selectBonusListData = (System_String_o *)maskObject;
          v27 += 4;
        }
        while ( (__int64)v26 < (int)v25 );
        selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
        warId = v30;
        gachaTime = v31;
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v23) )
LABEL_28:
    sub_B0D97C(maskObject);
  GachaDrawRequest__beginRequest(
    v23,
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
  __int64 v11; // x1
  MissionNotifyManager_o *maskBgObject; // x0
  System_String_o *MainBgmName; // x20
  CommonUI_o *v14; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4215FF4 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&BgmManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    byte_4215FF4 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  maskBgObject = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  maskBgObject = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (CommonUI_o *)maskBgObject;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v14 )
    goto LABEL_33;
  CommonUI__maskFadein(v14, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)maskBgObject, this->fields.fsm, 1, 0LL, 36, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_17439696((TitleInfoControl_o *)maskBgObject, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v15);
  SummonControl__setUserResourceDisp(this, v16);
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
    SummonControl__progTutorial(this, v17);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskBgObject, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v18);
  }
  maskBgObject = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !maskBgObject )
LABEL_33:
    sub_B0D97C(maskBgObject);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)maskBgObject,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B0D97C(0LL);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v20.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v19);
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
  sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4215FEE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl__resetResultList_b__265_0__, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    byte_4215FEE = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_15;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__265_0__, 0LL);
  if ( !v10 )
LABEL_15:
    sub_B0D97C(Instance);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  SummonControl__setUserResourceDisp(this, method);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B0D97C(0LL);
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
          v17 = sub_B0D9A8(gachaMst);
          sub_B0D948(v17, 0LL);
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
      sub_B0D97C(gachaMst);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (BattleServantConfConponent_c *)v11;
    sub_B0D840(p_useGachaData, (System_Int32_array **)v11, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  __int64 v15; // x0

  if ( (byte_4215F9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObjectList_GameObject___, searchTarget);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4215F9C = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_18;
  bannerAssetData = AssetData__GetObjectList_Texture2D_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_1700F84 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_18;
  v8 = *((_DWORD *)bannerAssetData + 6);
  v9 = bannerAssetData;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v15 = sub_B0D9A8(bannerAssetData);
        sub_B0D948(v15, 0LL);
      }
      v11 = (char *)&v9[2 * v10];
      v12 = (UnityEngine_GameObject_o *)*((_QWORD *)v11 + 4);
      if ( !v12 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          *((UnityEngine_GameObject_o **)v11 + 4),
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
          return v12;
      }
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        return 0LL;
    }
LABEL_18:
    sub_B0D97C(bannerAssetData);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x23
  int32_t v12; // w22
  __int64 v13; // x24
  int size; // w8
  unsigned int v15; // w28
  __int64 v16; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v17; // x23
  __int64 v18; // x8
  int32_t v19; // w23
  float m_YMin; // w8
  intptr_t m_CachedPtr; // w8

  v6 = this;
  if ( (byte_4215FF7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, *(_QWORD *)&extraGroupId);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9);
    this = (SummonControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4215FF7 = 1;
  }
  vaildGachaList = v6->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_22:
    sub_B0D97C(this);
  v12 = 0;
  v13 = 4LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    v15 = v13 - 4;
    if ( (int)v13 - 4 >= size )
      return -1;
    if ( size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v16 = *((_QWORD *)&vaildGachaList->fields._items->obj.klass + v13);
    if ( !v16 )
      goto LABEL_22;
    if ( *(_DWORD *)(v16 + 52) == 3 )
      return -1;
    v17 = v6->fields.vaildGachaList;
    if ( !v17 )
      goto LABEL_22;
    if ( v17->fields._size <= v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v18 = *((_QWORD *)&v17->fields._items->obj.klass + v13);
    if ( !v18 )
      goto LABEL_22;
    v19 = *(_DWORD *)(v18 + 16);
    this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_22;
    this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)this,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !this )
      goto LABEL_22;
    this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v19,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    if ( !this )
      return -1;
    m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
    if ( m_YMin != 0.0 && LODWORD(m_YMin) == extraGroupId )
      return v13 - 4;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( m_CachedPtr && m_CachedPtr == gachaId )
      return v12;
    vaildGachaList = v6->fields.vaildGachaList;
    ++v12;
    ++v13;
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
    sub_B0D97C(indexPanel);
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
    v19 = sub_B0D9A8(indexPanel);
    sub_B0D948(v19, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct VaildGachaInfo_o *v16; // x1
  const MethodInfo *v17; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  SummonInfoControl_ClickDelegate_o *v22; // x22
  SummonInfoControl_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x21

  if ( (byte_4215FA7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SummonInfoControl_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    sub_B0D8A4(&Method_SummonControl__setChangeSummonInfo_b__180_0__, v5);
    sub_B0D8A4(&Method_SummonControl_exeSummon__, v6);
    byte_4215FA7 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v16 = vaildGachaList->fields._items->m_Items[currentIdx];
  this->fields.currentGachaInfo = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentGachaInfo,
    (System_Int32_array **)v16,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SummonControl__setResourceInfo(this, v17);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v22 = (SummonInfoControl_ClickDelegate_o *)sub_B0D974(SummonInfoControl_ClickDelegate_TypeInfo, v20, v21);
  SummonInfoControl_ClickDelegate___ctor(v22, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v22, 0LL),
        v23 = this->fields.summonInfoCtr,
        v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25),
        System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__180_0__, 0LL),
        !v23) )
  {
LABEL_10:
    sub_B0D97C(maskObject);
  }
  SummonInfoControl__SetAlphaSummonBtn(v23, v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  SummonControl_o *v4; // x19
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4215FAC & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B0D8A4(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                *(_QWORD *)&currentIdx);
    byte_4215FAC = 1;
  }
  if ( !v4->fields.vaildGachaList
    || (this = (SummonControl_o *)v4->fields.bannerLoopCtr, v4->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_B0D97C(this);
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
    sub_B0D97C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B0D97C(0LL);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  __int64 GachaIdFromSelectedBannerEntity; // x0
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x23
  int size; // w21
  unsigned int v8; // w22
  GachaBannerComponent_o *v9; // x8
  struct VaildGachaInfo_o *info; // x9
  SummonControl_o *v11; // x0
  int32_t bannerIdx; // w1

  v2 = this;
  if ( (byte_4215FAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method);
    this = (SummonControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v3);
    byte_4215FAA = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v9 = bannerInfoList->fields._items->m_Items[v8];
        if ( !v9 )
LABEL_16:
          sub_B0D97C(GachaIdFromSelectedBannerEntity);
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  System_Int32_array **v13; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v16; // x25
  UIWidget_o *v17; // x23
  UIWidget_o *v18; // x24
  UIWidget_o *v19; // x21
  UIWidget_o *v20; // x22
  WebViewObject_o *Component_WebViewObject; // x20
  int v22; // s3
  float v23; // s4
  float v24; // s5
  float v25; // s6
  SummonControl_c *v26; // x8
  float COLOR_VAL; // s0
  float v28; // s1
  float v29; // s2
  int v30; // s0
  int v34; // s0
  int v38; // s0
  int v42; // s0
  int v46; // s0
  int v50; // s0
  MethodInfo v54; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  v8 = this;
  if ( (byte_4215FA8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9);
    this = (SummonControl_o *)sub_B0D8A4(&SummonControl_TypeInfo, v10);
    byte_4215FA8 = 1;
  }
  v54.methodPointer = 0LL;
  v54.invoker_method = 0LL;
  vaildGachaList = v8->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_37;
  currentIdx = v8->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v13 = (System_Int32_array **)vaildGachaList->fields._items->m_Items[currentIdx];
  v8->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)&v8->fields.currentGachaInfo, v13, v2, v3, v4, v5, v6, v7);
  currentGachaInfo = v8->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  this = (SummonControl_o *)v8->fields.stoneNumInfo;
  if ( !this )
    goto LABEL_37;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentStoneNumLb )
    goto LABEL_37;
  v16 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentStoneNumLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.pointNumInfo )
    goto LABEL_37;
  v17 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.pointNumInfo,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentPointNumLb )
    goto LABEL_37;
  v18 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentPointNumLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.fragmentNumInfo )
    goto LABEL_37;
  v19 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.fragmentNumInfo,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentFragmentNumLb )
    goto LABEL_37;
  v20 = (UIWidget_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentFragmentNumLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v26 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v26 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v26->static_fields->COLOR_VAL;
  v28 = COLOR_VAL;
  v29 = COLOR_VAL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v22 - 3), v23, v24, v25, &v54);
  *(_QWORD *)&v59.fields.r = v54.methodPointer;
  *(_QWORD *)&v59.fields.b = v54.invoker_method;
  if ( isPointSummon )
  {
    if ( !v16 )
      goto LABEL_37;
    UIWidget__set_color(v16, v59, 0LL);
    if ( !v17 )
      goto LABEL_37;
    *(_QWORD *)&v55.fields.b = v54.invoker_method;
    *(_QWORD *)&v55.fields.r = v54.methodPointer;
    UIWidget__set_color(v17, v55, 0LL);
    if ( !v20 )
      goto LABEL_37;
    *(_QWORD *)&v56.fields.b = v54.invoker_method;
    *(_QWORD *)&v56.fields.r = v54.methodPointer;
    UIWidget__set_color(v20, v56, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_37;
    *(_QWORD *)&v57.fields.b = v54.invoker_method;
    *(_QWORD *)&v57.fields.r = v54.methodPointer;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v57, 0LL);
    this = (SummonControl_o *)v8->fields.fragmentNumCollider;
    if ( !this )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
    if ( !v18 )
      goto LABEL_37;
    UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v30, 0LL);
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !v19 )
      goto LABEL_37;
    UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v34, 0LL);
  }
  else
  {
    if ( !v18 )
      goto LABEL_37;
    UIWidget__set_color(v18, v59, 0LL);
    if ( !v19 )
      goto LABEL_37;
    *(_QWORD *)&v58.fields.b = v54.invoker_method;
    *(_QWORD *)&v58.fields.r = v54.methodPointer;
    UIWidget__set_color(v19, v58, 0LL);
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
    if ( !v16 )
      goto LABEL_37;
    UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v38, 0LL);
    *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
    if ( !v17 )
      goto LABEL_37;
    UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v42, 0LL);
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_37;
    UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v46, 0LL);
    *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_37;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v50, 0LL);
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
    sub_B0D97C(this);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4215FEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4215FEC = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo )
    goto LABEL_9;
  SummonResultComponent__setListByType(summonResultInfo, 1, 0LL);
  SummonControl__showSummonResultInfo(this, v5);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !summonResultInfo )
LABEL_9:
    sub_B0D97C(summonResultInfo);
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

  if ( (byte_4215FA9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx);
    byte_4215FA9 = 1;
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
                                                (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
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
    sub_B0D97C(sliderGrid);
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
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *summonHelpLabel; // x21
  __int64 v28; // x1
  TerminalPramsManager_c *v29; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  __int64 v38; // x21
  __int64 v39; // x21
  struct GachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct GachaEntity_array *ListValidData; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  System_String_o *v66; // x20
  AssetLoader_LoadEndDataHandler_o *v67; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215F8F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_B0D8A4(&Method_SummonControl_LoadBannerEnd__, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12482/*"SUMMON_HELP_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_13198/*"SummonBanners/DownloadSummonBanner"*/, v13);
    sub_B0D8A4(&StringLiteral_6344/*"FAIL_LOAD"*/, v14);
    sub_B0D8A4(&StringLiteral_19566/*"img_line_summon"*/, v15);
    sub_B0D8A4(&StringLiteral_19492/*"img_bg_banner"*/, v16);
    byte_4215F8F = 1;
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
  SummonControl__setDispSummonInfo(this, 1, v19);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 36, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setBackBtnSprite_17439696((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  *(_WORD *)&this->fields.isDoneTutorial = 257;
  v20 = (System_Int32_array **)StringLiteral_13198/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13198/*"SummonBanners/DownloadSummonBanner"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetPath, v20, v21, v22, v23, v24, v25, v26);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_52;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4216012 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    byte_4216012 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v29->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  SummonControl__setUserResourceDisp(this, v37);
  v38 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v39 = **(_QWORD **)(v38 + 192);
  if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
    sub_AA65A4(v39);
  Time = **(UnityEngine_Transform_o ***)(v39 + 184);
  if ( !Time )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Time,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gachaMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_52;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.useGachaData,
    (System_Int32_array **)ListValidData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  SummonControl__checkValidGachaList(this, v54);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_52;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.vaildGachaList, 0LL, v55, v56, v57, v58, v59, v60);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_19566/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_52;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_19492/*"img_bg_banner"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6344/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_52:
    sub_B0D97C(Time);
  }
  v66 = this->fields.assetPath;
  v67 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v64, v65);
  AssetLoader_LoadEndDataHandler___ctor(v67, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  SummonResultComponent_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *v15; // x20
  SummonControl___c_c *v16; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__257_0; // x21
  Il2CppObject *v19; // x22
  struct SummonControl___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4215FE8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    sub_B0D8A4(&Method_SummonControl___c__setSummonResultList_b__257_0__, v7);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_9379/*"NO_EXIST"*/, v9);
    sub_B0D8A4(&StringLiteral_12279/*"SHOW_TALK"*/, v10);
    byte_4215FE8 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(107, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28088484(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v11) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (CommonUI_o *)Instance;
      v16 = SummonControl___c_TypeInfo;
      if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v16 = SummonControl___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      _9__257_0 = static_fields->__9__257_0;
      if ( !_9__257_0 )
      {
        if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          static_fields = SummonControl___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__257_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
        System_Action___ctor(_9__257_0, v19, Method_SummonControl___c__setSummonResultList_b__257_0__, 0LL);
        v20 = SummonControl___c_TypeInfo->static_fields;
        v20->__9__257_0 = _9__257_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v20->__9__257_0,
          (System_Int32_array **)_9__257_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( !v15 )
        goto LABEL_31;
      CommonUI__OpenTutorialImageDialog_17042492(v15, 2, 108, _9__257_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12279/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9379/*"NO_EXIST"*/, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Instance = (SummonResultComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_B0D97C(Instance);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  SummonControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x22
  __int64 v9; // x21
  int size; // w8
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o *summonMBannerInfoList; // x22
  __int64 v12; // x21
  int v13; // w8
  bool v14; // w20

  v3 = isEnable;
  v4 = this;
  if ( (byte_4215F8A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v6);
    this = (SummonControl_o *)sub_B0D8A4(
                                &Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__,
                                v7);
    byte_4215F8A = 1;
  }
  if ( !v4->fields.isDoneTutorial )
    v3 &= v4->fields.tutorialKind != 2;
  bannerInfoList = v4->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_26;
  v9 = 0LL;
  while ( 1 )
  {
    size = bannerInfoList->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (SummonControl_o *)bannerInfoList->fields._items->m_Items[v9];
    if ( this )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)this, v3 & 1, 0LL);
      bannerInfoList = v4->fields.bannerInfoList;
      ++v9;
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
  v12 = 0LL;
  while ( 1 )
  {
    v13 = summonMBannerInfoList->fields._size;
    if ( (int)v12 >= v13 )
      break;
    if ( v13 <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (SummonControl_o *)summonMBannerInfoList->fields._items->m_Items[v12];
    if ( this )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)this, v3 & 1, 0LL);
      summonMBannerInfoList = v4->fields.summonMBannerInfoList;
      ++v12;
      if ( summonMBannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  this = (SummonControl_o *)v4->fields.summonMBannerLeftArrowBtn;
  if ( !this
    || (v14 = v3 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v14, 0LL),
        (this = (SummonControl_o *)v4->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v14, 0LL);
}


void __fastcall SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *Master_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_int__o *v25; // x22
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UILabel_o *currentFragmentNumLb; // x20
  Il2CppObject *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-3Ch] BYREF
  int klass; // [xsp+8h] [xbp-38h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4215F94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_TblUserMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_SummonControl__setUserResourceDisp_b__156_0__, v8);
    sub_B0D8A4(&StringLiteral_23605/*"{0:N0}"*/, v9);
    byte_4215F94 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_22;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v21, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_22;
  UILabel__set_text(currentStoneNumLb, Master_WarQuestSelectionMaster, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v23, v24);
  System_Action_int____ctor(
    v25,
    (Il2CppObject *)this,
    Method_SummonControl__setUserResourceDisp_b__156_0__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v25, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v27, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_22;
  UILabel__set_text(currentPointNumLb, Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v28, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(
                           (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                           0LL);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23605/*"{0:N0}"*/, v30, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_22;
  UILabel__set_text(currentFragmentNumLb, Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_WarQuestSelectionMaster
    || (v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v31, 0LL)) == 0LL)
    || (v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        GameObjectExtensions__SetLocalPositionX(v32, -179.0, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v33, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionX(v34, 179.0, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o *v22; // x21

  if ( (byte_4215FCA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonControl__showConfirmDlg_b__216_0__, v8);
    byte_4215FCA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    gachaParamData->fields.gachaId,
                                                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_WarQuestSelectionMaster, 8, 0LL) )
  {
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v15 = (BonusSelectSummonAssetManager_o *)sub_B0D974(BonusSelectSummonAssetManager_TypeInfo, v12, v13);
        BonusSelectSummonAssetManager___ctor(v15, 0LL);
        this->fields.bonusSelectAssetManager = v15;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.bonusSelectAssetManager,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__216_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v22, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  SummonControl__showConfirmDlg_27155268(this, 1, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_27155268(
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
  GachaExtraGiftEntity_array *giftEntList; // x23
  int32_t *v22; // x22
  const MethodInfo *v23; // x1
  int32_t needStone; // w20
  int32_t haveStone; // w24
  int32_t haveChargeStone; // w22
  int v27; // w28
  int v28; // w26
  struct GachaRqParamData_o *v29; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v33; // x24
  __int64 v34; // x1
  __int64 v35; // x2
  System_Int32_array *ScriptIntArray; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  struct SummonInfoControl_o *v41; // x8
  const MethodInfo *v42; // x1
  struct SummonInfoControl_o *v43; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v45; // x9
  struct GachaRqParamData_o *v46; // x8
  GachaDetailEntity_o *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v53; // x0
  System_Int32_array *v54; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *v57; // x0
  const MethodInfo *v58; // x2
  struct GachaRqParamData_o *v59; // x8
  int32_t v60; // w21
  struct GachaRqParamData_o *v61; // x8
  const MethodInfo *v62; // x6
  SummonControl_o *v63; // x22
  struct System_Collections_Generic_List_VaildGachaInfo__o *v64; // x23
  __int64 v65; // x24
  VaildGachaInfo_o *v66; // x8
  int32_t v67; // w20
  int32_t v68; // w26
  int32_t v69; // w27
  struct GachaRqParamData_o *v70; // x8
  GachaDetailEntity_o *v71; // x24
  struct GachaRqParamData_o *v72; // x8
  __int64 v73; // x1
  __int64 v74; // x2
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  System_Int32_array *v78; // x25
  int32_t ScriptInt; // w0
  __int64 v80; // x1
  __int64 v81; // x2
  SummonControl_o *v82; // x0
  const MethodInfo *v83; // x2
  int32_t v84; // w21
  int afterChargeStoneNum; // w20
  __int64 v86; // x1
  __int64 v87; // x2
  SummonConfirmDlgComponent_o *v88; // x24
  struct SummonInfoControl_o *v89; // x9
  struct GachaRqParamData_o *v90; // x8
  struct GachaRqParamData_o *v91; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v93; // x8
  SummonControl_o *v94; // x21
  struct System_Collections_Generic_List_VaildGachaInfo__o *v95; // x23
  __int64 v96; // x25
  VaildGachaInfo_o *v97; // x9
  struct SummonInfoControl_o *v98; // x10
  struct GachaRqParamData_o *v99; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v100; // x23
  System_String_o *v101; // x25
  __int64 v102; // x26
  int32_t v103; // w28
  VaildGachaInfo_o *v104; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v105; // x23
  __int64 v106; // x26
  _BOOL4 v107; // w28
  VaildGachaInfo_o *v108; // x8
  int64_t summonCloseAt; // x26
  struct GachaRqParamData_o *v110; // x8
  int32_t gachaId; // w27
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int32_t v113; // w26
  __int64 currentIdx; // x22
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  VaildGachaInfo_o *v116; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  struct System_Collections_Generic_List_VaildGachaInfo__o *v118; // x20
  __int64 v119; // x22
  VaildGachaInfo_o *v120; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v121; // x22
  __int64 v122; // x24
  _BOOL4 isPickup; // w20
  VaildGachaInfo_o *v124; // x8
  struct GachaRqParamData_o *v125; // x9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v127; // x8
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-D0h]
  const MethodInfo *v129; // [xsp+60h] [xbp-90h]
  _BOOL4 v130; // [xsp+68h] [xbp-88h]
  int32_t v131; // [xsp+6Ch] [xbp-84h]
  int32_t payGachaPrice; // [xsp+6Ch] [xbp-84h]
  int32_t haveFreeStone; // [xsp+70h] [xbp-80h]
  System_String_o *name; // [xsp+70h] [xbp-80h]
  int32_t v135; // [xsp+7Ch] [xbp-74h]
  int32_t v136; // [xsp+7Ch] [xbp-74h]
  int v137; // [xsp+80h] [xbp-70h]
  int32_t v138; // [xsp+80h] [xbp-70h]
  int32_t v139; // [xsp+84h] [xbp-6Ch]
  int32_t v140; // [xsp+84h] [xbp-6Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v141; // [xsp+88h] [xbp-68h]
  bool HasFlag; // [xsp+88h] [xbp-68h]
  GachaExtraGiftEntity_array *v143; // [xsp+90h] [xbp-60h]
  GachaExtraGiftEntity_array *v144; // [xsp+90h] [xbp-60h]

  v4 = this;
  if ( (byte_4215FCB & 1) == 0 )
  {
    sub_B0D8A4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GachaMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SummonControl_ConfirmMessageOpen__, v14);
    sub_B0D8A4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15);
    sub_B0D8A4(&Method_SummonControl_confirmResult__, v16);
    this = (SummonControl_o *)sub_B0D8A4(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    byte_4215FCB = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_126;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_126;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v20 = v4->fields.gachaParamData;
  if ( !v20 )
    goto LABEL_126;
  if ( !this )
    goto LABEL_126;
  giftEntList = GachaExtraGiftMaster__GetListGachaExtraGift((GachaExtraGiftMaster_o *)this, v20->fields.gachaId, 0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_126;
  v22 = (int32_t *)this;
  this = (SummonControl_o *)v4->fields.summonResultInfo;
  if ( !this )
    goto LABEL_126;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v22[24], v22[44], 0LL);
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
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v29 = v4->fields.gachaParamData;
      if ( !v29 )
        goto LABEL_126;
      v137 = v28;
      v139 = haveStone;
      if ( !this )
        goto LABEL_126;
      v143 = giftEntList;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v29->fields.gachaId, 0LL);
      v33 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v31,
                                                          v32);
      SummonConfirmDlgComponent_CallbackFunc___ctor(v33, (Il2CppObject *)v4, Method_SummonControl_confirmResult__, 0LL);
      if ( GachaDetailEntity )
      {
        v141 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                             SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                             v34,
                                                             v35);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v141,
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
            v141 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 v37,
                                                                 v38);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v141,
              (Il2CppObject *)v4,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v39);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
LABEL_120:
                SummonControl__BeforeConfirmMessageOpen(v4, v40);
                return;
              }
            }
          }
        }
      }
      else
      {
        v141 = v33;
      }
      v91 = v4->fields.gachaParamData;
      if ( !v91 )
        goto LABEL_126;
      gachaTime = v91->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_104;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
      v93 = v4->fields.gachaParamData;
      if ( !v93 || !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v93->fields.gachaId,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( this && (v94 = this, LODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_126;
        this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_126;
        this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    LODWORD(v94->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin),
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
      v136 = needStone;
      vaildGachaList = v4->fields.vaildGachaList;
      if ( vaildGachaList )
      {
        v113 = haveChargeStone;
        currentIdx = v4->fields.currentIdx;
        confirmDlgInfo = v4->fields.confirmDlgInfo;
        if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v116 = vaildGachaList->fields._items->m_Items[currentIdx];
        if ( v116 )
        {
          summonInfoCtr = v4->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v118 = v4->fields.vaildGachaList;
            if ( v118 )
            {
              v119 = v4->fields.currentIdx;
              name = v116->fields.name;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              if ( v118->fields._size <= (unsigned int)v119 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v120 = v118->fields._items->m_Items[v119];
              if ( v120 )
              {
                v121 = v4->fields.vaildGachaList;
                if ( v121 )
                {
                  v122 = v4->fields.currentIdx;
                  isPickup = v120->fields.isPickup;
                  if ( v121->fields._size <= (unsigned int)v122 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                  v124 = v121->fields._items->m_Items[v122];
                  if ( v124 )
                  {
                    v125 = v4->fields.gachaParamData;
                    if ( v125 )
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
                          v139 - v136,
                          v27 & ~(v27 >> 31),
                          v137 + v113,
                          v141,
                          0,
                          isPickup,
                          v124->fields.closedAt,
                          0,
                          0LL,
                          0LL,
                          v143,
                          v125->fields.shopIdIdx,
                          v129);
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
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v4, v23);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v41 = v4->fields.summonInfoCtr;
      if ( !v41 )
        goto LABEL_126;
      v4->fields.isDailyGacha = v41->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v22[60], 0LL) || !SummonControl__CheckQpManaOverCheck(v4, v42) )
        SummonControl__friendPointSummonConfirm(v4, v42);
      return;
    case 5:
      v43 = v4->fields.summonInfoCtr;
      if ( !v43 )
        goto LABEL_126;
      ticketNum = v43->fields.ticketNum;
      v45 = v4->fields.gachaParamData;
      v4->fields.haveTicketNum = ticketNum;
      if ( !v45 )
        goto LABEL_126;
      v4->fields.afterTicketNum = ticketNum - v45->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v46 = v4->fields.gachaParamData;
      if ( !v46 || !this )
        goto LABEL_126;
      v47 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v46->fields.gachaId, 0LL);
      v50 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v48,
                                                          v49);
      SummonConfirmDlgComponent_CallbackFunc___ctor(v50, (Il2CppObject *)v4, Method_SummonControl_confirmResult__, 0LL);
      if ( v47 )
      {
        v53 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                            SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                            v51,
                                                            v52);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v53,
          (Il2CppObject *)v4,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v54 = GachaDetailEntity__GetScriptIntArray(v47, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v47, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v54 )
        {
          if ( (_DWORD)this == 1 )
          {
            v57 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                v55,
                                                                v56);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v57,
              (Il2CppObject *)v4,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v54, v58);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_120;
            }
          }
        }
      }
      v59 = v4->fields.gachaParamData;
      if ( !v59 )
        goto LABEL_126;
      v60 = v59->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaMaster___);
      v61 = v4->fields.gachaParamData;
      if ( !v61 || !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v61->fields.gachaId,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_47;
      v63 = this;
      if ( !LODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin) )
        goto LABEL_47;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  LODWORD(v63->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin),
                                  0LL);
      if ( (_DWORD)this == 9 )
        ++v60;
LABEL_47:
      v64 = v4->fields.vaildGachaList;
      if ( !v64 )
        goto LABEL_126;
      v65 = v4->fields.currentIdx;
      if ( v64->fields._size <= (unsigned int)v65 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v66 = v64->fields._items->m_Items[v65];
      if ( !v66 || !v4->fields.confirmDlgInfo )
        goto LABEL_126;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v4->fields.confirmDlgInfo,
        v66->fields.name,
        v60,
        v4->fields.haveTicketNum,
        v4->fields.afterTicketNum,
        v50,
        v62);
      return;
    case 7:
      v67 = v4->fields.haveStone;
      v68 = v4->fields.needStone;
      v69 = v4->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v70 = v4->fields.gachaParamData;
      if ( !v70 )
        goto LABEL_126;
      v144 = giftEntList;
      if ( !this )
        goto LABEL_126;
      v71 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v70->fields.gachaId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (SummonControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaMaster___);
      v72 = v4->fields.gachaParamData;
      if ( !v72 )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v72->fields.gachaId,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_126;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                               SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                               v73,
                                                               v74);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v4,
        Method_SummonControl_confirmResult__,
        0LL);
      if ( v71 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 v76,
                                                                 v77);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v4,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v78 = GachaDetailEntity__GetScriptIntArray(v71, v4->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v71, v4->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v78 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B0D974(
                                                                     SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                     v80,
                                                                     v81);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v4,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v82, v78, v83) )
              goto LABEL_120;
          }
        }
      }
      this = (SummonControl_o *)v4->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_126;
      v84 = v67 - v68;
      afterChargeStoneNum = (v69 - v68) & ~((v69 - v68) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v88 = v4->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v89 = v4->fields.summonInfoCtr;
        if ( v89 )
        {
          v90 = v4->fields.gachaParamData;
          if ( v90 )
          {
            if ( v88 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v88,
                (int32_t)this,
                v89->fields.payGachaPrice,
                v4->fields.haveStone,
                v4->fields.haveFreeStone,
                v4->fields.haveChargeStone,
                v84,
                v4->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                giftEntList,
                v90->fields.shopIdIdx,
                isAppendSummon);
              return;
            }
          }
        }
        goto LABEL_126;
      }
      v95 = v4->fields.vaildGachaList;
      if ( !v95 )
        goto LABEL_126;
      v96 = v4->fields.currentIdx;
      if ( v95->fields._size <= (unsigned int)v96 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v97 = v95->fields._items->m_Items[v96];
      if ( !v97 )
        goto LABEL_126;
      v98 = v4->fields.summonInfoCtr;
      if ( !v98 )
        goto LABEL_126;
      v99 = v4->fields.gachaParamData;
      if ( !v99 )
        goto LABEL_126;
      v100 = v4->fields.vaildGachaList;
      if ( !v100 )
        goto LABEL_126;
      v101 = v97->fields.name;
      v102 = v4->fields.currentIdx;
      v103 = v99->fields.gachaTime;
      v135 = v4->fields.haveStone;
      haveFreeStone = v4->fields.haveFreeStone;
      v130 = v99->fields.isAppendSummon;
      v131 = v4->fields.haveChargeStone;
      if ( v100->fields._size <= (unsigned int)v102 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v104 = v100->fields._items->m_Items[v102];
      if ( !v104 )
        goto LABEL_126;
      v105 = v4->fields.vaildGachaList;
      v138 = v103;
      if ( !v105 )
        goto LABEL_126;
      v106 = v4->fields.currentIdx;
      v107 = v104->fields.isPickup;
      if ( v105->fields._size <= (unsigned int)v106 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v108 = v105->fields._items->m_Items[v106];
      if ( !v108 )
        goto LABEL_126;
      summonCloseAt = v108->fields.closedAt;
      v140 = v98->fields.payGachaPrice;
      if ( HasFlag )
      {
        v110 = v4->fields.gachaParamData;
        if ( !v110 )
          goto LABEL_126;
        gachaId = v110->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B0D974(
                                                                                    BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                                                    v86,
                                                                                    v87);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v4,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v127 = v4->fields.gachaParamData;
      if ( !v127 || !v88 )
LABEL_126:
        sub_B0D97C(this);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v88,
        v101,
        7,
        v140,
        v138,
        v135,
        haveFreeStone,
        v131,
        v84,
        haveFreeStone,
        afterChargeStoneNum,
        callback,
        v130,
        v107,
        summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v4->fields.bonusSelectAssetManager,
        v144,
        v127->fields.shopIdIdx,
        v129);
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
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *v10; // x20
  EventTutorialEntity_o *v11; // x8
  int32_t num; // w21
  EventTutorialEntity_o *v13; // x8
  int32_t v14; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21

  if ( (byte_4215FA4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v4);
    sub_B0D8A4(&Method_SummonControl_OnClickHelpClose__, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    byte_4215FA4 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v8 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v8, 0LL);
    if ( EventTutorialEntity )
    {
      v10 = EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v11 = EventTutorialEntity->fields._items->m_Items[0];
        if ( v11 )
        {
          num = v11->fields.num;
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
          if ( !v10->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v13 = v10->fields._items->m_Items[0];
          if ( v13 )
          {
            v14 = v13->fields.num;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            TutorialFlag__SetGachaFlg(v14, 0LL);
            v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
            System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
            EventTutorialMaster__TutorialChainWithoutCheckStart(v10, v17, 0LL);
            return;
          }
        }
        sub_B0D97C(EventTutorialEntity);
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
  CommonUI_o *_28088484; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  CommonUI_o *v16; // x20
  SummonControl___c_c *v17; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__252_0; // x21
  Il2CppObject *v20; // x22
  struct SummonControl___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v30; // x8
  struct GachaInfos_array *v31; // x8
  __int64 v32; // x9
  GachaInfos_o *v33; // x8
  UserServantEntity_o *Entity; // x20
  CommonUI_o *Instance; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  ServantStatusDialog_EndDelegate_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  struct GachaInfos_array *v41; // x8
  __int64 v42; // x9
  GachaInfos_o *v43; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v45; // x20
  ServantStatusDialog_EndDelegate_o *v46; // x22
  __int64 v47; // x0

  if ( (byte_4215FE4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SummonControl_DialogCallBack__, v8);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v9);
    sub_B0D8A4(&Method_SummonControl___c__showServantDialog_b__252_0__, v10);
    sub_B0D8A4(&SummonControl___c_TypeInfo, v11);
    byte_4215FE4 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28088484 = (CommonUI_o *)TutorialFlag__Get_28088484(107, 0LL);
  if ( ((unsigned __int8)_28088484 & 1) != 0 )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    _28088484 = (CommonUI_o *)TutorialFlag__Get_28088484(108, 0LL);
    if ( ((unsigned __int8)_28088484 & 1) == 0 )
    {
      _28088484 = (CommonUI_o *)SummonControl__isSvtEqSummonResult(this, v13);
      if ( ((unsigned __int8)_28088484 & 1) != 0 )
      {
        _28088484 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v16 = _28088484;
        v17 = SummonControl___c_TypeInfo;
        if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v17 = SummonControl___c_TypeInfo;
        }
        static_fields = v17->static_fields;
        _9__252_0 = static_fields->__9__252_0;
        if ( !_9__252_0 )
        {
          if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            static_fields = SummonControl___c_TypeInfo->static_fields;
          }
          v20 = (Il2CppObject *)static_fields->__9;
          _9__252_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
          System_Action___ctor(_9__252_0, v20, Method_SummonControl___c__showServantDialog_b__252_0__, 0LL);
          v21 = SummonControl___c_TypeInfo->static_fields;
          v21->__9__252_0 = _9__252_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v21->__9__252_0,
            (System_Int32_array **)_9__252_0,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
        }
        if ( !v16 )
          goto LABEL_38;
        CommonUI__OpenTutorialImageDialog_17042492(v16, 2, 108, _9__252_0, 0LL, 0LL, 0LL);
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
    v47 = sub_B0D9A8(_28088484);
    sub_B0D948(v47, 0LL);
  }
  v30 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v30 )
    goto LABEL_38;
  if ( SvtType__IsCommandCode(v30->fields.type, 0LL) )
  {
    _28088484 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_28088484 )
      goto LABEL_38;
    _28088484 = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)_28088484,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v31 = this->fields.gachaResInfoList;
    if ( !v31 )
      goto LABEL_38;
    v32 = this->fields.getSvtIdx;
    if ( (unsigned int)v32 < v31->max_length )
    {
      v33 = v31->m_Items[v32];
      if ( v33 )
      {
        if ( _28088484 )
        {
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)_28088484,
                     v33->fields.userSvtId,
                     (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v36, v37);
          ServantStatusDialog_EndDelegate___ctor(v38, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_17030008(Instance, 0, (UserCommandCodeEntity_o *)Entity, v38, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_38:
      sub_B0D97C(_28088484);
    }
    goto LABEL_39;
  }
  _28088484 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = this->fields.gachaResInfoList;
  if ( !v41 )
    goto LABEL_38;
  v42 = this->fields.getSvtIdx;
  if ( (unsigned int)v42 >= v41->max_length )
    goto LABEL_39;
  v43 = v41->m_Items[v42];
  if ( !v43 )
    goto LABEL_38;
  userSvtId = v43->fields.userSvtId;
  v45 = _28088484;
  v46 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v39, v40);
  ServantStatusDialog_EndDelegate___ctor(v46, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v45 )
    goto LABEL_38;
  CommonUI__OpenServantStatusDialog_17026436(v45, 6, userSvtId, v46, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  StonePurchaseMenu_CallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4215FBC & 1) == 0 )
  {
    sub_B0D8A4(&StonePurchaseMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&Method_SummonControl_endPurchaseStone__, v4);
    byte_4215FBC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (StonePurchaseMenu_CallbackFunc_o *)sub_B0D974(StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7);
  StonePurchaseMenu_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_B0D97C(v9);
  CommonUI__OpenStonePurchaseMenu(Instance, v8, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4215FDD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl__showSummonEffect_b__240_0__, v5);
    byte_4215FDD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__240_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4215FE7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl__showSummonResultInfo_b__256_0__, v5);
    byte_4215FE7 = 1;
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
    TitleInfoControl__setBackBtnSprite_17439696(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v12 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
      v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__256_0__, 0LL);
      if ( !Instance )
        goto LABEL_25;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v14, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v7);
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
    sub_B0D97C(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_4215FB5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl_endPurchaseSvtEqFrame__, v5);
    sub_B0D8A4(&Method_SummonControl_resetStoneInfo__, v6);
    byte_4215FB5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_B0D974(
                                                          ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo,
                                                          v8,
                                                          v9);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B0D97C(v14);
  CommonUI__OpenServantEquipFramePurchaseMenu(Instance, v10, v13, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  ServantFramePurchaseMenu_CallbackFunc_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_4215FB3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SummonControl_endPurchaseSvtFrame__, v5);
    sub_B0D8A4(&Method_SummonControl_resetStoneInfo__, v6);
    byte_4215FB3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_B0D974(ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v8, v9);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B0D97C(v14);
  CommonUI__OpenServantFramePurchaseMenu(Instance, v10, v13, 0LL);
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
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v19; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  DataManager_o *v23; // x24
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantEntity_o *v25; // x22
  int32_t v26; // w24
  ServantVoiceEntity_o *v27; // x0
  System_String_o *v28; // x0
  System_String_o *summonScriptId; // x23
  WebViewManager_o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  ServantAssetArgs_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  ServantAssetArgs_o *battleAssetArgs; // x23
  WebViewManager_o *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_o *v47; // x24
  __int64 v48; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4215FE1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&ServantAssetArgs_TypeInfo, v9);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_SummonControl__showSvtTalk_b__247_0__, v13);
    sub_B0D8A4(&Method_SummonControl_close__, v14);
    sub_B0D8A4(&StringLiteral_3082/*"CLICK_OK"*/, v15);
    byte_4215FE1 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_42;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v48 = sub_B0D9A8(Instance);
    sub_B0D948(v48, 0LL);
  }
  v19 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v19 )
    goto LABEL_42;
  userSvtId = v19->fields.userSvtId;
  objectId = v19->fields.objectId;
  limitCount = v19->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v23 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v23,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
      || SvtType__IsCommandCode(v19->fields.type, 0LL) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3082/*"CLICK_OK"*/, 0LL);
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
    v25 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v23,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_42;
    v25 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            userSvtId,
            (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B0D97C(Instance);
  v26 = (int)Instance;
  v27 = ServantVoiceMaster__getEntity(MasterData_WarQuestSelectionMaster, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v27 && (v28 = ServantVoiceEntity__GetSummonScriptId(v27, v26, 0LL)) != 0LL )
  {
    summonScriptId = v28;
    v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__247_0__, 0LL);
    if ( !v30 )
      goto LABEL_42;
    ScriptManager__PlayGacha_17136220(
      (ScriptManager_o *)v30,
      v25,
      objectId,
      limitCount,
      0,
      1,
      v33,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v36 = (ServantAssetArgs_o *)sub_B0D974(ServantAssetArgs_TypeInfo, v34, v35);
      ServantAssetArgs___ctor_26474492(v36, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v36;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.battleAssetArgs,
        (System_Int32_array **)v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v47 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v44 )
      goto LABEL_42;
    ScriptManager__PlayGacha_17136220((ScriptManager_o *)v44, v25, objectId, limitCount, 0, 1, v47, 0, 0, 0LL, 0LL);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x22
  int mBannerSpringPanelRetryCount; // w8
  UnityEngine_Object_o **p_spring_5__2; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *spring_5__2; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *v12; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v2 = this;
  if ( (byte_421174C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421174C = 1;
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
      v12 = *p_spring_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
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
          sub_B0D97C(this);
        }
        UICenterOnChild__CenterOn_35227608(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_10:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_25;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)this,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    v2->fields._spring_5__2 = (struct SpringPanel_o *)Component_WebViewObject;
    p_spring_5__2 = (UnityEngine_Object_o **)&v2->fields._spring_5__2;
    sub_B0D840(&v2->fields._spring_5__2, Component_WebViewObject);
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
      sub_B0D840(p__2__current, 0LL);
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
    sub_B0D840(&v2->fields._spring_5__2, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v8; // x20
  PlayMakerFSM_o *fsm; // x0
  Il2CppObject *wait_5__2; // x1
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19

  if ( (byte_421174D & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_3082/*"CLICK_OK"*/, v5);
    byte_421174D = 1;
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
    v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
    this->fields._wait_5__2 = v8;
    sub_B0D840(&this->fields._wait_5__2, v8);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  fsm = (PlayMakerFSM_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    sub_B0D840(&this->fields.__2__current, wait_5__2);
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
    sub_B0D840(&_4__this->fields.battleAssetArgs, 0LL);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_21:
    sub_B0D97C(fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3082/*"CLICK_OK"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_SummonControl__WaitBattleChrLoad_d__249_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SummonControl___c_StaticFields *static_fields; // x0

  if ( (byte_4211747 & 1) == 0 )
  {
    sub_B0D8A4(&SummonControl___c_TypeInfo, v1);
    byte_4211747 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SummonControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SummonControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__257_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__216_1(SummonControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4211748 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4211748 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutoList; // x20
  __int64 v10; // x21
  int size; // w8
  unsigned int v12; // w23
  __int64 v13; // x8
  struct System_Collections_Generic_List_EventTutorialEntity__o *v14; // x20
  __int64 v15; // x8
  int32_t v16; // w20
  struct SummonControl_o *_4__this; // x8

  if ( (byte_4211749 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v3);
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_3054/*"CLEAR_TUTORIAL"*/, v7);
    byte_4211749 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                0LL,
                                                                (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_27;
  TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 107, 0LL);
  tutoList = this->fields.tutoList;
  if ( !tutoList )
    goto LABEL_27;
  v10 = 4LL;
  while ( 1 )
  {
    size = tutoList->fields._size;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= size )
      break;
    if ( size <= v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = *((_QWORD *)&tutoList->fields._items->obj.klass + v10);
    if ( !v13 )
      goto LABEL_27;
    if ( *(_DWORD *)(v13 + 16) != 1 )
    {
      v14 = this->fields.tutoList;
      if ( !v14 )
        goto LABEL_27;
      if ( v14->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v15 = *((_QWORD *)&v14->fields._items->obj.klass + v10);
      if ( !v15 )
        goto LABEL_27;
      v16 = *(_DWORD *)(v15 + 16);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__SetGachaFlg(v16, 0LL);
    }
    tutoList = this->fields.tutoList;
    ++v10;
    if ( !tutoList )
      goto LABEL_27;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)_4__this->fields.fsm) == 0LL )
LABEL_27:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3054/*"CLEAR_TUTORIAL"*/,
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
  if ( (byte_421174A & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass268_0_o *)sub_B0D8A4(&StringLiteral_5774/*"EXECUTE"*/, method);
    byte_421174A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = v2->fields.svtId, (v4 = v2->fields.__4__this) == 0LL)
    || (this = (SummonControl___c__DisplayClass268_0_o *)v4->fields.fsm) == 0LL )
  {
    sub_B0D97C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5774/*"EXECUTE"*/, 0LL);
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
  if ( (byte_421174B & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass269_0_o *)sub_B0D8A4(&StringLiteral_5774/*"EXECUTE"*/, method);
    byte_421174B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = v2->fields.svtId, (v4 = v2->fields.__4__this) == 0LL)
    || (this = (SummonControl___c__DisplayClass269_0_o *)v4->fields.fsm) == 0LL )
  {
    sub_B0D97C(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5774/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}