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

  if ( (byte_40FBFDA & 1) == 0 )
  {
    sub_B16FFC(&SummonControl_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19301, v8);
    sub_B16FFC(&StringLiteral_2838, v9);
    byte_40FBFDA = 1;
  }
  SummonControl_TypeInfo->static_fields->FRIEND_POINT_SUMMON_ID = 1;
  static_fields = SummonControl_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2838;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_2838;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v11, v2, v3, v4, v5, v6, v7);
  v12 = SummonControl_TypeInfo;
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
  v13 = v12->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19301;
  v13->ARROW_SPRITE_NAME = (struct System_String_o *)StringLiteral_19301;
  sub_B16F98((BattleServantConfConponent_o *)&v13->ARROW_SPRITE_NAME, v14, v15, v16, v17, v18, v19, v20);
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
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_int__o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int128 v56; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FBFD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_18877, v10);
    sub_B16FFC(&StringLiteral_6775, v11);
    byte_40FBFD9 = 1;
  }
  v58.fields.m_XMin = -120.0;
  v58.fields.m_YMin = -205.0;
  v58.fields.m_Width = 240.0;
  v58.fields.m_Height = 100.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v58, v2, v3, v4, v5, (const MethodInfo *)&methoda.name);
  v59.fields.m_YMin = -315.0;
  *(_OWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.name;
  *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_POS.fields.y = -4387913408675840000LL;
  v59.fields.m_XMin = 320.0;
  v59.fields.m_Width = 200.0;
  v59.fields.m_Height = 100.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v59, v12, v13, v14, v15, &methoda);
  v60.fields.m_YMin = -310.0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.methodPointer;
  *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = 0xC366000043E10000LL;
  v60.fields.m_XMin = -335.0;
  v60.fields.m_Width = 135.0;
  v60.fields.m_Height = 150.0;
  v56 = 0uLL;
  UnityEngine_Rect___ctor(v60, v16, v17, v18, v19, (const MethodInfo *)&v56);
  *(_OWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin = v56;
  *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y = 0xC3200000C385C000LL;
  v20 = (System_Int32_array **)StringLiteral_18877;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_18877;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_IDS, v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_6775;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6775;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_TYPE, v27, v28, v29, v30, v31, v32, v33);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.vaildGachaList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v49 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v45,
                                                    v46,
                                                    v47,
                                                    v48);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **name; // x1
  int32_t ticketItemId; // w8
  System_String_o *WebViewAddress_23699452; // x0
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t pickupId; // w8
  __int64 v31; // x2
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WebViewManager_o *Instance; // x0
  GachaSubMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GachaSubEntity_o *FriendPointGachaImageInfo; // x0
  struct GachaSubEntity_o *v48; // x22
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct GachaStoryAdjustEntity_o *v50; // x8
  System_Int32_array **adjustIds; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x0

  if ( (byte_40FBF71 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaSubMaster___, data);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&VaildGachaInfo_TypeInfo, v12);
    byte_40FBF71 = 1;
  }
  v13 = sub_B170CC(VaildGachaInfo_TypeInfo, data, adjustData, method, v4);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v13, 0LL);
  if ( !data || !v13 )
    goto LABEL_19;
  *(_DWORD *)(v13 + 16) = data->fields.id;
  name = (System_Int32_array **)data->fields.name;
  *(_QWORD *)(v13 + 24) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), name, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v13 + 32) = data->fields.beforeGachaId;
  *(_DWORD *)(v13 + 36) = data->fields.priority;
  *(_DWORD *)(v13 + 40) = data->fields.imageId;
  *(_DWORD *)(v13 + 44) = data->fields.warId;
  *(_DWORD *)(v13 + 48) = data->fields.gachaSlot;
  *(_DWORD *)(v13 + 52) = data->fields.type;
  ticketItemId = data->fields.ticketItemId;
  *(_BYTE *)(v13 + 64) = 1;
  *(_DWORD *)(v13 + 60) = ticketItemId;
  *(_BYTE *)(v13 + 84) = data->fields.freeDrawFlag > 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_23699452 = NetworkManager__getWebViewAddress_23699452(1, 0LL);
  v23 = (System_Int32_array **)System_String__Concat_43743732(WebViewAddress_23699452, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v13 + 88) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 88), v23, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v13 + 96) = data->fields.gachaGroupId;
  *(_BYTE *)(v13 + 100) = data->fields.gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v13 + 80) = 0;
  *(_DWORD *)(v13 + 68) = 0;
  *(_BYTE *)(v13 + 101) = pickupId > 0;
  v32 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v31);
  *(_QWORD *)(v13 + 72) = v32;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 72), v32, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v13 + 120) = data->fields.openedAt;
  *(_QWORD *)(v13 + 128) = data->fields.closedAt;
  *(_DWORD *)(v13 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_WarQuestSelectionMaster = (GachaSubMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_19;
    FriendPointGachaImageInfo = GachaSubMaster__GetFriendPointGachaImageInfo(
                                  MasterData_WarQuestSelectionMaster,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( FriendPointGachaImageInfo )
    {
      v48 = FriendPointGachaImageInfo;
      this->fields.gachaSubEntity = FriendPointGachaImageInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.gachaSubEntity,
        (System_Int32_array **)FriendPointGachaImageInfo,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      *(_DWORD *)(v13 + 80) = v48->fields.id;
      *(_DWORD *)(v13 + 40) = v48->fields.imageId;
    }
  }
  if ( !adjustData )
    goto LABEL_17;
  targetEntity = adjustData->fields.targetEntity;
  if ( !targetEntity
    || (*(_DWORD *)(v13 + 40) = targetEntity->fields.imageId, (v50 = adjustData->fields.targetEntity) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  *(_DWORD *)(v13 + 68) = v50->fields.idx;
  adjustIds = (System_Int32_array **)adjustData->fields.adjustIds;
  *(_QWORD *)(v13 + 72) = adjustIds;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 72), adjustIds, v39, v40, v41, v42, v43, v44);
LABEL_17:
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)vaildGachaList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
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
  WebViewManager_o *Instance; // x0
  GachaDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  System_String_o *title; // x21
  System_String_o *message; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v17; // x23

  if ( (byte_40FBFAC & 1) == 0 )
  {
    sub_B16FFC(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl_beforeConfirmCautionResult__, v5);
    byte_40FBFAC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (GachaDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData
    || !MasterData_WarQuestSelectionMaster
    || (GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                              MasterData_WarQuestSelectionMaster,
                              gachaParamData->fields.gachaId,
                              0LL)) == 0LL
    || (infoDlgInfo = this->fields.infoDlgInfo,
        title = GachaDetailEntity->fields.title,
        message = GachaDetailEntity->fields.message,
        v17 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                         SummonInfoDlgComponent_CallbackFunc_TypeInfo,
                                                         v10,
                                                         v11,
                                                         v12,
                                                         v13),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_B170D4();
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, title, message, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__BonusSelectSummonConfirmResult(
        SummonControl_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  MethodInfo *v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **selectBonusDatas; // x1
  struct GachaRqParamData_o *v14; // x0
  PlayMakerFSM_o *fsm; // x0
  SelectBonusData_o *selectBonusData; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBFA1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3039, result);
    byte_40FBFA1 = 1;
  }
  selectBonusData = 0LL;
  if ( result )
  {
    gachaParamData = this->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_13;
    if ( !SummonControl__TryGetSelectBonusDataInfo(this, &selectBonusData, gachaParamData->fields.gachaId, v3) )
      goto LABEL_10;
    if ( !selectBonusData )
      goto LABEL_13;
    selectBonusDatas = (System_Int32_array **)selectBonusData->fields.selectBonusDatas;
    if ( !selectBonusDatas )
    {
LABEL_10:
      SummonControl__showConfirmDlg_28685864(this, 1, v7);
      return;
    }
    v14 = this->fields.gachaParamData;
    if ( v14 )
    {
      v14->fields.selectBonusList = (struct SelectBonus_array *)selectBonusDatas;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v14->fields.selectBonusList,
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
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
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
  WebViewManager_o *Instance; // x0
  GachaSubMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  CommonUI_o *v13; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x23
  bool v21; // w19

  if ( (byte_40FBFA4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaSubMaster___, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_SummonControl_SummonSceneRefresh__, v7);
    sub_B16FFC(&StringLiteral_14666, v8);
    sub_B16FFC(&StringLiteral_14665, v9);
    byte_40FBFA4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (GachaSubMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData || !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( GachaSubMaster__GetOpenEntity(MasterData_WarQuestSelectionMaster, gachaParamData->fields.gachaId, 0LL) == this->fields.gachaSubEntity )
    return 0;
  v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14666, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_14665, 0LL);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
  if ( !v13 )
LABEL_14:
    sub_B170D4();
  v21 = 1;
  CommonUI__OpenNotificationDialog(v13, v14, v15, v20, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  return v21;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v5; // x20

  if ( !ids )
    sub_B170D4();
  v3 = *(_QWORD *)&ids->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v3 )
    {
      sub_B17100(this, ids, method);
      sub_B170A0();
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
  __int64 v3; // x1
  struct GachaInfos_array *gachaResInfoList; // x9
  int32_t v5; // w8
  PlayMakerFSM_o *fsm; // x0
  __int64 *v7; // x8

  if ( (byte_40FBFC3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9269, method);
    sub_B16FFC(&StringLiteral_6332, v3);
    byte_40FBFC3 = 1;
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  v5 = this->fields.getSvtIdx + 1;
  this->fields.getSvtIdx = v5;
  if ( !gachaResInfoList || (fsm = this->fields.fsm) == 0LL )
    sub_B170D4();
  if ( v5 >= (signed int)gachaResInfoList->max_length )
    v7 = &StringLiteral_6332;
  else
    v7 = &StringLiteral_9269;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v7, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t AutoSaleBitFlag; // w21
  BalanceConfig_c *v16; // x8
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int32_t QpMax; // w9
  struct BalanceConfig_StaticFields *v21; // x10
  int32_t v22; // w23
  int32_t qp; // w21
  struct BalanceConfig_StaticFields *v24; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x22
  SummonLimitWarningDlgComponent_o *v34; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x22
  SummonLimitWarningDlgComponent_o *v41; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x22

  if ( (byte_40FBFA5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&Method_SummonControl_autoSellSettingChange__, v5);
    sub_B16FFC(&Method_SummonControl_limitManaConfirmResult__, v6);
    sub_B16FFC(&Method_SummonControl_limitQpConfirmResult__, v7);
    sub_B16FFC(&Method_SummonControl_showConfirmDlg__, v8);
    byte_40FBFA5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v10 = SelfUserGame;
  AutoSaleBitFlag = UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_32;
  static_fields = v16->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BalanceConfig_TypeInfo;
      v21 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v21->QpMax;
      FriendPointSummonQpWarning = v21->FriendPointSummonQpWarning;
    }
    v22 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !AutoSaleBitFlag )
      return 0;
  }
  else
  {
    v22 = QpMax - gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
    if ( !AutoSaleBitFlag )
      return 0;
  }
  qp = v10->fields.qp;
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = BalanceConfig_TypeInfo;
  }
  v24 = v16->static_fields;
  if ( qp >= v24->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v28 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12,
                                                             v13,
                                                             v14);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v28, v33, 0LL);
  }
  else
  {
    if ( v10->fields.qp < v22 )
    {
      mana = v10->fields.mana;
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v24 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v24->UserItemMax )
        return 0;
      v41 = this->fields.limitWarningDlgInfo;
      v42 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                               SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                               v11,
                                                               v12,
                                                               v13,
                                                               v14);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v42,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
      System_Action___ctor(v47, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v41 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v41, v42, v47, 0LL);
        return 1;
      }
LABEL_32:
      sub_B170D4();
    }
    v34 = this->fields.limitWarningDlgInfo;
    v35 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                             SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                             v11,
                                                             v12,
                                                             v13,
                                                             v14);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v35,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v34 )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v34, v35, v40, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v5; // x8

  if ( (byte_40FBFD8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11096, method);
    sub_B16FFC(&StringLiteral_11098, v3);
    byte_40FBFD8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  if ( this->fields.isResult )
    v5 = &StringLiteral_11098;
  else
    v5 = &StringLiteral_11096;
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
  Il2CppObject *String_34837456; // x19
  UserPresentBoxWindow_resData_array *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x0

  if ( (byte_40FBFA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v2);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_SelectBonusData___, v4);
    sub_B16FFC(&JsonManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&string_TypeInfo, v12);
    sub_B16FFC(&SummonControl_TypeInfo, v13);
    byte_40FBFA0 = 1;
  }
  v14 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_34837456 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_34837456, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            String_34837456,
            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                                                                    v17,
                                                                                                    v18,
                                                                                                    v19,
                                                                                                    v20);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v16 )
      sub_B170D4();
  }
}


bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  GachaStoryAdjustMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FBF6E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, adjustData);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FBF6E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (GachaStoryAdjustMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return GachaStoryAdjustMaster__GetValidData(MasterData_WarQuestSelectionMaster, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  CommonUI_o *Instance; // x0

  if ( (byte_40FBF9C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FBF9C = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBF7A & 1) == 0 )
  {
    sub_B16FFC(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_TypeInfo, method);
    byte_40FBF7A = 1;
  }
  v6 = sub_B170CC(SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_TypeInfo, method, v2, v3, v4);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__172___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  struct GachaRqParamData_o *v21; // x8
  WarEntity_o *v22; // x20
  WebViewManager_o *Instance; // x0
  GachaDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *v25; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x0
  struct GachaRqParamData_o *v28; // x8
  GachaEntity_o *v29; // x0
  bool HasFlag; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int32_t id; // w27
  int64_t coordinates; // x20
  bool v40; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  struct GachaRqParamData_o *v46; // x8
  int32_t v47; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaEntity_o *Entity; // x0
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct GachaRqParamData_o *v56; // x8
  BonusSelectSummonConfirmDialog_o *v57; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v59; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v64; // x23
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v69; // x24
  PlayMakerFSM_o *fsm; // x0
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v71; // x26

  if ( (byte_40FBFA9 & 1) == 0 )
  {
    sub_B16FFC(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    sub_B16FFC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v12);
    sub_B16FFC(&Method_SummonControl_SetDispBtn__, v13);
    sub_B16FFC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v14);
    sub_B16FFC(&Method_SummonControl_confirmCautionResult__, v15);
    sub_B16FFC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v16);
    sub_B16FFC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_3039, v18);
    byte_40FBFA9 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( Master_WarQuestSelectionMaster )
      {
        Entity = (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    gachaParamData->fields.gachaId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( Entity )
        {
          if ( GachaEntity__HasFlag(Entity, 8, 0LL) )
          {
            bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
            if ( bonusSelectSummonConfirmDialog )
            {
              BonusSelectSummonConfirmDialog__Init(
                bonusSelectSummonConfirmDialog,
                this->fields.bonusSelectAssetManager,
                0LL);
              v56 = this->fields.gachaParamData;
              if ( v56 )
              {
                v57 = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v56->fields.gachaId;
                v59 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v52,
                                                                          v53,
                                                                          v54,
                                                                          v55);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v59,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v64 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v60,
                                                                          v61,
                                                                          v62,
                                                                          v63);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v64,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v69 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B170CC(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v65,
                                                                                  v66,
                                                                                  v67,
                                                                                  v68);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v69,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( v57 )
                {
                  BonusSelectSummonConfirmDialog__Open(v57, gachaId, v59, v64, v69, 0LL, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            fsm = this->fields.fsm;
            if ( fsm )
            {
              PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
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
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
  v21 = this->fields.gachaParamData;
  if ( !v21 )
    goto LABEL_43;
  if ( !v20 )
    goto LABEL_43;
  v22 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v20,
          v21->fields.gachaId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (GachaDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v25 = this->fields.gachaParamData;
  if ( !v25 )
    goto LABEL_43;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        MasterData_WarQuestSelectionMaster,
                        v25->fields.gachaId,
                        0LL);
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
  v28 = this->fields.gachaParamData;
  if ( !v28 )
    goto LABEL_43;
  if ( !v27 )
    goto LABEL_43;
  v29 = (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           v27,
                           v28->fields.gachaId,
                           (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !v29 )
    goto LABEL_43;
  HasFlag = GachaEntity__HasFlag(v29, 8, 0LL);
  if ( !GachaDetailEntity || !v22 )
    goto LABEL_43;
  cautionDlgInfo = this->fields.cautionDlgInfo;
  title = GachaDetailEntity->fields.title;
  message = GachaDetailEntity->fields.message;
  id = v22[1].fields.id;
  coordinates = (int64_t)v22->fields.coordinates;
  v40 = HasFlag;
  v41 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                      SummonCautionDlgComponent_CallbackFunc_TypeInfo,
                                                      v31,
                                                      v32,
                                                      v33,
                                                      v34);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v41,
    (Il2CppObject *)this,
    Method_SummonControl_confirmCautionResult__,
    0LL);
  if ( v40 )
  {
    v46 = this->fields.gachaParamData;
    if ( !v46 )
      goto LABEL_43;
    v47 = v46->fields.gachaId;
  }
  else
  {
    v47 = 0;
  }
  v71 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B170CC(
                                                              BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                              v42,
                                                              v43,
                                                              v44,
                                                              v45);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v71,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_B170D4();
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    id > 0,
    coordinates,
    v41,
    v47,
    v71,
    this->fields.bonusSelectAssetManager,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_40FBFBD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, flg);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SummonControl__DialogCallBack_b__251_0__, v6);
    byte_40FBFBD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__251_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFBE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080, method);
    byte_40FBFBE = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3080, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_40FBF9B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20980, result);
    byte_40FBF9B = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_VaildGachaInfo__o *v18; // x21
  unsigned __int64 v19; // x22
  System_Collections_Generic_List_VaildGachaInfo__o *v20; // x27
  __int64 v21; // x25
  VaildGachaInfo_o *v22; // x26
  VaildGachaInfo_o *v23; // x21
  int size; // w8
  VaildGachaInfo_o *v25; // x8

  if ( (byte_40FBF72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, baseGachaList);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v10);
    byte_40FBF72 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_VaildGachaInfo__TypeInfo,
                                                                                                  baseGachaList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  v18 = *baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_B170D4();
  v19 = 0LL;
  while ( (__int64)v19 < v18->fields._size )
  {
    v20 = v18;
    if ( v19 >= (unsigned int)v18->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v21 = 0LL;
    v22 = v18->fields._items->m_Items[v19];
    v23 = v22;
    while ( 1 )
    {
      size = v20->fields._size;
      if ( (int)v21 >= size )
        break;
      if ( size <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v22 )
      {
        v25 = v20->fields._items->m_Items[v21];
        if ( v25 )
        {
          if ( v22->fields.id != v25->fields.id && v22->fields.slotId == v25->fields.slotId )
          {
            if ( !v23 )
              goto LABEL_25;
            if ( v23->fields.priority < v25->fields.priority )
              v23 = v20->fields._items->m_Items[v21];
          }
          v20 = *baseGachaList;
          ++v21;
          if ( *baseGachaList )
            continue;
        }
      }
      goto LABEL_25;
    }
    if ( v11 )
    {
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v11,
              (WarBoardManager_TaskList_o *)v23,
              (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
      v18 = *baseGachaList;
      ++v19;
      if ( *baseGachaList )
        continue;
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v11;
  sub_B16F98((BattleServantConfConponent_o *)baseGachaList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_40FBF5E & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FBF5E = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  struct BannerEntity_o *SelectedBannerEntity_k__BackingField; // x8
  System_String_o *linkBody; // x19
  System_String_array *v8; // x0
  __int64 v9; // x2
  System_String_array *v10; // x1
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x19
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v21; // x2
  System_String_o *v22; // x19
  __int64 v23; // x8
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBF83 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40FBF83 = 1;
  }
  result = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40FC006 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40FC006 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_40FC006 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40FC006 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  SelectedBannerEntity_k__BackingField = v5->static_fields->_SelectedBannerEntity_k__BackingField;
  if ( !SelectedBannerEntity_k__BackingField )
    goto LABEL_40;
  linkBody = SelectedBannerEntity_k__BackingField->fields.linkBody;
  v8 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v2);
  if ( !v8 )
    goto LABEL_40;
  v10 = v8;
  if ( !v8->max_length )
    goto LABEL_41;
  LOWORD(v8->m_Items[0]) = 47;
  if ( !linkBody )
    goto LABEL_40;
  v18 = System_String__Split(linkBody, (System_Char_array *)v8, 0LL);
  if ( !byte_40F6092 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40F6092 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !v18 )
    goto LABEL_40;
  if ( (int)v18->max_length < 2 )
    return 0;
  v22 = v18->m_Items[1];
  v8 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v21);
  if ( !v8 )
    goto LABEL_40;
  v10 = v8;
  if ( !v8->max_length )
    goto LABEL_41;
  LOWORD(v8->m_Items[0]) = 44;
  if ( !v22 || (v8 = System_String__Split(v22, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_40:
    sub_B170D4();
  v23 = *(_QWORD *)&v8->max_length;
  if ( v23 )
  {
    result = 0;
    if ( (_DWORD)v23 )
    {
      System_Int32__TryParse(v8->m_Items[0], &result, 0LL);
      return result;
    }
LABEL_41:
    sub_B17100(v8, v10, v9);
    sub_B170A0();
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

  if ( (byte_40FBFB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&classId);
    byte_40FBFB6 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
  UnityEngine_GameObject_o *v18; // x0
  PlayMakerFSM_o *v19; // x0

  if ( (byte_40FBF68 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6309, data);
    sub_B16FFC(&StringLiteral_16960, v10);
    sub_B16FFC(&StringLiteral_5469, v11);
    byte_40FBF68 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6309, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_B16F98(
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
  v16 = (System_String_o *)StringLiteral_16960;
  v18 = SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_16960, v17);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, v18, v16, 0LL),
        (v19 = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(v19, (System_String_o *)StringLiteral_5469, 0LL);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICenterOnChild_o *centerChild; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct VaildGachaInfo_o *v14; // x21
  int32_t y_low; // w20
  int32_t x_low; // w24
  struct GachaBannerComponent_o *v17; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Behaviour_o *summonMBannerLeftArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerRightArrowBtn; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *Child; // x0
  SummonInfoControl_o *summonInfoCtr; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBF76 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2940, v4);
    byte_40FBF76 = 1;
  }
  centerChild = this->fields.centerChild;
  if ( !centerChild )
    goto LABEL_27;
  mCenteredObject = centerChild->fields.mCenteredObject;
  if ( !mCenteredObject )
    goto LABEL_27;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mCenteredObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_27;
  v14 = *(struct VaildGachaInfo_o **)&Component_srcLineSprite->fields.miLineH;
  y_low = LODWORD(Component_srcLineSprite->fields.mcFrom.fields.y);
  x_low = LODWORD(Component_srcLineSprite->fields.mcTo.fields.x);
  v17 = (struct GachaBannerComponent_o *)Component_srcLineSprite;
  if ( this->fields.isDragging )
    goto LABEL_30;
  currentBannerComp = (UnityEngine_Object_o *)this->fields.currentBannerComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, currentBannerComp, 0LL)
    || v14 != this->fields.currentGachaInfo
    || y_low != this->fields.currentIdx
    || x_low != this->fields.currentMoveIdx )
  {
LABEL_30:
    if ( this->fields.isDoneTutorial )
    {
      leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
      if ( !leftArrowBtn )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL);
      rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
      if ( !rightArrowBtn )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled(rightArrowBtn, 1, 0LL);
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_27;
      TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
      summonMBannerLeftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
      if ( !summonMBannerLeftArrowBtn )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled(summonMBannerLeftArrowBtn, 1, 0LL);
      summonMBannerRightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
      if ( !summonMBannerRightArrowBtn )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled(summonMBannerRightArrowBtn, 1, 0LL);
    }
    this->fields.isDragging = 0;
    this->fields.currentBannerComp = v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentBannerComp,
      (System_Int32_array **)v17,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    this->fields.currentGachaInfo = v14;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentGachaInfo,
      (System_Int32_array **)v14,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    this->fields.currentIdx = y_low;
    this->fields.currentMoveIdx = x_low;
    SummonControl__setSliderIcon(this, y_low, v30);
    summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
    if ( summonMBannerLoopCtr )
    {
      summonMBannerCenterChild = this->fields.summonMBannerCenterChild;
      transform = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL);
      if ( transform )
      {
        Child = UnityEngine_Transform__GetChild(transform, this->fields.currentMoveIdx, 0LL);
        if ( summonMBannerCenterChild )
        {
          UICenterOnChild__CenterOn_35064772(summonMBannerCenterChild, Child, 1, 0LL);
          summonInfoCtr = this->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 1, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
            SummonControl__UpdateSummonInfoControlLayout(this, v36);
            SummonControl__showHelpImg(this, v37);
            fsm = this->fields.fsm;
            if ( fsm )
            {
              PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_2940, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B170D4();
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct VaildGachaInfo_o *mcLineSprite; // x20
  int32_t mcTweenAlphaP; // w24
  int32_t mcTweenAlphaP_high; // w25
  struct SummonMiniBannerComponent_o *v16; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x23
  bool *p_isNotCenterOnSync; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UICenterOnChild_o *centerChild; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *Child; // x0

  if ( (byte_40FBF77 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FBF77 = 1;
  }
  summonMBannerCenterChild = this->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_21;
  mCenteredObject = summonMBannerCenterChild->fields.mCenteredObject;
  if ( !mCenteredObject )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mCenteredObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_21;
  mcLineSprite = (struct VaildGachaInfo_o *)Component_srcLineSprite->fields.mcLineSprite;
  mcTweenAlphaP = (int32_t)Component_srcLineSprite->fields.mcTweenAlphaP;
  mcTweenAlphaP_high = HIDWORD(Component_srcLineSprite->fields.mcTweenAlphaP);
  v16 = (struct SummonMiniBannerComponent_o *)Component_srcLineSprite;
  if ( this->fields.isDragging )
    goto LABEL_15;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)this->fields.currentSummonMBannerComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, currentSummonMBannerComponent, 0LL)
    || mcLineSprite != this->fields.currentGachaInfo
    || mcTweenAlphaP != this->fields.currentIdx
    || mcTweenAlphaP_high != this->fields.currentMoveIdx )
  {
LABEL_15:
    this->fields.currentSummonMBannerComponent = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentSummonMBannerComponent,
      (System_Int32_array **)v16,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    this->fields.currentGachaInfo = mcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentGachaInfo,
      (System_Int32_array **)mcLineSprite,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    p_isNotCenterOnSync = &this->fields.isNotCenterOnSync;
    if ( this->fields.isNotCenterOnSync )
      goto LABEL_20;
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
    this->fields.currentIdx = mcTweenAlphaP;
    this->fields.currentMoveIdx = mcTweenAlphaP_high;
    if ( bannerLoopCtr )
    {
      centerChild = this->fields.centerChild;
      transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( transform )
      {
        Child = UnityEngine_Transform__GetChild(transform, this->fields.currentMoveIdx, 0LL);
        if ( centerChild )
        {
          UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  p_isNotCenterOnSync = &this->fields.isNotCenterOnSync;
LABEL_20:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_40FBFD1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3034, method);
    byte_40FBFD1 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B170D4();
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3034, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40FBFD4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SummonControl_OnClickHelpClose__, v4);
    byte_40FBFD4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 0, 0LL),
        (currentGachaInfo = this->fields.currentGachaInfo) == 0LL) )
  {
    sub_B170D4();
  }
  v7 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v7, 0LL);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(EventTutorialEntity, v13, 0LL);
}


void __fastcall SummonControl__OnClickHelpClose(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  GachaHistoryRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_40FBFD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_GachaHistoryRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&Method_SummonControl__OnClickHisotry_b__283_0__, v6);
    byte_40FBFD5 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__283_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (GachaHistoryRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v11,
                                                                 (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  GachaHistoryRequest__beginRequest(Request_WarBoardWallAttackRequest, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerLeftArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerRightArrowBtn; // x0
  SummonInfoControl_o *summonInfoCtr; // x0
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UICenterOnChild_o *centerChild; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0

  if ( (byte_40FBF7B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&moveIdx);
    sub_B16FFC(&StringLiteral_12737, v5);
    byte_40FBF7B = 1;
  }
  if ( this->fields.currentMoveIdx != moveIdx )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !rightArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL);
    summonMBannerLeftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !summonMBannerLeftArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(summonMBannerLeftArrowBtn, 0, 0LL);
    summonMBannerRightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !summonMBannerRightArrowBtn )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(summonMBannerRightArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12737,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    summonInfoCtr = this->fields.summonInfoCtr;
    if ( !summonInfoCtr )
      goto LABEL_20;
    SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 0, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_20;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
    this->fields.isDragging = 1;
    if ( !bannerLoopCtr )
      goto LABEL_20;
    centerChild = this->fields.centerChild;
    transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
    if ( !transform
      || (Child = UnityEngine_Transform__GetChild(transform, moveIdx, 0LL), !centerChild)
      || (UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL),
          (summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (v18 = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL)) == 0LL)
      || (v19 = UnityEngine_Transform__GetChild(v18, moveIdx, 0LL), !summonMBannerCenterChild) )
    {
LABEL_20:
      sub_B170D4();
    }
    UICenterOnChild__CenterOn_35064772(summonMBannerCenterChild, v19, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40FBF97 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3039, v3);
    byte_40FBF97 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL),
        (fragmentsExchangeButton = this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive(fragmentsExchangeButton, 0, 0LL), (fsm = this->fields.fsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v7);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FBF98 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBF98 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v3);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FBFD3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SummonControl_reDispSummonBannerList__, v6);
    byte_40FBFD3 = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_B170D4();
  SummonInfoControl__OnClickDetail(summonInfoCtr, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FBF9E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk);
    byte_40FBF9E = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0
  TitleInfoControl_o *titleInfo; // x0
  UIScrollView_o *summonBannerScrollView; // x0
  UIScrollView_o *summonMBannerScrollView; // x0

  if ( (byte_40FBF75 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12737, method);
    byte_40FBF75 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12737,
    0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL),
        MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL),
        (summonBannerScrollView = this->fields.summonBannerScrollView) == 0LL)
    || (UIScrollView__DisableSpring(summonBannerScrollView, 0LL),
        (summonMBannerScrollView = this->fields.summonMBannerScrollView) == 0LL) )
  {
    sub_B170D4();
  }
  UIScrollView__DisableSpring(summonMBannerScrollView, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_40FBFD2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_SummonControl__OnEndSummonEffect_b__280_0__, v6);
    byte_40FBFD2 = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__280_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v14, 0LL);
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
  UserItemMaster_o *v11; // x0
  int32_t UserStoneFragmentNum; // w0
  int32_t v13; // w22
  CommonUI_o *Instance; // x21
  const MethodInfo *v15; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_int__o *v21; // x24

  if ( (byte_40FBF99 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SummonControl_RequestStoneFragmentsShop__, v8);
    byte_40FBF99 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
  v11 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !v11
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(v11, 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v13 = UserStoneFragmentNum,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v15),
        v21 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v17, v18, v19, v20),
        System_Action_int____ctor(
          v21,
          (Il2CppObject *)this,
          Method_SummonControl_RequestStoneFragmentsShop__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__),
        !Instance) )
  {
LABEL_12:
    sub_B170D4();
  }
  if ( v13 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v21, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v21, 0LL);
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
  int32_t TargetId; // w0
  ItemEntity_o *Entity; // x22
  const MethodInfo *v16; // x1
  ShopEntity_o *v17; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v19; // x1
  ShopEntity_o *v20; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v22; // x1
  ShopEntity_o *v23; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *Instance; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_bool__o *v30; // x24

  if ( (byte_40FBF9D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, *(_QWORD *)&buyCount);
    sub_B16FFC(&System_Action_bool__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_SummonControl_OnCloseResultDialog__, v10);
    byte_40FBF9D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v12);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_10;
  TargetId = ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             Master_WarQuestSelectionMaster,
                             TargetId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v17 = SummonControl__get_StoneFragmentsShopEntity(this, v16);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v17,
                                               buyCount,
                                               0LL);
  v20 = SummonControl__get_StoneFragmentsShopEntity(this, v19);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v20,
                                           Entity,
                                           buyCount,
                                           0LL);
  v23 = SummonControl__get_StoneFragmentsShopEntity(this, v22);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v23,
                                          Entity,
                                          0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v26, v27, v28, v29);
  System_Action_bool____ctor(
    v30,
    (Il2CppObject *)this,
    Method_SummonControl_OnCloseResultDialog__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !Instance )
