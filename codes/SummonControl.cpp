void __fastcall SummonControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct SummonControl_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  SummonControl_c *v16; // x8
  struct SummonControl_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42EA424 & 1) == 0 )
  {
    sub_B5D5C4(&SummonControl_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19619/*"icon_summon_arrow2"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2905/*"BonusSelectSummonSaveKey"*/, v11, v12, v13);
    byte_42EA424 = 1;
  }
  SummonControl_TypeInfo->static_fields->FRIEND_POINT_SUMMON_ID = 1;
  static_fields = SummonControl_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_2905/*"BonusSelectSummonSaveKey"*/;
  static_fields->BONUS_SELECTSUMMON_SAVEKEY = (struct System_String_o *)StringLiteral_2905/*"BonusSelectSummonSaveKey"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->BONUS_SELECTSUMMON_SAVEKEY, v15, v2, v3, v4, v5, v6, v7);
  v16 = SummonControl_TypeInfo;
  SummonControl_TypeInfo->static_fields->COLOR_VAL = 0.375;
  v17 = v16->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19619/*"icon_summon_arrow2"*/;
  v17->ARROW_SPRITE_NAME = (struct System_String_o *)StringLiteral_19619/*"icon_summon_arrow2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v17->ARROW_SPRITE_NAME, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall SummonControl___ctor(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_List_int__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int128 v60; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA423 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_19188/*"gachaIds"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_6885/*"FrequencyType"*/, v21, v22, v23);
    byte_42EA423 = 1;
  }
  v62.fields.m_XMin = -120.0;
  v62.fields.m_YMin = -205.0;
  v62.fields.m_Width = 240.0;
  v62.fields.m_Height = 100.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Rect___ctor(v62, v4, v5, v6, v7, (const MethodInfo *)&methoda.name);
  v63.fields.m_YMin = -315.0;
  *(_OWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.name;
  *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_POS.fields.y = -4387913408675840000LL;
  v63.fields.m_XMin = 320.0;
  v63.fields.m_Width = 200.0;
  v63.fields.m_Height = 100.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v63, v24, v25, v26, v27, &methoda);
  v64.fields.m_YMin = -310.0;
  *(_OWORD *)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin = *(_OWORD *)&methoda.methodPointer;
  *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = 0xC366000043E10000LL;
  v64.fields.m_XMin = -335.0;
  v64.fields.m_Width = 135.0;
  v64.fields.m_Height = 150.0;
  v60 = 0uLL;
  UnityEngine_Rect___ctor(v64, v28, v29, v30, v31, (const MethodInfo *)&v60);
  *(_OWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin = v60;
  *(_QWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y = 0xC3200000C385C000LL;
  v32 = (System_Int32_array **)StringLiteral_19188/*"gachaIds"*/;
  this->fields.DETAIL_SCRIPT_IDS = (struct System_String_o *)StringLiteral_19188/*"gachaIds"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_IDS, v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Int32_array **)StringLiteral_6885/*"FrequencyType"*/;
  this->fields.DETAIL_SCRIPT_TYPE = (struct System_String_o *)StringLiteral_6885/*"FrequencyType"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DETAIL_SCRIPT_TYPE, v39, v40, v41, v42, v43, v44, v45);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  this->fields.vaildGachaList = (struct System_Collections_Generic_List_VaildGachaInfo__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.vaildGachaList,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.befSvtList = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonControl__AddVaildGachaInfoList(
        SummonControl_o *this,
        GachaEntity_o *data,
        StoryGachaAdjustData_o *adjustData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x21
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **name; // x1
  int32_t ticketItemId; // w8
  System_String_o *WebViewAddress_26091648; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  int32_t pickupId; // w8
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  DataManager_o *v55; // x22
  struct GachaStoryAdjustEntity_o *targetEntity; // x8
  struct GachaStoryAdjustEntity_o *v57; // x8
  System_Int32_array **adjustIds; // x1

  if ( (byte_42EA3BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaSubMaster___, (_DWORD)data, (_DWORD)adjustData, method);
    sub_B5D5C4(&int___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&VaildGachaInfo_TypeInfo, v19, v20, v21);
    byte_42EA3BB = 1;
  }
  v22 = sub_B5D694(VaildGachaInfo_TypeInfo);
  VaildGachaInfo___ctor((VaildGachaInfo_o *)v22, 0LL);
  if ( !data || !v22 )
    goto LABEL_19;
  *(_DWORD *)(v22 + 16) = data->fields.id;
  name = (System_Int32_array **)data->fields.name;
  *(_QWORD *)(v22 + 24) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), name, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v22 + 32) = data->fields.beforeGachaId;
  *(_DWORD *)(v22 + 36) = data->fields.priority;
  *(_DWORD *)(v22 + 40) = data->fields.imageId;
  *(_DWORD *)(v22 + 44) = data->fields.warId;
  *(_DWORD *)(v22 + 48) = data->fields.gachaSlot;
  *(_DWORD *)(v22 + 52) = data->fields.type;
  ticketItemId = data->fields.ticketItemId;
  *(_BYTE *)(v22 + 64) = 1;
  *(_DWORD *)(v22 + 60) = ticketItemId;
  *(_BYTE *)(v22 + 84) = data->fields.freeDrawFlag > 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress_26091648 = NetworkManager__getWebViewAddress_26091648(1, 0LL);
  v34 = (System_Int32_array **)System_String__Concat_44577788(WebViewAddress_26091648, data->fields.detailUrl, 0LL);
  *(_QWORD *)(v22 + 88) = v34;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 88), v34, v35, v36, v37, v38, v39, v40);
  *(_DWORD *)(v22 + 96) = data->fields.gachaGroupId;
  *(_BYTE *)(v22 + 100) = data->fields.gachaGroupId > 0;
  pickupId = data->fields.pickupId;
  *(_DWORD *)(v22 + 80) = 0;
  *(_DWORD *)(v22 + 68) = 0;
  *(_BYTE *)(v22 + 101) = pickupId > 0;
  v42 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
  *(_QWORD *)(v22 + 72) = v42;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 72), v42, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)(v22 + 120) = data->fields.openedAt;
  *(_QWORD *)(v22 + 128) = data->fields.closedAt;
  *(_DWORD *)(v22 + 136) = data->fields.flag;
  if ( data->fields.type == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaSubMaster___);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)GachaSubMaster__GetFriendPointGachaImageInfo(
                                  (GachaSubMaster_o *)Instance,
                                  data->fields.id,
                                  this->fields.summonSceneInTime,
                                  0LL);
    if ( Instance )
    {
      v55 = Instance;
      this->fields.gachaSubEntity = (struct GachaSubEntity_o *)Instance;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.gachaSubEntity,
        (System_Int32_array **)Instance,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      *(_DWORD *)(v22 + 80) = *(_DWORD *)&v55->fields._DispLog;
      *(_DWORD *)(v22 + 40) = HIDWORD(v55->fields.datalist);
    }
  }
  if ( !adjustData )
    goto LABEL_17;
  targetEntity = adjustData->fields.targetEntity;
  if ( !targetEntity
    || (*(_DWORD *)(v22 + 40) = targetEntity->fields.imageId, (v57 = adjustData->fields.targetEntity) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, v24);
  }
  *(_DWORD *)(v22 + 68) = v57->fields.idx;
  adjustIds = (System_Int32_array **)adjustData->fields.adjustIds;
  *(_QWORD *)(v22 + 72) = adjustIds;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 72), adjustIds, v49, v50, v51, v52, v53, v54);
LABEL_17:
  Instance = (DataManager_o *)this->fields.vaildGachaList;
  if ( !Instance )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
}


void __fastcall SummonControl__Awake(SummonControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl__BeforeConfirmMessageOpen(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  SummonInfoDlgComponent_o *infoDlgInfo; // x20
  System_String_o *datalist; // x21
  System_String_o *lookup; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v20; // x23

  if ( (byte_42EA3F6 & 1) == 0 )
  {
    sub_B5D5C4(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_beforeConfirmCautionResult__, v11, v12, v13);
    byte_42EA3F6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
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
        v20 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B5D694(SummonInfoDlgComponent_CallbackFunc_TypeInfo),
        SummonInfoDlgComponent_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_SummonControl_beforeConfirmCautionResult__,
          0LL),
        !infoDlgInfo) )
  {
LABEL_9:
    sub_B5D69C(Instance, v15);
  }
  SummonInfoDlgComponent__OpenInfoMessageDlg(infoDlgInfo, datalist, lookup, v20, 0LL);
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
  if ( (byte_42EA3EB & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, result, (_DWORD)method, v3);
    byte_42EA3EB = 1;
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
      SummonControl__showConfirmDlg_28388360(v5, 1, v7);
      return;
    }
    this = (SummonControl_o *)v5->fields.gachaParamData;
    if ( this )
    {
      *(_QWORD *)&this->fields.TUTORIAL_MENU_ARROW_POS.fields.y = result;
      sub_B5D560(
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
    sub_B5D69C(this, result);
  }
  this = (SummonControl_o *)v5->fields.fsm;
  if ( !this )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
}


bool __fastcall SummonControl__CheckFriendPointSummonUpdate(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  CommonUI_o *v29; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_Action_o *v32; // x23
  bool v33; // w19

  if ( (byte_42EA3EE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaSubMaster___, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SummonControl_SummonSceneRefresh__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_14884/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_14883/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, v23, v24, v25);
    byte_42EA3EE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaSubMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData || !Instance )
    goto LABEL_14;
  if ( GachaSubMaster__GetOpenEntity((GachaSubMaster_o *)Instance, gachaParamData->fields.gachaId, 0LL) == this->fields.gachaSubEntity )
    return 0;
  v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_14884/*"UPDATE_FRIENDPOINT_GACHA_ERROR_TITLE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_14883/*"UPDATE_FRIENDPOINT_GACHA_ERROR"*/, 0LL);
  v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl_SummonSceneRefresh__, 0LL);
  if ( !v29 )
LABEL_14:
    sub_B5D69C(Instance, v27);
  v33 = 1;
  CommonUI__OpenNotificationDialog(v29, v30, v31, v32, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  return v33;
}


bool __fastcall SummonControl__CheckGachaNum(SummonControl_o *this, System_Int32_array *ids, const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v5; // x20
  __int64 v7; // x0

  if ( !ids )
    sub_B5D69C(this, 0LL);
  v3 = *(_QWORD *)&ids->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v3 )
    {
      v7 = sub_B5D6C8(this);
      sub_B5D668(v7, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct GachaInfos_array *gachaResInfoList; // x9
  int v9; // w8
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_42EA40D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9394/*"NEXT_SVT"*/, (_DWORD)method, v2, v3);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_6429/*"FINAL_SVT"*/, v5, v6, v7);
    byte_42EA40D = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  v9 = v4->fields.getSvtIdx + 1;
  v4->fields.getSvtIdx = v9;
  if ( !gachaResInfoList || (this = (SummonControl_o *)v4->fields.fsm) == 0LL )
    sub_B5D69C(this, method);
  if ( v9 >= (signed int)gachaResInfoList->max_length )
    v10 = &StringLiteral_6429/*"FINAL_SVT"*/;
  else
    v10 = &StringLiteral_9394/*"NEXT_SVT"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v10, 0LL);
}


bool __fastcall SummonControl__CheckQpManaOverCheck(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v24; // x1
  UserGameEntity_o *v25; // x20
  int v26; // w21
  BalanceConfig_c *v27; // x8
  struct GachaRqParamData_o *gachaParamData; // x11
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t FriendPointSummonQpWarning; // w10
  int32_t QpMax; // w9
  struct BalanceConfig_StaticFields *v32; // x10
  int32_t v33; // w23
  int32_t qp; // w21
  struct BalanceConfig_StaticFields *v35; // x9
  int32_t mana; // w20
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v39; // x21
  System_Action_o *v40; // x22
  SummonLimitWarningDlgComponent_o *v41; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v42; // x21
  System_Action_o *v43; // x22
  SummonLimitWarningDlgComponent_o *v44; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v45; // x21
  System_Action_o *v46; // x22

  if ( (byte_42EA3EF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_autoSellSettingChange__, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl_limitManaConfirmResult__, v14, v15, v16);
    sub_B5D5C4(&Method_SummonControl_limitQpConfirmResult__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl_showConfirmDlg__, v20, v21, v22);
    byte_42EA3EF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_32;
  v25 = SelfUserGame;
  SelfUserGame = (UserGameEntity_o *)UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL);
  v26 = (int)SelfUserGame;
  v27 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_32;
  static_fields = v27->static_fields;
  FriendPointSummonQpWarning = static_fields->FriendPointSummonQpWarning;
  QpMax = static_fields->QpMax;
  if ( this->fields.isDailyGacha )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BalanceConfig_TypeInfo;
      v32 = BalanceConfig_TypeInfo->static_fields;
      QpMax = v32->QpMax;
      FriendPointSummonQpWarning = v32->FriendPointSummonQpWarning;
    }
    v33 = QpMax - 10 * FriendPointSummonQpWarning;
    if ( !v26 )
      return 0;
  }
  else
  {
    v33 = QpMax - gachaParamData->fields.gachaResourceNum / 200 * FriendPointSummonQpWarning;
    if ( !v26 )
      return 0;
  }
  qp = v25->fields.qp;
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = BalanceConfig_TypeInfo;
  }
  v35 = v27->static_fields;
  if ( qp >= v35->QpMax )
  {
    limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
    v39 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B5D694(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !limitWarningDlgInfo )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning(limitWarningDlgInfo, v39, v40, 0LL);
  }
  else
  {
    if ( v25->fields.qp < v33 )
    {
      mana = v25->fields.mana;
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v35 = BalanceConfig_TypeInfo->static_fields;
      }
      if ( mana < v35->UserItemMax )
        return 0;
      v44 = this->fields.limitWarningDlgInfo;
      v45 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B5D694(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
      SummonLimitWarningDlgComponent_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)this,
        Method_SummonControl_limitManaConfirmResult__,
        0LL);
      v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
      if ( v44 )
      {
        SummonLimitWarningDlgComponent__OpenManaWarning(v44, v45, v46, 0LL);
        return 1;
      }
LABEL_32:
      sub_B5D69C(SelfUserGame, v24);
    }
    v41 = this->fields.limitWarningDlgInfo;
    v42 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B5D694(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
    SummonLimitWarningDlgComponent_CallbackFunc___ctor(
      v42,
      (Il2CppObject *)this,
      Method_SummonControl_limitQpConfirmResult__,
      0LL);
    v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v43, (Il2CppObject *)this, Method_SummonControl_autoSellSettingChange__, 0LL);
    if ( !v41 )
      goto LABEL_32;
    SummonLimitWarningDlgComponent__OpenQpWarning2(v41, v42, v43, 0LL);
  }
  return 1;
}


void __fastcall SummonControl__CheckReturnTransition(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PlayMakerFSM_o *fsm; // x0
  __int64 *v9; // x8

  if ( (byte_42EA422 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11265/*"RETURN_MAIN"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11267/*"RETURN_RESULT"*/, v5, v6, v7);
    byte_42EA422 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  if ( this->fields.isResult )
    v9 = &StringLiteral_11267/*"RETURN_RESULT"*/;
  else
    v9 = &StringLiteral_11265/*"RETURN_MAIN"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v9, 0LL);
}


void __fastcall SummonControl__CheckSelectBonusGachaPeriod(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  SummonControl_c *v40; // x0
  Il2CppObject *String_35648228; // x19
  UserPresentBoxWindow_resData_array *v42; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1

  if ( (byte_42EA3EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_SelectBonusData___, v10, v11, v12);
    sub_B5D5C4(&JsonManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&NetworkManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&string_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&SummonControl_TypeInfo, v37, v38, v39);
    byte_42EA3EA = 1;
  }
  v40 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v40 = SummonControl_TypeInfo;
  }
  String_35648228 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                      v40->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_35648228, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v42 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            String_35648228,
            (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SelectBonusData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v43,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    if ( !v42 )
      sub_B5D69C(v44, v45);
  }
}


bool __fastcall SummonControl__CheckStoryGachaAdjustData(
        SummonControl_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EA3B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaStoryAdjustMaster___, (_DWORD)adjustData, gachaId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA3B8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaStoryAdjustMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return GachaStoryAdjustMaster__GetValidData((GachaStoryAdjustMaster_o *)Instance, adjustData, gachaId, 0LL);
}


void __fastcall SummonControl__CloseStoneFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 isStoneFragmentsBulkDialog; // w19
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42EA3E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EA3E6 = 1;
  }
  isStoneFragmentsBulkDialog = this->fields.isStoneFragmentsBulkDialog;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
  if ( isStoneFragmentsBulkDialog )
    CommonUI__CloseFragmentsBulkExchangeDialog(Instance, 0LL);
  else
    CommonUI__CloseFragmentsExchangeDialog(Instance, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__CoWaitCreatedMBannerSpringPanel(
        SummonControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA3C4 & 1) == 0 )
  {
    sub_B5D5C4(&SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3C4 = 1;
  }
  v5 = sub_B5D694(SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_TypeInfo);
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__174___ctor(
    (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__ConfirmMessageOpen(SummonControl_o *this, bool result, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  struct GachaRqParamData_o *v49; // x8
  WarEntity_o *Entity; // x20
  struct GachaRqParamData_o *v51; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  struct GachaRqParamData_o *v53; // x8
  SummonCautionDlgComponent_o *cautionDlgInfo; // x21
  System_String_o *title; // x22
  System_String_o *message; // x23
  int32_t id; // w27
  int64_t coordinates; // x20
  char v59; // w25
  SummonCautionDlgComponent_CallbackFunc_o *v60; // x24
  struct GachaRqParamData_o *v61; // x8
  int32_t v62; // w25
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v64; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v67; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v68; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v69; // x24
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *v70; // x26
  const MethodInfo *v71; // [xsp+8h] [xbp-58h]

  if ( (byte_42EA3F3 & 1) == 0 )
  {
    sub_B5D5C4(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaDetailMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SummonControl_BonusSelectSummonConfirmResult__, v27, v28, v29);
    sub_B5D5C4(&Method_SummonControl_SetDispBtn__, v30, v31, v32);
    sub_B5D5C4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v33, v34, v35);
    sub_B5D5C4(&Method_SummonControl_confirmCautionResult__, v36, v37, v38);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v45, v46, v47);
    byte_42EA3F3 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  SummonConfirmDlgComponent__Close_28355800(confirmDlgInfo, 0LL, method);
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
    confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( confirmDlgInfo )
      {
        confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v64 = this->fields.gachaParamData;
              if ( v64 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v64->fields.gachaId;
                v67 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B5D694(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v67,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v68 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B5D694(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v68,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v69 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B5D694(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v69,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v67, v68, v69, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
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
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
  v49 = this->fields.gachaParamData;
  if ( !v49 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
             v49->fields.gachaId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)confirmDlgInfo,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
  v51 = this->fields.gachaParamData;
  if ( !v51 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity(
                        (GachaDetailMaster_o *)confirmDlgInfo,
                        v51->fields.gachaId,
                        0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
  v53 = this->fields.gachaParamData;
  if ( !v53 )
    goto LABEL_43;
  if ( !confirmDlgInfo )
    goto LABEL_43;
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)confirmDlgInfo,
                                                    v53->fields.gachaId,
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
  v59 = (char)confirmDlgInfo;
  v60 = (SummonCautionDlgComponent_CallbackFunc_o *)sub_B5D694(SummonCautionDlgComponent_CallbackFunc_TypeInfo);
  SummonCautionDlgComponent_CallbackFunc___ctor(
    v60,
    (Il2CppObject *)this,
    Method_SummonControl_confirmCautionResult__,
    0LL);
  if ( (v59 & 1) != 0 )
  {
    v61 = this->fields.gachaParamData;
    if ( !v61 )
      goto LABEL_43;
    v62 = v61->fields.gachaId;
  }
  else
  {
    v62 = 0;
  }
  v70 = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B5D694(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
    v70,
    (Il2CppObject *)this,
    Method_SummonControl_TryGetSelectBonusDataInfo__,
    0LL);
  if ( !cautionDlgInfo )
LABEL_43:
    sub_B5D69C(confirmDlgInfo, result);
  SummonCautionDlgComponent__OpenCautionMessageDlg(
    cautionDlgInfo,
    title,
    message,
    id > 0,
    coordinates,
    v60,
    v62,
    v70,
    this->fields.bonusSelectAssetManager,
    v71);
}


void __fastcall SummonControl__DialogCallBack(SummonControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EA407 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__DialogCallBack_b__253_0__, v11, v12, v13);
    byte_42EA407 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__DialogCallBack_b__253_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonControl__EndCloseDialogCallBack(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EA408 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    byte_42EA408 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3154/*"CLOSE"*/, 0LL);
}


void __fastcall SummonControl__EndRequestStoneFragmentsShop(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42EA3E5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EA3E5 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    SummonControl__CloseStoneFragmentsExchangeDialog(this, v6);
  }
  else
  {
    SummonControl__resetStoneInfo(this, v6);
    SummonControl__OpenStoneFragmentExchangeResultDialog(this, this->fields.stoneExchangeCount, v7);
  }
}


void __fastcall SummonControl__ExtractVaildGachaInfoOnPriority(
        SummonControl_o *this,
        System_Collections_Generic_List_VaildGachaInfo__o **baseGachaList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_VaildGachaInfo__o *v29; // x21
  unsigned __int64 v30; // x22
  System_Collections_Generic_List_VaildGachaInfo__o *v31; // x27
  __int64 v32; // x25
  VaildGachaInfo_o *v33; // x26
  VaildGachaInfo_o *v34; // x21
  int size; // w8
  VaildGachaInfo_o *v36; // x8

  if ( (byte_42EA3BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__Add__, (_DWORD)baseGachaList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__Contains__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_VaildGachaInfo__TypeInfo, v17, v18, v19);
    byte_42EA3BC = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_VaildGachaInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_VaildGachaInfo___ctor__);
  v29 = *baseGachaList;
  if ( !*baseGachaList )
LABEL_25:
    sub_B5D69C(v21, v22);
  v30 = 0LL;
  while ( (__int64)v30 < v29->fields._size )
  {
    v31 = v29;
    if ( v30 >= (unsigned int)v29->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v32 = 0LL;
    v33 = v29->fields._items->m_Items[v30];
    v34 = v33;
    while ( 1 )
    {
      size = v31->fields._size;
      if ( (int)v32 >= size )
        break;
      if ( size <= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v33 )
      {
        v36 = v31->fields._items->m_Items[v32];
        if ( v36 )
        {
          if ( v33->fields.id != v36->fields.id && v33->fields.slotId == v36->fields.slotId )
          {
            if ( !v34 )
              goto LABEL_25;
            if ( v34->fields.priority < v36->fields.priority )
              v34 = v31->fields._items->m_Items[v32];
          }
          v31 = *baseGachaList;
          ++v32;
          if ( *baseGachaList )
            continue;
        }
      }
      goto LABEL_25;
    }
    if ( v20 )
    {
      v21 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v20,
              (WarBoardManager_TaskList_o *)v34,
              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_VaildGachaInfo__Contains__);
      if ( !v21 )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_VaildGachaInfo__Add__);
      v29 = *baseGachaList;
      ++v30;
      if ( *baseGachaList )
        continue;
    }
    goto LABEL_25;
  }
  *baseGachaList = (System_Collections_Generic_List_VaildGachaInfo__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)baseGachaList, (System_Int32_array **)v20, v23, v24, v25, v26, v27, v28);
}