LABEL_10:
    sub_B170D4();
  CommonUI__OpenItemExchangeResultDialog(
    Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v30,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__RequestStoneFragmentsShop(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v12; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0

  if ( (byte_40FBF9A & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseRequest___, *(_QWORD *)&buyCount);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_SummonControl_EndRequestStoneFragmentsShop__, v9);
    byte_40FBF9A = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   *(_QWORD *)&buyCount,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v10,
                                                               (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v12);
    if ( !StoneFragmentsShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B170D4();
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
  WebViewObject_o *Component_WebViewObject; // x0
  UITweener_o *v6; // x22
  WebViewObject_o *v7; // x0
  UITweener_o *v8; // x20
  WebViewObject_o *v9; // x0
  UITweener_o *v10; // x21
  WebViewObject_o *v11; // x19

  if ( (byte_40FBF6B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenPosition___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FBF6B = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_32;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              leftArrowSprite,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_32;
  v6 = (UITweener_o *)Component_WebViewObject;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.rightArrowSprite,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_32;
  v8 = (UITweener_o *)v7;
  v9 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_32;
  v10 = (UITweener_o *)v9;
  v11 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
  {
    if ( !v6 )
      goto LABEL_32;
    UITweener__ResetToBeginning(v6, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
  {
    if ( !v10 )
      goto LABEL_32;
    UITweener__ResetToBeginning(v10, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( !v8 )
      goto LABEL_32;
    UITweener__ResetToBeginning(v8, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
  {
    if ( v11 )
    {
      UITweener__ResetToBeginning((UITweener_o *)v11, 0LL);
      return;
    }
LABEL_32:
    sub_B170D4();
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *fsm; // x0
  __int64 *v5; // x8

  if ( (byte_40FBFB1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11041, method);
    sub_B16FFC(&StringLiteral_11042, v3);
    byte_40FBFB1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  if ( this->fields.isResult )
    v5 = &StringLiteral_11042;
  else
    v5 = &StringLiteral_11041;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *summonBannerScrollView; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Component_o *v8; // x0
  float v9; // s8
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Component_o *v11; // x0
  UICenterOnChild_o *centerChild; // x20
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Component_o *summonMBannerScrollView; // x0
  WebViewObject_o *v18; // x20
  const MethodInfo *v19; // x1
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Transform_o *v26; // x0
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_40FBF78 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FBF78 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_37;
  transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !transform )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
  {
    summonBannerScrollView = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
    if ( !summonBannerScrollView )
      goto LABEL_37;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                summonBannerScrollView,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_37;
      v8 = (UnityEngine_Component_o *)this->fields.summonBannerScrollView;
      if ( !v8 )
        goto LABEL_37;
      v9 = *(float *)&Component_WebViewObject->fields.onJS;
      v10 = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !v10 )
        goto LABEL_37;
      if ( v9 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition(v10, 0LL)) )
      {
        v11 = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
        if ( !v11 )
          goto LABEL_37;
        centerChild = this->fields.centerChild;
        v13 = UnityEngine_Component__get_transform(v11, 0LL);
        if ( !v13 )
          goto LABEL_37;
        Child = UnityEngine_Transform__GetChild(v13, this->fields.currentMoveIdx, 0LL);
        if ( !centerChild )
          goto LABEL_37;
        UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL);
      }
    }
  }
  summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !summonMBannerLoopCtr )
    goto LABEL_37;
  v16 = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL);
  if ( !v16 )
    goto LABEL_37;
  if ( UnityEngine_Transform__get_childCount(v16, 0LL) >= 1 )
  {
    summonMBannerScrollView = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
    if ( !summonMBannerScrollView )
      goto LABEL_37;
    v18 = UnityEngine_Component__GetComponent_WebViewObject_(
            summonMBannerScrollView,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
    {
      if ( !v18 )
        goto LABEL_37;
      v20 = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !v20 )
        goto LABEL_37;
      v21 = *(float *)&v18->fields.onJS;
      v22 = UnityEngine_Component__get_transform(v20, 0LL);
      if ( !v22 )
        goto LABEL_37;
      if ( v21 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition(v22, 0LL)) )
      {
        v23 = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
        if ( v23 )
        {
          summonMBannerCenterChild = this->fields.summonMBannerCenterChild;
          v25 = UnityEngine_Component__get_transform(v23, 0LL);
          if ( v25 )
          {
            v26 = UnityEngine_Transform__GetChild(v25, this->fields.currentMoveIdx, 0LL);
            if ( summonMBannerCenterChild )
            {
              UICenterOnChild__CenterOn_35064772(summonMBannerCenterChild, v26, 1, 0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_B170D4();
      }
    }
    else
    {
      v27 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x20
  __int64 v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x8
  unsigned __int64 v53; // x23
  bool v54; // w21
  UnityEngine_GameObject_o *bgRoot; // x0
  System_String_o *v56; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBFB4 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, isDisp);
    sub_B16FFC(&StringLiteral_17194, v5);
    sub_B16FFC(&StringLiteral_21746, v6);
    sub_B16FFC(&StringLiteral_21747, v7);
    sub_B16FFC(&StringLiteral_21748, v8);
    sub_B16FFC(&StringLiteral_21745, v9);
    sub_B16FFC(&StringLiteral_21749, v10);
    sub_B16FFC(&StringLiteral_21744, v11);
    byte_40FBFB4 = 1;
  }
  v12 = sub_B17014(string___TypeInfo, 7LL, method);
  if ( !v12 )
LABEL_47:
    sub_B170D4();
  v19 = v12;
  v20 = StringLiteral_21744;
  if ( StringLiteral_21744 )
  {
    v20 = sub_B170BC(StringLiteral_21744, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21744;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_48;
  *(_QWORD *)(v19 + 32) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 32), v21, v13, v14, v15, v16, v17, v18);
  v20 = StringLiteral_21745;
  if ( StringLiteral_21745 )
  {
    v20 = sub_B170BC(StringLiteral_21745, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21745;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_48;
  *(_QWORD *)(v19 + 40) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 40), v21, v13, v22, v23, v24, v25, v26);
  v20 = StringLiteral_21746;
  if ( StringLiteral_21746 )
  {
    v20 = sub_B170BC(StringLiteral_21746, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21746;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 2u )
    goto LABEL_48;
  *(_QWORD *)(v19 + 48) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 48), v21, v13, v27, v28, v29, v30, v31);
  v20 = StringLiteral_21747;
  if ( StringLiteral_21747 )
  {
    v20 = sub_B170BC(StringLiteral_21747, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21747;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 3u )
    goto LABEL_48;
  *(_QWORD *)(v19 + 56) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 56), v21, v13, v32, v33, v34, v35, v36);
  v20 = StringLiteral_21748;
  if ( StringLiteral_21748 )
  {
    v20 = sub_B170BC(StringLiteral_21748, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21748;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 4u )
    goto LABEL_48;
  *(_QWORD *)(v19 + 64) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 64), v21, v13, v37, v38, v39, v40, v41);
  v20 = StringLiteral_21749;
  if ( StringLiteral_21749 )
  {
    v20 = sub_B170BC(StringLiteral_21749, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !v20 )
      goto LABEL_49;
    v21 = (System_Int32_array **)StringLiteral_21749;
  }
  else
  {
    v21 = 0LL;
  }
  if ( *(_DWORD *)(v19 + 24) <= 5u )
    goto LABEL_48;
  *(_QWORD *)(v19 + 72) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 72), v21, v13, v42, v43, v44, v45, v46);
  v20 = StringLiteral_17194;
  if ( StringLiteral_17194 )
  {
    v20 = sub_B170BC(StringLiteral_17194, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( v20 )
    {
      v21 = (System_Int32_array **)StringLiteral_17194;
      goto LABEL_38;
    }
LABEL_49:
    sub_B170F4(v20);
    sub_B170A0();
  }
  v21 = 0LL;
LABEL_38:
  if ( *(_DWORD *)(v19 + 24) <= 6u )
    goto LABEL_48;
  *(_QWORD *)(v19 + 80) = v21;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 80), v21, v13, v47, v48, v49, v50, v51);
  v52 = *(_QWORD *)(v19 + 24);
  if ( (int)v52 >= 1 )
  {
    v53 = 0LL;
    v54 = isDisp;
    while ( v53 < (unsigned int)v52 )
    {
      bgRoot = this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_47;
      v56 = *(System_String_o **)(v19 + 32 + 8 * v53);
      transform = UnityEngine_GameObject__get_transform(bgRoot, 0LL);
      NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(transform, v56, 1, 0LL);
      if ( !NodeFromName )
        goto LABEL_47;
      gameObject = UnityEngine_Component__get_gameObject(NodeFromName, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(gameObject, v54, 0LL);
      LODWORD(v52) = *(_DWORD *)(v19 + 24);
      if ( (__int64)++v53 >= (int)v52 )
        return;
    }
LABEL_48:
    sub_B17100(v20, v21, v13);
    sub_B170A0();
  }
}


void __fastcall SummonControl__SetDispBtn(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0
  bool v5; // w20
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x2

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (v5 = isDisp,
        SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, isDisp, 0LL),
        (titleInfo = this->fields.titleInfo) == 0LL) )
  {
    sub_B170D4();
  }
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, v5, 0LL);
  MainMenuBar__SetMenuBtnColliderEnable(v5, 0, 0LL);
  SummonControl__setDispSummonInfo(this, v5, v7);
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
    sub_B170D4();
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
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t FragmentCountToExchangeForStone; // w20
  UserItemMaster_o *v13; // x0
  int32_t UserStoneFragmentNum; // w0
  int v15; // w21
  UnityEngine_GameObject_o *v16; // x0
  MasterMissionComponent_c *v17; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  System_String_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v23; // w1
  System_String_o *v24; // x0
  UnityEngine_Component_o *fragmentsLimit; // x0
  __int64 v26; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBF96 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6);
    sub_B16FFC(&MasterMissionComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16922, v8);
    byte_40FBF96 = 1;
  }
  v26 = 0LL;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            fragmentsExchangeButton,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(Component_srcLineSprite, (System_String_o *)StringLiteral_16922, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_32;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
  v13 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !v13 )
    goto LABEL_32;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(v13, 0LL);
  v15 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v15 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  HIDWORD(v26) = v15;
  v16 = this->fields.fragmentsExchangeButton;
  if ( !v16 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v16, this->fields.haveStone + v15 >= this->fields.needStone, 0LL);
  v17 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v17 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v17->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v15 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    v24 = System_Int32__ToString((int32_t)&v26 + 4, 0LL);
    if ( fragmentsCount )
    {
      UILabel__set_text(fragmentsCount, v24, 0LL);
      fragmentsLimit = (UnityEngine_Component_o *)this->fields.fragmentsLimit;
      if ( fragmentsLimit )
      {
        gameObject = UnityEngine_Component__get_gameObject(fragmentsLimit, 0LL);
        if ( gameObject )
        {
          v23 = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  LODWORD(v26) = STONE_EXCHENGE_DISP_LIMIT;
  v20 = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !fragmentsCount )
    goto LABEL_32;
  UILabel__set_text(fragmentsCount, v20, 0LL);
  v21 = (UnityEngine_Component_o *)this->fields.fragmentsLimit;
  if ( !v21 )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  v23 = 1;
LABEL_31:
  UnityEngine_GameObject__SetActive(gameObject, v23, 0LL);
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
    sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x21

  if ( (byte_40FBFA8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl__SummonSceneRefresh_b__225_0__, v4);
    byte_40FBFA8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__225_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, 0.0, v10, 0LL);
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
  System_String_o *String_34837456; // x21
  UserPresentBoxWindow_resData_array *v16; // x0
  SelectBonusData_o *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int max_length; // w8
  __int64 v25; // x9

  if ( (byte_40FBF9F & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_DeserializeArray_SelectBonusData___, selectBonusData);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    this = (SummonControl_o *)sub_B16FFC(&SummonControl_TypeInfo, v7);
    byte_40FBF9F = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)selectBonusData, 0LL, v8, v9, v10, v11, v12, v13);
  v14 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_34837456, 0LL) )
    goto LABEL_7;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          (Il2CppObject *)String_34837456,
          (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v16 )
  {
    max_length = v16->max_length;
    if ( max_length < 1 )
    {
LABEL_7:
      LOBYTE(v16) = 0;
      return (char)v16;
    }
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
      {
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v17 = (SelectBonusData_o *)v16->m_Items[v25];
      if ( !v17 )
        sub_B170D4();
      if ( v17->fields.gachaId == gachaId )
        break;
      if ( (int)++v25 >= max_length )
        goto LABEL_7;
    }
    *selectBonusData = v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)selectBonusData,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    LOBYTE(v16) = 1;
  }
  return (char)v16;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  VaildGachaInfo_o *v5; // x0
  bool HasFlag; // w0
  struct SummonInfoControl_o *summonInfoCtr; // x9
  bool v8; // w8
  SummonInfoLayout_o *summonInfoLayout; // x0

  if ( (byte_40FBF79 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, method);
    byte_40FBF79 = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_12;
  currentIdx = this->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v5 = vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !v5
    || (HasFlag = VaildGachaInfo__HasFlag(v5, 2, 0LL), (summonInfoCtr = this->fields.summonInfoCtr) == 0LL)
    || (v8 = HasFlag, (summonInfoLayout = summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  if ( v8 )
    SummonInfoLayout__UpdatePc(summonInfoLayout, 0LL);
  else
    SummonInfoLayout__UpdateDefault(summonInfoLayout, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBFBA & 1) == 0 )
  {
    sub_B16FFC(&SummonControl__WaitBattleChrLoad_d__247_TypeInfo, method);
    byte_40FBFBA = 1;
  }
  v6 = sub_B170CC(SummonControl__WaitBattleChrLoad_d__247_TypeInfo, method, v2, v3, v4);
  SummonControl__WaitBattleChrLoad_d__247___ctor((SummonControl__WaitBattleChrLoad_d__247_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SummonControl___DialogCallBack_b__251_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21
  CommonUI_o *v12; // x19

  if ( (byte_40FBFE5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl_EndCloseDialogCallBack__, v5);
    byte_40FBFE5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
  v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__283_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  if ( !this->fields.historyDialog )
    sub_B170D4();
  SummonHistoryDialog__Open(this->fields.historyDialog, this->fields.currentGachaInfo, method);
}


void __fastcall SummonControl___OnEndSummonEffect_b__280_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFE9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5468, method);
    byte_40FBFE9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5468, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__225_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1
  AvalonSceneManager_o *v6; // x0

  if ( (byte_40FBFE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40FBFE1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        SummonControl__quit(this, v5),
        (v6 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__transitionScene(v6, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__147_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x21

  if ( (byte_40FBFDC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl__exeFormation_b__147_2__, v4);
    byte_40FBFDC = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__147_2__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseTutorialArrowMark(Instance, v10, 0LL);
}


void __fastcall SummonControl___exeFormation_b__147_2(SummonControl_o *this, const MethodInfo *method)
{
  if ( (byte_40FBFDD & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FBFDD = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(2, 0LL);
  this->fields.tutorialKind = 0;
  this->fields.isDoneTutorial = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___executeEnhanceTresureDevice_b__268_0(
        SummonControl_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFE8 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_5467, v5);
    byte_40FBFE8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance
    || (CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5467, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__231_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFE2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12294, method);
    byte_40FBFE2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12294, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__146_1(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x21

  if ( (byte_40FBFDB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl__openAfterSummonInfo_b__146_2__, v4);
    byte_40FBFDB = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__146_2__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseTutorialNotificationDialogArrow_18262716(Instance, v10, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__146_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__263_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0
  CommonUI_o *Instance; // x19

  if ( (byte_40FBFE7 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_5485, v4);
    byte_40FBFE7 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_12;
  SummonResultComponent__clearResultList(summonResultInfo, 0LL);
  v6 = (UnityEngine_Component_o *)this->fields.summonResultInfo;
  if ( !v6 )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5485, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
LABEL_12:
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__178_0(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_40FBFDF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12737, method);
    byte_40FBFDF = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12737,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl___setUserResourceDisp_b__154_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBFDE & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&stoneCount);
    sub_B16FFC(&StringLiteral_23433, v5);
    byte_40FBFDE = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v9 = stoneCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_23433, v7, 0LL);
  if ( !currentStoneNumLb )
    sub_B170D4();
  UILabel__set_text(currentStoneNumLb, v8, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__214_0(SummonControl_o *this, const MethodInfo *method)
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
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  UILabel_o *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v16; // x0
  struct BonusSelectSummonConfirmDialog_o *Component_srcLineSprite; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *v30; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  SummonControl___c_c *v47; // x0
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__214_1; // x19
  Il2CppObject *v50; // x25
  struct SummonControl___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_40FBFE0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v7);
    sub_B16FFC(&Method_SummonControl_SetDispBtn__, v8);
    sub_B16FFC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v9);
    sub_B16FFC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v10);
    sub_B16FFC(&Method_SummonControl___c__showConfirmDlg_b__214_1__, v11);
    sub_B16FFC(&SummonControl___c_TypeInfo, v12);
    byte_40FBFE0 = 1;
  }
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_20;
  ConfirmDialogPrefab_k__BackingField = (UILabel_o *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      ConfirmDialogPrefab_k__BackingField,
                                      transform,
                                      (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  if ( !v16 )
    goto LABEL_20;
  Component_srcLineSprite = (struct BonusSelectSummonConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v16,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  this->fields.bonusSelectSummonConfirmDialog = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bonusSelectSummonConfirmDialog,
    (System_Int32_array **)Component_srcLineSprite,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
  if ( !bonusSelectSummonConfirmDialog )
    goto LABEL_20;
  BonusSelectSummonConfirmDialog__Init(bonusSelectSummonConfirmDialog, this->fields.bonusSelectAssetManager, 0LL);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_20;
  v30 = this->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v32 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v25,
                                                            v26,
                                                            v27,
                                                            v28);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v32, (Il2CppObject *)this, Method_SummonControl_SetDispBtn__, 0LL);
  v37 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                            BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                            v33,
                                                            v34,
                                                            v35,
                                                            v36);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v37,
    (Il2CppObject *)this,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v42 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B170CC(
                                                                    BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                    v38,
                                                                    v39,
                                                                    v40,
                                                                    v41);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v42,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  v47 = SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v47 = SummonControl___c_TypeInfo;
  }
  static_fields = v47->static_fields;
  _9__214_1 = static_fields->__9__214_1;
  if ( !_9__214_1 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)static_fields->__9;
    _9__214_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(_9__214_1, v50, Method_SummonControl___c__showConfirmDlg_b__214_1__, 0LL);
    v51 = SummonControl___c_TypeInfo->static_fields;
    v51->__9__214_1 = _9__214_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v51->__9__214_1,
      (System_Int32_array **)_9__214_1,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !v30 )
LABEL_20:
    sub_B170D4();
  BonusSelectSummonConfirmDialog__Open(v30, gachaId, v32, v37, v42, _9__214_1, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__238_0(SummonControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *maskObject; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v36; // x1
  UnityEngine_Component_o *summonInstance; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  SummonEffectComponent_o **p_summonComp; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  SummonEffectComponent_o *summonComp; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x8
  SummonEffectComponent_o *v50; // x8
  char v51; // w9
  struct GachaRqParamData_o *v52; // x8
  struct SummonEffectComponent_o *v53; // x9
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v55; // x0
  WebViewManager_o *v56; // x0
  WebViewManager_o *v57; // x0
  ConstantStrMaster_o *v58; // x0
  System_String_o *Value; // x0
  __int64 v60; // x2
  System_String_o *v61; // x21
  System_Char_array *v62; // x0
  __int64 v63; // x2
  System_Char_array *v64; // x1
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x21
  SummonControl___c_c *v70; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__238_1; // x24
  Il2CppObject *v73; // x25
  struct SummonControl___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Collections_Generic_List_int__o *v82; // x24
  float v83; // s0
  struct GachaInfos_array *v84; // x8
  float v85; // s8
  il2cpp_array_size_t v86; // w20
  GachaInfos_o *v87; // x23
  bool IsCommandCode; // w0
  int32_t objectId; // w1
  WarEntity_o *Entity; // x0
  int32_t flag; // w26
  char v92; // w25
  int32_t Data; // w28
  int32_t v94; // w21
  char isNew; // w27
  ServantEntity_o *v96; // x0
  int32_t type; // w27
  ServantEntity_o *v98; // x21
  bool IsServant; // w25
  ServantLimitEntity_o *v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int v105; // w8
  bool v106; // w0
  WeightRate_int__o *v107; // x28
  int32_t v108; // w0
  _BOOL4 v109; // w22
  ServantVoiceMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  int32_t v116; // w0
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v118; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v119; // [xsp+28h] [xbp-88h]
  ServantLimitMaster_o *v120; // [xsp+30h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+38h] [xbp-78h]
  int max_length; // [xsp+4Ch] [xbp-64h]

  if ( (byte_40FBFE3 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantVoiceMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v13);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v14);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&SoundManager_TypeInfo, v21);
    sub_B16FFC(&Method_SummonControl___c__showSummonEffect_b__238_1__, v22);
    sub_B16FFC(&SummonControl___c_TypeInfo, v23);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v24);
    sub_B16FFC(&Method_WeightRate_int__getData__, v25);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v26);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v27);
    sub_B16FFC(&WeightRate_int__TypeInfo, v28);
    sub_B16FFC(&StringLiteral_5480, v29);
    sub_B16FFC(&StringLiteral_12410, v30);
    sub_B16FFC(&StringLiteral_2545, v31);
    byte_40FBFE3 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v33);
  SummonControl__setDispSummonInfo(this, 0, v34);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_90;
  TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL);
  SummonControl__clearResultList(this, v36);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_2545, 0LL);
  summonInstance = (UnityEngine_Component_o *)this->fields.summonInstance;
  if ( !summonInstance )
    goto LABEL_90;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              summonInstance,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  p_summonComp = &this->fields.summonComp;
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.summonComp,
    (System_Int32_array **)Component_WebViewObject,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  summonComp = this->fields.summonComp;
  if ( !summonComp )
    goto LABEL_90;
  SummonEffectComponent__Initialize(summonComp, v46);
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
    v50 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v51 = 1;
  }
  else
  {
LABEL_16:
    v50 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v51 = 0;
  }
  v50->fields.isNoSkip = v51;
  v52 = this->fields.gachaParamData;
  if ( !v52 )
    goto LABEL_90;
  v53 = this->fields.summonComp;
  if ( !v53 )
    goto LABEL_90;
  v53->fields.gachaId = v52->fields.gachaId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v55 )
    goto LABEL_90;
  v120 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v55,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v56 )
    goto LABEL_90;
  v119 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v56,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v57 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v57 )
    goto LABEL_90;
  v58 = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v57,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !v58 )
    goto LABEL_90;
  Value = ConstantStrMaster__GetValue(v58, (System_String_o *)StringLiteral_12410, 0LL);
  if ( Value )
  {
    v61 = Value;
    v62 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v60);
    if ( !v62 )
      goto LABEL_90;
    v64 = v62;
    if ( !v62->max_length )
    {
LABEL_93:
      sub_B17100(v62, v64, v63);
      sub_B170A0();
    }
    v62->m_Items[2] = 44;
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v61, v62, 0LL);
    v70 = SummonControl___c_TypeInfo;
    if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v70 = SummonControl___c_TypeInfo;
    }
    static_fields = v70->static_fields;
    _9__238_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__238_1;
    if ( !_9__238_1 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        static_fields = SummonControl___c_TypeInfo->static_fields;
      }
      v73 = (Il2CppObject *)static_fields->__9;
      _9__238_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_string__int__TypeInfo,
                                                                                    v65,
                                                                                    v66,
                                                                                    v67,
                                                                                    v68);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__238_1,
        v73,
        Method_SummonControl___c__showSummonEffect_b__238_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
      v74 = SummonControl___c_TypeInfo->static_fields;
      v74->__9__238_1 = (struct System_Func_string__int__o *)_9__238_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v74->__9__238_1,
        (System_Int32_array **)_9__238_1,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v69,
                                                                 (System_Func_TSource__TResult__o *)_9__238_1,
                                                                 (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v82 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      v81,
                                                      (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v82 = 0LL;
  }
  v83 = UnityEngine_Random__get_value(0LL);
  v84 = this->fields.gachaResInfoList;
  if ( v84 )
  {
    max_length = v84->max_length;
    if ( max_length >= 1 )
    {
      v85 = v83;
      v86 = 0;
      while ( 1 )
      {
        if ( v86 >= v84->max_length )
          goto LABEL_93;
        v87 = v84->m_Items[v86];
        if ( !v87 )
          goto LABEL_90;
        IsCommandCode = SvtType__IsCommandCode(v87->fields.type, 0LL);
        objectId = v87->fields.objectId;
        if ( !IsCommandCode )
          break;
        if ( !v119 )
          goto LABEL_90;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v119,
                   objectId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_90;
        flag = Entity->fields.flag;
        v92 = 0;
LABEL_47:
        Data = 0;
        v94 = 3;
        isNew = v87->fields.isNew;
        if ( v82 )
        {
LABEL_61:
          v106 = System_Collections_Generic_List_int___Contains(
                   v82,
                   v87->fields.objectId,
                   (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
          goto LABEL_87;
        }
LABEL_86:
        v106 = 0;
LABEL_87:
        if ( !*p_summonComp )
          goto LABEL_90;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v87->fields.objectId,
          v87->fields.limitCount,
          v92,
          isNew,
          Data,
          flag,
          v94,
          v106,
          v87->fields.userSvtId,
          v118);
        if ( (int)++v86 >= max_length )
          goto LABEL_91;
        v84 = this->fields.gachaResInfoList;
        if ( !v84 )
          goto LABEL_90;
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_90;
      v96 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 objectId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !v96 )
        goto LABEL_90;
      type = v96->fields.type;
      v98 = v96;
      IsServant = ServantEntity__get_IsServant(v96, 0LL);
      if ( !v120 )
        goto LABEL_90;
      v100 = ServantLimitMaster__GetEntity(v120, v87->fields.objectId, v87->fields.limitCount, 0LL);
      if ( !v100 )
        goto LABEL_90;
      flag = v100->fields.rarity;
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, v98->fields.classId, v102) )
        goto LABEL_58;
      if ( flag == 5 )
      {
        if ( v85 >= 0.2 )
        {
LABEL_58:
          v92 = 0;
          goto LABEL_59;
        }
      }
      else if ( flag != 4 || v85 >= 0.4 )
      {
        goto LABEL_58;
      }
      v92 = 1;
LABEL_59:
      v105 = type - 3;
      v94 = 0;
      Data = 0;
      isNew = 0;
      switch ( v105 )
      {
        case 0:
        case 4:
          if ( v82 )
            goto LABEL_61;
          goto LABEL_86;
        case 3:
          v109 = v87->fields.isNew;
          isNew = v87->fields.isNew;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_90;
          SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  Master_WarQuestSelectionMaster,
                                  v87->fields.objectId,
                                  0LL);
          Data = 0;
          v94 = 1;
          if ( v109 && SvtEquipVoiceEntity )
          {
            p_summonComp = &this->fields.summonComp;
            if ( !v82 )
            {
              v82 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v112,
                                                                v113,
                                                                v114,
                                                                v115);
              System_Collections_Generic_List_int____ctor(
                v82,
                (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( !v82 )
                goto LABEL_90;
            }
            System_Collections_Generic_List_int___Add(
              v82,
              v87->fields.objectId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            Data = 0;
            isNew = 1;
            v94 = 1;
            goto LABEL_61;
          }
          p_summonComp = &this->fields.summonComp;
          if ( v82 )
            goto LABEL_61;
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v94 = 1;
          if ( !v82 )
            goto LABEL_86;
          goto LABEL_61;
        case 8:
          goto LABEL_47;
        default:
          isNew = v87->fields.isNew;
          v107 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v101, v102, v103, v104);
          WeightRate_int____ctor(v107, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
          if ( flag == 5 )
          {
            if ( !v107 )
              goto LABEL_90;
            WeightRate_int___setWeight(v107, 60, 0, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v107, 20, 1, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
            v94 = 2;
            WeightRate_int___setWeight(v107, 20, 2, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
            v116 = UnityEngine_Random__Range_34843248(0, v107->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v107, v116, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
            v92 &= Data == 0;
            flag = 5;
            if ( v82 )
              goto LABEL_61;
          }
          else if ( flag == 4 )
          {
            if ( !v107 )
              goto LABEL_90;
            WeightRate_int___setWeight(v107, 60, 0, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v107, 40, 1, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
            v108 = UnityEngine_Random__Range_34843248(0, v107->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v107, v108, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
            v94 = 2;
            v92 &= Data == 0;
            flag = 4;
            if ( v82 )
              goto LABEL_61;
          }
          else
          {
            Data = 0;
            v94 = 2;
            if ( v82 )
              goto LABEL_61;
          }
          goto LABEL_86;
      }
      goto LABEL_86;
    }
  }
LABEL_91:
  fsm = this->fields.fsm;
  if ( !fsm )
LABEL_90:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5480, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__254_0(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  SummonControl___c_c *v10; // x0
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__254_1; // x21
  Il2CppObject *v13; // x22
  struct SummonControl___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FBFE6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SummonControl___c__showSummonResultInfo_b__254_1__, v6);
    sub_B16FFC(&SummonControl___c_TypeInfo, v7);
    byte_40FBFE6 = 1;
  }
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  v10 = SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v10 = SummonControl___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__254_1 = static_fields->__9__254_1;
  if ( !_9__254_1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__254_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(_9__254_1, v13, Method_SummonControl___c__showSummonResultInfo_b__254_1__, 0LL);
    v14 = SummonControl___c_TypeInfo->static_fields;
    v14->__9__254_1 = _9__254_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->__9__254_1,
      (System_Int32_array **)_9__254_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !overflowSvtCoinInfo )
    sub_B170D4();
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__254_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__245_0(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFE4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3061, method);
    byte_40FBFE4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3061, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40FBFAD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBFAD = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_B170D4();
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SummonControl__showConfirmDlg_28685864(this, 0, v4);
}


void __fastcall SummonControl__callbackGachaDraw(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x20
  UserPresentBoxWindow_resData_array *v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UserPresentBoxWindow_resData_array *v20; // x20
  UserPresentBoxWindow_resData_o *v21; // x8
  struct GachaInfos_array *v22; // x1
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UserPresentBoxWindow_resData_o *v28; // x8
  struct System_Int32_array *getSvts; // x1
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UserPresentBoxWindow_resData_o *v35; // x8
  struct GetSvtCoin_array *getCommandCodes; // x1
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UserPresentBoxWindow_resData_o *v42; // x8
  struct System_Int32_array *receiveEventPointReward; // x1
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserPresentBoxWindow_resData_o *v49; // x8
  struct GachaExtraGifts_array *getSvtCoin; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_DeserializeArray_SummonControl_resData___, result);
    sub_B16FFC(&JsonManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11043, v6);
    sub_B16FFC(&StringLiteral_20980, v7);
    sub_B16FFC(&StringLiteral_15571, v8);
    sub_B16FFC(&StringLiteral_15807, v9);
    byte_40FBFB0 = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL)
    || System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    SummonControl__SendEventRequestNg(this, v10);
    return;
  }
  v11 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          result,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          v11,
          (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !v12 )
    goto LABEL_23;
  v20 = v12;
  if ( !v12->max_length )
    goto LABEL_24;
  v21 = v12->m_Items[0];
  if ( !v21 )
    goto LABEL_23;
  v22 = *(struct GachaInfos_array **)&v21->fields.overflowType;
  this->fields.gachaResInfoList = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gachaResInfoList,
    (System_Int32_array **)v22,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !v20->max_length )
    goto LABEL_24;
  v28 = v20->m_Items[0];
  if ( !v28 )
    goto LABEL_23;
  getSvts = (struct System_Int32_array *)v28->fields.getSvts;
  this->fields.canRankUpClassIds = getSvts;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.canRankUpClassIds,
    (System_Int32_array **)getSvts,
    v14,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !v20->max_length )
    goto LABEL_24;
  v35 = v20->m_Items[0];
  if ( !v35 )
    goto LABEL_23;
  getCommandCodes = (struct GetSvtCoin_array *)v35->fields.getCommandCodes;
  this->fields.overflowSvtCoinInfos = getCommandCodes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.overflowSvtCoinInfos,
    (System_Int32_array **)getCommandCodes,
    v14,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !v20->max_length )
    goto LABEL_24;
  v42 = v20->m_Items[0];
  if ( !v42 )
    goto LABEL_23;
  receiveEventPointReward = (struct System_Int32_array *)v42->fields.receiveEventPointReward;
  this->fields.extraGiftIds = receiveEventPointReward;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.extraGiftIds,
    (System_Int32_array **)receiveEventPointReward,
    v14,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !v20->max_length )
  {
LABEL_24:
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  v49 = v20->m_Items[0];
  if ( !v49
    || (getSvtCoin = (struct GachaExtraGifts_array *)v49->fields.getSvtCoin,
        this->fields.GachaExtraGiftList = getSvtCoin,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.GachaExtraGiftList,
          (System_Int32_array **)getSvtCoin,
          v14,
          v44,
          v45,
          v46,
          v47,
          v48),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_23:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11043, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFB3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11043, result);
    byte_40FBFB3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11043, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFCA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SummonControl___c__DisplayClass267_0__checkEnhanceTresureDevice_b__0__, v8);
    sub_B16FFC(&SummonControl___c__DisplayClass267_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_9326, v10);
    byte_40FBFCA = 1;
  }
  v11 = sub_B170CC(SummonControl___c__DisplayClass267_0_TypeInfo, method, v2, v3, v4);
  SummonControl___c__DisplayClass267_0___ctor((SummonControl___c__DisplayClass267_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v11 + 24), v18) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v24 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
    v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v11,
      Method_SummonControl___c__DisplayClass267_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v26, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9326, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFC8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9326, method);
    byte_40FBFC8 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B170D4();
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9326, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v25; // x8
  int32_t objectId; // w21
  WebViewManager_o *Instance; // x0
  ServantFlagReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  CommonUI_o *v33; // x19
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_SummonControl___c__DisplayClass266_0__checkEnhanceTresureDeviceSingle_b__0__, v10);
    sub_B16FFC(&SummonControl___c__DisplayClass266_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_9326, v12);
    byte_40FBFC9 = 1;
  }
  v13 = sub_B170CC(SummonControl___c__DisplayClass266_0_TypeInfo, method, v2, v3, v4);
  SummonControl___c__DisplayClass266_0___ctor((SummonControl___c__DisplayClass266_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v13 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  v25 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v25 )
    goto LABEL_17;
  objectId = v25->fields.objectId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (ServantFlagReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice(MasterData_WarQuestSelectionMaster, objectId, 0LL) )
  {
    *(_DWORD *)(v13 + 24) = objectId;
    v33 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v34 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
    v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v13,
      Method_SummonControl___c__DisplayClass266_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v33 )
    {
      CommonUI__maskFadeout(v33, 1, DEFAULT_FADE_TIME, v36, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_17;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9326, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  PlayMakerFSM_o *fsm; // x0
  __int64 *v7; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  if ( (byte_40FBF8F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2971, method);
    sub_B16FFC(&StringLiteral_12185, v3);
    sub_B16FFC(&StringLiteral_2968, v4);
    byte_40FBF8F = 1;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
LABEL_15:
    sub_B170D4();
  switch ( gachaParamData->fields.gachaType )
  {
    case 1:
    case 7:
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_15;
      v7 = &StringLiteral_2971;
      break;
    case 3:
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_15;
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_15;
      if ( summonInfoCtr->fields.isFree )
LABEL_12:
        v7 = &StringLiteral_12185;
      else
        v7 = &StringLiteral_2968;
      break;
    case 5:
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_15;
      goto LABEL_12;
    default:
      return;
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v7, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskBgObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFB7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6847, method);
    byte_40FBFB7 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6847, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
  PlayMakerFSM_o *fsm; // x0
  __int64 *v9; // x8

  v3 = this;
  if ( (byte_40FBFB8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9267, method);
    this = (SummonControl_o *)sub_B16FFC(&StringLiteral_6860, v4);
    byte_40FBFB8 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    sub_B17100(this, method, getSvtIdx);
    sub_B170A0();
  }
  v7 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v7 )
    goto LABEL_14;
  if ( v7->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v3, v7->fields.objectId, getSvtIdx, v2)) )
  {
    fsm = v3->fields.fsm;
    if ( fsm )
    {
      v9 = &StringLiteral_9267;
      goto LABEL_13;
    }
LABEL_14:
    sub_B170D4();
  }
  fsm = v3->fields.fsm;
  if ( !fsm )
    goto LABEL_14;
  v9 = &StringLiteral_6860;
LABEL_13:
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v9, 0LL);
}


void __fastcall SummonControl__checkIsNewSvtMulti(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w9
  unsigned int v5; // w10
  GachaInfos_o *v6; // x11

  gachaResInfoList = this->fields.gachaResInfoList;
  this->fields.resType = 1;
  if ( !gachaResInfoList )
LABEL_13:
    sub_B170D4();
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = gachaResInfoList->m_Items[v5];
      if ( !v6 )
        goto LABEL_13;
      if ( v6->fields.isNew && !v6->fields.sellMana && !v6->fields.sellQp )
        break;
      if ( (int)++v5 >= max_length )
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
  PlayMakerFSM_o *fsm; // x0
  __int64 *v11; // x8
  GachaInfos_o *v12; // x8
  int32_t objectId; // w20
  bool v14; // w0
  System_String_o *v15; // x1
  System_Collections_Generic_List_int__o *befSvtList; // x0

  v3 = this;
  if ( (byte_40FBFC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&StringLiteral_9716, v4);
    sub_B16FFC(&StringLiteral_6332, v5);
    this = (SummonControl_o *)sub_B16FFC(&StringLiteral_9267, v6);
    byte_40FBFC1 = 1;
  }
  gachaResInfoList = v3->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_19;
  max_length = gachaResInfoList->max_length;
  getSvtIdx = v3->fields.getSvtIdx;
  if ( (int)getSvtIdx > (int)(max_length - 1) )
  {
    fsm = v3->fields.fsm;
    if ( fsm )
    {
      v11 = &StringLiteral_6332;
LABEL_15:
      v15 = (System_String_o *)*v11;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v12 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v12 )
    goto LABEL_19;
  if ( !v12->fields.isNew )
  {
    fsm = v3->fields.fsm;
    if ( fsm )
    {
      v11 = &StringLiteral_9716;
      goto LABEL_15;
    }
LABEL_19:
    sub_B170D4();
  }
  objectId = v12->fields.objectId;
  v14 = SummonControl__checkOverlapSvt(v3, objectId, v2);
  if ( !v3->fields.fsm )
    goto LABEL_19;
  if ( v14 )
  {
    fsm = v3->fields.fsm;
    v15 = (System_String_o *)StringLiteral_9716;
LABEL_16:
    PlayMakerFSM__SendEvent(fsm, v15, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v3->fields.fsm, (System_String_o *)StringLiteral_9267, 0LL);
  befSvtList = v3->fields.befSvtList;
  if ( !befSvtList )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    befSvtList,
    objectId,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
}


bool __fastcall SummonControl__checkMaxDrawNum(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  UserGachaEntity_o *UserGachaData; // x0
  const MethodInfo *v6; // x2
  struct GachaRqParamData_o *v7; // x8
  UserGachaEntity_o *v8; // x19
  GachaEntity_o *CurrentGachaData; // x0
  int maxDrawNum; // w8

  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    return 0;
  UserGachaData = SummonControl__getUserGachaData(this, gachaParamData->fields.gachaId, v2);
  v7 = this->fields.gachaParamData;
  if ( !v7 )
    goto LABEL_8;
  v8 = UserGachaData;
  CurrentGachaData = SummonControl__getCurrentGachaData(this, v7->fields.gachaId, v6);
  if ( !v8 )
    return 0;
  if ( !CurrentGachaData )
LABEL_8:
    sub_B170D4();
  maxDrawNum = CurrentGachaData->fields.maxDrawNum;
  if ( maxDrawNum >= 1 )
    return v8->fields.num >= maxDrawNum;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v8; // w22

  if ( (byte_40FBFC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_40FBFC2 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B170D4();
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( befSvtList->fields._items->m_Items[v8 + 1] == svtId )
      return 1;
    if ( (int)++v8 >= size )
      return 0;
    befSvtList = this->fields.befSvtList;
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
  PlayMakerFSM_o *fsm; // x0
  __int64 *v9; // x8
  const MethodInfo *v10; // x2
  SummonInfoControl_o *summonInfoCtr; // x0
  SummonInfoControl_o *v12; // x0
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *indexPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *leftArrowBtn; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *rightArrowBtn; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *summonHelpInfo; // x0
  UnityEngine_GameObject_o *detailInfo; // x0
  UnityEngine_GameObject_o *v22; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w8
  CommonUI_o *Instance; // x19

  if ( (byte_40FBF61 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&TutorialFlag_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_3033, v5);
    sub_B16FFC(&StringLiteral_11099, v6);
    byte_40FBF61 = 1;
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
    if ( !TutorialFlag__Get_28023340(101, 0LL) )
    {
      v24 = 1;
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
  if ( !TutorialFlag__Get_28023340(101, 0LL) )
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
    if ( !TutorialFlag__Get_28023340(101, 0LL) )
      goto LABEL_33;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28023340(107, 0LL) )
    {
LABEL_33:
      SummonControl__setTutorialCtrEnable(this, 1, v10);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_56;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 1, 0LL);
      v12 = this->fields.summonInfoCtr;
      if ( !v12 )
        goto LABEL_56;
      SummonInfoControl__SetTutorialExeBtnEnable(v12, 1, 0LL);
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_56;
      TitleInfoControl__setBackBtnColliderEnable(titleInfo, 1, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
      indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
      if ( !indexPanel )
        goto LABEL_56;
      gameObject = UnityEngine_Component__get_gameObject(indexPanel, 0LL);
      if ( !gameObject )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      leftArrowBtn = (UnityEngine_Component_o *)this->fields.leftArrowBtn;
      if ( !leftArrowBtn )
        goto LABEL_56;
      v17 = UnityEngine_Component__get_gameObject(leftArrowBtn, 0LL);
      if ( !v17 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v17, 1, 0LL);
      rightArrowBtn = (UnityEngine_Component_o *)this->fields.rightArrowBtn;
      if ( !rightArrowBtn )
        goto LABEL_56;
      v19 = UnityEngine_Component__get_gameObject(rightArrowBtn, 0LL);
      if ( !v19 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v19, 1, 0LL);
      summonHelpInfo = this->fields.summonHelpInfo;
      if ( !summonHelpInfo )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(summonHelpInfo, 0, 0LL);
      detailInfo = this->fields.detailInfo;
      if ( !detailInfo )
        goto LABEL_56;
      v22 = UnityEngine_GameObject__get_gameObject(detailInfo, 0LL);
      if ( !v22 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v22, 1, 0LL);
      this->fields.isResult = 0;
      SummonControl__showHelpImg(this, v23);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_56;
      v9 = &StringLiteral_3033;
      goto LABEL_47;
    }
    this->fields.isDoneSecTutorial = 0;
    v24 = 4;
LABEL_50:
    this->fields.tutorialKind = v24;
    SummonControl__progTutorial(this, v7);
    goto LABEL_51;
  }
  fsm = this->fields.fsm;
  this->fields.isDoneTutorial = 0;
  if ( !fsm )
    goto LABEL_56;
  v9 = &StringLiteral_11099;
LABEL_47:
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v9, 0LL);
LABEL_51:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
LABEL_56:
    sub_B170D4();
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
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
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtEquipKeep; // w21
  int32_t svtKeep; // w24
  BalanceConfig_c *v17; // x0
  int32_t CommandCodeFrameMax; // w25
  WebViewManager_o *Instance; // x0
  ConstantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t Value; // w0
  WebViewManager_o *v22; // x0
  UserServantMaster_o *v23; // x0
  WebViewManager_o *v24; // x0
  UserCommandCodeMaster_o *v25; // x0
  int32_t Count; // w0
  int32_t v27; // w20
  PlayMakerFSM_o *fsm; // x0
  WebViewManager_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  CommonUI_o *v34; // x21
  BalanceConfig_c *v35; // x0
  int32_t v36; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v37; // x23
  int32_t v38; // w3
  CommonUI_o *v39; // x0
  int32_t v40; // w1
  WebViewManager_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  struct UserGameEntity_o *v46; // x8
  int32_t v47; // w22
  int32_t v48; // w21
  CommonUI_o *v49; // x20
  int32_t v50; // w2
  WebViewManager_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct UserGameEntity_o *v56; // x8
  int32_t v57; // w21
  CommonUI_o *v58; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBF87 & 1) == 0 )
  {
    sub_B16FFC(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v8);
    sub_B16FFC(&Method_SummonControl_closeShotSvtEqFrameDlg__, v9);
    sub_B16FFC(&Method_SummonControl_closeShotSvtFrameDlg__, v10);
    sub_B16FFC(&StringLiteral_6441, v11);
    sub_B16FFC(&StringLiteral_2969, v12);
    byte_40FBF87 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_44;
  if ( gachaParamData->fields.gachaType != 3 )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_44;
  svtKeep = userGameEntity->fields.svtKeep;
  svtEquipKeep = userGameEntity->fields.svtEquipKeep;
  if ( !byte_40F6094 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40F6094 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v17->static_fields->CommandCodeFrameMax;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_44;
  Value = ConstantMaster__GetValue(MasterData_WarQuestSelectionMaster, (System_String_o *)StringLiteral_6441, 0LL);
  if ( Value >= 1 )
  {
    svtKeep += Value;
    svtEquipKeep += Value;
    CommandCodeFrameMax += Value;
  }
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_44;
  v23 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v22,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v23 )
    goto LABEL_44;
  UserServantMaster__getCount(v23, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
    goto LABEL_44;
  v25 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v24,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !v25 )
    goto LABEL_44;
  Count = UserCommandCodeMaster__getCount(v25, 0LL);
  v27 = Count;
  if ( Count < CommandCodeFrameMax && servantEquipSum[1] < svtKeep && servantEquipSum[0] < svtEquipKeep )
  {
LABEL_22:
    fsm = this->fields.fsm;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_2969, 0LL);
      return;
    }
LABEL_44:
    sub_B170D4();
  }
  if ( servantEquipSum[1] >= svtKeep )
  {
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v46 = this->fields.userGameEntity;
    if ( !v46 )
      goto LABEL_44;
    v47 = v46->fields.svtKeep;
    v48 = servantEquipSum[1];
    v49 = (CommonUI_o *)v41;
    v37 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                            ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                            v42,
                                                            v43,
                                                            v44,
                                                            v45);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v37,
      (Il2CppObject *)this,
      Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v49 )
      goto LABEL_44;
    v39 = v49;
    v40 = v48;
    v50 = v47;
    v38 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= svtEquipKeep )
    {
      v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = this->fields.userGameEntity;
      if ( !v56 )
        goto LABEL_44;
      v36 = v56->fields.svtEquipKeep;
      v57 = servantEquipSum[0];
      v58 = (CommonUI_o *)v51;
      v37 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v52,
                                                              v53,
                                                              v54,
                                                              v55);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v58 )
        goto LABEL_44;
      v38 = 1;
      v39 = v58;
      v40 = v57;
    }
    else
    {
      if ( Count < CommandCodeFrameMax )
        return;
      v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this->fields.userGameEntity )
        goto LABEL_44;
      v34 = (CommonUI_o *)v29;
      if ( !byte_40F6094 )
      {
        sub_B16FFC(&BalanceConfig_TypeInfo, v30);
        byte_40F6094 = 1;
      }
      v35 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      v36 = v35->static_fields->CommandCodeFrameMax;
      v37 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v30,
                                                              v31,
                                                              v32,
                                                              v33);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v34 )
        goto LABEL_44;
      v38 = 2;
      v39 = v34;
      v40 = v27;
    }
    v50 = v36;
  }
  CommonUI__OpenSvtFrameShortDlg(v39, v40, v50, v38, 0, v37, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x20
  DataManager_o *v9; // x0
  TblUserMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  TblUserEntity_o *UserData; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t friendPoint; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v21; // x22
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBF90 & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_B16FFC(&Method_SummonControl_closeShotPointDlg__, v5);
    sub_B16FFC(&StringLiteral_12185, v6);
    byte_40FBF90 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(DataManager_o ***)(v8 + 184);
  if ( !v9 )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v9,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblUserMaster___);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_17;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  UserData = TblUserMaster__getUserData(MasterData_WarQuestSelectionMaster, userGameEntity->fields.userId, 0LL);
  if ( !UserData )
    goto LABEL_17;
  friendPoint = UserData->fields.friendPoint;
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = friendPoint;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( friendPoint < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v21 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v13,
                                                        v14,
                                                        v15,
                                                        v16);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_SummonControl_closeShotPointDlg__,
      0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, friendPoint, v21, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_17;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12185, 0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x10
  int32_t haveStoneNum; // w11
  int32_t gachaType; // w9
  int32_t HaveFreeStoneNum_k__BackingField; // w20
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w22
  int32_t v15; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v17; // x24
  PlayMakerFSM_o *fsm; // x0
  SummonConfirmDlgComponent_o *v19; // x20
  int32_t haveStone; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  SummonConfirmDlgComponent_CallbackFunc_o *v25; // x22

  if ( (byte_40FBF92 & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SummonControl_closeShotStoneDlg__, v6);
    sub_B16FFC(&StringLiteral_12185, v7);
    byte_40FBF92 = 1;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_16;
  haveStoneNum = summonInfoCtr->fields.haveStoneNum;
  gachaType = gachaParamData->fields.gachaType;
  this->fields.haveStone = haveStoneNum;
  HaveFreeStoneNum_k__BackingField = summonInfoCtr->fields._HaveFreeStoneNum_k__BackingField;
  this->fields.haveFreeStone = HaveFreeStoneNum_k__BackingField;
  HaveChargeStoneNum_k__BackingField = summonInfoCtr->fields._HaveChargeStoneNum_k__BackingField;
  this->fields.haveChargeStone = HaveChargeStoneNum_k__BackingField;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  if ( gachaType == 7 )
    v15 = HaveChargeStoneNum_k__BackingField;
  else
    v15 = haveStoneNum;
  this->fields.needStone = gachaResourceNum;
  if ( v15 >= gachaResourceNum )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_16;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12185, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = this->fields.confirmDlgInfo;
      v17 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3,
                                                          v4);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SummonControl_closeShotStoneDlg__,
        0LL);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v17,
          0LL);
        return;
      }
LABEL_16:
      sub_B170D4();
    }
    SummonControl__SetupFragmentsExchangeButton(this, method);
    v19 = this->fields.confirmDlgInfo;
    haveStone = this->fields.haveStone;
    v25 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        v21,
                                                        v22,
                                                        v23,
                                                        v24);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SummonControl_closeShotStoneDlg__,
      0LL);
    if ( !v19 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v19, haveStone, v25, 0LL);
  }
}