float __fastcall SummonControl__FSMenuOffsetX(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA3A8 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3A8 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  void *v8; // x0
  __int64 v9; // x8
  System_String_o *v10; // x19
  int v11; // w1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x19
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v21; // x19
  __int64 v22; // x8
  __int64 v24; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA3CD & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    byte_42EA3CD = 1;
  }
  result = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42EA435 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA435 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->static_fields->_SelectedBannerEntity_k__BackingField )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !byte_42EA435 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA435 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v9 = *(_QWORD *)(*((_QWORD *)v8 + 23) + 48LL);
  if ( !v9 )
    goto LABEL_40;
  v10 = *(System_String_o **)(v9 + 56);
  v8 = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_40;
  method = (const MethodInfo *)v8;
  if ( !*((_DWORD *)v8 + 6) )
    goto LABEL_41;
  *((_WORD *)v8 + 16) = 47;
  if ( !v10 )
    goto LABEL_40;
  v18 = System_String__Split(v10, (System_Char_array *)v8, 0LL);
  if ( !byte_42E4B71 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, (_DWORD)v12, v13);
    byte_42E4B71 = 1;
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
  sub_B5D560(
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
  v21 = v18->m_Items[1];
  v8 = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_40;
  method = (const MethodInfo *)v8;
  if ( !*((_DWORD *)v8 + 6) )
    goto LABEL_41;
  *((_WORD *)v8 + 16) = 44;
  if ( !v21 || (v8 = System_String__Split(v21, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_40:
    sub_B5D69C(v8, method);
  v22 = *((_QWORD *)v8 + 3);
  if ( v22 )
  {
    result = 0;
    if ( (_DWORD)v22 )
    {
      System_Int32__TryParse(*((System_String_o **)v8 + 4), &result, 0LL);
      return result;
    }
LABEL_41:
    v24 = sub_B5D6C8(v8);
    sub_B5D668(v24, 0LL);
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
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *canRankUpClassIds; // x0

  if ( (byte_42EA400 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, classId, (_DWORD)method, v3);
    byte_42EA400 = 1;
  }
  canRankUpClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.canRankUpClassIds;
  return canRankUpClassIds
      && canRankUpClassIds[1].monitor
      && System_Linq_Enumerable__Contains_int_(
           canRankUpClassIds,
           classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall SummonControl__LoadBannerEnd(SummonControl_o *this, AssetData_o *data, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  System_String_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_42EA3B2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6406/*"FAIL_LOAD"*/, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17235/*"btn_sumonhistory"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, v13, v14, v15);
    byte_42EA3B2 = 1;
  }
  if ( !data )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_9;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_6406/*"FAIL_LOAD"*/, 0LL);
  }
  this->fields.bannerAssetData = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bannerAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SummonControl__createSummonInfo(this, v17);
  SummonControl__setPositionByWarId(this, v18);
  SummonControl__ResetArrowTween(this, v19);
  v20 = (System_String_o *)StringLiteral_17235/*"btn_sumonhistory"*/;
  fsm = (PlayMakerFSM_o *)SummonControl__searchBannerImg(this, (System_String_o *)StringLiteral_17235/*"btn_sumonhistory"*/, v21);
  if ( !this->fields.summonInfoCtr
    || (SummonInfoControl__SetSummonHistorySprite(this->fields.summonInfoCtr, (UnityEngine_GameObject_o *)fsm, v20, 0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(fsm, data);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0LL);
}


void __fastcall SummonControl__OnCenterOnChildFinished(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UICenterOnChild_o *centerChild; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x21
  float y; // w20
  int32_t v20; // w24
  System_Int32_array **v21; // x22
  UnityEngine_Object_o *currentBannerComp; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1

  v4 = this;
  if ( (byte_42EA3C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_3008/*"CHANGE_BANNER"*/, v8, v9, v10);
    byte_42EA3C0 = 1;
  }
  centerChild = v4->fields.centerChild;
  if ( !centerChild )
    goto LABEL_27;
  this = (SummonControl_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_27;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
  if ( !this )
    goto LABEL_27;
  v18 = *(System_Int32_array ***)&this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_Height;
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v20 = *((_DWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v21 = (System_Int32_array **)this;
  if ( v4->fields.isDragging )
    goto LABEL_30;
  currentBannerComp = (UnityEngine_Object_o *)v4->fields.currentBannerComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, currentBannerComp, 0LL)
    || v18 != (System_Int32_array **)v4->fields.currentGachaInfo
    || LODWORD(y) != v4->fields.currentIdx
    || v20 != v4->fields.currentMoveIdx )
  {
LABEL_30:
    if ( v4->fields.isDoneTutorial )
    {
      this = (SummonControl_o *)v4->fields.leftArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v4->fields.rightArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_27;
      TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)this, 1, 0LL);
      this = (SummonControl_o *)v4->fields.summonMBannerLeftArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
      this = (SummonControl_o *)v4->fields.summonMBannerRightArrowBtn;
      if ( !this )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    }
    v4->fields.isDragging = 0;
    v4->fields.currentBannerComp = (struct GachaBannerComponent_o *)v21;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.currentBannerComp, v21, v12, v13, v14, v15, v16, v17);
    v4->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v18;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.currentGachaInfo, v18, v23, v24, v25, v26, v27, v28);
    *(float *)&v4->fields.currentIdx = y;
    v4->fields.currentMoveIdx = v20;
    SummonControl__setSliderIcon(v4, SLODWORD(y), v29);
    this = (SummonControl_o *)v4->fields.summonMBannerLoopCtr;
    if ( this )
    {
      summonMBannerCenterChild = v4->fields.summonMBannerCenterChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v4->fields.currentMoveIdx,
                                    0LL);
        if ( summonMBannerCenterChild )
        {
          UICenterOnChild__CenterOn_35972220(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          this = (SummonControl_o *)v4->fields.summonInfoCtr;
          if ( this )
          {
            SummonInfoControl__SetEnableSummonBtn((SummonInfoControl_o *)this, 1, 0LL);
            MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
            SummonControl__UpdateSummonInfoControlLayout(v4, v31);
            SummonControl__showHelpImg(v4, v32);
            this = (SummonControl_o *)v4->fields.fsm;
            if ( this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3008/*"CHANGE_BANNER"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B5D69C(this, method);
  }
}


void __fastcall SummonControl__OnCenterOnChildFinishedMBanner(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UICenterOnChild_o *summonMBannerCenterChild; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x20
  float m_Height; // w24
  float x; // w25
  System_Int32_array **v18; // x21
  UnityEngine_Object_o *currentSummonMBannerComponent; // x23
  bool *p_isNotCenterOnSync; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UICenterOnChild_o *centerChild; // x20

  v4 = this;
  if ( (byte_42EA3C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, (_DWORD)method, v2, v3);
    this = (SummonControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA3C1 = 1;
  }
  summonMBannerCenterChild = v4->fields.summonMBannerCenterChild;
  if ( !summonMBannerCenterChild )
    goto LABEL_21;
  this = (SummonControl_o *)summonMBannerCenterChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_21;
  this = (SummonControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
  if ( !this )
    goto LABEL_21;
  v15 = *(System_Int32_array ***)&this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_YMin;
  m_Height = this->fields.TUTORIAL_MENU_ARROW_RECT.fields.m_Height;
  x = this->fields.TUTORIAL_MENU_ARROW_POS.fields.x;
  v18 = (System_Int32_array **)this;
  if ( v4->fields.isDragging )
    goto LABEL_15;
  currentSummonMBannerComponent = (UnityEngine_Object_o *)v4->fields.currentSummonMBannerComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, currentSummonMBannerComponent, 0LL)
    || v15 != (System_Int32_array **)v4->fields.currentGachaInfo
    || LODWORD(m_Height) != v4->fields.currentIdx
    || LODWORD(x) != v4->fields.currentMoveIdx )
  {
LABEL_15:
    v4->fields.currentSummonMBannerComponent = (struct SummonMiniBannerComponent_o *)v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.currentSummonMBannerComponent,
      v18,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v4->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v15;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.currentGachaInfo, v15, v21, v22, v23, v24, v25, v26);
    p_isNotCenterOnSync = &v4->fields.isNotCenterOnSync;
    if ( v4->fields.isNotCenterOnSync )
      goto LABEL_20;
    this = (SummonControl_o *)v4->fields.bannerLoopCtr;
    *(float *)&v4->fields.currentIdx = m_Height;
    *(float *)&v4->fields.currentMoveIdx = x;
    if ( this )
    {
      centerChild = v4->fields.centerChild;
      this = (SummonControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        this = (SummonControl_o *)UnityEngine_Transform__GetChild(
                                    (UnityEngine_Transform_o *)this,
                                    v4->fields.currentMoveIdx,
                                    0LL);
        if ( centerChild )
        {
          UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_B5D69C(this, method);
  }
  p_isNotCenterOnSync = &v4->fields.isNotCenterOnSync;
LABEL_20:
  *p_isNotCenterOnSync = 0;
}


void __fastcall SummonControl__OnClickBack(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoControl_o *titleInfo; // x0

  if ( (byte_42EA41B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, (_DWORD)method, v2, v3);
    byte_42EA41B = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_B5D69C(0LL, method);
  TitleInfoControl__sendEvent(titleInfo, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
}


void __fastcall SummonControl__OnClickHelp(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v14; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x20
  System_Action_o *v16; // x21

  if ( (byte_42EA41E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl_OnClickHelpClose__, v8, v9, v10);
    byte_42EA41E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr
    || (SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 0, 0LL),
        (currentGachaInfo = this->fields.currentGachaInfo) == 0LL) )
  {
    sub_B5D69C(summonInfoCtr, v11);
  }
  v14 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v14, 0LL);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(EventTutorialEntity, v16, 0LL);
}


void __fastcall SummonControl__OnClickHelpClose(SummonControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B5D69C(0LL, method);
  SummonInfoControl__SetHelpBtnDisp(summonInfoCtr, 1, 0LL);
}


void __fastcall SummonControl__OnClickHisotry(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  GachaHistoryRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v19; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8

  if ( (byte_42EA41F & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_GachaHistoryRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl__OnClickHisotry_b__285_0__, v14, v15, v16);
    byte_42EA41F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SummonControl__OnClickHisotry_b__285_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (GachaHistoryRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v17,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_GachaHistoryRequest___);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo || !Request_WarBoardWallAttackRequest )
    sub_B5D69C(Request_WarBoardWallAttackRequest, v19);
  GachaHistoryRequest__beginRequest(Request_WarBoardWallAttackRequest, currentGachaInfo->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnClickMiniBanner(SummonControl_o *this, int32_t moveIdx, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x20

  if ( (byte_42EA3C5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, moveIdx, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12949/*"SetBannerCenter"*/, v6, v7, v8);
    byte_42EA3C5 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12949/*"SetBannerCenter"*/,
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
      || (UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
      sub_B5D69C(leftArrowBtn, *(_QWORD *)&moveIdx);
    }
    UICenterOnChild__CenterOn_35972220(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__OnClickStoneFragmentsExchangeButton(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v11; // x1

  if ( (byte_42EA3E1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v5, v6, v7);
    byte_42EA3E1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo
    || (SummonConfirmDlgComponent__Close_28355800(confirmDlgInfo, 0LL, v9),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fragmentsExchangeButton) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmDlgInfo, 0, 0LL),
        (confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(confirmDlgInfo, v8);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v11);
}


void __fastcall SummonControl__OnClickStoneFragmentsInfo(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EA3E2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3E2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SummonControl__OpenFragmentsExchangeDialog(this, v5);
}


void __fastcall SummonControl__OnClickSummonDetail(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SummonInfoControl_o *summonInfoCtr; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EA41D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SummonControl_reDispSummonBannerList__, v5, v6, v7);
    byte_42EA41D = 1;
  }
  summonInfoCtr = this->fields.summonInfoCtr;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonControl_reDispSummonBannerList__, 0LL);
  if ( !summonInfoCtr )
    sub_B5D69C(v10, v11);
  SummonInfoControl__OnClickDetail(summonInfoCtr, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__OnCloseResultDialog(SummonControl_o *this, bool isOk, const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EA3E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isOk, (_DWORD)method, v3);
    byte_42EA3E8 = 1;
  }
  SummonControl__CloseStoneFragmentsExchangeDialog(this, (const MethodInfo *)isOk);
  this->fields.stoneExchangeCount = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseItemExchangeResultDialog(Instance, 0LL, 0LL);
}


void __fastcall SummonControl__OnDragStarted(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  if ( (byte_42EA3BF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12949/*"SetBannerCenter"*/, (_DWORD)method, v2, v3);
    byte_42EA3BF = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12949/*"SetBannerCenter"*/,
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
    sub_B5D69C(summonInfoCtr, v5);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)summonInfoCtr, 0LL);
  this->fields.isDragging = 1;
}


void __fastcall SummonControl__OnEndSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EA41C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__OnEndSummonEffect_b__282_0__, v11, v12, v13);
    byte_42EA41C = 1;
  }
  SummonControl__SetDispBgParts(this, 1, v2);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__OnEndSummonEffect_b__282_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonControl__OpenFragmentsExchangeDialog(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int32_t v27; // w22
  CommonUI_o *Instance; // x21
  const MethodInfo *v29; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x23
  System_Action_int__o *v31; // x24

  if ( (byte_42EA3E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl_RequestStoneFragmentsShop__, v20, v21, v22);
    byte_42EA3E3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(
                                 (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                                 0LL),
        this->fields.isStoneFragmentsBulkDialog = UserStoneFragmentNum >= FragmentCountToExchangeForStone,
        v27 = UserStoneFragmentNum,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v29),
        v31 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v31,
          (Il2CppObject *)this,
          Method_SummonControl_RequestStoneFragmentsShop__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__),
        !Instance) )
  {
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v24);
  }
  if ( v27 < FragmentCountToExchangeForStone )
    CommonUI__OpenFragmentsExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v31, 0LL);
  else
    CommonUI__OpenFragmentsBulkExchangeDialog(Instance, StoneFragmentsShopEntity, 7, v31, 0LL);
}


void __fastcall SummonControl__OpenStoneFragmentExchangeResultDialog(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v25; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v27; // x1
  ItemEntity_o *Entity; // x22
  const MethodInfo *v29; // x1
  ShopEntity_o *v30; // x0
  System_String_o *RequestResultDialogMessageStoneFragments; // x21
  const MethodInfo *v32; // x1
  ShopEntity_o *v33; // x0
  System_String_o *RequestResultDialogItemMessageNormal; // x20
  const MethodInfo *v35; // x1
  ShopEntity_o *v36; // x0
  System_String_o *RequestResultDialogNumMessageNormal; // x22
  CommonUI_o *Instance; // x23
  System_Action_bool__o *v39; // x24

  if ( (byte_42EA3E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SummonControl_OnCloseResultDialog__, v21, v22, v23);
    byte_42EA3E7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v25);
  if ( !StoneFragmentsShopEntity )
    goto LABEL_10;
  StoneFragmentsShopEntity = (ShopEntity_o *)ShopEntity__get_TargetId(StoneFragmentsShopEntity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_10;
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             Master_WarQuestSelectionMaster,
                             (int32_t)StoneFragmentsShopEntity,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  v30 = SummonControl__get_StoneFragmentsShopEntity(this, v29);
  RequestResultDialogMessageStoneFragments = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageStoneFragments(
                                               v30,
                                               buyCount,
                                               0LL);
  v33 = SummonControl__get_StoneFragmentsShopEntity(this, v32);
  RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                           v33,
                                           Entity,
                                           buyCount,
                                           0LL);
  v36 = SummonControl__get_StoneFragmentsShopEntity(this, v35);
  RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                          v36,
                                          Entity,
                                          0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v39,
    (Il2CppObject *)this,
    Method_SummonControl_OnCloseResultDialog__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !Instance )
LABEL_10:
    sub_B5D69C(StoneFragmentsShopEntity, v27);
  CommonUI__OpenItemExchangeResultDialog(
    Instance,
    RequestResultDialogMessageStoneFragments,
    RequestResultDialogNumMessageNormal,
    RequestResultDialogItemMessageNormal,
    v39,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__RequestStoneFragmentsShop(
        SummonControl_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v17; // x1
  ShopEntity_o *StoneFragmentsShopEntity; // x0
  __int64 v19; // x1

  if ( (byte_42EA3E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseRequest___, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SummonControl_EndRequestStoneFragmentsShop__, v12, v13, v14);
    byte_42EA3E4 = 1;
  }
  this->fields.stoneExchangeCount = buyCount;
  if ( buyCount )
  {
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_SummonControl_EndRequestStoneFragmentsShop__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v15,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
    StoneFragmentsShopEntity = SummonControl__get_StoneFragmentsShopEntity(this, v17);
    if ( !StoneFragmentsShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B5D69C(StoneFragmentsShopEntity, v19);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *leftArrowSprite; // x0
  UnityEngine_Object_o *v9; // x22
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_42EA3B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenPosition___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA3B5 = 1;
  }
  leftArrowSprite = (UnityEngine_Component_o *)this->fields.leftArrowSprite;
  if ( !leftArrowSprite )
    goto LABEL_32;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 leftArrowSprite,
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.rightArrowSprite )
    goto LABEL_32;
  v9 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this->fields.rightArrowSprite,
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerLeftArrowSprite )
    goto LABEL_32;
  v10 = (UnityEngine_Object_o *)leftArrowSprite;
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                 (UnityEngine_Component_o *)this->fields.summonMBannerLeftArrowSprite,
                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !this->fields.summonMBannerRightArrowSprite )
    goto LABEL_32;
  v11 = (UnityEngine_Object_o *)leftArrowSprite;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.summonMBannerRightArrowSprite,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v9, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v11, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  leftArrowSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)leftArrowSprite & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_32;
    UITweener__ResetToBeginning((UITweener_o *)v10, 0LL);
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
    sub_B5D69C(leftArrowSprite, method);
  }
}


void __fastcall SummonControl__SendEventRequestNg(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PlayMakerFSM_o *fsm; // x0
  __int64 *v9; // x8

  if ( (byte_42EA3FB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11211/*"REQUEST_NG_RESULT"*/, v5, v6, v7);
    byte_42EA3FB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  if ( this->fields.isResult )
    v9 = &StringLiteral_11211/*"REQUEST_NG_RESULT"*/;
  else
    v9 = &StringLiteral_11210/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v9, 0LL);
}


void __fastcall SummonControl__SetBannerCenter(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *bannerLoopCtr; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  float v10; // s8
  UICenterOnChild_o *centerChild; // x20
  WebViewObject_o *v12; // x20
  float v13; // s8
  UICenterOnChild_o *summonMBannerCenterChild; // x20
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_42EA3C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SpringPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA3C2 = 1;
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
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
      v10 = *(float *)&Component_WebViewObject->fields.onJS;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_37;
      if ( v10 != COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)bannerLoopCtr, 0LL)) )
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
        UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)bannerLoopCtr, 1, 0LL);
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
    v12 = UnityEngine_Component__GetComponent_WebViewObject_(
            bannerLoopCtr,
            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( ((unsigned __int8)bannerLoopCtr & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_37;
      bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
      if ( !bannerLoopCtr )
        goto LABEL_37;
      v13 = *(float *)&v12->fields.onJS;
      bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
      if ( !bannerLoopCtr )
        goto LABEL_37;
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
              UICenterOnChild__CenterOn_35972220(
                summonMBannerCenterChild,
                (UnityEngine_Transform_o *)bannerLoopCtr,
                1,
                0LL);
              return;
            }
          }
        }
LABEL_37:
        sub_B5D69C(bannerLoopCtr, method);
      }
    }
    else
    {
      v15 = SummonControl__CoWaitCreatedMBannerSpringPanel(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    }
  }
}


void __fastcall SummonControl__SetDispBgParts(SummonControl_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_GameObject_o *bgRoot; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *v35; // x20
  __int64 v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v81; // x23
  bool v82; // w21
  System_String_o *v83; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v85; // x0
  __int64 v86; // x0

  if ( (byte_42EA3FE & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_17475/*"center_glow"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22134/*"ring_gard1_3"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22135/*"ring_gard2_1"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22136/*"ring_gard2_2"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_22133/*"ring_gard1_2"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22137/*"ring_gard2_3"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22132/*"ring_gard1_1"*/, v24, v25, v26);
    byte_42EA3FE = 1;
  }
  bgRoot = (UnityEngine_GameObject_o *)sub_B5D5DC(string___TypeInfo, 7LL);
  if ( !bgRoot )
LABEL_47:
    sub_B5D69C(bgRoot, v28);
  v35 = bgRoot;
  v36 = StringLiteral_22132/*"ring_gard1_1"*/;
  if ( StringLiteral_22132/*"ring_gard1_1"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22132/*"ring_gard1_1"*/, v35->klass->_1.element_class);
    if ( !v36 )
      goto LABEL_49;
    v37 = (System_Int32_array **)StringLiteral_22132/*"ring_gard1_1"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !LODWORD(v35[1].klass) )
    goto LABEL_48;
  v35[1].monitor = v37;
  sub_B5D560((BattleServantConfConponent_o *)&v35[1].monitor, v37, v29, v30, v31, v32, v33, v34);
  v36 = StringLiteral_22133/*"ring_gard1_2"*/;
  if ( StringLiteral_22133/*"ring_gard1_2"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22133/*"ring_gard1_2"*/, v35->klass->_1.element_class);
    if ( !v36 )
      goto LABEL_49;
    v44 = (System_Int32_array **)StringLiteral_22133/*"ring_gard1_2"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( LODWORD(v35[1].klass) <= 1 )
    goto LABEL_48;
  *(_QWORD *)&v35[1].fields.m_CachedPtr = v44;
  sub_B5D560((BattleServantConfConponent_o *)&v35[1].fields, v44, v38, v39, v40, v41, v42, v43);
  v36 = StringLiteral_22134/*"ring_gard1_3"*/;
  if ( StringLiteral_22134/*"ring_gard1_3"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22134/*"ring_gard1_3"*/, v35->klass->_1.element_class);
    if ( !v36 )
      goto LABEL_49;
    v51 = (System_Int32_array **)StringLiteral_22134/*"ring_gard1_3"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( LODWORD(v35[1].klass) <= 2 )
    goto LABEL_48;
  v35[2].klass = (UnityEngine_GameObject_c *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v35[2], v51, v45, v46, v47, v48, v49, v50);
  v36 = StringLiteral_22135/*"ring_gard2_1"*/;
  if ( StringLiteral_22135/*"ring_gard2_1"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22135/*"ring_gard2_1"*/, v35->klass->_1.element_class);
    if ( !v36 )
      goto LABEL_49;
    v58 = (System_Int32_array **)StringLiteral_22135/*"ring_gard2_1"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( LODWORD(v35[1].klass) <= 3 )
    goto LABEL_48;
  v35[2].monitor = v58;
  sub_B5D560((BattleServantConfConponent_o *)&v35[2].monitor, v58, v52, v53, v54, v55, v56, v57);
  v36 = StringLiteral_22136/*"ring_gard2_2"*/;
  if ( StringLiteral_22136/*"ring_gard2_2"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22136/*"ring_gard2_2"*/, v35->klass->_1.element_class);
    if ( !v36 )
      goto LABEL_49;
    v65 = (System_Int32_array **)StringLiteral_22136/*"ring_gard2_2"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( LODWORD(v35[1].klass) <= 4 )
    goto LABEL_48;
  *(_QWORD *)&v35[2].fields.m_CachedPtr = v65;
  sub_B5D560((BattleServantConfConponent_o *)&v35[2].fields, v65, v59, v60, v61, v62, v63, v64);
  v36 = StringLiteral_22137/*"ring_gard2_3"*/;
  if ( StringLiteral_22137/*"ring_gard2_3"*/ )
  {
    v36 = sub_B5D684(StringLiteral_22137/*"ring_gard2_3"*/, v35->klass->_1.element_class);
    if ( !v36 )
      goto LABEL_49;
    v72 = (System_Int32_array **)StringLiteral_22137/*"ring_gard2_3"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( LODWORD(v35[1].klass) <= 5 )
    goto LABEL_48;
  v35[3].klass = (UnityEngine_GameObject_c *)v72;
  sub_B5D560((BattleServantConfConponent_o *)&v35[3], v72, v66, v67, v68, v69, v70, v71);
  v36 = StringLiteral_17475/*"center_glow"*/;
  if ( StringLiteral_17475/*"center_glow"*/ )
  {
    v36 = sub_B5D684(StringLiteral_17475/*"center_glow"*/, v35->klass->_1.element_class);
    if ( v36 )
    {
      v79 = (System_Int32_array **)StringLiteral_17475/*"center_glow"*/;
      goto LABEL_38;
    }
LABEL_49:
    v86 = sub_B5D6BC(v36);
    sub_B5D668(v86, 0LL);
  }
  v79 = 0LL;
LABEL_38:
  if ( LODWORD(v35[1].klass) <= 6 )
    goto LABEL_48;
  v35[3].monitor = v79;
  sub_B5D560((BattleServantConfConponent_o *)&v35[3].monitor, v79, v73, v74, v75, v76, v77, v78);
  klass = v35[1].klass;
  if ( (int)klass >= 1 )
  {
    v81 = 0LL;
    v82 = isDisp;
    while ( v81 < (unsigned int)klass )
    {
      bgRoot = this->fields.bgRoot;
      if ( !bgRoot )
        goto LABEL_47;
      v83 = (System_String_o *)*((_QWORD *)&v35[1].monitor + v81);
      transform = UnityEngine_GameObject__get_transform(bgRoot, 0LL);
      bgRoot = (UnityEngine_GameObject_o *)TransformHelper__getNodeFromName(transform, v83, 1, 0LL);
      if ( !bgRoot )
        goto LABEL_47;
      bgRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgRoot, 0LL);
      if ( !bgRoot )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(bgRoot, v82, 0LL);
      LODWORD(klass) = v35[1].klass;
      if ( (__int64)++v81 >= (int)klass )
        return;
    }
LABEL_48:
    v85 = sub_B5D6C8(v36);
    sub_B5D668(v85, 0LL);
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
    sub_B5D69C(summonInfoCtr, isDisp);
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
    sub_B5D69C(this, num);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *fragmentsExchangeButton; // x0
  UISprite_o *Component_srcLineSprite; // x20
  int32_t FragmentCountToExchangeForStone; // w20
  int32_t UserStoneFragmentNum; // w0
  int v27; // w21
  MasterMissionComponent_c *v28; // x0
  UILabel_o *fragmentsCount; // x20
  int32_t STONE_EXCHENGE_DISP_LIMIT; // w8
  bool v31; // w1
  __int64 v32; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA3E0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v14, v15, v16);
    sub_B5D5C4(&MasterMissionComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17197/*"btn_event_3"*/, v20, v21, v22);
    byte_42EA3E0 = 1;
  }
  v32 = 0LL;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            fragmentsExchangeButton,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(Component_srcLineSprite, (System_String_o *)StringLiteral_17197/*"btn_event_3"*/, 0LL);
  AtlasManager__SetItem(this->fields.stoneIcon, 6, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  FragmentCountToExchangeForStone = ShopMaster__GetFragmentCountToExchangeForStone(
                                      (ShopMaster_o *)fragmentsExchangeButton,
                                      0LL);
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum((UserItemMaster_o *)fragmentsExchangeButton, 0LL);
  v27 = 0;
  if ( FragmentCountToExchangeForStone >= 1 && UserStoneFragmentNum >= 1 )
    v27 = UserStoneFragmentNum / (unsigned int)FragmentCountToExchangeForStone;
  HIDWORD(v32) = v27;
  fragmentsExchangeButton = this->fields.fragmentsExchangeButton;
  if ( !fragmentsExchangeButton )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(
    fragmentsExchangeButton,
    this->fields.haveStone + v27 >= this->fields.needStone,
    0LL);
  v28 = MasterMissionComponent_TypeInfo;
  if ( (BYTE3(MasterMissionComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
    v28 = MasterMissionComponent_TypeInfo;
  }
  fragmentsCount = this->fields.fragmentsCount;
  STONE_EXCHENGE_DISP_LIMIT = v28->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  if ( v27 <= STONE_EXCHENGE_DISP_LIMIT )
  {
    fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v32 + 4, 0LL);
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
          v31 = 0;
          goto LABEL_31;
        }
      }
    }
LABEL_32:
    sub_B5D69C(fragmentsExchangeButton, method);
  }
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    STONE_EXCHENGE_DISP_LIMIT = MasterMissionComponent_TypeInfo->static_fields->STONE_EXCHENGE_DISP_LIMIT;
  }
  LODWORD(v32) = STONE_EXCHENGE_DISP_LIMIT;
  fragmentsExchangeButton = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v32, 0LL);
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
  v31 = 1;
LABEL_31:
  UnityEngine_GameObject__SetActive(fragmentsExchangeButton, v31, 0LL);
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
    sub_B5D69C(this, a);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EA3F2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl__SummonSceneRefresh_b__227_0__, v8, v9, v10);
    byte_42EA3F2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__SummonSceneRefresh_b__227_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__maskFadein(Instance, 0.0, v12, 0LL);
}


bool __fastcall SummonControl__TryGetSelectBonusDataInfo(
        SummonControl_o *this,
        SelectBonusData_o **selectBonusData,
        int32_t gachaId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SummonControl_c *v18; // x0
  System_String_o *String_35648228; // x21
  UserPresentBoxWindow_resData_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int max_length; // w8
  __int64 v28; // x9
  SelectBonusData_o *v29; // x1
  __int64 v30; // x0

  if ( (byte_42EA3E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_SelectBonusData___, (_DWORD)selectBonusData, gachaId, method);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    this = (SummonControl_o *)sub_B5D5C4(&SummonControl_TypeInfo, v9, v10, v11);
    byte_42EA3E9 = 1;
  }
  SummonControl__CheckSelectBonusGachaPeriod(this, (const MethodInfo *)selectBonusData);
  *selectBonusData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)selectBonusData, 0LL, v12, v13, v14, v15, v16, v17);
  v18 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v18 = SummonControl_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v18->static_fields->BONUS_SELECTSUMMON_SAVEKEY, 0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
    goto LABEL_7;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v20 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          (Il2CppObject *)String_35648228,
          (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
  if ( v20 )
  {
    max_length = v20->max_length;
    if ( max_length < 1 )
    {
LABEL_7:
      LOBYTE(v20) = 0;
      return (char)v20;
    }
    v28 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= max_length )
      {
        v30 = sub_B5D6C8(v20);
        sub_B5D668(v30, 0LL);
      }
      v29 = (SelectBonusData_o *)v20->m_Items[v28];
      if ( !v29 )
        sub_B5D69C(v20, 0LL);
      if ( v29->fields.gachaId == gachaId )
        break;
      if ( (int)++v28 >= max_length )
        goto LABEL_7;
    }
    *selectBonusData = v29;
    sub_B5D560(
      (BattleServantConfConponent_o *)selectBonusData,
      (System_Int32_array **)v29,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    LOBYTE(v20) = 1;
  }
  return (char)v20;
}


void __fastcall SummonControl__UpdateSummonInfoControlLayout(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct SummonInfoControl_o *summonInfoCtr; // x9
  char v8; // w8

  v4 = this;
  if ( (byte_42EA3C3 & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B5D5C4(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__,
                                (_DWORD)method,
                                v2,
                                v3);
    byte_42EA3C3 = 1;
  }
  vaildGachaList = v4->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_12;
  currentIdx = v4->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (SummonControl_o *)vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !this
    || (this = (SummonControl_o *)VaildGachaInfo__HasFlag((VaildGachaInfo_o *)this, 2, 0LL),
        (summonInfoCtr = v4->fields.summonInfoCtr) == 0LL)
    || (v8 = (char)this, (this = (SummonControl_o *)summonInfoCtr->fields.summonInfoLayout) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  if ( (v8 & 1) != 0 )
    SummonInfoLayout__UpdatePc((SummonInfoLayout_o *)this, 0LL);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SummonControl__WaitBattleChrLoad(
        SummonControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA404 & 1) == 0 )
  {
    sub_B5D5C4(&SummonControl__WaitBattleChrLoad_d__249_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA404 = 1;
  }
  v5 = sub_B5D694(SummonControl__WaitBattleChrLoad_d__249_TypeInfo);
  SummonControl__WaitBattleChrLoad_d__249___ctor((SummonControl__WaitBattleChrLoad_d__249_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SummonControl___DialogCallBack_b__253_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v15; // x21
  WebViewManager_o *v16; // x0
  __int64 v17; // x1
  CommonUI_o *v18; // x19

  if ( (byte_42EA42F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_EndCloseDialogCallBack__, v11, v12, v13);
    byte_42EA42F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonControl_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v15, 0LL);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (CommonUI_o *)v16;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v18 )
LABEL_9:
    sub_B5D69C(v16, v17);
  CommonUI__maskFadein(v18, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___OnClickHisotry_b__285_0(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SummonHistoryDialog_o *historyDialog; // x0

  historyDialog = this->fields.historyDialog;
  if ( !historyDialog )
    sub_B5D69C(0LL, result);
  SummonHistoryDialog__Open(historyDialog, this->fields.currentGachaInfo, 0LL);
}


void __fastcall SummonControl___OnEndSummonEffect_b__282_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EA433 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5560/*"END_FADE"*/, (_DWORD)method, v2, v3);
    byte_42EA433 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5560/*"END_FADE"*/, 0LL);
}


void __fastcall SummonControl___SummonSceneRefresh_b__227_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_42EA42B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42EA42B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL),
        SummonControl__quit(this, v10),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_1(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EA426 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl__exeFormation_b__149_2__, v8, v9, v10);
    byte_42EA426 = 1;
  }
  MainMenuBar__SetDispBtnColliderEnable(0, 8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_2__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseTutorialArrowMark(Instance, v12, 0LL);
}


void __fastcall SummonControl___exeFormation_b__149_2(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA427 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA427 = 1;
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
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PlayMakerFSM_o *Instance; // x0
  __int64 v12; // x1
  CommonUI_o *v13; // x20

  if ( (byte_42EA432 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5559/*"END_EFFECT"*/, v8, v9, v10);
    byte_42EA432 = 1;
  }
  Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v13
    || (CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
        (Instance = this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(Instance, v12);
  }
  PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_5559/*"END_EFFECT"*/, 0LL);
}


void __fastcall SummonControl___loadAssetsForSummon_b__233_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EA42C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12496/*"START_GACHA"*/, (_DWORD)method, v2, v3);
    byte_42EA42C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12496/*"START_GACHA"*/, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_1(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EA425 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl__openAfterSummonInfo_b__148_2__, v8, v9, v10);
    byte_42EA425 = 1;
  }
  MainMenuBar__SetMenuBtnColliderEnable(0, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_2__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseTutorialNotificationDialogArrow_18227360(Instance, v12, 0LL);
}


void __fastcall SummonControl___openAfterSummonInfo_b__148_2(SummonControl_o *this, const MethodInfo *method)
{
  this->fields.tutorialKind = 3;
  SummonControl__progTutorial(this, method);
}


void __fastcall SummonControl___resetResultList_b__265_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SummonResultComponent_o *summonResultInfo; // x0
  CommonUI_o *v12; // x19

  if ( (byte_42EA431 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5577/*"END_SUMMON"*/, v8, v9, v10);
    byte_42EA431 = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonResultInfo, (System_String_o *)StringLiteral_5577/*"END_SUMMON"*/, 0LL);
  summonResultInfo = (SummonResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)summonResultInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v12 )
LABEL_12:
    sub_B5D69C(summonResultInfo, method);
  CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl___setChangeSummonInfo_b__180_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_42EA429 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12949/*"SetBannerCenter"*/, (_DWORD)method, v2, v3);
    byte_42EA429 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12949/*"SetBannerCenter"*/,
    0.1,
    0LL);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
}


void __fastcall SummonControl___setUserResourceDisp_b__156_0(
        SummonControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UILabel_o *currentStoneNumLb; // x19
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA428 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, stoneCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v6, v7, v8);
    byte_42EA428 = 1;
  }
  currentStoneNumLb = this->fields.currentStoneNumLb;
  v13 = stoneCount;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v11 = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v10, 0LL);
  if ( !currentStoneNumLb )
    sub_B5D69C(v11, v12);
  UILabel__set_text(currentStoneNumLb, v11, 0LL);
}


void __fastcall SummonControl___showConfirmDlg_b__216_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x8
  UILabel_o *ConfirmDialogPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v48; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v49; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v50; // x24
  void *cautionDlgInfo; // x8
  System_Action_o *v52; // x19
  Il2CppObject *v53; // x25
  struct SummonControl___c_StaticFields *static_fields; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  v4 = this;
  if ( (byte_42EA42A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SummonControl_BonusSelectSummonConfirmResult__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl_SetDispBtn__, v20, v21, v22);
    sub_B5D5C4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v23, v24, v25);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SummonControl___c__showConfirmDlg_b__216_1__, v29, v30, v31);
    this = (SummonControl_o *)sub_B5D5C4(&SummonControl___c_TypeInfo, v32, v33, v34);
    byte_42EA42A = 1;
  }
  bonusSelectAssetManager = v4->fields.bonusSelectAssetManager;
  if ( !bonusSelectAssetManager )
    goto LABEL_20;
  ConfirmDialogPrefab_k__BackingField = (UILabel_o *)bonusSelectAssetManager->fields._ConfirmDialogPrefab_k__BackingField;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SummonControl_o *)UnityEngine_Object__Instantiate_UILabel_(
                              ConfirmDialogPrefab_k__BackingField,
                              transform,
                              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  if ( !this )
    goto LABEL_20;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonConfirmDialog___);
  v4->fields.bonusSelectSummonConfirmDialog = (struct BonusSelectSummonConfirmDialog_o *)Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.bonusSelectSummonConfirmDialog,
    Component_srcLineSprite,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this = (SummonControl_o *)v4->fields.bonusSelectSummonConfirmDialog;
  if ( !this )
    goto LABEL_20;
  BonusSelectSummonConfirmDialog__Init(
    (BonusSelectSummonConfirmDialog_o *)this,
    v4->fields.bonusSelectAssetManager,
    0LL);
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_20;
  bonusSelectSummonConfirmDialog = v4->fields.bonusSelectSummonConfirmDialog;
  gachaId = gachaParamData->fields.gachaId;
  v48 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B5D694(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(v48, (Il2CppObject *)v4, Method_SummonControl_SetDispBtn__, 0LL);
  v49 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B5D694(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
  BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
    v49,
    (Il2CppObject *)v4,
    Method_SummonControl_BonusSelectSummonConfirmResult__,
    0LL);
  v50 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B5D694(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
    v50,
    (Il2CppObject *)v4,
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
  v52 = (System_Action_o *)*((_QWORD *)cautionDlgInfo + 4);
  if ( !v52 )
  {
    if ( (BYTE3(this->fields.summonMBannerPrefab) & 4) != 0 && !LODWORD(this->fields.summonResultInfo) )
    {
      j_il2cpp_runtime_class_init_0(this);
      cautionDlgInfo = SummonControl___c_TypeInfo->static_fields;
    }
    v53 = *(Il2CppObject **)cautionDlgInfo;
    v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v52, v53, Method_SummonControl___c__showConfirmDlg_b__216_1__, 0LL);
    static_fields = SummonControl___c_TypeInfo->static_fields;
    static_fields->__9__216_1 = v52;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__216_1,
      (System_Int32_array **)v52,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !bonusSelectSummonConfirmDialog )
LABEL_20:
    sub_B5D69C(this, method);
  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v48, v49, v50, v52, 0LL);
}


void __fastcall SummonControl___showSummonEffect_b__240_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  __int64 maskObject; // x0
  const MethodInfo *v93; // x2
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  SummonEffectComponent_o **p_summonComp; // x22
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaInfos_array *gachaResInfoList; // x8
  SummonEffectComponent_o *v106; // x8
  char v107; // w9
  struct GachaRqParamData_o *v108; // x8
  struct SummonEffectComponent_o *summonComp; // x9
  System_String_o *Value; // x0
  System_String_o *v111; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x21
  SummonControl___c_c *v113; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__240_1; // x24
  Il2CppObject *v116; // x25
  struct SummonControl___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  System_Collections_Generic_List_int__o *v125; // x24
  float v126; // s0
  struct GachaInfos_array *v127; // x8
  float v128; // s8
  il2cpp_array_size_t v129; // w20
  GachaInfos_o *v130; // x23
  bool IsCommandCode; // w0
  int32_t v132; // w26
  char v133; // w25
  int32_t Data; // w28
  int32_t v135; // w21
  char isNew; // w27
  int v137; // w27
  __int64 v138; // x21
  bool IsServant; // w25
  const MethodInfo *v140; // x2
  int v141; // w8
  WeightRate_int__o *v142; // x28
  int32_t v143; // w0
  _BOOL4 v144; // w22
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  int32_t v146; // w0
  __int64 v147; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v148; // [xsp+28h] [xbp-88h]
  ServantLimitMaster_o *v149; // [xsp+30h] [xbp-80h]
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+38h] [xbp-78h]
  int max_length; // [xsp+4Ch] [xbp-64h]

  if ( (byte_42EA42D & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SummonEffectComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantVoiceMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v35, v36, v37);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v50, v51, v52);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56, v57, v58);
    sub_B5D5C4(&SoundManager_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&Method_SummonControl___c__showSummonEffect_b__240_1__, v62, v63, v64);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v68, v69, v70);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v71, v72, v73);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v74, v75, v76);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v77, v78, v79);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_5572/*"END_PREPARATION"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_12614/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_2610/*"BGM_SUMMON_1"*/, v89, v90, v91);
    byte_42EA42D = 1;
  }
  maskObject = (__int64)this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskObject, 0, 0LL);
  SummonControl__SetDispBgParts(this, 0, v93);
  SummonControl__setDispSummonInfo(this, 0, v94);
  maskObject = (__int64)this->fields.titleInfo;
  if ( !maskObject )
    goto LABEL_90;
  TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskObject, 0, 0LL);
  SummonControl__clearResultList(this, v95);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm((System_String_o *)StringLiteral_2610/*"BGM_SUMMON_1"*/, 0LL);
  maskObject = (__int64)this->fields.summonInstance;
  if ( !maskObject )
    goto LABEL_90;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)maskObject,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SummonEffectComponent___);
  p_summonComp = &this->fields.summonComp;
  this->fields.summonComp = (struct SummonEffectComponent_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.summonComp,
    (System_Int32_array **)Component_WebViewObject,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
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
    v106 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v107 = 1;
  }
  else
  {
LABEL_16:
    v106 = *p_summonComp;
    if ( !*p_summonComp )
      goto LABEL_90;
    v107 = 0;
  }
  v106->fields.isNoSkip = v107;
  v108 = this->fields.gachaParamData;
  if ( !v108 )
    goto LABEL_90;
  summonComp = this->fields.summonComp;
  if ( !summonComp )
    goto LABEL_90;
  summonComp->fields.gachaId = v108->fields.gachaId;
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)maskObject,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  v149 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)maskObject,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  v148 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)maskObject,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  maskObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !maskObject )
    goto LABEL_90;
  maskObject = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)maskObject,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !maskObject )
    goto LABEL_90;
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)maskObject, (System_String_o *)StringLiteral_12614/*"SUMMON_SKIP_STOP_SERVANT_IDS"*/, 0LL);
  if ( Value )
  {
    v111 = Value;
    maskObject = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !maskObject )
      goto LABEL_90;
    if ( !*(_DWORD *)(maskObject + 24) )
    {
LABEL_93:
      v147 = sub_B5D6C8(maskObject);
      sub_B5D668(v147, 0LL);
    }
    *(_WORD *)(maskObject + 32) = 44;
    v112 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                  v111,
                                                                  (System_Char_array *)maskObject,
                                                                  0LL);
    v113 = SummonControl___c_TypeInfo;
    if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SummonControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
      v113 = SummonControl___c_TypeInfo;
    }
    static_fields = v113->static_fields;
    _9__240_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__240_1;
    if ( !_9__240_1 )
    {
      if ( (BYTE3(v113->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v113);
        static_fields = SummonControl___c_TypeInfo->static_fields;
      }
      v116 = (Il2CppObject *)static_fields->__9;
      _9__240_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__240_1,
        v116,
        Method_SummonControl___c__showSummonEffect_b__240_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
      v117 = SummonControl___c_TypeInfo->static_fields;
      v117->__9__240_1 = (struct System_Func_string__int__o *)_9__240_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v117->__9__240_1,
        (System_Int32_array **)_9__240_1,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
    }
    v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                  v112,
                                                                  (System_Func_TSource__TResult__o *)_9__240_1,
                                                                  (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v125 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                       v124,
                                                       (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  }
  else
  {
    v125 = 0LL;
  }
  v126 = UnityEngine_Random__get_value(0LL);
  v127 = this->fields.gachaResInfoList;
  if ( v127 )
  {
    max_length = v127->max_length;
    if ( max_length >= 1 )
    {
      v128 = v126;
      v129 = 0;
      while ( 1 )
      {
        if ( v129 >= v127->max_length )
          goto LABEL_93;
        v130 = v127->m_Items[v129];
        if ( !v130 )
          goto LABEL_90;
        IsCommandCode = SvtType__IsCommandCode(v130->fields.type, 0LL);
        method = (const MethodInfo *)(unsigned int)v130->fields.objectId;
        if ( !IsCommandCode )
          break;
        maskObject = (__int64)v148;
        if ( !v148 )
          goto LABEL_90;
        maskObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v148,
                                (int32_t)method,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( !maskObject )
          goto LABEL_90;
        v132 = *(_DWORD *)(maskObject + 64);
        v133 = 0;
LABEL_47:
        Data = 0;
        v135 = 3;
        isNew = v130->fields.isNew;
        if ( v125 )
        {
LABEL_61:
          maskObject = System_Collections_Generic_List_int___Contains(
                         v125,
                         v130->fields.objectId,
                         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          goto LABEL_87;
        }
LABEL_86:
        maskObject = 0LL;
LABEL_87:
        if ( !*p_summonComp )
          goto LABEL_90;
        SummonEffectComponent__AddSummonInfo(
          *p_summonComp,
          v130->fields.objectId,
          v130->fields.limitCount,
          v133,
          isNew,
          Data,
          v132,
          v135,
          maskObject & 1,
          v130->fields.userSvtId,
          0LL);
        if ( (int)++v129 >= max_length )
          goto LABEL_91;
        v127 = this->fields.gachaResInfoList;
        if ( !v127 )
          goto LABEL_90;
      }
      maskObject = (__int64)MasterData_WarQuestSelectionMaster;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_90;
      maskObject = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              (int32_t)method,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !maskObject )
        goto LABEL_90;
      v137 = *(_DWORD *)(maskObject + 84);
      v138 = maskObject;
      IsServant = ServantEntity__get_IsServant((ServantEntity_o *)maskObject, 0LL);
      maskObject = (__int64)v149;
      if ( !v149 )
        goto LABEL_90;
      maskObject = (__int64)ServantLimitMaster__GetEntity(v149, v130->fields.objectId, v130->fields.limitCount, 0LL);
      if ( !maskObject )
        goto LABEL_90;
      v132 = *(_DWORD *)(maskObject + 24);
      if ( !IsServant || !SummonControl__IsRankUpClassId(this, *(_DWORD *)(v138 + 80), v140) )
        goto LABEL_58;
      if ( v132 == 5 )
      {
        if ( v128 >= 0.2 )
        {
LABEL_58:
          v133 = 0;
          goto LABEL_59;
        }
      }
      else if ( v132 != 4 || v128 >= 0.4 )
      {
        goto LABEL_58;
      }
      v133 = 1;
LABEL_59:
      v141 = v137 - 3;
      v135 = 0;
      Data = 0;
      isNew = 0;
      switch ( v141 )
      {
        case 0:
        case 4:
          if ( v125 )
            goto LABEL_61;
          goto LABEL_86;
        case 3:
          v144 = v130->fields.isNew;
          isNew = v130->fields.isNew;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          maskObject = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantVoiceMaster___);
          if ( !maskObject )
            goto LABEL_90;
          SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                                  (ServantVoiceMaster_o *)maskObject,
                                  v130->fields.objectId,
                                  0LL);
          Data = 0;
          v135 = 1;
          if ( v144 && SvtEquipVoiceEntity )
          {
            p_summonComp = &this->fields.summonComp;
            if ( !v125 )
            {
              v125 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor(
                v125,
                (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
              if ( !v125 )
                goto LABEL_90;
            }
            System_Collections_Generic_List_int___Add(
              v125,
              v130->fields.objectId,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            Data = 0;
            isNew = 1;
            v135 = 1;
            goto LABEL_61;
          }
          p_summonComp = &this->fields.summonComp;
          if ( v125 )
            goto LABEL_61;
          break;
        case 5:
          Data = 0;
          isNew = 0;
          v135 = 1;
          if ( !v125 )
            goto LABEL_86;
          goto LABEL_61;
        case 8:
          goto LABEL_47;
        default:
          isNew = v130->fields.isNew;
          v142 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
          WeightRate_int____ctor(v142, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
          if ( v132 == 5 )
          {
            if ( !v142 )
              goto LABEL_90;
            WeightRate_int___setWeight(v142, 60, 0, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v142, 20, 1, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
            v135 = 2;
            WeightRate_int___setWeight(v142, 20, 2, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
            v146 = UnityEngine_Random__Range_35654020(0, v142->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v142, v146, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
            v133 &= Data == 0;
            v132 = 5;
            if ( v125 )
              goto LABEL_61;
          }
          else if ( v132 == 4 )
          {
            if ( !v142 )
              goto LABEL_90;
            WeightRate_int___setWeight(v142, 60, 0, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
            WeightRate_int___setWeight(v142, 40, 1, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
            v143 = UnityEngine_Random__Range_35654020(0, v142->fields.totalweight, 0LL);
            Data = WeightRate_int___getData(v142, v143, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
            v135 = 2;
            v133 &= Data == 0;
            v132 = 4;
            if ( v125 )
              goto LABEL_61;
          }
          else
          {
            Data = 0;
            v135 = 2;
            if ( v125 )
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
    sub_B5D69C(maskObject, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskObject, (System_String_o *)StringLiteral_5572/*"END_PREPARATION"*/, 0LL);
}


void __fastcall SummonControl___showSummonResultInfo_b__256_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantCoinConfirmDialog_o *overflowSvtCoinInfo; // x19
  GetSvtCoin_array *overflowSvtCoinInfos; // x20
  SummonControl___c_c *v13; // x0
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__256_1; // x21
  Il2CppObject *v16; // x22
  struct SummonControl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EA430 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SummonControl___c__showSummonResultInfo_b__256_1__, v5, v6, v7);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v8, v9, v10);
    byte_42EA430 = 1;
  }
  overflowSvtCoinInfo = this->fields.overflowSvtCoinInfo;
  overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
  v13 = SummonControl___c_TypeInfo;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v13 = SummonControl___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__256_1 = static_fields->__9__256_1;
  if ( !_9__256_1 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__256_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__256_1, v16, Method_SummonControl___c__showSummonResultInfo_b__256_1__, 0LL);
    v17 = SummonControl___c_TypeInfo->static_fields;
    v17->__9__256_1 = _9__256_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v17->__9__256_1,
      (System_Int32_array **)_9__256_1,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !overflowSvtCoinInfo )
    sub_B5D69C(v13, method);
  ServantCoinConfirmDialog__Open(overflowSvtCoinInfo, 2, overflowSvtCoinInfos, _9__256_1, 0LL);
}


void __fastcall SummonControl___showSvtTalk_b__247_0(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EA42E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3132/*"CLICK_OK"*/, (_DWORD)method, v2, v3);
    byte_42EA42E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3132/*"CLICK_OK"*/, 0LL);
}


void __fastcall SummonControl__autoSellSettingChange(SummonControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(0LL, v4);
  if ( !UserStatusFlag__GetAutoSaleBitFlag(SelfUserGame->fields.flag, 0LL)
    || !SummonControl__CheckQpManaOverCheck(this, v5) )
  {
    SummonControl__showConfirmDlg(this, v5);
  }
}


void __fastcall SummonControl__beforeConfirmCautionResult(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonInfoDlgComponent_o *infoDlgInfo; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42EA3F7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3F7 = 1;
  }
  infoDlgInfo = this->fields.infoDlgInfo;
  if ( !infoDlgInfo )
    sub_B5D69C(0LL, method);
  SummonInfoDlgComponent__Close(infoDlgInfo, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SummonControl__showConfirmDlg_28388360(this, 0, v6);
}


void __fastcall SummonControl__callbackGachaDraw(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  SummonControl_o *v29; // x20
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
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x8
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  __int64 v62; // x8
  System_Int32_array **v63; // x1
  __int64 v64; // x0

  v5 = this;
  if ( (byte_42EA3FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_SummonControl_resData___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v15, v16, v17);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v18, v19, v20);
    byte_42EA3FA = 1;
  }
  if ( !result )
    goto LABEL_23;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL)
    || System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    SummonControl__SendEventRequestNg(v5, v21);
    return;
  }
  v22 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (SummonControl_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                              v22,
                              (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_SummonControl_resData___);
  if ( !this )
    goto LABEL_23;
  v29 = this;
  if ( !LODWORD(this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v30 = *(_QWORD *)&this->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v30 )
    goto LABEL_23;
  v31 = *(System_Int32_array ***)(v30 + 16);
  v5->fields.gachaResInfoList = (struct GachaInfos_array *)v31;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.gachaResInfoList, v31, v23, v24, v25, v26, v27, v28);
  if ( !LODWORD(v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v38 = *(_QWORD *)&v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v38 )
    goto LABEL_23;
  v39 = *(System_Int32_array ***)(v38 + 24);
  v5->fields.canRankUpClassIds = (struct System_Int32_array *)v39;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.canRankUpClassIds, v39, v32, v33, v34, v35, v36, v37);
  if ( !LODWORD(v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v46 = *(_QWORD *)&v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v46 )
    goto LABEL_23;
  v47 = *(System_Int32_array ***)(v46 + 32);
  v5->fields.overflowSvtCoinInfos = (struct GetSvtCoin_array *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.overflowSvtCoinInfos, v47, v40, v41, v42, v43, v44, v45);
  if ( !LODWORD(v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
    goto LABEL_24;
  v54 = *(_QWORD *)&v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v54 )
    goto LABEL_23;
  v55 = *(System_Int32_array ***)(v54 + 40);
  v5->fields.extraGiftIds = (struct System_Int32_array *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.extraGiftIds, v55, v48, v49, v50, v51, v52, v53);
  if ( !LODWORD(v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_YMin) )
  {
LABEL_24:
    v64 = sub_B5D6C8(this);
    sub_B5D668(v64, 0LL);
  }
  v62 = *(_QWORD *)&v29->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Height;
  if ( !v62
    || (v63 = *(System_Int32_array ***)(v62 + 48),
        v5->fields.GachaExtraGiftList = (struct GachaExtraGifts_array *)v63,
        sub_B5D560((BattleServantConfConponent_o *)&v5->fields.GachaExtraGiftList, v63, v56, v57, v58, v59, v60, v61),
        (this = (SummonControl_o *)v5->fields.fsm) == 0LL) )
  {
LABEL_23:
    sub_B5D69C(this, result);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__callbackTutorialSet(
        SummonControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EA3FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EA3FD = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, result);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x19
  PlayMakerFSM_o *fsm; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21

  if ( (byte_42EA414 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl___c__DisplayClass269_0__checkEnhanceTresureDevice_b__0__, v11, v12, v13);
    sub_B5D5C4(&SummonControl___c__DisplayClass269_0_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9452/*"NO_EXIST"*/, v17, v18, v19);
    byte_42EA414 = 1;
  }
  v20 = sub_B5D694(SummonControl___c__DisplayClass269_0_TypeInfo);
  SummonControl___c__DisplayClass269_0___ctor((SummonControl___c__DisplayClass269_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_12;
  *(_QWORD *)(v20 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  if ( SummonControl__isEnhanceTresureDevice(this, (int32_t *)(v20 + 24), v29) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v31 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
    v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v20,
      Method_SummonControl___c__DisplayClass269_0__checkEnhanceTresureDevice_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v33, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(fsm, v22);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9452/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkEnhanceTresureDeviceNotNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EA412 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9452/*"NO_EXIST"*/, (_DWORD)method, v2, v3);
    byte_42EA412 = 1;
  }
  if ( this->fields.resType == 2 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_B5D69C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9452/*"NO_EXIST"*/, 0LL);
  }
  else
  {
    SummonControl__checkEnhanceTresureDevice(this, method);
  }
}


void __fastcall SummonControl__checkEnhanceTresureDeviceSingle(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x20
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v37; // x8
  int32_t objectId; // w21
  CommonUI_o *v39; // x19
  AvalonSceneManager_c *v40; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v42; // x21
  __int64 v43; // x0

  if ( (byte_42EA413 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDeviceSingle_b__0__, v17, v18, v19);
    sub_B5D5C4(&SummonControl___c__DisplayClass268_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9452/*"NO_EXIST"*/, v23, v24, v25);
    byte_42EA413 = 1;
  }
  v26 = sub_B5D694(SummonControl___c__DisplayClass268_0_TypeInfo);
  SummonControl___c__DisplayClass268_0___ctor((SummonControl___c__DisplayClass268_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_17;
  *(_QWORD *)(v26 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v26 + 24) = 0;
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_17;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v43 = sub_B5D6C8(Instance);
    sub_B5D668(v43, 0LL);
  }
  v37 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v37 )
    goto LABEL_17;
  objectId = v37->fields.objectId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantFlagReleaseMaster__isSecretTreasureDevice((ServantFlagReleaseMaster_o *)Instance, objectId, 0LL) )
  {
    *(_DWORD *)(v26 + 24) = objectId;
    v39 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v40 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v40 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v40->static_fields->DEFAULT_FADE_TIME;
    v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v26,
      Method_SummonControl___c__DisplayClass268_0__checkEnhanceTresureDeviceSingle_b__0__,
      0LL);
    if ( v39 )
    {
      CommonUI__maskFadeout(v39, 1, DEFAULT_FADE_TIME, v42, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(Instance, v28);
  }
  Instance = (DataManager_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9452/*"NO_EXIST"*/, 0LL);
}


void __fastcall SummonControl__checkGachaResource(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 *v12; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x8

  v4 = this;
  if ( (byte_42EA3D9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3039/*"CHECK_STONE"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12385/*"SHOW_CONFIRM_DLG"*/, v5, v6, v7);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_3036/*"CHECK_POINT"*/, v8, v9, v10);
    byte_42EA3D9 = 1;
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
LABEL_15:
    sub_B5D69C(this, method);
  switch ( gachaParamData->fields.gachaType )
  {
    case 1:
    case 7:
      this = (SummonControl_o *)v4->fields.fsm;
      if ( !this )
        goto LABEL_15;
      v12 = &StringLiteral_3039/*"CHECK_STONE"*/;
      break;
    case 3:
      summonInfoCtr = v4->fields.summonInfoCtr;
      if ( !summonInfoCtr )
        goto LABEL_15;
      this = (SummonControl_o *)v4->fields.fsm;
      if ( !this )
        goto LABEL_15;
      if ( summonInfoCtr->fields.isFree )
LABEL_12:
        v12 = &StringLiteral_12385/*"SHOW_CONFIRM_DLG"*/;
      else
        v12 = &StringLiteral_3036/*"CHECK_POINT"*/;
      break;
    case 5:
      this = (SummonControl_o *)v4->fields.fsm;
      if ( !this )
        goto LABEL_15;
      goto LABEL_12;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v12, 0LL);
}


void __fastcall SummonControl__checkGetSvtNum(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *maskBgObject; // x0

  if ( (byte_42EA401 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6958/*"GET_MULTI"*/, (_DWORD)method, v2, v3);
    byte_42EA401 = 1;
  }
  maskBgObject = this->fields.maskBgObject;
  if ( !maskBgObject
    || (UnityEngine_GameObject__SetActive(maskBgObject, 0, 0LL),
        (maskBgObject = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(maskBgObject, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)maskBgObject, (System_String_o *)StringLiteral_6958/*"GET_MULTI"*/, 0LL);
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
    sub_B5D69C(0LL, drawGachaEnt);
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
    sub_B5D69C(0LL, drawUsrGachaEnt);
  return GachaMaster__CheckIsMaxDrawNum(gachaMst, drawUsrGachaEnt, &drawGachaEnta, 0LL);
}


void __fastcall SummonControl__checkIsNewSvt(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x2
  GachaInfos_o *v10; // x8
  __int64 *v11; // x8
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42EA402 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9392/*"NEW_SVT"*/, (_DWORD)method, v2, v3);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_6971/*"GO_BACK"*/, v5, v6, v7);
    byte_42EA402 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_14;
  getSvtIdx = v4->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v12 = sub_B5D6C8(this);
    sub_B5D668(v12, 0LL);
  }
  v10 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v10 )
    goto LABEL_14;
  if ( v10->fields.isNew
    && ((int)getSvtIdx < 1 || !SummonControl__isMultipleCheck(v4, v10->fields.objectId, getSvtIdx, v3)) )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    if ( this )
    {
      v11 = &StringLiteral_9392/*"NEW_SVT"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
  this = (SummonControl_o *)v4->fields.fsm;
  if ( !this )
    goto LABEL_14;
  v11 = &StringLiteral_6971/*"GO_BACK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v11, 0LL);
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
    sub_B5D69C(this, method);
  max_length = gachaResInfoList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
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
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  unsigned int max_length; // w10
  __int64 getSvtIdx; // x9
  __int64 *v17; // x8
  GachaInfos_o *v18; // x8
  int32_t objectId; // w20
  System_String_o *v20; // x1
  __int64 v21; // x0

  v4 = this;
  if ( (byte_42EA40B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_9844/*"OLD_SVT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6429/*"FINAL_SVT"*/, v8, v9, v10);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_9392/*"NEW_SVT"*/, v11, v12, v13);
    byte_42EA40B = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_19;
  max_length = gachaResInfoList->max_length;
  getSvtIdx = v4->fields.getSvtIdx;
  if ( (int)getSvtIdx > (int)(max_length - 1) )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    if ( this )
    {
      v17 = &StringLiteral_6429/*"FINAL_SVT"*/;
LABEL_15:
      v20 = (System_String_o *)*v17;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)getSvtIdx >= max_length )
  {
    v21 = sub_B5D6C8(this);
    sub_B5D668(v21, 0LL);
  }
  v18 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v18 )
    goto LABEL_19;
  if ( !v18->fields.isNew )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    if ( this )
    {
      v17 = &StringLiteral_9844/*"OLD_SVT"*/;
      goto LABEL_15;
    }
LABEL_19:
    sub_B5D69C(this, method);
  }
  objectId = v18->fields.objectId;
  this = (SummonControl_o *)SummonControl__checkOverlapSvt(v4, objectId, v2);
  if ( !v4->fields.fsm )
    goto LABEL_19;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    v20 = (System_String_o *)StringLiteral_9844/*"OLD_SVT"*/;
LABEL_16:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, v20, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent(v4->fields.fsm, (System_String_o *)StringLiteral_9392/*"NEW_SVT"*/, 0LL);
  this = (SummonControl_o *)v4->fields.befSvtList;
  if ( !this )
    goto LABEL_19;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)this,
    objectId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B5D69C(UserGachaData, v6);
  v10 = UserGachaData[23];
  if ( v10 >= 1 )
    return v9[7] >= v10;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonControl__checkOverlapSvt(SummonControl_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  SummonControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_int__o *befSvtList; // x23
  int size; // w21
  unsigned int v11; // w22

  v5 = this;
  if ( (byte_42EA40C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, svtId, (_DWORD)method, v3);
    this = (SummonControl_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7, v8);
    byte_42EA40C = 1;
  }
  befSvtList = v5->fields.befSvtList;
  if ( !befSvtList )
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  if ( size < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( befSvtList->fields._size <= v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( befSvtList->fields._items->m_Items[v11 + 1] == svtId )
      return 1;
    if ( (int)++v11 >= size )
      return 0;
    befSvtList = v5->fields.befSvtList;
    if ( !befSvtList )
      goto LABEL_11;
  }
}


void __fastcall SummonControl__checkSummonTutorial(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  SummonInfoControl_o *summonInfoCtr; // x0
  __int64 *v20; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  CommonUI_o *v24; // x19

  if ( (byte_42EA3AB & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3101/*"CLEAR_TUTORIAL"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11268/*"RETURN_TUTORIAL"*/, v14, v15, v16);
    byte_42EA3AB = 1;
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
    if ( !TutorialFlag__Get_29295864(101, 0LL) )
    {
      v23 = 1;
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
  if ( !TutorialFlag__Get_29295864(101, 0LL) )
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
    if ( !TutorialFlag__Get_29295864(101, 0LL) )
      goto LABEL_33;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29295864(107, 0LL) )
    {
LABEL_33:
      SummonControl__setTutorialCtrEnable(this, 1, v21);
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
      SummonControl__showHelpImg(this, v22);
      summonInfoCtr = (SummonInfoControl_o *)this->fields.fsm;
      if ( !summonInfoCtr )
        goto LABEL_56;
      v20 = &StringLiteral_3101/*"CLEAR_TUTORIAL"*/;
      goto LABEL_47;
    }
    this->fields.isDoneSecTutorial = 0;
    v23 = 4;
LABEL_50:
    this->fields.tutorialKind = v23;
    SummonControl__progTutorial(this, v17);
    goto LABEL_51;
  }
  summonInfoCtr = (SummonInfoControl_o *)this->fields.fsm;
  this->fields.isDoneTutorial = 0;
  if ( !summonInfoCtr )
    goto LABEL_56;
  v20 = &StringLiteral_11268/*"RETURN_TUTORIAL"*/;
LABEL_47:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)summonInfoCtr, (System_String_o *)*v20, 0LL);
LABEL_51:
  summonInfoCtr = (SummonInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (CommonUI_o *)summonInfoCtr;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v24 )
LABEL_56:
    sub_B5D69C(summonInfoCtr, v18);
  CommonUI__maskFadein(v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonControl__checkUserServantNum(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t svtEquipKeep; // w21
  int32_t svtKeep; // w24
  BalanceConfig_c *v39; // x0
  int32_t CommandCodeFrameMax; // w25
  int32_t Value; // w0
  int32_t Count; // w0
  int32_t v43; // w20
  int v44; // w2
  __int64 v45; // x3
  SummonControl_o *v46; // x21
  BalanceConfig_c *v47; // x0
  int32_t v48; // w22
  ServantFrameShortDlgComponent_CallbackFunc_o *v49; // x23
  int32_t v50; // w3
  CommonUI_o *v51; // x0
  int32_t v52; // w1
  struct UserGameEntity_o *v53; // x8
  int32_t v54; // w22
  int32_t v55; // w21
  SummonControl_o *v56; // x20
  int32_t v57; // w2
  struct UserGameEntity_o *v58; // x8
  int32_t v59; // w21
  SummonControl_o *v60; // x20
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42EA3D1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl_closeShotCommandCodeFrameDlg__, v20, v21, v22);
    sub_B5D5C4(&Method_SummonControl_closeShotSvtEqFrameDlg__, v23, v24, v25);
    sub_B5D5C4(&Method_SummonControl_closeShotSvtFrameDlg__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_6544/*"FRIEND_GACHA_ADD_LIMIT"*/, v29, v30, v31);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_3037/*"CHECK_RESOURCE"*/, v32, v33, v34);
    byte_42EA3D1 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_44;
  if ( gachaParamData->fields.gachaType != 3 )
    goto LABEL_22;
  userGameEntity = v4->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_44;
  svtKeep = userGameEntity->fields.svtKeep;
  svtEquipKeep = userGameEntity->fields.svtEquipKeep;
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B73 = 1;
  }
  v39 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v39->static_fields->CommandCodeFrameMax;
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
  if ( !this )
    goto LABEL_44;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)this, (System_String_o *)StringLiteral_6544/*"FRIEND_GACHA_ADD_LIMIT"*/, 0LL);
  if ( Value >= 1 )
  {
    svtKeep += Value;
    svtEquipKeep += Value;
    CommandCodeFrameMax += Value;
  }
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_44;
  UserServantMaster__getCount((UserServantMaster_o *)this, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_44;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !this )
    goto LABEL_44;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)this, 0LL);
  v43 = Count;
  if ( Count < CommandCodeFrameMax && servantEquipSum[1] < svtKeep && servantEquipSum[0] < svtEquipKeep )
  {
LABEL_22:
    this = (SummonControl_o *)v4->fields.fsm;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3037/*"CHECK_RESOURCE"*/, 0LL);
      return;
    }