void __fastcall SummonControl__checkValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
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
  WarQuestSelectionMaster_o *v14; // x0
  GachaReleaseMaster_o *v15; // x22
  SummonControl_o *QuestPhase; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct GachaEntity_array *useGachaData; // x8
  __int64 v20; // x26
  int max_length; // w9
  GachaEntity_o *v22; // x24
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v28; // x25
  UserGachaEntity_o *UserGachaData; // x0
  int32_t gachaGroupId; // w1
  GachaMaster_o *gachaMst; // x0
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v37; // x21
  StoryGachaAdjustData_o *adjustData; // [xsp+8h] [xbp-58h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FBF6D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_VaildGachaInfo___ctor__, method);
    sub_B16FFC(&System_Comparison_VaildGachaInfo__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaReleaseMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v8);
    sub_B16FFC(&Method_SummonControl_SlotCompare__, v9);
    sub_B16FFC(&TutorialFlag_TypeInfo, v10);
    byte_40FBF6D = 1;
  }
  entity = 0LL;
  adjustData = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_39;
  userId = userGameEntity->fields.userId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v14 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  if ( !this->fields.vaildGachaList )
    goto LABEL_39;
  v15 = (GachaReleaseMaster_o *)v14;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.vaildGachaList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  useGachaData = this->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_39;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v20 >= max_length )
      break;
    if ( (unsigned int)v20 >= max_length )
    {
      sub_B17100(QuestPhase, v17, v18);
      sub_B170A0();
    }
    v22 = useGachaData->m_Items[v20];
    if ( !v22 || !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    QuestPhase = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                      Master_WarQuestSelectionMaster,
                                      &entity,
                                      userId,
                                      v22->fields.condQuestId,
                                      0LL);
    if ( ((unsigned __int8)QuestPhase & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_39;
      if ( UserQuestEntity__getClearNum(entity, 0LL) > 0 )
        goto LABEL_19;
      if ( !entity )
        goto LABEL_39;
      QuestPhase = (SummonControl_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
      if ( (int)QuestPhase >= v22->fields.condQuestPhase )
      {
LABEL_19:
        if ( !v15 )
          goto LABEL_39;
        QuestPhase = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v15, v22->fields.id, 0LL);
        if ( ((unsigned __int8)QuestPhase & 1) != 0 )
        {
          v24 = SummonControl__CheckStoryGachaAdjustData(QuestPhase, &adjustData, v22->fields.id, v23);
          if ( !v24 )
            adjustData = 0LL;
          beforeGachaId = v22->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            QuestPhase = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v24, beforeGachaId, v25);
            if ( !QuestPhase )
              goto LABEL_38;
            v28 = QuestPhase;
            QuestPhase = (SummonControl_o *)SummonControl__getCurrentGachaData(this, v22->fields.beforeGachaId, v18);
            if ( !QuestPhase )
              goto LABEL_39;
            if ( SLODWORD(v28->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Width) < *((_DWORD *)&QuestPhase->fields.TUTORIAL_FORMATION_ARROW_POS
                                                                                   + 2) )
              goto LABEL_38;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            QuestPhase = (SummonControl_o *)TutorialFlag__IsProgressDone(2, 0LL);
            if ( ((unsigned __int8)QuestPhase & 1) == 0 )
              goto LABEL_38;
            UserGachaData = SummonControl__getUserGachaData(QuestPhase, v22->fields.id, v18);
            if ( UserGachaData )
            {
              QuestPhase = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(this, UserGachaData, v22, v26);
              if ( ((unsigned __int8)QuestPhase & 1) != 0 )
                goto LABEL_38;
            }
            else
            {
              gachaGroupId = v22->fields.gachaGroupId;
              if ( gachaGroupId >= 1 )
              {
                gachaMst = this->fields.gachaMst;
                if ( !gachaMst )
                  goto LABEL_39;
                QuestPhase = (SummonControl_o *)GachaMaster__CheckIsDrawGroupSummon(gachaMst, gachaGroupId, 0LL);
                if ( ((unsigned __int8)QuestPhase & 1) != 0 )
                  goto LABEL_38;
              }
            }
          }
          SummonControl__AddVaildGachaInfoList(this, v22, adjustData, v26);
        }
      }
    }
LABEL_38:
    useGachaData = this->fields.useGachaData;
    ++v20;
    if ( !useGachaData )
      goto LABEL_39;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(QuestPhase, &this->fields.vaildGachaList, v18);
  vaildGachaList = this->fields.vaildGachaList;
  v37 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                    System_Comparison_VaildGachaInfo__TypeInfo,
                                                                    v33,
                                                                    v34,
                                                                    v35,
                                                                    v36);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v37,
    (Il2CppObject *)this,
    Method_SummonControl_SlotCompare__,
    (const MethodInfo_25BFD48 *)Method_System_Comparison_VaildGachaInfo___ctor__);
  if ( !vaildGachaList )
LABEL_39:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)vaildGachaList,
    (System_Comparison_T__o *)v37,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__clearBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  bool v8; // cc
  int32_t v9; // w21
  int32_t v10; // w20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x22
  bool v15; // vf
  int32_t v16; // w20
  UnityEngine_Component_o *sliderGrid; // x0
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UnityEngine_Transform_o *v22; // x0
  int32_t v23; // w20
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_Object_o *v27; // x21

  if ( (byte_40FBF85 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBF85 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !transform )
    goto LABEL_34;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( !this->fields.sliderGrid )
    goto LABEL_34;
  v6 = childCount;
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.sliderGrid, 0LL);
  if ( !v7 )
    goto LABEL_34;
  v9 = v6 - 1;
  v8 = v6 < 1;
  v10 = UnityEngine_Transform__get_childCount(v7, 0LL);
  if ( !v8 )
  {
    while ( 1 )
    {
      v11 = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
      if ( !v11 )
        break;
      v12 = UnityEngine_Component__get_transform(v11, 0LL);
      if ( !v12 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v12, v9, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      if ( --v9 < 0 )
        goto LABEL_15;
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_15:
  v15 = __OFSUB__(v10, 1);
  v16 = v10 - 1;
  if ( v16 < 0 == v15 )
  {
    do
    {
      sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !sliderGrid )
        goto LABEL_34;
      v18 = UnityEngine_Component__get_transform(sliderGrid, 0LL);
      if ( !v18 )
        goto LABEL_34;
      v19 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v18, v16, 0LL);
      if ( !v19 )
        goto LABEL_34;
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v20, 0LL);
    }
    while ( --v16 >= 0 );
  }
  summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !summonMBannerLoopCtr )
    goto LABEL_34;
  v22 = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL);
  if ( !v22 )
    goto LABEL_34;
  v23 = UnityEngine_Transform__get_childCount(v22, 0LL) - 1;
  if ( v23 >= 0 )
  {
    while ( 1 )
    {
      v24 = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !v24 )
        break;
      v25 = UnityEngine_Component__get_transform(v24, 0LL);
      if ( !v25 )
        break;
      v26 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v25, v23, 0LL);
      if ( !v26 )
        break;
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v27, 0LL);
      if ( --v23 < 0 )
        return;
    }
    goto LABEL_34;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FBFC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_40FBFC5 = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.summonResultInfo) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v7,
                                                    v8,
                                                    v9,
                                                    v10);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  PlayMakerFSM_o *fsm; // x0
  AvalonSceneManager_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  SceneJumpInfo_o *v17; // x20
  PlayMakerFSM_o *v18; // x0

  if ( (byte_40FBF8A & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12612, v8);
    sub_B16FFC(&StringLiteral_3039, v9);
    byte_40FBF8A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    fsm = this->fields.fsm;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
      v12 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v13, v14, v15, v16);
      SceneJumpInfo___ctor_29748028(v17, (System_String_o *)StringLiteral_12612, 2, 0LL);
      if ( v12 )
      {
        AvalonSceneManager__transitionScene(v12, 22, 1, (Il2CppObject *)v17, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v18 = this->fields.fsm;
  if ( !v18 )
    goto LABEL_16;
  PlayMakerFSM__SendEvent(v18, (System_String_o *)StringLiteral_3039, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v4; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBF91 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_3039, v4);
    byte_40FBF91 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
LABEL_9:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  PlayMakerFSM_o *fsm; // x0
  __int64 *v10; // x8

  if ( (byte_40FBF93 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_3039, v5);
    sub_B16FFC(&StringLiteral_6862, v6);
    byte_40FBF93 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_17;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, 0, 0LL);
  if ( !res )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    fsm = this->fields.fsm;
    if ( fsm )
    {
      v10 = &StringLiteral_3039;
      goto LABEL_16;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_17;
  v10 = &StringLiteral_6862;
LABEL_16:
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v10, 0LL);
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
  PlayMakerFSM_o *v13; // x0
  AvalonSceneManager_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  SceneJumpInfo_o *v19; // x20
  int32_t v20; // w1
  PlayMakerFSM_o *fsm; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  PlayMakerFSM_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  PlayMakerFSM_o *v31; // x0

  if ( (byte_40FBF89 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12655, v8);
    sub_B16FFC(&StringLiteral_12612, v9);
    sub_B16FFC(&StringLiteral_12654, v10);
    sub_B16FFC(&StringLiteral_3039, v11);
    byte_40FBF89 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      fsm = this->fields.fsm;
      if ( fsm )
      {
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
        v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v19 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v22, v23, v24, v25);
        SceneJumpInfo___ctor_29748028(v19, (System_String_o *)StringLiteral_12612, 1, 0LL);
        if ( v14 )
        {
          v20 = 22;
          goto LABEL_25;
        }
      }
LABEL_31:
      sub_B170D4();
    case 1:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v26 = this->fields.fsm;
      if ( v26 )
      {
        PlayMakerFSM__SendEvent(v26, (System_String_o *)StringLiteral_3039, 0LL);
        v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v19 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v27, v28, v29, v30);
        SceneJumpInfo___ctor_29747932(v19, (System_String_o *)StringLiteral_12655, 0LL);
        if ( v14 )
        {
          v20 = 71;
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
      v13 = this->fields.fsm;
      if ( v13 )
      {
        PlayMakerFSM__SendEvent(v13, (System_String_o *)StringLiteral_3039, 0LL);
        v14 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v19 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v15, v16, v17, v18);
        SceneJumpInfo___ctor_29747932(v19, (System_String_o *)StringLiteral_12654, 0LL);
        if ( v14 )
        {
          v20 = 32;
LABEL_25:
          AvalonSceneManager__transitionScene(v14, v20, 1, (Il2CppObject *)v19, 0LL);
          return;
        }
      }
      goto LABEL_31;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v31 = this->fields.fsm;
  if ( !v31 )
    goto LABEL_31;
  PlayMakerFSM__SendEvent(v31, (System_String_o *)StringLiteral_3039, 0LL);
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
  PlayMakerFSM_o *v12; // x0
  WebViewManager_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  SceneJumpInfo_o *v18; // x20
  int32_t v19; // w1
  PlayMakerFSM_o *fsm; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  AvalonSceneManager_o *v25; // x0
  Il2CppObject *v26; // x3
  PlayMakerFSM_o *v27; // x0
  PlayMakerFSM_o *v28; // x0

  if ( (byte_40FBF88 & 1) == 0 )
  {
    sub_B16FFC(&SceneJumpInfo_TypeInfo, *(_QWORD *)&res);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12612, v8);
    sub_B16FFC(&StringLiteral_12651, v9);
    sub_B16FFC(&StringLiteral_3039, v10);
    byte_40FBF88 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      fsm = this->fields.fsm;
      if ( fsm )
      {
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
        v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v18 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v21, v22, v23, v24);
        SceneJumpInfo___ctor_29748028(v18, (System_String_o *)StringLiteral_12612, 0, 0LL);
        if ( v13 )
        {
          v19 = 22;
          goto LABEL_19;
        }
      }
LABEL_32:
      sub_B170D4();
    case 1:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v27 = this->fields.fsm;
      if ( v27 )
      {
        PlayMakerFSM__SendEvent(v27, (System_String_o *)StringLiteral_3039, 0LL);
        v25 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( v25 )
        {
          v19 = 71;
          v26 = 0LL;
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
      v12 = this->fields.fsm;
      if ( v12 )
      {
        PlayMakerFSM__SendEvent(v12, (System_String_o *)StringLiteral_3039, 0LL);
        v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v18 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v14, v15, v16, v17);
        SceneJumpInfo___ctor_29747932(v18, (System_String_o *)StringLiteral_12651, 0LL);
        if ( v13 )
        {
          v19 = 32;
LABEL_19:
          v25 = (AvalonSceneManager_o *)v13;
          v26 = (Il2CppObject *)v18;
LABEL_26:
          AvalonSceneManager__transitionScene(v25, v19, 1, v26, 0LL);
          return;
        }
      }
      goto LABEL_32;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v28 = this->fields.fsm;
  if ( !v28 )
    goto LABEL_32;
  PlayMakerFSM__SendEvent(v28, (System_String_o *)StringLiteral_3039, 0LL);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *gachaParamData; // x8
  GachaEntity_o *Entity; // x0
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct GachaRqParamData_o *v24; // x8
  BonusSelectSummonConfirmDialog_o *v25; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v37; // x24
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFAB & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&Method_SummonControl_BonusSelectSummonConfirmResult__, v9);
    sub_B16FFC(&Method_SummonControl_SetDispBtn__, v10);
    sub_B16FFC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v11);
    sub_B16FFC(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_3039, v13);
    byte_40FBFAB = 1;
  }
  cautionDlgInfo = this->fields.cautionDlgInfo;
  if ( !cautionDlgInfo )
    goto LABEL_25;
  SummonCautionDlgComponent__Close(cautionDlgInfo, 0LL, 0LL);
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( Master_WarQuestSelectionMaster )
      {
        Entity = (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    gachaParamData->fields.gachaId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( Entity )
        {
          if ( GachaEntity__HasFlag(Entity, 8, 0LL) )
          {
            bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
            if ( bonusSelectSummonConfirmDialog )
            {
              BonusSelectSummonConfirmDialog__Init(
                bonusSelectSummonConfirmDialog,
                this->fields.bonusSelectAssetManager,
                0LL);
              v24 = this->fields.gachaParamData;
              if ( v24 )
              {
                v25 = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v24->fields.gachaId;
                v27 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v20,
                                                                          v21,
                                                                          v22,
                                                                          v23);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v27,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v32 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                          BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo,
                                                                          v28,
                                                                          v29,
                                                                          v30,
                                                                          v31);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v32,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v37 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B170CC(
                                                                                  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo,
                                                                                  v33,
                                                                                  v34,
                                                                                  v35,
                                                                                  v36);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v37,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( v25 )
                {
                  BonusSelectSummonConfirmDialog__Open(v25, gachaId, v27, v32, v37, 0LL, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            fsm = this->fields.fsm;
            if ( fsm )
            {
              PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
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
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFAA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_3039, v5);
    byte_40FBFAA = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  if ( !res )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    fsm = this->fields.fsm;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v33; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x27
  UnityEngine_Component_o *summonBannerScrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  UnityEngine_GameObject_o *v69; // x0
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UICenterOnChild_o *v77; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v80; // x22
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x8
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  struct UIScrollView_o *v93; // x21
  BattleServantConfConponent_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v96; // x22
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  int32_t height; // w0
  float v107; // s0
  UnityEngine_Component_o *v108; // x20
  int32_t v109; // w0
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  UnityEngine_Component_o **p_summonMBannerLoopCtr; // x22
  UnityEngine_Component_o *summonMBannerScrollView; // x0
  UnityEngine_GameObject_o *v113; // x0
  System_Int32_array **v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  UnityEngine_GameObject_o *v127; // x0
  System_Int32_array **v128; // x0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  struct UICenterOnChild_o *v135; // x21
  BattleServantConfConponent_o *v136; // x21
  System_Delegate_o *v137; // t1
  SpringPanel_OnFinished_o *v138; // x22
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  struct UIScrollView_o *v150; // x21
  BattleServantConfConponent_o *v151; // x21
  System_Delegate_o *v152; // t1
  UIScrollView_OnDragNotification_o *v153; // x22
  System_Int32_array **v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  int v161; // w23
  int v162; // w22
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v166; // x26
  UnityEngine_Transform_o *v167; // x20
  int v168; // s0
  UnityEngine_Transform_o *v171; // x0
  UnityEngine_Transform_o *v172; // x21
  UnityEngine_Transform_o *v173; // x0
  int v174; // s0
  int v177; // w27
  System_String_o *v178; // x0
  System_String_o *v179; // x0
  System_String_o *v180; // x0
  System_String_o *v181; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  GachaBannerComponent_o *v183; // x28
  struct System_Collections_Generic_List_VaildGachaInfo__o *v184; // x20
  int v185; // w8
  int v186; // w9
  int32_t v187; // w25
  VaildGachaInfo_o *v188; // x8
  System_String_o *v189; // x0
  System_String_o *v190; // x21
  const MethodInfo *v191; // x2
  UnityEngine_GameObject_o *v192; // x0
  struct System_Collections_Generic_List_VaildGachaInfo__o *v193; // x20
  UnityEngine_Object_o *v194; // x22
  VaildGachaInfo_o *v195; // x24
  bool v196; // w0
  System_String_o *v197; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v199; // x0
  UnityEngine_GameObject_o *v200; // x0
  UnityEngine_GameObject_o *v201; // x28
  UnityEngine_Transform_o *v202; // x20
  int v203; // s0
  UnityEngine_Transform_o *v206; // x0
  UnityEngine_Transform_o *v207; // x21
  UnityEngine_Transform_o *v208; // x0
  int v209; // s0
  System_String_o *name; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v213; // x0
  SummonMiniBannerComponent_o *v214; // x26
  struct System_Collections_Generic_List_VaildGachaInfo__o *v215; // x20
  VaildGachaInfo_o *v216; // x8
  System_String_o *v217; // x0
  System_String_o *v218; // x21
  const MethodInfo *v219; // x2
  UnityEngine_Object_o *v220; // x28
  const MethodInfo *v221; // x2
  UnityEngine_Component_o *v222; // x0
  WebViewObject_o *Component_WebViewObject; // x22
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x3
  __int64 v227; // x4
  SummonMiniBannerComponent_CallbackFunc_o *v228; // x20
  bool v229; // cc
  struct UIGrid_o *sliderGrid; // x0
  float cellHeight; // s8
  int v232; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v234; // x0
  UnityEngine_GameObject_o *v235; // x0
  UnityEngine_Transform_o *v236; // x20
  int v237; // s0
  UnityEngine_Component_o *v240; // x0
  UnityEngine_Transform_o *v241; // x0
  UIGrid_o *v242; // x0
  const MethodInfo *v243; // x1
  __int64 v244; // x1
  __int64 v245; // x2
  __int64 v246; // x3
  __int64 v247; // x4
  struct System_Collections_Generic_List_VaildGachaInfo__o *v248; // x21
  __int64 currentIdx; // x22
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *v251; // x21
  SummonInfoControl_ClickDelegate_o *v252; // x22
  const MethodInfo *v253; // x2
  const MethodInfo *v254; // x1
  UnityEngine_GameObject_o *noneGachaInfo; // x0
  SummonControl_o *v256; // x0
  const MethodInfo *v257; // x1
  int v258; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_summonMBannerInfoList; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_bannerInfoList; // [xsp+28h] [xbp-78h]
  UnityEngine_Component_o **v261; // [xsp+30h] [xbp-70h]
  int size; // [xsp+3Ch] [xbp-64h]
  int32_t moveIdx; // [xsp+48h] [xbp-58h]
  int v264; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v265; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBF73 & 1) == 0 )
  {
    sub_B16FFC(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&SummonInfoControl_ClickDelegate_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v18);
    sub_B16FFC(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&UIScrollView_OnDragNotification_TypeInfo, v21);
    sub_B16FFC(&SpringPanel_OnFinished_TypeInfo, v22);
    sub_B16FFC(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v23);
    sub_B16FFC(&Method_SummonControl_OnCenterOnChildFinished__, v24);
    sub_B16FFC(&Method_SummonControl_OnClickMiniBanner__, v25);
    sub_B16FFC(&Method_SummonControl_OnDragStarted__, v26);
    sub_B16FFC(&Method_SummonControl_exeSummon__, v27);
    sub_B16FFC(&StringLiteral_19564, v28);
    sub_B16FFC(&StringLiteral_19566, v29);
    sub_B16FFC(&StringLiteral_19565, v30);
    sub_B16FFC(&StringLiteral_1, v31);
    sub_B16FFC(&StringLiteral_1004, v32);
    sub_B16FFC(&StringLiteral_951, v33);
    byte_40FBF73 = 1;
  }
  v264 = 0;
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaBannerComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v34;
  p_bannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.bannerInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bannerInfoList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v45;
  p_summonMBannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.summonMBannerInfoList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.summonMBannerInfoList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
        goto LABEL_104;
      gameObject = UnityEngine_Component__get_gameObject(summonBannerScrollView, 0LL);
      if ( !gameObject )
        goto LABEL_104;
      v56 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     gameObject,
                                     (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_bannerLoopCtr = (UnityEngine_Component_o *)v56;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.bannerLoopCtr, v56, v57, v58, v59, v60, v61, v62);
    }
    p_centerChild = &this->fields.centerChild;
    centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL) )
    {
      if ( !*p_bannerLoopCtr )
        goto LABEL_104;
      v69 = UnityEngine_Component__get_gameObject(*p_bannerLoopCtr, 0LL);
      if ( !v69 )
        goto LABEL_104;
      v70 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                     v69,
                                     (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_centerChild = (struct UICenterOnChild_o *)v70;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.centerChild, v70, v71, v72, v73, v74, v75, v76);
    }
    v77 = *p_centerChild;
    if ( !v77 )
      goto LABEL_104;
    onFinished = (System_Delegate_o *)v77->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v77->fields.onFinished;
    v80 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v65, v66, v67, v68);
    SpringPanel_OnFinished___ctor(v80, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
    v81 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v80, 0LL);
    v88 = v81;
    if ( v81 && *v81 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      goto LABEL_121;
    p_onFinished->klass = (BattleServantConfConponent_c *)v81;
    sub_B16F98(p_onFinished, v81, v82, v83, v84, v85, v86, v87);
    v93 = this->fields.summonBannerScrollView;
    if ( !v93 )
      goto LABEL_104;
    onDragFinished = (System_Delegate_o *)v93->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&v93->fields.onDragFinished;
    v96 = (UIScrollView_OnDragNotification_o *)sub_B170CC(UIScrollView_OnDragNotification_TypeInfo, v89, v90, v91, v92);
    UIScrollView_OnDragNotification___ctor(v96, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v97 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v96, 0LL);
    v88 = v97;
    if ( v97 )
    {
      if ( *v97 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_121;
    }
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v97;
    sub_B16F98(p_onDragFinished, v97, v98, v99, v100, v101, v102, v103);
    vaildGachaList = this->fields.vaildGachaList;
    if ( !vaildGachaList )
      goto LABEL_104;
    size = vaildGachaList->fields._size;
    width = UnityEngine_Screen__get_width(0LL);
    height = UnityEngine_Screen__get_height(0LL);
    v107 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
    v108 = *p_bannerLoopCtr;
    v109 = UnityEngine_Mathf__FloorToInt((float)((float)(v107 / 1.7778) * 1024.0) + 4.0, 0LL);
    if ( !v108 )
      goto LABEL_104;
    LODWORD(v108[1].klass) = v109;
    summonMBannerLoopCtr = (UnityEngine_Object_o *)this->fields.summonMBannerLoopCtr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_summonMBannerLoopCtr = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
    if ( UnityEngine_Object__op_Equality(summonMBannerLoopCtr, 0LL, 0LL) )
    {
      summonMBannerScrollView = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !summonMBannerScrollView )
        goto LABEL_104;
      v113 = UnityEngine_Component__get_gameObject(summonMBannerScrollView, 0LL);
      if ( !v113 )
        goto LABEL_104;
      v114 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      v113,
                                      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_summonMBannerLoopCtr = (UnityEngine_Component_o *)v114;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerLoopCtr,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
    }
    summonMBannerCenterChild = (UnityEngine_Object_o *)this->fields.summonMBannerCenterChild;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_summonMBannerCenterChild = &this->fields.summonMBannerCenterChild;
    if ( UnityEngine_Object__op_Equality(summonMBannerCenterChild, 0LL, 0LL) )
    {
      if ( !*p_summonMBannerLoopCtr )
        goto LABEL_104;
      v127 = UnityEngine_Component__get_gameObject(*p_summonMBannerLoopCtr, 0LL);
      if ( !v127 )
        goto LABEL_104;
      v128 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      v127,
                                      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v128;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerCenterChild,
        v128,
        v129,
        v130,
        v131,
        v132,
        v133,
        v134);
    }
    v135 = *p_summonMBannerCenterChild;
    v261 = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
    if ( !v135 )
      goto LABEL_104;
    v137 = (System_Delegate_o *)v135->fields.onFinished;
    v136 = (BattleServantConfConponent_o *)&v135->fields.onFinished;
    v138 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v123, v124, v125, v126);
    SpringPanel_OnFinished___ctor(
      v138,
      (Il2CppObject *)this,
      Method_SummonControl_OnCenterOnChildFinishedMBanner__,
      0LL);
    v139 = (System_Int32_array **)System_Delegate__Combine(v137, (System_Delegate_o *)v138, 0LL);
    v88 = v139;
    if ( v139 )
    {
      if ( *v139 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
        goto LABEL_121;
    }
    v136->klass = (BattleServantConfConponent_c *)v139;
    sub_B16F98(v136, v139, v140, v141, v142, v143, v144, v145);
    v150 = this->fields.summonMBannerScrollView;
    if ( !v150 )
      goto LABEL_104;
    v152 = (System_Delegate_o *)v150->fields.onDragFinished;
    v151 = (BattleServantConfConponent_o *)&v150->fields.onDragFinished;
    v153 = (UIScrollView_OnDragNotification_o *)sub_B170CC(
                                                  UIScrollView_OnDragNotification_TypeInfo,
                                                  v146,
                                                  v147,
                                                  v148,
                                                  v149);
    UIScrollView_OnDragNotification___ctor(v153, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v154 = (System_Int32_array **)System_Delegate__Combine(v152, (System_Delegate_o *)v153, 0LL);
    v88 = v154;
    if ( v154 && *v154 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
    {
LABEL_121:
      sub_B173C8(v88);
      SummonControl__setPositionByWarId(v256, v257);
    }
    else
    {
      v161 = size;
      v151->klass = (BattleServantConfConponent_c *)v154;
      sub_B16F98(v151, v154, v155, v156, v157, v158, v159, v160);
      if ( 2 * size >= 1 )
      {
        v162 = 0;
        v258 = (size & 0x7FFFFFFF) - size;
        while ( *p_bannerLoopCtr )
        {
          summonBannerPrefab = this->fields.summonBannerPrefab;
          transform = UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, summonBannerPrefab, transform, 0LL, 0LL);
          if ( !Object )
            break;
          v166 = Object;
          v167 = UnityEngine_GameObject__get_transform(Object, 0LL);
          *(UnityEngine_Vector3_o *)&v168 = UnityEngine_Vector3__get_one(0LL);
          if ( !v167 )
            break;
          UnityEngine_Transform__set_localScale(v167, *(UnityEngine_Vector3_o *)&v168, 0LL);
          v171 = UnityEngine_GameObject__get_transform(v166, 0LL);
          if ( !*p_bannerLoopCtr )
            break;
          v172 = v171;
          v173 = UnityEngine_Component__get_transform(*p_bannerLoopCtr, 0LL);
          if ( !v173 )
            break;
          *(UnityEngine_Vector3_o *)&v174 = UnityEngine_Transform__get_localPosition(v173, 0LL);
          if ( !v172 )
            break;
          UnityEngine_Transform__set_localPosition(v172, *(UnityEngine_Vector3_o *)&v174, 0LL);
          v177 = v162 + 1;
          v264 = v162 + 1;
          v178 = System_Int32__ToString((int32_t)&v264, 0LL);
          v179 = System_String__Concat_43743732((System_String_o *)StringLiteral_951, v178, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v166, v179, 0LL);
          if ( v264 >= 10 )
          {
            v180 = System_Int32__ToString((int32_t)&v264, 0LL);
            v181 = System_String__Concat_43743732((System_String_o *)StringLiteral_1004, v180, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v166, v181, 0LL);
          }
          Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                             v166,
                                                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
          if ( !*p_bannerInfoList )
            break;
          v183 = (GachaBannerComponent_o *)Component_srcLineSprite;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_bannerInfoList,
            Component_srcLineSprite,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
          v184 = this->fields.vaildGachaList;
          v185 = v258 + v162;
          v186 = v258 + v162 <= size - 1 ? 0 : v161;
          if ( !v184 )
            break;
          v187 = v185 - v186;
          if ( v184->fields._size <= (unsigned int)(v185 - v186) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          moveIdx = v162;
          v188 = v184->fields._items->m_Items[v187];
          if ( !v188 )
            break;
          v189 = System_Int32__ToString((int)v188 + 40, 0LL);
          v190 = System_String__Concat_43743732((System_String_o *)StringLiteral_19564, v189, 0LL);
          v192 = SummonControl__searchBannerImg(this, v190, v191);
          v193 = this->fields.vaildGachaList;
          if ( !v193 )
            break;
          v194 = (UnityEngine_Object_o *)v192;
          if ( v193->fields._size <= (unsigned int)v187 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v195 = v193->fields._items->m_Items[v187];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v196 = UnityEngine_Object__op_Equality(v194, 0LL, 0LL);
          if ( !v183 )
            break;
          v197 = v196 ? (System_String_o *)StringLiteral_1 : v190;
          GachaBannerComponent__setBannerGachaInfo(
            v183,
            v195,
            v187,
            moveIdx,
            (UnityEngine_GameObject_o *)v194,
            v197,
            0LL);
          if ( !*v261 )
            break;
          summonMBannerPrefab = this->fields.summonMBannerPrefab;
          v199 = UnityEngine_Component__get_transform(*v261, 0LL);
          v200 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, summonMBannerPrefab, v199, 0LL, 0LL);
          if ( !v200 )
            break;
          v201 = v200;
          v202 = UnityEngine_GameObject__get_transform(v200, 0LL);
          *(UnityEngine_Vector3_o *)&v203 = UnityEngine_Vector3__get_one(0LL);
          if ( !v202 )
            break;
          UnityEngine_Transform__set_localScale(v202, *(UnityEngine_Vector3_o *)&v203, 0LL);
          v206 = UnityEngine_GameObject__get_transform(v201, 0LL);
          if ( !*v261 )
            break;
          v207 = v206;
          v208 = UnityEngine_Component__get_transform(*v261, 0LL);
          if ( !v208 )
            break;
          *(UnityEngine_Vector3_o *)&v209 = UnityEngine_Transform__get_localPosition(v208, 0LL);
          if ( !v207 )
            break;
          UnityEngine_Transform__set_localPosition(v207, *(UnityEngine_Vector3_o *)&v209, 0LL);
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v166, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v201, name, 0LL);
          v213 = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          v201,
                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
          if ( !*p_summonMBannerInfoList )
            break;
          v214 = (SummonMiniBannerComponent_o *)v213;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_summonMBannerInfoList,
            v213,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
          v215 = this->fields.vaildGachaList;
          if ( !v215 )
            break;
          if ( v215->fields._size <= (unsigned int)v187 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v216 = v215->fields._items->m_Items[v187];
          if ( !v216 )
            break;
          v217 = System_Int32__ToString((int)v216 + 40, 0LL);
          v218 = System_String__Concat_43743732((System_String_o *)StringLiteral_19565, v217, 0LL);
          v220 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v218, v219);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v220, 0LL, 0LL) )
          {
            v218 = (System_String_o *)StringLiteral_19566;
            v220 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                             this,
                                             (System_String_o *)StringLiteral_19566,
                                             v221);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v220, 0LL, 0LL) )
              v218 = (System_String_o *)StringLiteral_1;
          }
          v222 = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
          if ( !v222 )
            break;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      v222,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          v228 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_B170CC(
                                                               SummonMiniBannerComponent_CallbackFunc_TypeInfo,
                                                               v224,
                                                               v225,
                                                               v226,
                                                               v227);
          SummonMiniBannerComponent_CallbackFunc___ctor(
            v228,
            (Il2CppObject *)this,
            Method_SummonControl_OnClickMiniBanner__,
            0LL);
          if ( !v214 )
            break;
          SummonMiniBannerComponent__SetBannerInfo(
            v214,
            v195,
            v187,
            moveIdx,
            (UnityEngine_GameObject_o *)v220,
            v218,
            v228,
            (UIPanel_o *)Component_WebViewObject,
            0LL);
          v162 = v177;
          v161 = size;
          v229 = v177 < 2 * size;
          p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
          if ( !v229 )
            goto LABEL_97;
        }