LABEL_44:
    sub_B5D69C(this, method);
  }
  if ( servantEquipSum[1] >= svtKeep )
  {
    this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v53 = v4->fields.userGameEntity;
    if ( !v53 )
      goto LABEL_44;
    v54 = v53->fields.svtKeep;
    v55 = servantEquipSum[1];
    v56 = this;
    v49 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    ServantFrameShortDlgComponent_CallbackFunc___ctor(
      v49,
      (Il2CppObject *)v4,
      Method_SummonControl_closeShotSvtFrameDlg__,
      0LL);
    if ( !v56 )
      goto LABEL_44;
    v51 = (CommonUI_o *)v56;
    v52 = v55;
    v57 = v54;
    v50 = 0;
  }
  else
  {
    if ( servantEquipSum[0] >= svtEquipKeep )
    {
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v58 = v4->fields.userGameEntity;
      if ( !v58 )
        goto LABEL_44;
      v48 = v58->fields.svtEquipKeep;
      v59 = servantEquipSum[0];
      v60 = this;
      v49 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v49,
        (Il2CppObject *)v4,
        Method_SummonControl_closeShotSvtEqFrameDlg__,
        0LL);
      if ( !v60 )
        goto LABEL_44;
      v50 = 1;
      v51 = (CommonUI_o *)v60;
      v52 = v59;
    }
    else
    {
      if ( Count < CommandCodeFrameMax )
        return;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v4->fields.userGameEntity )
        goto LABEL_44;
      v46 = this;
      if ( !byte_42E4B73 )
      {
        sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v44, v45);
        byte_42E4B73 = 1;
      }
      v47 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v47 = BalanceConfig_TypeInfo;
      }
      v48 = v47->static_fields->CommandCodeFrameMax;
      v49 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_B5D694(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v49,
        (Il2CppObject *)v4,
        Method_SummonControl_closeShotCommandCodeFrameDlg__,
        0LL);
      if ( !v46 )
        goto LABEL_44;
      v50 = 2;
      v51 = (CommonUI_o *)v46;
      v52 = v43;
    }
    v57 = v48;
  }
  CommonUI__OpenSvtFrameShortDlg(v51, v52, v57, v50, 0, v49, 0, 0LL);
}


void __fastcall SummonControl__checkUsrFriendPoint(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  __int64 v18; // x20
  void *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  int32_t v21; // w20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x21
  SummonConfirmDlgComponent_CallbackFunc_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_42EA3DA & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblUserMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_closeShotPointDlg__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12385/*"SHOW_CONFIRM_DLG"*/, v14, v15, v16);
    byte_42EA3DA = 1;
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AF52C4(v18);
  MasterData_WarQuestSelectionMaster = **(void ***)(v18 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  v21 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
  gachaParamData = this->fields.gachaParamData;
  this->fields.friendPoint = v21;
  if ( !gachaParamData )
    goto LABEL_17;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  this->fields.needPoint = gachaResourceNum;
  if ( v21 < gachaResourceNum )
  {
    confirmDlgInfo = this->fields.confirmDlgInfo;
    v25 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_SummonControl_closeShotPointDlg__,
      0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenShortPoint(confirmDlgInfo, v21, v25, v26);
      return;
    }
LABEL_17:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  MasterData_WarQuestSelectionMaster = this->fields.fsm;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)MasterData_WarQuestSelectionMaster,
    (System_String_o *)StringLiteral_12385/*"SHOW_CONFIRM_DLG"*/,
    0LL);
}


void __fastcall SummonControl__checkUsrStoneNum(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x10
  int32_t haveStoneNum; // w11
  int32_t gachaType; // w9
  int32_t HaveFreeStoneNum_k__BackingField; // w20
  int32_t HaveChargeStoneNum_k__BackingField; // w21
  int32_t gachaResourceNum; // w22
  int32_t v18; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v20; // x24
  const MethodInfo *v21; // x5
  SummonConfirmDlgComponent_o *v22; // x20
  int32_t haveStone; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v24; // x22
  const MethodInfo *v25; // x3

  v4 = this;
  if ( (byte_42EA3DC & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SummonControl_closeShotStoneDlg__, v5, v6, v7);
    this = (SummonControl_o *)sub_B5D5C4(&StringLiteral_12385/*"SHOW_CONFIRM_DLG"*/, v8, v9, v10);
    byte_42EA3DC = 1;
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
    v18 = HaveChargeStoneNum_k__BackingField;
  else
    v18 = haveStoneNum;
  v4->fields.needStone = gachaResourceNum;
  if ( v18 >= gachaResourceNum )
  {
    this = (SummonControl_o *)v4->fields.fsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12385/*"SHOW_CONFIRM_DLG"*/, 0LL);
  }
  else
  {
    if ( gachaType == 7 )
    {
      confirmDlgInfo = v4->fields.confirmDlgInfo;
      v20 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v4,
        Method_SummonControl_closeShotStoneDlg__,
        0LL);
      if ( confirmDlgInfo )
      {
        SummonConfirmDlgComponent__OpenShortChargeStone(
          confirmDlgInfo,
          gachaResourceNum,
          HaveChargeStoneNum_k__BackingField,
          HaveFreeStoneNum_k__BackingField,
          v20,
          v21);
        return;
      }
LABEL_16:
      sub_B5D69C(this, method);
    }
    SummonControl__SetupFragmentsExchangeButton(v4, method);
    v22 = v4->fields.confirmDlgInfo;
    haveStone = v4->fields.haveStone;
    v24 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)v4,
      Method_SummonControl_closeShotStoneDlg__,
      0LL);
    if ( !v22 )
      goto LABEL_16;
    SummonConfirmDlgComponent__OpenShortStone(v22, haveStone, v24, v25);
  }
}


void __fastcall SummonControl__checkValidGachaList(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t userId; // x20
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x21
  GachaReleaseMaster_o *v32; // x22
  const MethodInfo *v33; // x2
  struct GachaEntity_array *useGachaData; // x8
  __int64 v35; // x26
  int max_length; // w9
  GachaEntity_o *v37; // x24
  const MethodInfo *v38; // x3
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x3
  int32_t beforeGachaId; // w1
  SummonControl_o *v43; // x25
  UserGachaEntity_o *UserGachaData; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *vaildGachaList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v46; // x21
  __int64 v47; // x0
  StoryGachaAdjustData_o *adjustData; // [xsp+8h] [xbp-58h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_42EA3B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_VaildGachaInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_VaildGachaInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaReleaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_SummonControl_SlotCompare__, v23, v24, v25);
    this = (SummonControl_o *)sub_B5D5C4(&TutorialFlag_TypeInfo, v26, v27, v28);
    byte_42EA3B7 = 1;
  }
  entity = 0LL;
  adjustData = 0LL;
  userGameEntity = v4->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_39;
  userId = userGameEntity->fields.userId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
  this = (SummonControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  entity = 0LL;
  if ( !v4->fields.vaildGachaList )
    goto LABEL_39;
  v32 = (GachaReleaseMaster_o *)this;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->fields.vaildGachaList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  useGachaData = v4->fields.useGachaData;
  if ( !useGachaData )
    goto LABEL_39;
  v35 = 0LL;
  while ( 1 )
  {
    max_length = useGachaData->max_length;
    if ( (int)v35 >= max_length )
      break;
    if ( (unsigned int)v35 >= max_length )
    {
      v47 = sub_B5D6C8(this);
      sub_B5D668(v47, 0LL);
    }
    v37 = useGachaData->m_Items[v35];
    if ( !v37 || !Master_WarQuestSelectionMaster )
      goto LABEL_39;
    this = (SummonControl_o *)UserQuestMaster__TryGetEntity(
                                Master_WarQuestSelectionMaster,
                                &entity,
                                userId,
                                v37->fields.condQuestId,
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
      if ( (int)this >= v37->fields.condQuestPhase )
      {
LABEL_19:
        if ( !v32 )
          goto LABEL_39;
        this = (SummonControl_o *)GachaReleaseMaster__IsEnableRelease(v32, v37->fields.id, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v39 = SummonControl__CheckStoryGachaAdjustData(this, &adjustData, v37->fields.id, v38);
          if ( !v39 )
            adjustData = 0LL;
          beforeGachaId = v37->fields.beforeGachaId;
          if ( beforeGachaId > 0 )
          {
            this = (SummonControl_o *)SummonControl__getUserGachaData((SummonControl_o *)v39, beforeGachaId, v40);
            if ( !this )
              goto LABEL_38;
            v43 = this;
            this = (SummonControl_o *)SummonControl__getCurrentGachaData(v4, v37->fields.beforeGachaId, v33);
            if ( !this )
              goto LABEL_39;
            if ( SLODWORD(v43->fields.TUTORIAL_SUMMON_ARROW_RECT.fields.m_Width) < *((_DWORD *)&this->fields.TUTORIAL_FORMATION_ARROW_POS
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
            UserGachaData = SummonControl__getUserGachaData(this, v37->fields.id, v33);
            if ( UserGachaData )
            {
              this = (SummonControl_o *)SummonControl__checkIsMaxDrawNum(v4, UserGachaData, v37, v41);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_38;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)v37->fields.gachaGroupId;
              if ( (int)method >= 1 )
              {
                this = (SummonControl_o *)v4->fields.gachaMst;
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
          SummonControl__AddVaildGachaInfoList(v4, v37, adjustData, v41);
        }
      }
    }
LABEL_38:
    useGachaData = v4->fields.useGachaData;
    ++v35;
    if ( !useGachaData )
      goto LABEL_39;
  }
  SummonControl__ExtractVaildGachaInfoOnPriority(this, &v4->fields.vaildGachaList, v33);
  vaildGachaList = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v4->fields.vaildGachaList;
  v46 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_VaildGachaInfo__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v46,
    (Il2CppObject *)v4,
    Method_SummonControl_SlotCompare__,
    (const MethodInfo_249B1FC *)Method_System_Comparison_VaildGachaInfo___ctor__);
  if ( !vaildGachaList )
LABEL_39:
    sub_B5D69C(this, method);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    vaildGachaList,
    (System_Comparison_T__o *)v46,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_VaildGachaInfo__Sort__);
}


void __fastcall SummonControl__clearBannerList(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int v6; // w20
  bool v7; // cc
  int32_t v8; // w21
  int32_t childCount; // w20
  UnityEngine_Object_o *gameObject; // x22
  bool v11; // vf
  int32_t v12; // w20
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w20
  UnityEngine_Object_o *v15; // x21

  if ( (byte_42EA3CF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3CF = 1;
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
  v6 = (int)bannerLoopCtr;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)this->fields.sliderGrid,
                                               0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v8 = v6 - 1;
  v7 = v6 < 1;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  if ( !v7 )
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
                                                   v8,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      if ( --v8 < 0 )
        goto LABEL_15;
    }
LABEL_34:
    sub_B5D69C(bannerLoopCtr, method);
  }
LABEL_15:
  v11 = __OFSUB__(childCount, 1);
  v12 = childCount - 1;
  if ( v12 < 0 == v11 )
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
                                                   v12,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v13, 0LL);
    }
    while ( --v12 >= 0 );
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.summonMBannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v14 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL) - 1;
  if ( v14 >= 0 )
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
                                                   v14,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v15, 0LL);
      if ( --v14 < 0 )
        return;
    }
    goto LABEL_34;
  }
}


void __fastcall SummonControl__clearResultList(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SummonResultComponent_o *summonResultInfo; // x0
  System_Collections_Generic_List_int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EA40F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42EA40F = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  if ( !summonResultInfo
    || (SummonResultComponent__clearResultList(summonResultInfo, 0LL),
        (summonResultInfo = this->fields.summonResultInfo) == 0LL)
    || (summonResultInfo = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)summonResultInfo,
                                                        0LL)) == 0LL )
  {
    sub_B5D69C(summonResultInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonResultInfo, 0, 0LL);
  this->fields.isResult = 0;
  this->fields.getSvtIdx = 0;
  v9 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.befSvtList = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.befSvtList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall SummonControl__close(SummonControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SummonControl__WaitBattleChrLoad(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall SummonControl__closeShotCommandCodeFrameDlg(
        SummonControl_o *this,
        int32_t res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CommonUI_o *Instance; // x0
  __int64 v22; // x1
  AvalonSceneManager_o *v23; // x19
  SceneJumpInfo_o *v24; // x20

  if ( (byte_42EA3D4 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v18, v19, v20);
    byte_42EA3D4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
      v23 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v24 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_17509080(v24, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 2, 0LL);
      if ( v23 )
      {
        AvalonSceneManager__transitionScene(v23, 22, 1, (Il2CppObject *)v24, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(Instance, v22);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotPointDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0

  if ( (byte_42EA3DB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v5, v6, v7);
    byte_42EA3DB = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_9;
  SummonConfirmDlgComponent__Close_28355800(confirmDlgInfo, 0LL, method);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  confirmDlgInfo = (SummonConfirmDlgComponent_o *)this->fields.fsm;
  if ( !confirmDlgInfo )
LABEL_9:
    sub_B5D69C(confirmDlgInfo, res);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__closeShotStoneDlg(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  __int64 *v13; // x8

  if ( (byte_42EA3DD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6973/*"GO_BUY_STONE"*/, v9, v10, v11);
    byte_42EA3DD = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_17;
  SummonConfirmDlgComponent__Close_28355800(confirmDlgInfo, 0LL, method);
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
      v13 = &StringLiteral_3107/*"CLICK_CANCEL"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_B5D69C(confirmDlgInfo, res);
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
  v13 = &StringLiteral_6973/*"GO_BUY_STONE"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)*v13, 0LL);
}


void __fastcall SummonControl__closeShotSvtEqFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  CommonUI_o *Instance; // x0
  __int64 v28; // x1
  AvalonSceneManager_o *v29; // x19
  SceneJumpInfo_o *v30; // x20
  int32_t v31; // w1

  if ( (byte_42EA3D3 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12862/*"ServantEquipList"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12861/*"ServantEQCombine"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v24, v25, v26);
    byte_42EA3D3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
        v29 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v30 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17509080(v30, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 1, 0LL);
        if ( v29 )
        {
          v31 = 22;
          goto LABEL_25;
        }
      }
LABEL_31:
      sub_B5D69C(Instance, v28);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
        v29 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v30 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17508984(v30, (System_String_o *)StringLiteral_12862/*"ServantEquipList"*/, 0LL);
        if ( v29 )
        {
          v31 = 71;
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
        v29 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v30 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17508984(v30, (System_String_o *)StringLiteral_12861/*"ServantEQCombine"*/, 0LL);
        if ( v29 )
        {
          v31 = 32;
LABEL_25:
          AvalonSceneManager__transitionScene(v29, v31, 1, (Il2CppObject *)v30, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
}


void __fastcall SummonControl__closeShotSvtFrameDlg(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  CommonUI_o *Instance; // x0
  __int64 v25; // x1
  WebViewManager_o *v26; // x19
  SceneJumpInfo_o *v27; // x20
  int32_t v28; // w1
  Il2CppObject *v29; // x3

  if ( (byte_42EA3D2 & 1) == 0 )
  {
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12858/*"ServantCombine"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v21, v22, v23);
    byte_42EA3D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
        v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v27 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17509080(v27, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0, 0LL);
        if ( v26 )
        {
          v28 = 22;
          goto LABEL_19;
        }
      }
LABEL_32:
      sub_B5D69C(Instance, v25);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( Instance )
        {
          v28 = 71;
          v29 = 0LL;
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
        v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        v27 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17508984(v27, (System_String_o *)StringLiteral_12858/*"ServantCombine"*/, 0LL);
        if ( v26 )
        {
          v28 = 32;
LABEL_19:
          Instance = (CommonUI_o *)v26;
          v29 = (Il2CppObject *)v27;
LABEL_26:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v28, 1, v29, 0LL);
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmCautionResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  SummonCautionDlgComponent_o *cautionDlgInfo; // x0
  const MethodInfo *v34; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  struct GachaRqParamData_o *v36; // x8
  BonusSelectSummonConfirmDialog_o *bonusSelectSummonConfirmDialog; // x20
  int32_t gachaId; // w21
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v39; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v40; // x23
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v41; // x24

  if ( (byte_42EA3F5 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&SoundManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SummonControl_BonusSelectSummonConfirmResult__, v18, v19, v20);
    sub_B5D5C4(&Method_SummonControl_SetDispBtn__, v21, v22, v23);
    sub_B5D5C4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v24, v25, v26);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v30, v31, v32);
    byte_42EA3F5 = 1;
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
    cautionDlgInfo = (SummonCautionDlgComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
    gachaParamData = this->fields.gachaParamData;
    if ( gachaParamData )
    {
      if ( cautionDlgInfo )
      {
        cautionDlgInfo = (SummonCautionDlgComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          (DataMasterBase_WarMaster__WarEntity__int__o *)cautionDlgInfo,
                                                          gachaParamData->fields.gachaId,
                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
              v36 = this->fields.gachaParamData;
              if ( v36 )
              {
                bonusSelectSummonConfirmDialog = this->fields.bonusSelectSummonConfirmDialog;
                gachaId = v36->fields.gachaId;
                v39 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B5D694(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v39,
                  (Il2CppObject *)this,
                  Method_SummonControl_SetDispBtn__,
                  0LL);
                v40 = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)sub_B5D694(BonusSelectSummonConfirmDialog_ClickDelegate_TypeInfo);
                BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
                  v40,
                  (Il2CppObject *)this,
                  Method_SummonControl_BonusSelectSummonConfirmResult__,
                  0LL);
                v41 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)sub_B5D694(BonusSelectSummonConfirmDialog_TryGetBonusSelectData_TypeInfo);
                BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
                  v41,
                  (Il2CppObject *)this,
                  Method_SummonControl_TryGetSelectBonusDataInfo__,
                  0LL);
                if ( bonusSelectSummonConfirmDialog )
                {
                  BonusSelectSummonConfirmDialog__Open(bonusSelectSummonConfirmDialog, gachaId, v39, v40, v41, 0LL, 0LL);
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
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)cautionDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(cautionDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__loadAssetsForSummon(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__confirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EA3F4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v6, v7, v8);
    byte_42EA3F4 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close_28355800(confirmDlgInfo, 0LL, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(confirmDlgInfo, res);
  }
  MainMenuBar__setMenuActive(0, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__loadAssetsForSummon(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__createSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x1
  UnityEngine_Object_o *bannerLoopCtr; // x20
  UnityEngine_Component_o **p_bannerLoopCtr; // x27
  UnityEngine_Component_o *summonBannerScrollView; // x0
  System_Int32_array **v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UnityEngine_Object_o *centerChild; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  System_Int32_array **v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  struct UICenterOnChild_o *v123; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v126; // x22
  System_Int32_array **v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x8
  struct UIScrollView_o *v135; // x21
  BattleServantConfConponent_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v138; // x22
  System_Int32_array **v139; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  int32_t width; // w20
  int32_t height; // w0
  float v149; // s0
  UnityEngine_Component_o *v150; // x20
  UnityEngine_Object_o *summonMBannerLoopCtr; // x20
  struct UIWrapContent_o **p_summonMBannerLoopCtr; // x22
  System_Int32_array **v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  UnityEngine_Object_o *summonMBannerCenterChild; // x20
  struct UICenterOnChild_o **p_summonMBannerCenterChild; // x21
  System_Int32_array **v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  struct UICenterOnChild_o *v169; // x21
  BattleServantConfConponent_o *v170; // x21
  System_Delegate_o *v171; // t1
  SpringPanel_OnFinished_o *v172; // x22
  System_Int32_array **v173; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  struct UIScrollView_o *summonMBannerScrollView; // x21
  BattleServantConfConponent_o *v181; // x21
  System_Delegate_o *v182; // t1
  UIScrollView_OnDragNotification_o *v183; // x22
  System_Int32_array **v184; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  int v191; // w23
  int v192; // w22
  UnityEngine_GameObject_o *summonBannerPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v195; // x26
  UnityEngine_Transform_o *v196; // x20
  int v197; // s0
  UnityEngine_Transform_o *v200; // x21
  int v201; // s0
  int v204; // w27
  System_String_o *v205; // x0
  System_String_o *v206; // x0
  System_String_o *v207; // x0
  System_String_o *v208; // x0
  GachaBannerComponent_o *v209; // x28
  struct System_Collections_Generic_List_VaildGachaInfo__o *v210; // x20
  int v211; // w8
  int v212; // w9
  int32_t v213; // w25
  VaildGachaInfo_o *v214; // x8
  System_String_o *v215; // x0
  System_String_o *v216; // x21
  const MethodInfo *v217; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v218; // x20
  UnityEngine_Object_o *v219; // x22
  VaildGachaInfo_o *v220; // x24
  System_String_o *v221; // x5
  UnityEngine_GameObject_o *summonMBannerPrefab; // x20
  UnityEngine_Transform_o *v223; // x0
  UnityEngine_GameObject_o *v224; // x28
  UnityEngine_Transform_o *v225; // x20
  int v226; // s0
  UnityEngine_Transform_o *v229; // x21
  int v230; // s0
  System_String_o *name; // x0
  SummonMiniBannerComponent_o *v234; // x26
  struct System_Collections_Generic_List_VaildGachaInfo__o *v235; // x20
  VaildGachaInfo_o *v236; // x8
  System_String_o *v237; // x0
  System_String_o *v238; // x21
  const MethodInfo *v239; // x2
  UnityEngine_Object_o *v240; // x28
  const MethodInfo *v241; // x2
  WebViewObject_o *Component_WebViewObject; // x22
  SummonMiniBannerComponent_CallbackFunc_o *v243; // x20
  bool v244; // cc
  struct UIGrid_o *sliderGrid; // x8
  float v246; // s8
  int v247; // w22
  UnityEngine_GameObject_o *slideIndexPrefab; // x20
  UnityEngine_Transform_o *v249; // x0
  UnityEngine_Transform_o *v250; // x20
  int v251; // s0
  const MethodInfo *v254; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *v255; // x21
  __int64 currentIdx; // x22
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *v258; // x21
  SummonInfoControl_ClickDelegate_o *v259; // x22
  const MethodInfo *v260; // x2
  const MethodInfo *v261; // x1
  SummonControl_o *v262; // x0
  const MethodInfo *v263; // x1
  int v264; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_summonMBannerInfoList; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_bannerInfoList; // [xsp+28h] [xbp-78h]
  UnityEngine_Component_o **v267; // [xsp+30h] [xbp-70h]
  int size; // [xsp+3Ch] [xbp-64h]
  int32_t moveIdx; // [xsp+48h] [xbp-58h]
  int v270; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v271; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA3BD & 1) == 0 )
  {
    sub_B5D5C4(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SummonInfoControl_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UIWrapContent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBannerComponent__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBannerComponent___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_GachaBannerComponent__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&UIScrollView_OnDragNotification_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&SpringPanel_OnFinished_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_SummonControl_OnCenterOnChildFinishedMBanner__, v56, v57, v58);
    sub_B5D5C4(&Method_SummonControl_OnCenterOnChildFinished__, v59, v60, v61);
    sub_B5D5C4(&Method_SummonControl_OnClickMiniBanner__, v62, v63, v64);
    sub_B5D5C4(&Method_SummonControl_OnDragStarted__, v65, v66, v67);
    sub_B5D5C4(&Method_SummonControl_exeSummon__, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_19887/*"img_summon_"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_19889/*"img_summon_mini_236"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_19888/*"img_summon_mini_"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_1/*""*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_1026/*"1"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v86, v87, v88);
    byte_42EA3BD = 1;
  }
  v270 = 0;
  v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaBannerComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v89,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaBannerComponent___ctor__);
  this->fields.bannerInfoList = (struct System_Collections_Generic_List_GachaBannerComponent__o *)v89;
  p_bannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.bannerInfoList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bannerInfoList,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SummonMiniBannerComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v96,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SummonMiniBannerComponent___ctor__);
  this->fields.summonMBannerInfoList = (struct System_Collections_Generic_List_SummonMiniBannerComponent__o *)v96;
  p_summonMBannerInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.summonMBannerInfoList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.summonMBannerInfoList,
    (System_Int32_array **)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
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
      v107 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      (UnityEngine_GameObject_o *)summonBannerScrollView,
                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_bannerLoopCtr = (UnityEngine_Component_o *)v107;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.bannerLoopCtr, v107, v108, v109, v110, v111, v112, v113);
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
      v116 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      (UnityEngine_GameObject_o *)summonBannerScrollView,
                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_centerChild = (struct UICenterOnChild_o *)v116;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.centerChild, v116, v117, v118, v119, v120, v121, v122);
    }
    v123 = *p_centerChild;
    if ( !v123 )
      goto LABEL_105;
    onFinished = (System_Delegate_o *)v123->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v123->fields.onFinished;
    v126 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(v126, (Il2CppObject *)this, Method_SummonControl_OnCenterOnChildFinished__, 0LL);
    v127 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v126, 0LL);
    v134 = v127;
    if ( v127 && *v127 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      goto LABEL_122;
    p_onFinished->klass = (BattleServantConfConponent_c *)v127;
    sub_B5D560(p_onFinished, v127, v128, v129, v130, v131, v132, v133);
    v135 = this->fields.summonBannerScrollView;
    if ( !v135 )
      goto LABEL_105;
    onDragFinished = (System_Delegate_o *)v135->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&v135->fields.onDragFinished;
    v138 = (UIScrollView_OnDragNotification_o *)sub_B5D694(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(v138, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v139 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v138, 0LL);
    v134 = v139;
    if ( v139 )
    {
      if ( *v139 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_122;
    }
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v139;
    sub_B5D560(p_onDragFinished, v139, v140, v141, v142, v143, v144, v145);
    vaildGachaList = this->fields.vaildGachaList;
    if ( !vaildGachaList )
      goto LABEL_105;
    size = vaildGachaList->fields._size;
    width = UnityEngine_Screen__get_width(0LL);
    height = UnityEngine_Screen__get_height(0LL);
    v149 = UnityEngine_Mathf__Clamp((float)width / (float)height, 1.7778, 2.3333, 0LL);
    v150 = *p_bannerLoopCtr;
    summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Mathf__FloorToInt(
                                                          (float)((float)(v149 / 1.7778) * 1024.0) + 4.0,
                                                          0LL);
    if ( !v150 )
      goto LABEL_105;
    LODWORD(v150[1].klass) = (_DWORD)summonBannerScrollView;
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
      v153 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      (UnityEngine_GameObject_o *)summonBannerScrollView,
                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UIWrapContent___);
      *p_summonMBannerLoopCtr = (struct UIWrapContent_o *)v153;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerLoopCtr,
        v153,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
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
      v162 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                      (UnityEngine_GameObject_o *)summonBannerScrollView,
                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
      *p_summonMBannerCenterChild = (struct UICenterOnChild_o *)v162;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.summonMBannerCenterChild,
        v162,
        v163,
        v164,
        v165,
        v166,
        v167,
        v168);
    }
    v169 = *p_summonMBannerCenterChild;
    v267 = (UnityEngine_Component_o **)&this->fields.summonMBannerLoopCtr;
    if ( !v169 )
      goto LABEL_105;
    v171 = (System_Delegate_o *)v169->fields.onFinished;
    v170 = (BattleServantConfConponent_o *)&v169->fields.onFinished;
    v172 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v172,
      (Il2CppObject *)this,
      Method_SummonControl_OnCenterOnChildFinishedMBanner__,
      0LL);
    v173 = (System_Int32_array **)System_Delegate__Combine(v171, (System_Delegate_o *)v172, 0LL);
    v134 = v173;
    if ( v173 )
    {
      if ( *v173 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
        goto LABEL_122;
    }
    v170->klass = (BattleServantConfConponent_c *)v173;
    sub_B5D560(v170, v173, v174, v175, v176, v177, v178, v179);
    summonMBannerScrollView = this->fields.summonMBannerScrollView;
    if ( !summonMBannerScrollView )
      goto LABEL_105;
    v182 = (System_Delegate_o *)summonMBannerScrollView->fields.onDragFinished;
    v181 = (BattleServantConfConponent_o *)&summonMBannerScrollView->fields.onDragFinished;
    v183 = (UIScrollView_OnDragNotification_o *)sub_B5D694(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(v183, (Il2CppObject *)this, Method_SummonControl_OnDragStarted__, 0LL);
    v184 = (System_Int32_array **)System_Delegate__Combine(v182, (System_Delegate_o *)v183, 0LL);
    v134 = v184;
    if ( v184 && *v184 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
    {
LABEL_122:
      v262 = (SummonControl_o *)sub_B5D990(v134);
      SummonControl__setPositionByWarId(v262, v263);
    }
    else
    {
      v191 = size;
      v181->klass = (BattleServantConfConponent_c *)v184;
      sub_B5D560(v181, v184, v185, v186, v187, v188, v189, v190);
      if ( 2 * size >= 1 )
      {
        v192 = 0;
        v264 = (size & 0x7FFFFFFF) - size;
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
          v195 = (UnityEngine_GameObject_o *)summonBannerScrollView;
          v196 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v197 = UnityEngine_Vector3__get_one(0LL);
          if ( !v196 )
            break;
          UnityEngine_Transform__set_localScale(v196, *(UnityEngine_Vector3_o *)&v197, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v195, 0LL);
          if ( !*p_bannerLoopCtr )
            break;
          v200 = (UnityEngine_Transform_o *)summonBannerScrollView;
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                *p_bannerLoopCtr,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          *(UnityEngine_Vector3_o *)&v201 = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)summonBannerScrollView,
                                              0LL);
          if ( !v200 )
            break;
          UnityEngine_Transform__set_localPosition(v200, *(UnityEngine_Vector3_o *)&v201, 0LL);
          v204 = v192 + 1;
          v270 = v192 + 1;
          v205 = System_Int32__ToString((int32_t)&v270, 0LL);
          v206 = System_String__Concat_44577788((System_String_o *)StringLiteral_973/*"0"*/, v205, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v195, v206, 0LL);
          if ( v270 >= 10 )
          {
            v207 = System_Int32__ToString((int32_t)&v270, 0LL);
            v208 = System_String__Concat_44577788((System_String_o *)StringLiteral_1026/*"1"*/, v207, 0LL);
            UnityEngine_Object__set_name((UnityEngine_Object_o *)v195, v208, 0LL);
          }
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v195,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_GachaBannerComponent___);
          if ( !*p_bannerInfoList )
            break;
          v209 = (GachaBannerComponent_o *)summonBannerScrollView;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_bannerInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summonBannerScrollView,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaBannerComponent__Add__);
          v210 = this->fields.vaildGachaList;
          v211 = v264 + v192;
          v212 = v264 + v192 <= size - 1 ? 0 : v191;
          if ( !v210 )
            break;
          v213 = v211 - v212;
          if ( v210->fields._size <= (unsigned int)(v211 - v212) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          moveIdx = v192;
          v214 = v210->fields._items->m_Items[v213];
          if ( !v214 )
            break;
          v215 = System_Int32__ToString((int)v214 + 40, 0LL);
          v216 = System_String__Concat_44577788((System_String_o *)StringLiteral_19887/*"img_summon_"*/, v215, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)SummonControl__searchBannerImg(this, v216, v217);
          v218 = this->fields.vaildGachaList;
          if ( !v218 )
            break;
          v219 = (UnityEngine_Object_o *)summonBannerScrollView;
          if ( v218->fields._size <= (unsigned int)v213 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v220 = v218->fields._items->m_Items[v213];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v219, 0LL, 0LL);
          if ( !v209 )
            break;
          v221 = ((unsigned __int8)summonBannerScrollView & 1) != 0 ? (System_String_o *)StringLiteral_1/*""*/ : v216;
          GachaBannerComponent__setBannerGachaInfo(
            v209,
            v220,
            v213,
            moveIdx,
            (UnityEngine_GameObject_o *)v219,
            v221,
            0LL);
          summonBannerScrollView = *v267;
          if ( !*v267 )
            break;
          summonMBannerPrefab = this->fields.summonMBannerPrefab;
          v223 = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                summonMBannerPrefab,
                                                                v223,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v224 = (UnityEngine_GameObject_o *)summonBannerScrollView;
          v225 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v226 = UnityEngine_Vector3__get_one(0LL);
          if ( !v225 )
            break;
          UnityEngine_Transform__set_localScale(v225, *(UnityEngine_Vector3_o *)&v226, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v224, 0LL);
          if ( !*v267 )
            break;
          v229 = (UnityEngine_Transform_o *)summonBannerScrollView;
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(*v267, 0LL);
          if ( !summonBannerScrollView )
            break;
          *(UnityEngine_Vector3_o *)&v230 = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)summonBannerScrollView,
                                              0LL);
          if ( !v229 )
            break;
          UnityEngine_Transform__set_localPosition(v229, *(UnityEngine_Vector3_o *)&v230, 0LL);
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v195, 0LL);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v224, name, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v224,
                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SummonMiniBannerComponent___);
          if ( !*p_summonMBannerInfoList )
            break;
          v234 = (SummonMiniBannerComponent_o *)summonBannerScrollView;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_summonMBannerInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)summonBannerScrollView,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SummonMiniBannerComponent__Add__);
          v235 = this->fields.vaildGachaList;
          if ( !v235 )
            break;
          if ( v235->fields._size <= (unsigned int)v213 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v236 = v235->fields._items->m_Items[v213];
          if ( !v236 )
            break;
          v237 = System_Int32__ToString((int)v236 + 40, 0LL);
          v238 = System_String__Concat_44577788((System_String_o *)StringLiteral_19888/*"img_summon_mini_"*/, v237, 0LL);
          v240 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(this, v238, v239);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v240, 0LL, 0LL) )
          {
            v238 = (System_String_o *)StringLiteral_19889/*"img_summon_mini_236"*/;
            v240 = (UnityEngine_Object_o *)SummonControl__searchBannerImg(
                                             this,
                                             (System_String_o *)StringLiteral_19889/*"img_summon_mini_236"*/,
                                             v241);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v240, 0LL, 0LL) )
              v238 = (System_String_o *)StringLiteral_1/*""*/;
          }
          summonBannerScrollView = (UnityEngine_Component_o *)this->fields.summonMBannerScrollView;
          if ( !summonBannerScrollView )
            break;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      summonBannerScrollView,
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          v243 = (SummonMiniBannerComponent_CallbackFunc_o *)sub_B5D694(SummonMiniBannerComponent_CallbackFunc_TypeInfo);
          SummonMiniBannerComponent_CallbackFunc___ctor(
            v243,
            (Il2CppObject *)this,
            Method_SummonControl_OnClickMiniBanner__,
            0LL);
          if ( !v234 )
            break;
          SummonMiniBannerComponent__SetBannerInfo(
            v234,
            v220,
            v213,
            moveIdx,
            (UnityEngine_GameObject_o *)v240,
            v238,
            v243,
            (UIPanel_o *)Component_WebViewObject,
            0LL);
          v192 = v204;
          v191 = size;
          v244 = v204 < 2 * size;
          p_bannerLoopCtr = (UnityEngine_Component_o **)&this->fields.bannerLoopCtr;
          if ( !v244 )
            goto LABEL_97;
        }
LABEL_105:
        sub_B5D69C(summonBannerScrollView, v103);
      }
LABEL_97:
      sliderGrid = this->fields.sliderGrid;
      if ( !sliderGrid )
        goto LABEL_105;
      sliderGrid->fields.cellHeight = fminf(640.0 / (float)v191, 25.0);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      v246 = *(float *)&summonBannerScrollView[1].fields.m_CachedPtr;
      if ( v191 >= 1 )
      {
        v247 = 0;
        do
        {
          slideIndexPrefab = this->fields.slideIndexPrefab;
          v249 = UnityEngine_Component__get_transform(summonBannerScrollView, 0LL);
          summonBannerScrollView = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                                (BaseMonoBehaviour_o *)this,
                                                                slideIndexPrefab,
                                                                v249,
                                                                0LL,
                                                                0LL);
          if ( !summonBannerScrollView )
            break;
          v250 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)summonBannerScrollView, 0LL);
          *(UnityEngine_Vector3_o *)&v251 = UnityEngine_Vector3__get_one(0LL);
          if ( !v250 )
            break;
          UnityEngine_Transform__set_localScale(v250, *(UnityEngine_Vector3_o *)&v251, 0LL);
          if ( ++v247 >= v191 )
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
      summonBannerScrollView = *v267;
      if ( !*v267 )
        goto LABEL_105;
      UIWrapContent__SortAlphabetically((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v267;
      if ( !*v267 )
        goto LABEL_105;
      UIWrapContent__resetScroll((UIWrapContent_o *)summonBannerScrollView, 0LL);
      summonBannerScrollView = *v267;
      if ( !*v267 )
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
      v271.fields.z = this->fields.center.fields.z;
      v271.fields.y = this->fields.center.fields.y;
      v271.fields.x = -(float)((float)(v246 * 0.5) * (float)(v191 - 1));
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerScrollView, v271, 0LL);
      summonBannerScrollView = (UnityEngine_Component_o *)this->fields.sliderGrid;
      if ( !summonBannerScrollView )
        goto LABEL_105;
      UIGrid__set_repositionNow((UIGrid_o *)summonBannerScrollView, 1, 0LL);
      SummonControl__UpdateSummonInfoControlLayout(this, v254);
      v255 = this->fields.vaildGachaList;
      if ( !v255 )
        goto LABEL_105;
      currentIdx = this->fields.currentIdx;
      summonInfoCtr = this->fields.summonInfoCtr;
      if ( v255->fields._size <= (unsigned int)currentIdx )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v258 = v255->fields._items->m_Items[currentIdx];
      v259 = (SummonInfoControl_ClickDelegate_o *)sub_B5D694(SummonInfoControl_ClickDelegate_TypeInfo);
      SummonInfoControl_ClickDelegate___ctor(v259, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
      if ( !summonInfoCtr )
        goto LABEL_105;
      SummonInfoControl__SetSummonInfo(summonInfoCtr, v258, v259, 0LL);
      SummonControl__setSliderIcon(this, this->fields.currentIdx, v260);
      SummonControl__setResourceInfo(this, v261);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *bannerLoopCtr; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w0
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w20
  UnityEngine_Object_o *v13; // x21

  if ( (byte_42EA41A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA41A = 1;
  }
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.bannerLoopCtr;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  v7 = childCount - 1;
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
                                                   v7,
                                                   0LL);
      if ( !bannerLoopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_34:
    sub_B5D69C(bannerLoopCtr, method);
  }
LABEL_13:
  bannerLoopCtr = (UnityEngine_Component_o *)this->fields.sliderGrid;
  if ( !bannerLoopCtr )
    goto LABEL_34;
  bannerLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(bannerLoopCtr, 0LL);
  if ( !bannerLoopCtr )
    goto LABEL_34;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bannerLoopCtr, 0LL);
  v10 = v9 - 1;
  if ( v9 >= 1 )
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
      UnityEngine_Object__DestroyImmediate_35620448(v11, 0LL);
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
                                                   v12,
                                                   0LL);
      if ( !bannerLoopCtr )
        goto LABEL_34;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(bannerLoopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v13, 0LL);
    }
    while ( --v12 >= 0 );
  }
  *(_QWORD *)&this->fields.currentIdx = 0LL;
}