LABEL_104:
        sub_B170D4();
      }
LABEL_97:
      sliderGrid = this->fields.sliderGrid;
      if ( !sliderGrid )
        goto LABEL_104;
      cellHeight = sliderGrid->fields.cellHeight;
      if ( v161 >= 1 )
      {
        v232 = 0;
        do
        {
          slideIndexPrefab = this->fields.slideIndexPrefab;
          v234 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)sliderGrid, 0LL);
          v235 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, slideIndexPrefab, v234, 0LL, 0LL);
          if ( !v235 )
            break;
          v236 = UnityEngine_GameObject__get_transform(v235, 0LL);
          *(UnityEngine_Vector3_o *)&v237 = UnityEngine_Vector3__get_one(0LL);
          if ( !v236 )
            break;
          UnityEngine_Transform__set_localScale(v236, *(UnityEngine_Vector3_o *)&v237, 0LL);
          if ( ++v232 >= v161 )
            goto LABEL_105;
          sliderGrid = this->fields.sliderGrid;
        }
        while ( sliderGrid );
        goto LABEL_104;
      }
LABEL_105:
      if ( !*p_bannerLoopCtr )
        goto LABEL_104;
      UIWrapContent__SortAlphabetically((UIWrapContent_o *)*p_bannerLoopCtr, 0LL);
      if ( !*p_bannerLoopCtr )
        goto LABEL_104;
      UIWrapContent__resetScroll((UIWrapContent_o *)*p_bannerLoopCtr, 0LL);
      if ( !*p_bannerLoopCtr )
        goto LABEL_104;
      UIWrapContent__WrapContent((UIWrapContent_o *)*p_bannerLoopCtr, 0LL);
      if ( !*v261 )
        goto LABEL_104;
      UIWrapContent__SortAlphabetically((UIWrapContent_o *)*v261, 0LL);
      if ( !*v261 )
        goto LABEL_104;
      UIWrapContent__resetScroll((UIWrapContent_o *)*v261, 0LL);
      if ( !*v261 )
        goto LABEL_104;
      UIWrapContent__WrapContent((UIWrapContent_o *)*v261, 0LL);
      v240 = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !v240 )
        goto LABEL_104;
      v241 = UnityEngine_Component__get_transform(v240, 0LL);
      if ( !v241 )
        goto LABEL_104;
      v265.fields.z = this->fields.center.fields.z;
      v265.fields.y = this->fields.center.fields.y;
      v265.fields.x = -(float)((float)(cellHeight * 0.5) * (float)(v161 - 1));
      UnityEngine_Transform__set_localPosition(v241, v265, 0LL);
      v242 = this->fields.sliderGrid;
      if ( !v242 )
        goto LABEL_104;
      UIGrid__set_repositionNow(v242, 1, 0LL);
      SummonControl__UpdateSummonInfoControlLayout(this, v243);
      v248 = this->fields.vaildGachaList;
      if ( !v248 )
        goto LABEL_104;
      currentIdx = this->fields.currentIdx;
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( v248->fields._size <= (unsigned int)currentIdx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v251 = v248->fields._items->m_Items[currentIdx];
      v252 = (SummonInfoControl_ClickDelegate_o *)sub_B170CC(
                                                    SummonInfoControl_ClickDelegate_TypeInfo,
                                                    v244,
                                                    v245,
                                                    v246,
                                                    v247);
      SummonInfoControl_ClickDelegate___ctor(v252, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
      if ( !summonInfoCtr )
        goto LABEL_104;
      SummonInfoControl__SetSummonInfo(summonInfoCtr, v251, v252, 0LL);
      SummonControl__setSliderIcon(this, this->fields.currentIdx, v253);
      SummonControl__setResourceInfo(this, v254);
    }
  }
  else
  {
    noneGachaInfo = this->fields.noneGachaInfo;
    if ( !noneGachaInfo )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(noneGachaInfo, 1, 0LL);
  }
}


void __fastcall SummonControl__deleteBannerList(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_o *sliderGrid; // x0
  UnityEngine_Transform_o *v12; // x0
  int32_t v13; // w0
  int32_t v14; // w20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UnityEngine_Transform_o *v20; // x0
  int32_t v21; // w20
  UnityEngine_Component_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Object_o *v25; // x21

  if ( (byte_40FBFD0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBFD0 = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !transform )
    goto LABEL_34;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v7 = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
      if ( !v7 )
        break;
      v8 = UnityEngine_Component__get_transform(v7, 0LL);
      if ( !v8 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v8, v6, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_13:
  sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !sliderGrid )
    goto LABEL_34;
  v12 = UnityEngine_Component__get_transform(sliderGrid, 0LL);
  if ( !v12 )
    goto LABEL_34;
  v13 = UnityEngine_Transform__get_childCount(v12, 0LL);
  v14 = v13 - 1;
  if ( v13 >= 1 )
  {
    do
    {
      v15 = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !v15 )
        goto LABEL_34;
      v16 = UnityEngine_Component__get_transform(v15, 0LL);
      if ( !v16 )
        goto LABEL_34;
      v17 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v16, v14, 0LL);
      if ( !v17 )
        goto LABEL_34;
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v18, 0LL);
    }
    while ( --v14 >= 0 );
  }
  summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !summonMBannerLoopCtr )
    goto LABEL_34;
  v20 = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL);
  if ( !v20 )
    goto LABEL_34;
  v21 = UnityEngine_Transform__get_childCount(v20, 0LL) - 1;
  if ( v21 >= 0 )
  {
    do
    {
      v22 = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
      if ( !v22 )
        goto LABEL_34;
      v23 = UnityEngine_Component__get_transform(v22, 0LL);
      if ( !v23 )
        goto LABEL_34;
      v24 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v23, v21, 0LL);
      if ( !v24 )
        goto LABEL_34;
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v25, 0LL);
    }
    while ( --v21 >= 0 );
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
  PlayMakerFSM_o *fsm; // x0
  __int64 *v10; // x8

  if ( (byte_40FBF95 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_10515, v5);
    sub_B16FFC(&StringLiteral_10514, v6);
    sub_B16FFC(&StringLiteral_10516, v7);
    byte_40FBF95 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B170D4();
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_12;
      v10 = &StringLiteral_10514;
      break;
    case 1:
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_12;
      v10 = &StringLiteral_10515;
      break;
    case 2:
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_12;
      v10 = &StringLiteral_10516;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *fsm; // x0
  __int64 *v10; // x8

  if ( (byte_40FBF8E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_10515, v5);
    sub_B16FFC(&StringLiteral_10514, v6);
    sub_B16FFC(&StringLiteral_10516, v7);
    byte_40FBF8E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        v10 = &StringLiteral_10514;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        v10 = &StringLiteral_10515;
        goto LABEL_13;
      }
LABEL_15:
      sub_B170D4();
    case 2:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        v10 = &StringLiteral_10516;
LABEL_13:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v10, 0LL);
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
  PlayMakerFSM_o *fsm; // x0
  __int64 *v10; // x8

  if ( (byte_40FBF8C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_10515, v5);
    sub_B16FFC(&StringLiteral_10514, v6);
    sub_B16FFC(&StringLiteral_10516, v7);
    byte_40FBF8C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        v10 = &StringLiteral_10514;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        v10 = &StringLiteral_10515;
        goto LABEL_13;
      }
LABEL_15:
      sub_B170D4();
    case 2:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        v10 = &StringLiteral_10516;
LABEL_13:
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v10, 0LL);
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
  __int64 v14; // x3
  __int64 v15; // x4
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s11
  SummonControl___c_c *v19; // x0
  float m_Height; // s12
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__147_0; // x21
  Il2CppObject *v23; // x22
  struct SummonControl___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x20
  UnityEngine_Vector2_o v36; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o TUTORIAL_FORMATION_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_40FBF65 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl__exeFormation_b__147_1__, v4);
    sub_B16FFC(&Method_SummonControl___c__exeFormation_b__147_0__, v5);
    sub_B16FFC(&SummonControl___c_TypeInfo, v6);
    byte_40FBF65 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v9 = *((float *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v10 = (CommonUI_o *)Instance;
  TUTORIAL_FORMATION_ARROW_RECT_FS = SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(this, v11);
  m_XMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Width;
  v19 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v19 = SummonControl___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__147_0 = static_fields->__9__147_0;
  if ( !_9__147_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__147_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    System_Action___ctor(_9__147_0, v23, Method_SummonControl___c__exeFormation_b__147_0__, 0LL);
    v24 = SummonControl___c_TypeInfo->static_fields;
    v24->__9__147_0 = _9__147_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__147_0,
      (System_Int32_array **)_9__147_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v10 )
    sub_B170D4();
  v38.fields.m_XMin = m_XMin;
  v36.fields.y = v9 + 33.0;
  v36.fields.x = y;
  v38.fields.m_YMin = m_YMin;
  v38.fields.m_Width = m_Width;
  v38.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v10, v36, 0.0, v38, _9__147_0, 0LL);
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__147_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v35, 0LL);
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
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  UnityEngine_GameObject_o *tutorialArrowObj; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBF86 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2970, paramData);
    byte_40FBF86 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_B16F98(
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
      || (SummonConfirmDlgComponent__setTutorial(confirmDlgInfo, 0, 0LL),
          (tutorialArrowObj = this->fields.tutorialArrowObj) == 0LL) )
    {
LABEL_9:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(tutorialArrowObj, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_9;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_2970, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  CombineResultEffectComponent_ClickDelegate_o *v12; // x22

  if ( (byte_40FBFCB & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl__executeEnhanceTresureDevice_b__268_0__, v4);
    byte_40FBFCB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v7 = (CommonUI_o *)Instance;
  v12 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                          CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                          v8,
                                                          v9,
                                                          v10,
                                                          v11);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__268_0__,
    0LL);
  if ( !v7 )
    sub_B170D4();
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v7, npEnhanceSvtId, v12, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct SummonInfoControl_o *summonInfoCtr; // x8
  _BOOL4 isFree; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w25
  int32_t friendPoint; // w20
  SummonConfirmDlgComponent_o *v21; // x22
  int32_t needPoint; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x24

  if ( (byte_40FBFA6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SummonControl_autoSellSettingChange2__, v7);
    sub_B16FFC(&Method_SummonControl_friendSummonConfirmResult__, v8);
    byte_40FBFA6 = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  isFree = summonInfoCtr->fields.isFree;
  this->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v12 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                        SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SummonControl_friendSummonConfirmResult__,
      0LL);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange2__, 0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v12, v17, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_10;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  friendPoint = this->fields.friendPoint;
  v21 = this->fields.confirmDlgInfo;
  needPoint = this->fields.needPoint;
  v23 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                      SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_SummonControl_friendSummonConfirmResult__,
    0LL);
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v21 )
    goto LABEL_10;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v21,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v23,
    v28,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v7; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFA7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_3039, v5);
    byte_40FBFA7 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close(confirmDlgInfo, 0LL);
  if ( !res )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    fsm = this->fields.fsm;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
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

  if ( (byte_40FBF70 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, *(_QWORD *)&gachaId);
    byte_40FBF70 = 1;
  }
  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_B170D4();
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gachaMst,
                            gachaId,
                            (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x21
  __int64 v5; // x20
  int size; // w8
  VaildGachaInfo_o *v7; // x8

  if ( (byte_40FBFCE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v3);
    byte_40FBFCE = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_11:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    if ( (int)v5 >= size )
      break;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v7 = vaildGachaList->fields._items->m_Items[v5];
    if ( v7 )
    {
      if ( v7->fields.type == 3 )
        return v5;
      vaildGachaList = this->fields.vaildGachaList;
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
  WebViewManager_o *Instance; // x0
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBF6F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaMaster___, *(_QWORD *)&gachaId);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBF6F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  UserGachaMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, gachaId, 0LL);
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

  if ( (byte_40FBF60 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FBF60 = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B170D4();
    p_stoneFragmentsShopEntity = (BattleServantConfConponent_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = (System_Int32_array **)ShopMaster__GetEntityOfFragmentsShop(
                                                     Master_WarQuestSelectionMaster,
                                                     0LL);
    p_stoneFragmentsShopEntity->klass = (BattleServantConfConponent_c *)EntityOfFragmentsShop;
    sub_B16F98(p_stoneFragmentsShopEntity, EntityOfFragmentsShop, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_40FBF5F & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FBF5F = 1;
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
  __int64 v5; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  ServantFlagReleaseMaster_o *v12; // x21
  __int64 v13; // x24
  struct GachaInfos_array *v14; // x8
  GachaInfos_o *v15; // x8
  int32_t objectId; // w22
  bool result; // w0

  if ( (byte_40FBFC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBFC7 = 1;
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length < 1 )
  {
LABEL_13:
    objectId = 0;
    result = 0;
  }
  else
  {
    v12 = (ServantFlagReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = this->fields.gachaResInfoList;
      if ( !v14 )
        goto LABEL_16;
      if ( (unsigned int)v13 >= v14->max_length )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v10, v11);
        sub_B170A0();
      }
      v15 = v14->m_Items[v13];
      if ( !v15 || !v12 )
        goto LABEL_16;
      objectId = v15->fields.objectId;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(
                                                                          v12,
                                                                          objectId,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        break;
      if ( (int)++v13 >= max_length )
        goto LABEL_13;
    }
    result = 1;
  }
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
  struct GachaInfos_array *gachaResInfoList; // x10
  unsigned int max_length; // w9
  __int64 v6; // x8
  GachaInfos_o **m_Items; // x10
  GachaInfos_o *v8; // x11

  if ( max < 1 )
    return 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
LABEL_12:
    sub_B170D4();
  max_length = gachaResInfoList->max_length;
  v6 = 0LL;
  m_Items = gachaResInfoList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&svtId, *(_QWORD *)&max);
      sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  __int64 v12; // x22
  struct GachaInfos_array *v13; // x8
  GachaInfos_o *v14; // x24

  if ( (byte_40FBFBB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FBFBB = 1;
  }
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length < 1 )
    return 0;
  v11 = MasterData_WarQuestSelectionMaster;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = this->fields.gachaResInfoList;
    if ( !v13 )
      goto LABEL_17;
    if ( (unsigned int)v12 >= v13->max_length )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v9, v10);
      sub_B170A0();
    }
    v14 = v13->m_Items[v12];
    if ( !v14 || !v11 )
      goto LABEL_17;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v11,
                                                                                          v14->fields.objectId,
                                                                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEntity__get_IsServantEquip(
                                                                                            (ServantEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                                            0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 && v14->fields.isNew )
        return 1;
    }
    if ( (int)++v12 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v5; // x1
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0
  AvalonSceneManager_o *Instance; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&res);
    sub_B16FFC(&StringLiteral_3039, v5);
    byte_40FBFD7 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      AvalonSceneManager__transitionScene(Instance, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_9;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
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
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0
  const MethodInfo *v12; // x1
  AvalonSceneManager_o *Instance; // x0
  PlayMakerFSM_o *fsm; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t mana; // w20
  BalanceConfig_c *v22; // x0
  const MethodInfo *v23; // x1
  SummonLimitWarningDlgComponent_o *v24; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_o *v30; // x22

  if ( (byte_40FBFD6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&res);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_SummonControl_limitManaConfirmResult__, v8);
    sub_B16FFC(&Method_SummonControl_showConfirmDlg__, v9);
    sub_B16FFC(&StringLiteral_3039, v10);
    byte_40FBFD6 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_22;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res )
  {
    if ( res == 2 )
    {
      if ( !SummonControl__CheckFriendPointSummonUpdate(this, v12) )
      {
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        if ( !SelfUserGame )
          goto LABEL_22;
        v16 = SelfUserGame;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL) )
          goto LABEL_19;
        mana = v16->fields.mana;
        v22 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        if ( mana >= v22->static_fields->UserItemMax )
        {
          v24 = this->fields.limitWarningDlgInfo;
          v25 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                   SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo,
                                                                   v17,
                                                                   v18,
                                                                   v19,
                                                                   v20);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
          System_Action___ctor(v30, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v24 )
            goto LABEL_22;
          SummonLimitWarningDlgComponent__OpenManaWarning(v24, v25, v30, 0LL);
        }
        else
        {
LABEL_19:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v23);
        }
      }
    }
    else if ( res == 1 )
    {
      Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( Instance )
      {
        AvalonSceneManager__transitionScene(Instance, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_22:
      sub_B170D4();
    }
  }
  else
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3039, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  SummonRootComponent_o *basePanel; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x9
  SummonControl_o *v14; // x0
  bool v15; // w1
  const MethodInfo *v16; // x2

  if ( (byte_40FBFAE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl__loadAssetsForSummon_b__231_0__, v4);
    sub_B16FFC(&SummonRootComponent_TypeInfo, v5);
    byte_40FBFAE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = (SummonRootComponent_o *)Instance->fields.basePanel,
        v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__231_0__, 0LL),
        !basePanel) )
  {
    sub_B170D4();
  }
  v13 = *(&SummonRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v13
    && (SummonRootComponent_c *)basePanel->klass->_2.typeHierarchy[v13 - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(basePanel, v12, 0LL);
  }
  else
  {
    sub_B173C8(basePanel);
    SummonControl__friendSummonConfirmResult(v14, v15, v16);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerLeftArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerRightArrowBtn; // x0
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v12; // w8
  SummonInfoControl_o *summonInfoCtr; // x0
  int32_t v14; // w20
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *v16; // x0
  UICenterOnChild_o *centerChild; // x21
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UICenterOnChild_o *summonMBannerCenterChild; // x19
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0

  if ( (byte_40FBF7D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12737, v3);
    byte_40FBF7D = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !rightArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL);
    summonMBannerLeftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !summonMBannerLeftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerLeftArrowBtn, 0, 0LL);
    summonMBannerRightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !summonMBannerRightArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerRightArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12737,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
    if ( !bannerLoopCtr )
      goto LABEL_25;
    transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
    if ( !transform )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    currentMoveIdx = this->fields.currentMoveIdx;
    v12 = childCount;
    summonInfoCtr = this->fields.summonInfoCtr;
    v14 = currentMoveIdx + 1 < v12 ? currentMoveIdx + 1 : 0;
    if ( !summonInfoCtr )
      goto LABEL_25;
    SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 0, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    v16 = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
    if ( !v16 )
      goto LABEL_25;
    centerChild = this->fields.centerChild;
    v18 = UnityEngine_Component__get_transform(v16, 0LL);
    if ( !v18
      || (Child = UnityEngine_Transform__GetChild(v18, v14, 0LL), !centerChild)
      || (UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL),
          (summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (v22 = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL)) == 0LL)
      || (v23 = UnityEngine_Transform__GetChild(v22, v14, 0LL), !summonMBannerCenterChild) )
    {
LABEL_25:
      sub_B170D4();
    }
    UICenterOnChild__CenterOn_35064772(summonMBannerCenterChild, v23, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerLeftArrowBtn; // x0
  UnityEngine_Behaviour_o *summonMBannerRightArrowBtn; // x0
  UnityEngine_Component_o *bannerLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w8
  SummonInfoControl_o *summonInfoCtr; // x0
  int v12; // w8
  int32_t v13; // w20
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Component_o *v15; // x0
  UICenterOnChild_o *centerChild; // x21
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UICenterOnChild_o *summonMBannerCenterChild; // x19
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0

  if ( (byte_40FBF7E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12737, v3);
    byte_40FBF7E = 1;
  }
  if ( !this->fields.isDragging )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !rightArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL);
    summonMBannerLeftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
    if ( !summonMBannerLeftArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerLeftArrowBtn, 0, 0LL);
    summonMBannerRightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn;
    if ( !summonMBannerRightArrowBtn )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(summonMBannerRightArrowBtn, 0, 0LL);
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12737,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
    if ( !bannerLoopCtr )
      goto LABEL_25;
    transform = UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
    if ( !transform )
      goto LABEL_25;
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    summonInfoCtr = this->fields.summonInfoCtr;
    v12 = childCount - 1;
    v13 = this->fields.currentMoveIdx - 1 < 0 ? v12 : this->fields.currentMoveIdx - 1;
    if ( !summonInfoCtr )
      goto LABEL_25;
    SummonInfoControl__SetEnableSummonBtn(summonInfoCtr, 0, 0LL);
    titleInfo = this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable(titleInfo, 0, 0LL);
    MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
    v15 = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
    if ( !v15 )
      goto LABEL_25;
    centerChild = this->fields.centerChild;
    v17 = UnityEngine_Component__get_transform(v15, 0LL);
    if ( !v17
      || (Child = UnityEngine_Transform__GetChild(v17, v13, 0LL), !centerChild)
      || (UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL),
          (summonMBannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr) == 0LL)
      || (summonMBannerCenterChild = this->fields.summonMBannerCenterChild,
          (v21 = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL)) == 0LL)
      || (v22 = UnityEngine_Transform__GetChild(v21, v13, 0LL), !summonMBannerCenterChild) )
    {
LABEL_25:
      sub_B170D4();
    }
    UICenterOnChild__CenterOn_35064772(summonMBannerCenterChild, v22, 1, 0LL);
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
  __int64 v16; // x3
  __int64 v17; // x4
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  SummonControl___c_c *v21; // x0
  float m_Height; // s13
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__146_0; // x22
  Il2CppObject *v25; // x23
  struct SummonControl___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v39; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_40FBF64 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl__openAfterSummonInfo_b__146_1__, v5);
    sub_B16FFC(&Method_SummonControl___c__openAfterSummonInfo_b__146_0__, v6);
    sub_B16FFC(&SummonControl___c_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_13463, v8);
    byte_40FBF64 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13463, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v11);
  TUTORIAL_MENU_ARROW_RECT_FS = SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(this, v13);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v21 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v21 = SummonControl___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__146_0 = static_fields->__9__146_0;
  if ( !_9__146_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__146_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(_9__146_0, v25, Method_SummonControl___c__openAfterSummonInfo_b__146_0__, 0LL);
    v26 = SummonControl___c_TypeInfo->static_fields;
    v26->__9__146_0 = _9__146_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__146_0,
      (System_Int32_array **)_9__146_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !Instance )
    sub_B170D4();
  v39.fields.m_XMin = m_XMin;
  v39.fields.m_YMin = m_YMin;
  v39.fields.m_Width = m_Width;
  v39.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v10,
    TUTORIAL_MENU_ARROW_POS_FS,
    v39,
    0.0,
    0LL,
    -1,
    _9__146_0,
    0LL);
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__146_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v37, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialArrowObj; // x0
  PlayMakerFSM_o *fsm; // x0
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_40FBF63 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3033, method);
    byte_40FBF63 = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL), (fsm = this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3033, 0LL),
        (summonInfoCtr = this->fields.summonInfoCtr) == 0LL) )
  {
    sub_B170D4();
  }
  SummonInfoControl__SetTutorialExeBtnEnable(summonInfoCtr, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v20; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v28; // x0
  System_Int32_array **EventTutorialEntity; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  __int64 v42; // x21
  int size; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x8
  __int64 v45; // x21
  __int64 v46; // x2
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x8
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x21
  SummonControl___c_c *v63; // x0
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__148_1; // x22
  Il2CppObject *v66; // x23
  struct SummonControl___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x22
  int32_t v75; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x8
  int32_t missionTargetId; // w22
  System_Action_o *v80; // x20

  if ( (byte_40FBF66 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Comparison_EventTutorialEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventTutorialEntity__TypeInfo, v7);
    sub_B16FFC(&EventTutorialEntity_TypeInfo, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v14);
    sub_B16FFC(&TutorialFlag_TypeInfo, v15);
    sub_B16FFC(&Method_SummonControl___c__openSvtEqInfo_b__148_1__, v16);
    sub_B16FFC(&Method_SummonControl___c__DisplayClass148_0__openSvtEqInfo_b__0__, v17);
    sub_B16FFC(&SummonControl___c__DisplayClass148_0_TypeInfo, v18);
    sub_B16FFC(&SummonControl___c_TypeInfo, v19);
    byte_40FBF66 = 1;
  }
  v20 = sub_B170CC(SummonControl___c__DisplayClass148_0_TypeInfo, method, v2, v3, v4);
  SummonControl___c__DisplayClass148_0___ctor((SummonControl___c__DisplayClass148_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_47;
  *(_QWORD *)(v20 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_47;
  v28 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Int32_array **)EventTutorialMaster__GetEventTutorialEntity(0, 34, v28, 0LL);
  *(_QWORD *)(v20 + 16) = EventTutorialEntity;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v20 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), EventTutorialEntity, v31, v32, v33, v34, v35, v36);
  v41 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v20 + 16);
  if ( !v41 )
    goto LABEL_47;
  v42 = 0LL;
  while ( 1 )
  {
    size = v41->fields._size;
    if ( (int)v42 >= size )
      break;
    if ( size <= (unsigned int)v42 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v44 = v41->fields._items->m_Items[v42];
    if ( v44 )
    {
      if ( v44->fields.missionTargetId == 1 )
        goto LABEL_28;
      v41 = *v30;
      ++v42;
      if ( *v30 )
        continue;
    }
    goto LABEL_47;
  }
  v45 = sub_B170CC(EventTutorialEntity_TypeInfo, v37, v38, v39, v40);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v45, 0LL);
  if ( !v45 )
    goto LABEL_47;
  *(_DWORD *)(v45 + 16) = 1;
  v47 = (System_Int32_array **)sub_B17014(int___TypeInfo, 1LL, v46);
  *(_QWORD *)(v45 + 64) = v47;
  sub_B16F98((BattleServantConfConponent_o *)(v45 + 64), v47, v48, v49, v50, v51, v52, v53);
  v57 = *(_QWORD *)(v45 + 64);
  if ( !v57 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v57 + 24) )
  {
    sub_B17100(v54, v55, v56);
    sub_B170A0();
  }
  *(_DWORD *)(v57 + 32) = 1;
  if ( !*v30 )
    goto LABEL_47;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    *v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v62 = *v30;
  v63 = SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v63 = SummonControl___c_TypeInfo;
  }
  static_fields = v63->static_fields;
  _9__148_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__148_1;
  if ( !_9__148_1 )
  {
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)static_fields->__9;
    _9__148_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_EventTutorialEntity__TypeInfo,
                                                                            v58,
                                                                            v59,
                                                                            v60,
                                                                            v61);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__148_1,
      v66,
      Method_SummonControl___c__openSvtEqInfo_b__148_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventTutorialEntity___ctor__);
    v67 = SummonControl___c_TypeInfo->static_fields;
    v67->__9__148_1 = (struct System_Comparison_EventTutorialEntity__o *)_9__148_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v67->__9__148_1,
      (System_Int32_array **)_9__148_1,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v62 )
    goto LABEL_47;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v62,
    (System_Comparison_T__o *)_9__148_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v74 = *v30;
  if ( !*v30 )
LABEL_47:
    sub_B170D4();
  v75 = v74->fields._size - 1;
  if ( v75 >= 0 )
  {
    while ( v74 )
    {
      if ( v74->fields._size <= (unsigned int)v75 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v76 = v74->fields._items->m_Items[v75];
      if ( !v76 )
        break;
      if ( v76->fields.missionTargetId != 1 )
      {
        v77 = *v30;
        if ( !*v30 )
          goto LABEL_47;
        if ( v77->fields._size <= (unsigned int)v75 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v78 = v77->fields._items->m_Items[v75];
        if ( !v78 )
          goto LABEL_47;
        missionTargetId = v78->fields.missionTargetId;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        if ( TutorialFlag__GetGachaFlg(missionTargetId, 0LL) )
        {
          if ( !*v30 )
            goto LABEL_47;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v30,
            v75,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v74 = *v30;
      if ( --v75 < 0 )
        goto LABEL_46;
    }
    goto LABEL_47;
  }
LABEL_46:
  v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
  System_Action___ctor(v80, (Il2CppObject *)v20, Method_SummonControl___c__DisplayClass148_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(
    (System_Collections_Generic_List_EventTutorialEntity__o *)v74,
    v80,
    0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  AdManager_o *Instance; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FBFB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v8);
    sub_B16FFC(&Method_SummonControl_callbackTutorialSet__, v9);
    sub_B16FFC(&StringLiteral_11043, v10);
    byte_40FBFB2 = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v11,
                                                                  (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 101, 0LL);
      Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Instance )
      {
        AdManager__TrackEvent(Instance, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11043, 0LL);
}


void __fastcall SummonControl__progTutorial(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SummonInfoControl_o *summonInfoCtr; // x0
  TitleInfoControl_o *titleInfo; // x0
  UnityEngine_Collider_o *fragmentNumCollider; // x0
  SummonInfoControl_o *v7; // x0
  UnityEngine_Component_o *indexPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *leftArrowBtn; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Component_o *rightArrowBtn; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *summonHelpInfo; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *detailInfo; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *summonMBannerObject; // x0
  const MethodInfo *v19; // x1
  SummonInfoControl_o *v20; // x0
  TitleInfoControl_o *v21; // x0
  UnityEngine_Collider_o *v22; // x0
  SummonInfoControl_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *tutorialArrowObj; // x0
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x1

  switch ( this->fields.tutorialKind )
  {
    case 1:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_37;
      SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, 0, 0LL);
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_37;
      TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL);
      fragmentNumCollider = (UnityEngine_Collider_o *)this->fields.fragmentNumCollider;
      if ( !fragmentNumCollider )
        goto LABEL_37;
      UnityEngine_Collider__set_enabled(fragmentNumCollider, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 1, 0LL);
      v7 = this->fields.summonInfoCtr;
      if ( !v7 )
        goto LABEL_37;
      SummonInfoControl__SetTutorialExeBtnEnable(v7, 0, 0LL);
      indexPanel = (UnityEngine_Component_o *)this->fields.indexPanel;
      if ( !indexPanel )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject(indexPanel, 0LL);
      if ( !gameObject )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      leftArrowBtn = (UnityEngine_Component_o *)this->fields.leftArrowBtn;
      if ( !leftArrowBtn )
        goto LABEL_37;
      v11 = UnityEngine_Component__get_gameObject(leftArrowBtn, 0LL);
      if ( !v11 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v11, 0, 0LL);
      rightArrowBtn = (UnityEngine_Component_o *)this->fields.rightArrowBtn;
      if ( !rightArrowBtn )
        goto LABEL_37;
      v13 = UnityEngine_Component__get_gameObject(rightArrowBtn, 0LL);
      if ( !v13 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v13, 0, 0LL);
      summonHelpInfo = this->fields.summonHelpInfo;
      if ( !summonHelpInfo )
        goto LABEL_37;
      v15 = UnityEngine_GameObject__get_gameObject(summonHelpInfo, 0LL);
      if ( !v15 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
      detailInfo = this->fields.detailInfo;
      if ( !detailInfo )
        goto LABEL_37;
      v17 = UnityEngine_GameObject__get_gameObject(detailInfo, 0LL);
      if ( !v17 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      summonMBannerObject = this->fields.summonMBannerObject;
      if ( !summonMBannerObject )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(summonMBannerObject, 0, 0LL);
      SummonControl__openSummonExeArrow(this, v19);
      break;
    case 2:
      SummonControl__setTutorialCtrEnable(this, 0, v2);
      v20 = this->fields.summonInfoCtr;
      if ( !v20 )
        goto LABEL_37;
      SummonInfoControl__SetTutorialBtnEnable(v20, 0, 0LL);
      v21 = this->fields.titleInfo;
      if ( !v21 )
        goto LABEL_37;
      TitleInfoControl__setBackBtnEnable(v21, 0, 0LL);
      v22 = (UnityEngine_Collider_o *)this->fields.fragmentNumCollider;
      if ( !v22 )
        goto LABEL_37;
      UnityEngine_Collider__set_enabled(v22, 0, 0LL);
      MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
      v23 = this->fields.summonInfoCtr;
      if ( !v23 )
        goto LABEL_37;
      SummonInfoControl__SetTutorialExeBtnEnable(v23, 0, 0LL);
      v24 = (UnityEngine_Component_o *)this->fields.indexPanel;
      if ( !v24 )
        goto LABEL_37;
      v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
      if ( !v25 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v25, 0, 0LL);
      v26 = (UnityEngine_Component_o *)this->fields.leftArrowBtn;
      if ( !v26 )
        goto LABEL_37;
      v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( !v27 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v27, 0, 0LL);
      v28 = (UnityEngine_Component_o *)this->fields.rightArrowBtn;
      if ( !v28 )
        goto LABEL_37;
      v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
      if ( !v29 )
        goto LABEL_37;
      UnityEngine_GameObject__SetActive(v29, 0, 0LL);
      v30 = this->fields.summonHelpInfo;
      if ( !v30 )
        goto LABEL_37;
      v31 = UnityEngine_GameObject__get_gameObject(v30, 0LL);
      if ( !v31
        || (UnityEngine_GameObject__SetActive(v31, 0, 0LL), (v32 = this->fields.detailInfo) == 0LL)
        || (v33 = UnityEngine_GameObject__get_gameObject(v32, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(v33, 0, 0LL), (tutorialArrowObj = this->fields.tutorialArrowObj) == 0LL)
        || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 0, 0LL), (v35 = this->fields.summonMBannerObject) == 0LL) )
      {
LABEL_37:
        sub_B170D4();
      }
      UnityEngine_GameObject__SetActive(v35, 0, 0LL);
      SummonControl__openAfterSummonInfo(this, v36);
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
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *summonResultInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x0
  WebViewManager_o *Instance; // x0
  GachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t VaildPayType; // w0
  const MethodInfo *v22; // x1
  int32_t v23; // w20
  TerminalPramsManager_c *v24; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_40FBF6A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40FBF6A = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_22;
  transform = UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !transform )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(transform, this->fields.initBannerPos, 0LL);
  this->fields.gachaSubEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.gachaSubEntity, 0LL, v8, v9, v10, v11, v12, v13);
  SummonControl__clearBannerList(this, v14);
  SummonControl__clearResultList(this, v15);
  summonResultInfo = (UnityEngine_Component_o *)this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(summonResultInfo, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  vaildGachaList = this->fields.vaildGachaList;
  if ( vaildGachaList )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)vaildGachaList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  VaildPayType = GachaMaster__getVaildPayType(MasterData_WarQuestSelectionMaster, 0LL);
  this->fields.summonType = VaildPayType;
  v23 = VaildPayType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F607A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    byte_40F607A = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_SummonType_k__BackingField = v23;
  SummonControl__releaseBannerData(this, v22);
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
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int size; // w8
  __int64 currentIdx; // x21
  VaildGachaInfo_o *v10; // x8
  int v11; // w21
  struct System_Collections_Generic_List_VaildGachaInfo__o *v12; // x20
  __int64 v13; // x21
  VaildGachaInfo_o *v14; // x8
  int32_t id; // w20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  SummonControl_o *v24; // x0
  int32_t FriendPointIndex; // w0
  const MethodInfo *v26; // x2

  if ( (byte_40FBFCD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FBFCD = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_19;
  size = vaildGachaList->fields._size;
  currentIdx = this->fields.currentIdx;
  if ( size <= (int)currentIdx )
    goto LABEL_18;
  if ( size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v10 = vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !v10 )
LABEL_28:
    sub_B170D4();
  if ( v10->fields.type != 3 )
  {
    v12 = this->fields.vaildGachaList;
    if ( v12 )
    {
      v13 = this->fields.currentIdx;
      if ( v12->fields._size <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v14 = v12->fields._items->m_Items[v13];
      if ( v14 )
      {
        id = v14->fields.id;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       id,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Entity )
            {
              LODWORD(vaildGachaList) = Entity->fields.emptyMessage;
LABEL_19:
              v11 = 0;
              goto LABEL_20;
            }
LABEL_18:
            LODWORD(vaildGachaList) = 0;
            goto LABEL_19;
          }
        }
      }
    }
    goto LABEL_28;
  }
  LODWORD(vaildGachaList) = 0;
  v11 = 1;
LABEL_20:
  if ( !SummonControl__resetSummonVaildData(this, method) || SummonControl__checkMaxDrawNum(this, v19) )
  {
    SummonControl__deleteBannerList(this, v19);
    SummonControl__checkValidGachaList(this, v20);
    SummonControl__createSummonInfo(this, v21);
    v24 = this;
    if ( (((_DWORD)vaildGachaList != 0) & ~v11) != 0 )
    {
      FriendPointIndex = SummonControl__searchExtraGroupIdIndex(this, (int32_t)vaildGachaList, v23);
      if ( FriendPointIndex != -1 )
      {
LABEL_26:
        SummonControl__setDispRePosition(this, FriendPointIndex, v26);
        return;
      }
      v24 = this;
    }
    FriendPointIndex = SummonControl__getFriendPointIndex(v24, v22);
    if ( FriendPointIndex )
      goto LABEL_26;
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

  if ( (byte_40FBF69 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FBF69 = 1;
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
    sub_B16F98(p_bannerAssetData, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v14; // x3
  __int64 v15; // x4
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  GachaDrawRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t ticketItemId; // w24
  int32_t gachaTime; // w21
  int32_t warId; // w23
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  Il2CppObject *p_obj; // x28
  GachaDrawRequest_o *v28; // x19
  System_String_o *selectBonusListData; // x27
  __int64 v30; // x8
  unsigned __int64 v31; // x23
  int32_t v32; // w21
  System_String_o *v33; // x0
  MissionNotifyManager_o *v34; // x0
  int32_t v35; // [xsp+14h] [xbp-5Ch]
  int32_t v36; // [xsp+18h] [xbp-58h]
  int32_t shopIdIdx; // [xsp+1Ch] [xbp-54h]

  if ( (byte_40FBFAF & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_GachaDrawRequest___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B16FFC(&Method_SummonControl_callbackGachaDraw__, v8);
    sub_B16FFC(&StringLiteral_132, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FBFAF = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v12,
                                                 v13,
                                                 v14,
                                                 v15);
  NetworkManager_ResultCallbackFunc___ctor(v16, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (GachaDrawRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                              v16,
                                                              (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
  v28 = Request_WarBoardWallAttackRequest;
  selectBonusListData = (System_String_o *)StringLiteral_1;
  if ( storyAdjustIds )
  {
    v30 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v30 )
    {
      if ( (int)v30 >= 1 )
      {
        v35 = warId;
        v36 = gachaTime;
        v31 = 0LL;
        v32 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v31 >= (unsigned int)v30 )
          {
            sub_B17100(Request_WarBoardWallAttackRequest, v18, v19);
            sub_B170A0();
          }
          v33 = System_Int32__ToString(v32, 0LL);
          Request_WarBoardWallAttackRequest = (GachaDrawRequest_o *)System_String__Concat_43746016(
                                                                      selectBonusListData,
                                                                      v33,
                                                                      (System_String_o *)StringLiteral_132,
                                                                      0LL);
          LODWORD(v30) = storyAdjustIds->max_length;
          ++v31;
          selectBonusListData = (System_String_o *)Request_WarBoardWallAttackRequest;
          v32 += 4;
        }
        while ( (__int64)v31 < (int)v30 );
        selectBonusListData = (System_String_o *)StringLiteral_1;
        warId = v35;
        gachaTime = v36;
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
  v34 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v34 || (MissionNotifyManager__StartPause(v34, 0LL), !v28) )
LABEL_28:
    sub_B170D4();
  GachaDrawRequest__beginRequest(
    v28,
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
  MissionNotifyManager_o *v12; // x0
  System_String_o *MainBgmName; // x20
  UnityEngine_GameObject_o *maskBgObject; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  CommonUI_o *Instance; // x20
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  TitleInfoControl_o *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x0
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FBFCC & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&BgmManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40FBFCC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12 )
    goto LABEL_33;
  MissionNotifyManager__EndPause(v12, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_33;
  CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0LL, 36, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v18 = this->fields.titleInfo;
  if ( !v18 )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_19608808(v18, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v19);
  SummonControl__setUserResourceDisp(this, v20);
  summonInfoCtr = this->fields.summonInfoCtr;
  this->fields.getSvtIdx = 0;
  if ( !summonInfoCtr )
    goto LABEL_33;
  SummonInfoControl__SetSummonDispInfo(summonInfoCtr, 0LL);
  MainMenuBar__UpdateNoticeNumber(0LL);
  v22 = this->fields.titleInfo;
  if ( !v22 )
    goto LABEL_33;
  if ( this->fields.tutorialKind == 2 )
  {
    TitleInfoControl__setBackBtnColliderEnable(v22, 0, 0LL);
    SummonControl__progTutorial(this, v23);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable(v22, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v24);
  }
  bannerInfoList = this->fields.bannerInfoList;
  if ( !bannerInfoList )
LABEL_33:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bannerInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v27.fields.current )
      sub_B170D4();
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v27.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v26);
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
  sub_B16F98(
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
  SummonResultComponent_o *summonResultInfo; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *v13; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_40FBFC6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl__resetResultList_b__263_0__, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    byte_40FBFC6 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    summonResultInfo = this->fields.summonResultInfo;
    if ( !summonResultInfo )
      goto LABEL_15;
    SummonResultComponent__ClearTouchBlocker(summonResultInfo, 0LL);
  }
  this->fields.isResult = 0;
  v13 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__263_0__, 0LL);
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  SummonControl__setUserResourceDisp(this, method);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B170D4();
  SummonInfoControl__SetSummonDispInfo(summonInfoCtr, 0LL);
}


bool __fastcall SummonControl__resetSummonVaildData(SummonControl_o *this, const MethodInfo *method)
{
  GachaMaster_o *gachaMst; // x0
  GachaEntity_array *ListValidData; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct GachaEntity_array *useGachaData; // x8
  GachaEntity_array *v13; // x19
  __int64 v14; // x9
  BattleServantConfConponent_o *p_useGachaData; // x20
  unsigned int v16; // w10
  unsigned int v17; // w21
  GachaEntity_o *v18; // x0

  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    goto LABEL_15;
  ListValidData = GachaMaster__getListValidData(gachaMst, 0LL);
  useGachaData = this->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_15;
  v13 = ListValidData;
  if ( !ListValidData )
    goto LABEL_15;
  v14 = *(_QWORD *)&useGachaData->max_length;
  p_useGachaData = (BattleServantConfConponent_o *)&this->fields.useGachaData;
  if ( (_DWORD)v14 == ListValidData->max_length )
  {
    if ( (int)v14 >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)v14 || (v17 = v16, v16 >= v13->max_length) )
        {
          sub_B17100(ListValidData, v5, v6);
          sub_B170A0();
        }
        v18 = useGachaData->m_Items[v16];
        if ( !v18 )
          break;
        ListValidData = (GachaEntity_array *)((__int64 (__fastcall *)(GachaEntity_o *, GachaEntity_o *, Il2CppMethodPointer))v18->klass->vtable._0_Equals.method)(
                                               v18,
                                               v13->m_Items[v16],
                                               v18->klass->vtable._1_Finalize.methodPtr);
        if ( ((unsigned __int8)ListValidData & 1) == 0 )
          goto LABEL_14;
        useGachaData = (struct GachaEntity_array *)p_useGachaData->klass;
        if ( !p_useGachaData->klass )
          break;
        LODWORD(v14) = useGachaData->max_length;
        v16 = v17 + 1;
        if ( (int)(v17 + 1) >= (int)v14 )
          return 1;
      }
LABEL_15:
      sub_B170D4();
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (BattleServantConfConponent_c *)v13;
    sub_B16F98(p_useGachaData, (System_Int32_array **)v13, v6, v7, v8, v9, v10, v11);
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
  AssetData_o *bannerAssetData; // x0
  void *ObjectList_Texture2D; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int v11; // w8
  _DWORD *v12; // x20
  unsigned int v13; // w23
  char *v14; // x8
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22

  if ( (byte_40FBF74 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObjectList_GameObject___, searchTarget);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FBF74 = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_18;
  ObjectList_Texture2D = AssetData__GetObjectList_Texture2D_(
                           bannerAssetData,
                           (const MethodInfo_18AFE14 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !ObjectList_Texture2D )
    goto LABEL_18;
  v11 = *((_DWORD *)ObjectList_Texture2D + 6);
  v12 = ObjectList_Texture2D;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        sub_B17100(ObjectList_Texture2D, v9, v10);
        sub_B170A0();
      }
      v14 = (char *)&v12[2 * v13];
      v15 = (UnityEngine_GameObject_o *)*((_QWORD *)v14 + 4);
      if ( !v15 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          *((UnityEngine_GameObject_o **)v14 + 4),
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      ObjectList_Texture2D = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)ObjectList_Texture2D & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          break;
        ObjectList_Texture2D = UIAtlas__GetSprite((UIAtlas_o *)Component_srcLineSprite, searchTarget, 0LL);
        if ( ObjectList_Texture2D )
          return v15;
      }
      v11 = v12[6];
      if ( (int)++v13 >= v11 )
        return 0LL;
    }
LABEL_18:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SummonControl__searchExtraGroupIdIndex(
        SummonControl_o *this,
        int32_t extraGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x21
  __int64 v10; // x22
  int size; // w8
  unsigned int v12; // w26
  __int64 v13; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v14; // x21
  __int64 v15; // x8
  int32_t v16; // w21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40FBFCF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, *(_QWORD *)&extraGroupId);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FBFCF = 1;
  }
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_19:
    sub_B170D4();
  v10 = 4LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= size )
      return -1;
    if ( size <= v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = *((_QWORD *)&vaildGachaList->fields._items->obj.klass + v10);
    if ( !v13 )
      goto LABEL_19;
    if ( *(_DWORD *)(v13 + 52) != 3 )
    {
      v14 = this->fields.vaildGachaList;
      if ( !v14 )
        goto LABEL_19;
      if ( v14->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v15 = *((_QWORD *)&v14->fields._items->obj.klass + v10);
      if ( !v15 )
        goto LABEL_19;
      v16 = *(_DWORD *)(v15 + 16);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_19;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v16,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( LODWORD(Entity->fields.emptyMessage) == extraGroupId )
          return v10 - 4;
      }
    }
    vaildGachaList = this->fields.vaildGachaList;
    ++v10;
    if ( !vaildGachaList )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setCenter(SummonControl_o *this, const MethodInfo *method)
{
  struct UIPanel_o *indexPanel; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int v7; // w8
  float32x2_t *v8; // x20
  float *v9; // x21
  unsigned __int64 v10; // x22
  UnityEngine_Component_o *v11; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_Transform_o *transform; // x0
  int v16; // s0
  int v17; // s1
  int v18; // s2
  float32x2_t v19; // d8
  float v20; // s9
  float32x2_t v21; // d10
  float v22; // s11
  float v23; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  indexPanel = this->fields.indexPanel;
  if ( !indexPanel
    || (v4 = ((__int64 (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))indexPanel->klass->vtable._11_get_worldCorners.method)(
               indexPanel,
               indexPanel->klass->vtable._12_Invalidate.methodPtr)) == 0 )
  {
LABEL_11:
    sub_B170D4();
  }
  v7 = *(_DWORD *)(v4 + 24);
  v8 = (float32x2_t *)v4;
  v9 = (float *)(v4 + 40);
  v10 = -1LL;
  do
  {
    if ( v10 + 1 >= v7 )
      goto LABEL_12;
    v11 = (UnityEngine_Component_o *)this->fields.indexPanel;
    if ( !v11 )
      goto LABEL_11;
    v12 = *(v9 - 2);
    v13 = *(v9 - 1);
    v14 = *v9;
    transform = UnityEngine_Component__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_11;
    v24.fields.x = v12;
    v24.fields.y = v13;
    v24.fields.z = v14;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__InverseTransformPoint(transform, v24, 0LL);
    if ( v10 + 1 >= v8[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)v9 - 2) = v16;
    *((_DWORD *)v9 - 1) = v17;
    *(_DWORD *)v9 = v18;
    v9 += 3;
    v7 = v8[3].n64_u32[0];
    ++v10;
  }
  while ( v10 <= 2 );
  if ( v7 < 3 )
  {
LABEL_12:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v19.n64_u64[0] = v8[4].n64_u64[0];
  v20 = v8[5].n64_f32[0];
  v21.n64_u64[0] = v8[7].n64_u64[0];
  v22 = v8[8].n64_f32[0];
  v23 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v19, vmul_n_f32(vsub_f32(v21, v19), v23));
  this->fields.center.fields.z = v20 + (float)((float)(v22 - v20) * v23);
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
  __int64 v22; // x3
  __int64 v23; // x4
  SummonInfoControl_ClickDelegate_o *v24; // x22
  SummonInfoControl_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_o *v30; // x21

  if ( (byte_40FBF7F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SummonInfoControl_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v4);
    sub_B16FFC(&Method_SummonControl__setChangeSummonInfo_b__178_0__, v5);
    sub_B16FFC(&Method_SummonControl_exeSummon__, v6);
    byte_40FBF7F = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v16 = vaildGachaList->fields._items->m_Items[currentIdx];
  this->fields.currentGachaInfo = v16;
  sub_B16F98(
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
  v24 = (SummonInfoControl_ClickDelegate_o *)sub_B170CC(SummonInfoControl_ClickDelegate_TypeInfo, v20, v21, v22, v23);
  SummonInfoControl_ClickDelegate___ctor(v24, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v24, 0LL),
        v25 = this->fields.summonInfoCtr,
        v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29),
        System_Action___ctor(v30, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__178_0__, 0LL),
        !v25) )
  {
LABEL_10:
    sub_B170D4();
  }
  SummonInfoControl__SetAlphaSummonBtn(v25, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  UIWrapContent_o *bannerLoopCtr; // x0
  UIWrapContent_o *summonMBannerLoopCtr; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_40FBF84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, *(_QWORD *)&currentIdx);
    byte_40FBF84 = 1;
  }
  if ( !this->fields.vaildGachaList
    || (bannerLoopCtr = this->fields.bannerLoopCtr, this->fields.isNotCenterOnSync = 1, !bannerLoopCtr)
    || (UIWrapContent__setScrollPos(bannerLoopCtr, currentIdx, 0LL),
        (summonMBannerLoopCtr = this->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_B170D4();
  }
  UIWrapContent__setScrollPos(summonMBannerLoopCtr, currentIdx, 0LL);
  SummonControl__setSliderIcon(this, currentIdx, v7);
  this->fields.currentIdx = currentIdx;
  this->fields.currentMoveIdx = currentIdx;
  SummonControl__setChangeSummonInfo(this, v8);
  SummonControl__UpdateSummonInfoControlLayout(this, v9);
}


void __fastcall SummonControl__setDispSummonForm(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__setDispSummonInfo(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *currentResourceInfo; // x0
  UnityEngine_GameObject_o *detailInfo; // x0
  UnityEngine_GameObject_o *summonBannerInfo; // x0
  UnityEngine_GameObject_o *summonHelpInfo; // x0
  UnityEngine_GameObject_o *summonMBannerObject; // x0
  bool v12; // w20
  UnityEngine_GameObject_o *helpImgInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(titleInfo, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
  currentResourceInfo = this->fields.currentResourceInfo;
  if ( !currentResourceInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentResourceInfo, isDisp, 0LL);
  detailInfo = this->fields.detailInfo;
  if ( !detailInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(detailInfo, isDisp, 0LL);
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo
    || (UnityEngine_GameObject__SetActive(summonBannerInfo, isDisp, 0LL),
        (summonHelpInfo = this->fields.summonHelpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(summonHelpInfo, 0, 0LL),
        (summonMBannerObject = this->fields.summonMBannerObject) == 0LL)
    || (v12 = isDisp,
        UnityEngine_GameObject__SetActive(summonMBannerObject, v12, 0LL),
        (helpImgInfo = this->fields.helpImgInfo) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(helpImgInfo, v12, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B170D4();
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  SummonControl_o *v2; // x19
  __int64 v3; // x1
  int32_t GachaIdFromSelectedBannerEntity; // w0
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x23
  int size; // w21
  unsigned int v8; // w22
  GachaBannerComponent_o *v9; // x8
  struct VaildGachaInfo_o *info; // x9
  SummonControl_o *v11; // x0
  int32_t bannerIdx; // w1

  v2 = this;
  if ( (byte_40FBF82 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, method);
    this = (SummonControl_o *)sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v3);
    byte_40FBF82 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v9 = bannerInfoList->fields._items->m_Items[v8];
        if ( !v9 )
LABEL_16:
          sub_B170D4();
        info = v9->fields.info;
        if ( !info )
        {
          bannerIdx = 1;
          goto LABEL_22;
        }
        if ( info->fields.type == v2->fields.summonType
          && (GachaIdFromSelectedBannerEntity < 1 || info->fields.id == GachaIdFromSelectedBannerEntity) )
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct VaildGachaInfo_o *v13; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  UnityEngine_Component_o *stoneNumInfo; // x0
  _BOOL4 isPointSummon; // w26
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v18; // x25
  WebViewObject_o *v19; // x0
  UIWidget_o *v20; // x23
  WebViewObject_o *v21; // x0
  UIWidget_o *v22; // x24
  WebViewObject_o *v23; // x0
  UIWidget_o *v24; // x21
  WebViewObject_o *v25; // x0
  UIWidget_o *v26; // x22
  WebViewObject_o *v27; // x20
  int v28; // s3
  float v29; // s4
  float v30; // s5
  float v31; // s6
  SummonControl_c *v32; // x8
  float COLOR_VAL; // s0
  float v34; // s1
  float v35; // s2
  UnityEngine_Collider_o *fragmentNumCollider; // x0
  int v37; // s0
  int v41; // s0
  int v45; // s0
  int v49; // s0
  int v53; // s0
  int v57; // s0
  UnityEngine_Collider_o *v61; // x0
  UnityEngine_Collider_o *v62; // x0
  MethodInfo v63; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  if ( (byte_40FBF80 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9);
    sub_B16FFC(&SummonControl_TypeInfo, v10);
    byte_40FBF80 = 1;
  }
  v63.methodPointer = 0LL;
  v63.invoker_method = 0LL;
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_37;
  currentIdx = this->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v13 = vaildGachaList->fields._items->m_Items[currentIdx];
  this->fields.currentGachaInfo = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentGachaInfo,
    (System_Int32_array **)v13,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  stoneNumInfo = (UnityEngine_Component_o *)this->fields.stoneNumInfo;
  if ( !stoneNumInfo )
    goto LABEL_37;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              stoneNumInfo,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentStoneNumLb )
    goto LABEL_37;
  v18 = (UIWidget_o *)Component_WebViewObject;
  v19 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.currentStoneNumLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.pointNumInfo )
    goto LABEL_37;
  v20 = (UIWidget_o *)v19;
  v21 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.pointNumInfo,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentPointNumLb )
    goto LABEL_37;
  v22 = (UIWidget_o *)v21;
  v23 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.currentPointNumLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.fragmentNumInfo )
    goto LABEL_37;
  v24 = (UIWidget_o *)v23;
  v25 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.fragmentNumInfo,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.currentFragmentNumLb )
    goto LABEL_37;
  v26 = (UIWidget_o *)v25;
  v27 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.currentFragmentNumLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v32 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v32 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v32->static_fields->COLOR_VAL;
  v34 = COLOR_VAL;
  v35 = COLOR_VAL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v28 - 3), v29, v30, v31, &v63);
  *(_QWORD *)&v68.fields.r = v63.methodPointer;
  *(_QWORD *)&v68.fields.b = v63.invoker_method;
  if ( isPointSummon )
  {
    if ( !v18 )
      goto LABEL_37;
    UIWidget__set_color(v18, v68, 0LL);
    if ( !v20 )
      goto LABEL_37;
    *(_QWORD *)&v64.fields.b = v63.invoker_method;
    *(_QWORD *)&v64.fields.r = v63.methodPointer;
    UIWidget__set_color(v20, v64, 0LL);
    if ( !v26 )
      goto LABEL_37;
    *(_QWORD *)&v65.fields.b = v63.invoker_method;
    *(_QWORD *)&v65.fields.r = v63.methodPointer;
    UIWidget__set_color(v26, v65, 0LL);
    if ( !v27 )
      goto LABEL_37;
    *(_QWORD *)&v66.fields.b = v63.invoker_method;
    *(_QWORD *)&v66.fields.r = v63.methodPointer;
    UIWidget__set_color((UIWidget_o *)v27, v66, 0LL);
    fragmentNumCollider = (UnityEngine_Collider_o *)this->fields.fragmentNumCollider;
    if ( !fragmentNumCollider )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled(fragmentNumCollider, 0, 0LL);
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
    if ( !v22 )
      goto LABEL_37;
    UIWidget__set_color(v22, *(UnityEngine_Color_o *)&v37, 0LL);
    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
    if ( !v24 )
      goto LABEL_37;
    UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v41, 0LL);
  }
  else
  {
    if ( !v22 )
      goto LABEL_37;
    UIWidget__set_color(v22, v68, 0LL);
    if ( !v24 )
      goto LABEL_37;
    *(_QWORD *)&v67.fields.b = v63.invoker_method;
    *(_QWORD *)&v67.fields.r = v63.methodPointer;
    UIWidget__set_color(v24, v67, 0LL);
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
    if ( !v18 )
      goto LABEL_37;
    UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v45, 0LL);
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_37;
    UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v49, 0LL);
    *(UnityEngine_Color_o *)&v53 = UnityEngine_Color__get_white(0LL);
    if ( !v26 )
      goto LABEL_37;
    UIWidget__set_color(v26, *(UnityEngine_Color_o *)&v53, 0LL);
    *(UnityEngine_Color_o *)&v57 = UnityEngine_Color__get_white(0LL);
    if ( !v27 )
      goto LABEL_37;
    UIWidget__set_color((UIWidget_o *)v27, *(UnityEngine_Color_o *)&v57, 0LL);
    v61 = (UnityEngine_Collider_o *)this->fields.fragmentNumCollider;
    if ( !v61 )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled(v61, 1, 0LL);
  }
  if ( (unsigned int)(this->fields.tutorialKind - 1) > 2 )
    return;
  v62 = (UnityEngine_Collider_o *)this->fields.fragmentNumCollider;
  if ( !v62 )
LABEL_37:
    sub_B170D4();
  UnityEngine_Collider__set_enabled(v62, 0, 0LL);
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v5; // x1
  MissionNotifyManager_o *v6; // x0

  if ( (byte_40FBFC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40FBFC4 = 1;
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
  v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v6 )
LABEL_9:
    sub_B170D4();
  MissionNotifyManager__EndPause(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setSliderIcon(SummonControl_o *this, int32_t idx, const MethodInfo *method)
{
  UnityEngine_Component_o *sliderGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Component_o *Child; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  SelectBannerSliderIcon_o *v14; // x23

  if ( (byte_40FBF81 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, *(_QWORD *)&idx);
    byte_40FBF81 = 1;
  }
  sliderGrid = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !sliderGrid )
    goto LABEL_15;
  transform = UnityEngine_Component__get_transform(sliderGrid, 0LL);
  if ( !transform )
    goto LABEL_15;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  if ( childCount >= 1 )
  {
    v8 = childCount;
    v9 = 0;
    while ( 1 )
    {
      v10 = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !v10 )
        break;
      v11 = UnityEngine_Component__get_transform(v10, 0LL);
      if ( !v11 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v11, v9, 0LL);
      if ( !Child )
        break;
      ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                       Child,
                                       (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !ComponentInChildren_UIWidget )
        break;
      v14 = (SelectBannerSliderIcon_o *)ComponentInChildren_UIWidget;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)ComponentInChildren_UIWidget, 0, 0LL);
      if ( idx == v9 )
        SelectBannerSliderIcon__setEnableOnImg(v14, 1, 0LL);
      if ( ++v9 >= v8 )
        return;
    }
LABEL_15:
    sub_B170D4();
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
  int64_t Time; // x0
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *maskBgObject; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  const MethodInfo *v22; // x2
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v24; // x0
  TitleInfoControl_o *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UILabel_o *summonHelpLabel; // x21
  System_String_o *v34; // x0
  __int64 v35; // x1
  TerminalPramsManager_c *v36; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  __int64 v45; // x21
  __int64 v46; // x21
  DataManager_o *v47; // x0
  struct GachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  GachaMaster_o *gachaMst; // x0
  struct GachaEntity_array *ListValidData; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UIScrollView_o *summonBannerScrollView; // x0
  UnityEngine_GameObject_o *summonHelpInfo; // x0
  UnityEngine_GameObject_o *summonMBannerObject; // x0
  UISprite_o *summonMBannerLineSprite; // x21
  struct UISprite_o *v75; // x0
  UIScrollView_o *summonMBannerScrollView; // x0
  System_String_o *assetPath; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_String_o *v82; // x20
  AssetLoader_LoadEndDataHandler_o *v83; // x21
  PlayMakerFSM_o *fsm; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FBF67 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v5);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9);
    sub_B16FFC(&Method_SummonControl_LoadBannerEnd__, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_12388, v12);
    sub_B16FFC(&StringLiteral_13098, v13);
    sub_B16FFC(&StringLiteral_6309, v14);
    sub_B16FFC(&StringLiteral_19430, v15);
    sub_B16FFC(&StringLiteral_19356, v16);
    byte_40FBF67 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  summonBannerInfo = this->fields.summonBannerInfo;
  this->fields.summonSceneInTime = Time;
  if ( !summonBannerInfo )
    goto LABEL_52;
  transform = UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !transform )
    goto LABEL_52;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  maskBgObject = this->fields.maskBgObject;
  this->fields.initBannerPos = localPosition;
  if ( !maskBgObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v22);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.fsm, 1, 0LL, 36, 0LL);
  v24 = this->fields.titleInfo;
  if ( !v24 )
    goto LABEL_52;
  TitleInfoControl__setBackBtnSprite_19608808(v24, 1, 0, 0, 0LL);
  v25 = this->fields.titleInfo;
  if ( !v25 )
    goto LABEL_52;
  TitleInfoControl__setBackBtnDepth(v25, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  *(_WORD *)&this->fields.isDoneTutorial = 257;
  v26 = (System_Int32_array **)StringLiteral_13098;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13098;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.assetPath, v26, v27, v28, v29, v30, v31, v32);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12388, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_52;
  UILabel__set_text(summonHelpLabel, v34, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40FC005 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v35);
    byte_40FC005 = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v36->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  SummonControl__setUserResourceDisp(this, v44);
  v45 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v46 = **(_QWORD **)(v45 + 192);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AAFCFC(v46);
  v47 = **(DataManager_o ***)(v46 + 184);
  if ( !v47 )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v47,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gachaMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    goto LABEL_52;
  ListValidData = GachaMaster__getListValidData(gachaMst, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useGachaData,
    (System_Int32_array **)ListValidData,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  SummonControl__checkValidGachaList(this, v63);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_52;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.vaildGachaList, 0LL, v64, v65, v66, v67, v68, v69);
  }
  summonBannerScrollView = this->fields.summonBannerScrollView;
  if ( !summonBannerScrollView )
    goto LABEL_52;
  UIScrollView__ResetPosition(summonBannerScrollView, 0LL);
  summonHelpInfo = this->fields.summonHelpInfo;
  if ( !summonHelpInfo )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(summonHelpInfo, 0, 0LL);
  summonMBannerObject = this->fields.summonMBannerObject;
  if ( !summonMBannerObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(summonMBannerObject, 1, 0LL);
  summonMBannerLineSprite = this->fields.summonMBannerLineSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_19430, 0LL);
  v75 = this->fields.summonMBannerLineSprite;
  if ( !v75 )
    goto LABEL_52;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v75->klass->vtable._33_MakePixelPerfect.method)(
    v75,
    v75->klass->vtable._34_get_minWidth.methodPtr);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_19356, 0LL);
  summonMBannerScrollView = this->fields.summonMBannerScrollView;
  if ( !summonMBannerScrollView )
    goto LABEL_52;
  UIScrollView__ResetPosition(summonMBannerScrollView, 0LL);
  assetPath = this->fields.assetPath;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(assetPath, 0LL) )
  {
    fsm = this->fields.fsm;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6309, 0LL);
      return;
    }