void __fastcall SummonControl__endPurchaseStone(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8

  if ( (byte_42EA3DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_10668/*"PURCHASE_ERROR"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10667/*"PURCHASE_CANCEL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10669/*"PURCHASE_OK"*/, v12, v13, v14);
    byte_42EA3DF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v16);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 3:
    case 4:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v17 = &StringLiteral_10667/*"PURCHASE_CANCEL"*/;
      break;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v17 = &StringLiteral_10668/*"PURCHASE_ERROR"*/;
      break;
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( !Instance )
        goto LABEL_12;
      v17 = &StringLiteral_10669/*"PURCHASE_OK"*/;
      break;
    default:
      return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v17, 0LL);
}


void __fastcall SummonControl__endPurchaseSvtEqFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8

  if ( (byte_42EA3D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_10668/*"PURCHASE_ERROR"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10667/*"PURCHASE_CANCEL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10669/*"PURCHASE_OK"*/, v12, v13, v14);
    byte_42EA3D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantEquipFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v17 = &StringLiteral_10667/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v17 = &StringLiteral_10668/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_B5D69C(Instance, v16);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v17 = &StringLiteral_10669/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v17, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__endPurchaseSvtFrame(SummonControl_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 *v17; // x8

  if ( (byte_42EA3D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_10668/*"PURCHASE_ERROR"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_10667/*"PURCHASE_CANCEL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_10669/*"PURCHASE_OK"*/, v12, v13, v14);
    byte_42EA3D6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantFramePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v17 = &StringLiteral_10667/*"PURCHASE_CANCEL"*/;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 1:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v17 = &StringLiteral_10668/*"PURCHASE_ERROR"*/;
        goto LABEL_13;
      }
LABEL_15:
      sub_B5D69C(Instance, v16);
    case 2:
      Instance = (CommonUI_o *)this->fields.fsm;
      if ( Instance )
      {
        v17 = &StringLiteral_10669/*"PURCHASE_OK"*/;
LABEL_13:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v17, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall SummonControl__exeFormation(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WebViewManager_o *Instance; // x0
  float y; // s8
  float v19; // s13
  CommonUI_o *v20; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  float m_XMin; // s9
  float m_YMin; // s10
  float m_Width; // s11
  SummonControl___c_c *v26; // x0
  float m_Height; // s12
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__149_0; // x21
  Il2CppObject *v30; // x22
  struct SummonControl___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Action_o *v38; // x20
  UnityEngine_Vector2_o v39; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o TUTORIAL_FORMATION_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42EA3AF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl__exeFormation_b__149_1__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl___c__exeFormation_b__149_0__, v11, v12, v13);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v14, v15, v16);
    byte_42EA3AF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  y = this->fields.TUTORIAL_FORMATION_ARROW_POS.fields.y;
  v19 = *((float *)&this->fields.TUTORIAL_FORMATION_ARROW_POS + 2);
  v20 = (CommonUI_o *)Instance;
  TUTORIAL_FORMATION_ARROW_RECT_FS = SummonControl__get_TUTORIAL_FORMATION_ARROW_RECT_FS(this, v21);
  m_XMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Width;
  v26 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_FORMATION_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v26 = SummonControl___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__149_0 = static_fields->__9__149_0;
  if ( !_9__149_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__149_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__149_0, v30, Method_SummonControl___c__exeFormation_b__149_0__, 0LL);
    v31 = SummonControl___c_TypeInfo->static_fields;
    v31->__9__149_0 = _9__149_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__149_0,
      (System_Int32_array **)_9__149_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !v20 )
    sub_B5D69C(v26, v22);
  v41.fields.m_XMin = m_XMin;
  v39.fields.y = v19 + 33.0;
  v39.fields.x = y;
  v41.fields.m_YMin = m_YMin;
  v41.fields.m_Width = m_Width;
  v41.fields.m_Height = m_Height;
  CommonUI__OpenTutorialArrowMark(v20, v39, 0.0, v41, _9__149_0, 0LL);
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_SummonControl__exeFormation_b__149_1__, 0LL);
  MainMenuBar__SetDispBtnAct(1, v38, 0LL);
}


void __fastcall SummonControl__exeSummon(
        SummonControl_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v13; // x1
  struct SummonConfirmDlgComponent_o *confirmDlgInfo; // x8

  if ( (byte_42EA3D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3038/*"CHECK_SERVANT_FRAME"*/, (_DWORD)paramData, (_DWORD)method, v3);
    byte_42EA3D0 = 1;
  }
  SummonControl__setTutorialCtrEnable(this, 0, method);
  this->fields.gachaParamData = paramData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gachaParamData,
    (System_Int32_array **)paramData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
      sub_B5D69C(closeBtn, v13);
    }
    UnityEngine_GameObject__SetActive(closeBtn, 0, 0LL);
    this->fields.tutorialKind = 2;
  }
  closeBtn = (UnityEngine_GameObject_o *)this->fields.fsm;
  if ( !closeBtn )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)closeBtn, (System_String_o *)StringLiteral_3038/*"CHECK_SERVANT_FRAME"*/, 0LL);
}


void __fastcall SummonControl__executeEnhanceTresureDevice(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  int32_t npEnhanceSvtId; // w20
  CommonUI_o *v13; // x21
  CombineResultEffectComponent_ClickDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EA415 & 1) == 0 )
  {
    sub_B5D5C4(&CombineResultEffectComponent_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl__executeEnhanceTresureDevice_b__270_0__, v8, v9, v10);
    byte_42EA415 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  npEnhanceSvtId = this->fields.npEnhanceSvtId;
  v13 = (CommonUI_o *)Instance;
  v14 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B5D694(CombineResultEffectComponent_ClickDelegate_TypeInfo);
  CombineResultEffectComponent_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SummonControl__executeEnhanceTresureDevice_b__270_0__,
    0LL);
  if ( !v13 )
    sub_B5D69C(v15, v16);
  CommonUI__OpenSecretTreasureDeviceForSvtGet(v13, npEnhanceSvtId, v14, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct SummonInfoControl_o *summonInfoCtr; // x8
  _BOOL4 isFree; // w8
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v17; // x21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaResourceNum; // w25
  int32_t friendPoint; // w20
  SummonConfirmDlgComponent_o *v23; // x22
  int32_t needPoint; // w21
  SummonConfirmDlgComponent_CallbackFunc_o *v25; // x23
  System_Action_o *v26; // x24
  const MethodInfo *v27; // x6

  v4 = this;
  if ( (byte_42EA3F0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl_autoSellSettingChange2__, v8, v9, v10);
    this = (SummonControl_o *)sub_B5D5C4(&Method_SummonControl_friendSummonConfirmResult__, v11, v12, v13);
    byte_42EA3F0 = 1;
  }
  summonInfoCtr = v4->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    goto LABEL_10;
  isFree = summonInfoCtr->fields.isFree;
  v4->fields.isDailyGacha = isFree;
  if ( isFree )
  {
    confirmDlgInfo = v4->fields.confirmDlgInfo;
    v17 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    SummonConfirmDlgComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)v4,
      Method_SummonControl_friendSummonConfirmResult__,
      0LL);
    v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)v4, Method_SummonControl_autoSellSettingChange2__, 0LL);
    if ( confirmDlgInfo )
    {
      SummonConfirmDlgComponent__OpenConfirmFree(confirmDlgInfo, v17, v18, v19);
      return;
    }
LABEL_10:
    sub_B5D69C(this, method);
  }
  gachaParamData = v4->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_10;
  gachaResourceNum = gachaParamData->fields.gachaResourceNum;
  friendPoint = v4->fields.friendPoint;
  v23 = v4->fields.confirmDlgInfo;
  needPoint = v4->fields.needPoint;
  v25 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
  SummonConfirmDlgComponent_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)v4,
    Method_SummonControl_friendSummonConfirmResult__,
    0LL);
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v4, Method_SummonControl_autoSellSettingChange2__, 0LL);
  if ( !v23 )
    goto LABEL_10;
  SummonConfirmDlgComponent__OpenConfirmPoint(
    v23,
    friendPoint,
    needPoint,
    friendPoint - gachaResourceNum,
    v25,
    v26,
    v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__friendSummonConfirmResult(SummonControl_o *this, bool res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EA3F1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v6, v7, v8);
    byte_42EA3F1 = 1;
  }
  confirmDlgInfo = this->fields.confirmDlgInfo;
  if ( !confirmDlgInfo )
    goto LABEL_14;
  SummonConfirmDlgComponent__Close_28355800(confirmDlgInfo, 0LL, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confirmDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(confirmDlgInfo, res);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(8, 0LL);
  SummonControl__friendPointQpManaCheck(this, v10);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_o *__fastcall SummonControl__getCurrentGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct GachaMaster_o *gachaMst; // x0

  if ( (byte_42EA3BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, gachaId, (_DWORD)method, v3);
    byte_42EA3BA = 1;
  }
  gachaMst = this->fields.gachaMst;
  if ( !gachaMst )
    sub_B5D69C(0LL, *(_QWORD *)&gachaId);
  return (GachaEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            (DataMasterBase_WarMaster__WarEntity__int__o *)gachaMst,
                            gachaId,
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


int32_t __fastcall SummonControl__getFriendPointIndex(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x21
  __int64 v9; // x20
  int size; // w8
  VaildGachaInfo_o *v11; // x8

  v4 = this;
  if ( (byte_42EA418 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, (_DWORD)method, v2, v3);
    this = (SummonControl_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v5, v6, v7);
    byte_42EA418 = 1;
  }
  vaildGachaList = v4->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_11:
    sub_B5D69C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v11 = vaildGachaList->fields._items->m_Items[v9];
    if ( v11 )
    {
      if ( v11->fields.type == 3 )
        return v9;
      vaildGachaList = v4->fields.vaildGachaList;
      ++v9;
      if ( vaildGachaList )
        continue;
    }
    goto LABEL_11;
  }
  LODWORD(v9) = 0;
  return v9;
}


UserGachaEntity_o *__fastcall SummonControl__getUserGachaData(
        SummonControl_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserGachaEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA3B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGachaMaster___, gachaId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA3B9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ShopEntity_o *result; // x0
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  BattleServantConfConponent_o *p_stoneFragmentsShopEntity; // x19
  System_Int32_array **EntityOfFragmentsShop; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EA3AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EA3AA = 1;
  }
  result = this->fields.stoneFragmentsShopEntity;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B5D69C(0LL, v10);
    p_stoneFragmentsShopEntity = (BattleServantConfConponent_o *)&this->fields.stoneFragmentsShopEntity;
    EntityOfFragmentsShop = (System_Int32_array **)ShopMaster__GetEntityOfFragmentsShop(
                                                     Master_WarQuestSelectionMaster,
                                                     0LL);
    p_stoneFragmentsShopEntity->klass = (BattleServantConfConponent_c *)EntityOfFragmentsShop;
    sub_B5D560(p_stoneFragmentsShopEntity, EntityOfFragmentsShop, v13, v14, v15, v16, v17, v18);
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
  int v2; // w2
  __int64 v3; // x3
  float m_XMin; // s8
  float y; // s9
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EA3A9 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3A9 = 1;
  }
  y = this->fields.TUTORIAL_MENU_ARROW_POS.fields.y;
  m_XMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_XMin;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = y + (float)(FSUtility__GetOffsetX(68.0, 0, 0LL) + -14.0);
  v8 = m_XMin + 33.0;
  result.fields.y = v8;
  result.fields.x = v7;
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
  __int64 v3; // x3
  SummonControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w23
  ServantFlagReleaseMaster_o *v11; // x21
  __int64 v12; // x24
  struct GachaInfos_array *v13; // x8
  GachaInfos_o *v14; // x8
  int32_t objectId; // w22
  bool result; // w0
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42EA411 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, (_DWORD)svtId, (_DWORD)method, v3);
    this = (SummonControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA411 = 1;
  }
  gachaResInfoList = v5->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(this, svtId);
  }
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( max_length < 1 )
  {
LABEL_13:
    objectId = 0;
    result = 0;
  }
  else
  {
    v11 = (ServantFlagReleaseMaster_o *)this;
    v12 = 0LL;
    while ( 1 )
    {
      v13 = v5->fields.gachaResInfoList;
      if ( !v13 )
        goto LABEL_16;
      if ( (unsigned int)v12 >= v13->max_length )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      v14 = v13->m_Items[v12];
      if ( !v14 || !v11 )
        goto LABEL_16;
      objectId = v14->fields.objectId;
      this = (SummonControl_o *)ServantFlagReleaseMaster__isSecretTreasureDevice(v11, objectId, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( (int)++v12 >= max_length )
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
    sub_B5D69C(this, svtId);
  max_length = gachaResInfoList->max_length;
  v6 = 0LL;
  m_Items = gachaResInfoList->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct GachaInfos_array *gachaResInfoList; // x8
  int max_length; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  __int64 v14; // x22
  struct GachaInfos_array *v15; // x8
  GachaInfos_o *v16; // x24
  __int64 v18; // x0

  v4 = this;
  if ( (byte_42EA405 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    this = (SummonControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA405 = 1;
  }
  gachaResInfoList = v4->fields.gachaResInfoList;
  if ( !gachaResInfoList
    || (max_length = gachaResInfoList->max_length,
        (this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(this, method);
  }
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( max_length < 1 )
    return 0;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v4->fields.gachaResInfoList;
    if ( !v15 )
      goto LABEL_17;
    if ( (unsigned int)v14 >= v15->max_length )
    {
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
    }
    v16 = v15->m_Items[v14];
    if ( !v16 || !v13 )
      goto LABEL_17;
    this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v13,
                                v16->fields.objectId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( this )
    {
      this = (SummonControl_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 && v16->fields.isNew )
        return 1;
    }
    if ( (int)++v14 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitManaConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SummonLimitWarningDlgComponent_o *limitWarningDlgInfo; // x0

  if ( (byte_42EA421 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v6, v7, v8);
    byte_42EA421 = 1;
  }
  limitWarningDlgInfo = this->fields.limitWarningDlgInfo;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  SummonLimitWarningDlgComponent__Close(limitWarningDlgInfo, 0LL);
  if ( res == 1 )
  {
    limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( limitWarningDlgInfo )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 22, 1, 0LL, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(limitWarningDlgInfo, *(_QWORD *)&res);
  }
  limitWarningDlgInfo = (SummonLimitWarningDlgComponent_o *)this->fields.fsm;
  if ( !limitWarningDlgInfo )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__limitQpConfirmResult(SummonControl_o *this, int32_t res, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  void *limitWarningDlgInfo; // x0
  _DWORD *v25; // x20
  int32_t v26; // w20
  BalanceConfig_c *v27; // x0
  const MethodInfo *v28; // x1
  SummonLimitWarningDlgComponent_o *v29; // x20
  SummonLimitWarningDlgComponent_CallbackFunc_o *v30; // x21
  System_Action_o *v31; // x22

  if ( (byte_42EA420 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, res, (_DWORD)method, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SummonControl_limitManaConfirmResult__, v15, v16, v17);
    sub_B5D5C4(&Method_SummonControl_showConfirmDlg__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3107/*"CLICK_CANCEL"*/, v21, v22, v23);
    byte_42EA420 = 1;
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
        v25 = limitWarningDlgInfo;
        if ( !UserStatusFlag__GetAutoSaleBitFlag(*((_DWORD *)limitWarningDlgInfo + 60), 0LL) )
          goto LABEL_19;
        v26 = v25[44];
        v27 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v27 = BalanceConfig_TypeInfo;
        }
        if ( v26 >= v27->static_fields->UserItemMax )
        {
          v29 = this->fields.limitWarningDlgInfo;
          v30 = (SummonLimitWarningDlgComponent_CallbackFunc_o *)sub_B5D694(SummonLimitWarningDlgComponent_CallbackFunc_TypeInfo);
          SummonLimitWarningDlgComponent_CallbackFunc___ctor(
            v30,
            (Il2CppObject *)this,
            Method_SummonControl_limitManaConfirmResult__,
            0LL);
          v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v31, (Il2CppObject *)this, Method_SummonControl_showConfirmDlg__, 0LL);
          if ( !v29 )
            goto LABEL_22;
          SummonLimitWarningDlgComponent__OpenManaWarning(v29, v30, v31, 0LL);
        }
        else
        {
LABEL_19:
          MainMenuBar__setMenuActive(0, 0LL, 0LL);
          SummonControl__loadAssetsForSummon(this, v28);
        }
      }
    }
    else if ( res == 1 )
    {
      limitWarningDlgInfo = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( limitWarningDlgInfo )
      {
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)limitWarningDlgInfo, 32, 1, 0LL, 0LL);
        return;
      }
LABEL_22:
      sub_B5D69C(limitWarningDlgInfo, *(_QWORD *)&res);
    }
  }
  else
  {
    limitWarningDlgInfo = this->fields.fsm;
    if ( !limitWarningDlgInfo )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitWarningDlgInfo, (System_String_o *)StringLiteral_3107/*"CLICK_CANCEL"*/, 0LL);
  }
}


void __fastcall SummonControl__loadAssetsForSummon(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  SummonRootComponent_o *basePanel; // x20
  System_Action_o *v17; // x21
  __int64 v18; // x9
  SummonControl_o *v19; // x0
  bool v20; // w1
  const MethodInfo *v21; // x2

  if ( (byte_42EA3F8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl__loadAssetsForSummon_b__233_0__, v8, v9, v10);
    sub_B5D5C4(&SummonRootComponent_TypeInfo, v11, v12, v13);
    byte_42EA3F8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance
    || (basePanel = (SummonRootComponent_o *)Instance->fields.basePanel,
        v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__loadAssetsForSummon_b__233_0__, 0LL),
        !basePanel) )
  {
    sub_B5D69C(Instance, v15);
  }
  v18 = *(&SummonRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v18
    && (SummonRootComponent_c *)basePanel->klass->_2.typeHierarchy[v18 - 1] == SummonRootComponent_TypeInfo )
  {
    SummonRootComponent__SetAssetStroageData(basePanel, v17, 0LL);
  }
  else
  {
    v19 = (SummonControl_o *)sub_B5D990(basePanel);
    SummonControl__friendSummonConfirmResult(v19, v20, v21);
  }
}