LABEL_52:
    sub_B170D4();
  }
  v82 = this->fields.assetPath;
  v83 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v78, v79, v80, v81);
  AssetLoader_LoadEndDataHandler___ctor(v83, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v82, v83, 1, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  CommonUI_o *Instance; // x20
  SummonControl___c_c *v17; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__255_0; // x21
  Il2CppObject *v20; // x22
  struct SummonControl___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  SummonResultComponent_o *summonResultInfo; // x0
  PlayMakerFSM_o *fsm; // x0
  MissionNotifyManager_o *v30; // x0

  if ( (byte_40FBFC0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    sub_B16FFC(&Method_SummonControl___c__setSummonResultList_b__255_0__, v7);
    sub_B16FFC(&SummonControl___c_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_9326, v9);
    sub_B16FFC(&StringLiteral_12188, v10);
    byte_40FBFC0 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(107, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28023340(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v11) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = SummonControl___c_TypeInfo;
      if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v17 = SummonControl___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__255_0 = static_fields->__9__255_0;
      if ( !_9__255_0 )
      {
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = SummonControl___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__255_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(_9__255_0, v20, Method_SummonControl___c__setSummonResultList_b__255_0__, 0LL);
        v21 = SummonControl___c_TypeInfo->static_fields;
        v21->__9__255_0 = _9__255_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v21->__9__255_0,
          (System_Int32_array **)_9__255_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      if ( !Instance )
        goto LABEL_31;
      CommonUI__OpenTutorialImageDialog_18263036(Instance, 2, 108, _9__255_0, 0LL, 0LL, 0LL);
    }
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_31;
  SummonResultComponent__initGachaResultList(
    summonResultInfo,
    this->fields.gachaResInfoList,
    this->fields.resType,
    this->fields.extraGiftIds,
    this->fields.GachaExtraGiftList,
    0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_31;
  if ( this->fields.resType == 2 )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12188, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9326, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v30 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v30 )
LABEL_31:
    sub_B170D4();
  MissionNotifyManager__EndPause(v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  char v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x22
  __int64 v9; // x21
  int size; // w8
  GachaBannerComponent_o *v11; // x0
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o *summonMBannerInfoList; // x22
  __int64 v15; // x21
  int v16; // w8
  SummonMiniBannerComponent_o *v17; // x0
  UnityEngine_Behaviour_o *summonMBannerLeftArrowBtn; // x0
  bool v19; // w20
  UnityEngine_Behaviour_o *summonMBannerRightArrowBtn; // x0

  v3 = isEnable;
  if ( (byte_40FBF62 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__, v7);
    byte_40FBF62 = 1;
  }
  if ( !this->fields.isDoneTutorial )
    v3 &= this->fields.tutorialKind != 2;
  bannerInfoList = this->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_26;
  v9 = 0LL;
  while ( 1 )
  {
    size = bannerInfoList->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = bannerInfoList->fields._items->m_Items[v9];
    if ( v11 )
    {
      GachaBannerComponent__setEnabledCollider(v11, v3 & 1, 0LL);
      bannerInfoList = this->fields.bannerInfoList;
      ++v9;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(leftArrowBtn, v3 & 1, 0LL);
  rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
  if ( !rightArrowBtn )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(rightArrowBtn, v3 & 1, 0LL);
  summonMBannerInfoList = this->fields.summonMBannerInfoList;
  if ( !summonMBannerInfoList )
    goto LABEL_26;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = summonMBannerInfoList->fields._size;
    if ( (int)v15 >= v16 )
      break;
    if ( v16 <= (unsigned int)v15 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v17 = summonMBannerInfoList->fields._items->m_Items[v15];
    if ( v17 )
    {
      SummonMiniBannerComponent__SetEnableCollider(v17, v3 & 1, 0LL);
      summonMBannerInfoList = this->fields.summonMBannerInfoList;
      ++v15;
      if ( summonMBannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  summonMBannerLeftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerLeftArrowBtn;
  if ( !summonMBannerLeftArrowBtn
    || (v19 = v3 & 1,
        UnityEngine_Behaviour__set_enabled(summonMBannerLeftArrowBtn, v19, 0LL),
        (summonMBannerRightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(summonMBannerRightArrowBtn, v19, 0LL);
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
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_int__o *v27; // x22
  TblUserMaster_o *Master_WarQuestSelectionMaster; // x0
  TblUserEntity_o *UserData; // x0
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_Component_o *fragmentNumInfo; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *currentFragmentNumLb; // x20
  UserItemMaster_o *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  UnityEngine_Component_o *stoneNumInfo; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *pointNumInfo; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t friendPoint; // [xsp+8h] [xbp-38h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FBF6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_TblUserMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_SummonControl__setUserResourceDisp_b__154_0__, v8);
    sub_B16FFC(&StringLiteral_23433, v9);
    byte_40FBF6C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_B16F98(
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
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  v21 = System_String__Format((System_String_o *)StringLiteral_23433, v20, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_22;
  UILabel__set_text(currentStoneNumLb, v21, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v23, v24, v25, v26);
  System_Action_int____ctor(
    v27,
    (Il2CppObject *)this,
    Method_SummonControl__setUserResourceDisp_b__154_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v27, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !*p_userGameEntity )
    goto LABEL_22;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UserData = TblUserMaster__getUserData(Master_WarQuestSelectionMaster, (*p_userGameEntity)->fields.userId, 0LL);
  if ( !UserData )
    goto LABEL_22;
  currentPointNumLb = this->fields.currentPointNumLb;
  friendPoint = UserData->fields.friendPoint;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendPoint);
  v32 = System_String__Format((System_String_o *)StringLiteral_23433, v31, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_22;
  UILabel__set_text(currentPointNumLb, v32, 0LL);
  fragmentNumInfo = (UnityEngine_Component_o *)this->fields.fragmentNumInfo;
  if ( !fragmentNumInfo )
    goto LABEL_22;
  v34 = UnityEngine_Component__get_gameObject(fragmentNumInfo, 0LL);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v34, 0LL);
  if ( !Parent )
    goto LABEL_22;
  v36 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  if ( !v36 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v36, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  v38 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !v38 )
    goto LABEL_22;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(v38, 0LL);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum);
  v40 = System_String__Format((System_String_o *)StringLiteral_23433, v39, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_22;
  UILabel__set_text(currentFragmentNumLb, v40, 0LL);
  stoneNumInfo = (UnityEngine_Component_o *)this->fields.stoneNumInfo;
  if ( !stoneNumInfo
    || (v42 = UnityEngine_Component__get_gameObject(stoneNumInfo, 0LL),
        (v43 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v42, 0LL)) == 0LL)
    || (v44 = UnityEngine_Component__get_gameObject(v43, 0LL),
        GameObjectExtensions__SetLocalPositionX(v44, -179.0, 0LL),
        (pointNumInfo = (UnityEngine_Component_o *)this->fields.pointNumInfo) == 0LL)
    || (v46 = UnityEngine_Component__get_gameObject(pointNumInfo, 0LL),
        (v47 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v46, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
  GameObjectExtensions__SetLocalPositionX(v48, 179.0, 0LL);
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
  GachaEntity_o *Entity; // x0
  const MethodInfo *v12; // x2
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Action_o *v26; // x21

  if ( (byte_40FBFA2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BonusSelectSummonAssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SummonControl__showConfirmDlg_b__214_0__, v8);
    byte_40FBFA2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Entity = (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
                              gachaParamData->fields.gachaId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_16;
  if ( GachaEntity__HasFlag(Entity, 8, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v19 = (BonusSelectSummonAssetManager_o *)sub_B170CC(BonusSelectSummonAssetManager_TypeInfo, v14, v15, v16, v17);
        BonusSelectSummonAssetManager___ctor(v19, 0LL);
        this->fields.bonusSelectAssetManager = v19;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.bonusSelectAssetManager,
          (System_Int32_array **)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__214_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v26, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
  SummonControl__showConfirmDlg_28685864(this, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_28685864(
        SummonControl_o *this,
        bool beforeDetailFlag,
        const MethodInfo *method)
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
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w20
  WebViewManager_o *Instance; // x0
  GachaExtraGiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *v22; // x8
  const MethodInfo *v23; // x1
  GachaExtraGiftEntity_array *ListGachaExtraGift; // x22
  int32_t needStone; // w20
  int32_t haveStone; // w24
  int32_t haveChargeStone; // w23
  int v28; // w28
  int v29; // w26
  WebViewManager_o *v30; // x0
  GachaDetailMaster_o *v31; // x0
  struct GachaRqParamData_o *v32; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  SummonConfirmDlgComponent_CallbackFunc_o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Int32_array *ScriptIntArray; // x24
  int32_t ScriptInt; // w0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  SummonControl_o *v49; // x0
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  struct SummonInfoControl_o *v52; // x8
  UserGameEntity_o *SelfUserGame; // x0
  int32_t *v54; // x20
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v56; // x1
  struct SummonInfoControl_o *v57; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v59; // x9
  WebViewManager_o *v60; // x0
  GachaDetailMaster_o *v61; // x0
  struct GachaRqParamData_o *v62; // x8
  GachaDetailEntity_o *v63; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  SummonConfirmDlgComponent_CallbackFunc_o *v68; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  SummonConfirmDlgComponent_CallbackFunc_o *v73; // x0
  System_Int32_array *v74; // x23
  int32_t v75; // w0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  SummonConfirmDlgComponent_CallbackFunc_o *v80; // x0
  SummonControl_o *v81; // x0
  const MethodInfo *v82; // x2
  struct GachaRqParamData_o *v83; // x8
  int32_t v84; // w21
  WebViewManager_o *v85; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v86; // x0
  struct GachaRqParamData_o *v87; // x8
  WarEntity_o *v88; // x0
  WarEntity_o *v89; // x22
  WebViewManager_o *v90; // x0
  UserGachaExtraCountMaster_o *v91; // x0
  struct System_Collections_Generic_List_VaildGachaInfo__o *v92; // x23
  __int64 v93; // x24
  VaildGachaInfo_o *v94; // x8
  int32_t v95; // w20
  int32_t v96; // w26
  int32_t v97; // w27
  WebViewManager_o *v98; // x0
  GachaDetailMaster_o *v99; // x0
  struct GachaRqParamData_o *v100; // x8
  GachaDetailEntity_o *v101; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct GachaRqParamData_o *v103; // x8
  GachaEntity_o *v104; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  System_Int32_array *v114; // x25
  int32_t v115; // w0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  SummonControl_o *v120; // x0
  const MethodInfo *v121; // x2
  SummonInfoControl_o *v122; // x0
  int32_t v123; // w21
  int afterChargeStoneNum; // w20
  int GroupGachaId; // w0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  SummonConfirmDlgComponent_o *v130; // x24
  struct SummonInfoControl_o *v131; // x9
  struct GachaRqParamData_o *v132; // x8
  struct GachaRqParamData_o *v133; // x8
  int32_t gachaTime; // w21
  WebViewManager_o *v135; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v136; // x0
  struct GachaRqParamData_o *v137; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v139; // x21
  WebViewManager_o *v140; // x0
  UserGachaExtraCountMaster_o *v141; // x0
  struct System_Collections_Generic_List_VaildGachaInfo__o *v142; // x23
  __int64 v143; // x25
  VaildGachaInfo_o *v144; // x9
  struct SummonInfoControl_o *v145; // x10
  struct GachaRqParamData_o *v146; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v147; // x23
  System_String_o *v148; // x25
  __int64 v149; // x26
  int32_t v150; // w28
  VaildGachaInfo_o *v151; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v152; // x23
  __int64 v153; // x26
  _BOOL4 v154; // w28
  VaildGachaInfo_o *v155; // x8
  int64_t summonCloseAt; // x26
  struct GachaRqParamData_o *v157; // x8
  int32_t gachaId; // w27
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  GachaExtraGiftEntity_array *v160; // x25
  __int64 currentIdx; // x22
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  VaildGachaInfo_o *v163; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  struct System_Collections_Generic_List_VaildGachaInfo__o *v165; // x20
  __int64 v166; // x22
  VaildGachaInfo_o *v167; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v168; // x22
  __int64 v169; // x24
  _BOOL4 isPickup; // w20
  VaildGachaInfo_o *v171; // x8
  struct GachaRqParamData_o *v172; // x9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v174; // x8
  _BOOL4 isAppendSummon; // [xsp+68h] [xbp-78h]
  int32_t v176; // [xsp+6Ch] [xbp-74h]
  int32_t payGachaPrice; // [xsp+6Ch] [xbp-74h]
  int32_t haveFreeStone; // [xsp+70h] [xbp-70h]
  System_String_o *name; // [xsp+70h] [xbp-70h]
  int32_t v180; // [xsp+78h] [xbp-68h]
  int32_t v181; // [xsp+78h] [xbp-68h]
  int32_t v182; // [xsp+7Ch] [xbp-64h]
  int32_t v183; // [xsp+80h] [xbp-60h]
  int32_t v184; // [xsp+80h] [xbp-60h]
  int32_t v185; // [xsp+84h] [xbp-5Ch]
  bool HasFlag; // [xsp+84h] [xbp-5Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v187; // [xsp+88h] [xbp-58h]
  GachaExtraGiftEntity_array *giftEntList; // [xsp+88h] [xbp-58h]

  if ( (byte_40FBFA3 & 1) == 0 )
  {
    sub_B16FFC(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_GachaMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_SummonControl_ConfirmMessageOpen__, v14);
    sub_B16FFC(&Method_SummonControl_TryGetSelectBonusDataInfo__, v15);
    sub_B16FFC(&Method_SummonControl_confirmResult__, v16);
    sub_B16FFC(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v17);
    byte_40FBFA3 = 1;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_126;
  gachaType = gachaParamData->fields.gachaType;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  MasterData_WarQuestSelectionMaster = (GachaExtraGiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v22 = this->fields.gachaParamData;
  if ( !v22 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_126;
  ListGachaExtraGift = GachaExtraGiftMaster__GetListGachaExtraGift(
                         MasterData_WarQuestSelectionMaster,
                         v22->fields.gachaId,
                         0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = this->fields.needStone;
      haveStone = this->fields.haveStone;
      haveChargeStone = this->fields.haveChargeStone;
      v28 = this->fields.haveFreeStone - needStone;
      if ( v28 < 0 )
        v29 = this->fields.haveFreeStone - needStone;
      else
        v29 = 0;
      v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v30 )
        goto LABEL_126;
      v31 = (GachaDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v30,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v32 = this->fields.gachaParamData;
      if ( !v32 )
        goto LABEL_126;
      v183 = haveStone;
      v185 = haveChargeStone;
      if ( !v31 )
        goto LABEL_126;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(v31, v32->fields.gachaId, 0LL);
      v38 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v34,
                                                          v35,
                                                          v36,
                                                          v37);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_SummonControl_confirmResult__,
        0LL);
      if ( GachaDetailEntity )
      {
        v187 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                             SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                             v39,
                                                             v40,
                                                             v41,
                                                             v42);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v187,
          (Il2CppObject *)this,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        ScriptIntArray = GachaDetailEntity__GetScriptIntArray(
                           GachaDetailEntity,
                           this->fields.DETAIL_SCRIPT_IDS,
                           0LL,
                           0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(GachaDetailEntity, this->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( ScriptIntArray )
        {
          if ( ScriptInt == 1 )
          {
            v187 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 v45,
                                                                 v46,
                                                                 v47,
                                                                 v48);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v187,
              (Il2CppObject *)this,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v49, ScriptIntArray, v50) )
            {
LABEL_120:
              SummonControl__BeforeConfirmMessageOpen(this, v51);
              return;
            }
          }
        }
      }
      else
      {
        v187 = v38;
      }
      v133 = this->fields.gachaParamData;
      if ( !v133 )
        goto LABEL_126;
      gachaTime = v133->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_104;
      v135 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v135 )
        goto LABEL_126;
      v136 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v135,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
      v137 = this->fields.gachaParamData;
      if ( !v137 || !v136 )
        goto LABEL_126;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v136,
                 v137->fields.gachaId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( Entity && (v139 = Entity, LODWORD(Entity->fields.emptyMessage)) )
      {
        v140 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v140 )
          goto LABEL_126;
        v141 = (UserGachaExtraCountMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v140,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v141 )
          goto LABEL_126;
        if ( UserGachaExtraCountMaster__getExtraCount(v141, (int32_t)v139->fields.emptyMessage, 0LL) == 9 )
          gachaTime = 2;
        else
          gachaTime = 1;
      }
      else
      {
        gachaTime = 1;
      }
LABEL_104:
      v181 = needStone;
      vaildGachaList = this->fields.vaildGachaList;
      if ( vaildGachaList )
      {
        v160 = ListGachaExtraGift;
        currentIdx = this->fields.currentIdx;
        confirmDlgInfo = this->fields.confirmDlgInfo;
        if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v163 = vaildGachaList->fields._items->m_Items[currentIdx];
        if ( v163 )
        {
          summonInfoCtr = this->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v165 = this->fields.vaildGachaList;
            if ( v165 )
            {
              v166 = this->fields.currentIdx;
              name = v163->fields.name;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              if ( v165->fields._size <= (unsigned int)v166 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v167 = v165->fields._items->m_Items[v166];
              if ( v167 )
              {
                v168 = this->fields.vaildGachaList;
                if ( v168 )
                {
                  v169 = this->fields.currentIdx;
                  isPickup = v167->fields.isPickup;
                  if ( v168->fields._size <= (unsigned int)v169 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v171 = v168->fields._items->m_Items[v169];
                  if ( v171 )
                  {
                    v172 = this->fields.gachaParamData;
                    if ( v172 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          name,
                          1,
                          payGachaPrice,
                          gachaTime,
                          this->fields.haveStone,
                          this->fields.haveFreeStone,
                          this->fields.haveChargeStone,
                          v183 - v181,
                          v28 & ~(v28 >> 31),
                          v29 + v185,
                          v187,
                          0,
                          isPickup,
                          v171->fields.closedAt,
                          0,
                          0LL,
                          0LL,
                          v160,
                          v172->fields.shopIdIdx,
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
      goto LABEL_126;
    case 3:
      if ( SummonControl__CheckFriendPointSummonUpdate(this, v23) )
        return;
      v52 = this->fields.summonInfoCtr;
      if ( !v52 )
        goto LABEL_126;
      this->fields.isDailyGacha = v52->fields.isFree;
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        goto LABEL_126;
      v54 = (int32_t *)SelfUserGame;
      summonResultInfo = this->fields.summonResultInfo;
      if ( !summonResultInfo )
        goto LABEL_126;
      SummonResultComponent__setBeforeQpMana(summonResultInfo, v54[24], v54[44], 0LL);
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v54[60], 0LL) || !SummonControl__CheckQpManaOverCheck(this, v56) )
        SummonControl__friendPointSummonConfirm(this, v56);
      return;
    case 5:
      v57 = this->fields.summonInfoCtr;
      if ( !v57 )
        goto LABEL_126;
      ticketNum = v57->fields.ticketNum;
      v59 = this->fields.gachaParamData;
      this->fields.haveTicketNum = ticketNum;
      if ( !v59 )
        goto LABEL_126;
      this->fields.afterTicketNum = ticketNum - v59->fields.gachaTime;
      v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v60 )
        goto LABEL_126;
      v61 = (GachaDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v60,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v62 = this->fields.gachaParamData;
      if ( !v62 || !v61 )
        goto LABEL_126;
      v63 = GachaDetailMaster__GetGachaDetailEntity(v61, v62->fields.gachaId, 0LL);
      v68 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                          SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                          v64,
                                                          v65,
                                                          v66,
                                                          v67);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v68,
        (Il2CppObject *)this,
        Method_SummonControl_confirmResult__,
        0LL);
      if ( v63 )
      {
        v73 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                            SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                            v69,
                                                            v70,
                                                            v71,
                                                            v72);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v73,
          (Il2CppObject *)this,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v74 = GachaDetailEntity__GetScriptIntArray(v63, this->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        v75 = GachaDetailEntity__GetScriptInt(v63, this->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v74 )
        {
          if ( v75 == 1 )
          {
            v80 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                v76,
                                                                v77,
                                                                v78,
                                                                v79);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v80,
              (Il2CppObject *)this,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v81, v74, v82) )
              goto LABEL_120;
          }
        }
      }
      v83 = this->fields.gachaParamData;
      if ( !v83 )
        goto LABEL_126;
      v84 = v83->fields.gachaTime;
      v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v85 )
        goto LABEL_126;
      v86 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v85,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaMaster___);
      v87 = this->fields.gachaParamData;
      if ( !v87 || !v86 )
        goto LABEL_126;
      v88 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v86,
              v87->fields.gachaId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v88 )
        goto LABEL_47;
      v89 = v88;
      if ( !LODWORD(v88->fields.emptyMessage) )
        goto LABEL_47;
      v90 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v90 )
        goto LABEL_126;
      v91 = (UserGachaExtraCountMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v90,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !v91 )
        goto LABEL_126;
      if ( UserGachaExtraCountMaster__getExtraCount(v91, (int32_t)v89->fields.emptyMessage, 0LL) == 9 )
        ++v84;
LABEL_47:
      v92 = this->fields.vaildGachaList;
      if ( !v92 )
        goto LABEL_126;
      v93 = this->fields.currentIdx;
      if ( v92->fields._size <= (unsigned int)v93 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v94 = v92->fields._items->m_Items[v93];
      if ( !v94 || !this->fields.confirmDlgInfo )
        goto LABEL_126;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        this->fields.confirmDlgInfo,
        v94->fields.name,
        v84,
        this->fields.haveTicketNum,
        this->fields.afterTicketNum,
        v68,
        0LL);
      return;
    case 7:
      v95 = this->fields.haveStone;
      v96 = this->fields.needStone;
      v97 = this->fields.haveChargeStone;
      v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v98 )
        goto LABEL_126;
      v99 = (GachaDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v98,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v100 = this->fields.gachaParamData;
      if ( !v100 || !v99 )
        goto LABEL_126;
      v101 = GachaDetailMaster__GetGachaDetailEntity(v99, v100->fields.gachaId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaMaster___);
      v103 = this->fields.gachaParamData;
      if ( !v103 )
        goto LABEL_126;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_126;
      giftEntList = ListGachaExtraGift;
      v104 = (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                Master_WarQuestSelectionMaster,
                                v103->fields.gachaId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !v104 )
        goto LABEL_126;
      HasFlag = GachaEntity__HasFlag(v104, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                               SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                               v105,
                                                               v106,
                                                               v107,
                                                               v108);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SummonControl_confirmResult__,
        0LL);
      if ( v101 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                 SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                 v110,
                                                                 v111,
                                                                 v112,
                                                                 v113);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)this,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v114 = GachaDetailEntity__GetScriptIntArray(v101, this->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        v115 = GachaDetailEntity__GetScriptInt(v101, this->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v114 )
        {
          if ( v115 == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                     SummonConfirmDlgComponent_CallbackFunc_TypeInfo,
                                                                     v116,
                                                                     v117,
                                                                     v118,
                                                                     v119);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)this,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v120, v114, v121) )
              goto LABEL_120;
          }
        }
      }
      v122 = this->fields.summonInfoCtr;
      if ( !v122 )
        goto LABEL_126;
      v123 = v95 - v96;
      afterChargeStoneNum = (v97 - v96) & ~((v97 - v96) >> 31);
      GroupGachaId = SummonInfoControl__GetGroupGachaId(v122, 0LL);
      v130 = this->fields.confirmDlgInfo;
      if ( GroupGachaId >= 1 )
      {
        v131 = this->fields.summonInfoCtr;
        if ( v131 )
        {
          v132 = this->fields.gachaParamData;
          if ( v132 )
          {
            if ( v130 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v130,
                GroupGachaId,
                v131->fields.payGachaPrice,
                this->fields.haveStone,
                this->fields.haveFreeStone,
                this->fields.haveChargeStone,
                v123,
                this->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                giftEntList,
                v132->fields.shopIdIdx,
                0LL);
              return;
            }
          }
        }
        goto LABEL_126;
      }
      v142 = this->fields.vaildGachaList;
      if ( !v142 )
        goto LABEL_126;
      v143 = this->fields.currentIdx;
      if ( v142->fields._size <= (unsigned int)v143 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v144 = v142->fields._items->m_Items[v143];
      if ( !v144 )
        goto LABEL_126;
      v145 = this->fields.summonInfoCtr;
      if ( !v145 )
        goto LABEL_126;
      v146 = this->fields.gachaParamData;
      if ( !v146 )
        goto LABEL_126;
      v147 = this->fields.vaildGachaList;
      if ( !v147 )
        goto LABEL_126;
      v148 = v144->fields.name;
      v149 = this->fields.currentIdx;
      v150 = v146->fields.gachaTime;
      v180 = this->fields.haveStone;
      haveFreeStone = this->fields.haveFreeStone;
      isAppendSummon = v146->fields.isAppendSummon;
      v176 = this->fields.haveChargeStone;
      if ( v147->fields._size <= (unsigned int)v149 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v151 = v147->fields._items->m_Items[v149];
      if ( !v151 )
        goto LABEL_126;
      v152 = this->fields.vaildGachaList;
      v182 = v150;
      if ( !v152 )
        goto LABEL_126;
      v153 = this->fields.currentIdx;
      v154 = v151->fields.isPickup;
      if ( v152->fields._size <= (unsigned int)v153 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v155 = v152->fields._items->m_Items[v153];
      if ( !v155 )
        goto LABEL_126;
      summonCloseAt = v155->fields.closedAt;
      v184 = v145->fields.payGachaPrice;
      if ( HasFlag )
      {
        v157 = this->fields.gachaParamData;
        if ( !v157 )
          goto LABEL_126;
        gachaId = v157->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B170CC(
                                                                                    BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo,
                                                                                    v126,
                                                                                    v127,
                                                                                    v128,
                                                                                    v129);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)this,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v174 = this->fields.gachaParamData;
      if ( !v174 || !v130 )
LABEL_126:
        sub_B170D4();
      SummonConfirmDlgComponent__OpenConfirmStone(
        v130,
        v148,
        7,
        v184,
        v182,
        v180,
        haveFreeStone,
        v176,
        v123,
        haveFreeStone,
        afterChargeStoneNum,
        callback,
        isAppendSummon,
        v154,
        summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        this->fields.bonusSelectAssetManager,
        giftEntList,
        v174->fields.shopIdIdx,
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
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x21

  if ( (byte_40FBF7C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v4);
    sub_B16FFC(&Method_SummonControl_OnClickHelpClose__, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    byte_40FBF7C = 1;
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
          if ( TutorialFlag__GetGachaFlg(num, 0LL) )
            return;
          if ( !v10->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
            v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
            System_Action___ctor(v19, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
            EventTutorialMaster__TutorialChainWithoutCheckStart(v10, v19, 0LL);
            return;
          }
        }
        sub_B170D4();
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *_28023340; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  CommonUI_o *Instance; // x20
  SummonControl___c_c *v20; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__250_0; // x21
  Il2CppObject *v23; // x22
  struct SummonControl___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v33; // x8
  WebViewManager_o *v34; // x0
  struct GachaInfos_array *v35; // x8
  __int64 v36; // x9
  GachaInfos_o *v37; // x8
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  ServantStatusDialog_EndDelegate_o *v44; // x22
  __int64 v45; // x3
  __int64 v46; // x4
  struct GachaInfos_array *v47; // x8
  __int64 v48; // x9
  GachaInfos_o *v49; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v51; // x20
  ServantStatusDialog_EndDelegate_o *v52; // x22

  if ( (byte_40FBFBC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SummonControl_DialogCallBack__, v8);
    sub_B16FFC(&TutorialFlag_TypeInfo, v9);
    sub_B16FFC(&Method_SummonControl___c__showServantDialog_b__250_0__, v10);
    sub_B16FFC(&SummonControl___c_TypeInfo, v11);
    byte_40FBFBC = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28023340 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)TutorialFlag__Get_28023340(
                                                                                       107,
                                                                                       0LL);
  if ( ((unsigned __int8)_28023340 & 1) != 0 )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    _28023340 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)TutorialFlag__Get_28023340(
                                                                                         108,
                                                                                         0LL);
    if ( ((unsigned __int8)_28023340 & 1) == 0 )
    {
      _28023340 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SummonControl__isSvtEqSummonResult(
                                                                                           this,
                                                                                           v13);
      if ( ((unsigned __int8)_28023340 & 1) != 0 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v20 = SummonControl___c_TypeInfo;
        if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v20 = SummonControl___c_TypeInfo;
        }
        static_fields = v20->static_fields;
        _9__250_0 = static_fields->__9__250_0;
        if ( !_9__250_0 )
        {
          if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            static_fields = SummonControl___c_TypeInfo->static_fields;
          }
          v23 = (Il2CppObject *)static_fields->__9;
          _9__250_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
          System_Action___ctor(_9__250_0, v23, Method_SummonControl___c__showServantDialog_b__250_0__, 0LL);
          v24 = SummonControl___c_TypeInfo->static_fields;
          v24->__9__250_0 = _9__250_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v24->__9__250_0,
            (System_Int32_array **)_9__250_0,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
        }
        if ( !Instance )
          goto LABEL_38;
        CommonUI__OpenTutorialImageDialog_18263036(Instance, 2, 108, _9__250_0, 0LL, 0LL, 0LL);
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
    sub_B17100(_28023340, v13, v14);
    sub_B170A0();
  }
  v33 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v33 )
    goto LABEL_38;
  if ( SvtType__IsCommandCode(v33->fields.type, 0LL) )
  {
    v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v34 )
      goto LABEL_38;
    _28023340 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                         (DataManager_o *)v34,
                                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v35 = this->fields.gachaResInfoList;
    if ( !v35 )
      goto LABEL_38;
    v36 = this->fields.getSvtIdx;
    if ( (unsigned int)v36 < v35->max_length )
    {
      v37 = v35->m_Items[v36];
      if ( v37 )
      {
        if ( _28023340 )
        {
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     _28023340,
                     v37->fields.userSvtId,
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          v39 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v44 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v40,
                                                       v41,
                                                       v42,
                                                       v43);
          ServantStatusDialog_EndDelegate___ctor(v44, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( v39 )
          {
            CommonUI__OpenServantStatusDialog_18250552(v39, 0, (UserCommandCodeEntity_o *)Entity, v44, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_38:
      sub_B170D4();
    }
    goto LABEL_39;
  }
  _28023340 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47 = this->fields.gachaResInfoList;
  if ( !v47 )
    goto LABEL_38;
  v48 = this->fields.getSvtIdx;
  if ( (unsigned int)v48 >= v47->max_length )
    goto LABEL_39;
  v49 = v47->m_Items[v48];
  if ( !v49 )
    goto LABEL_38;
  userSvtId = v49->fields.userSvtId;
  v51 = (CommonUI_o *)_28023340;
  v52 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14, v45, v46);
  ServantStatusDialog_EndDelegate___ctor(v52, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v51 )
    goto LABEL_38;
  CommonUI__OpenServantStatusDialog_18247068(v51, 6, userSvtId, v52, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  StonePurchaseMenu_CallbackFunc_o *v10; // x21

  if ( (byte_40FBF94 & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_SummonControl_endPurchaseStone__, v4);
    byte_40FBF94 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_B170CC(StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7, v8, v9);
  StonePurchaseMenu_CallbackFunc___ctor(v10, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenStonePurchaseMenu(Instance, v10, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FBFB5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl__showSummonEffect_b__238_0__, v5);
    byte_40FBFB5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__238_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *maskBgObject; // x0
  TitleInfoControl_o *v9; // x0
  TitleInfoControl_o *v10; // x0
  TitleInfoControl_o *v11; // x0
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *summonResultInfo; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_40FBFBF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl__showSummonResultInfo_b__254_0__, v5);
    byte_40FBFBF = 1;
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
    maskBgObject = this->fields.maskBgObject;
    if ( !maskBgObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL);
    v9 = this->fields.titleInfo;
    if ( !v9 )
      goto LABEL_25;
    TitleInfoControl__setBackBtnColliderEnable(v9, 1, 0LL);
    v10 = this->fields.titleInfo;
    if ( !v10 )
      goto LABEL_25;
    TitleInfoControl__setTitleInfo(v10, this->fields.fsm, 1, 0LL, 36, 0LL);
    v11 = this->fields.titleInfo;
    if ( !v11 )
      goto LABEL_25;
    TitleInfoControl__setBackBtnSprite_19608808(v11, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v18 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
      v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__254_0__, 0LL);
      if ( !Instance )
        goto LABEL_25;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v20, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v7);
  v21 = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !v21 )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  summonResultInfo = (UnityEngine_Component_o *)this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_25;
  v24 = UnityEngine_Component__get_gameObject(summonResultInfo, 0LL);
  if ( !v24 )
    goto LABEL_25;
  if ( UnityEngine_GameObject__get_activeSelf(v24, 0LL) )
    return;
  v25 = (UnityEngine_Component_o *)this->fields.summonResultInfo;
  if ( !v25 || (v26 = UnityEngine_Component__get_gameObject(v25, 0LL)) == 0LL )
LABEL_25:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22

  if ( (byte_40FBF8D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl_endPurchaseSvtEqFrame__, v5);
    sub_B16FFC(&Method_SummonControl_resetStoneInfo__, v6);
    byte_40FBF8D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_B170CC(
                                                          ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo,
                                                          v8,
                                                          v9,
                                                          v10,
                                                          v11);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenServantEquipFramePurchaseMenu(Instance, v12, v17, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  ServantFramePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22

  if ( (byte_40FBF8B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_SummonControl_endPurchaseSvtFrame__, v5);
    sub_B16FFC(&Method_SummonControl_resetStoneInfo__, v6);
    byte_40FBF8B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_B170CC(
                                                     ServantFramePurchaseMenu_CallbackFunc_TypeInfo,
                                                     v8,
                                                     v9,
                                                     v10,
                                                     v11);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenServantFramePurchaseMenu(Instance, v12, v17, 0LL);
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
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v21; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  WebViewManager_o *Instance; // x0
  DataManager_o *v26; // x24
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x0
  PlayMakerFSM_o *fsm; // x0
  UnityEngine_Component_o *summonResultInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v34; // x0
  UserServantEntity_o *v35; // x22
  int32_t SvtVoiceId; // w0
  int32_t v37; // w24
  ServantVoiceEntity_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *summonScriptId; // x23
  WebViewManager_o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  ServantAssetArgs_o *v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  ServantAssetArgs_o *battleAssetArgs; // x23
  WebViewManager_o *v59; // x23
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Action_o *v64; // x24
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40FBFB9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&ServantAssetArgs_TypeInfo, v9);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_SummonControl__showSvtTalk_b__245_0__, v13);
    sub_B16FFC(&Method_SummonControl_close__, v14);
    sub_B16FFC(&StringLiteral_3061, v15);
    byte_40FBFB9 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_42;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    sub_B17100(v16, v17, v18);
    sub_B170A0();
  }
  v21 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v21 )
    goto LABEL_42;
  userSvtId = v21->fields.userSvtId;
  objectId = v21->fields.objectId;
  limitCount = v21->fields.limitCount;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v26 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v26,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v28 )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v28,
          &entity,
          objectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    goto LABEL_16;
  if ( !entity )
    goto LABEL_42;
  if ( ServantEntity__get_IsServantEquip((ServantEntity_o *)entity, 0LL) )
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
      || SvtType__IsCommandCode(v21->fields.type, 0LL) )
    {
LABEL_17:
      fsm = this->fields.fsm;
      if ( fsm )
      {
        PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3061, 0LL);
        return;
      }
      goto LABEL_42;
    }
  }
  summonResultInfo = (UnityEngine_Component_o *)this->fields.summonResultInfo;
  if ( !summonResultInfo )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject(summonResultInfo, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v32 = (UnityEngine_Component_o *)this->fields.summonResultInfo;
    if ( !v32 )
      goto LABEL_42;
    v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
    if ( !v33 )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(v33, 0, 0LL);
  }
  if ( userSvtId < 1 )
  {
    v35 = 0LL;
  }
  else
  {
    v34 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   v26,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !v34 )
      goto LABEL_42;
    v35 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            v34,
            userSvtId,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B170D4();
  v37 = SvtVoiceId;
  v38 = ServantVoiceMaster__getEntity(MasterData_WarQuestSelectionMaster, 3, SvtVoiceId, limitCount, 0LL);
  if ( v38 && (v39 = ServantVoiceEntity__GetSummonScriptId(v38, v37, 0LL)) != 0LL )
  {
    summonScriptId = v39;
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__245_0__, 0LL);
    if ( !v41 )
      goto LABEL_42;
    ScriptManager__PlayGacha_17680224(
      (ScriptManager_o *)v41,
      v35,
      objectId,
      limitCount,
      0,
      1,
      v46,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v51 = (ServantAssetArgs_o *)sub_B170CC(ServantAssetArgs_TypeInfo, v47, v48, v49, v50);
      ServantAssetArgs___ctor_23787768(v51, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v51;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.battleAssetArgs,
        (System_Int32_array **)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v59 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
    System_Action___ctor(v64, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v59 )
      goto LABEL_42;
    ScriptManager__PlayGacha_17680224((ScriptManager_o *)v59, v35, objectId, limitCount, 0, 1, v64, 0, 0, 0LL, 0LL);
  }
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__172___ctor(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__172__MoveNext(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x22
  int mBannerSpringPanelRetryCount; // w8
  struct SpringPanel_o **p_spring_5__2; // x20
  UnityEngine_Component_o *summonMBannerScrollView; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *spring_5__2; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *v31; // x19
  UnityEngine_Component_o *summonMBannerLoopCtr; // x0
  UICenterOnChild_o *summonMBannerCenterChild; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *Child; // x0

  if ( (byte_40F7A86 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SpringPanel___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F7A86 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    mBannerSpringPanelRetryCount = _4__this->fields.mBannerSpringPanelRetryCount;
    _4__this->fields.mBannerSpringPanelRetryCount = mBannerSpringPanelRetryCount + 1;
    if ( mBannerSpringPanelRetryCount >= 10 )
    {
      p_spring_5__2 = &this->fields._spring_5__2;
LABEL_16:
      v31 = (UnityEngine_Object_o *)*p_spring_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
      {
        summonMBannerLoopCtr = (UnityEngine_Component_o *)_4__this->fields.summonMBannerLoopCtr;
        if ( !summonMBannerLoopCtr
          || (summonMBannerCenterChild = _4__this->fields.summonMBannerCenterChild,
              (transform = UnityEngine_Component__get_transform(summonMBannerLoopCtr, 0LL)) == 0LL)
          || (Child = UnityEngine_Transform__GetChild(transform, _4__this->fields.currentMoveIdx, 0LL),
              !summonMBannerCenterChild) )
        {
LABEL_25:
          sub_B170D4();
        }
        UICenterOnChild__CenterOn_35064772(summonMBannerCenterChild, Child, 1, 0LL);
      }
      return 0;
    }
LABEL_10:
    summonMBannerScrollView = (UnityEngine_Component_o *)_4__this->fields.summonMBannerScrollView;
    if ( !summonMBannerScrollView )
      goto LABEL_25;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                summonMBannerScrollView,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    this->fields._spring_5__2 = (struct SpringPanel_o *)Component_WebViewObject;
    p_spring_5__2 = &this->fields._spring_5__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._spring_5__2,
      (System_Int32_array **)Component_WebViewObject,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    spring_5__2 = (UnityEngine_Object_o *)this->fields._spring_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(spring_5__2, 0LL, 0LL) )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v23, v24, v25, v26, v27, v28);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    this->fields._spring_5__2 = 0LL;
    this->fields.__1__state = -1;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._spring_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_25;
    goto LABEL_10;
  }
  return 0;
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__172__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__CoWaitCreatedMBannerSpringPanel_d__172__System_Collections_IEnumerator_Reset(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__172__System_Collections_IEnumerator_get_Current(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__CoWaitCreatedMBannerSpringPanel_d__172__System_IDisposable_Dispose(
        SummonControl__CoWaitCreatedMBannerSpringPanel_d__172_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__247___ctor(
        SummonControl__WaitBattleChrLoad_d__247_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SummonControl__WaitBattleChrLoad_d__247__MoveNext(
        SummonControl__WaitBattleChrLoad_d__247_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  Il2CppObject *wait_5__2; // x1
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F7A87 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_3061, v7);
    byte_40F7A87 = 1;
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
    v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
    this->fields._wait_5__2 = v10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._wait_5__2,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  if ( ServantAssetLoadManager__checkLoad(0LL) )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)wait_5__2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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
    sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.battleAssetArgs, 0LL, v26, v27, v28, v29, v30, v31);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_21:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3061, 0LL);
  return 0;
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__247__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SummonControl__WaitBattleChrLoad_d__247_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SummonControl__WaitBattleChrLoad_d__247__System_Collections_IEnumerator_Reset(
        SummonControl__WaitBattleChrLoad_d__247_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_SummonControl__WaitBattleChrLoad_d__247_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall SummonControl__WaitBattleChrLoad_d__247__System_Collections_IEnumerator_get_Current(
        SummonControl__WaitBattleChrLoad_d__247_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SummonControl__WaitBattleChrLoad_d__247__System_IDisposable_Dispose(
        SummonControl__WaitBattleChrLoad_d__247_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A81 & 1) == 0 )
  {
    sub_B16FFC(&SummonControl___c_TypeInfo, v1);
    byte_40F7A81 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SummonControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SummonControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SummonControl___c___ctor(SummonControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c___exeFormation_b__147_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetDispBtnColliderEnable(1, 1, 0LL);
}


void __fastcall SummonControl___c___openAfterSummonInfo_b__146_0(SummonControl___c_o *this, const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
}


int32_t __fastcall SummonControl___c___openSvtEqInfo_b__148_1(
        SummonControl___c_o *this,
        EventTutorialEntity_o *a,
        EventTutorialEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__255_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__214_1(SummonControl___c_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F7A82 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F7A82 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall SummonControl___c___showServantDialog_b__250_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall SummonControl___c___showSummonEffect_b__238_1(
        SummonControl___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


void __fastcall SummonControl___c___showSummonResultInfo_b__254_1(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c__DisplayClass148_0___ctor(
        SummonControl___c__DisplayClass148_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass148_0___openSvtEqInfo_b__0(
        SummonControl___c__DisplayClass148_0_o *this,
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
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F7A83 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_3033, v7);
    byte_40F7A83 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                0LL,
                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = *((_QWORD *)&tutoList->fields._items->obj.klass + v10);
    if ( !v13 )
      goto LABEL_27;
    if ( *(_DWORD *)(v13 + 16) != 1 )
    {
      v14 = this->fields.tutoList;
      if ( !v14 )
        goto LABEL_27;
      if ( v14->fields._size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  if ( !_4__this || (fsm = _4__this->fields.fsm) == 0LL )
LABEL_27:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3033, 0LL);
}


void __fastcall SummonControl___c__DisplayClass266_0___ctor(
        SummonControl___c__DisplayClass266_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass266_0___checkEnhanceTresureDeviceSingle_b__0(
        SummonControl___c__DisplayClass266_0_o *this,
        const MethodInfo *method)
{
  struct SummonControl_o *_4__this; // x8
  struct SummonControl_o *v4; // x8
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F7A84 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5741, method);
    byte_40F7A84 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = this->fields.svtId, (v4 = this->fields.__4__this) == 0LL)
    || (fsm = v4->fields.fsm) == 0LL )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5741, 0LL);
}


void __fastcall SummonControl___c__DisplayClass267_0___ctor(
        SummonControl___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonControl___c__DisplayClass267_0___checkEnhanceTresureDevice_b__0(
        SummonControl___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  struct SummonControl_o *_4__this; // x8
  struct SummonControl_o *v4; // x8
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F7A85 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5741, method);
    byte_40F7A85 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = this->fields.svtId, (v4 = this->fields.__4__this) == 0LL)
    || (fsm = v4->fields.fsm) == 0LL )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5741, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}