void __fastcall SummonControl__onClickChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w0
  int32_t currentMoveIdx; // w9
  int32_t v11; // w8
  int32_t v12; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_42EA3C7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12949/*"SetBannerCenter"*/, v5, v6, v7);
    byte_42EA3C7 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12949/*"SetBannerCenter"*/,
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
    v11 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.summonInfoCtr;
    v12 = currentMoveIdx + 1 < v11 ? currentMoveIdx + 1 : 0;
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
                                                      v12,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
LABEL_25:
      sub_B5D69C(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_35972220(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__onClickLeftChangeBanner(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w8
  int v10; // w8
  int32_t v11; // w20
  UICenterOnChild_o *centerChild; // x21
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  if ( (byte_42EA3C8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12949/*"SetBannerCenter"*/, v5, v6, v7);
    byte_42EA3C8 = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12949/*"SetBannerCenter"*/,
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
    v10 = childCount - 1;
    v11 = this->fields.currentMoveIdx - 1 < 0 ? v10 : this->fields.currentMoveIdx - 1;
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
                                                      v11,
                                                      0LL),
          !centerChild)
      || (UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
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
LABEL_25:
      sub_B5D69C(leftArrowBtn, method);
    }
    UICenterOnChild__CenterOn_35972220(summonMBannerCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL);
  }
}


void __fastcall SummonControl__openAfterSummonInfo(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  CommonUI_o *Instance; // x20
  System_String_o *v24; // x21
  const MethodInfo *v25; // x1
  UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS_FS; // kr00_8
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  SummonControl___c_c *v32; // x0
  float m_Height; // s13
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Action_o *_9__148_0; // x22
  Il2CppObject *v36; // x23
  struct SummonControl___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Action_o *v44; // x20
  UnityEngine_Rect_o TUTORIAL_MENU_ARROW_RECT_FS; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_42EA3AE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__openAfterSummonInfo_b__148_1__, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl___c__openAfterSummonInfo_b__148_0__, v14, v15, v16);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13675/*"TUTORIAL_MESSAGE_SUMMON2"*/, v20, v21, v22);
    byte_42EA3AE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13675/*"TUTORIAL_MESSAGE_SUMMON2"*/, 0LL);
  TUTORIAL_MENU_ARROW_POS_FS = SummonControl__get_TUTORIAL_MENU_ARROW_POS_FS(this, v25);
  TUTORIAL_MENU_ARROW_RECT_FS = SummonControl__get_TUTORIAL_MENU_ARROW_RECT_FS(this, v27);
  m_XMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_XMin;
  m_YMin = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_YMin;
  m_Width = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Width;
  v32 = SummonControl___c_TypeInfo;
  m_Height = TUTORIAL_MENU_ARROW_RECT_FS.fields.m_Height;
  if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
    v32 = SummonControl___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__148_0 = static_fields->__9__148_0;
  if ( !_9__148_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = SummonControl___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__148_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__148_0, v36, Method_SummonControl___c__openAfterSummonInfo_b__148_0__, 0LL);
    v37 = SummonControl___c_TypeInfo->static_fields;
    v37->__9__148_0 = _9__148_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__148_0,
      (System_Int32_array **)_9__148_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !Instance )
    sub_B5D69C(v32, v28);
  v46.fields.m_XMin = m_XMin;
  v46.fields.m_YMin = m_YMin;
  v46.fields.m_Width = m_Width;
  v46.fields.m_Height = m_Height;
  CommonUI__OpenTutorialNotificationDialogArrow(
    Instance,
    v24,
    TUTORIAL_MENU_ARROW_POS_FS,
    v46,
    0.0,
    0LL,
    -1,
    _9__148_0,
    0LL);
  v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_SummonControl__openAfterSummonInfo_b__148_1__, 0LL);
  MainMenuBar__SetMenuBtnAct(v44, 0LL);
}


void __fastcall SummonControl__openSummonExeArrow(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *tutorialArrowObj; // x0

  if ( (byte_42EA3AD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3101/*"CLEAR_TUTORIAL"*/, (_DWORD)method, v2, v3);
    byte_42EA3AD = 1;
  }
  tutorialArrowObj = this->fields.tutorialArrowObj;
  if ( !tutorialArrowObj
    || (UnityEngine_GameObject__SetActive(tutorialArrowObj, 1, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL)
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialArrowObj, (System_String_o *)StringLiteral_3101/*"CLEAR_TUTORIAL"*/, 0LL),
        (tutorialArrowObj = (UnityEngine_GameObject_o *)this->fields.summonInfoCtr) == 0LL) )
  {
    sub_B5D69C(tutorialArrowObj, method);
  }
  SummonInfoControl__SetTutorialExeBtnEnable((SummonInfoControl_o *)tutorialArrowObj, 1, 0LL);
}


void __fastcall SummonControl__openSvtEqInfo(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  __int64 v47; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *GachaFlg; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v57; // x0
  System_Int32_array **EventTutorialEntity; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v66; // x22
  __int64 v67; // x21
  int size; // w8
  TitleInfoControl_EventEndTimeInfo_o *v69; // x8
  __int64 v70; // x21
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v79; // x21
  struct SummonControl___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__150_1; // x22
  Il2CppObject *v82; // x23
  struct SummonControl___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_List_EventTutorialEntity__o *v90; // x22
  int32_t v91; // w21
  EventTutorialEntity_o *v92; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v93; // x22
  TitleInfoControl_EventEndTimeInfo_o *v94; // x8
  int32_t event_id; // w22
  System_Action_o *v96; // x20
  __int64 v97; // x0

  if ( (byte_42EA3B0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Comparison_EventTutorialEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_EventTutorialEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&EventTutorialEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__Sort__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v29, v30, v31);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SummonControl___c__openSvtEqInfo_b__150_1__, v35, v36, v37);
    sub_B5D5C4(&Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, v38, v39, v40);
    sub_B5D5C4(&SummonControl___c__DisplayClass150_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v44, v45, v46);
    byte_42EA3B0 = 1;
  }
  v47 = sub_B5D694(SummonControl___c__DisplayClass150_0_TypeInfo);
  SummonControl___c__DisplayClass150_0___ctor((SummonControl___c__DisplayClass150_0_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_47;
  *(_QWORD *)(v47 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v47 + 24), (System_Int32_array **)this, v50, v51, v52, v53, v54, v55);
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_47;
  v57 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
  EventTutorialEntity = (System_Int32_array **)EventTutorialMaster__GetEventTutorialEntity(0, 34, v57, 0LL);
  *(_QWORD *)(v47 + 16) = EventTutorialEntity;
  v59 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v47 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v47 + 16), EventTutorialEntity, v60, v61, v62, v63, v64, v65);
  v66 = *(System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o **)(v47 + 16);
  if ( !v66 )
    goto LABEL_47;
  v67 = 0LL;
  while ( 1 )
  {
    size = v66->fields._size;
    if ( (int)v67 >= size )
      break;
    if ( size <= (unsigned int)v67 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v69 = v66->fields._items->m_Items[v67];
    if ( v69 )
    {
      if ( v69->fields.event_id == 1 )
        goto LABEL_28;
      v66 = *v59;
      ++v67;
      if ( *v59 )
        continue;
    }
    goto LABEL_47;
  }
  v70 = sub_B5D694(EventTutorialEntity_TypeInfo);
  EventTutorialEntity___ctor((EventTutorialEntity_o *)v70, 0LL);
  if ( !v70 )
    goto LABEL_47;
  *(_DWORD *)(v70 + 16) = 1;
  v71 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 1LL);
  *(_QWORD *)(v70 + 64) = v71;
  sub_B5D560((BattleServantConfConponent_o *)(v70 + 64), v71, v72, v73, v74, v75, v76, v77);
  v78 = *(_QWORD *)(v70 + 64);
  if ( !v78 )
    goto LABEL_47;
  if ( !*(_DWORD *)(v78 + 24) )
  {
    v97 = sub_B5D6C8(GachaFlg);
    sub_B5D668(v97, 0LL);
  }
  *(_DWORD *)(v78 + 32) = 1;
  GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*v59;
  if ( !*v59 )
    goto LABEL_47;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    GachaFlg,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTutorialEntity__Add__);
  v79 = *v59;
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
    v82 = (Il2CppObject *)static_fields->__9;
    _9__150_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventTutorialEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__150_1,
      v82,
      Method_SummonControl___c__openSvtEqInfo_b__150_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventTutorialEntity___ctor__);
    v83 = SummonControl___c_TypeInfo->static_fields;
    v83->__9__150_1 = (struct System_Comparison_EventTutorialEntity__o *)_9__150_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->__9__150_1,
      (System_Int32_array **)_9__150_1,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  if ( !v79 )
    goto LABEL_47;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v79,
    (System_Comparison_T__o *)_9__150_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventTutorialEntity__Sort__);
LABEL_28:
  v90 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v59;
  if ( !*v59 )
LABEL_47:
    sub_B5D69C(GachaFlg, v49);
  v91 = v90->fields._size - 1;
  if ( v91 >= 0 )
  {
    while ( v90 )
    {
      if ( v90->fields._size <= (unsigned int)v91 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v92 = v90->fields._items->m_Items[v91];
      if ( !v92 )
        break;
      if ( v92->fields.num != 1 )
      {
        v93 = *v59;
        if ( !*v59 )
          goto LABEL_47;
        if ( v93->fields._size <= (unsigned int)v91 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v94 = v93->fields._items->m_Items[v91];
        if ( !v94 )
          goto LABEL_47;
        event_id = v94->fields.event_id;
        if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TutorialFlag_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        }
        GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)TutorialFlag__GetGachaFlg(event_id, 0LL);
        if ( ((unsigned __int8)GachaFlg & 1) != 0 )
        {
          GachaFlg = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*v59;
          if ( !*v59 )
            goto LABEL_47;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)GachaFlg,
            v91,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventTutorialEntity__RemoveAt__);
        }
      }
      v90 = (System_Collections_Generic_List_EventTutorialEntity__o *)*v59;
      if ( --v91 < 0 )
        goto LABEL_46;
    }
    goto LABEL_47;
  }
LABEL_46:
  v96 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)v47, Method_SummonControl___c__DisplayClass150_0__openSvtEqInfo_b__0__, 0LL);
  EventTutorialMaster__TutorialChainWithoutCheckStart(v90, v96, 0LL);
}


void __fastcall SummonControl__procTutorialFlg(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_42EA3FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl_callbackTutorialSet__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v17, v18, v19);
    byte_42EA3FC = 1;
  }
  if ( !this->fields.isDoneTutorial && this->fields.tutorialKind == 2 )
  {
    v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v20, (Il2CppObject *)this, Method_SummonControl_callbackTutorialSet__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v20,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 101, 0LL);
      Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( Request_WarBoardWallAttackRequest )
      {
        AdManager__TrackEvent((AdManager_o *)Request_WarBoardWallAttackRequest, 2, 5, -1, -1, 0LL, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B5D69C(Request_WarBoardWallAttackRequest, method);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)this->fields.fsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/,
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
        sub_B5D69C(summonInfoCtr, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_GameObject_o *summonBannerInfo; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x0
  int32_t VaildPayType; // w0
  const MethodInfo *v25; // x1
  int v26; // w2
  __int64 v27; // x3
  int32_t v28; // w20
  TerminalPramsManager_c *v29; // x0
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x0

  if ( (byte_42EA3B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42EA3B4 = 1;
  }
  summonBannerInfo = this->fields.summonBannerInfo;
  if ( !summonBannerInfo )
    goto LABEL_22;
  summonBannerInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(summonBannerInfo, 0LL);
  if ( !summonBannerInfo )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)summonBannerInfo, this->fields.initBannerPos, 0LL);
  this->fields.gachaSubEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.gachaSubEntity, 0LL, v15, v16, v17, v18, v19, v20);
  SummonControl__clearBannerList(this, v21);
  SummonControl__clearResultList(this, v22);
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
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_VaildGachaInfo__Clear__);
  summonBannerInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !summonBannerInfo
    || (summonBannerInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)summonBannerInfo,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(summonBannerInfo, method);
  }
  VaildPayType = GachaMaster__getVaildPayType((GachaMaster_o *)summonBannerInfo, 0LL);
  this->fields.summonType = VaildPayType;
  v28 = VaildPayType;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B56 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v25, v26, v27);
    byte_42E4B56 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_SummonType_k__BackingField = v28;
  SummonControl__releaseBannerData(this, v25);
  bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
  if ( bonusSelectAssetManager )
    BonusSelectSummonAssetManager__Release(bonusSelectAssetManager, 0LL);
}


void __fastcall SummonControl__reDispSummonBannerList(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int size; // w8
  __int64 currentIdx; // x21
  VaildGachaInfo_o *v20; // x8
  int32_t emptyMessage; // w21
  int v22; // w22
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x3
  SummonControl_o *v28; // x0
  int32_t FriendPointIndex; // w0
  const MethodInfo *v30; // x2
  struct System_Collections_Generic_List_VaildGachaInfo__o *v31; // x20
  __int64 v32; // x21
  VaildGachaInfo_o *v33; // x8
  WarEntity_o *Entity; // x0

  v4 = this;
  if ( (byte_42EA417 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v11, v12, v13);
    this = (SummonControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EA417 = 1;
  }
  vaildGachaList = v4->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_11;
  size = vaildGachaList->fields._size;
  currentIdx = v4->fields.currentIdx;
  if ( size <= (int)currentIdx )
  {
    LODWORD(vaildGachaList) = 0;
    goto LABEL_11;
  }
  if ( size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v20 = vaildGachaList->fields._items->m_Items[currentIdx];
  if ( !v20 )
LABEL_29:
    sub_B5D69C(this, method);
  if ( v20->fields.type != 3 )
  {
    v31 = v4->fields.vaildGachaList;
    if ( v31 )
    {
      v32 = v4->fields.currentIdx;
      if ( v31->fields._size <= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v33 = v31->fields._items->m_Items[v32];
      if ( v33 )
      {
        LODWORD(vaildGachaList) = v33->fields.id;
        this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
          if ( this )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                       (int32_t)vaildGachaList,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
            if ( Entity )
            {
              emptyMessage = (int32_t)Entity->fields.emptyMessage;
              goto LABEL_12;
            }
LABEL_11:
            emptyMessage = 0;
LABEL_12:
            v22 = 0;
            goto LABEL_13;
          }
        }
      }
    }
    goto LABEL_29;
  }
  LODWORD(vaildGachaList) = 0;
  emptyMessage = 0;
  v22 = 1;
LABEL_13:
  if ( !SummonControl__resetSummonVaildData(v4, method) || SummonControl__checkMaxDrawNum(v4, v23) )
  {
    SummonControl__deleteBannerList(v4, v23);
    SummonControl__checkValidGachaList(v4, v24);
    SummonControl__createSummonInfo(v4, v25);
    v28 = v4;
    if ( !v22 )
    {
      FriendPointIndex = SummonControl__searchExtraGroupIdIndex(v4, emptyMessage, (int32_t)vaildGachaList, v27);
      if ( FriendPointIndex != -1 )
      {
LABEL_19:
        SummonControl__setDispRePosition(v4, FriendPointIndex, v30);
        return;
      }
      v28 = v4;
    }
    FriendPointIndex = SummonControl__getFriendPointIndex(v28, v26);
    if ( FriendPointIndex )
      goto LABEL_19;
  }
}


void __fastcall SummonControl__releaseBannerData(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *assetPath; // x20
  BattleServantConfConponent_o *p_bannerAssetData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42EA3B3 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA3B3 = 1;
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
    sub_B5D560(p_bannerAssetData, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SummonControl__requestGachaDraw(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_GameObject_o *maskObject; // x0
  NetworkManager_ResultCallbackFunc_o *v30; // x20
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t ticketItemId; // w24
  int32_t gachaTime; // w21
  int32_t warId; // w23
  int32_t gachaId; // w26
  int32_t gachaSubId; // w25
  struct System_Int32_array *storyAdjustIds; // x20
  Il2CppObject *p_obj; // x28
  GachaDrawRequest_o *v39; // x19
  System_String_o *selectBonusListData; // x27
  __int64 v41; // x8
  unsigned __int64 v42; // x23
  int32_t v43; // w21
  System_String_o *v44; // x0
  __int64 v45; // x0
  int32_t v46; // [xsp+14h] [xbp-5Ch]
  int32_t v47; // [xsp+18h] [xbp-58h]
  int32_t shopIdIdx; // [xsp+1Ch] [xbp-54h]

  if ( (byte_42EA3F9 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_GachaDrawRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl_callbackGachaDraw__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_132/*" : "*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42EA3F9 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
  v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v30, (Il2CppObject *)this, Method_SummonControl_callbackGachaDraw__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  maskObject = (UnityEngine_GameObject_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                             v30,
                                             (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_GachaDrawRequest___);
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
  v39 = (GachaDrawRequest_o *)maskObject;
  selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
  if ( storyAdjustIds )
  {
    v41 = *(_QWORD *)&storyAdjustIds->max_length;
    if ( v41 )
    {
      if ( (int)v41 >= 1 )
      {
        v46 = warId;
        v47 = gachaTime;
        v42 = 0LL;
        v43 = (_DWORD)storyAdjustIds + 32;
        do
        {
          if ( v42 >= (unsigned int)v41 )
          {
            v45 = sub_B5D6C8(maskObject);
            sub_B5D668(v45, 0LL);
          }
          v44 = System_Int32__ToString(v43, 0LL);
          maskObject = (UnityEngine_GameObject_o *)System_String__Concat_44580072(
                                                     selectBonusListData,
                                                     v44,
                                                     (System_String_o *)StringLiteral_132/*" : "*/,
                                                     0LL);
          LODWORD(v41) = storyAdjustIds->max_length;
          ++v42;
          selectBonusListData = (System_String_o *)maskObject;
          v43 += 4;
        }
        while ( (__int64)v42 < (int)v41 );
        selectBonusListData = (System_String_o *)StringLiteral_1/*""*/;
        warId = v46;
        gachaTime = v47;
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
  maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !maskObject || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)maskObject, 0LL), !v39) )
LABEL_28:
    sub_B5D69C(maskObject, method);
  GachaDrawRequest__beginRequest(
    v39,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  MissionNotifyManager_o *maskBgObject; // x0
  __int64 v33; // x1
  System_String_o *MainBgmName; // x20
  CommonUI_o *v35; // x20
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA416 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    byte_42EA416 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  maskBgObject = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  maskBgObject = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (CommonUI_o *)maskBgObject;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v35 )
    goto LABEL_33;
  CommonUI__maskFadein(v35, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)maskBgObject, this->fields.fsm, 1, 0LL, 36, 0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  maskBgObject = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !maskBgObject )
    goto LABEL_33;
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)maskBgObject, 1, 0, 0, 0LL);
  SummonControl__setDispSummonInfo(this, 1, v36);
  SummonControl__setUserResourceDisp(this, v37);
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
    SummonControl__progTutorial(this, v38);
  }
  else
  {
    TitleInfoControl__setBackBtnColliderEnable((TitleInfoControl_o *)maskBgObject, 1, 0LL);
    SummonControl__reDispSummonBannerList(this, v39);
  }
  maskBgObject = (MissionNotifyManager_o *)this->fields.bannerInfoList;
  if ( !maskBgObject )
LABEL_33:
    sub_B5D69C(maskBgObject, v33);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)maskBgObject,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GachaBannerComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__MoveNext__) )
  {
    if ( !v42.fields.current )
      sub_B5D69C(0LL, v40);
    GachaBannerComponent__UpdateDisplay((GachaBannerComponent_o *)v42.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GachaBannerComponent__Dispose__);
  SummonControl__UpdateSummonInfoControlLayout(this, v41);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  CommonUI_o *v19; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_42EA410 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__resetResultList_b__265_0__, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    byte_42EA410 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__IsProgressDone(2, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    CommonUI__CloseTutorialArrowMark(Instance, 0LL, 0LL);
    Instance = (CommonUI_o *)this->fields.summonResultInfo;
    if ( !Instance )
      goto LABEL_15;
    SummonResultComponent__ClearTouchBlocker((SummonResultComponent_o *)Instance, 0LL);
  }
  this->fields.isResult = 0;
  v19 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SummonControl__resetResultList_b__265_0__, 0LL);
  if ( !v19 )
LABEL_15:
    sub_B5D69C(Instance, v18);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v22, 0LL);
}


void __fastcall SummonControl__resetStoneInfo(SummonControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SummonInfoControl_o *summonInfoCtr; // x0

  SummonControl__setUserResourceDisp(this, method);
  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B5D69C(0LL, v3);
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
          v17 = sub_B5D6C8(gachaMst);
          sub_B5D668(v17, 0LL);
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
      sub_B5D69C(gachaMst, method);
    }
    return 1;
  }
  else
  {
LABEL_14:
    p_useGachaData->klass = (BattleServantConfConponent_c *)v11;
    sub_B5D560(p_useGachaData, (System_Int32_array **)v11, v4, v5, v6, v7, v8, v9);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *bannerAssetData; // x0
  int v13; // w8
  _DWORD *v14; // x20
  unsigned int v15; // w23
  char *v16; // x8
  UnityEngine_GameObject_o *v17; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  __int64 v20; // x0

  if ( (byte_42EA3BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObjectList_GameObject___, (_DWORD)searchTarget, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42EA3BE = 1;
  }
  bannerAssetData = this->fields.bannerAssetData;
  if ( !bannerAssetData )
    goto LABEL_18;
  bannerAssetData = AssetData__GetObjectList_Texture2D_(
                      (AssetData_o *)bannerAssetData,
                      (const MethodInfo_1AD0B80 *)Method_AssetData_GetObjectList_GameObject___);
  if ( !bannerAssetData )
    goto LABEL_18;
  v13 = *((_DWORD *)bannerAssetData + 6);
  v14 = bannerAssetData;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v20 = sub_B5D6C8(bannerAssetData);
        sub_B5D668(v20, 0LL);
      }
      v16 = (char *)&v14[2 * v15];
      v17 = (UnityEngine_GameObject_o *)*((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          *((UnityEngine_GameObject_o **)v16 + 4),
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
          return v17;
      }
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        return 0LL;
    }
LABEL_18:
    sub_B5D69C(bannerAssetData, searchTarget);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x23
  int32_t v20; // w22
  __int64 v21; // x24
  int size; // w8
  unsigned int v23; // w28
  __int64 v24; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v25; // x23
  __int64 v26; // x8
  int32_t v27; // w23
  float m_YMin; // w8
  intptr_t m_CachedPtr; // w8

  v6 = this;
  if ( (byte_42EA419 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, extraGroupId, gachaId, method);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v13, v14, v15);
    this = (SummonControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EA419 = 1;
  }
  vaildGachaList = v6->fields.vaildGachaList;
  if ( !vaildGachaList )
LABEL_22:
    sub_B5D69C(this, *(_QWORD *)&extraGroupId);
  v20 = 0;
  v21 = 4LL;
  while ( 1 )
  {
    size = vaildGachaList->fields._size;
    v23 = v21 - 4;
    if ( (int)v21 - 4 >= size )
      return -1;
    if ( size <= v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = *((_QWORD *)&vaildGachaList->fields._items->obj.klass + v21);
    if ( !v24 )
      goto LABEL_22;
    if ( *(_DWORD *)(v24 + 52) == 3 )
      return -1;
    v25 = v6->fields.vaildGachaList;
    if ( !v25 )
      goto LABEL_22;
    if ( v25->fields._size <= v23 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v26 = *((_QWORD *)&v25->fields._items->obj.klass + v21);
    if ( !v26 )
      goto LABEL_22;
    v27 = *(_DWORD *)(v26 + 16);
    this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_22;
    this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)this,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !this )
      goto LABEL_22;
    this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                v27,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    if ( !this )
      return -1;
    m_YMin = this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin;
    if ( m_YMin != 0.0 && LODWORD(m_YMin) == extraGroupId )
      return v21 - 4;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( m_CachedPtr && m_CachedPtr == gachaId )
      return v20;
    vaildGachaList = v6->fields.vaildGachaList;
    ++v20;
    ++v21;
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
    sub_B5D69C(indexPanel, method);
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
    v19 = sub_B5D6C8(indexPanel);
    sub_B5D668(v19, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *maskObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  struct VaildGachaInfo_o *v26; // x1
  const MethodInfo *v27; // x1
  SummonInfoControl_o *summonInfoCtr; // x20
  VaildGachaInfo_o *currentGachaInfo; // x21
  SummonInfoControl_ClickDelegate_o *v30; // x22
  SummonInfoControl_o *v31; // x20
  System_Action_o *v32; // x21

  if ( (byte_42EA3C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SummonInfoControl_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__setChangeSummonInfo_b__180_0__, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl_exeSummon__, v14, v15, v16);
    byte_42EA3C9 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v26 = vaildGachaList->fields._items->m_Items[currentIdx];
  this->fields.currentGachaInfo = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentGachaInfo,
    (System_Int32_array **)v26,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  SummonControl__setResourceInfo(this, v27);
  summonInfoCtr = this->fields.summonInfoCtr;
  currentGachaInfo = this->fields.currentGachaInfo;
  v30 = (SummonInfoControl_ClickDelegate_o *)sub_B5D694(SummonInfoControl_ClickDelegate_TypeInfo);
  SummonInfoControl_ClickDelegate___ctor(v30, (Il2CppObject *)this, Method_SummonControl_exeSummon__, 0LL);
  if ( !summonInfoCtr
    || (SummonInfoControl__SetSummonInfo(summonInfoCtr, currentGachaInfo, v30, 0LL),
        v31 = this->fields.summonInfoCtr,
        v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v32, (Il2CppObject *)this, Method_SummonControl__setChangeSummonInfo_b__180_0__, 0LL),
        !v31) )
  {
LABEL_10:
    sub_B5D69C(maskObject, method);
  }
  SummonInfoControl__SetAlphaSummonBtn(v31, v32, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setDispRePosition(SummonControl_o *this, int32_t currentIdx, const MethodInfo *method)
{
  __int64 v3; // x3
  SummonControl_o *v5; // x19
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  v5 = this;
  if ( (byte_42EA3CE & 1) == 0 )
  {
    this = (SummonControl_o *)sub_B5D5C4(
                                &Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__,
                                currentIdx,
                                (_DWORD)method,
                                v3);
    byte_42EA3CE = 1;
  }
  if ( !v5->fields.vaildGachaList
    || (this = (SummonControl_o *)v5->fields.bannerLoopCtr, v5->fields.isNotCenterOnSync = 1, !this)
    || (UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL),
        (this = (SummonControl_o *)v5->fields.summonMBannerLoopCtr) == 0LL) )
  {
    sub_B5D69C(this, *(_QWORD *)&currentIdx);
  }
  UIWrapContent__setScrollPos((UIWrapContent_o *)this, currentIdx, 0LL);
  SummonControl__setSliderIcon(v5, currentIdx, v6);
  v5->fields.currentIdx = currentIdx;
  v5->fields.currentMoveIdx = currentIdx;
  SummonControl__setChangeSummonInfo(v5, v7);
  SummonControl__UpdateSummonInfoControlLayout(v5, v8);
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
    sub_B5D69C(titleInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, v6, 0LL);
}


void __fastcall SummonControl__setEnableTutorialBtn(SummonControl_o *this, bool isTutorial, const MethodInfo *method)
{
  SummonInfoControl_o *summonInfoCtr; // x0

  summonInfoCtr = this->fields.summonInfoCtr;
  if ( !summonInfoCtr )
    sub_B5D69C(0LL, isTutorial);
  SummonInfoControl__SetTutorialBtnEnable(summonInfoCtr, isTutorial, 0LL);
}


void __fastcall SummonControl__setPositionByWarId(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SummonControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 GachaIdFromSelectedBannerEntity; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x23
  int size; // w21
  unsigned int v13; // w22
  GachaBannerComponent_o *v14; // x8
  struct VaildGachaInfo_o *info; // x9
  SummonControl_o *v16; // x0
  int32_t bannerIdx; // w1

  v4 = this;
  if ( (byte_42EA3CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, (_DWORD)method, v2, v3);
    this = (SummonControl_o *)sub_B5D5C4(
                                &Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__,
                                v5,
                                v6,
                                v7);
    byte_42EA3CC = 1;
  }
  GachaIdFromSelectedBannerEntity = SummonControl__GetGachaIdFromSelectedBannerEntity(this, method);
  bannerInfoList = v4->fields.bannerInfoList;
  if ( v4->fields.summonType < 1 )
  {
    if ( bannerInfoList )
      goto LABEL_18;
  }
  else if ( bannerInfoList )
  {
    size = bannerInfoList->fields._size;
    if ( size >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( bannerInfoList->fields._size <= v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v14 = bannerInfoList->fields._items->m_Items[v13];
        if ( !v14 )
LABEL_16:
          sub_B5D69C(GachaIdFromSelectedBannerEntity, v9);
        info = v14->fields.info;
        if ( !info )
        {
          bannerIdx = 1;
          goto LABEL_22;
        }
        if ( info->fields.type == v4->fields.summonType
          && ((int)GachaIdFromSelectedBannerEntity < 1 || info->fields.id == (_DWORD)GachaIdFromSelectedBannerEntity) )
        {
          break;
        }
        if ( (int)++v13 >= size )
          goto LABEL_18;
        bannerInfoList = v4->fields.bannerInfoList;
        if ( !bannerInfoList )
          goto LABEL_16;
      }
      bannerIdx = v14->fields.bannerIdx;
LABEL_22:
      v16 = v4;
      goto LABEL_23;
    }
LABEL_18:
    v16 = v4;
    bannerIdx = 0;
LABEL_23:
    SummonControl__setDispRePosition(v16, bannerIdx, v10);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  __int64 currentIdx; // x21
  System_Int32_array **v17; // x1
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  _BOOL4 isPointSummon; // w26
  UIWidget_o *v20; // x25
  UIWidget_o *v21; // x23
  UIWidget_o *v22; // x24
  UIWidget_o *v23; // x21
  UIWidget_o *v24; // x22
  WebViewObject_o *Component_WebViewObject; // x20
  int v26; // s3
  float v27; // s4
  float v28; // s5
  float v29; // s6
  SummonControl_c *v30; // x8
  float COLOR_VAL; // s0
  float v32; // s1
  float v33; // s2
  int v34; // s0
  int v38; // s0
  int v42; // s0
  int v46; // s0
  int v50; // s0
  int v54; // s0
  MethodInfo v58; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  v8 = this;
  if ( (byte_42EA3CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v9, v10, v11);
    this = (SummonControl_o *)sub_B5D5C4(&SummonControl_TypeInfo, v12, v13, v14);
    byte_42EA3CA = 1;
  }
  v58.methodPointer = 0LL;
  v58.invoker_method = 0LL;
  vaildGachaList = v8->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_37;
  currentIdx = v8->fields.currentIdx;
  if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v17 = (System_Int32_array **)vaildGachaList->fields._items->m_Items[currentIdx];
  v8->fields.currentGachaInfo = (struct VaildGachaInfo_o *)v17;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.currentGachaInfo, v17, v2, v3, v4, v5, v6, v7);
  currentGachaInfo = v8->fields.currentGachaInfo;
  if ( !currentGachaInfo )
    goto LABEL_37;
  this = (SummonControl_o *)v8->fields.stoneNumInfo;
  if ( !this )
    goto LABEL_37;
  isPointSummon = currentGachaInfo->fields.isPointSummon;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentStoneNumLb )
    goto LABEL_37;
  v20 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentStoneNumLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.pointNumInfo )
    goto LABEL_37;
  v21 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.pointNumInfo,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentPointNumLb )
    goto LABEL_37;
  v22 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentPointNumLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.fragmentNumInfo )
    goto LABEL_37;
  v23 = (UIWidget_o *)this;
  this = (SummonControl_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.fragmentNumInfo,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v8->fields.currentFragmentNumLb )
    goto LABEL_37;
  v24 = (UIWidget_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v8->fields.currentFragmentNumLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v30 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v30 = SummonControl_TypeInfo;
  }
  COLOR_VAL = v30->static_fields->COLOR_VAL;
  v32 = COLOR_VAL;
  v33 = COLOR_VAL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v26 - 3), v27, v28, v29, &v58);
  *(_QWORD *)&v63.fields.r = v58.methodPointer;
  *(_QWORD *)&v63.fields.b = v58.invoker_method;
  if ( isPointSummon )
  {
    if ( !v20 )
      goto LABEL_37;
    UIWidget__set_color(v20, v63, 0LL);
    if ( !v21 )
      goto LABEL_37;
    *(_QWORD *)&v59.fields.b = v58.invoker_method;
    *(_QWORD *)&v59.fields.r = v58.methodPointer;
    UIWidget__set_color(v21, v59, 0LL);
    if ( !v24 )
      goto LABEL_37;
    *(_QWORD *)&v60.fields.b = v58.invoker_method;
    *(_QWORD *)&v60.fields.r = v58.methodPointer;
    UIWidget__set_color(v24, v60, 0LL);
    if ( !Component_WebViewObject )
      goto LABEL_37;
    *(_QWORD *)&v61.fields.b = v58.invoker_method;
    *(_QWORD *)&v61.fields.r = v58.methodPointer;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v61, 0LL);
    this = (SummonControl_o *)v8->fields.fragmentNumCollider;
    if ( !this )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !v22 )
      goto LABEL_37;
    UIWidget__set_color(v22, *(UnityEngine_Color_o *)&v34, 0LL);
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
    if ( !v23 )
      goto LABEL_37;
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v38, 0LL);
  }
  else
  {
    if ( !v22 )
      goto LABEL_37;
    UIWidget__set_color(v22, v63, 0LL);
    if ( !v23 )
      goto LABEL_37;
    *(_QWORD *)&v62.fields.b = v58.invoker_method;
    *(_QWORD *)&v62.fields.r = v58.methodPointer;
    UIWidget__set_color(v23, v62, 0LL);
    *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_37;
    UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v42, 0LL);
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
    if ( !v21 )
      goto LABEL_37;
    UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v46, 0LL);
    *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_white(0LL);
    if ( !v24 )
      goto LABEL_37;
    UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v50, 0LL);
    *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_37;
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v54, 0LL);
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
    sub_B5D69C(this, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
}


void __fastcall SummonControl__setResultListType(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SummonResultComponent_o *summonResultInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42EA40E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42EA40E = 1;
  }
  summonResultInfo = this->fields.summonResultInfo;
  this->fields.resType = 1;
  if ( !summonResultInfo )
    goto LABEL_9;
  SummonResultComponent__setListByType(summonResultInfo, 1, 0LL);
  SummonControl__showSummonResultInfo(this, v9);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  summonResultInfo = (SummonResultComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !summonResultInfo )
LABEL_9:
    sub_B5D69C(summonResultInfo, method);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)summonResultInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setSliderIcon(SummonControl_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *sliderGrid; // x0
  int32_t childCount; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  SelectBannerSliderIcon_o *v10; // x23

  if ( (byte_42EA3CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___, idx, (_DWORD)method, v3);
    byte_42EA3CB = 1;
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
    v8 = childCount;
    v9 = 0;
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
                                                v9,
                                                0LL);
      if ( !sliderGrid )
        break;
      sliderGrid = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                sliderGrid,
                                                (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SelectBannerSliderIcon___);
      if ( !sliderGrid )
        break;
      v10 = (SelectBannerSliderIcon_o *)sliderGrid;
      SelectBannerSliderIcon__setEnableOnImg((SelectBannerSliderIcon_o *)sliderGrid, 0, 0LL);
      if ( idx == v9 )
        SelectBannerSliderIcon__setEnableOnImg(v10, 1, 0LL);
      if ( ++v9 >= v8 )
        return;
    }
LABEL_15:
    sub_B5D69C(sliderGrid, *(_QWORD *)&idx);
  }
}


void __fastcall SummonControl__setSummonData(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  UnityEngine_Transform_o *Time; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *summonBannerInfo; // x8
  const MethodInfo *v50; // x2
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UILabel_o *summonHelpLabel; // x21
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  TerminalPramsManager_c *v62; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x1
  __int64 v71; // x21
  __int64 v72; // x21
  struct GachaMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct GachaEntity_array *ListValidData; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  const MethodInfo *v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x8
  UISprite_o *summonMBannerLineSprite; // x21
  System_String_o *assetPath; // x20
  System_String_o *v97; // x20
  AssetLoader_LoadEndDataHandler_o *v98; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA3B1 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Count__, v11, v12, v13);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23, v24, v25);
    sub_B5D5C4(&Method_SummonControl_LoadBannerEnd__, v26, v27, v28);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12592/*"SUMMON_HELP_MESSAGE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_13310/*"SummonBanners/DownloadSummonBanner"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_6406/*"FAIL_LOAD"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_19751/*"img_line_summon"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_19675/*"img_bg_banner"*/, v44, v45, v46);
    byte_42EA3B1 = 1;
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
  SummonControl__setDispSummonInfo(this, 1, v50);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Time, this->fields.fsm, 1, 0LL, 36, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)Time, 1, 0, 0, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.titleInfo;
  if ( !Time )
    goto LABEL_52;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)Time, 22, 0LL);
  this->fields.getSvtIdx = 0;
  *(_QWORD *)&this->fields.currentIdx = 0LL;
  *(_WORD *)&this->fields.isDoneTutorial = 257;
  v51 = (System_Int32_array **)StringLiteral_13310/*"SummonBanners/DownloadSummonBanner"*/;
  this->fields.assetPath = (struct System_String_o *)StringLiteral_13310/*"SummonBanners/DownloadSummonBanner"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.assetPath, v51, v52, v53, v54, v55, v56, v57);
  summonHelpLabel = this->fields.summonHelpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Time = (UnityEngine_Transform_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12592/*"SUMMON_HELP_MESSAGE"*/, 0LL);
  if ( !summonHelpLabel )
    goto LABEL_52;
  UILabel__set_text(summonHelpLabel, (System_String_o *)Time, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42EA434 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v59, v60, v61);
    byte_42EA434 = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v62 = TerminalPramsManager_TypeInfo;
  }
  this->fields.summonType = v62->static_fields->_SummonType_k__BackingField;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  SummonControl__setUserResourceDisp(this, v70);
  v71 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v72 = **(_QWORD **)(v71 + 192);
  if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
    sub_AF52C4(v72);
  Time = **(UnityEngine_Transform_o ***)(v72 + 184);
  if ( !Time )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (struct GachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Time,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
  this->fields.gachaMst = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gachaMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  Time = (UnityEngine_Transform_o *)this->fields.gachaMst;
  if ( !Time )
    goto LABEL_52;
  ListValidData = GachaMaster__getListValidData((GachaMaster_o *)Time, 0LL);
  this->fields.useGachaData = ListValidData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useGachaData,
    (System_Int32_array **)ListValidData,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  SummonControl__checkValidGachaList(this, v87);
  vaildGachaList = this->fields.vaildGachaList;
  if ( !vaildGachaList )
    goto LABEL_52;
  if ( vaildGachaList->fields._size <= 0 )
  {
    this->fields.vaildGachaList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.vaildGachaList, 0LL, v88, v89, v90, v91, v92, v93);
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
  AtlasManager__SetEventSprite(summonMBannerLineSprite, (System_String_o *)StringLiteral_19751/*"img_line_summon"*/, 0LL);
  Time = (UnityEngine_Transform_o *)this->fields.summonMBannerLineSprite;
  if ( !Time )
    goto LABEL_52;
  ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))Time->klass[2]._1.castClass)(
    Time,
    Time->klass[2]._1.declaringType);
  AtlasManager__SetEventSprite(this->fields.summonMBannerBgSprite, (System_String_o *)StringLiteral_19675/*"img_bg_banner"*/, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Time, (System_String_o *)StringLiteral_6406/*"FAIL_LOAD"*/, 0LL);
      return;
    }
LABEL_52:
    sub_B5D69C(Time, v48);
  }
  v97 = this->fields.assetPath;
  v98 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v98, (Il2CppObject *)this, Method_SummonControl_LoadBannerEnd__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v97, v98, 1, 0LL);
}


void __fastcall SummonControl__setSummonResultList(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  const MethodInfo *v29; // x1
  SummonResultComponent_o *Instance; // x0
  CommonUI_o *v31; // x20
  SummonControl___c_c *v32; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__257_0; // x21
  Il2CppObject *v35; // x22
  struct SummonControl___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42EA40A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SummonControl___c__setSummonResultList_b__257_0__, v17, v18, v19);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9452/*"NO_EXIST"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12388/*"SHOW_TALK"*/, v26, v27, v28);
    byte_42EA40A = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(107, 0LL) )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(108, 0LL) && SummonControl__isSvtEqSummonResult(this, v29) )
    {
      Instance = (SummonResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = (CommonUI_o *)Instance;
      v32 = SummonControl___c_TypeInfo;
      if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
        v32 = SummonControl___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__257_0 = static_fields->__9__257_0;
      if ( !_9__257_0 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = SummonControl___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__257_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__257_0, v35, Method_SummonControl___c__setSummonResultList_b__257_0__, 0LL);
        v36 = SummonControl___c_TypeInfo->static_fields;
        v36->__9__257_0 = _9__257_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v36->__9__257_0,
          (System_Int32_array **)_9__257_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      if ( !v31 )
        goto LABEL_31;
      CommonUI__OpenTutorialImageDialog_18227680(v31, 2, 108, _9__257_0, 0LL, 0LL, 0LL);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12388/*"SHOW_TALK"*/, 0LL);
    return;
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_9452/*"NO_EXIST"*/, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Instance = (SummonResultComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_B5D69C(Instance, v29);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__setTutorialCtrEnable(SummonControl_o *this, bool isEnable, const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w20
  SummonControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_GachaBannerComponent__o *bannerInfoList; // x22
  __int64 v16; // x21
  int size; // w8
  struct System_Collections_Generic_List_SummonMiniBannerComponent__o *summonMBannerInfoList; // x22
  __int64 v19; // x21
  int v20; // w8
  bool v21; // w20

  v4 = isEnable;
  v5 = this;
  if ( (byte_42EA3AC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Count__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBannerComponent__get_Item__, v9, v10, v11);
    this = (SummonControl_o *)sub_B5D5C4(
                                &Method_System_Collections_Generic_List_SummonMiniBannerComponent__get_Item__,
                                v12,
                                v13,
                                v14);
    byte_42EA3AC = 1;
  }
  if ( !v5->fields.isDoneTutorial )
    v4 &= v5->fields.tutorialKind != 2;
  bannerInfoList = v5->fields.bannerInfoList;
  if ( !bannerInfoList )
    goto LABEL_26;
  v16 = 0LL;
  while ( 1 )
  {
    size = bannerInfoList->fields._size;
    if ( (int)v16 >= size )
      break;
    if ( size <= (unsigned int)v16 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (SummonControl_o *)bannerInfoList->fields._items->m_Items[v16];
    if ( this )
    {
      GachaBannerComponent__setEnabledCollider((GachaBannerComponent_o *)this, v4 & 1, 0LL);
      bannerInfoList = v5->fields.bannerInfoList;
      ++v16;
      if ( bannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  this = (SummonControl_o *)v5->fields.leftArrowBtn;
  if ( !this )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v4 & 1, 0LL);
  this = (SummonControl_o *)v5->fields.rightArrowBtn;
  if ( !this )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v4 & 1, 0LL);
  summonMBannerInfoList = v5->fields.summonMBannerInfoList;
  if ( !summonMBannerInfoList )
    goto LABEL_26;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = summonMBannerInfoList->fields._size;
    if ( (int)v19 >= v20 )
      break;
    if ( v20 <= (unsigned int)v19 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (SummonControl_o *)summonMBannerInfoList->fields._items->m_Items[v19];
    if ( this )
    {
      SummonMiniBannerComponent__SetEnableCollider((SummonMiniBannerComponent_o *)this, v4 & 1, 0LL);
      summonMBannerInfoList = v5->fields.summonMBannerInfoList;
      ++v19;
      if ( summonMBannerInfoList )
        continue;
    }
    goto LABEL_26;
  }
  this = (SummonControl_o *)v5->fields.summonMBannerLeftArrowBtn;
  if ( !this
    || (v21 = v4 & 1,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v21, 0LL),
        (this = (SummonControl_o *)v5->fields.summonMBannerRightArrowBtn) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v21, 0LL);
}


void __fastcall SummonControl__setUserResourceDisp(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_userGameEntity; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v35; // x1
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *currentStoneNumLb; // x21
  Il2CppObject *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Action_int__o *v40; // x22
  UILabel_o *currentPointNumLb; // x20
  Il2CppObject *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UILabel_o *currentFragmentNumLb; // x20
  Il2CppObject *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  int32_t UserStoneFragmentNum; // [xsp+4h] [xbp-3Ch] BYREF
  int klass; // [xsp+8h] [xbp-38h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA3B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_TblUserMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl__setUserResourceDisp_b__156_0__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v23, v24, v25);
    byte_42EA3B6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  this->fields.userGameEntity = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userGameEntity,
    (System_Int32_array **)SelfUserGame,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_22;
  currentStoneNumLb = this->fields.currentStoneNumLb;
  stone = userGameEntity->fields.stone;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v38, 0LL);
  if ( !currentStoneNumLb )
    goto LABEL_22;
  UILabel__set_text(currentStoneNumLb, Master_WarQuestSelectionMaster, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v40 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v40,
    (Il2CppObject *)this,
    Method_SummonControl__setUserResourceDisp_b__156_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  StoneCountRefreshComponent__AttachToGameObject(gameObject, v40, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v42, 0LL);
  if ( !currentPointNumLb )
    goto LABEL_22;
  UILabel__set_text(currentPointNumLb, Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)this->fields.fragmentNumInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v43, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  currentFragmentNumLb = this->fields.currentFragmentNumLb;
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  UserStoneFragmentNum = UserItemMaster__GetUserStoneFragmentNum(
                           (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                           0LL);
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UserStoneFragmentNum);
  Master_WarQuestSelectionMaster = System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v45, 0LL);
  if ( !currentFragmentNumLb )
    goto LABEL_22;
  UILabel__set_text(currentFragmentNumLb, Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = (System_String_o *)this->fields.stoneNumInfo;
  if ( !Master_WarQuestSelectionMaster
    || (v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v46, 0LL)) == 0LL)
    || (v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        GameObjectExtensions__SetLocalPositionX(v47, -179.0, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)this->fields.pointNumInfo) == 0LL)
    || (v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)GameObjectExtensions__GetParent(v48, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, v35);
  }
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
  GameObjectExtensions__SetLocalPositionX(v49, 179.0, 0LL);
}


void __fastcall SummonControl__set_IsResult(SummonControl_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResult = value;
}


void __fastcall SummonControl__showConfirmDlg(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  struct GachaRqParamData_o *gachaParamData; // x8
  const MethodInfo *v26; // x2
  BonusSelectSummonAssetManager_o *bonusSelectAssetManager; // x20
  BonusSelectSummonAssetManager_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *v35; // x21

  if ( (byte_42EA3EC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BonusSelectSummonAssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl__showConfirmDlg_b__216_0__, v20, v21, v22);
    byte_42EA3EC = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
  gachaParamData = this->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_16;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    gachaParamData->fields.gachaId,
                                                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( GachaEntity__HasFlag((GachaEntity_o *)Master_WarQuestSelectionMaster, 8, 0LL) )
  {
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      if ( !bonusSelectAssetManager )
      {
        v28 = (BonusSelectSummonAssetManager_o *)sub_B5D694(BonusSelectSummonAssetManager_TypeInfo);
        BonusSelectSummonAssetManager___ctor(v28, 0LL);
        this->fields.bonusSelectAssetManager = v28;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.bonusSelectAssetManager,
          (System_Int32_array **)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        bonusSelectAssetManager = this->fields.bonusSelectAssetManager;
      }
      v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v35, (Il2CppObject *)this, Method_SummonControl__showConfirmDlg_b__216_0__, 0LL);
      if ( bonusSelectAssetManager )
      {
        BonusSelectSummonAssetManager__GetAssets(bonusSelectAssetManager, v35, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(Master_WarQuestSelectionMaster, v24);
  }
  SummonControl__showConfirmDlg_28388360(this, 1, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonControl__showConfirmDlg_28388360(
        SummonControl_o *this,
        bool beforeDetailFlag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SummonControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  struct GachaRqParamData_o *gachaParamData; // x8
  int32_t gachaType; // w20
  struct GachaRqParamData_o *v47; // x8
  GachaExtraGiftEntity_array *giftEntList; // x23
  int32_t *v49; // x22
  int32_t needStone; // w20
  int32_t haveStone; // w24
  int32_t haveChargeStone; // w22
  int v53; // w28
  int v54; // w26
  struct GachaRqParamData_o *v55; // x8
  GachaDetailEntity_o *GachaDetailEntity; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v57; // x24
  System_Int32_array *ScriptIntArray; // x24
  const MethodInfo *v59; // x2
  struct SummonInfoControl_o *v60; // x8
  const MethodInfo *v61; // x1
  struct SummonInfoControl_o *v62; // x8
  int32_t ticketNum; // w8
  struct GachaRqParamData_o *v64; // x9
  struct GachaRqParamData_o *v65; // x8
  GachaDetailEntity_o *v66; // x22
  SummonConfirmDlgComponent_CallbackFunc_o *v67; // x20
  SummonConfirmDlgComponent_CallbackFunc_o *v68; // x0
  System_Int32_array *v69; // x23
  SummonConfirmDlgComponent_CallbackFunc_o *v70; // x0
  const MethodInfo *v71; // x2
  struct GachaRqParamData_o *v72; // x8
  int32_t v73; // w21
  struct GachaRqParamData_o *v74; // x8
  const MethodInfo *v75; // x6
  SummonControl_o *v76; // x22
  struct System_Collections_Generic_List_VaildGachaInfo__o *v77; // x23
  __int64 v78; // x24
  VaildGachaInfo_o *v79; // x8
  int32_t v80; // w20
  int32_t v81; // w26
  int32_t v82; // w27
  struct GachaRqParamData_o *v83; // x8
  GachaDetailEntity_o *v84; // x24
  struct GachaRqParamData_o *v85; // x8
  SummonConfirmDlgComponent_CallbackFunc_o *callback; // x22
  System_Int32_array *v87; // x25
  int32_t ScriptInt; // w0
  SummonControl_o *v89; // x0
  const MethodInfo *v90; // x2
  int32_t v91; // w21
  int afterChargeStoneNum; // w20
  SummonConfirmDlgComponent_o *v93; // x24
  struct SummonInfoControl_o *v94; // x9
  struct GachaRqParamData_o *v95; // x8
  struct GachaRqParamData_o *v96; // x8
  int32_t gachaTime; // w21
  struct GachaRqParamData_o *v98; // x8
  SummonControl_o *v99; // x21
  struct System_Collections_Generic_List_VaildGachaInfo__o *v100; // x23
  __int64 v101; // x25
  VaildGachaInfo_o *v102; // x9
  struct SummonInfoControl_o *v103; // x10
  struct GachaRqParamData_o *v104; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v105; // x23
  System_String_o *v106; // x25
  __int64 v107; // x26
  int32_t v108; // w28
  VaildGachaInfo_o *v109; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v110; // x23
  __int64 v111; // x26
  _BOOL4 v112; // w28
  VaildGachaInfo_o *v113; // x8
  int64_t summonCloseAt; // x26
  struct GachaRqParamData_o *v115; // x8
  int32_t gachaId; // w27
  struct System_Collections_Generic_List_VaildGachaInfo__o *vaildGachaList; // x20
  int32_t v118; // w26
  __int64 currentIdx; // x22
  SummonConfirmDlgComponent_o *confirmDlgInfo; // x23
  VaildGachaInfo_o *v121; // x8
  struct SummonInfoControl_o *summonInfoCtr; // x9
  struct System_Collections_Generic_List_VaildGachaInfo__o *v123; // x20
  __int64 v124; // x22
  VaildGachaInfo_o *v125; // x8
  struct System_Collections_Generic_List_VaildGachaInfo__o *v126; // x22
  __int64 v127; // x24
  _BOOL4 isPickup; // w20
  VaildGachaInfo_o *v129; // x8
  struct GachaRqParamData_o *v130; // x9
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData; // x23
  struct GachaRqParamData_o *v132; // x8
  const MethodInfo *isAppendSummon; // [xsp+20h] [xbp-D0h]
  const MethodInfo *v134; // [xsp+60h] [xbp-90h]
  _BOOL4 v135; // [xsp+68h] [xbp-88h]
  int32_t v136; // [xsp+6Ch] [xbp-84h]
  int32_t payGachaPrice; // [xsp+6Ch] [xbp-84h]
  int32_t haveFreeStone; // [xsp+70h] [xbp-80h]
  System_String_o *name; // [xsp+70h] [xbp-80h]
  int32_t v140; // [xsp+7Ch] [xbp-74h]
  int32_t v141; // [xsp+7Ch] [xbp-74h]
  int v142; // [xsp+80h] [xbp-70h]
  int32_t v143; // [xsp+80h] [xbp-70h]
  int32_t v144; // [xsp+84h] [xbp-6Ch]
  int32_t v145; // [xsp+84h] [xbp-6Ch]
  SummonConfirmDlgComponent_CallbackFunc_o *v146; // [xsp+88h] [xbp-68h]
  bool HasFlag; // [xsp+88h] [xbp-68h]
  GachaExtraGiftEntity_array *v148; // [xsp+90h] [xbp-60h]
  GachaExtraGiftEntity_array *v149; // [xsp+90h] [xbp-60h]

  v5 = this;
  if ( (byte_42EA3ED & 1) == 0 )
  {
    sub_B5D5C4(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, beforeDetailFlag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GachaMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VaildGachaInfo__get_Item__, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_SummonControl_ConfirmMessageOpen__, v33, v34, v35);
    sub_B5D5C4(&Method_SummonControl_TryGetSelectBonusDataInfo__, v36, v37, v38);
    sub_B5D5C4(&Method_SummonControl_confirmResult__, v39, v40, v41);
    this = (SummonControl_o *)sub_B5D5C4(&BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo, v42, v43, v44);
    byte_42EA3ED = 1;
  }
  gachaParamData = v5->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_126;
  gachaType = gachaParamData->fields.gachaType;
  this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_126;
  this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)this,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
  v47 = v5->fields.gachaParamData;
  if ( !v47 )
    goto LABEL_126;
  if ( !this )
    goto LABEL_126;
  giftEntList = GachaExtraGiftMaster__GetListGachaExtraGift((GachaExtraGiftMaster_o *)this, v47->fields.gachaId, 0LL);
  this = (SummonControl_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !this )
    goto LABEL_126;
  v49 = (int32_t *)this;
  this = (SummonControl_o *)v5->fields.summonResultInfo;
  if ( !this )
    goto LABEL_126;
  SummonResultComponent__setBeforeQpMana((SummonResultComponent_o *)this, v49[24], v49[44], 0LL);
  switch ( gachaType )
  {
    case 1:
      needStone = v5->fields.needStone;
      haveStone = v5->fields.haveStone;
      haveChargeStone = v5->fields.haveChargeStone;
      v53 = v5->fields.haveFreeStone - needStone;
      if ( v53 < 0 )
        v54 = v5->fields.haveFreeStone - needStone;
      else
        v54 = 0;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v55 = v5->fields.gachaParamData;
      if ( !v55 )
        goto LABEL_126;
      v142 = v54;
      v144 = haveStone;
      if ( !this )
        goto LABEL_126;
      v148 = giftEntList;
      GachaDetailEntity = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v55->fields.gachaId, 0LL);
      v57 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(v57, (Il2CppObject *)v5, Method_SummonControl_confirmResult__, 0LL);
      if ( GachaDetailEntity )
      {
        v146 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v146,
          (Il2CppObject *)v5,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        ScriptIntArray = GachaDetailEntity__GetScriptIntArray(GachaDetailEntity, v5->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(
                                    GachaDetailEntity,
                                    v5->fields.DETAIL_SCRIPT_TYPE,
                                    0,
                                    0LL);
        if ( ScriptIntArray )
        {
          if ( (_DWORD)this == 1 )
          {
            v146 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v146,
              (Il2CppObject *)v5,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, ScriptIntArray, v59);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
LABEL_120:
                SummonControl__BeforeConfirmMessageOpen(v5, (const MethodInfo *)beforeDetailFlag);
                return;
              }
            }
          }
        }
      }
      else
      {
        v146 = v57;
      }
      v96 = v5->fields.gachaParamData;
      if ( !v96 )
        goto LABEL_126;
      gachaTime = v96->fields.gachaTime;
      if ( gachaTime != 1 )
        goto LABEL_104;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
      v98 = v5->fields.gachaParamData;
      if ( !v98 || !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v98->fields.gachaId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( this && (v99 = this, LODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin)) )
      {
        this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_126;
        this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !this )
          goto LABEL_126;
        this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    LODWORD(v99->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin),
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
      v141 = needStone;
      vaildGachaList = v5->fields.vaildGachaList;
      if ( vaildGachaList )
      {
        v118 = haveChargeStone;
        currentIdx = v5->fields.currentIdx;
        confirmDlgInfo = v5->fields.confirmDlgInfo;
        if ( vaildGachaList->fields._size <= (unsigned int)currentIdx )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v121 = vaildGachaList->fields._items->m_Items[currentIdx];
        if ( v121 )
        {
          summonInfoCtr = v5->fields.summonInfoCtr;
          if ( summonInfoCtr )
          {
            v123 = v5->fields.vaildGachaList;
            if ( v123 )
            {
              v124 = v5->fields.currentIdx;
              name = v121->fields.name;
              payGachaPrice = summonInfoCtr->fields.payGachaPrice;
              if ( v123->fields._size <= (unsigned int)v124 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v125 = v123->fields._items->m_Items[v124];
              if ( v125 )
              {
                v126 = v5->fields.vaildGachaList;
                if ( v126 )
                {
                  v127 = v5->fields.currentIdx;
                  isPickup = v125->fields.isPickup;
                  if ( v126->fields._size <= (unsigned int)v127 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                  v129 = v126->fields._items->m_Items[v127];
                  if ( v129 )
                  {
                    v130 = v5->fields.gachaParamData;
                    if ( v130 )
                    {
                      if ( confirmDlgInfo )
                      {
                        SummonConfirmDlgComponent__OpenConfirmStone(
                          confirmDlgInfo,
                          name,
                          1,
                          payGachaPrice,
                          gachaTime,
                          v5->fields.haveStone,
                          v5->fields.haveFreeStone,
                          v5->fields.haveChargeStone,
                          v144 - v141,
                          v53 & ~(v53 >> 31),
                          v142 + v118,
                          v146,
                          0,
                          isPickup,
                          v129->fields.closedAt,
                          0,
                          0LL,
                          0LL,
                          v148,
                          v130->fields.shopIdIdx,
                          v134);
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
      this = (SummonControl_o *)SummonControl__CheckFriendPointSummonUpdate(v5, (const MethodInfo *)beforeDetailFlag);
      if ( ((unsigned __int8)this & 1) != 0 )
        return;
      v60 = v5->fields.summonInfoCtr;
      if ( !v60 )
        goto LABEL_126;
      v5->fields.isDailyGacha = v60->fields.isFree;
      if ( !UserStatusFlag__GetAutoSaleBitFlag(v49[60], 0LL) || !SummonControl__CheckQpManaOverCheck(v5, v61) )
        SummonControl__friendPointSummonConfirm(v5, v61);
      return;
    case 5:
      v62 = v5->fields.summonInfoCtr;
      if ( !v62 )
        goto LABEL_126;
      ticketNum = v62->fields.ticketNum;
      v64 = v5->fields.gachaParamData;
      v5->fields.haveTicketNum = ticketNum;
      if ( !v64 )
        goto LABEL_126;
      v5->fields.afterTicketNum = ticketNum - v64->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v65 = v5->fields.gachaParamData;
      if ( !v65 || !this )
        goto LABEL_126;
      v66 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v65->fields.gachaId, 0LL);
      v67 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(v67, (Il2CppObject *)v5, Method_SummonControl_confirmResult__, 0LL);
      if ( v66 )
      {
        v68 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          v68,
          (Il2CppObject *)v5,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v69 = GachaDetailEntity__GetScriptIntArray(v66, v5->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        this = (SummonControl_o *)GachaDetailEntity__GetScriptInt(v66, v5->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v69 )
        {
          if ( (_DWORD)this == 1 )
          {
            v70 = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              v70,
              (Il2CppObject *)v5,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag )
            {
              this = (SummonControl_o *)SummonControl__CheckGachaNum(this, v69, v71);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_120;
            }
          }
        }
      }
      v72 = v5->fields.gachaParamData;
      if ( !v72 )
        goto LABEL_126;
      v73 = v72->fields.gachaTime;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaMaster___);
      v74 = v5->fields.gachaParamData;
      if ( !v74 || !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v74->fields.gachaId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_47;
      v76 = this;
      if ( !LODWORD(this->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin) )
        goto LABEL_47;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  LODWORD(v76->fields.TUTORIAL_FORMATION_ARROW_RECT.fields.m_YMin),
                                  0LL);
      if ( (_DWORD)this == 9 )
        ++v73;
LABEL_47:
      v77 = v5->fields.vaildGachaList;
      if ( !v77 )
        goto LABEL_126;
      v78 = v5->fields.currentIdx;
      if ( v77->fields._size <= (unsigned int)v78 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v79 = v77->fields._items->m_Items[v78];
      if ( !v79 || !v5->fields.confirmDlgInfo )
        goto LABEL_126;
      SummonConfirmDlgComponent__OpenConfirmTicket(
        v5->fields.confirmDlgInfo,
        v79->fields.name,
        v73,
        v5->fields.haveTicketNum,
        v5->fields.afterTicketNum,
        v67,
        v75);
      return;
    case 7:
      v80 = v5->fields.haveStone;
      v81 = v5->fields.needStone;
      v82 = v5->fields.haveChargeStone;
      this = (SummonControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GachaDetailMaster___);
      v83 = v5->fields.gachaParamData;
      if ( !v83 )
        goto LABEL_126;
      v149 = giftEntList;
      if ( !this )
        goto LABEL_126;
      v84 = GachaDetailMaster__GetGachaDetailEntity((GachaDetailMaster_o *)this, v83->fields.gachaId, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (SummonControl_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaMaster___);
      v85 = v5->fields.gachaParamData;
      if ( !v85 )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (SummonControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                  v85->fields.gachaId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_126;
      HasFlag = GachaEntity__HasFlag((GachaEntity_o *)this, 8, 0LL);
      callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
      SummonConfirmDlgComponent_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)v5,
        Method_SummonControl_confirmResult__,
        0LL);
      if ( v84 )
      {
        callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
        SummonConfirmDlgComponent_CallbackFunc___ctor(
          callback,
          (Il2CppObject *)v5,
          Method_SummonControl_ConfirmMessageOpen__,
          0LL);
        v87 = GachaDetailEntity__GetScriptIntArray(v84, v5->fields.DETAIL_SCRIPT_IDS, 0LL, 0LL);
        ScriptInt = GachaDetailEntity__GetScriptInt(v84, v5->fields.DETAIL_SCRIPT_TYPE, 0, 0LL);
        if ( v87 )
        {
          if ( ScriptInt == 1 )
          {
            callback = (SummonConfirmDlgComponent_CallbackFunc_o *)sub_B5D694(SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
            SummonConfirmDlgComponent_CallbackFunc___ctor(
              callback,
              (Il2CppObject *)v5,
              Method_SummonControl_confirmResult__,
              0LL);
            if ( beforeDetailFlag && !SummonControl__CheckGachaNum(v89, v87, v90) )
              goto LABEL_120;
          }
        }
      }
      this = (SummonControl_o *)v5->fields.summonInfoCtr;
      if ( !this )
        goto LABEL_126;
      v91 = v80 - v81;
      afterChargeStoneNum = (v82 - v81) & ~((v82 - v81) >> 31);
      this = (SummonControl_o *)SummonInfoControl__GetGroupGachaId((SummonInfoControl_o *)this, 0LL);
      v93 = v5->fields.confirmDlgInfo;
      if ( (int)this >= 1 )
      {
        v94 = v5->fields.summonInfoCtr;
        if ( v94 )
        {
          v95 = v5->fields.gachaParamData;
          if ( v95 )
          {
            if ( v93 )
            {
              SummonConfirmDlgComponent__OpenConfirmGroupSummon(
                v93,
                (int32_t)this,
                v94->fields.payGachaPrice,
                v5->fields.haveStone,
                v5->fields.haveFreeStone,
                v5->fields.haveChargeStone,
                v91,
                v5->fields.haveFreeStone,
                afterChargeStoneNum,
                callback,
                giftEntList,
                v95->fields.shopIdIdx,
                isAppendSummon);
              return;
            }
          }
        }
        goto LABEL_126;
      }
      v100 = v5->fields.vaildGachaList;
      if ( !v100 )
        goto LABEL_126;
      v101 = v5->fields.currentIdx;
      if ( v100->fields._size <= (unsigned int)v101 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v102 = v100->fields._items->m_Items[v101];
      if ( !v102 )
        goto LABEL_126;
      v103 = v5->fields.summonInfoCtr;
      if ( !v103 )
        goto LABEL_126;
      v104 = v5->fields.gachaParamData;
      if ( !v104 )
        goto LABEL_126;
      v105 = v5->fields.vaildGachaList;
      if ( !v105 )
        goto LABEL_126;
      v106 = v102->fields.name;
      v107 = v5->fields.currentIdx;
      v108 = v104->fields.gachaTime;
      v140 = v5->fields.haveStone;
      haveFreeStone = v5->fields.haveFreeStone;
      v135 = v104->fields.isAppendSummon;
      v136 = v5->fields.haveChargeStone;
      if ( v105->fields._size <= (unsigned int)v107 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v109 = v105->fields._items->m_Items[v107];
      if ( !v109 )
        goto LABEL_126;
      v110 = v5->fields.vaildGachaList;
      v143 = v108;
      if ( !v110 )
        goto LABEL_126;
      v111 = v5->fields.currentIdx;
      v112 = v109->fields.isPickup;
      if ( v110->fields._size <= (unsigned int)v111 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v113 = v110->fields._items->m_Items[v111];
      if ( !v113 )
        goto LABEL_126;
      summonCloseAt = v113->fields.closedAt;
      v145 = v103->fields.payGachaPrice;
      if ( HasFlag )
      {
        v115 = v5->fields.gachaParamData;
        if ( !v115 )
          goto LABEL_126;
        gachaId = v115->fields.gachaId;
      }
      else
      {
        gachaId = 0;
      }
      tryGetBonusSelectData = (BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *)sub_B5D694(BonusSelectSummonMsgInfo_TryGetBonusSelectData_TypeInfo);
      BonusSelectSummonMsgInfo_TryGetBonusSelectData___ctor(
        tryGetBonusSelectData,
        (Il2CppObject *)v5,
        Method_SummonControl_TryGetSelectBonusDataInfo__,
        0LL);
      v132 = v5->fields.gachaParamData;
      if ( !v132 || !v93 )
LABEL_126:
        sub_B5D69C(this, beforeDetailFlag);
      SummonConfirmDlgComponent__OpenConfirmStone(
        v93,
        v106,
        7,
        v145,
        v143,
        v140,
        haveFreeStone,
        v136,
        v91,
        haveFreeStone,
        afterChargeStoneNum,
        callback,
        v135,
        v112,
        summonCloseAt,
        gachaId,
        tryGetBonusSelectData,
        v5->fields.bonusSelectAssetManager,
        v149,
        v132->fields.shopIdIdx,
        v134);
      return;
    default:
      return;
  }
}


void __fastcall SummonControl__showHelpImg(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct VaildGachaInfo_o *currentGachaInfo; // x8
  System_String_o *v18; // x0
  System_Collections_Generic_List_EventTutorialEntity__o *EventTutorialEntity; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_EventTutorialEntity__o *v21; // x20
  EventTutorialEntity_o *v22; // x8
  int32_t num; // w21
  EventTutorialEntity_o *v24; // x8
  int32_t v25; // w21
  System_Action_o *v26; // x21

  if ( (byte_42EA3C6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_OnClickHelpClose__, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    byte_42EA3C6 = 1;
  }
  currentGachaInfo = this->fields.currentGachaInfo;
  if ( currentGachaInfo )
  {
    v18 = System_Int32__ToString((int)currentGachaInfo + 16, 0LL);
    EventTutorialEntity = EventTutorialMaster__GetEventTutorialEntity(0, 34, v18, 0LL);
    if ( EventTutorialEntity )
    {
      v21 = EventTutorialEntity;
      if ( EventTutorialEntity->fields._size )
      {
        v22 = EventTutorialEntity->fields._items->m_Items[0];
        if ( v22 )
        {
          num = v22->fields.num;
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
          if ( !v21->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v24 = v21->fields._items->m_Items[0];
          if ( v24 )
          {
            v25 = v24->fields.num;
            if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TutorialFlag_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
            }
            TutorialFlag__SetGachaFlg(v25, 0LL);
            v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v26, (Il2CppObject *)this, Method_SummonControl_OnClickHelpClose__, 0LL);
            EventTutorialMaster__TutorialChainWithoutCheckStart(v21, v26, 0LL);
            return;
          }
        }
        sub_B5D69C(EventTutorialEntity, v20);
      }
    }
  }
}


void __fastcall SummonControl__showServantDialog(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  CommonUI_o *_29295864; // x0
  const MethodInfo *v33; // x1
  CommonUI_o *v34; // x20
  SummonControl___c_c *v35; // x8
  struct SummonControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__252_0; // x21
  Il2CppObject *v38; // x22
  struct SummonControl___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v48; // x8
  struct GachaInfos_array *v49; // x8
  __int64 v50; // x9
  GachaInfos_o *v51; // x8
  UserServantEntity_o *Entity; // x20
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v54; // x22
  struct GachaInfos_array *v55; // x8
  __int64 v56; // x9
  GachaInfos_o *v57; // x8
  int64_t userSvtId; // x21
  CommonUI_o *v59; // x20
  ServantStatusDialog_EndDelegate_o *v60; // x22
  __int64 v61; // x0

  if ( (byte_42EA406 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SummonControl_DialogCallBack__, v20, v21, v22);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SummonControl___c__showServantDialog_b__252_0__, v26, v27, v28);
    sub_B5D5C4(&SummonControl___c_TypeInfo, v29, v30, v31);
    byte_42EA406 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29295864 = (CommonUI_o *)TutorialFlag__Get_29295864(107, 0LL);
  if ( ((unsigned __int8)_29295864 & 1) != 0 )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    _29295864 = (CommonUI_o *)TutorialFlag__Get_29295864(108, 0LL);
    if ( ((unsigned __int8)_29295864 & 1) == 0 )
    {
      _29295864 = (CommonUI_o *)SummonControl__isSvtEqSummonResult(this, v33);
      if ( ((unsigned __int8)_29295864 & 1) != 0 )
      {
        _29295864 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v34 = _29295864;
        v35 = SummonControl___c_TypeInfo;
        if ( (BYTE3(SummonControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SummonControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl___c_TypeInfo);
          v35 = SummonControl___c_TypeInfo;
        }
        static_fields = v35->static_fields;
        _9__252_0 = static_fields->__9__252_0;
        if ( !_9__252_0 )
        {
          if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            static_fields = SummonControl___c_TypeInfo->static_fields;
          }
          v38 = (Il2CppObject *)static_fields->__9;
          _9__252_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(_9__252_0, v38, Method_SummonControl___c__showServantDialog_b__252_0__, 0LL);
          v39 = SummonControl___c_TypeInfo->static_fields;
          v39->__9__252_0 = _9__252_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v39->__9__252_0,
            (System_Int32_array **)_9__252_0,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
        }
        if ( !v34 )
          goto LABEL_38;
        CommonUI__OpenTutorialImageDialog_18227680(v34, 2, 108, _9__252_0, 0LL, 0LL, 0LL);
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
    v61 = sub_B5D6C8(_29295864);
    sub_B5D668(v61, 0LL);
  }
  v48 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v48 )
    goto LABEL_38;
  if ( SvtType__IsCommandCode(v48->fields.type, 0LL) )
  {
    _29295864 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !_29295864 )
      goto LABEL_38;
    _29295864 = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)_29295864,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    v49 = this->fields.gachaResInfoList;
    if ( !v49 )
      goto LABEL_38;
    v50 = this->fields.getSvtIdx;
    if ( (unsigned int)v50 < v49->max_length )
    {
      v51 = v49->m_Items[v50];
      if ( v51 )
      {
        if ( _29295864 )
        {
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)_29295864,
                     v51->fields.userSvtId,
                     (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v54 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(v54, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_18215196(Instance, 0, (UserCommandCodeEntity_o *)Entity, v54, 0LL, 0LL);
            return;
          }
        }
      }
LABEL_38:
      sub_B5D69C(_29295864, v33);
    }
    goto LABEL_39;
  }
  _29295864 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v55 = this->fields.gachaResInfoList;
  if ( !v55 )
    goto LABEL_38;
  v56 = this->fields.getSvtIdx;
  if ( (unsigned int)v56 >= v55->max_length )
    goto LABEL_39;
  v57 = v55->m_Items[v56];
  if ( !v57 )
    goto LABEL_38;
  userSvtId = v57->fields.userSvtId;
  v59 = _29295864;
  v60 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v60, (Il2CppObject *)this, Method_SummonControl_DialogCallBack__, 0LL);
  if ( !v59 )
    goto LABEL_38;
  CommonUI__OpenServantStatusDialog_18211624(v59, 6, userSvtId, v60, 0LL, 0LL);
}


void __fastcall SummonControl__showStonePurchase(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EA3DE & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SummonControl_endPurchaseStone__, v8, v9, v10);
    byte_42EA3DE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (StonePurchaseMenu_CallbackFunc_o *)sub_B5D694(StonePurchaseMenu_CallbackFunc_TypeInfo);
  StonePurchaseMenu_CallbackFunc___ctor(v12, (Il2CppObject *)this, Method_SummonControl_endPurchaseStone__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__OpenStonePurchaseMenu(Instance, v12, 0LL, 0LL);
}


void __fastcall SummonControl__showSummonEffect(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EA3FF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__showSummonEffect_b__240_0__, v11, v12, v13);
    byte_42EA3FF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonControl__showSummonEffect_b__240_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonControl__showSummonResultInfo(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v15; // x1
  struct GetSvtCoin_array *overflowSvtCoinInfos; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_42EA409 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl__showSummonResultInfo_b__256_0__, v11, v12, v13);
    byte_42EA409 = 1;
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
    TitleInfoControl__setBackBtnSprite_18313300(titleInfo, 1, 0, 0, 0LL);
    overflowSvtCoinInfos = this->fields.overflowSvtCoinInfos;
    if ( overflowSvtCoinInfos && overflowSvtCoinInfos->max_length )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v18 = AvalonSceneManager_TypeInfo;
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v18 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
      v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonControl__showSummonResultInfo_b__256_0__, 0LL);
      if ( !Instance )
        goto LABEL_25;
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v20, 0LL);
    }
  }
  SummonControl__setUserResourceDisp(this, v15);
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
    sub_B5D69C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
}


void __fastcall SummonControl__showSvtEqFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x20
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v18; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42EA3D7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_endPurchaseSvtEqFrame__, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl_resetStoneInfo__, v14, v15, v16);
    byte_42EA3D7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (ServantEquipFramePurchaseMenu_CallbackFunc_o *)sub_B5D694(ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtEqFrame__,
    0LL);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B5D69C(v20, v21);
  CommonUI__OpenServantEquipFramePurchaseMenu(Instance, v18, v19, 0LL);
}


void __fastcall SummonControl__showSvtFramePurchase(SummonControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x20
  ServantFramePurchaseMenu_CallbackFunc_o *v18; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42EA3D5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SummonControl_endPurchaseSvtFrame__, v11, v12, v13);
    sub_B5D5C4(&Method_SummonControl_resetStoneInfo__, v14, v15, v16);
    byte_42EA3D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (ServantFramePurchaseMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
  ServantFramePurchaseMenu_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_SummonControl_endPurchaseSvtFrame__,
    0LL);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_SummonControl_resetStoneInfo__, 0LL);
  if ( !Instance )
    sub_B5D69C(v20, v21);
  CommonUI__OpenServantFramePurchaseMenu(Instance, v18, v19, 0LL);
}


void __fastcall SummonControl__showSvtTalk(SummonControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  struct GachaInfos_array *gachaResInfoList; // x8
  __int64 getSvtIdx; // x9
  GachaInfos_o *v45; // x25
  int64_t userSvtId; // x22
  int32_t objectId; // w20
  int32_t limitCount; // w21
  DataManager_o *v49; // x24
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserServantEntity_o *v51; // x22
  int32_t v52; // w24
  ServantVoiceEntity_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *summonScriptId; // x23
  WebViewManager_o *v56; // x24
  System_Action_o *v57; // x25
  ServantAssetArgs_o *v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  ServantAssetArgs_o *battleAssetArgs; // x23
  WebViewManager_o *v66; // x23
  System_Action_o *v67; // x24
  __int64 v68; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42EA403 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&ServantAssetArgs_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SummonControl__showSvtTalk_b__247_0__, v32, v33, v34);
    sub_B5D5C4(&Method_SummonControl_close__, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3132/*"CLICK_OK"*/, v38, v39, v40);
    byte_42EA403 = 1;
  }
  entity = 0LL;
  SummonControl__setDispSummonInfo(this, 0, v2);
  gachaResInfoList = this->fields.gachaResInfoList;
  if ( !gachaResInfoList )
    goto LABEL_42;
  getSvtIdx = this->fields.getSvtIdx;
  if ( (unsigned int)getSvtIdx >= gachaResInfoList->max_length )
  {
    v68 = sub_B5D6C8(Instance);
    sub_B5D668(v68, 0LL);
  }
  v45 = gachaResInfoList->m_Items[getSvtIdx];
  if ( !v45 )
    goto LABEL_42;
  userSvtId = v45->fields.userSvtId;
  objectId = v45->fields.objectId;
  limitCount = v45->fields.limitCount;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  v49 = Instance;
  MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v49,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          objectId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
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
      || SvtType__IsCommandCode(v45->fields.type, 0LL) )
    {
LABEL_17:
      Instance = (DataManager_o *)this->fields.fsm;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3132/*"CLICK_OK"*/, 0LL);
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
    v51 = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v49,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_42;
    v51 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
            userSvtId,
            (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)ServantVoiceMaster__getSvtVoiceId(objectId, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_42:
    sub_B5D69C(Instance, v42);
  v52 = (int)Instance;
  v53 = ServantVoiceMaster__getEntity(MasterData_WarQuestSelectionMaster, 3, (int32_t)Instance, limitCount, 0LL);
  if ( v53 && (v54 = ServantVoiceEntity__GetSummonScriptId(v53, v52, 0LL)) != 0LL )
  {
    summonScriptId = v54;
    v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_SummonControl__showSvtTalk_b__247_0__, 0LL);
    if ( !v56 )
      goto LABEL_42;
    ScriptManager__PlayGacha_17818740(
      (ScriptManager_o *)v56,
      v51,
      objectId,
      limitCount,
      0,
      1,
      v57,
      0,
      0,
      summonScriptId,
      0LL);
  }
  else
  {
    if ( entity && ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) )
    {
      v58 = (ServantAssetArgs_o *)sub_B5D694(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor_26885940(v58, objectId, limitCount, 0, 0, 0, 0LL);
      this->fields.battleAssetArgs = v58;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.battleAssetArgs,
        (System_Int32_array **)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      battleAssetArgs = this->fields.battleAssetArgs;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(battleAssetArgs, 0, 0LL);
    }
    v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v67, (Il2CppObject *)this, Method_SummonControl_close__, 0LL);
    if ( !v66 )
      goto LABEL_42;
    ScriptManager__PlayGacha_17818740((ScriptManager_o *)v66, v51, objectId, limitCount, 0, 1, v67, 0, 0, 0LL, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x22
  int mBannerSpringPanelRetryCount; // w8
  UnityEngine_Object_o **p_spring_5__2; // x20
  UnityEngine_Object_o *spring_5__2; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *v15; // x19
  UICenterOnChild_o *summonMBannerCenterChild; // x19

  v4 = this;
  if ( (byte_42E646D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SpringPanel___, (_DWORD)method, v2, v3);
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)sub_B5D5C4(
                                                                        &UnityEngine_Object_TypeInfo,
                                                                        v5,
                                                                        v6,
                                                                        v7);
    byte_42E646D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    mBannerSpringPanelRetryCount = _4__this->fields.mBannerSpringPanelRetryCount;
    _4__this->fields.mBannerSpringPanelRetryCount = mBannerSpringPanelRetryCount + 1;
    if ( mBannerSpringPanelRetryCount >= 10 )
    {
      p_spring_5__2 = (UnityEngine_Object_o **)&v4->fields._spring_5__2;
LABEL_16:
      v15 = *p_spring_5__2;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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
          sub_B5D69C(this, method);
        }
        UICenterOnChild__CenterOn_35972220(summonMBannerCenterChild, (UnityEngine_Transform_o *)this, 1, 0LL);
      }
      return 0;
    }
LABEL_10:
    this = (SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_o *)_4__this->fields.summonMBannerScrollView;
    if ( !this )
      goto LABEL_25;
    v4->fields._spring_5__2 = (struct SpringPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SpringPanel___);
    p_spring_5__2 = (UnityEngine_Object_o **)&v4->fields._spring_5__2;
    sub_B5D560(&v4->fields._spring_5__2);
    spring_5__2 = (UnityEngine_Object_o *)v4->fields._spring_5__2;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(spring_5__2, 0LL, 0LL) )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    v4->fields._spring_5__2 = 0LL;
    v4->fields.__1__state = -1;
    sub_B5D560(&v4->fields._spring_5__2);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SummonControl__CoWaitCreatedMBannerSpringPanel_d__174_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  struct SummonControl_o *_4__this; // x21
  UnityEngine_WaitForEndOfFrame_o *v13; // x20
  PlayMakerFSM_o *fsm; // x0
  __int64 v15; // x1
  bool result; // w0
  ServantAssetArgs_o *battleAssetArgs; // x19

  if ( (byte_42E646E & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3132/*"CLICK_OK"*/, v8, v9, v10);
    byte_42E646E = 1;
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
    v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v13, 0LL);
    this->fields._wait_5__2 = v13;
    sub_B5D560(&this->fields._wait_5__2);
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
    sub_B5D560(&this->fields.__2__current);
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
    sub_B5D560(&_4__this->fields.battleAssetArgs);
  }
  fsm = _4__this->fields.fsm;
  if ( !fsm )
LABEL_21:
    sub_B5D69C(fsm, v15);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3132/*"CLICK_OK"*/, 0LL);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SummonControl__WaitBattleChrLoad_d__249_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SummonControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E6468 & 1) == 0 )
  {
    sub_B5D5C4(&SummonControl___c_TypeInfo, v1, v2, v3);
    byte_42E6468 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SummonControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SummonControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SummonControl___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.num - b->fields.num;
}


void __fastcall SummonControl___c___setSummonResultList_b__257_0(SummonControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonControl___c___showConfirmDlg_b__216_1(SummonControl___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E6469 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6469 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_EventTutorialEntity__o *tutoList; // x20
  __int64 v23; // x21
  int size; // w8
  unsigned int v25; // w23
  __int64 v26; // x8
  struct System_Collections_Generic_List_EventTutorialEntity__o *v27; // x20
  __int64 v28; // x8
  int32_t v29; // w20
  struct SummonControl_o *_4__this; // x8

  if ( (byte_42E646A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialEntity__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3101/*"CLEAR_TUTORIAL"*/, v17, v18, v19);
    byte_42E646A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                0LL,
                                                                (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_27;
  TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 107, 0LL);
  tutoList = this->fields.tutoList;
  if ( !tutoList )
    goto LABEL_27;
  v23 = 4LL;
  while ( 1 )
  {
    size = tutoList->fields._size;
    v25 = v23 - 4;
    if ( (int)v23 - 4 >= size )
      break;
    if ( size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v26 = *((_QWORD *)&tutoList->fields._items->obj.klass + v23);
    if ( !v26 )
      goto LABEL_27;
    if ( *(_DWORD *)(v26 + 16) != 1 )
    {
      v27 = this->fields.tutoList;
      if ( !v27 )
        goto LABEL_27;
      if ( v27->fields._size <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v28 = *((_QWORD *)&v27->fields._items->obj.klass + v23);
      if ( !v28 )
        goto LABEL_27;
      v29 = *(_DWORD *)(v28 + 16);
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      TutorialFlag__SetGachaFlg(v29, 0LL);
    }
    tutoList = this->fields.tutoList;
    ++v23;
    if ( !tutoList )
      goto LABEL_27;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || (Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)_4__this->fields.fsm) == 0LL )
LABEL_27:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v21);
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3101/*"CLEAR_TUTORIAL"*/,
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
  int v2; // w2
  __int64 v3; // x3
  SummonControl___c__DisplayClass268_0_o *v4; // x19
  struct SummonControl_o *_4__this; // x8
  struct SummonControl_o *v6; // x8

  v4 = this;
  if ( (byte_42E646B & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass268_0_o *)sub_B5D5C4(&StringLiteral_5835/*"EXECUTE"*/, (_DWORD)method, v2, v3);
    byte_42E646B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = v4->fields.svtId, (v6 = v4->fields.__4__this) == 0LL)
    || (this = (SummonControl___c__DisplayClass268_0_o *)v6->fields.fsm) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5835/*"EXECUTE"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  SummonControl___c__DisplayClass269_0_o *v4; // x19
  struct SummonControl_o *_4__this; // x8
  struct SummonControl_o *v6; // x8

  v4 = this;
  if ( (byte_42E646C & 1) == 0 )
  {
    this = (SummonControl___c__DisplayClass269_0_o *)sub_B5D5C4(&StringLiteral_5835/*"EXECUTE"*/, (_DWORD)method, v2, v3);
    byte_42E646C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.npEnhanceSvtId = v4->fields.svtId, (v6 = v4->fields.__4__this) == 0LL)
    || (this = (SummonControl___c__DisplayClass269_0_o *)v6->fields.fsm) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5835/*"EXECUTE"*/, 0LL);
}


void __fastcall SummonControl_resData___ctor(SummonControl_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}