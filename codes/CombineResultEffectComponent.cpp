void __fastcall CombineResultEffectComponent___ctor(CombineResultEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_array *v21; // x20
  struct System_Int32_array *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
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
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x20
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v79; // x20
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7

  if ( (byte_40F99B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v8);
    sub_B16FFC(&string___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16731/*"bit_result02"*/, v10);
    sub_B16FFC(&StringLiteral_16732/*"bit_result03"*/, v11);
    sub_B16FFC(&StringLiteral_16733/*"bit_result04"*/, v12);
    sub_B16FFC(&StringLiteral_16730/*"bit_result01"*/, v13);
    byte_40F99B3 = 1;
  }
  v14 = sub_B17014(string___TypeInfo, 3LL, v2);
  if ( !v14 )
LABEL_24:
    sub_B170D4();
  v21 = (struct System_String_array *)v14;
  v22 = (struct System_Int32_array *)StringLiteral_16730/*"bit_result01"*/;
  if ( StringLiteral_16730/*"bit_result01"*/ )
  {
    v22 = (struct System_Int32_array *)sub_B170BC(StringLiteral_16730/*"bit_result01"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_25;
    v23 = (System_Int32_array **)StringLiteral_16730/*"bit_result01"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_23;
  v21->m_Items[0] = (System_String_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
  v22 = (struct System_Int32_array *)StringLiteral_16731/*"bit_result02"*/;
  if ( StringLiteral_16731/*"bit_result02"*/ )
  {
    v22 = (struct System_Int32_array *)sub_B170BC(StringLiteral_16731/*"bit_result02"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_25;
    v23 = (System_Int32_array **)StringLiteral_16731/*"bit_result02"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_23;
  v21->m_Items[1] = (System_String_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[1], v23, v15, v24, v25, v26, v27, v28);
  v22 = (struct System_Int32_array *)StringLiteral_16732/*"bit_result03"*/;
  if ( !StringLiteral_16732/*"bit_result03"*/ )
  {
    v23 = 0LL;
    goto LABEL_18;
  }
  v22 = (struct System_Int32_array *)sub_B170BC(StringLiteral_16732/*"bit_result03"*/, v21->obj.klass->_1.element_class);
  if ( !v22 )
  {
LABEL_25:
    sub_B170F4(v22);
    sub_B170A0();
  }
  v23 = (System_Int32_array **)StringLiteral_16732/*"bit_result03"*/;
LABEL_18:
  if ( v21->max_length <= 2 )
    goto LABEL_23;
  v21->m_Items[2] = (System_String_o *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&v21->m_Items[2], v23, v15, v29, v30, v31, v32, v33);
  this->fields.startAniName = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.startAniName,
    (System_Int32_array **)v21,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Int32_array **)StringLiteral_16733/*"bit_result04"*/;
  this->fields.LimitAnimName = (struct System_String_o *)StringLiteral_16733/*"bit_result04"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.LimitAnimName, v40, v41, v42, v43, v44, v45, v46);
  *(_QWORD *)&this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X = 0x3DF5C28F3FE66666LL;
  *(_OWORD *)&this->fields.NAME_REVEAL_INVOKE_TIME = xmmword_3135580;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.currentFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v51;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFigureCollectList,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_StandFigureCollect__TypeInfo,
                                                                                                  v58,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
  this->fields.afterFigureCollectList = (struct System_Collections_Generic_List_StandFigureCollect__o *)v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.afterFigureCollectList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  v22 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v69);
  if ( !v22 )
    goto LABEL_24;
  v23 = (System_Int32_array **)v22;
  if ( !v22->max_length )
  {
LABEL_23:
    sub_B17100(v22, v23, v15);
    sub_B170A0();
  }
  v22->m_Items[1] = 100;
  this->fields.ChangeCardEffectLvList = v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ChangeCardEffectLvList,
    (System_Int32_array **)v22,
    v15,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.standBasePosition.fields.z = 0.0;
  this->fields.volume = 1.0;
  this->fields.autoFadeout = 1;
  *(_QWORD *)&this->fields.standBasePosition.fields.x = 0x43BE0000C3990000LL;
  v79 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B170CC(
                                                                                                System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__TypeInfo,
                                                                                                v75,
                                                                                                v76,
                                                                                                v77,
                                                                                                v78);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v79,
    (const MethodInfo_21DA2F8 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind___ctor__);
  if ( !v79 )
    goto LABEL_24;
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v79,
    1,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v79,
    10,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v79,
    26,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v79,
    19,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    v79,
    24,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Add__);
  this->fields.limitUpKinds = (struct System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__o *)v79;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.limitUpKinds,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineResultEffectComponent__Awake(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F9965 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v3);
    byte_40F9965 = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
  v12 = UnityEngine_Component__GetComponent_WebViewObject_(
          transform,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CheckCombineResStatus___);
  this->fields.combineResStatus = (struct CheckCombineResStatus_o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__CheckCombineLimit(
        CombineResultEffectComponent_o *this,
        int32_t oldLv,
        int32_t currentLv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  ServantLvDetailMaster_o *v10; // x22
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t Rarity; // w23
  ServantLvDetailEntity_o *HighestData; // x21
  int32_t v14; // w8

  if ( (byte_40F9979 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLvDetailMaster___, *(_QWORD *)&oldLv);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F9979 = 1;
  }
  this->fields.combineLimitLv = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLvDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    return (char)MasterData_WarQuestSelectionMaster;
  v10 = (ServantLvDetailMaster_o *)MasterData_WarQuestSelectionMaster;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_14;
  Rarity = UserServantEntity__getRarity(baseUsrSvtData, 0LL);
  HighestData = ServantLvDetailMaster__GetHighestData(v10, Rarity, oldLv, 0LL);
  MasterData_WarQuestSelectionMaster = ServantLvDetailMaster__GetHighestData(v10, Rarity, currentLv, 0LL);
  if ( !HighestData && MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( HighestData )
  {
    if ( MasterData_WarQuestSelectionMaster )
    {
      if ( HighestData->fields.frameType == *((_DWORD *)MasterData_WarQuestSelectionMaster + 6) )
        goto LABEL_11;
LABEL_12:
      v14 = *((_DWORD *)MasterData_WarQuestSelectionMaster + 5);
      LOBYTE(MasterData_WarQuestSelectionMaster) = 1;
      this->fields.combineLimitLv = v14;
      return (char)MasterData_WarQuestSelectionMaster;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_11:
  LOBYTE(MasterData_WarQuestSelectionMaster) = 0;
  return (char)MasterData_WarQuestSelectionMaster;
}


bool __fastcall CombineResultEffectComponent__CheckFinishedLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_B170D4();
  return LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__CheckSaintGraphProfileChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  ServantCommentMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40F99B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantCommentMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    byte_40F99B0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantCommentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantCommentMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return ServantCommentMaster__IsOpenImageLimitProfile(Master_WarQuestSelectionMaster, svtId, limitCount, 0LL);
}


void __fastcall CombineResultEffectComponent__Close(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *svtResultInfoWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  SvtCombineResultWindowComponent_o *v5; // x0
  UnityEngine_Component_o *skillResultInfoWindow; // x0
  UnityEngine_GameObject_o *v7; // x0
  SkillUpResultWindowComponent_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_40F99AD & 1) == 0 )
  {
    sub_B16FFC(&System_GC_TypeInfo, method);
    byte_40F99AD = 1;
  }
  this->fields.skillShowIndex = 0;
  this->fields.tdShowIndex = 0;
  CombineResultEffectComponent__DestroySvtFigure(this, method);
  svtResultInfoWindow = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
  if ( !svtResultInfoWindow )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(svtResultInfoWindow, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v5 = this->fields.svtResultInfoWindow;
    if ( !v5 )
      goto LABEL_18;
    SvtCombineResultWindowComponent__Close(v5, 0LL);
  }
  skillResultInfoWindow = (UnityEngine_Component_o *)this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    goto LABEL_18;
  v7 = UnityEngine_Component__get_gameObject(skillResultInfoWindow, 0LL);
  if ( !v7 )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf(v7, 0LL) )
  {
    v8 = this->fields.skillResultInfoWindow;
    if ( !v8 )
      goto LABEL_18;
    SkillUpResultWindowComponent__Close(v8, 0LL);
  }
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_42843716(0LL);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v9 )
LABEL_18:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v9, 0, 0LL);
}


void __fastcall CombineResultEffectComponent__CloseLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F99AF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_B16FFC(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__, v4);
    byte_40F99AF = 1;
  }
  v5 = Method_CombineResultEffectComponent_CloseLimitCountSealDialog__;
  if ( (*((_BYTE *)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B17004(Method_CombineResultEffectComponent_CloseLimitCountSealDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_0__,
    0LL);
  if ( !limitCountSealDialog )
    sub_B170D4();
  LimitCountSealDialogComponent__Close(limitCountSealDialog, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__CreateAfterFigurePrefab(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        System_String_o *nodeName,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Component_o *StandFigureNode; // x22
  WebViewManager_o *Instance; // x0
  DataManager_o *v21; // x24
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x25
  WarQuestSelectionMaster_o *v23; // x0
  SvtMultiPortraitMaster_o *v24; // x24
  int32_t ServantImageLimitSealAfter; // w0
  int32_t v26; // w20
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v28; // x24
  SvtMultiPortraitEntity_o *current; // x24
  int klass; // w8
  int32_t v31; // w25
  UnityEngine_GameObject_o *v32; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Component_o *v40; // x25
  UnityEngine_Transform_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  struct System_Int32_array *v50; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v52; // x26
  StandFigureCollect_o *v53; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *RenderPrefab_26843068; // x0
  UIStandFigureR_o *v56; // x20
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x19
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  StandFigureCollect_o *v63; // x21
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40F9991 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StandFigureCollect_TypeInfo, v18);
    byte_40F9991 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  v21 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v23 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v21,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  v24 = (SvtMultiPortraitMaster_o *)v23;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 svtId,
                                 imageLimitCount,
                                 0LL);
  if ( !v24 )
    goto LABEL_40;
  v26 = ServantImageLimitSealAfter;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(v24, svtId, ServantImageLimitSealAfter, 0LL);
  if ( !EntityListOrderBy
    || (v28 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      RenderPrefab_26843068 = (UnityEngine_Component_o *)StandFigureManager__CreateRenderPrefab_26843068(
                                                           gameObject,
                                                           svtId,
                                                           v26,
                                                           1,
                                                           faceType,
                                                           1,
                                                           0LL,
                                                           0,
                                                           -1,
                                                           0LL);
      if ( RenderPrefab_26843068 )
      {
        v56 = (UIStandFigureR_o *)RenderPrefab_26843068;
        transform = UnityEngine_Component__get_transform(RenderPrefab_26843068, 0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
          afterFigureCollectList = this->fields.afterFigureCollectList;
          v63 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v59, v60, v61, v62);
          StandFigureCollect___ctor(v63, 0LL, v56, 0LL);
          if ( afterFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    v28,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (SvtMultiPortraitEntity_o *)v66.fields.current;
    if ( !v66.fields.current )
      sub_B170D4();
    klass = (int)v66.fields.current[2].klass;
    if ( klass >= 1 )
      v31 = klass + 1;
    else
      v31 = 1;
    if ( !StandFigureNode )
      sub_B170D4();
    v32 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                         v32,
                         current->fields.portraitImageId,
                         1,
                         faceType,
                         v31,
                         0LL,
                         0,
                         -1,
                         0LL);
    v40 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B170D4();
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B16F98(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v41 = UnityEngine_Component__get_transform(v40, 0LL);
    if ( !v41 )
      sub_B170D4();
    UnityEngine_Transform__set_localPosition(v41, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v47 = UnityEngine_Component__get_gameObject(v40, 0LL);
      v50 = current->fields.commonPosition;
      if ( !v50 )
        sub_B170D4();
      max_length = v50->max_length;
      if ( max_length == 1 )
      {
        sub_B17100(v47, v48, v49);
        sub_B170A0();
      }
      if ( !max_length )
      {
        sub_B17100(v47, v48, v49);
        sub_B170A0();
      }
      GameObjectExtensions__AddLocalPosition_27420940(v47, (float)v50->m_Items[1], (float)v50->m_Items[2], 0LL);
    }
    v52 = this->fields.afterFigureCollectList;
    v53 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v42, v43, v44, v45);
    StandFigureCollect___ctor(v53, current, (UIStandFigureR_o *)v40, 0LL);
    if ( !v52 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v52,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__CreateBaseFigurePrefab(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        int32_t imageLimitCount,
        int32_t friendshipNum,
        System_String_o *nodeName,
        bool ignoreFormChangeCheck,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *StandFigureNode; // x23
  WebViewManager_o *Instance; // x0
  DataManager_o *v24; // x22
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x26
  WarQuestSelectionMaster_o *v26; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SvtMultiPortraitMaster_o *v28; // x27
  __int64 v29; // x22
  __int64 v30; // x24
  int32_t v31; // w0
  int32_t v32; // w24
  CombineResultEffectComponent_o *ServantImageLimitSealAfter; // x0
  const MethodInfo *v34; // x3
  int32_t v35; // w25
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v37; // x22
  unsigned int v38; // w26
  SvtMultiPortraitEntity_o *current; // x27
  int klass; // w8
  int32_t v41; // w28
  UnityEngine_GameObject_o *v42; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *v51; // x28
  UnityEngine_Transform_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_GameObject_o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  struct System_Int32_array *v61; // x8
  il2cpp_array_size_t max_length; // w9
  struct System_Collections_Generic_List_StandFigureCollect__o *v63; // x22
  StandFigureCollect_o *v64; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v66; // x0
  UIStandFigureR_o *v67; // x20
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x19
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  StandFigureCollect_o *v74; // x21
  bool v75; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+50h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_40F9988 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&formId);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StandFigureCollect_TypeInfo, v21);
    byte_40F9988 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 nodeName,
                                                 *(const MethodInfo **)&imageLimitCount);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  v24 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v26 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v24,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_54;
  v28 = (SvtMultiPortraitMaster_o *)v26;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v79.fields.currentCryptoKey = v30;
  *(_QWORD *)&v79.fields.fakeValue = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v79, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  v32 = v31;
  ServantImageLimitSealAfter = (CombineResultEffectComponent_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                                                   MasterData_WarQuestSelectionMaster,
                                                                   v31,
                                                                   imageLimitCount,
                                                                   0LL);
  v35 = (int)ServantImageLimitSealAfter;
  if ( ignoreFormChangeCheck )
  {
    v75 = CombineResultEffectComponent__GetIsIgnoreFormChange(
            ServantImageLimitSealAfter,
            v32,
            (int32_t)ServantImageLimitSealAfter,
            v34);
    if ( !v28 )
      goto LABEL_54;
  }
  else
  {
    v75 = 0;
    if ( !v28 )
      goto LABEL_54;
  }
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(v28, v32, v35, 0LL);
  if ( !EntityListOrderBy
    || (v37 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    if ( StandFigureNode )
    {
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      v66 = (UnityEngine_Component_o *)(ignoreFormChangeCheck | ((unsigned int)formId >> 31)
                                      ? StandFigureManager__CreateRenderPrefab_26843068(
                                          gameObject,
                                          v32,
                                          v35,
                                          1,
                                          0,
                                          1,
                                          0LL,
                                          v75,
                                          friendshipNum,
                                          0LL)
                                      : StandFigureManager__CreateRenderPrefab_26843988(
                                          gameObject,
                                          v32,
                                          v35,
                                          formId,
                                          1,
                                          0,
                                          1,
                                          0LL,
                                          0,
                                          friendshipNum,
                                          0LL));
      v67 = (UIStandFigureR_o *)v66;
      if ( v66 )
      {
        transform = UnityEngine_Component__get_transform(v66, 0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
          currentFigureCollectList = this->fields.currentFigureCollectList;
          v74 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v70, v71, v72, v73);
          StandFigureCollect___ctor(v74, 0LL, v67, 0LL);
          if ( currentFigureCollectList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)currentFigureCollectList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
            return;
          }
        }
      }
    }
LABEL_54:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v77,
    v37,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v38 = ignoreFormChangeCheck | ((unsigned int)formId >> 31);
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v78,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    current = (SvtMultiPortraitEntity_o *)v78.fields.current;
    if ( !v78.fields.current )
      sub_B170D4();
    klass = (int)v78.fields.current[2].klass;
    if ( klass >= 1 )
      v41 = klass + 1;
    else
      v41 = 1;
    if ( v38 )
    {
      if ( !StandFigureNode )
        sub_B170D4();
      v42 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           v42,
                           current->fields.portraitImageId,
                           1,
                           0,
                           v41,
                           0LL,
                           v75,
                           friendshipNum,
                           0LL);
    }
    else
    {
      if ( !StandFigureNode )
        sub_B170D4();
      v50 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      PrefabForImageId = StandFigureManager__CreatePrefabForImageIdAndForm(
                           v50,
                           current->fields.portraitImageId,
                           formId,
                           1,
                           0,
                           v41,
                           0LL,
                           0LL);
    }
    v51 = (UnityEngine_Component_o *)PrefabForImageId;
    if ( !PrefabForImageId )
      sub_B170D4();
    PrefabForImageId->fields.svtMultiPortraitEntity = current;
    sub_B16F98(
      (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
      (System_Int32_array **)current,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    v52 = UnityEngine_Component__get_transform(v51, 0LL);
    if ( !v52 )
      sub_B170D4();
    UnityEngine_Transform__set_localPosition(v52, this->fields.standBasePosition, 0LL);
    commonPosition = current->fields.commonPosition;
    if ( commonPosition && (int)commonPosition->max_length >= 2 )
    {
      v58 = UnityEngine_Component__get_gameObject(v51, 0LL);
      v61 = current->fields.commonPosition;
      if ( !v61 )
        sub_B170D4();
      max_length = v61->max_length;
      if ( max_length == 1 )
      {
        sub_B17100(v58, v59, v60);
        sub_B170A0();
      }
      if ( !max_length )
      {
        sub_B17100(v58, v59, v60);
        sub_B170A0();
      }
      GameObjectExtensions__AddLocalPosition_27420940(v58, (float)v61->m_Items[1], (float)v61->m_Items[2], 0LL);
    }
    v63 = this->fields.currentFigureCollectList;
    v64 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v53, v54, v55, v56);
    StandFigureCollect___ctor(v64, current, (UIStandFigureR_o *)v51, 0LL);
    if ( !v63 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v78,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
}


void __fastcall CombineResultEffectComponent__DestroySvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x0
  Il2CppObject *current; // x23
  UnityEngine_Object_o *monitor; // x20
  UIStandFigureR_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_StandFigureCollect__o *v14; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x0
  Il2CppObject *v16; // x24
  UnityEngine_Object_o *v17; // x20
  UIStandFigureR_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Object_o *v20; // x20
  int v21; // w20
  struct System_Collections_Generic_List_StandFigureCollect__o *v22; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  int v24[2]; // [xsp+20h] [xbp-60h]
  int v25; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40F99AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F99AC = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v25 = 0;
  currentFigureCollectList = this->fields.currentFigureCollectList;
  if ( !currentFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFigureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v26 = v23;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B170D4();
    monitor = (UnityEngine_Object_o *)v26.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v11 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v11 )
        sub_B170D4();
      UIStandFigureR__ReleaseCharacter(v11, 0LL);
      v12 = (UnityEngine_Component_o *)current[1].monitor;
      if ( !v12 )
        sub_B170D4();
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
    }
  }
  v24[0] = 88;
  v25 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  v25 = 0;
  v14 = this->fields.currentFigureCollectList;
  if ( !v14 )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v14,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
  afterFigureCollectList = this->fields.afterFigureCollectList;
  if ( !afterFigureCollectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)afterFigureCollectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  v26 = v23;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__) )
  {
    v16 = v26.fields.current;
    if ( !v26.fields.current )
      sub_B170D4();
    v17 = (UnityEngine_Object_o *)v26.fields.current[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      v18 = (UIStandFigureR_o *)v16[1].monitor;
      if ( !v18 )
        sub_B170D4();
      UIStandFigureR__ReleaseCharacter(v18, 0LL);
      v19 = (UnityEngine_Component_o *)v16[1].monitor;
      if ( !v19 )
        sub_B170D4();
      v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v20, 0LL);
    }
  }
  v24[0] = 187;
  v21 = ++v25;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  if ( v21 && v24[v21 - 1] == 187 )
    v25 = v21 - 1;
  v22 = this->fields.afterFigureCollectList;
  if ( !v22 )
LABEL_43:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v22,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_StandFigureCollect__Clear__);
}


void __fastcall CombineResultEffectComponent__EndDisp(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  UnityEngine_GameObject_o *touchInfo; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL), (touchInfo = this->fields.touchInfo) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(touchInfo, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__EndLoad(CombineResultEffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_40F999B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_CombineResultEffectComponent__EndLoad_b__144_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F999B = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndLoad_b__144_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall CombineResultEffectComponent__EndPlay(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 playCnt; // x8
  struct ServantVoiceData_array *playVoiceList; // x9
  ServantVoiceData_o *v19; // x8
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *limitUpKinds; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *touchInfo; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  int32_t costumeId; // w20
  BalanceConfig_c *v33; // x0
  unsigned int kind; // w8
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v36; // x20
  __int64 v37; // x21
  int32_t v38; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v39; // x8
  int32_t v40; // w20
  CombineResultEffectComponent_o *v41; // x0
  int32_t v42; // w21
  const MethodInfo *v43; // x3
  ServantCommentMaster_ProfileChangeDecideDelegate_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Action_o *v49; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v8 = this;
  if ( (byte_40F99A4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&Method_CombineResultEffectComponent_ProfileChangeDecideAction__, v10);
    sub_B16FFC(&Method_CombineResultEffectComponent__EndPlay_b__154_0__, v11);
    sub_B16FFC(&Method_CombineResultEffectComponent__EndPlay_b__154_1__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo, v15);
    this = (CombineResultEffectComponent_o *)sub_B16FFC(&StringLiteral_21401/*"playVoice"*/, v16);
    byte_40F99A4 = 1;
  }
  playCnt = v8->fields.playCnt;
  if ( (int)playCnt < v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( playVoiceList )
    {
      if ( (unsigned int)playCnt >= playVoiceList->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v19 = playVoiceList->m_Items[playCnt];
      if ( v19 )
      {
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)v8,
          (System_String_o *)StringLiteral_21401/*"playVoice"*/,
          v19->fields.delay,
          0LL);
        return;
      }
    }
LABEL_35:
    sub_B170D4();
  }
  if ( v8->fields.player )
    CombineResultEffectComponent__stopVoice(v8, method);
  v8->fields.playCnt = 0;
  v8->fields.playVoiceList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v8->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  limitUpKinds = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v8->fields.limitUpKinds;
  if ( !limitUpKinds )
    goto LABEL_35;
  if ( System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
         limitUpKinds,
         v8->fields.kind,
         (const MethodInfo_21DA97C *)Method_System_Collections_Generic_HashSet_CombineResultEffectComponent_Kind__Contains__) )
  {
    if ( v8->fields.isLimitUpSuppression )
      goto LABEL_13;
    kind = v8->fields.kind;
    if ( kind > 0x1A || ((1 << kind) & 0x4080002) == 0 )
      goto LABEL_13;
    baseUsrSvtData = v8->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_35;
    v37 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v37;
    *(_QWORD *)&v50.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
    v39 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v8->fields.baseUsrSvtData;
    if ( !v39 )
      goto LABEL_35;
    v40 = v38;
    v41 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                              v39[6],
                                              0LL);
    v42 = (_DWORD)v41 + 1;
    if ( CombineResultEffectComponent__CheckSaintGraphProfileChange(v41, v40, (_DWORD)v41 + 1, v43) )
    {
      v44 = (ServantCommentMaster_ProfileChangeDecideDelegate_o *)sub_B170CC(
                                                                    ServantCommentMaster_ProfileChangeDecideDelegate_TypeInfo,
                                                                    v21,
                                                                    v22,
                                                                    v23,
                                                                    v24);
      ServantCommentMaster_ProfileChangeDecideDelegate___ctor(
        v44,
        (Il2CppObject *)v8,
        Method_CombineResultEffectComponent_ProfileChangeDecideAction__,
        0LL);
      v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
      System_Action___ctor(v49, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_1__, 0LL);
      ServantCommentMaster__OpenSaintGraphProfileChange(v40, v42, v44, v49, 0LL);
    }
    else
    {
LABEL_13:
      limitUpResultCheck = v8->fields.limitUpResultCheck;
      v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)v8, Method_CombineResultEffectComponent__EndPlay_b__154_0__, 0LL);
      if ( !limitUpResultCheck )
        goto LABEL_35;
      LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v26, 1, 0LL);
    }
  }
  else if ( v8->fields.kind == 15 )
  {
    CombineResultEffectComponent__InitChangeInfoOnCostume(v8, v21);
    if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(v8, v27) )
    {
      touchInfo = v8->fields.touchInfo;
      if ( !touchInfo )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(touchInfo, 1, 0LL);
      costumeId = v8->fields.costumeId;
      v33 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v33 = BalanceConfig_TypeInfo;
      }
      if ( costumeId == v33->static_fields->CostumeIdMashu )
      {
        CombineResultEffectComponent__ShowSkillChangeMessage(v8, v30);
      }
      else
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(v8, v8->fields.skillShowIndex, v31);
        ++v8->fields.skillShowIndex;
      }
    }
    else
    {
      CombineResultEffectComponent__EndDisp(v8, v28);
    }
  }
}


void __fastcall CombineResultEffectComponent__FadeoutProcess(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_40F99A9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F99A9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  if ( this->fields.autoFadeout )
  {
    if ( callbackFunc )
    {
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
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__FadeoutProcess_b__163_0__,
        0LL);
      if ( !Instance )
        sub_B170D4();
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
    }
  }
  else if ( callbackFunc )
  {
    CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__GetIsIgnoreFormChange(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limit,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  struct System_Int32_array *ServantIdsIgnoreFormChange; // x8
  int max_length; // w9
  unsigned int v9; // w10

  if ( (byte_40F9990 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_40F9990 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ServantIdsIgnoreFormChange = v6->static_fields->ServantIdsIgnoreFormChange;
  if ( !ServantIdsIgnoreFormChange )
    sub_B170D4();
  max_length = ServantIdsIgnoreFormChange->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      sub_B17100(v6, *(_QWORD *)&svtId, *(_QWORD *)&limit);
      sub_B170A0();
    }
    if ( ServantIdsIgnoreFormChange->m_Items[v9 + 1] == svtId )
      break;
    if ( (int)++v9 >= max_length )
      return 0;
  }
  return limit != 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineResultEffectComponent__GetNameFromMessageId(
        CombineResultEffectComponent_o *this,
        int32_t messageId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantCostumeMaster_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  int32_t v18; // w0
  WebViewManager_o *v20; // x0
  WarQuestSelectionMaster_o *v21; // x0
  struct UserServantEntity_o *v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x19
  __int64 v24; // x20
  __int64 v25; // x21
  int32_t v26; // w0
  ServantCostumeEntity_o *v27; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40F99AA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&messageId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40F99AA = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  if ( (unsigned int)messageId >= 2 )
  {
    if ( messageId == 2 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_24;
      v15 = (ServantCostumeMaster_o *)MasterData_WarQuestSelectionMaster;
      v17 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = v17;
      *(_QWORD *)&v29.fields.fakeValue = v16;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL);
      if ( !v15 )
        goto LABEL_24;
      if ( ServantCostumeMaster__TryGetEntity(v15, &v27, v18, limitCount, 0LL) )
      {
        if ( v27 )
          return ServantCostumeEntity__getShortName(v27, 0LL);
LABEL_24:
        sub_B170D4();
      }
    }
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v20 )
    goto LABEL_24;
  v21 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v20,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = this->fields.resUsrSvtData;
  if ( !v22 )
    goto LABEL_24;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)v21;
  v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v25;
  *(_QWORD *)&v30.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
  if ( !v23 )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v23,
          &entity,
          v26,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    goto LABEL_24;
  return ServantEntity__getName((ServantEntity_o *)entity, -1, -1, 0LL);
}


UIPanel_o *__fastcall CombineResultEffectComponent__GetStandFigureNode(
        CombineResultEffectComponent_o *this,
        System_String_o *fmsString,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  UnityEngine_GameObject_o *effect; // x8
  System_String_o *v10; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0

  if ( (byte_40F998B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, fmsString);
    byte_40F998B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(FsmVariables, fmsString, 0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL), (effect = this->fields.effect) == 0LL)
    || (v10 = Value,
        transform = UnityEngine_GameObject__get_transform(effect, 0LL),
        (NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(transform, v10, 1, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  return (UIPanel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                        NodeFromName,
                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
}


void __fastcall CombineResultEffectComponent__InitChangeInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AvalonSceneManager_o *Instance; // x0
  WebViewManager_o *v8; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *AllList; // x0
  __int64 v11; // x23
  UserServantEntity_array *v12; // x20
  il2cpp_array_size_t v13; // w24
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v15; // q1
  UserServantEntity_o *v16; // x21
  int64_t v17; // x0
  __int128 v18; // q0
  int64_t v19; // x22
  int64_t v20; // x0
  __int64 id; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UserServantEntity_o *v28; // x0
  UserServantEntity_o *resUsrSvtData; // x0
  il2cpp_array_size_t i; // w20
  SkillInfo_o *v31; // x8
  SkillInfo_o *v32; // x9
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  SkillInfo_o *v34; // x8
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v35; // x0
  UserServantEntity_o *v36; // x0
  UserServantEntity_o *v37; // x0
  UserServantEntity_o *v38; // x0
  bool v39; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-80h]
  TreasureDvcInfo_o *v43; // [xsp+68h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *v45; // [xsp+78h] [xbp-48h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_40F999E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F999E = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( Instance )
    {
      if ( AvalonSceneManager__checkNowScene(Instance, 30, 0LL) )
        return;
      v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v8 )
      {
        MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v8,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          AllList = UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
          if ( AllList )
          {
            v11 = *(_QWORD *)&AllList->max_length;
            v12 = AllList;
            if ( (int)v11 >= 1 )
            {
              v13 = 0;
              while ( 1 )
              {
                baseUsrSvtData = this->fields.baseUsrSvtData;
                if ( !baseUsrSvtData )
                  goto LABEL_54;
                v15 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
                v16 = v12->m_Items[v13];
                *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v42.fields.fakeValue = v15;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v41 = v42;
                v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v41, 0LL);
                if ( !v16 )
                  goto LABEL_54;
                v18 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
                v19 = v17;
                *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v40.fields.fakeValue = v18;
                v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL);
                if ( v19 == v20 )
                  break;
                if ( (int)++v13 >= (int)v11 )
                  goto LABEL_21;
                if ( v13 >= v12->max_length )
                {
LABEL_55:
                  sub_B17100(v20, id, v22);
                  sub_B170A0();
                }
              }
              this->fields.resUsrSvtData = v16;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
                (System_Int32_array **)v16,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
            }
LABEL_21:
            v28 = this->fields.baseUsrSvtData;
            if ( v28 )
            {
              UserServantEntity__getSkillInfo(v28, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
              resUsrSvtData = this->fields.resUsrSvtData;
              if ( resUsrSvtData )
              {
                UserServantEntity__getSkillInfo(resUsrSvtData, &v45, -1, -1, 1, 0, -1, 0LL);
                for ( i = 0; ; ++i )
                {
                  v20 = (int64_t)BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v20 = (int64_t)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)(v20 + 184) + 32LL) )
                    break;
                  if ( !skillInfoList )
                    goto LABEL_54;
                  if ( i >= skillInfoList->max_length )
                    goto LABEL_55;
                  v31 = skillInfoList->m_Items[i];
                  if ( !v31 || !v45 )
                    goto LABEL_54;
                  if ( i >= v45->max_length )
                    goto LABEL_55;
                  v32 = v45->m_Items[i];
                  if ( !v32 )
                    goto LABEL_54;
                  id = (unsigned int)v31->fields.id;
                  if ( *(_QWORD *)&v31->fields.id != *(_QWORD *)&v32->fields.id )
                  {
                    costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
                    if ( !costumeSkillInfoManager )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
                      costumeSkillInfoManager,
                      id,
                      v31->fields.lv,
                      0LL);
                    if ( !v45 )
                      goto LABEL_54;
                    if ( i >= v45->max_length )
                      goto LABEL_55;
                    v34 = v45->m_Items[i];
                    if ( !v34 )
                      goto LABEL_54;
                    v35 = this->fields.costumeSkillInfoManager;
                    if ( !v35 )
                      goto LABEL_54;
                    CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
                      v35,
                      v34->fields.id,
                      v34->fields.lv,
                      0LL);
                  }
                }
                v36 = this->fields.baseUsrSvtData;
                if ( v36 )
                {
                  UserServantEntity__getTreasureDeviceInfo(v36, &tdInfo, -1, -1, 0, 0LL);
                  v37 = this->fields.resUsrSvtData;
                  if ( v37 )
                  {
                    UserServantEntity__getTreasureDeviceInfo(v37, &v43, -1, -1, 0, 0LL);
                    v38 = this->fields.baseUsrSvtData;
                    if ( v38 )
                    {
                      if ( !UserServantEntity__IsHeroine(v38, 0LL) )
                      {
                        v39 = 0;
LABEL_52:
                        this->fields.treasureDeviceEnabled = v39;
                        return;
                      }
                      if ( tdInfo && v43 )
                      {
                        v39 = tdInfo->fields.id != v43->fields.id || tdInfo->fields.lv != v43->fields.lv;
                        goto LABEL_52;
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
LABEL_54:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__InitCombineEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x20
  int v19; // s0
  UnityEngine_Collider_o *bgCollider; // x0
  UnityEngine_GameObject_o *touchInfo; // x0
  const MethodInfo *v24; // x1
  int32_t kind; // w8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v31; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x1

  if ( (byte_40F997B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v6);
    byte_40F997B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_20;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_20;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                    FsmVariables,
                    (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                    0LL);
  if ( !FsmGameObject )
    goto LABEL_20;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(FsmGameObject, 0LL);
  this->fields.effect = Value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_20;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  touchInfo = this->fields.touchInfo;
  if ( !touchInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(touchInfo, 0, 0LL);
  kind = this->fields.kind;
  if ( kind == 16 || kind == 14 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v31 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v31 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
    System_Action___ctor(
      v33,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__InitCombineEffect_b__111_0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v33, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  CombineResultEffectComponent__SetResultUserServantData(this, v24);
  if ( this->fields.kind == 6 )
    CombineResultEffectComponent__loadBoxGachaEffect(this, v34);
  else
    CombineResultEffectComponent__SetResultServantVoiceData(this, v34);
}


bool __fastcall CombineResultEffectComponent__IsShowLimitUpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0

  limitUpResultCheck = this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    sub_B170D4();
  return !LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0LL);
}


bool __fastcall CombineResultEffectComponent__IsShowNextNpInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  int v4; // w0

  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    sub_B170D4();
  v4 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0LL);
  return v4 >= 1 && this->fields.tdShowIndex < v4;
}


bool __fastcall CombineResultEffectComponent__IsShowSkillInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  int v8; // w20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  AvalonSceneManager_o *v16; // x0
  bool v17; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F99A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F99A5 = 1;
  }
  entity = 0LL;
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_19;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v12 )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v12,
          &entity,
          v15,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    goto LABEL_19;
  if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)entity, 0LL) )
    return 0;
  v16 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v16 )
LABEL_19:
    sub_B170D4();
  v17 = AvalonSceneManager__checkNowScene(v16, 30, 0LL);
  return v8 >= 1 && !v17 && this->fields.skillShowIndex < v8;
}


bool __fastcall CombineResultEffectComponent__IsShowTreasureDeviceInfoOnCostume(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureDeviceEnabled;
}


void __fastcall CombineResultEffectComponent__NameRevealCrossFade(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UICharaGraphTexture_o *nameRevealCard; // x0

  nameRevealCard = this->fields.nameRevealCard;
  if ( !nameRevealCard )
    sub_B170D4();
  UICharaGraphTexture__ExecuteNameCrossFade(nameRevealCard, this->fields.NAME_REVEAL_FADE_TIME, 0LL);
}


void __fastcall CombineResultEffectComponent__OnClickResultEffectSkip(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F99B2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5462/*"END_ANIMATION"*/, method);
    byte_40F99B2 = 1;
  }
  if ( !this->fields.isResultEffectSkipped )
  {
    fsm = this->fields.fsm;
    this->fields.isResultEffectSkipped = 1;
    if ( !fsm )
      sub_B170D4();
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5462/*"END_ANIMATION"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__OpenLimitCountSealDialog(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w0
  struct UserServantEntity_o *v13; // x8
  int32_t v14; // w20
  int32_t v15; // w21
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_o *LimitCountSealedDialogMessage; // x0
  LimitCountSealDialogComponent_o *limitCountSealDialog; // x21
  System_String_o *v19; // x20
  System_String_o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  LimitCountSealDialogComponent_CallbackFunc_o *v25; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40F99AE & 1) == 0 )
  {
    sub_B16FFC(&LimitCountSealDialogComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent_CloseLimitCountSealDialog__, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8359/*"LIMIT_COUNT_SEALED_TITLE"*/, v8);
    byte_40F99AE = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v11;
  *(_QWORD *)&v26.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
  v13 = this->fields.baseUsrSvtData;
  if ( !v13 )
    goto LABEL_17;
  v14 = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13->fields.limitCount, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_17;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    Master_WarQuestSelectionMaster,
                                    v14,
                                    v15 + 1,
                                    0LL);
  limitCountSealDialog = this->fields.limitCountSealDialog;
  v19 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8359/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v25 = (LimitCountSealDialogComponent_CallbackFunc_o *)sub_B170CC(
                                                          LimitCountSealDialogComponent_CallbackFunc_TypeInfo,
                                                          v21,
                                                          v22,
                                                          v23,
                                                          v24);
  LimitCountSealDialogComponent_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    (intptr_t)Method_CombineResultEffectComponent_CloseLimitCountSealDialog__,
    0LL);
  if ( !limitCountSealDialog )
LABEL_17:
    sub_B170D4();
  LimitCountSealDialogComponent__OpenLimitCountSealDialog(limitCountSealDialog, v20, v19, v25, 0LL);
}


bool __fastcall CombineResultEffectComponent__OpenNotification(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool v21; // w22
  unsigned int kind; // w8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  struct UserServantEntity_o *v27; // x8
  __int64 v28; // x21
  __int64 v29; // x22
  int32_t v30; // w0
  int32_t AscensionAfterDialogId; // w0
  struct UserServantEntity_o *v32; // x8
  int32_t v33; // w21
  __int64 v34; // x22
  __int64 v35; // x23
  int32_t v36; // w0
  int32_t v37; // w22
  int32_t v38; // w23
  const MethodInfo *v39; // x3
  Il2CppObject *NameFromMessageId; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v42; // x0
  System_String_o *v43; // x22
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x23
  int32_t v51; // [xsp+3Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_40F99AB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__, v10);
    sub_B16FFC(&CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11627/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40F99AB = 1;
  }
  v51 = 0;
  v14 = sub_B170CC(CombineResultEffectComponent___c__DisplayClass165_0_TypeInfo, method, v2, v3, v4);
  CombineResultEffectComponent___c__DisplayClass165_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass165_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_33;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  if ( this->fields.isLimitUpSuppression )
    return 0;
  kind = this->fields.kind;
  v21 = 0;
  if ( kind <= 0x1A && ((1 << kind) & 0x4088402) != 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( resUsrSvtData )
    {
      v26 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.currentCryptoKey;
      v25 = *(_QWORD *)&resUsrSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v26;
      *(_QWORD *)&v52.fields.fakeValue = v25;
      *(_DWORD *)(v14 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
      if ( this->fields.kind == 15 )
        *(_DWORD *)(v14 + 24) = this->fields.costumeId;
      v27 = this->fields.resUsrSvtData;
      if ( v27 )
      {
        v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v53.fields.currentCryptoKey = v29;
        *(_QWORD *)&v53.fields.fakeValue = v28;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
        AscensionAfterDialogId = ServantLimitMaster__GetAscensionAfterDialogId(v30, *(_DWORD *)(v14 + 24), 0LL);
        v51 = AscensionAfterDialogId;
        if ( AscensionAfterDialogId == -1 )
          return 0;
        v32 = this->fields.resUsrSvtData;
        if ( v32 )
        {
          v33 = AscensionAfterDialogId;
          v35 = *(_QWORD *)&v32->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&v32->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v54.fields.currentCryptoKey = v35;
          *(_QWORD *)&v54.fields.fakeValue = v34;
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
          v37 = *(_DWORD *)(v14 + 24);
          v38 = v36;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          }
          if ( ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(v38, v37, 0LL) )
            return 0;
          NameFromMessageId = (Il2CppObject *)CombineResultEffectComponent__GetNameFromMessageId(
                                                this,
                                                v33,
                                                *(_DWORD *)(v14 + 24),
                                                v39);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v42 = System_Int32__ToString((int32_t)&v51, 0LL);
          v43 = System_String__Concat_43743732((System_String_o *)StringLiteral_11627/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v42, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v44 = LocalizationManager__Get(v43, 0LL);
          v45 = System_String__Format(v44, NameFromMessageId, 0LL);
          v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
          System_Action___ctor(
            v50,
            (Il2CppObject *)v14,
            Method_CombineResultEffectComponent___c__DisplayClass165_0__OpenNotification_b__0__,
            0LL);
          if ( Instance )
          {
            v21 = 1;
            CommonUI__OpenNotificationDialog(
              Instance,
              (System_String_o *)StringLiteral_1/*""*/,
              v45,
              v50,
              -1,
              0,
              0,
              0,
              0,
              0,
              1,
              0,
              0LL,
              0LL);
            return v21;
          }
        }
      }
    }
LABEL_33:
    sub_B170D4();
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ProfileChangeDecideAction(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isDecide,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  CommonUI_o *Instance; // x22
  CommonUI_o *v34; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0
  WebViewManager_o *v36; // x0
  UserServantCollectionEntity_o *v37; // x20
  CommonUI_o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  ServantStatusDialog_EndDelegate_o *v43; // x23
  CommonUI_o *v44; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F99B1 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__, v16);
    sub_B16FFC(&CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo, v17);
    byte_40F99B1 = 1;
  }
  entity = 0LL;
  v18 = sub_B170CC(
          CombineResultEffectComponent___c__DisplayClass171_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount,
          isDecide,
          finishCallback);
  CombineResultEffectComponent___c__DisplayClass171_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass171_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_23;
  *(_QWORD *)(v18 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)finishCallback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( isDecide )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    if ( UserServantCollectionMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      }
      if ( Instance )
      {
        CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        v34 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v34 )
        {
          CommonUI__CloseConfirmDialog(v34, 0LL);
          limitUpResultCheck = this->fields.limitUpResultCheck;
          if ( limitUpResultCheck )
          {
            LimitUpResultCheckComponent__SetActiveInfoWindow(limitUpResultCheck, 0, 0LL);
            v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v37 = entity;
            v38 = (CommonUI_o *)v36;
            v43 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v39,
                                                         v40,
                                                         v41,
                                                         v42);
            ServantStatusDialog_EndDelegate___ctor(
              v43,
              (Il2CppObject *)v18,
              Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__0__,
              0LL);
            if ( v38 )
            {
              CommonUI__OpenServantStatusDialog_18249816(v38, 33, v37, limitCount, v43, 0LL);
              return;
            }
          }
        }
      }
LABEL_23:
      sub_B170D4();
    }
  }
  v44 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v44 )
    goto LABEL_23;
  CommonUI__CloseConfirmDialog_18237824(v44, *(System_Action_o **)(v18 + 24), 0LL);
}


void __fastcall CombineResultEffectComponent__ReleaseVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SoundManager_o *Instance; // x0

  if ( (byte_40F99A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    byte_40F99A7 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.playVoiceList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !System_String__IsNullOrEmpty(this->fields.asstName, 0LL) )
  {
    Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    SoundManager__ReleaseAudioAssetStorage(Instance, this->fields.asstName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAfterLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
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
  UnityEngine_Component_o *StandFigureNode; // x21
  WebViewManager_o *Instance; // x0
  DataManager_o *v23; // x22
  SvtMultiPortraitMaster_o *MasterData_WarQuestSelectionMaster; // x25
  WarQuestSelectionMaster_o *v25; // x0
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantLimitAddMaster_o *v27; // x24
  __int64 v28; // x22
  __int64 v29; // x23
  int32_t v30; // w0
  struct UserServantEntity_o *v31; // x8
  int32_t v32; // w22
  int32_t v33; // w0
  int32_t v34; // w23
  int32_t LimitCountUpResultServantLimitCount; // w0
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t ServantLimitCountSealAfter; // w23
  int32_t ImageLimitCount; // w0
  struct UserServantEntity_o *v39; // x8
  int32_t v40; // w23
  __int64 v41; // x24
  __int64 v42; // x26
  CombineResultEffectComponent_o *v43; // x0
  const MethodInfo *v44; // x3
  bool v45; // w0
  bool v46; // w24
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v48; // x25
  SvtMultiPortraitEntity_o *current; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Component_o *v58; // x26
  UnityEngine_Transform_o *transform; // x0
  struct System_Int32_array *commonPosition; // x8
  UnityEngine_Transform_o *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  float v65; // s0
  float v66; // s1
  float v67; // s2
  struct System_Int32_array *v68; // x8
  il2cpp_array_size_t max_length; // w9
  int v70; // s11
  int v71; // s12
  float v72; // s9
  float v73; // s10
  float v74; // s8
  UnityEngine_Transform_o *v75; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x27
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  StandFigureCollect_o *v81; // x28
  const MethodInfo *v82; // x2
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Component_o *RenderPrefab_26843068; // x0
  UIStandFigureR_o *v85; // x21
  UnityEngine_Transform_o *v86; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *v87; // x22
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  StandFigureCollect_o *v92; // x23
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  int32_t form; // w21
  float FadeTime; // s8
  int32_t face; // w22
  ServantVoiceData_o *v99; // x0
  __int64 v100; // x23
  struct System_Collections_Generic_List_StandFigureCollect__o *v101; // x24
  StandFigureCollect_o *v102; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  System_Collections_Generic_List_Enumerator_T__o v105; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+40h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F998E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v12);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StandFigureCollect_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_8497/*"LimitUpResSvtNodeName"*/, v20);
    byte_40F998E = 1;
  }
  entity = 0LL;
  memset(&v106, 0, sizeof(v106));
  StandFigureNode = (UnityEngine_Component_o *)CombineResultEffectComponent__GetStandFigureNode(
                                                 this,
                                                 (System_String_o *)StringLiteral_8497/*"LimitUpResSvtNodeName"*/,
                                                 method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  v23 = (DataManager_o *)Instance;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  MasterData_WarQuestSelectionMaster = (SvtMultiPortraitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     v23,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v23,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_74;
  v27 = (ServantLimitAddMaster_o *)v25;
  v29 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v108.fields.currentCryptoKey = v29;
  *(_QWORD *)&v108.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v108, 0LL);
  v31 = this->fields.resUsrSvtData;
  if ( !v31 )
    goto LABEL_74;
  v32 = v30;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31->fields.limitCount, 0LL);
  if ( !v27 )
    goto LABEL_74;
  v34 = v33;
  if ( ServantLimitAddMaster__TryGetEntity(v27, &entity, v32, v33, 0LL) )
  {
    if ( !entity )
      goto LABEL_74;
    LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
    if ( LimitCountUpResultServantLimitCount >= 0 )
      v34 = LimitCountUpResultServantLimitCount;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_74;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 v32,
                                 v34,
                                 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v32, ServantLimitCountSealAfter, 0LL);
  v39 = this->fields.resUsrSvtData;
  if ( !v39 )
    goto LABEL_74;
  v40 = ImageLimitCount;
  v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v109.fields.currentCryptoKey = v42;
  *(_QWORD *)&v109.fields.fakeValue = v41;
  v43 = (CombineResultEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v109, 0LL);
  v45 = CombineResultEffectComponent__GetIsIgnoreFormChange(v43, (int32_t)v43, v40, v44);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_74:
    sub_B170D4();
  v46 = v45;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(MasterData_WarQuestSelectionMaster, v32, v40, 0LL);
  if ( EntityListOrderBy
    && (v48 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListOrderBy,
        System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___)) )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v105,
      v48,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    v106 = v105;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v106,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
    {
      if ( !StandFigureNode )
        sub_B170D4();
      current = (SvtMultiPortraitEntity_o *)v106.fields.current;
      gameObject = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
      if ( !current )
        sub_B170D4();
      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                           gameObject,
                           current->fields.portraitImageId,
                           1,
                           0,
                           0,
                           0LL,
                           v46,
                           -1,
                           0LL);
      v58 = (UnityEngine_Component_o *)PrefabForImageId;
      if ( !PrefabForImageId )
        sub_B170D4();
      PrefabForImageId->fields.svtMultiPortraitEntity = current;
      sub_B16F98(
        (BattleServantConfConponent_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
        (System_Int32_array **)current,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      transform = UnityEngine_Component__get_transform(v58, 0LL);
      if ( !transform )
        sub_B170D4();
      UnityEngine_Transform__set_localPosition(transform, this->fields.standBasePosition, 0LL);
      commonPosition = current->fields.commonPosition;
      if ( commonPosition && (int)commonPosition->max_length >= 2 )
      {
        v61 = UnityEngine_Component__get_transform(v58, 0LL);
        if ( !v61 )
          sub_B170D4();
        *(UnityEngine_Vector3_o *)&v65 = UnityEngine_Transform__get_localPosition(v61, 0LL);
        v68 = current->fields.commonPosition;
        if ( !v68 )
          sub_B170D4();
        max_length = v68->max_length;
        if ( !max_length )
        {
          sub_B17100(v62, v63, v64);
          sub_B170A0();
        }
        if ( max_length == 1 )
        {
          sub_B17100(v62, v63, v64);
          sub_B170A0();
        }
        v71 = v68->m_Items[1];
        v70 = v68->m_Items[2];
        v72 = v65;
        v73 = v66;
        v74 = v67;
        v75 = UnityEngine_Component__get_transform(v58, 0LL);
        if ( !v75 )
          sub_B170D4();
        v110.fields.x = v72 + (float)v71;
        v110.fields.y = v73 + (float)v70;
        v110.fields.z = v74;
        UnityEngine_Transform__set_localPosition(v75, v110, 0LL);
      }
      UIStandFigureR__SetDepth(
        (UIStandFigureR_o *)v58,
        current->fields.displayPriority & ~(current->fields.displayPriority >> 31),
        0LL);
      afterFigureCollectList = this->fields.afterFigureCollectList;
      v81 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v77, v78, v79, v80);
      StandFigureCollect___ctor(v81, current, (UIStandFigureR_o *)v58, 0LL);
      if ( !afterFigureCollectList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterFigureCollectList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v106,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  }
  else
  {
    if ( !StandFigureNode )
      goto LABEL_74;
    v83 = UnityEngine_Component__get_gameObject(StandFigureNode, 0LL);
    RenderPrefab_26843068 = (UnityEngine_Component_o *)StandFigureManager__CreateRenderPrefab_26843068(
                                                         v83,
                                                         v32,
                                                         v40,
                                                         1,
                                                         0,
                                                         1,
                                                         0LL,
                                                         v46,
                                                         -1,
                                                         0LL);
    if ( !RenderPrefab_26843068 )
      goto LABEL_74;
    v85 = (UIStandFigureR_o *)RenderPrefab_26843068;
    v86 = UnityEngine_Component__get_transform(RenderPrefab_26843068, 0LL);
    if ( !v86 )
      goto LABEL_74;
    UnityEngine_Transform__set_localPosition(v86, this->fields.standBasePosition, 0LL);
    v87 = this->fields.afterFigureCollectList;
    v92 = (StandFigureCollect_o *)sub_B170CC(StandFigureCollect_TypeInfo, v88, v89, v90, v91);
    StandFigureCollect___ctor(v92, 0LL, v85, 0LL);
    if ( !v87 )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v87,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StandFigureCollect__Add__);
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v82);
  form = 0;
  FadeTime = 0.0;
  face = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      sub_B17100(LimitUpSvtVoiceList, v94, v95);
      sub_B170A0();
    }
    v99 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v99 )
      goto LABEL_74;
    face = v99->fields.face;
    form = v99->fields.form;
    FadeTime = ServantVoiceData__GetFadeTime(v99, 0LL);
  }
  if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
         (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) >= 1 )
  {
    v100 = 0LL;
    while ( 1 )
    {
      v101 = this->fields.afterFigureCollectList;
      if ( !v101 )
        break;
      if ( v101->fields._size <= (unsigned int)v100 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v102 = v101->fields._items->m_Items[v100];
      if ( !v102 )
        break;
      standFigure_k__BackingField = v102->fields._standFigure_k__BackingField;
      if ( !standFigure_k__BackingField )
        break;
      UIStandFigureR__SetFace_40887852(standFigure_k__BackingField, face, form, 0LL, FadeTime, 0LL);
      if ( (int)++v100 >= System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.afterFigureCollectList,
                            (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___) )
        return;
    }
    goto LABEL_74;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetAppendSkillCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t currentSkillId,
        int32_t currentSkillLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CombineRootComponent_c *v32; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v34; // x21

  if ( (byte_40F9977 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__, v13);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v14);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    byte_40F9977 = 1;
  }
  this->fields.kind = 25;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&currentSkillId,
    *(System_String_array ***)&currentSkillLv,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.targetId = currentSkillId;
  this->fields.targetIdOld = currentSkillId;
  this->fields.targetLv = currentSkillLv + 1;
  this->fields.targetLvOld = currentSkillLv;
  v32 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v32 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v32->static_fields->COMBINE_ASSET_PATH;
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetAppendSkillCombineInfo_b__107_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v34, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t formId,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t FigureImageLimitCount; // w0
  const MethodInfo *v7; // x6

  if ( (byte_40F9987 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2721/*"BaseSvtNodeName"*/, *(_QWORD *)&formId);
    byte_40F9987 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    sub_B170D4();
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(baseUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    formId,
    FigureImageLimitCount,
    this->fields.friendship,
    (System_String_o *)StringLiteral_2721/*"BaseSvtNodeName"*/,
    0,
    v7);
}


void __fastcall CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  struct UserServantEntity_o *v9; // x8
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v13; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F998C & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8496/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_40F998C = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  v9 = this->fields.baseUsrSvtData;
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  v10 = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9->fields.limitCount, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v10, v11, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8496/*"LimitUpBaseSvtNodeName"*/,
    1,
    v13);
}


void __fastcall CombineResultEffectComponent__SetCardParam(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  PlayMakerFSM_o *v40; // x0
  HutongGames_PlayMaker_FsmVariables_o *v41; // x0
  HutongGames_PlayMaker_FsmString_o *v42; // x0
  System_String_o *Value; // x0
  System_String_o *v44; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIExtrusionLabel_o *v48; // x20
  System_String_o *v49; // x0
  PlayMakerFSM_o *v50; // x0
  HutongGames_PlayMaker_FsmVariables_o *v51; // x0
  HutongGames_PlayMaker_FsmString_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x20
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  WebViewObject_o *v57; // x0
  UIExtrusionLabel_o *v58; // x20
  System_String_o *v59; // x0
  struct UserServantEntity_o *v60; // x8
  __int64 v61; // x20
  __int64 v62; // x21
  int32_t v63; // w0
  struct UserServantEntity_o *v64; // x8
  int32_t v65; // w20
  int32_t v66; // w21
  int32_t ImageLimitCount; // w0
  struct UserServantEntity_o *v68; // x8
  int32_t v69; // w0
  struct UserServantEntity_o *v70; // x8
  int32_t v71; // w20
  int32_t v72; // w0
  int32_t v73; // w0
  const MethodInfo *v74; // x2
  struct ServantChangeEntity_o *resSvtNameData; // x8
  _BOOL4 isLimitUpSuppression; // w9
  float v77; // s8
  _BOOL4 v78; // w20
  struct System_Int32_array *multiFace; // x23
  int32_t form; // w20
  int32_t face; // w21
  __int64 v82; // x1
  __int64 v83; // x2
  int32_t v84; // w22
  il2cpp_array_size_t *p_max_length; // x25
  __int64 *v86; // x24
  __int64 *v87; // x8
  PlayMakerFSM_o *v88; // x0
  __int64 *v89; // x8
  __int64 *v90; // x8
  PlayMakerFSM_o *v91; // x0
  HutongGames_PlayMaker_FsmVariables_o *v92; // x0
  HutongGames_PlayMaker_FsmString_o *v93; // x0
  System_String_o *v94; // x0
  System_String_o *v95; // x20
  UnityEngine_Transform_o *v96; // x0
  UnityEngine_Component_o *v97; // x0
  WebViewObject_o *v98; // x0
  UIExtrusionLabel_o *v99; // x20
  System_String_o *v100; // x0
  PlayMakerFSM_o *v101; // x0
  HutongGames_PlayMaker_FsmVariables_o *v102; // x0
  HutongGames_PlayMaker_FsmString_o *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x20
  UnityEngine_Transform_o *v106; // x0
  UnityEngine_Component_o *v107; // x0
  WebViewObject_o *v108; // x0
  UIExtrusionLabel_o *v109; // x20
  System_String_o *v110; // x0
  struct UserServantEntity_o *v111; // x0
  struct UserServantEntity_o *v112; // x8
  int32_t FrameType; // w0
  UserServantEntity_o *v114; // x0
  int32_t RarityIcon; // w0
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // x2
  UserServantEntity_o *v118; // x0
  const MethodInfo *v119; // x2
  const MethodInfo *v120; // x2
  __int64 v121; // x26
  struct System_Collections_Generic_List_StandFigureCollect__o *currentFigureCollectList; // x28
  StandFigureCollect_o *v123; // x8
  UIStandFigureR_o *isLevelMax; // x0
  int32_t v125; // w1
  PlayMakerFSM_o *v126; // x0
  HutongGames_PlayMaker_FsmVariables_o *v127; // x0
  HutongGames_PlayMaker_FsmString_o *v128; // x0
  System_String_o *v129; // x0
  System_String_o *v130; // x20
  UnityEngine_Transform_o *v131; // x0
  UnityEngine_Component_o *v132; // x0
  WebViewObject_o *v133; // x0
  const MethodInfo *v134; // x1
  const MethodInfo *v135; // x2
  const MethodInfo *v136; // x2
  UserServantEntity_o *resUsrSvtData; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  struct UserServantEntity_o *v139; // x9
  struct System_String_array *startAniName; // x8
  int v141; // w9
  struct System_String_o **p_LimitAnimName; // x8
  bool v143; // w2
  CombineResultEffectComponent_o *v144; // x0
  System_String_o *v145; // x1
  const MethodInfo *v146; // x2
  const MethodInfo *v147; // x2
  const MethodInfo *v148; // x2
  bool v149; // w2
  CombineResultEffectComponent_o *v150; // x0
  System_String_o *v151; // x1
  PlayMakerFSM_o *v152; // x0
  HutongGames_PlayMaker_FsmVariables_o *v153; // x0
  HutongGames_PlayMaker_FsmString_o *v154; // x0
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  __int64 *v161; // x8
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_GameObject_o *v163; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v164; // x20
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  EventDelegate_Callback_o *v169; // x22
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  EventDelegate_o *v174; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *callbackQueue; // x0
  const MethodInfo *v176; // x2
  PlayMakerFSM_o *v177; // x0
  HutongGames_PlayMaker_FsmVariables_o *v178; // x0
  HutongGames_PlayMaker_FsmString_o *v179; // x0
  System_String_o *v180; // x0
  System_String_o *v181; // x20
  UnityEngine_Transform_o *v182; // x0
  UnityEngine_Transform_o *v183; // x0
  UnityEngine_Component_o *v184; // x20
  HutongGames_PlayMaker_FsmVariables_o *v185; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v187; // s0
  float v188; // s8
  UnityEngine_GameObject_o *v189; // x0
  UnityEngine_Component_o *TexturePrefab_26882704; // x0
  UnityEngine_Component_o *v191; // x20
  UnityEngine_Transform_o *v192; // x0
  UnityEngine_Transform_o *v193; // x0
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  SvtCombineResultWindowComponent_o *v196; // x0
  UserServantEntity_o *v197; // x0
  PlayMakerFSM_o *v198; // x0
  HutongGames_PlayMaker_FsmVariables_o *v199; // x0
  System_Int32_array **v200; // x1
  BattleServantConfConponent_o *p_value; // x0
  const MethodInfo *v202; // x2
  struct System_String_array *v203; // x8
  int v204; // w9
  struct System_String_o *v205; // x20
  const MethodInfo *v206; // x2
  ServantVoiceData_o *fadeTexture; // x22
  float FadeTime; // s0
  HutongGames_PlayMaker_FsmVariables_o *v209; // x0
  HutongGames_PlayMaker_FsmString_o *v210; // x0
  PlayMakerFSM_o *v211; // x0
  PlayMakerFSM_o *fsm; // x0
  System_Int32_array **v213; // x20
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  const MethodInfo *v222; // x1
  SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x0
  UnityEngine_Component_o *v224; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v226; // [xsp+8h] [xbp-68h] BYREF
  __int64 v227; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  UnityEngine_Vector3_o v229; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v230; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F997F & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetCardParam_b__115_0__, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v6);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UILabel___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, v8);
    sub_B16FFC(&EventDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v10);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_4304/*"CostumeName"*/, v15);
    sub_B16FFC(&StringLiteral_2721/*"BaseSvtNodeName"*/, v16);
    sub_B16FFC(&StringLiteral_16735/*"bit_result_120"*/, v17);
    sub_B16FFC(&StringLiteral_16742/*"bit_result_extraskill02"*/, v18);
    sub_B16FFC(&StringLiteral_16751/*"bit_result_nobledeliverance"*/, v19);
    sub_B16FFC(&StringLiteral_12283/*"START_ANIMATION"*/, v20);
    sub_B16FFC(&StringLiteral_16739/*"bit_result_command_card_exceed"*/, v21);
    sub_B16FFC(&StringLiteral_16748/*"bit_result_limitbreak"*/, v22);
    sub_B16FFC(&StringLiteral_16743/*"bit_result_friendship_exceed"*/, v23);
    sub_B16FFC(&StringLiteral_11405/*"ResMaxLvExceedNodeName"*/, v24);
    sub_B16FFC(&StringLiteral_16756/*"bit_result_skillrank"*/, v25);
    sub_B16FFC(&StringLiteral_16737/*"bit_result_advent02"*/, v26);
    sub_B16FFC(&StringLiteral_16746/*"bit_result_grail_02"*/, v27);
    sub_B16FFC(&StringLiteral_16757/*"bit_result_skillup"*/, v28);
    sub_B16FFC(&StringLiteral_4433/*"CrtMaxLvExceedNodeName"*/, v29);
    sub_B16FFC(&StringLiteral_16752/*"bit_result_powerup"*/, v30);
    sub_B16FFC(&StringLiteral_12980/*"StartAnimationName"*/, v31);
    sub_B16FFC(&StringLiteral_16745/*"bit_result_grail_01"*/, v32);
    sub_B16FFC(&StringLiteral_16736/*"bit_result_advent01"*/, v33);
    sub_B16FFC(&StringLiteral_16741/*"bit_result_extraskill01"*/, v34);
    sub_B16FFC(&StringLiteral_16755/*"bit_result_skilldeliverance"*/, v35);
    sub_B16FFC(&StringLiteral_16758/*"bit_result_skinchange01"*/, v36);
    sub_B16FFC(&StringLiteral_4434/*"CrtMaxLvNodeName"*/, v37);
    sub_B16FFC(&StringLiteral_11406/*"ResMaxLvNodeName"*/, v38);
    sub_B16FFC(&StringLiteral_13120/*"SvtEqCardScale"*/, v39);
    byte_40F997F = 1;
  }
  v227 = 0LL;
  v226 = 0LL;
  switch ( this->fields.kind )
  {
    case 0:
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( !resUsrSvtData )
        goto LABEL_179;
      isLevelMax = (UIStandFigureR_o *)UserServantEntity__isLevelMax(resUsrSvtData, 0LL);
      if ( ((unsigned __int8)isLevelMax & 1) == 0 )
        goto LABEL_98;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      if ( !baseUsrSvtData )
        goto LABEL_179;
      v139 = this->fields.resUsrSvtData;
      if ( !v139 )
        goto LABEL_179;
      if ( baseUsrSvtData->fields.exp != v139->fields.exp )
      {
        p_LimitAnimName = &this->fields.LimitAnimName;
        goto LABEL_172;
      }
LABEL_98:
      startAniName = this->fields.startAniName;
      if ( !startAniName )
        goto LABEL_179;
      v141 = this->fields.successInfo - 1;
      if ( v141 < startAniName->max_length )
      {
        p_LimitAnimName = &startAniName->m_Items[v141];
LABEL_172:
        fsm = this->fields.fsm;
        if ( fsm )
        {
          v213 = (System_Int32_array **)*p_LimitAnimName;
          FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
          if ( FsmVariables )
          {
            FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                          FsmVariables,
                          (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/,
                          0LL);
            if ( FsmString )
            {
              FsmString->fields.value = (struct System_String_o *)v213;
              sub_B16F98(
                (BattleServantConfConponent_o *)&FsmString->fields.value,
                v213,
                v216,
                v217,
                v218,
                v219,
                v220,
                v221);
              CombineResultEffectComponent__SetLevelUpSvtFigure(this, v222);
              svtResultInfoWindow = this->fields.svtResultInfoWindow;
              if ( svtResultInfoWindow )
              {
                SvtCombineResultWindowComponent__setBefResultState(
                  svtResultInfoWindow,
                  this->fields.baseUsrSvtData,
                  0LL);
                v224 = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
                if ( v224 )
                {
                  gameObject = UnityEngine_Component__get_gameObject(v224, 0LL);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, this->fields.combineStatusDisp, 0LL);
                    goto LABEL_169;
                  }
                }
              }
            }
          }
        }
LABEL_179:
        sub_B170D4();
      }
      goto LABEL_180;
    case 1:
    case 0xA:
    case 0x13:
    case 0x1A:
      CombineResultEffectComponent__SetBeforeLimitUpSvtFigure(this, method);
      v40 = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !v40 )
        goto LABEL_179;
      v41 = PlayMakerFSM__get_FsmVariables(v40, 0LL);
      if ( !v41 )
        goto LABEL_179;
      v42 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v41, (System_String_o *)StringLiteral_4434/*"CrtMaxLvNodeName"*/, 0LL);
      if ( !v42 )
        goto LABEL_179;
      Value = HutongGames_PlayMaker_FsmString__get_Value(v42, 0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v44 = Value;
      transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(transform, v44, 1, 0LL);
      if ( !NodeFromName )
        goto LABEL_179;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  NodeFromName,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v48 = (UIExtrusionLabel_o *)Component_WebViewObject;
      HIDWORD(v227) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      v49 = System_Int32__ToString((int32_t)&v227 + 4, 0LL);
      if ( !v48 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v48, v49, 0LL);
      v50 = this->fields.fsm;
      if ( !v50 )
        goto LABEL_179;
      v51 = PlayMakerFSM__get_FsmVariables(v50, 0LL);
      if ( !v51 )
        goto LABEL_179;
      v52 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v51, (System_String_o *)StringLiteral_11406/*"ResMaxLvNodeName"*/, 0LL);
      if ( !v52 )
        goto LABEL_179;
      v53 = HutongGames_PlayMaker_FsmString__get_Value(v52, 0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v54 = v53;
      v55 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      v56 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v55, v54, 1, 0LL);
      if ( !v56 )
        goto LABEL_179;
      v57 = UnityEngine_Component__GetComponent_WebViewObject_(
              v56,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v58 = (UIExtrusionLabel_o *)v57;
      LODWORD(v227) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      v59 = System_Int32__ToString((int32_t)&v227, 0LL);
      if ( !v58 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v58, v59, 0LL);
      v60 = this->fields.baseUsrSvtData;
      if ( !v60 )
        goto LABEL_179;
      v62 = *(_QWORD *)&v60->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&v60->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v228.fields.currentCryptoKey = v62;
      *(_QWORD *)&v228.fields.fakeValue = v61;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v228, 0LL);
      v64 = this->fields.baseUsrSvtData;
      if ( !v64 )
        goto LABEL_179;
      v65 = v63;
      v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64->fields.limitCount, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(v65, v66, 0LL);
      v68 = this->fields.resUsrSvtData;
      this->fields.oldImgLimitCnt = ImageLimitCount;
      if ( !v68 )
        goto LABEL_179;
      v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v68->fields.svtId, 0LL);
      v70 = this->fields.resUsrSvtData;
      if ( !v70 )
        goto LABEL_179;
      v71 = v69;
      v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v70->fields.limitCount, 0LL);
      v73 = ImageLimitCount__GetImageLimitCount(v71, v72, 0LL);
      resSvtNameData = this->fields.resSvtNameData;
      isLimitUpSuppression = this->fields.isLimitUpSuppression;
      v77 = 0.0;
      this->fields.currentImgLimitCnt = v73;
      v78 = resSvtNameData != 0LL;
      if ( isLimitUpSuppression )
        goto LABEL_29;
      if ( this->fields.oldImgLimitCnt != v73 )
        goto LABEL_69;
      v118 = this->fields.resUsrSvtData;
      if ( !v118 )
        goto LABEL_179;
      if ( UserServantEntity__isLimitCountMax(v118, 0LL) )
      {
LABEL_69:
        this->fields.isChangeCardImg = 1;
        CombineResultEffectComponent__SetAfterLimitUpSvtFigure(this, 0, v74);
        CombineResultEffectComponent__setBaseSvtGraphCard(this, v78, v119);
        CombineResultEffectComponent__setResultSvtGraphCard(this, v78, v120);
        v86 = &StringLiteral_16737/*"bit_result_advent02"*/;
LABEL_154:
        v88 = this->fields.fsm;
        if ( !v88 )
          goto LABEL_179;
        v205 = (struct System_String_o *)*v86;
        goto LABEL_165;
      }
      if ( this->fields.isLimitUpSuppression || !CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v74) )
      {
LABEL_29:
        multiFace = 0LL;
        form = 0;
        face = 0;
        goto LABEL_30;
      }
      isLevelMax = (UIStandFigureR_o *)CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, v206);
      if ( !isLevelMax )
        goto LABEL_179;
      if ( LODWORD(isLevelMax->fields.bodyTexture) )
      {
        fadeTexture = (ServantVoiceData_o *)isLevelMax->fields.fadeTexture;
        if ( !fadeTexture )
          goto LABEL_179;
        face = fadeTexture->fields.face;
        form = fadeTexture->fields.form;
        FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)isLevelMax->fields.fadeTexture, 0LL);
        multiFace = fadeTexture->fields.multiFace;
        v77 = FadeTime;
LABEL_30:
        v84 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.currentFigureCollectList,
                (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
        if ( multiFace )
        {
          p_max_length = &multiFace->max_length;
          v86 = &StringLiteral_16736/*"bit_result_advent01"*/;
          if ( v84 != multiFace->max_length || v84 <= 0 )
            goto LABEL_154;
        }
        else
        {
          if ( v84 < 1 )
          {
            v86 = &StringLiteral_16736/*"bit_result_advent01"*/;
            goto LABEL_154;
          }
          p_max_length = (il2cpp_array_size_t *)&off_18;
        }
        v86 = &StringLiteral_16736/*"bit_result_advent01"*/;
        v121 = 0LL;
        while ( 1 )
        {
          currentFigureCollectList = this->fields.currentFigureCollectList;
          if ( !currentFigureCollectList )
            goto LABEL_179;
          if ( currentFigureCollectList->fields._size <= (unsigned int)v121 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v123 = currentFigureCollectList->fields._items->m_Items[v121];
          if ( !v123 )
            goto LABEL_179;
          isLevelMax = v123->fields._standFigure_k__BackingField;
          if ( multiFace )
          {
            if ( (unsigned int)v121 >= *p_max_length )
              goto LABEL_180;
            if ( !isLevelMax )
              goto LABEL_179;
            v125 = multiFace->m_Items[v121 + 1];
          }
          else
          {
            if ( !isLevelMax )
              goto LABEL_179;
            v125 = face;
          }
          UIStandFigureR__SetFace_40887852(isLevelMax, v125, form, 0LL, v77, 0LL);
          if ( (int)++v121 >= v84 )
            goto LABEL_154;
        }
      }
      goto LABEL_180;
    case 2:
      v143 = 1;
      v144 = this;
      v145 = (System_String_o *)StringLiteral_16757/*"bit_result_skillup"*/;
      goto LABEL_108;
    case 3:
      v90 = &StringLiteral_16755/*"bit_result_skilldeliverance"*/;
      goto LABEL_107;
    case 4:
      v149 = 1;
      v150 = this;
      v151 = (System_String_o *)StringLiteral_16757/*"bit_result_skillup"*/;
      goto LABEL_125;
    case 5:
      v87 = &StringLiteral_16751/*"bit_result_nobledeliverance"*/;
      goto LABEL_124;
    case 6:
      v177 = this->fields.fsm;
      if ( !v177 )
        goto LABEL_179;
      v178 = PlayMakerFSM__get_FsmVariables(v177, 0LL);
      if ( !v178 )
        goto LABEL_179;
      v179 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v178, (System_String_o *)StringLiteral_2721/*"BaseSvtNodeName"*/, 0LL);
      if ( !v179 )
        goto LABEL_179;
      v180 = HutongGames_PlayMaker_FsmString__get_Value(v179, 0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v181 = v180;
      v182 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      v183 = TransformHelper__getNodeFromName(v182, v181, 1, 0LL);
      if ( !this->fields.fsm )
        goto LABEL_179;
      v184 = (UnityEngine_Component_o *)v183;
      v185 = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
      if ( !v185 )
        goto LABEL_179;
      FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v185, (System_String_o *)StringLiteral_13120/*"SvtEqCardScale"*/, 0LL);
      if ( !FsmFloat )
        goto LABEL_179;
      v187 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
      if ( !v184 )
        goto LABEL_179;
      v188 = v187;
      v189 = UnityEngine_Component__get_gameObject(v184, 0LL);
      TexturePrefab_26882704 = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab_26882704(
                                                            v189,
                                                            this->fields.resUsrSvtData,
                                                            10,
                                                            0LL,
                                                            0LL);
      if ( !TexturePrefab_26882704 )
        goto LABEL_179;
      v191 = TexturePrefab_26882704;
      v192 = UnityEngine_Component__get_transform(TexturePrefab_26882704, 0LL);
      if ( !v192 )
        goto LABEL_179;
      v229.fields.x = -50.0;
      v229.fields.y = 92.0;
      v229.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(v192, v229, 0LL);
      v193 = UnityEngine_Component__get_transform(v191, 0LL);
      if ( !v193 )
        goto LABEL_179;
      v230.fields.x = v188;
      v230.fields.y = v188;
      v230.fields.z = v188;
      UnityEngine_Transform__set_localScale(v193, v230, 0LL);
      v194 = (UnityEngine_Component_o *)this->fields.svtResultInfoWindow;
      if ( !v194 )
        goto LABEL_179;
      v195 = UnityEngine_Component__get_gameObject(v194, 0LL);
      if ( !v195 )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive(v195, 1, 0LL);
      v196 = this->fields.svtResultInfoWindow;
      if ( !v196 )
        goto LABEL_179;
      SvtCombineResultWindowComponent__setBefSvtEqResultState(
        v196,
        this->fields.baseUsrSvtData,
        this->fields.successInfo,
        this->fields.normalExp,
        this->fields.addTotalExp,
        0LL);
      v197 = this->fields.resUsrSvtData;
      if ( !v197 )
        goto LABEL_179;
      isLevelMax = (UIStandFigureR_o *)UserServantEntity__isLevelMax(v197, 0LL);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
      {
        v89 = (__int64 *)&this->fields.LimitAnimName;
      }
      else
      {
        v203 = this->fields.startAniName;
        if ( !v203 )
          goto LABEL_179;
        v204 = this->fields.successInfo - 1;
        if ( v204 >= v203->max_length )
        {
LABEL_180:
          sub_B17100(isLevelMax, v82, v83);
          sub_B170A0();
        }
        v89 = (__int64 *)&v203->m_Items[v204];
      }
LABEL_163:
      v88 = this->fields.fsm;
      if ( !v88 )
        goto LABEL_179;
LABEL_164:
      v205 = (struct System_String_o *)*v89;
LABEL_165:
      v209 = PlayMakerFSM__get_FsmVariables(v88, 0LL);
      if ( !v209 )
        goto LABEL_179;
      v210 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v209, (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/, 0LL);
      if ( !v210 )
        goto LABEL_179;
      v210->fields.value = v205;
      p_value = (BattleServantConfConponent_o *)&v210->fields.value;
      v200 = (System_Int32_array **)v205;
LABEL_168:
      sub_B16F98(p_value, v200, v155, v156, v157, v158, v159, v160);
LABEL_169:
      v211 = this->fields.fsm;
      if ( !v211 )
        goto LABEL_179;
      PlayMakerFSM__SendEvent(v211, (System_String_o *)StringLiteral_12283/*"START_ANIMATION"*/, 0LL);
      return;
    case 7:
    case 0x15:
      v90 = &StringLiteral_16756/*"bit_result_skillrank"*/;
LABEL_107:
      v145 = (System_String_o *)*v90;
      v144 = this;
      v143 = 0;
LABEL_108:
      CombineResultEffectComponent__SetCardParam_Skill(v144, v145, v143, v3);
      return;
    case 8:
    case 0x12:
    case 0x1B:
      v87 = &StringLiteral_16756/*"bit_result_skillrank"*/;
LABEL_124:
      v151 = (System_String_o *)*v87;
      v150 = this;
      v149 = 0;
LABEL_125:
      CombineResultEffectComponent__SetCardParam_TreasureDvc(v150, v151, v149, v3);
      return;
    case 9:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      v152 = this->fields.fsm;
      if ( !v152 )
        goto LABEL_179;
      v153 = PlayMakerFSM__get_FsmVariables(v152, 0LL);
      if ( !v153 )
        goto LABEL_179;
      v154 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v153, (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/, 0LL);
      if ( !v154 )
        goto LABEL_179;
      v161 = &StringLiteral_16757/*"bit_result_skillup"*/;
      goto LABEL_147;
    case 0xB:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      v198 = this->fields.fsm;
      if ( !v198 )
        goto LABEL_179;
      v199 = PlayMakerFSM__get_FsmVariables(v198, 0LL);
      if ( !v199 )
        goto LABEL_179;
      v154 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v199, (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/, 0LL);
      if ( !v154 )
        goto LABEL_179;
      v161 = &StringLiteral_16752/*"bit_result_powerup"*/;
LABEL_147:
      v200 = (System_Int32_array **)*v161;
      v154->fields.value = (struct System_String_o *)*v161;
      p_value = (BattleServantConfConponent_o *)&v154->fields.value;
      goto LABEL_168;
    case 0xC:
    case 0x16:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      v91 = this->fields.fsm;
      this->fields.isChangeCardImg = 0;
      if ( !v91 )
        goto LABEL_179;
      v92 = PlayMakerFSM__get_FsmVariables(v91, 0LL);
      if ( !v92 )
        goto LABEL_179;
      v93 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v92, (System_String_o *)StringLiteral_4433/*"CrtMaxLvExceedNodeName"*/, 0LL);
      if ( !v93 )
        goto LABEL_179;
      v94 = HutongGames_PlayMaker_FsmString__get_Value(v93, 0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v95 = v94;
      v96 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      v97 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v96, v95, 1, 0LL);
      if ( !v97 )
        goto LABEL_179;
      v98 = UnityEngine_Component__GetComponent_WebViewObject_(
              v97,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_179;
      v99 = (UIExtrusionLabel_o *)v98;
      HIDWORD(v226) = UserServantEntity__getLevelMax(this->fields.baseUsrSvtData, 0LL);
      v100 = System_Int32__ToString((int32_t)&v226 + 4, 0LL);
      if ( !v99 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v99, v100, 0LL);
      v101 = this->fields.fsm;
      if ( !v101 )
        goto LABEL_179;
      v102 = PlayMakerFSM__get_FsmVariables(v101, 0LL);
      if ( !v102 )
        goto LABEL_179;
      v103 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v102, (System_String_o *)StringLiteral_11405/*"ResMaxLvExceedNodeName"*/, 0LL);
      if ( !v103 )
        goto LABEL_179;
      v104 = HutongGames_PlayMaker_FsmString__get_Value(v103, 0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v105 = v104;
      v106 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      v107 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v106, v105, 1, 0LL);
      if ( !v107 )
        goto LABEL_179;
      v108 = UnityEngine_Component__GetComponent_WebViewObject_(
               v107,
               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      v109 = (UIExtrusionLabel_o *)v108;
      LODWORD(v226) = UserServantEntity__getLevelMax(this->fields.resUsrSvtData, 0LL);
      v110 = System_Int32__ToString((int32_t)&v226, 0LL);
      if ( !v109 )
        goto LABEL_179;
      UIExtrusionLabel__set_text(v109, v110, 0LL);
      v111 = this->fields.baseUsrSvtData;
      if ( !v111 )
        goto LABEL_179;
      if ( v111->fields.exceedCount )
        goto LABEL_57;
      v112 = this->fields.resUsrSvtData;
      if ( !v112 )
        goto LABEL_179;
      if ( v112->fields.exceedCount >= 1 )
        this->fields.isChangeCardImg = 1;
LABEL_57:
      FrameType = UserServantEntity__getFrameType(v111, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      if ( FrameType != UserServantEntity__getFrameType(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      v114 = this->fields.baseUsrSvtData;
      if ( !v114 )
        goto LABEL_179;
      RarityIcon = UserServantEntity__getRarityIcon(v114, 0LL);
      if ( !this->fields.resUsrSvtData )
        goto LABEL_179;
      if ( RarityIcon != UserServantEntity__getRarityIcon(this->fields.resUsrSvtData, 0LL) )
        this->fields.isChangeCardImg = 1;
      if ( this->fields.kind == 22 )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v116);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v117);
        v89 = &StringLiteral_16748/*"bit_result_limitbreak"*/;
      }
      else if ( this->fields.isChangeCardImg )
      {
        CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v116);
        CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v202);
        v89 = &StringLiteral_16746/*"bit_result_grail_02"*/;
      }
      else
      {
        v89 = &StringLiteral_16745/*"bit_result_grail_01"*/;
      }
      goto LABEL_163;
    case 0xD:
    case 0x17:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      v88 = this->fields.fsm;
      if ( !v88 )
        goto LABEL_179;
      v89 = &StringLiteral_16743/*"bit_result_friendship_exceed"*/;
      goto LABEL_164;
    case 0xF:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      v126 = this->fields.fsm;
      if ( !v126 )
        goto LABEL_179;
      v127 = PlayMakerFSM__get_FsmVariables(v126, 0LL);
      if ( !v127 )
        goto LABEL_179;
      v128 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v127, (System_String_o *)StringLiteral_4304/*"CostumeName"*/, 0LL);
      if ( !v128 )
        goto LABEL_179;
      v129 = HutongGames_PlayMaker_FsmString__get_Value(v128, 0LL);
      if ( !this->fields.effect )
        goto LABEL_179;
      v130 = v129;
      v131 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
      v132 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v131, v130, 1, 0LL);
      if ( !v132 )
        goto LABEL_179;
      v133 = UnityEngine_Component__GetComponent_WebViewObject_(
               v132,
               (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( !v133 )
        goto LABEL_179;
      UILabel__set_text((UILabel_o *)v133, this->fields.costumeName, 0LL);
      this->fields.isChangeCardImg = 1;
      CombineResultEffectComponent__setCostumeCombineResSvtFigure(this, v134);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v135);
      CombineResultEffectComponent__setResultCostumeSvtGraphCard(this, 0, v136);
      v88 = this->fields.fsm;
      if ( !v88 )
        goto LABEL_179;
      v89 = &StringLiteral_16758/*"bit_result_skinchange01"*/;
      goto LABEL_164;
    case 0x14:
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v2);
      v88 = this->fields.fsm;
      if ( !v88 )
        goto LABEL_179;
      v89 = &StringLiteral_16739/*"bit_result_command_card_exceed"*/;
      goto LABEL_164;
    case 0x18:
      CombineResultEffectComponent__setLimitUpBaseSvtFigure(this, method);
      CombineResultEffectComponent__SetLimitUpAfterSvtFigure(this, 1, v146);
      CombineResultEffectComponent__setBaseSvtGraphCard(this, 0, v147);
      CombineResultEffectComponent__setResultSvtGraphCard(this, 0, v148);
      v88 = this->fields.fsm;
      if ( !v88 )
        goto LABEL_179;
      v89 = &StringLiteral_16735/*"bit_result_120"*/;
      goto LABEL_164;
    case 0x19:
      effect = this->fields.effect;
      if ( !effect )
        goto LABEL_179;
      v163 = UnityEngine_GameObject__get_gameObject(effect, 0LL);
      if ( !v163 )
        goto LABEL_179;
      v164 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
               v163,
               (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
      v169 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v165, v166, v167, v168);
      EventDelegate_Callback___ctor(
        v169,
        (Il2CppObject *)this,
        Method_CombineResultEffectComponent__SetCardParam_b__115_0__,
        0LL);
      v174 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v170, v171, v172, v173);
      EventDelegate___ctor_29412484(v174, v169, 0LL);
      if ( !v164 )
        goto LABEL_179;
      callbackQueue = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v164->fields.callbackQueue;
      if ( !callbackQueue )
        goto LABEL_179;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        callbackQueue,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v174,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      CombineResultEffectComponent__SetBaseSvtFigure(this, 0, v176);
      v88 = this->fields.fsm;
      v89 = (__int64 *)(this->fields.targetLvOld ? &StringLiteral_16742/*"bit_result_extraskill02"*/ : &StringLiteral_16741/*"bit_result_extraskill01"*/);
      if ( !v88 )
        goto LABEL_179;
      goto LABEL_164;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCardParam_Skill(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  EventDelegate_Callback_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  EventDelegate_o *v25; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *callbackQueue; // x0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  PlayMakerFSM_o *v36; // x0

  if ( (byte_40F9982 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, startName);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__, v7);
    sub_B16FFC(&EventDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B16FFC(&StringLiteral_12283/*"START_ANIMATION"*/, v11);
    sub_B16FFC(&StringLiteral_12980/*"StartAnimationName"*/, v12);
    byte_40F9982 = 1;
  }
  CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  if ( isSkip )
  {
    effect = this->fields.effect;
    if ( !effect
      || (gameObject = UnityEngine_GameObject__get_gameObject(effect, 0LL)) == 0LL
      || (v15 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  gameObject,
                  (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___),
          v20 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v16, v17, v18, v19),
          EventDelegate_Callback___ctor(
            v20,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__SetCardParam_Skill_b__118_0__,
            0LL),
          v25 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v21, v22, v23, v24),
          EventDelegate___ctor_29412484(v25, v20, 0LL),
          !v15)
      || (callbackQueue = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15->fields.callbackQueue) == 0LL )
    {
LABEL_14:
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      callbackQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_14;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_14;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                FsmVariables,
                (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/,
                0LL);
  if ( !FsmString )
    goto LABEL_14;
  FsmString->fields.value = startName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&FsmString->fields.value,
    (System_Int32_array **)startName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = this->fields.fsm;
  if ( !v36 )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(v36, (System_String_o *)StringLiteral_12283/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCardParam_TreasureDvc(
        CombineResultEffectComponent_o *this,
        System_String_o *startName,
        bool isSkip,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  EventDelegate_Callback_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  EventDelegate_o *v25; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *callbackQueue; // x0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  PlayMakerFSM_o *v36; // x0

  if ( (byte_40F9983 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, startName);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__, v7);
    sub_B16FFC(&EventDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UITouchPress___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10);
    sub_B16FFC(&StringLiteral_12283/*"START_ANIMATION"*/, v11);
    sub_B16FFC(&StringLiteral_12980/*"StartAnimationName"*/, v12);
    byte_40F9983 = 1;
  }
  if ( isSkip )
  {
    effect = this->fields.effect;
    if ( !effect )
      goto LABEL_17;
    gameObject = UnityEngine_GameObject__get_gameObject(effect, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    v15 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            gameObject,
            (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UITouchPress___);
    v20 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v16, v17, v18, v19);
    EventDelegate_Callback___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent__SetCardParam_TreasureDvc_b__119_0__,
      0LL);
    v25 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v21, v22, v23, v24);
    EventDelegate___ctor_29412484(v25, v20, 0LL);
    if ( !v15 )
      goto LABEL_17;
    callbackQueue = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v15->fields.callbackQueue;
    if ( !callbackQueue )
      goto LABEL_17;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      callbackQueue,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
  }
  if ( this->fields.kind == 18 )
    CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(this, (const MethodInfo *)startName);
  else
    CombineResultEffectComponent__SetBaseSvtFigure(this, 0, (const MethodInfo *)isSkip);
  fsm = this->fields.fsm;
  if ( !fsm
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                      FsmVariables,
                      (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/,
                      0LL)) == 0LL
    || (FsmString->fields.value = startName,
        sub_B16F98(
          (BattleServantConfConponent_o *)&FsmString->fields.value,
          (System_Int32_array **)startName,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        (v36 = this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(v36, (System_String_o *)StringLiteral_12283/*"START_ANIMATION"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCombineLimit(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        bool autoFadeout,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  CommonUI_o *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  CombineRootComponent_c *v34; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_40F997A & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, baseData);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__, v12);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v13);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_40F997A = 1;
  }
  this->fields.kind = 24;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)callback,
    (System_String_array **)autoFadeout,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = autoFadeout;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v34 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v34 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v34->static_fields->EXCEED_ASSET_PATH;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetCombineLimit_b__110_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v36, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCommandCardExceedInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t cardIndex,
        int32_t exceedCount,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CombineRootComponent_c *v31; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x20
  UnityEngine_Transform_o *transform; // x21
  int v37; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *v43; // x0

  if ( (byte_40F9974 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, userServantEntity);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_16739/*"bit_result_command_card_exceed"*/, v16);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v17);
    sub_B16FFC(&StringLiteral_12288/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, v18);
    byte_40F9974 = 1;
  }
  this->fields.kind = 20;
  this->fields.baseUsrSvtData = userServantEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userServantEntity,
    *(System_String_array ***)&cardIndex,
    *(System_String_array ***)&exceedCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.commandCardIndex = cardIndex;
  this->fields.commandCardExceedCount = exceedCount;
  v31 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v31 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v31->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16739/*"bit_result_command_card_exceed"*/,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v34 )
    goto LABEL_17;
  v35 = v34;
  transform = UnityEngine_GameObject__get_transform(v34, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v37, 0LL),
        (fsm = this->fields.fsm) == 0LL)
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          FsmVariables,
                          (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                          0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v35, 0LL), (v43 = this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(v43, (System_String_o *)StringLiteral_12288/*"START_COMMAND_CARD_EXCEED_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetCostumeCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtEntity,
        int32_t costumeId,
        System_String_o *costumeName,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  CombineResultEffectComponent_CostumeSkillInfoManager_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F996E & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo, userSvtEntity);
    sub_B16FFC(&StringLiteral_12290/*"START_COSTUME_EFFECT"*/, v13);
    byte_40F996E = 1;
  }
  this->fields.kind = 15;
  this->fields.baseUsrSvtData = userSvtEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userSvtEntity,
    *(System_String_array ***)&costumeId,
    (System_String_array **)costumeName,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.costumeId = costumeId;
  this->fields.costumeName = costumeName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeName,
    (System_Int32_array **)costumeName,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.skillShowIndex = 0;
  *(_WORD *)&this->fields.treasureDeviceEnabled = 256;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.setResUsrSvtData = 0;
  v36 = (CombineResultEffectComponent_CostumeSkillInfoManager_o *)sub_B170CC(
                                                                    CombineResultEffectComponent_CostumeSkillInfoManager_TypeInfo,
                                                                    v32,
                                                                    v33,
                                                                    v34,
                                                                    v35);
  CombineResultEffectComponent_CostumeSkillInfoManager___ctor(v36, 0LL);
  this->fields.costumeSkillInfoManager = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.costumeSkillInfoManager,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12290/*"START_COSTUME_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CombineRootComponent_c *v29; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x20
  UnityEngine_Transform_o *transform; // x21
  int v35; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *v41; // x0

  if ( (byte_40F9972 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, userSvtData);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16743/*"bit_result_friendship_exceed"*/, v14);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v15);
    sub_B16FFC(&StringLiteral_12293/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v16);
    byte_40F9972 = 1;
  }
  this->fields.kind = 13;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.setResUsrSvtData = 0;
  v29 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v29 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v29->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16743/*"bit_result_friendship_exceed"*/,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v32 )
    goto LABEL_17;
  v33 = v32;
  transform = UnityEngine_GameObject__get_transform(v32, 0LL);
  *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v35, 0LL),
        (fsm = this->fields.fsm) == 0LL)
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                          FsmVariables,
                          (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                          0LL)) == 0LL
    || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v33, 0LL), (v41 = this->fields.fsm) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(v41, (System_String_o *)StringLiteral_12293/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *userSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CommonUI_o *Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  CombineRootComponent_c *v33; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v35; // x21

  if ( (byte_40F9973 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, userSvtData);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__, v12);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v13);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    byte_40F9973 = 1;
  }
  this->fields.kind = 23;
  this->fields.baseUsrSvtData = userSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)userSvtData,
    *(System_String_array ***)&oldFriendShipRank,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.setResUsrSvtData = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v33 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v33 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v33->static_fields->COMBINE_ASSET_PATH;
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31, v32);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetFriendshipCombineInfoForOtherRoot_b__103_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v35, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetFriendshipUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        int32_t oldFriendShipRank,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F9968 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12292/*"START_FRIENDSHIPUP_EFFECT"*/, usrSvtData);
    byte_40F9968 = 1;
  }
  this->fields.kind = 9;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    *(System_String_array ***)&oldFriendShipRank,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.oldFriendShipRank = oldFriendShipRank;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12292/*"START_FRIENDSHIPUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLevelUpSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  int32_t v11; // w20
  int32_t FigureImageLimitCount; // w0
  int32_t Id; // w20
  WebViewManager_o *Instance; // x0
  ServantScriptMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantScriptEntity_o *Entity_28287888; // x0
  struct UserServantEntity_o *v17; // x1
  struct UserServantEntity_o *resUsrSvtData; // x8
  System_String_o *combineVoiceId; // x2
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  ServantVoiceData_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ServantVoiceData_array *v28; // x1
  struct ServantVoiceData_array **p_playVoiceList; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  MethodInfo *v32; // x2
  struct ServantVoiceData_array *playVoiceList; // x8
  ServantVoiceData_o *v34; // x8
  int32_t form; // w1
  CombineResultEffectComponent_o *v36; // x0
  __int64 v37; // x0
  const MethodInfo *v38; // x2
  struct UserServantEntity_o *v39; // x8
  System_String_array *v40; // x20
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_o *v47; // x0
  __int64 v48; // x2
  ServantVoiceEntity_o *v49; // x20
  UserServantEntity_o *v50; // x21
  __int64 v51; // x0
  const MethodInfo *v52; // x2
  struct UserServantEntity_o *v53; // x8
  __int64 v54; // x20
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x21
  System_String_o *v61; // x0
  ServantVoiceEntity_o *v62; // x20
  UserServantEntity_o *v63; // x21
  struct ServantVoiceData_array *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  ServantVoiceEntity_o *v71; // x0
  int32_t lv; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_40F9989 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultFormManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantScriptMaster___, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&string___TypeInfo, v6);
    byte_40F9989 = 1;
  }
  lv = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_51;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v9;
  *(_QWORD *)&v73.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_51;
  v11 = v10;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.baseUsrSvtData, 0, 0LL);
  Id = ServantScriptMaster__getId(v11, FigureImageLimitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  MasterData_WarQuestSelectionMaster = (ServantScriptMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantScriptMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_51;
  Entity_28287888 = ServantScriptMaster__GetEntity_28287888(MasterData_WarQuestSelectionMaster, Id, 0LL);
  if ( Entity_28287888 && this->fields.svtVoiceEntity )
  {
    if ( !ServantScriptEntity__isMultipleForm(Entity_28287888, 0LL) )
    {
      svtVoiceEntity = this->fields.svtVoiceEntity;
      if ( !svtVoiceEntity )
        goto LABEL_51;
      combineVoiceId = this->fields.combineVoiceId;
      v17 = this->fields.baseUsrSvtData;
LABEL_20:
      v21 = ServantVoiceEntity__lotteryLevelUpVoice_30041000(svtVoiceEntity, v17, combineVoiceId, 0LL);
LABEL_21:
      v28 = v21;
      p_playVoiceList = &this->fields.playVoiceList;
      this->fields.playVoiceList = v28;
      goto LABEL_22;
    }
    v17 = this->fields.baseUsrSvtData;
    if ( v17 )
    {
      lv = v17->fields.lv;
      resUsrSvtData = this->fields.resUsrSvtData;
      if ( resUsrSvtData )
      {
        combineVoiceId = this->fields.combineVoiceId;
        if ( combineVoiceId )
        {
          svtVoiceEntity = this->fields.svtVoiceEntity;
          if ( !svtVoiceEntity )
            goto LABEL_51;
          goto LABEL_20;
        }
        if ( System_Int32__Equals_38275732((int32_t)&lv, resUsrSvtData->fields.lv, 0LL) )
        {
          v36 = this;
          form = 0;
LABEL_26:
          CombineResultEffectComponent__SetBaseSvtFigure(v36, form, v32);
          return;
        }
        v37 = sub_B17014(string___TypeInfo, 1LL, v32);
        v39 = this->fields.baseUsrSvtData;
        if ( v39 )
        {
          v40 = (System_String_array *)v37;
          *(_QWORD *)&v74.fields.currentCryptoKey = &v39->fields.svtId;
          *(_QWORD *)&v74.fields.fakeValue = 0LL;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v74, v38);
          if ( v40 )
          {
            v46 = (System_Int32_array **)v30;
            if ( v30 )
            {
              v30 = (System_String_o *)sub_B170BC(v30, v40->obj.klass->_1.element_class);
              if ( !v30 )
                goto LABEL_53;
            }
            if ( !v40->max_length )
              goto LABEL_52;
            v40->m_Items[0] = (System_String_o *)v46;
            sub_B16F98(
              (BattleServantConfConponent_o *)v40->m_Items,
              v46,
              (System_String_array **)v32,
              v41,
              v42,
              v43,
              v44,
              v45);
            v47 = System_String__Concat_43823856(v40, 0LL);
            if ( UnityEngine_PlayerPrefs__GetInt_34836848(v47, 0LL) == 1 )
            {
              v49 = this->fields.svtVoiceEntity;
              v50 = this->fields.baseUsrSvtData;
              if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
              }
              v21 = CombineResultFormManager__lotteryCombineResult(v49, v50, 0LL);
              goto LABEL_21;
            }
            v51 = sub_B17014(string___TypeInfo, 1LL, v48);
            v53 = this->fields.baseUsrSvtData;
            if ( v53 )
            {
              v54 = v51;
              *(_QWORD *)&v75.fields.currentCryptoKey = &v53->fields.svtId;
              *(_QWORD *)&v75.fields.fakeValue = 0LL;
              v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v75, v52);
              if ( v54 )
              {
                v60 = (System_Int32_array **)v30;
                if ( !v30 || (v30 = (System_String_o *)sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
                {
                  if ( !*(_DWORD *)(v54 + 24) )
                    goto LABEL_52;
                  *(_QWORD *)(v54 + 32) = v60;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)(v54 + 32),
                    v60,
                    (System_String_array **)v32,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59);
                  v61 = System_String__Concat_43823856((System_String_array *)v54, 0LL);
                  UnityEngine_PlayerPrefs__SetInt(v61, 1, 0LL);
                  v62 = this->fields.svtVoiceEntity;
                  v63 = this->fields.baseUsrSvtData;
                  if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
                  }
                  v64 = CombineResultFormManager__lotteryCombineResultInit(v62, v63, 0LL);
                  this->fields.playVoiceList = v64;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.playVoiceList,
                    (System_Int32_array **)v64,
                    v65,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70);
                  playVoiceList = this->fields.playVoiceList;
                  if ( playVoiceList )
                  {
LABEL_23:
                    if ( playVoiceList->max_length )
                    {
                      v34 = playVoiceList->m_Items[0];
                      if ( !v34 )
                        goto LABEL_51;
                      form = v34->fields.form;
                      v36 = this;
                      goto LABEL_26;
                    }
LABEL_52:
                    sub_B17100(v30, v31, v32);
                    sub_B170A0();
                  }
                  v71 = this->fields.svtVoiceEntity;
                  if ( !v71 )
                    goto LABEL_51;
                  v28 = ServantVoiceEntity__lotteryLevelUpVoice_30041000(
                          v71,
                          this->fields.baseUsrSvtData,
                          this->fields.combineVoiceId,
                          0LL);
                  this->fields.playVoiceList = v28;
                  p_playVoiceList = &this->fields.playVoiceList;
LABEL_22:
                  sub_B16F98(
                    (BattleServantConfConponent_o *)p_playVoiceList,
                    (System_Int32_array **)v28,
                    v22,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27);
                  playVoiceList = this->fields.playVoiceList;
                  if ( !playVoiceList )
                    goto LABEL_51;
                  goto LABEL_23;
                }
LABEL_53:
                sub_B170F4(v30);
                sub_B170A0();
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetLimitUpAfterSvtFigure(
        CombineResultEffectComponent_o *this,
        bool isForceNormalFace,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t face; // w20
  ServantVoiceData_o *v13; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w0
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w22
  WebViewManager_o *Instance; // x0
  ServantLimitAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t LimitCountUpResultServantLimitCount; // w0
  int32_t ImageLimitCount; // w0
  const MethodInfo *v25; // x5
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40F998F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, isForceNormalFace);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_8497/*"LimitUpResSvtNodeName"*/, v8);
    byte_40F998F = 1;
  }
  entity = 0LL;
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, method);
  face = 0;
  if ( LimitUpSvtVoiceList && !isForceNormalFace )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      sub_B17100(LimitUpSvtVoiceList, v10, v11);
      sub_B170A0();
    }
    v13 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v13 )
      goto LABEL_23;
    face = v13->fields.face;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_23;
  v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  v18 = this->fields.resUsrSvtData;
  if ( !v18 )
    goto LABEL_23;
  v19 = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18->fields.limitCount, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !ServantLimitAddMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v19, v20, 0LL) )
    goto LABEL_19;
  if ( !entity )
LABEL_23:
    sub_B170D4();
  LimitCountUpResultServantLimitCount = ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(entity, 0LL);
  if ( LimitCountUpResultServantLimitCount >= 0 )
    v20 = LimitCountUpResultServantLimitCount;
LABEL_19:
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v19, v20, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v19,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8497/*"LimitUpResSvtNodeName"*/,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetLimitUpCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        UserServantEntity_o *baseData,
        int32_t baseCollectionLimitCnt,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        ServantChangeEntity_o *servantChange,
        bool autoFadeout,
        int32_t displayType,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        System_Collections_Generic_List_int____o *rewardGiftDataList,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
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
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v52; // x21
  __int64 v53; // x22
  int32_t v54; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v57; // x8
  ServantLimitImageMaster_o *v58; // x20
  int32_t v59; // w0
  bool IsServantLimitCountSeal; // w0
  PlayMakerFSM_o *fsm; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_40F996C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&StringLiteral_12295/*"START_LIMITUP_EFFECT"*/, v20);
    byte_40F996C = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    (System_String_array **)baseData,
    *(System_String_array ***)&baseCollectionLimitCnt,
    (System_Boolean_array **)callback,
    (System_Int32_array **)servantChange,
    (System_Int32_array *)autoFadeout,
    *(System_Int32_array **)&displayType);
  this->fields.baseUsrSvtCollectionLimitCnt = baseCollectionLimitCnt;
  this->fields.resSvtNameData = servantChange;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)servantChange,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.setResUsrSvtData = 0;
  this->fields.callbackFunc = callback;
  this->fields.displayType = displayType;
  this->fields.autoFadeout = autoFadeout;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( genderType >= 1 )
    this->fields.genderType = genderType;
  this->fields.limitUpPlayVoiceLabel = playVoiceLabel;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.limitUpPlayVoiceLabel,
    (System_Int32_array **)playVoiceLabel,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.limitUpRewardGiftDataList = rewardGiftDataList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.limitUpRewardGiftDataList,
    (System_Int32_array **)rewardGiftDataList,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !baseData )
    goto LABEL_14;
  v53 = *(_QWORD *)&baseData->fields.limitCount.fields.currentCryptoKey;
  v52 = *(_QWORD *)&baseData->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v53;
  *(_QWORD *)&v64.fields.fakeValue = v52;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v57 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  *(_QWORD *)&v65.fields.fakeValue = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  v58 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_QWORD *)&v65.fields.currentCryptoKey = v57;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v65, 0LL);
  if ( !v58
    || (IsServantLimitCountSeal = ServantLimitImageMaster__IsServantLimitCountSeal(v58, v59, v54 + 1, 0LL),
        fsm = this->fields.fsm,
        this->fields.isLimitUpSuppression = IsServantLimitCountSeal,
        !fsm) )
  {
LABEL_14:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12295/*"START_LIMITUP_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetLvExceedCombineInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct UserServantEntity_o **p_baseUsrSvtData; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x0
  const MethodInfo *v34; // x2
  System_String_array *v35; // x21
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_o *v45; // x0
  __int64 v46; // x2
  __int64 v47; // x0
  const MethodInfo *v48; // x2
  __int64 v49; // x21
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x22
  System_String_o *v56; // x0
  UserServantEntity_o *v57; // x20
  CombineRootComponent_c *v58; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x20
  UnityEngine_Transform_o *transform; // x21
  int v64; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *v70; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_40F9970 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, usrSvtData);
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v11);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&string___TypeInfo, v15);
    sub_B16FFC(&StringLiteral_12296/*"START_LVEXCEED_EFFECT"*/, v16);
    sub_B16FFC(&StringLiteral_16744/*"bit_result_grail"*/, v17);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v18);
    byte_40F9970 = 1;
  }
  this->fields.kind = 12;
  this->fields.baseUsrSvtData = usrSvtData;
  p_baseUsrSvtData = &this->fields.baseUsrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = sub_B17014(string___TypeInfo, 1LL, v32);
  if ( !this->fields.baseUsrSvtData
    || (v35 = (System_String_array *)v33,
        *(_QWORD *)&v71.fields.currentCryptoKey = &this->fields.baseUsrSvtData->fields.svtId,
        *(_QWORD *)&v71.fields.fakeValue = 0LL,
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v71, v34),
        !v35) )
  {
LABEL_34:
    sub_B170D4();
  }
  v44 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (System_String_o *)sub_B170BC(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_36;
  }
  if ( !v35->max_length )
    goto LABEL_35;
  v35->m_Items[0] = (System_String_o *)v44;
  sub_B16F98((BattleServantConfConponent_o *)v35->m_Items, v44, v38, v39, v40, v41, v42, v43);
  v45 = System_String__Concat_43823856(v35, 0LL);
  if ( UnityEngine_PlayerPrefs__GetInt_34836848(v45, 0LL) == 1 )
  {
    if ( !*p_baseUsrSvtData )
      goto LABEL_34;
    if ( !(*p_baseUsrSvtData)->fields.exceedCount )
    {
      v47 = sub_B17014(string___TypeInfo, 1LL, v46);
      if ( !*p_baseUsrSvtData )
        goto LABEL_34;
      v49 = v47;
      *(_QWORD *)&v72.fields.currentCryptoKey = &(*p_baseUsrSvtData)->fields.svtId;
      *(_QWORD *)&v72.fields.fakeValue = 0LL;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v72, v48);
      if ( !v49 )
        goto LABEL_34;
      v55 = (System_Int32_array **)v36;
      if ( !v36 || (v36 = (System_String_o *)sub_B170BC(v36, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0LL )
      {
        if ( *(_DWORD *)(v49 + 24) )
        {
          *(_QWORD *)(v49 + 32) = v55;
          sub_B16F98((BattleServantConfConponent_o *)(v49 + 32), v55, v38, v50, v51, v52, v53, v54);
          v56 = System_String__Concat_43823856((System_String_array *)v49, 0LL);
          UnityEngine_PlayerPrefs__SetInt(v56, 0, 0LL);
          v57 = *p_baseUsrSvtData;
          if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
          }
          CombineResultFormManager__ResetVoiceList(v57, 0LL);
          goto LABEL_20;
        }
LABEL_35:
        sub_B17100(v36, v37, v38);
        sub_B170A0();
      }
LABEL_36:
      sub_B170F4(v36);
      sub_B170A0();
    }
  }
LABEL_20:
  v58 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v58 = CombineRootComponent_TypeInfo;
  }
  effectAssetData = v58->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_34;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               (System_String_o *)StringLiteral_16744/*"bit_result_grail"*/,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v61 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v61 )
    goto LABEL_34;
  v62 = v61;
  transform = UnityEngine_GameObject__get_transform(v61, 0LL);
  *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_34;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v64, 0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_34;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_34;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                    FsmVariables,
                    (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                    0LL);
  if ( !FsmGameObject )
    goto LABEL_34;
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v62, 0LL);
  v70 = this->fields.fsm;
  if ( !v70 )
    goto LABEL_34;
  PlayMakerFSM__SendEvent(v70, (System_String_o *)StringLiteral_12296/*"START_LVEXCEED_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetLvExceedInfoForOtherRoot(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  CombineRootComponent_c *v32; // x0
  System_String_o *EXCEED_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v34; // x21

  if ( (byte_40F9971 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, usrSvtData);
    sub_B16FFC(&Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__, v11);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v12);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_40F9971 = 1;
  }
  this->fields.kind = 22;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v32 = CombineRootComponent_TypeInfo;
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v32 = CombineRootComponent_TypeInfo;
  }
  EXCEED_ASSET_PATH = v32->static_fields->EXCEED_ASSET_PATH;
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__SetLvExceedInfoForOtherRoot_b__101_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(EXCEED_ASSET_PATH, v34, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__SetNameRevealInfo(
        CombineResultEffectComponent_o *this,
        ServantChangeEntity_o *before,
        ServantChangeEntity_o *after,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  struct ServantChangeEntity_o **p_crtSvtNameData; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0
  struct ServantChangeEntity_o *resSvtNameData; // x8
  System_String_o *name; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  PlayMakerFSM_o *v44; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  System_String_o *v48; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  PlayMakerFSM_o *v52; // x0
  HutongGames_PlayMaker_FsmVariables_o *v53; // x0
  HutongGames_PlayMaker_FsmString_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x21
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Component_o *v58; // x0
  WebViewObject_o *v59; // x0
  WebViewObject_o *v60; // x21
  PlayMakerFSM_o *v61; // x0
  HutongGames_PlayMaker_FsmVariables_o *v62; // x0
  HutongGames_PlayMaker_FsmString_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x22
  UnityEngine_Transform_o *v66; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_ParticleSystem_o *v68; // x0
  UnityEngine_ParticleSystem_o *v69; // x22
  float v70; // s0
  const MethodInfo *v71; // x3
  struct ServantChangeEntity_o *crtSvtNameData; // x8
  const MethodInfo *v73; // x4
  struct ServantChangeEntity_o *v74; // x8
  int32_t v75; // w3
  PlayMakerFSM_o *v76; // x0
  HutongGames_PlayMaker_FsmVariables_o *v77; // x0
  HutongGames_PlayMaker_FsmString_o *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  UnityEngine_ParticleSystem_MinMaxCurve_o v86; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v87; // [xsp+28h] [xbp-58h] BYREF
  struct UnityEngine_ParticleSystem_o *v88; // [xsp+48h] [xbp-38h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v90; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v91; // 0:x0.8
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F996D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, before);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_11407/*"ResNameNodeName"*/, v16);
    sub_B16FFC(&StringLiteral_12297/*"START_NAME_REVEAL_EFFECT"*/, v17);
    sub_B16FFC(&StringLiteral_9378/*"NameRevealCrossFade"*/, v18);
    sub_B16FFC(&StringLiteral_4435/*"CrtNameNodeName"*/, v19);
    sub_B16FFC(&StringLiteral_16749/*"bit_result_name_reveal"*/, v20);
    sub_B16FFC(&StringLiteral_12980/*"StartAnimationName"*/, v21);
    sub_B16FFC(&StringLiteral_1/*""*/, v22);
    sub_B16FFC(&StringLiteral_9379/*"NameRevealParticleNodeName"*/, v23);
    byte_40F996D = 1;
  }
  m_ParticleSystem = 0LL;
  v88 = 0LL;
  this->fields.kind = 14;
  this->fields.crtSvtNameData = before;
  p_crtSvtNameData = &this->fields.crtSvtNameData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.crtSvtNameData,
    (System_Int32_array **)before,
    (System_String_array **)after,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.resSvtNameData = after;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resSvtNameData,
    (System_Int32_array **)after,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_40;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12297/*"START_NAME_REVEAL_EFFECT"*/, 0LL);
  resSvtNameData = this->fields.resSvtNameData;
  this->fields.isChangeCardImg = 0;
  if ( resSvtNameData )
  {
    name = resSvtNameData->fields.name;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_crtSvtNameData )
      goto LABEL_40;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_40;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (*p_crtSvtNameData)->fields.svtId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_40;
    name = ServantEntity__getTrueName(Entity, -1, 0LL);
  }
  v44 = this->fields.fsm;
  if ( !v44 )
    goto LABEL_40;
  FsmVariables = PlayMakerFSM__get_FsmVariables(v44, 0LL);
  if ( !FsmVariables )
    goto LABEL_40;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(FsmVariables, (System_String_o *)StringLiteral_4435/*"CrtNameNodeName"*/, 0LL);
  if ( !FsmString )
    goto LABEL_40;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v48 = Value;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(transform, v48, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_40;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              NodeFromName,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !*p_crtSvtNameData )
    goto LABEL_40;
  if ( !Component_WebViewObject )
    goto LABEL_40;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)Component_WebViewObject, (*p_crtSvtNameData)->fields.name, 0LL);
  v52 = this->fields.fsm;
  if ( !v52 )
    goto LABEL_40;
  v53 = PlayMakerFSM__get_FsmVariables(v52, 0LL);
  if ( !v53 )
    goto LABEL_40;
  v54 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v53, (System_String_o *)StringLiteral_11407/*"ResNameNodeName"*/, 0LL);
  if ( !v54 )
    goto LABEL_40;
  v55 = HutongGames_PlayMaker_FsmString__get_Value(v54, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v56 = v55;
  v57 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  v58 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v57, v56, 1, 0LL);
  if ( !v58 )
    goto LABEL_40;
  v59 = UnityEngine_Component__GetComponent_WebViewObject_(
          v58,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIExtrusionLabel___);
  if ( !v59 )
    goto LABEL_40;
  v60 = v59;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)v59, name, 0LL);
  v61 = this->fields.fsm;
  if ( !v61 )
    goto LABEL_40;
  v62 = PlayMakerFSM__get_FsmVariables(v61, 0LL);
  if ( !v62 )
    goto LABEL_40;
  v63 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v62, (System_String_o *)StringLiteral_9379/*"NameRevealParticleNodeName"*/, 0LL);
  if ( !v63 )
    goto LABEL_40;
  v64 = HutongGames_PlayMaker_FsmString__get_Value(v63, 0LL);
  if ( !this->fields.effect )
    goto LABEL_40;
  v65 = v64;
  v66 = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  v67 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(v66, v65, 1, 0LL);
  if ( !v67 )
    goto LABEL_40;
  v68 = (UnityEngine_ParticleSystem_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          v67,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
  if ( !v68 )
    goto LABEL_40;
  v69 = v68;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission(v68, 0LL).fields.m_ParticleSystem;
  v88 = UnityEngine_ParticleSystem__get_shape(v69, 0LL).fields.m_ParticleSystem;
  v70 = (float)((float)SLODWORD(v60[1].fields.onStarted) / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
      * this->fields.NAME_REVEAL_EMISSION_BASE_RATE;
  memset(&v87, 0, sizeof(v87));
  UnityEngine_ParticleSystem_MinMaxCurve___ctor(&v87, v70, 0LL);
  v90.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v86 = v87;
  UnityEngine_ParticleSystem_EmissionModule__set_rateOverTime(v90, &v86, 0LL);
  v92.fields.y = this->fields.NAME_REVEAL_EMISSION_BASE_BOX_Y;
  v91.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v88;
  v92.fields.x = (float)((float)SLODWORD(v60[1].fields.onStarted) / this->fields.NAME_REVEAL_EMISSION_BASE_SIZE)
               * this->fields.NAME_REVEAL_EMISSION_BASE_BOX_X;
  v92.fields.z = 0.0;
  UnityEngine_ParticleSystem_ShapeModule__set_scale(v91, v92, 0LL);
  crtSvtNameData = this->fields.crtSvtNameData;
  if ( !crtSvtNameData )
    goto LABEL_40;
  CombineResultEffectComponent__setNameRevealSvtFigure(
    this,
    crtSvtNameData->fields.svtId,
    crtSvtNameData->fields.limitCount,
    v71);
  v74 = this->fields.crtSvtNameData;
  if ( !v74 )
    goto LABEL_40;
  v75 = after ? 1 : 3;
  CombineResultEffectComponent__setNameRevealSvtGraphCard(this, v74->fields.svtId, v74->fields.limitCount, v75, v73);
  v76 = this->fields.fsm;
  if ( !v76
    || (v77 = PlayMakerFSM__get_FsmVariables(v76, 0LL)) == 0LL
    || (v78 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v77, (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/, 0LL)) == 0LL )
  {
LABEL_40:
    sub_B170D4();
  }
  v85 = (System_Int32_array **)StringLiteral_16749/*"bit_result_name_reveal"*/;
  v78->fields.value = (struct System_String_o *)StringLiteral_16749/*"bit_result_name_reveal"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v78->fields.value, v85, v79, v80, v81, v82, v83, v84);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9378/*"NameRevealCrossFade"*/,
    this->fields.NAME_REVEAL_INVOKE_TIME,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetNobleCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantTreasureDeviceAddMaster_o *v38; // x24
  __int64 v39; // x25
  __int64 v40; // x26
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t v43; // w23
  int32_t v44; // w0
  ServantTreasureDeviceAddEntity_o *EnableEntity; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v50; // x25
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o **p_npInfoAddManager; // x24
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x26
  struct System_Int32_array *treasureDeviceIds; // x8
  struct System_Int32_array *v63; // x8
  __int64 v64; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *unSummon; // x0
  UILabel_o *unSummonLabel; // x20
  System_String_o *v68; // x0
  UILabel_o *unSummonDetail; // x20
  System_String_o *v70; // x0
  PlayMakerFSM_o *fsm; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40F9967 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&DataManager_TypeInfo, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_12298/*"START_NOBLEUP_EFFECT"*/, v22);
    sub_B16FFC(&StringLiteral_13393/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, v23);
    sub_B16FFC(&StringLiteral_13394/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, v24);
    byte_40F9967 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)usrSvtData,
    *(System_String_array ***)&targetId,
    *(System_Boolean_array ***)&targetLv,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&targetIdOld,
    *(System_Int32_array **)&targetLvOld);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.setResUsrSvtData = 0;
  this->fields.tdShowIndex = 0;
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  if ( !usrSvtData )
    goto LABEL_32;
  v38 = (ServantTreasureDeviceAddMaster_o *)Master_WarQuestSelectionMaster;
  v40 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v72.fields.currentCryptoKey = v40;
  *(_QWORD *)&v72.fields.fakeValue = v39;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72, 0LL);
  v42 = *(_QWORD *)&usrSvtData->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v73.fields.fakeValue = *(_QWORD *)&usrSvtData->fields.limitCount.fields.fakeValue;
  v43 = v41;
  *(_QWORD *)&v73.fields.currentCryptoKey = v42;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
  if ( !v38 )
    goto LABEL_32;
  EnableEntity = ServantTreasureDeviceAddMaster__GetEnableEntity(v38, v43, v44, 0, 0LL);
  v50 = (Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *)sub_B170CC(
                                                                      Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_TypeInfo,
                                                                      v46,
                                                                      v47,
                                                                      v48,
                                                                      v49);
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager___ctor(v50, 0LL);
  p_npInfoAddManager = &this->fields.npInfoAddManager;
  this->fields.npInfoAddManager = v50;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.npInfoAddManager,
    (System_Int32_array **)v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( EnableEntity )
  {
    if ( !*p_npInfoAddManager )
      goto LABEL_32;
    Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__SetEntity(*p_npInfoAddManager, EnableEntity, 0LL);
    v58 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
            (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
    if ( (int)v58 >= 1 )
    {
      v61 = 8LL;
      while ( 1 )
      {
        treasureDeviceIds = EnableEntity->fields.treasureDeviceIds;
        if ( !treasureDeviceIds )
          break;
        if ( v61 - 8 >= (unsigned __int64)treasureDeviceIds->max_length )
          goto LABEL_33;
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddBeforeNp(
          *p_npInfoAddManager,
          *((_DWORD *)&treasureDeviceIds->obj.klass + v61),
          targetLvOld,
          0LL);
        v63 = EnableEntity->fields.treasureDeviceIds;
        if ( !v63 )
          break;
        if ( v61 - 8 >= (unsigned __int64)v63->max_length )
        {
LABEL_33:
          sub_B17100(v58, v59, v60);
          sub_B170A0();
        }
        if ( !*p_npInfoAddManager )
          break;
        Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__AddAfterNp(
          *p_npInfoAddManager,
          *((_DWORD *)&v63->obj.klass + v61),
          targetLv,
          0LL);
        v58 = System_Linq_Enumerable__Count_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EnableEntity->fields.treasureDeviceIds,
                (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
        v64 = v61 - 7;
        ++v61;
        if ( v64 >= (int)v58 )
          goto LABEL_22;
      }
LABEL_32:
      sub_B170D4();
    }
LABEL_22:
    ++this->fields.tdShowIndex;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  unSummon = this->fields.unSummon;
  if ( !unSummon )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(unSummon, kind == 27, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_13393/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel )
    goto LABEL_32;
  UILabel__set_text(unSummonLabel, v68, 0LL);
  unSummonDetail = this->fields.unSummonDetail;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_13394/*"TREASURE_DEVICE_COMBINE_EFFECT_UNSUMMON_DETAIL"*/, 0LL);
  if ( !unSummonDetail )
    goto LABEL_32;
  UILabel__set_text(unSummonDetail, v70, 0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_32;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12298/*"START_NOBLEUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetPowerUpInfo(
        CombineResultEffectComponent_o *this,
        UserServantEntity_o *usrSvtData,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F996F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12301/*"START_POWERUP_EFFECT"*/, usrSvtData);
    byte_40F996F = 1;
  }
  this->fields.kind = 11;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.setResUsrSvtData = 0;
  this->fields.targetId = 0;
  this->fields.targetLv = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12301/*"START_POWERUP_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__SetResultServantVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t kind; // w8
  CommonUI_o *v5; // x0
  const MethodInfo *v6; // x4
  struct ServantChangeEntity_o *resSvtNameData; // x8
  int32_t voiceSvtId; // w1
  int32_t LimitCountByImageLimitCostumeIn; // w2
  bool v10; // w3
  CombineResultEffectComponent_o *v11; // x0
  CommonUI_o *v12; // x0
  struct ServantChangeEntity_o *v13; // x8
  CommonUI_o *Instance; // x0
  UserServantEntity_o *resUsrSvtData; // x0
  int32_t CardImageLimitCount; // w0
  int32_t v17; // w20
  const MethodInfo *v18; // x1

  if ( (byte_40F9981 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F9981 = 1;
  }
  kind = this->fields.kind;
  if ( kind <= 10 )
  {
    if ( kind )
    {
      if ( kind != 1 && kind != 10 )
        goto LABEL_14;
      goto LABEL_11;
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_33;
    CardImageLimitCount = UserServantEntity__getCardImageLimitCount(resUsrSvtData, 0, 0LL);
    if ( CardImageLimitCount < 11 )
    {
      LimitCountByImageLimitCostumeIn = -1;
    }
    else
    {
      v17 = CardImageLimitCount;
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(v17, 0LL);
    }
    voiceSvtId = this->fields.voiceSvtId;
  }
  else
  {
    if ( kind != 15 )
    {
      if ( kind != 19 && kind != 26 )
      {
LABEL_14:
        CombineResultEffectComponent__EndLoad(this, method);
        return;
      }
LABEL_11:
      v5 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v5 )
      {
        CommonUI__SetLoadMode(v5, 1, 0LL);
        resSvtNameData = this->fields.resSvtNameData;
        if ( resSvtNameData )
          voiceSvtId = resSvtNameData->fields.svtVoiceId;
        else
          voiceSvtId = -1;
        LimitCountByImageLimitCostumeIn = -1;
        v10 = 1;
        v11 = this;
        goto LABEL_32;
      }
LABEL_33:
      sub_B170D4();
    }
    v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v12 )
      goto LABEL_33;
    CommonUI__SetLoadMode(v12, 1, 0LL);
    v13 = this->fields.resSvtNameData;
    if ( v13 )
      voiceSvtId = v13->fields.svtVoiceId;
    else
      voiceSvtId = -1;
    LimitCountByImageLimitCostumeIn = this->fields.costumeId;
  }
  v11 = this;
  v10 = 0;
LABEL_32:
  CombineResultEffectComponent__getSvtVoiceData(v11, voiceSvtId, LimitCountByImageLimitCostumeIn, v10, v6);
  CombineResultEffectComponent__loadVoiceData(this, v18);
}


void __fastcall CombineResultEffectComponent__SetResultUserServantData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v12; // q1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v19; // x8
  __int128 v20; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v21; // x21
  int64_t v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v23; // x20
  WebViewManager_o *v24; // x0
  WarQuestSelectionMaster_o *v25; // x0
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v28; // x21
  int64_t v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UserServantEntity_o *v34; // x21
  UserServantEntity_o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UserServantEntity_o *v42; // x8
  __int64 v43; // x21
  __int64 v44; // x22
  int32_t v45; // w0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  UserServantEntity_o *resUsrSvtData; // x21
  UserServantEntity_o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UserServantEntity_o *v58; // x8
  struct UserServantEntity_o *v59; // x24
  __int64 v60; // x21
  __int64 v61; // x22
  int32_t v62; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // kr00_16
  struct UserServantEntity_o *v64; // x8
  int32_t hp; // w9
  WebViewManager_o *v66; // x0
  WarQuestSelectionMaster_o *v67; // x0
  ServantLimitMaster_o *v68; // x21
  int32_t v69; // w0
  int32_t v70; // w22
  int32_t v71; // w0
  ServantLimitEntity_o *Entity; // x0
  ServantLimitEntity_o *v73; // x8
  CheckCombineResStatus_o *combineResStatus; // x0
  UserServantEntity_o *v75; // x20
  UserServantEntity_o *v76; // x21
  struct UserServantEntity_o **p_resUsrSvtData; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct UserServantEntity_o *v84; // x21
  __int64 v85; // x19
  __int64 v86; // x20
  int32_t v87; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+60h] [xbp-60h]
  int32_t afterAtk[2]; // [xsp+88h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_40F9980 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&UserServantEntity_TypeInfo, v10);
    byte_40F9980 = 1;
  }
  *(_QWORD *)afterAtk = 0LL;
  if ( !this->fields.setResUsrSvtData )
  {
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_53;
    v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v91.fields.fakeValue = v12;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v90 = v91;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v90, 0LL) < 1 )
    {
      v75 = this->fields.baseUsrSvtData;
      v76 = (UserServantEntity_o *)sub_B170CC(UserServantEntity_TypeInfo, v13, v14, v15, v16);
      UserServantEntity___ctor_21432252(v76, v75, 0LL);
      p_resUsrSvtData = &this->fields.resUsrSvtData;
      this->fields.resUsrSvtData = v76;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
        (System_Int32_array **)v76,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      if ( (this->fields.kind | 0x10) != 26 )
        return;
      v84 = *p_resUsrSvtData;
      if ( *p_resUsrSvtData )
      {
        v86 = *(_QWORD *)&v84->fields.limitCount.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v84->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v95.fields.currentCryptoKey = v86;
        *(_QWORD *)&v95.fields.fakeValue = v85;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v95, 0LL);
        v84->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v87 + 1, 0LL);
        return;
      }
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v19 = this->fields.baseUsrSvtData;
        if ( v19 )
        {
          v20 = *(_OWORD *)&v19->fields.id.fields.fakeValue;
          v21 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
          *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v19->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v91.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v89 = v91;
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v89, 0LL);
          if ( v21 )
          {
            v23 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.resUsrSvtData;
            if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                    v21,
                    &this->fields.resUsrSvtData,
                    v22,
                    (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
            {
              v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v24 )
                goto LABEL_53;
              v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)v24,
                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
              v26 = this->fields.baseUsrSvtData;
              if ( !v26 )
                goto LABEL_53;
              v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
              v28 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v25;
              *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v91.fields.fakeValue = v27;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v88 = v91;
              v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
              if ( !v28 )
                goto LABEL_53;
              if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                      v28,
                      &this->fields.resUsrSvtData,
                      v29,
                      (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantStorageMaster__UserServantEntity__long__TryGetEntity__) )
              {
                v34 = this->fields.baseUsrSvtData;
                v35 = (UserServantEntity_o *)sub_B170CC(UserServantEntity_TypeInfo, v30, v31, v32, v33);
                UserServantEntity___ctor_21432252(v35, v34, 0LL);
                this->fields.resUsrSvtData = v35;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
                  (System_Int32_array **)v35,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41);
              }
            }
            if ( this->fields.kind != 19 )
              return;
            v42 = this->fields.baseUsrSvtData;
            if ( v42 )
            {
              v44 = *(_QWORD *)&v42->fields.limitCount.fields.currentCryptoKey;
              v43 = *(_QWORD *)&v42->fields.limitCount.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v93.fields.currentCryptoKey = v44;
              *(_QWORD *)&v93.fields.fakeValue = v43;
              v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93, 0LL);
              if ( this->fields.baseUsrSvtData )
              {
                if ( v45 >= UserServantEntity__getLimitCntMax(this->fields.baseUsrSvtData, 0LL) - 1 )
                  return;
                resUsrSvtData = this->fields.resUsrSvtData;
                v51 = (UserServantEntity_o *)sub_B170CC(UserServantEntity_TypeInfo, v46, v47, v48, v49);
                UserServantEntity___ctor_21432252(v51, resUsrSvtData, 0LL);
                this->fields.resUsrSvtData = v51;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
                  (System_Int32_array **)v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57);
                v58 = this->fields.baseUsrSvtData;
                if ( v58 )
                {
                  v59 = this->fields.resUsrSvtData;
                  v61 = *(_QWORD *)&v58->fields.limitCount.fields.currentCryptoKey;
                  v60 = *(_QWORD *)&v58->fields.limitCount.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v94.fields.currentCryptoKey = v61;
                  *(_QWORD *)&v94.fields.fakeValue = v60;
                  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v94, 0LL);
                  v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v62 + 1, 0LL);
                  if ( v59 )
                  {
                    v59->fields.limitCount = v63;
                    v64 = this->fields.baseUsrSvtData;
                    if ( v64 )
                    {
                      hp = v64->fields.hp;
                      afterAtk[0] = v64->fields.atk;
                      afterAtk[1] = hp;
                      v66 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                      if ( v66 )
                      {
                        v67 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v66,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
                        if ( *v23 )
                        {
                          v68 = (ServantLimitMaster_o *)v67;
                          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*v23)[5], 0LL);
                          if ( *v23 )
                          {
                            v70 = v69;
                            v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*v23)[6], 0LL);
                            if ( v68 )
                            {
                              Entity = ServantLimitMaster__GetEntity(v68, v70, v71, 0LL);
                              if ( Entity )
                              {
                                v73 = Entity;
                                combineResStatus = this->fields.combineResStatus;
                                if ( combineResStatus )
                                {
                                  CheckCombineResStatus__getCombineResStatus(
                                    combineResStatus,
                                    &afterAtk[1],
                                    afterAtk,
                                    this->fields.resUsrSvtData,
                                    v73->fields.lvMax,
                                    0LL);
                                  if ( *v23 )
                                  {
                                    *(_DWORD *)&(*v23)[16].fields.inited = afterAtk[1];
                                    if ( *v23 )
                                    {
                                      (*v23)[16].fields.fakeValue = afterAtk[0];
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
LABEL_53:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForQuestClear(
        CombineResultEffectComponent_o *this,
        int32_t questId,
        int32_t phase,
        CombineResultEffectComponent_MessageDelegate_o *msgCallBack,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x28
  __int64 v53; // x10
  int klass_high; // w8
  int monitor; // w8
  CombineResultEffectComponent___c_c *v56; // x0
  struct CombineResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__105_0; // x24
  Il2CppObject *v59; // x25
  struct CombineResultEffectComponent___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x8
  int v70; // w24
  BalanceConfig_c *v71; // x0
  TerminalSceneComponent_c *v72; // x0
  struct CombineResultEffectComponent_MessageDelegate_o **p_messageCallback; // x21
  int size; // w8
  __int64 v75; // x20
  __int64 v76; // x8
  TerminalSceneComponent_o *mInstance; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  PlayMakerFSM_o *v94; // x0
  __int64 v95; // x8
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // [xsp+8h] [xbp-68h]
  struct CombineResultEffectComponent_MessageDelegate_o *v97; // [xsp+18h] [xbp-58h]

  if ( (byte_40F9975 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v14);
    sub_B16FFC(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__, v15);
    sub_B16FFC(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v23);
    sub_B16FFC(&ServantTreasureDvcEntity_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v26);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__, v27);
    sub_B16FFC(&CombineResultEffectComponent___c_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_12302/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v29);
    sub_B16FFC(&StringLiteral_16759/*"bit_result_ultimate_anim"*/, v30);
    sub_B16FFC(&StringLiteral_12980/*"StartAnimationName"*/, v31);
    byte_40F9975 = 1;
  }
  this->fields.kind = 16;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    *(System_String_array ***)&phase,
    (System_String_array **)msgCallBack,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.messageCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.messageCallback, 0LL, v32, v33, v34, v35, v36, v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  p_callbackFunc = &this->fields.callbackFunc;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_67;
  v97 = msgCallBack;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)MasterData_WarQuestSelectionMaster->fields.list;
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo,
                                                                                                  v40,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
  if ( !list )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v50,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v53 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v53
        || (ServantTreasureDvcEntity_c *)Item->klass->_2.typeHierarchy[v53 - 1] != ServantTreasureDvcEntity_TypeInfo )
      {
        break;
      }
      klass_high = HIDWORD(Item[2].klass);
      if ( klass_high >= 1 && klass_high == questId )
      {
        monitor = (int)Item[2].monitor;
        if ( (monitor < 1 || monitor == phase)
          && ServantTreasureDvcEntity__HasFlag((ServantTreasureDvcEntity_o *)Item, 8, 0LL) )
        {
          if ( !v45 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v45,
            v52,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
        }
      }
      if ( ++v50 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                      list,
                      (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_19;
    }
LABEL_67:
    sub_B170D4();
  }
LABEL_19:
  v56 = CombineResultEffectComponent___c_TypeInfo;
  if ( (BYTE3(CombineResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineResultEffectComponent___c_TypeInfo);
    v56 = CombineResultEffectComponent___c_TypeInfo;
  }
  static_fields = v56->static_fields;
  _9__105_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__105_0;
  if ( !_9__105_0 )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      static_fields = CombineResultEffectComponent___c_TypeInfo->static_fields;
    }
    v59 = (Il2CppObject *)static_fields->__9;
    _9__105_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_ServantTreasureDvcEntity__TypeInfo,
                                                                            v46,
                                                                            v47,
                                                                            v48,
                                                                            v49);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__105_0,
      v59,
      Method_CombineResultEffectComponent___c__SetSecretTreasureDeviceInfoForQuestClear_b__105_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
    v60 = CombineResultEffectComponent___c_TypeInfo->static_fields;
    v60->__9__105_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__105_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v60->__9__105_0,
      (System_Int32_array **)_9__105_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  if ( !v45 )
    goto LABEL_67;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v45,
    (System_Comparison_T__o *)_9__105_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
  if ( v45->fields._size < 1 )
  {
    v70 = 0;
  }
  else
  {
    v69 = v45->fields._items->m_Items[0];
    if ( !v69 )
      goto LABEL_67;
    v70 = 1;
    this->fields.targetSvtId = v69->fields.missionTargetId;
  }
  v71 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  if ( v71->static_fields->CloseSecretTreasureDeviceQuestClear || (size = v45->fields._size, size < 1) )
  {
LABEL_36:
    if ( !v70 )
    {
LABEL_64:
      if ( *p_callbackFunc )
        CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
      return;
    }
  }
  else
  {
    v75 = 4LL;
    while ( 1 )
    {
      if ( size <= (unsigned int)(v75 - 4) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v76 = *((_QWORD *)&v45->fields._items->obj.klass + v75);
      if ( !v76 )
        goto LABEL_67;
      if ( CombineResultEffectComponent__checkSecretTreasureDeviceData(this, *(_DWORD *)(v76 + 16), v68) )
        break;
      size = v45->fields._size;
      if ( (int)++v75 - 4 >= size )
        goto LABEL_36;
    }
    if ( v45->fields._size <= (unsigned int)(v75 - 4) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v95 = *((_QWORD *)&v45->fields._items->obj.klass + v75);
    if ( !v95 )
      goto LABEL_67;
    this->fields.targetSvtId = *(_DWORD *)(v95 + 16);
    if ( !v70 )
      goto LABEL_64;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v67);
    byte_40F6042 = 1;
  }
  v72 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    p_messageCallback = &this->fields.messageCallback;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v72 = TerminalSceneComponent_TypeInfo;
    }
  }
  else
  {
    p_messageCallback = &this->fields.messageCallback;
  }
  mInstance = v72->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_67;
  TerminalSceneComponent__CheckLastPlayBgm(mInstance, 0LL);
  this->fields.messageCallback = v97;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_messageCallback,
    (System_Int32_array **)v97,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_67;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_67;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                FsmVariables,
                (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/,
                0LL);
  if ( !FsmString )
    goto LABEL_67;
  v93 = (System_Int32_array **)StringLiteral_16759/*"bit_result_ultimate_anim"*/;
  FsmString->fields.value = (struct System_String_o *)StringLiteral_16759/*"bit_result_ultimate_anim"*/;
  sub_B16F98((BattleServantConfConponent_o *)&FsmString->fields.value, v93, v87, v88, v89, v90, v91, v92);
  v94 = this->fields.fsm;
  if ( !v94 )
    goto LABEL_67;
  PlayMakerFSM__SendEvent(v94, (System_String_o *)StringLiteral_12302/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSecretTreasureDeviceInfoForSvtGet(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  CombineResultEffectComponent_ClickDelegate_o **p_callbackFunc; // x21
  const MethodInfo *v15; // x2
  BalanceConfig_c *v16; // x0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  PlayMakerFSM_o *v27; // x0

  if ( (byte_40F9976 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_12302/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, v11);
    sub_B16FFC(&StringLiteral_16759/*"bit_result_ultimate_anim"*/, v12);
    sub_B16FFC(&StringLiteral_12980/*"StartAnimationName"*/, v13);
    byte_40F9976 = 1;
  }
  p_callbackFunc = &this->fields.callbackFunc;
  this->fields.kind = 17;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  if ( v16->static_fields->CloseSecretTreasureDeviceSvtGet
    || !CombineResultEffectComponent__checkSecretTreasureDeviceData(this, svtId, v15) )
  {
    if ( *p_callbackFunc )
      CombineResultEffectComponent_ClickDelegate__Invoke(*p_callbackFunc, 1, 0LL);
  }
  else
  {
    fsm = this->fields.fsm;
    this->fields.targetSvtId = svtId;
    if ( !fsm
      || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
      || (FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        FsmVariables,
                        (System_String_o *)StringLiteral_12980/*"StartAnimationName"*/,
                        0LL)) == 0LL
      || (v26 = (System_Int32_array **)StringLiteral_16759/*"bit_result_ultimate_anim"*/,
          FsmString->fields.value = (struct System_String_o *)StringLiteral_16759/*"bit_result_ultimate_anim"*/,
          sub_B16F98((BattleServantConfConponent_o *)&FsmString->fields.value, v26, v20, v21, v22, v23, v24, v25),
          (v27 = this->fields.fsm) == 0LL) )
    {
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(v27, (System_String_o *)StringLiteral_12302/*"START_SECRET_TREASURE_DEVICE_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSkillCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        UserServantEntity_o *usrSvtData,
        int32_t targetId,
        int32_t targetLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        int32_t targetIdOld,
        int32_t targetLvOld,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *unSummon; // x0
  UILabel_o *unSummonLabel; // x20
  System_String_o *v29; // x0
  UILabel_o *unSummonDetail; // x20
  System_String_o *v31; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F9966 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_12304/*"START_SKILLUP_EFFECT"*/, v17);
    sub_B16FFC(&StringLiteral_12195/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, v18);
    sub_B16FFC(&StringLiteral_12196/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, v19);
    byte_40F9966 = 1;
  }
  this->fields.kind = kind;
  this->fields.baseUsrSvtData = usrSvtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)usrSvtData,
    *(System_String_array ***)&targetId,
    *(System_Boolean_array ***)&targetLv,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&targetIdOld,
    *(System_Int32_array **)&targetLvOld);
  this->fields.targetId = targetId;
  this->fields.targetIdOld = targetIdOld;
  this->fields.targetLv = targetLv;
  this->fields.targetLvOld = targetLvOld;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  unSummon = this->fields.unSummon;
  if ( !unSummon )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(unSummon, kind == 21, 0LL);
  unSummonLabel = this->fields.unSummonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12195/*"SKILL_COMBINE_EFFFECT_UNSUMMON"*/, 0LL);
  if ( !unSummonLabel
    || (UILabel__set_text(unSummonLabel, v29, 0LL),
        unSummonDetail = this->fields.unSummonDetail,
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12196/*"SKILL_COMBINE_EFFFECT_UNSUMMON_DETAIL"*/, 0LL),
        !unSummonDetail)
    || (UILabel__set_text(unSummonDetail, v31, 0LL), (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12304/*"START_SKILLUP_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetStandFigureFace(
        CombineResultEffectComponent_o *this,
        int32_t faceType,
        float fadeTime,
        int32_t playCount,
        ServantVoiceData_array *playVoiceList,
        System_Collections_Generic_List_StandFigureCollect__o *standFigureCollects,
        int32_t formId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  StandFigureCollect_o *v17; // x8
  UIStandFigureR_o *standFigure_k__BackingField; // x0
  struct ServantVoiceData_array *v19; // x8
  __int64 playCnt; // x9
  ServantVoiceData_o *v21; // x8
  struct System_Int32_array *multiFace; // x23
  struct System_Int32_array *multiForm; // x24
  __int64 v24; // x8
  int v25; // w20
  __int64 v26; // x25
  StandFigureCollect_o *v27; // x8
  UIStandFigureR_o *v28; // x0

  if ( (byte_40F999C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_StandFigureCollect___, *(_QWORD *)&faceType);
    sub_B16FFC(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v13);
    byte_40F999C = 1;
  }
  v14 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)standFigureCollects,
          (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_StandFigureCollect___);
  if ( (int)v14 < 2 )
  {
    if ( standFigureCollects )
    {
      if ( !standFigureCollects->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v17 = standFigureCollects->fields._items->m_Items[0];
      if ( v17 )
      {
        standFigure_k__BackingField = v17->fields._standFigure_k__BackingField;
        if ( standFigure_k__BackingField )
        {
          UIStandFigureR__SetFace_40887852(standFigure_k__BackingField, faceType, formId, 0LL, fadeTime, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  v19 = this->fields.playVoiceList;
  if ( !v19 )
    goto LABEL_29;
  playCnt = this->fields.playCnt;
  if ( (unsigned int)playCnt >= v19->max_length )
  {
LABEL_27:
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v21 = v19->m_Items[playCnt];
  if ( !v21 )
    goto LABEL_29;
  multiFace = v21->fields.multiFace;
  if ( multiFace )
  {
    multiForm = v21->fields.multiForm;
    if ( multiForm )
    {
      v24 = *(_QWORD *)&multiFace->max_length;
      v25 = v14;
      if ( (_DWORD)v14 == (_DWORD)v24 && (_DWORD)v14 == multiForm->max_length )
      {
        if ( (_DWORD)v24 )
        {
          v26 = 0LL;
          do
          {
            if ( (unsigned int)v26 >= multiForm->max_length )
              break;
            if ( !standFigureCollects )
              goto LABEL_29;
            if ( standFigureCollects->fields._size <= (unsigned int)v26 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v27 = standFigureCollects->fields._items->m_Items[v26];
            if ( !v27 )
              goto LABEL_29;
            v28 = v27->fields._standFigure_k__BackingField;
            if ( !v28 )
              goto LABEL_29;
            UIStandFigureR__SetFace_40887852(
              v28,
              multiFace->m_Items[v26 + 1],
              multiForm->m_Items[v26 + 1],
              0LL,
              fadeTime,
              0LL);
            if ( (int)v26 + 1 >= v25 )
              return;
            ++v26;
          }
          while ( (unsigned int)v26 < multiFace->max_length );
        }
        goto LABEL_27;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        int32_t infoIdx,
        UserServantEntity_o *baseData,
        int32_t baseCollectionLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F9969 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12306/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_40F9969 = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    (System_String_array **)baseData,
    *(System_Boolean_array ***)&baseCollectionLv,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v7);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v14, v15, v16, v17, v18, v19);
  this->fields.setResUsrSvtData = 0;
  this->fields.combineVoiceId = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.combineVoiceId, 0LL, v20, v21, v22, v23, v24, v25);
  this->fields.combineStatusDisp = 1;
  *(_QWORD *)&this->fields.voiceSvtId = -1LL;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12306/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtCombineInfo_24286788(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        int32_t infoIdx,
        UserServantEntity_o *baseData,
        UserServantEntity_o *resData,
        int32_t svtId,
        System_String_o *voiceId,
        bool statusDisp,
        int32_t friendship,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F996A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12306/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_40F996A = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    (System_String_array **)baseData,
    (System_Boolean_array **)resData,
    *(System_Int32_array ***)&svtId,
    (System_Int32_array *)voiceId,
    (System_Int32_array *)statusDisp);
  this->fields.resUsrSvtData = resData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
    (System_Int32_array **)resData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.setResUsrSvtData = 1;
  if ( !baseData )
    goto LABEL_7;
  this->fields.baseUsrSvtCollictionLv = baseData->fields.lv;
  this->fields.combineVoiceId = voiceId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineVoiceId,
    (System_Int32_array **)voiceId,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.voiceSvtId = svtId;
  this->fields.friendship = friendship;
  this->fields.autoFadeout = 1;
  this->fields.combineStatusDisp = statusDisp;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (fsm = this->fields.fsm) == 0LL) )
LABEL_7:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12306/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__SetSvtEqCombineInfo(
        CombineResultEffectComponent_o *this,
        int32_t kind,
        int32_t infoIdx,
        int32_t normalExp,
        int32_t addExp,
        UserServantEntity_o *baseData,
        int32_t baseCollectionLv,
        CombineResultEffectComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F996B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12306/*"START_SVTCOMBINE_EFFECT"*/, *(_QWORD *)&kind);
    byte_40F996B = 1;
  }
  this->fields.kind = kind;
  this->fields.successInfo = infoIdx;
  this->fields.normalExp = normalExp;
  this->fields.addTotalExp = addExp;
  this->fields.baseUsrSvtData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)baseData,
    *(System_String_array ***)&infoIdx,
    *(System_String_array ***)&normalExp,
    *(System_Boolean_array ***)&addExp,
    (System_Int32_array **)baseData,
    *(System_Int32_array **)&baseCollectionLv,
    (System_Int32_array *)callback);
  this->fields.baseUsrSvtCollictionLv = baseCollectionLv;
  this->fields.resUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.resUsrSvtData, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.setResUsrSvtData = 0;
  this->fields.autoFadeout = 1;
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12306/*"START_SVTCOMBINE_EFFECT"*/, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowLimitUpChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *v10; // x21

  if ( (byte_40F99A2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__, v3);
    byte_40F99A2 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL),
        limitUpResultCheck = this->fields.limitUpResultCheck,
        v10 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowLimitUpChangeInfo_b__151_0__,
          0LL),
        !limitUpResultCheck) )
  {
    sub_B170D4();
  }
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowNpChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  SvtUseNpData_o *v8; // x0
  SvtUseNpData_o *v9; // x22
  SvtUseNpData_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *v15; // x8
  ServantTreasureDeviceAddEntity_o *tdAddEntity_k__BackingField; // x24
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t svtNpLv; // w22
  int32_t v19; // w23
  System_Action_o *v20; // x25

  if ( (byte_40F99A0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__, v5);
    byte_40F99A0 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  npInfoAddManager = this->fields.npInfoAddManager;
  if ( !npInfoAddManager )
    goto LABEL_11;
  v8 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetBeforeNp(npInfoAddManager, index, 0LL);
  if ( !this->fields.npInfoAddManager )
    goto LABEL_11;
  v9 = v8;
  v10 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNp(this->fields.npInfoAddManager, index, 0LL);
  v15 = this->fields.npInfoAddManager;
  if ( !v15
    || !v9
    || !v10
    || (tdAddEntity_k__BackingField = v15->fields._tdAddEntity_k__BackingField,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        svtNpLv = v9->fields.svtNpLv,
        v19 = v10->fields.svtNpLv,
        v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowNpChangeInfo_b__149_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_B170D4();
  }
  SkillUpResultWindowComponent__OpenNextNpUpResultInfo(
    skillResultInfoWindow,
    tdAddEntity_k__BackingField,
    index,
    svtNpLv,
    v19,
    v20,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__ShowSkillChangeInfo(
        CombineResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  CombineResultEffectComponent_CostumeSkillInfo_o *v8; // x0
  CombineResultEffectComponent_CostumeSkillInfo_o *v9; // x22
  CombineResultEffectComponent_CostumeSkillInfo_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t id; // w21
  int32_t lv; // w22
  int32_t v18; // w23
  int32_t v19; // w24
  System_String_o *costumeName; // x25
  System_Action_o *v21; // x26

  if ( (byte_40F99A1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__, v5);
    byte_40F99A1 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    goto LABEL_10;
  v8 = CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(costumeSkillInfoManager, index, 0LL);
  if ( !this->fields.costumeSkillInfoManager )
    goto LABEL_10;
  v9 = v8;
  v10 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
          this->fields.costumeSkillInfoManager,
          index,
          0LL);
  if ( !v9 )
    goto LABEL_10;
  if ( !v10 )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  id = v9->fields.id;
  lv = v9->fields.lv;
  v18 = v10->fields.id;
  v19 = v10->fields.lv;
  costumeName = this->fields.costumeName;
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeInfo_b__150_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B170D4();
  SkillUpResultWindowComponent__OpenSkillChangeResultInfo(
    skillResultInfoWindow,
    id,
    lv,
    v18,
    v19,
    costumeName,
    v21,
    0LL);
}


void __fastcall CombineResultEffectComponent__ShowSkillChangeMessage(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F999F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_40F999F = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_10;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_10;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__ShowSkillChangeMessage_b__148_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_10:
    sub_B170D4();
  SkillUpResultWindowComponent__OpenSkillChangeMessage(skillResultInfoWindow, v10, v15, 0LL);
}


void __fastcall CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v12; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v13; // x21
  int64_t v14; // x0
  UserServantEntity_o *Entity; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t id; // w21
  int32_t lv; // w22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v23; // w23
  int32_t v24; // w24
  System_Action_o *v25; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h]
  TreasureDvcInfo_o *v28; // [xsp+48h] [xbp-48h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+58h] [xbp-38h] BYREF

  if ( (byte_40F99A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F99A3 = 1;
  }
  tdInfo = 0LL;
  v28 = 0LL;
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_15;
  v12 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v13 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL);
  if ( !v13 )
    goto LABEL_15;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             v13,
             v14,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_15;
  UserServantEntity__getTreasureDeviceInfo(Entity, &v28, -1, -1, 0, 0LL);
  if ( !tdInfo
    || !v28
    || (id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        skillResultInfoWindow = this->fields.skillResultInfoWindow,
        v23 = v28->fields.id,
        v24 = v28->fields.lv,
        v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19),
        System_Action___ctor(
          v25,
          (Il2CppObject *)this,
          Method_CombineResultEffectComponent__ShowTreasureDeviceChangeInfo_b__153_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_15:
    sub_B170D4();
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo(skillResultInfoWindow, id, lv, v23, v24, v25, 0LL);
}


void __fastcall CombineResultEffectComponent___CloseLimitCountSealDialog_b__169_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v8; // x21

  if ( (byte_40F99BD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__, v6);
    byte_40F99BD = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent__CloseLimitCountSealDialog_b__169_1__,
    0LL);
  if ( !limitUpResultCheck )
    sub_B170D4();
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v8, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___EndLoad_b__144_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F99BB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&StringLiteral_5469/*"END_LOAD"*/, v3);
    byte_40F99BB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__SetLoadMode(Instance, 0, 0LL), (fsm = this->fields.fsm) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5469/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___EndPlay_b__154_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x20
  System_Action_o *v8; // x21

  if ( (byte_40F99BC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent__EndPlay_b__154_2__, v6);
    byte_40F99BC = 1;
  }
  limitUpResultCheck = this->fields.limitUpResultCheck;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineResultEffectComponent__EndPlay_b__154_2__, 0LL);
  if ( !limitUpResultCheck )
    sub_B170D4();
  LimitUpResultCheckComponent__DispResultLimitUp(limitUpResultCheck, v8, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___FadeoutProcess_b__163_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___InitCombineEffect_b__111_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F99B8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5469/*"END_LOAD"*/, method);
    byte_40F99B8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5469/*"END_LOAD"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetAppendSkillCombineInfo_b__107_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *v22; // x0

  if ( (byte_40F99B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_12296/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_B16FFC(&StringLiteral_16740/*"bit_result_extraskill"*/, v9);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v10);
    byte_40F99B6 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16740/*"bit_result_extraskill"*/,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      goto LABEL_16;
    v13 = v12;
    transform = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
    fsm = this->fields.fsm;
    if ( !fsm
      || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
      || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            FsmVariables,
                            (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                            0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v13, 0LL),
          (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), (v22 = this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(v22, (System_String_o *)StringLiteral_12296/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetCombineLimit_b__110_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_array *v12; // x21
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x22
  System_String_o *v23; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_Transform_o *transform; // x21
  int v28; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *v35; // x0

  if ( (byte_40F99B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v9);
    sub_B16FFC(&StringLiteral_12287/*"START_COMBINE_LIMIT"*/, v10);
    sub_B16FFC(&StringLiteral_16734/*"bit_result_"*/, v11);
    byte_40F99B7 = 1;
  }
  if ( data )
  {
    v12 = (System_String_array *)sub_B17014(string___TypeInfo, 1LL, method);
    v13 = System_Int32__ToString((int)this + 320, 0LL);
    v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_16734/*"bit_result_"*/, v13, 0LL);
    if ( !v12 )
      goto LABEL_20;
    v22 = (System_Int32_array **)v14;
    if ( v14 )
    {
      v14 = (System_String_o *)sub_B170BC(v14, v12->obj.klass->_1.element_class);
      if ( !v14 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( !v12->max_length )
    {
      sub_B17100(v14, v15, v16);
      sub_B170A0();
    }
    v12->m_Items[0] = (System_String_o *)v22;
    sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, v22, v16, v17, v18, v19, v20, v21);
    v23 = System_String__Concat_43823856(v12, 0LL);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 v23,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v25 )
      goto LABEL_20;
    v26 = v25;
    transform = UnityEngine_GameObject__get_transform(v25, 0LL);
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_20;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
    fsm = this->fields.fsm;
    if ( !fsm
      || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
      || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            FsmVariables,
                            (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                            0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v26, 0LL),
          (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), (v35 = this->fields.fsm) == 0LL) )
    {
LABEL_20:
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(v35, (System_String_o *)StringLiteral_12287/*"START_COMBINE_LIMIT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetFriendshipCombineInfoForOtherRoot_b__103_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *v22; // x0

  if ( (byte_40F99B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_16743/*"bit_result_friendship_exceed"*/, v8);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v9);
    sub_B16FFC(&StringLiteral_12293/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, v10);
    byte_40F99B5 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16743/*"bit_result_friendship_exceed"*/,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      goto LABEL_16;
    v13 = v12;
    transform = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
    fsm = this->fields.fsm;
    if ( !fsm
      || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
      || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            FsmVariables,
                            (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                            0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v13, 0LL),
          (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), (v22 = this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(v22, (System_String_o *)StringLiteral_12293/*"START_FRIENDSHIP_EXCEED_EFFECT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___SetLvExceedInfoForOtherRoot_b__101_0(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *v22; // x0

  if ( (byte_40F99B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_12296/*"START_LVEXCEED_EFFECT"*/, v8);
    sub_B16FFC(&StringLiteral_16748/*"bit_result_limitbreak"*/, v9);
    sub_B16FFC(&StringLiteral_11449/*"ResultEffect"*/, v10);
    byte_40F99B4 = 1;
  }
  if ( data )
  {
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16748/*"bit_result_limitbreak"*/,
                                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      goto LABEL_16;
    v13 = v12;
    transform = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_16;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
    fsm = this->fields.fsm;
    if ( !fsm
      || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
      || (FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            FsmVariables,
                            (System_String_o *)StringLiteral_11449/*"ResultEffect"*/,
                            0LL)) == 0LL
      || (HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v13, 0LL),
          (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__SetLoadMode(Instance, 0, 0LL), (v22 = this->fields.fsm) == 0LL) )
    {
LABEL_16:
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(v22, (System_String_o *)StringLiteral_12296/*"START_LVEXCEED_EFFECT"*/, 0LL);
  }
}


void __fastcall CombineResultEffectComponent___ShowLimitUpChangeInfo_b__151_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowNpChangeInfo_b__149_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeInfo_b__150_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowSkillChangeMessage_b__148_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___ShowTreasureDeviceChangeInfo_b__153_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_B170D4();
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___endloadEffect_b__113_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F99B9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5469/*"END_LOAD"*/, method);
    byte_40F99B9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5469/*"END_LOAD"*/, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_0(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *effect; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UserServantCollectionEntity_o *v27; // x22
  __int64 v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  UserServantEntity_o *v39; // x21
  System_Int32_array **callbackFunc; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WebViewManager_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int32_t targetId; // w23
  int32_t treasureDeviceLv1; // w24
  CommonUI_o *v60; // x22
  CombineResultEffectComponent_ClickDelegate_o *v61; // x25
  CombineResultEffectComponent_ClickDelegate_o *v62; // x0

  if ( (byte_40F99BA & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__, v8);
    sub_B16FFC(&CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v9);
    sub_B16FFC(&UserServantEntity_TypeInfo, v10);
    byte_40F99BA = 1;
  }
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(effect, 0LL);
  this->fields.effect = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v12, v13, v14, v15, v16, v17);
  CombineResultEffectComponent__Close(this, v18);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.targetSvtId,
                       0LL);
  if ( EntityDefinitely )
  {
    v27 = EntityDefinitely;
    v28 = sub_B170CC(CombineResultEffectComponent___c__DisplayClass143_2_TypeInfo, v23, v24, v25, v26);
    CombineResultEffectComponent___c__DisplayClass143_2___ctor(
      (CombineResultEffectComponent___c__DisplayClass143_2_o *)v28,
      0LL);
    if ( v28 )
    {
      *(_QWORD *)(v28 + 24) = this;
      sub_B16F98((BattleServantConfConponent_o *)(v28 + 24), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
      v39 = (UserServantEntity_o *)sub_B170CC(UserServantEntity_TypeInfo, v35, v36, v37, v38);
      UserServantEntity___ctor_21432560(v39, v27, 0LL);
      callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
      *(_QWORD *)(v28 + 16) = callbackFunc;
      sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), callbackFunc, v41, v42, v43, v44, v45, v46);
      this->fields.callbackFunc = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v47, v48, v49, v50, v51, v52);
      v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v39 )
      {
        targetId = this->fields.targetId;
        treasureDeviceLv1 = v39->fields.treasureDeviceLv1;
        v60 = (CommonUI_o *)v53;
        v61 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                                CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                v54,
                                                                v55,
                                                                v56,
                                                                v57);
        CombineResultEffectComponent_ClickDelegate___ctor(
          v61,
          (Il2CppObject *)v28,
          Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__6__,
          0LL);
        if ( v60 )
        {
          CommonUI__OpenNobleCombineResult(
            v60,
            18,
            v39,
            targetId,
            treasureDeviceLv1,
            v61,
            this->fields.targetIdOld,
            v39->fields.treasureDeviceLv1,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
  v62 = this->fields.callbackFunc;
  if ( v62 )
    CombineResultEffectComponent_ClickDelegate__Invoke(v62, 1, 0LL);
}


void __fastcall CombineResultEffectComponent___setSkillResultInfo_b__143_1(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
  CombineResultEffectComponent_ClickDelegate__Invoke(callbackFunc, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineResultEffectComponent__checkSecretTreasureDeviceData(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ServantFlagReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v9; // x0
  UserServantMaster_o *v10; // x0
  _BOOL8 IsServantHaving; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  ServantFlagEntity_o *v14; // x8
  struct System_Int32_array *args; // x9
  struct System_Int32_array *v16; // x8
  int32_t v17; // w8
  bool result; // w0
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9978 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFlagReleaseMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9978 = 1;
  }
  svtFlagEntity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (ServantFlagReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !ServantFlagReleaseMaster__isSecretTreasureDevice_29589160(
          MasterData_WarQuestSelectionMaster,
          svtId,
          &svtFlagEntity,
          0LL) )
    goto LABEL_15;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v9 )
    goto LABEL_17;
  v10 = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v9,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !v10 )
    goto LABEL_17;
  IsServantHaving = UserServantMaster__IsServantHaving(v10, svtId, 0, 0LL);
  if ( !IsServantHaving )
  {
LABEL_15:
    v17 = 0;
    result = 0;
    this->fields.isSecretTreasureDeviceRankUpAnim = 0;
    this->fields.targetFlagId = 0;
    this->fields.targetId = 0;
    goto LABEL_16;
  }
  this->fields.isSecretTreasureDeviceRankUpAnim = 1;
  v14 = svtFlagEntity;
  if ( !svtFlagEntity )
    goto LABEL_17;
  this->fields.targetFlagId = svtFlagEntity->fields.flagId;
  args = v14->fields.args;
  if ( !args )
    goto LABEL_17;
  if ( args->max_length <= 1 )
    goto LABEL_18;
  this->fields.targetId = args->m_Items[2];
  v16 = v14->fields.args;
  if ( !v16 )
LABEL_17:
    sub_B170D4();
  if ( !v16->max_length )
  {
LABEL_18:
    sub_B17100(IsServantHaving, v12, v13);
    sub_B170A0();
  }
  v17 = v16->m_Items[1];
  result = 1;
LABEL_16:
  this->fields.targetIdOld = v17;
  return result;
}


void __fastcall CombineResultEffectComponent__clickNext(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  const MethodInfo *v4; // x1
  int32_t kind; // w8
  const MethodInfo *v6; // x2
  CombineResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x0
  int32_t v8; // w20
  int32_t v9; // w0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager_o *npInfoAddManager; // x0
  const MethodInfo *v13; // x1
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_40F99A8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F99A8 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_44;
  if ( UnityEngine_Collider__get_enabled(bgCollider, 0LL) )
  {
    kind = this->fields.kind;
    if ( kind == 15 )
    {
      if ( CombineResultEffectComponent__IsShowSkillInfoOnCostume(this, v4) )
      {
        CombineResultEffectComponent__ShowSkillChangeInfo(this, this->fields.skillShowIndex, v6);
        costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
        v8 = this->fields.skillShowIndex + 1;
        this->fields.skillShowIndex = v8;
        if ( costumeSkillInfoManager )
        {
          v9 = CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(costumeSkillInfoManager, 0LL);
          goto LABEL_21;
        }
        goto LABEL_44;
      }
      kind = this->fields.kind;
    }
    if ( kind > 14 )
    {
      if ( kind != 27 )
      {
        if ( kind == 15 )
        {
          if ( this->fields.treasureDeviceEnabled )
          {
            CombineResultEffectComponent__ShowTreasureDeviceChangeInfo(this, v4);
            this->fields.treasureDeviceEnabled = 0;
            goto LABEL_32;
          }
          goto LABEL_36;
        }
LABEL_24:
        if ( (unsigned int)kind <= 0x1A && ((1 << kind) & 0x4080402) != 0 )
        {
          if ( CombineResultEffectComponent__IsShowLimitUpInfo(this, v4) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            CombineResultEffectComponent__ShowLimitUpChangeInfo(this, v13);
            limitUpResultCheck = this->fields.limitUpResultCheck;
            if ( !limitUpResultCheck )
              goto LABEL_44;
            if ( LimitUpResultCheckComponent__CheckFinishedResultLimitUp(limitUpResultCheck, 0LL) )
              goto LABEL_32;
            return;
          }
          kind = this->fields.kind;
        }
        if ( !kind )
          CombineResultEffectComponent__stopVoice(this, v4);
LABEL_36:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( this->fields.kind != 24 )
          CombineResultEffectComponent__ReleaseVoiceData(this, v15);
        if ( !CombineResultEffectComponent__OpenNotification(this, v15) )
          CombineResultEffectComponent__FadeoutProcess(this, v16);
        return;
      }
    }
    else if ( kind != 4 && kind != 8 )
    {
      goto LABEL_24;
    }
    if ( CombineResultEffectComponent__IsShowNextNpInfo(this, v4) )
    {
      CombineResultEffectComponent__ShowNpChangeInfo(this, this->fields.tdShowIndex, v11);
      npInfoAddManager = this->fields.npInfoAddManager;
      v8 = this->fields.tdShowIndex + 1;
      this->fields.tdShowIndex = v8;
      if ( npInfoAddManager )
      {
        v9 = Assets_Game_Scripts_Play_Combine_Data_NpInfoAddManager__GetAfterNpCount(npInfoAddManager, 0LL);
LABEL_21:
        if ( v8 < v9 )
          return;
LABEL_32:
        CombineResultEffectComponent__EndDisp(this, v10);
        return;
      }
LABEL_44:
      sub_B170D4();
    }
    kind = this->fields.kind;
    goto LABEL_24;
  }
}


void __fastcall CombineResultEffectComponent__endloadEffect(
        CombineResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_40F997D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v10);
    sub_B16FFC(&Method_CombineResultEffectComponent__endloadEffect_b__113_0__, v11);
    sub_B16FFC(&CombineResultEffectComponent_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_40F997D = 1;
  }
  if ( data )
  {
    static_fields = (BattleServantConfConponent_o *)CombineResultEffectComponent_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)data;
    sub_B16F98(static_fields, (System_Int32_array **)data, (System_String_array **)method, v3, v4, v5, v6, v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_CombineResultEffectComponent__endloadEffect_b__113_0__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v22, 0LL);
  }
}


void __fastcall CombineResultEffectComponent__getCostumeSvtVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w0
  int32_t SvtVoiceId; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v24; // x8
  ServantVoiceMaster_o *v25; // x22
  int32_t v26; // w0
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40F9985 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F9985 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.asstName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.playVoiceList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v11, v12, v13, v14, v15, v16);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v19 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v19;
  *(_QWORD *)&v42.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v20, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___),
        (v24 = this->fields.resUsrSvtData) == 0LL)
    || (v25 = (ServantVoiceMaster_o *)MasterData_WarQuestSelectionMaster,
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v24->fields.limitCount, 0LL),
        !v25) )
  {
LABEL_13:
    sub_B170D4();
  }
  Entity = ServantVoiceMaster__getEntity(v25, 2, SvtVoiceId, v26, 0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
}


ServantVoiceData_array *__fastcall CombineResultEffectComponent__getCostumeSvtVoiceList(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceData_array *result; // x0

  if ( (byte_40F9999 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v3);
    byte_40F9999 = 1;
  }
  if ( !this->fields.isChangeCardImg )
    return 0LL;
  result = (ServantVoiceData_array *)this->fields.svtVoiceEntity;
  if ( result )
  {
    result = (ServantVoiceData_array *)ServantVoiceEntity__getCostumeCombineVoiceList(
                                         (ServantVoiceEntity_o *)result,
                                         this->fields.costumeId,
                                         0LL);
    if ( result )
    {
      if ( (int)result->max_length >= 1 )
        return (ServantVoiceData_array *)result->bounds[4];
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x19
  int v14; // s0
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_40F997E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, parentTr);
    sub_B16FFC(&CombineResultEffectComponent_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F997E = 1;
  }
  effectAssetData = CombineResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_12;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_12;
  v11 = v10;
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_parent(transform, parentTr, 0LL),
        v13 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
        !v13)
    || (UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceData_array *__fastcall CombineResultEffectComponent__getLimitUpSvtVoiceList(
        CombineResultEffectComponent_o *this,
        bool isPlayVoice,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  bool isLimitCountMax; // w0
  ServantVoiceEntity_o *svtVoiceEntity; // x20
  ServantVoiceData_array *result; // x0
  struct UserServantEntity_o *v11; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40F9998 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, isPlayVoice);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_40F9998 = 1;
  }
  if ( this->fields.isChangeCardImg )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_22;
    isLimitCountMax = UserServantEntity__isLimitCountMax(resUsrSvtData, 0LL);
    svtVoiceEntity = this->fields.svtVoiceEntity;
    if ( isLimitCountMax )
    {
      if ( svtVoiceEntity )
      {
        result = (ServantVoiceData_array *)ServantVoiceEntity__getCntStopVoiceList(
                                             this->fields.svtVoiceEntity,
                                             this->fields.displayType,
                                             isPlayVoice,
                                             this->fields.genderType,
                                             this->fields.limitUpPlayVoiceLabel,
                                             0LL);
        if ( !result )
          return result;
        goto LABEL_18;
      }
      return 0LL;
    }
    if ( !svtVoiceEntity )
      return 0LL;
    v11 = this->fields.resUsrSvtData;
    if ( !v11 )
LABEL_22:
      sub_B170D4();
    v13 = *(_QWORD *)&v11->fields.limitCount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&v11->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v13;
    *(_QWORD *)&v15.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
    result = (ServantVoiceData_array *)ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
                                         svtVoiceEntity,
                                         v14,
                                         this->fields.limitUpPlayVoiceLabel,
                                         this->fields.genderType,
                                         0LL);
    if ( result )
    {
LABEL_18:
      if ( (int)result->max_length >= 1 )
        return (ServantVoiceData_array *)result->bounds[4];
      return 0LL;
    }
  }
  else
  {
    result = (ServantVoiceData_array *)this->fields.svtVoiceEntity;
    if ( result )
    {
      result = (ServantVoiceData_array *)ServantVoiceEntity__getLimitCntUpVoiceList(
                                           (ServantVoiceEntity_o *)result,
                                           this->fields.genderType,
                                           this->fields.limitUpPlayVoiceLabel,
                                           0LL);
      if ( result )
        goto LABEL_18;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__getSvtVoiceData(
        CombineResultEffectComponent_o *this,
        int32_t voiceId,
        int32_t costumeId,
        bool isLimitUp,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w22
  int SvtVoiceId; // w21
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v23; // x21
  __int64 v24; // x24
  int32_t v25; // w0
  struct UserServantEntity_o *v26; // x0
  int32_t CombineVoiceLimitCount; // w0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v29; // x8
  ServantLimitImageMaster_o *v30; // x23
  __int64 v31; // x24
  __int64 v32; // x25
  int32_t v33; // w0
  int32_t ServantLimitCountSealAfter; // w22
  WebViewManager_o *Instance; // x0
  ServantVoiceMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ServantVoiceEntity_o *Entity; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  ServantVoiceEntity_o *svtVoiceEntity; // x0
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v9 = costumeId;
  SvtVoiceId = voiceId;
  if ( (byte_40F9984 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceMaster___, *(_QWORD *)&voiceId);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40F9984 = 1;
  }
  *(_QWORD *)&this->fields.maxPlayCnt = 0LL;
  this->fields.asstName = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.asstName,
    0LL,
    *(System_String_array ***)&costumeId,
    (System_String_array **)isLimitUp,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.playVoiceList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playVoiceList, 0LL, v16, v17, v18, v19, v20, v21);
  if ( SvtVoiceId <= 0 )
  {
    resUsrSvtData = this->fields.resUsrSvtData;
    if ( !resUsrSvtData )
      goto LABEL_29;
    v24 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v52.fields.currentCryptoKey = v24;
    *(_QWORD *)&v52.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
    SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(v25, 0LL);
  }
  if ( v9 <= 0 )
  {
    v26 = this->fields.resUsrSvtData;
    if ( !v26 )
      goto LABEL_29;
    if ( isLimitUp )
      CombineVoiceLimitCount = BasicHelper__DecryptValue_19259816(v26->fields.limitCount, 0LL);
    else
      CombineVoiceLimitCount = UserServantEntity__getCombineVoiceLimitCount(v26, 0, 0LL);
    v9 = CombineVoiceLimitCount;
  }
  if ( this->fields.isLimitUpSuppression )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v29 = this->fields.resUsrSvtData;
  if ( !v29 )
    goto LABEL_29;
  v30 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
  v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v32;
  *(_QWORD *)&v53.fields.fakeValue = v31;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
  if ( !v30
    || (ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v30, v33, v9, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceMaster___)) == 0LL )
  {
LABEL_29:
    sub_B170D4();
  }
  Entity = ServantVoiceMaster__getEntity(
             MasterData_WarQuestSelectionMaster,
             2,
             SvtVoiceId,
             ServantLimitCountSealAfter,
             0LL);
  this->fields.svtVoiceEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtVoiceEntity,
    (System_Int32_array **)Entity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  svtVoiceEntity = this->fields.svtVoiceEntity;
  if ( svtVoiceEntity )
  {
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(svtVoiceEntity, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.asstName,
      (System_Int32_array **)VoiceAssetName,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
}


void __fastcall CombineResultEffectComponent__loadBoxGachaEffect(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetLoader_LoadEndDataHandler_o *v9; // x20

  if ( (byte_40F997C & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent_endloadEffect__, v6);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5817/*"Effect/Combine"*/, v8);
    byte_40F997C = 1;
  }
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5817/*"Effect/Combine"*/, v9, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__loadVoiceData(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *asstName; // x20
  SoundManager_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x22

  if ( (byte_40F9986 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent_EndLoad__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_40F9986 = 1;
  }
  if ( this->fields.asstName )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    asstName = this->fields.asstName;
    v7 = (SoundManager_o *)Instance;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndLoad__, 0LL);
    if ( !v7 )
      sub_B170D4();
    SoundManager__LoadAudioAssetStorage(v7, asstName, v12, 1, 0LL);
  }
  else
  {
    CombineResultEffectComponent__EndLoad(this, method);
  }
}


void __fastcall CombineResultEffectComponent__playVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineResultEffectComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ServantVoiceData_array *playVoiceList; // x8
  __int64 playCnt; // x9
  int max_length; // w10
  ServantVoiceData_o *v15; // x8
  System_Int32_array **id; // x1
  struct ServantVoiceData_array *v17; // x8
  __int64 v18; // x9
  ServantVoiceData_o *v19; // x0
  int32_t face; // w21
  int32_t form; // w20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  float FadeTime; // s0
  System_Collections_Generic_IEnumerable_TSource__o *currentFigureCollectList; // x0
  float v28; // s8
  int32_t v29; // w2
  ServantVoiceData_array *v30; // x3
  const MethodInfo *v31; // x6
  System_Collections_Generic_List_StandFigureCollect__o *afterFigureCollectList; // x4
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  float volume; // s8
  System_Action_o *v36; // x22
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  v8 = this;
  if ( (byte_40F999D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CombineResultEffectComponent_EndPlay__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_StandFigureCollect___, v10);
    this = (CombineResultEffectComponent_o *)sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40F999D = 1;
  }
  if ( v8->fields.asstName && v8->fields.maxPlayCnt )
  {
    playVoiceList = v8->fields.playVoiceList;
    if ( !playVoiceList )
      goto LABEL_24;
    playCnt = v8->fields.playCnt;
    max_length = playVoiceList->max_length;
    if ( (int)playCnt >= max_length )
      return;
    if ( (unsigned int)playCnt < max_length )
    {
      v15 = playVoiceList->m_Items[playCnt];
      if ( !v15 )
        goto LABEL_24;
      id = (System_Int32_array **)v15->fields.id;
      v8->fields.vcName = (struct System_String_o *)id;
      sub_B16F98((BattleServantConfConponent_o *)&v8->fields.vcName, id, v2, v3, v4, v5, v6, v7);
      v17 = v8->fields.playVoiceList;
      if ( !v17 )
        goto LABEL_24;
      v18 = v8->fields.playCnt;
      if ( (unsigned int)v18 < v17->max_length )
      {
        v19 = v17->m_Items[v18];
        if ( v19 )
        {
          face = v19->fields.face;
          form = v19->fields.form;
          FadeTime = ServantVoiceData__GetFadeTime(v19, 0LL);
          currentFigureCollectList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.currentFigureCollectList;
          if ( currentFigureCollectList )
          {
            v28 = FadeTime;
            if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                   currentFigureCollectList,
                   (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
            {
              if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___)
                && System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.afterFigureCollectList,
                     (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_StandFigureCollect___) )
              {
                afterFigureCollectList = v8->fields.afterFigureCollectList;
              }
              else
              {
                afterFigureCollectList = v8->fields.currentFigureCollectList;
              }
              CombineResultEffectComponent__SetStandFigureFace(
                v8,
                face,
                v28,
                v29,
                v30,
                afterFigureCollectList,
                form,
                v31);
            }
          }
          asstName = v8->fields.asstName;
          vcName = v8->fields.vcName;
          volume = v8->fields.volume;
          v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(v36, (Il2CppObject *)v8, Method_CombineResultEffectComponent_EndPlay__, 0LL);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v37 = (System_Int32_array **)SoundManager__playVoice_24824004(asstName, vcName, volume, v36, 0LL);
          v8->fields.player = (struct SePlayer_o *)v37;
          sub_B16F98((BattleServantConfConponent_o *)&v8->fields.player, v37, v38, v39, v40, v41, v42, v43);
          ++v8->fields.playCnt;
          return;
        }
LABEL_24:
        sub_B170D4();
      }
    }
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
}


void __fastcall CombineResultEffectComponent__setBaseSecretTreasureDvcSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  struct UserServantEntity_o *v9; // x8
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v13; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F998A & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2721/*"BaseSvtNodeName"*/, v4);
    byte_40F998A = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  v9 = this->fields.baseUsrSvtData;
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  v10 = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9->fields.limitCount, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v10, v11, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_2721/*"BaseSvtNodeName"*/,
    0,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setBaseSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  System_String_o *v14; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  UnityEngine_Component_o *v17; // x21
  HutongGames_PlayMaker_FsmVariables_o *v18; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v20; // s0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  float v24; // s8
  int32_t v25; // w22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v28; // x8
  ServantLimitImageMaster_o *v29; // x23
  int32_t v30; // w0
  int32_t ServantLimitCountSealAfter; // w23
  int32_t CardImageLimitCount; // w0
  int32_t v33; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *TexturePrefab_26882832; // x0
  UnityEngine_Component_o *v36; // x19
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  UnityEngine_Transform_o *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9994 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_3875/*"CardScale"*/, v8);
    sub_B16FFC(&StringLiteral_2720/*"BaseSvtCardNodeName"*/, v9);
    byte_40F9994 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_25;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(FsmVariables, (System_String_o *)StringLiteral_2720/*"BaseSvtCardNodeName"*/, 0LL);
  if ( !FsmString )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v14 = Value;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v14, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v17 = (UnityEngine_Component_o *)NodeFromName;
  v18 = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !v18 )
    goto LABEL_25;
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v18, (System_String_o *)StringLiteral_3875/*"CardScale"*/, 0LL);
  if ( !FsmFloat )
    goto LABEL_25;
  v20 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_25;
  v23 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  v24 = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v23;
  *(_QWORD *)&v42.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v28 = this->fields.baseUsrSvtData;
  if ( !v28 )
    goto LABEL_25;
  v29 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28->fields.limitCount, 0LL);
  if ( !v29 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v29, v25, v30, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v25, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v17 )
    goto LABEL_25;
  v33 = CardImageLimitCount;
  gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
  TexturePrefab_26882832 = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab_26882832(
                                                        gameObject,
                                                        this->fields.baseUsrSvtData,
                                                        v33,
                                                        10,
                                                        0LL,
                                                        changeNameType,
                                                        0LL);
  if ( !TexturePrefab_26882832
    || (v36 = TexturePrefab_26882832,
        v37 = UnityEngine_Component__get_transform(TexturePrefab_26882832, 0LL),
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL),
        !v37)
    || (UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
        (v41 = UnityEngine_Component__get_transform(v36, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v43.fields.x = v24;
  v43.fields.y = v24;
  v43.fields.z = v24;
  UnityEngine_Transform__set_localScale(v41, v43, 0LL);
}


void __fastcall CombineResultEffectComponent__setCostumeCombineResSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantVoiceData_array *CostumeSvtVoiceList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  ServantVoiceData_o *v7; // x8
  int32_t face; // w20
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  int32_t v13; // w21
  int32_t FigureImageLimitCount; // w2
  const MethodInfo *v15; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F9992 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8497/*"LimitUpResSvtNodeName"*/, v3);
    byte_40F9992 = 1;
  }
  CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, method);
  if ( CostumeSvtVoiceList )
  {
    if ( !CostumeSvtVoiceList->max_length )
    {
      sub_B17100(CostumeSvtVoiceList, v5, v6);
      sub_B170A0();
    }
    v7 = CostumeSvtVoiceList->m_Items[0];
    if ( !v7 )
LABEL_14:
      sub_B170D4();
    face = v7->fields.face;
  }
  else
  {
    face = 0;
  }
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_14;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_14;
  v13 = v12;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    v13,
    FigureImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8497/*"LimitUpResSvtNodeName"*/,
    v15);
}


void __fastcall CombineResultEffectComponent__setEffectEnable(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0

  effect = this->fields.effect;
  if ( !effect )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(effect, 1, 0LL);
}


void __fastcall CombineResultEffectComponent__setLimitUpBaseSvtFigure(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  struct UserServantEntity_o *v9; // x8
  int32_t v10; // w20
  int32_t v11; // w21
  int32_t ImageLimitCount; // w2
  const MethodInfo *v13; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40F998D & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_8496/*"LimitUpBaseSvtNodeName"*/, v4);
    byte_40F998D = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  v9 = this->fields.baseUsrSvtData;
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  v10 = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9->fields.limitCount, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(v10, v11, 0LL);
  CombineResultEffectComponent__CreateBaseFigurePrefab(
    this,
    0,
    ImageLimitCount,
    -1,
    (System_String_o *)StringLiteral_8496/*"LimitUpBaseSvtNodeName"*/,
    1,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtFigure(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ServantVoiceData_array *LimitUpSvtVoiceList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  ServantVoiceData_o *v11; // x8
  int32_t face; // w22
  int32_t ImageLimitCount; // w2
  const MethodInfo *v14; // x5

  if ( (byte_40F9993 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_8496/*"LimitUpBaseSvtNodeName"*/, v7);
    byte_40F9993 = 1;
  }
  LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 0, *(const MethodInfo **)&limitCnt);
  if ( LimitUpSvtVoiceList )
  {
    if ( !LimitUpSvtVoiceList->max_length )
    {
      sub_B17100(LimitUpSvtVoiceList, v9, v10);
      sub_B170A0();
    }
    v11 = LimitUpSvtVoiceList->m_Items[0];
    if ( !v11 )
      sub_B170D4();
    face = v11->fields.face;
  }
  else
  {
    face = 0;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCnt, 0LL);
  CombineResultEffectComponent__CreateAfterFigurePrefab(
    this,
    svtId,
    ImageLimitCount,
    face,
    (System_String_o *)StringLiteral_8496/*"LimitUpBaseSvtNodeName"*/,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setNameRevealSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t svtId,
        int32_t limitCnt,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  System_String_o *v14; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  UnityEngine_Component_o *v17; // x23
  HutongGames_PlayMaker_FsmVariables_o *v18; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v20; // s0
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICharaGraphTexture_o *TexturePrefab; // x0
  UnityEngine_Component_o **p_nameRevealCard; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Component_o *nameRevealCard; // x0
  UnityEngine_Transform_o *v32; // x19
  int v33; // s0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9996 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3875/*"CardScale"*/, *(_QWORD *)&svtId);
    sub_B16FFC(&StringLiteral_2720/*"BaseSvtCardNodeName"*/, v9);
    byte_40F9996 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_16;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(FsmVariables, (System_String_o *)StringLiteral_2720/*"BaseSvtCardNodeName"*/, 0LL);
  if ( !FsmString )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v14 = Value;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v14, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v17 = (UnityEngine_Component_o *)NodeFromName;
  v18 = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !v18 )
    goto LABEL_16;
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v18, (System_String_o *)StringLiteral_3875/*"CardScale"*/, 0LL);
  if ( !FsmFloat )
    goto LABEL_16;
  v20 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
  if ( !v17 )
    goto LABEL_16;
  v21 = v20;
  gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
  TexturePrefab = CharaGraphManager__CreateTexturePrefab(
                    gameObject,
                    svtId,
                    limitCnt,
                    0,
                    0,
                    10,
                    0LL,
                    changeNameType,
                    0LL);
  p_nameRevealCard = (UnityEngine_Component_o **)&this->fields.nameRevealCard;
  this->fields.nameRevealCard = TexturePrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.nameRevealCard,
    (System_Int32_array **)TexturePrefab,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  nameRevealCard = (UnityEngine_Component_o *)this->fields.nameRevealCard;
  if ( !nameRevealCard
    || (v32 = UnityEngine_Component__get_transform(nameRevealCard, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_zero(0LL),
        !v32)
    || (UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL), !*p_nameRevealCard)
    || (v36 = UnityEngine_Component__get_transform(*p_nameRevealCard, 0LL)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  v37.fields.x = v21;
  v37.fields.y = v21;
  v37.fields.z = v21;
  UnityEngine_Transform__set_localScale(v36, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultCostumeSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  System_String_o *v10; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  UnityEngine_Component_o *v13; // x21
  HutongGames_PlayMaker_FsmVariables_o *v14; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v16; // s0
  float v17; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UserServantEntity_o *resUsrSvtData; // x20
  UnityEngine_GameObject_o *v20; // x21
  int32_t FigureImageLimitCount; // w0
  UnityEngine_Component_o *TexturePrefab_26882832; // x0
  UnityEngine_Component_o *v23; // x19
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9997 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3875/*"CardScale"*/, *(_QWORD *)&changeNameType);
    sub_B16FFC(&StringLiteral_11450/*"ResultSvtCardNodeName"*/, v5);
    byte_40F9997 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_16;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_16;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                FsmVariables,
                (System_String_o *)StringLiteral_11450/*"ResultSvtCardNodeName"*/,
                0LL);
  if ( !FsmString )
    goto LABEL_16;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !this->fields.effect )
    goto LABEL_16;
  v10 = Value;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v10, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_16;
  v13 = (UnityEngine_Component_o *)NodeFromName;
  v14 = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !v14 )
    goto LABEL_16;
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v14, (System_String_o *)StringLiteral_3875/*"CardScale"*/, 0LL);
  if ( !FsmFloat )
    goto LABEL_16;
  v16 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v17 = v16;
  gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_16;
  v20 = gameObject;
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount(resUsrSvtData, 0, 0LL);
  TexturePrefab_26882832 = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab_26882832(
                                                        v20,
                                                        resUsrSvtData,
                                                        FigureImageLimitCount,
                                                        10,
                                                        0LL,
                                                        changeNameType,
                                                        0LL);
  if ( !TexturePrefab_26882832
    || (v23 = TexturePrefab_26882832,
        v24 = UnityEngine_Component__get_transform(TexturePrefab_26882832, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL),
        !v24)
    || (UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)&v25, 0LL),
        (v28 = UnityEngine_Component__get_transform(v23, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  v29.fields.x = v17;
  v29.fields.y = v17;
  v29.fields.z = v17;
  UnityEngine_Transform__set_localScale(v28, v29, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v23, 1.89, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent__setResultSvtGraphCard(
        CombineResultEffectComponent_o *this,
        int32_t changeNameType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x0
  System_String_o *v14; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  UnityEngine_Component_o *v17; // x21
  HutongGames_PlayMaker_FsmVariables_o *v18; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v20; // s0
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v22; // x22
  __int64 v23; // x23
  float v24; // s8
  int32_t v25; // w22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v28; // x8
  ServantLimitImageMaster_o *v29; // x23
  int32_t v30; // w0
  int32_t ServantLimitCountSealAfter; // w23
  int32_t CardImageLimitCount; // w0
  int32_t v33; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *TexturePrefab_26882832; // x0
  UnityEngine_Component_o *v36; // x19
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  UnityEngine_Transform_o *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9995 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&changeNameType);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_3875/*"CardScale"*/, v8);
    sub_B16FFC(&StringLiteral_11450/*"ResultSvtCardNodeName"*/, v9);
    byte_40F9995 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_25;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_25;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                FsmVariables,
                (System_String_o *)StringLiteral_11450/*"ResultSvtCardNodeName"*/,
                0LL);
  if ( !FsmString )
    goto LABEL_25;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !this->fields.effect )
    goto LABEL_25;
  v14 = Value;
  transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, v14, 1, 0LL);
  if ( !this->fields.fsm )
    goto LABEL_25;
  v17 = (UnityEngine_Component_o *)NodeFromName;
  v18 = PlayMakerFSM__get_FsmVariables(this->fields.fsm, 0LL);
  if ( !v18 )
    goto LABEL_25;
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v18, (System_String_o *)StringLiteral_3875/*"CardScale"*/, 0LL);
  if ( !FsmFloat )
    goto LABEL_25;
  v20 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_25;
  v23 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  v24 = v20;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v23;
  *(_QWORD *)&v42.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v28 = this->fields.resUsrSvtData;
  if ( !v28 )
    goto LABEL_25;
  v29 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28->fields.limitCount, 0LL);
  if ( !v29 )
    goto LABEL_25;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v29, v25, v30, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v25, ServantLimitCountSealAfter, 1, 0, 0LL);
  if ( !v17 )
    goto LABEL_25;
  v33 = CardImageLimitCount;
  gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
  TexturePrefab_26882832 = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab_26882832(
                                                        gameObject,
                                                        this->fields.resUsrSvtData,
                                                        v33,
                                                        10,
                                                        0LL,
                                                        changeNameType,
                                                        0LL);
  if ( !TexturePrefab_26882832
    || (v36 = TexturePrefab_26882832,
        v37 = UnityEngine_Component__get_transform(TexturePrefab_26882832, 0LL),
        *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL),
        !v37)
    || (UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
        (v41 = UnityEngine_Component__get_transform(v36, 0LL)) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v43.fields.x = v24;
  v43.fields.y = v24;
  v43.fields.z = v24;
  UnityEngine_Transform__set_localScale(v41, v43, 0LL);
  UICharaGraphTexture__ExecuteNameCrossFade((UICharaGraphTexture_o *)v36, 1.89, 0LL);
}


void __fastcall CombineResultEffectComponent__setSkillResultInfo(
        CombineResultEffectComponent_o *this,
        const MethodInfo *method)
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
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t kind; // w8
  SkillUpResultWindowComponent_o *v64; // x20
  UserServantEntity_o *v65; // x21
  int32_t v66; // w22
  int32_t v67; // w23
  System_Action_o *v68; // x24
  __int64 v69; // x0
  const MethodInfo *v70; // x2
  struct UserServantEntity_o *v71; // x8
  System_String_array *v72; // x20
  void *EntityListFromIdNum; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x21
  System_String_o *v82; // x0
  __int64 v83; // x2
  __int64 v84; // x0
  const MethodInfo *v85; // x2
  struct UserServantEntity_o *v86; // x8
  System_String_array *v87; // x20
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x21
  System_String_o *v94; // x0
  UserServantEntity_o *v95; // x20
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0
  MethodInfo *v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct ServantVoiceData_array **p_playVoiceList; // x20
  struct ServantVoiceData_array **v104; // x0
  struct ServantVoiceData_array *LimitUpSvtVoiceList; // x1
  UserServantEntity_o *v106; // x0
  System_Int32_array *SkillIdList; // x0
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t targetId; // w22
  int32_t targetLv; // w23
  System_Int32_array *svtUseSkillIdList; // x20
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  System_Action_o *v116; // x24
  struct UserServantEntity_o *v117; // x8
  int32_t targetIdOld; // w26
  int32_t targetLvOld; // w25
  __int64 v120; // x27
  __int64 v121; // x28
  int32_t v122; // w0
  int32_t v123; // w6
  bool v124; // w8
  __int64 v125; // x20
  __int64 v126; // x20
  DataManager_o *v127; // x0
  ServantSkillMaster_o *v128; // x21
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  System_Collections_Generic_List_int__o *v133; // x20
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  __int64 v138; // x28
  int32_t v139; // w22
  struct UserServantEntity_o *v140; // x8
  __int64 v141; // x23
  __int64 v142; // x24
  int32_t v143; // w0
  int v144; // w9
  unsigned int v145; // w10
  ServantSkillEntity_o *v146; // x8
  __int64 v147; // x23
  struct UserServantEntity_o *v148; // x8
  __int64 v149; // x23
  __int64 v150; // x24
  int32_t v151; // w0
  BalanceConfig_c *v152; // x0
  UserServantEntity_o *v153; // x0
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v155; // x8
  WebViewManager_o *v156; // x0
  UserServantCollectionMaster_o *v157; // x23
  int64_t UserId; // x0
  struct UserServantEntity_o *v159; // x8
  int64_t v160; // x24
  __int64 v161; // x25
  __int64 v162; // x26
  int32_t v163; // w0
  struct System_Int32_array *costumeIds; // x8
  System_Collections_Generic_List_int__o *v165; // x23
  struct UserServantEntity_o *v166; // x8
  __int64 v167; // x23
  __int64 v168; // x24
  int32_t v169; // w0
  System_Collections_Generic_List_ServantSkillEntity__o *EntityListFromSkillId; // x0
  Il2CppObject *current; // x21
  int64_t v172; // x0
  struct UserServantEntity_o *v173; // x8
  int64_t v174; // x23
  int32_t v175; // w24
  __int64 v176; // x25
  __int64 v177; // x26
  int32_t v178; // w3
  bool isRelease; // w28
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x3
  __int64 v183; // x4
  CommonUI_o *v184; // x20
  AvalonSceneManager_c *v185; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v187; // x0
  __int64 *v188; // x8
  struct ServantVoiceData_array *v189; // x8
  struct UserServantEntity_o *v190; // x8
  __int64 v191; // x20
  __int64 v192; // x21
  int32_t v193; // w0
  struct UserServantEntity_o *v194; // x8
  int v195; // w21
  int32_t v196; // w20
  const MethodInfo *v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  BalanceConfig_c *v201; // x0
  struct UserServantEntity_o *v202; // x8
  __int64 v203; // x22
  __int64 v204; // x23
  System_Collections_Generic_IEnumerable_TSource__o *LimitSealedDialogMaxLimitOpenIds; // x21
  int32_t v206; // w0
  _BOOL4 isLimitUpSuppression; // w8
  int32_t v208; // w8
  SkillUpResultWindowComponent_o *v209; // x20
  UserServantEntity_o *v210; // x21
  System_Action_o *v211; // x22
  struct ServantVoiceData_array *CostumeSvtVoiceList; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  FriendshipExceedResultWindowComponent_o *v219; // x0
  UserServantEntity_o *v220; // x0
  SvtUseSkillData_o *AppendSkillInfo; // x0
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x3
  __int64 v225; // x4
  struct UserServantEntity_o *v226; // x8
  __int64 v227; // x27
  __int64 v228; // x28
  int32_t v229; // w0
  SkillUpResultWindowComponent_o *v230; // x20
  UserServantEntity_o *v231; // x21
  int32_t oldFriendShipRank; // w22
  System_Action_o *v233; // x23
  struct UserServantEntity_o **p_baseUsrSvtData; // x22
  WebViewManager_o *v235; // x0
  WarQuestSelectionMaster_o *v236; // x0
  struct UserServantEntity_o *v237; // x8
  __int128 v238; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v239; // x20
  int64_t v240; // x0
  struct UserServantEntity_o *v241; // x0
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  struct SvtCombineResultWindowComponent_o *v248; // x20
  struct UserServantEntity_o *v249; // x21
  int32_t v250; // w22
  __int64 v251; // x1
  __int64 v252; // x2
  __int64 v253; // x3
  __int64 v254; // x4
  System_Action_o *v255; // x23
  SvtCombineResultWindowComponent_o *v256; // x0
  UserServantEntity_o *v257; // x1
  int32_t v258; // w2
  System_Action_o *v259; // x3
  System_Action_o *v260; // x4
  CommandCardExceedResultWindowComponent_o *commandCardExceedResultWindow; // x0
  FriendshipExceedResultWindowComponent_o *friendshipExceedResultWindow; // x0
  CombineResultEffectComponent_MessageDelegate_o *messageCallback; // x20
  WebViewManager_o *v264; // x0
  __int64 v265; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v266; // x21
  TerminalPramsManager_c *v267; // x0
  QuestEntity_o *v268; // x22
  WebViewManager_o *v269; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v270; // x0
  ServantEntity_o *v271; // x21
  BalanceConfig_c *v272; // x8
  System_String_o *v273; // x0
  System_String_o *v274; // x22
  Il2CppObject *Name; // x0
  System_String_o *v276; // x0
  LimitUpResultCheckComponent_o *v277; // x20
  System_Action_o *v278; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v282; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v283; // x21
  int64_t v284; // x0
  struct UserServantEntity_o *v285; // x0
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  struct UserServantEntity_o *resUsrSvtData; // x8
  int32_t v293; // w21
  const MethodInfo *v294; // x1
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  struct ServantVoiceData_array *playVoiceList; // x8
  const MethodInfo *v302; // x3
  __int64 v303; // x2
  __int64 v304; // x3
  __int64 v305; // x4
  __int64 v306; // x22
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  System_Int32_array **callbackFunc; // x1
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  System_String_array **v320; // x2
  System_String_array **v321; // x3
  System_Boolean_array **v322; // x4
  System_Int32_array **v323; // x5
  System_Int32_array *v324; // x6
  System_Int32_array *v325; // x7
  __int64 v326; // x23
  __int64 v327; // x1
  __int64 v328; // x2
  __int64 v329; // x3
  __int64 v330; // x4
  System_Action_o *v331; // x24
  System_String_array **v332; // x2
  System_String_array **v333; // x3
  System_Boolean_array **v334; // x4
  System_Int32_array **v335; // x5
  System_Int32_array *v336; // x6
  System_Int32_array *v337; // x7
  Il2CppObject *v338; // x21
  __int64 v339; // x1
  __int64 v340; // x2
  __int64 v341; // x3
  __int64 v342; // x4
  CombineResultEffectComponent_ClickDelegate_o *v343; // x22
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  struct SvtCombineResultWindowComponent_o *svtResultInfoWindow; // x20
  struct UserServantEntity_o *v351; // x21
  int32_t baseUsrSvtCollictionLv; // w22
  System_Action_o *v353; // x23
  __int64 v354; // x1
  __int64 v355; // x2
  __int64 v356; // x3
  __int64 v357; // x4
  System_Action_o *v358; // x24
  System_String_o *v359; // x0
  System_String_o *v360; // x23
  System_String_o *QuestName; // x0
  Il2CppObject *v362; // x22
  Il2CppObject *v363; // x0
  __int64 v364; // x1
  __int64 v365; // x2
  __int64 v366; // x3
  __int64 v367; // x4
  AvalonSceneManager_c *v368; // x8
  System_Action_o *v369; // x21
  SkillUpResultWindowComponent_o *v370; // x21
  int32_t v371; // w22
  int32_t v372; // w23
  System_Action_o *v373; // x24
  struct UserServantEntity_o *v374; // x8
  int32_t v375; // w25
  int32_t v376; // w19
  __int64 v377; // x26
  __int64 v378; // x27
  int32_t v379; // w0
  int32_t v380; // w26
  System_Int32_array *v381; // x0
  char isDispLv; // [xsp+10h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v383; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v384; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v385; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v386; // [xsp+80h] [xbp-90h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int32_t v388; // [xsp+B8h] [xbp-58h]
  int32_t lv; // [xsp+BCh] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16

  if ( (byte_40F999A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v6);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, v8);
    sub_B16FFC(&Method_CombineResultEffectComponent_EndDisp__, v9);
    sub_B16FFC(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__, v10);
    sub_B16FFC(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__, v11);
    sub_B16FFC(&Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__, v12);
    sub_B16FFC(&Method_CombineResultEffectComponent_clickNext__, v13);
    sub_B16FFC(&CombineResultFormManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v19);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v22);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v23);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__get_Current__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v31);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v32);
    sub_B16FFC(&LocalizationManager_TypeInfo, v33);
    sub_B16FFC(&NetworkManager_TypeInfo, v34);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v37);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v39);
    sub_B16FFC(&string___TypeInfo, v40);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v41);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__, v42);
    sub_B16FFC(&CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, v43);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__, v44);
    sub_B16FFC(&CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v45);
    sub_B16FFC(&StringLiteral_10852/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, v46);
    sub_B16FFC(&StringLiteral_10853/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, v47);
    sub_B16FFC(&StringLiteral_1/*""*/, v48);
    byte_40F999A = 1;
  }
  lv = 0;
  entity = 0LL;
  memset(&v386, 0, sizeof(v386));
  v49 = sub_B170CC(CombineResultEffectComponent___c__DisplayClass143_0_TypeInfo, method, v2, v3, v4);
  CombineResultEffectComponent___c__DisplayClass143_0___ctor(
    (CombineResultEffectComponent___c__DisplayClass143_0_o *)v49,
    0LL);
  if ( v49 )
  {
    *(_QWORD *)(v49 + 24) = this;
    sub_B16F98((BattleServantConfConponent_o *)(v49 + 24), (System_Int32_array **)this, v50, v51, v52, v53, v54, v55);
    kind = this->fields.kind;
    switch ( kind )
    {
      case 0:
        if ( this->fields.setResUsrSvtData )
        {
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
        }
        else
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            break;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
          p_baseUsrSvtData = &this->fields.baseUsrSvtData;
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            break;
          v282 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v283 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
          *(_OWORD *)&v385.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v385.fields.fakeValue = v282;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v384 = v385;
          v284 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v384, 0LL);
          if ( !v283 )
            break;
          v285 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   v283,
                   v284,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          this->fields.resUsrSvtData = v285;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
            (System_Int32_array **)v285,
            v286,
            v287,
            v288,
            v289,
            v290,
            v291);
        }
        if ( !*p_baseUsrSvtData )
          break;
        lv = (*p_baseUsrSvtData)->fields.lv;
        resUsrSvtData = this->fields.resUsrSvtData;
        if ( !resUsrSvtData )
          break;
        v293 = resUsrSvtData->fields.lv;
        if ( !System_Int32__Equals_38275732((int32_t)&lv, v293, 0LL) )
        {
          if ( this->fields.asstName )
          {
            if ( this->fields.svtVoiceEntity )
            {
              playVoiceList = this->fields.playVoiceList;
              if ( playVoiceList )
              {
                this->fields.maxPlayCnt = *(_QWORD *)&playVoiceList->max_length;
                CombineResultEffectComponent__playVoice(this, v294);
              }
            }
          }
        }
        *(_QWORD *)(v49 + 16) = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)(v49 + 16), 0LL, v295, v296, v297, v298, v299, v300);
        if ( CombineResultEffectComponent__CheckCombineLimit(this, lv, v293, v302) )
        {
          v306 = sub_B170CC(CombineResultEffectComponent___c__DisplayClass143_1_TypeInfo, v56, v303, v304, v305);
          CombineResultEffectComponent___c__DisplayClass143_1___ctor(
            (CombineResultEffectComponent___c__DisplayClass143_1_o *)v306,
            0LL);
          if ( !v306 )
            break;
          *(_QWORD *)(v306 + 24) = v49;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v306 + 24),
            (System_Int32_array **)v49,
            v307,
            v308,
            v309,
            v310,
            v311,
            v312);
          callbackFunc = (System_Int32_array **)this->fields.callbackFunc;
          *(_QWORD *)(v306 + 16) = callbackFunc;
          sub_B16F98((BattleServantConfConponent_o *)(v306 + 16), callbackFunc, v314, v315, v316, v317, v318, v319);
          this->fields.callbackFunc = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            0LL,
            v320,
            v321,
            v322,
            v323,
            v324,
            v325);
          v326 = *(_QWORD *)(v306 + 24);
          v331 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v327, v328, v329, v330);
          System_Action___ctor(
            v331,
            (Il2CppObject *)v306,
            Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__2__,
            0LL);
          if ( !v326 )
            break;
          *(_QWORD *)(v326 + 16) = v331;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v326 + 16),
            (System_Int32_array **)v331,
            v332,
            v333,
            v334,
            v335,
            v336,
            v337);
          v338 = *(Il2CppObject **)(v306 + 24);
          v343 = (CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                                   CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                   v339,
                                                                   v340,
                                                                   v341,
                                                                   v342);
          CombineResultEffectComponent_ClickDelegate___ctor(
            v343,
            v338,
            Method_CombineResultEffectComponent___c__DisplayClass143_0__setSkillResultInfo_b__3__,
            0LL);
          this->fields.callbackFunc = v343;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.callbackFunc,
            (System_Int32_array **)v343,
            v344,
            v345,
            v346,
            v347,
            v348,
            v349);
        }
        if ( !this->fields.combineStatusDisp )
        {
LABEL_211:
          CombineResultEffectComponent__EndDisp(this, v56);
          return;
        }
        svtResultInfoWindow = this->fields.svtResultInfoWindow;
        v351 = this->fields.resUsrSvtData;
        baseUsrSvtCollictionLv = this->fields.baseUsrSvtCollictionLv;
        v353 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v303, v304, v305);
        System_Action___ctor(v353, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v358 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v354, v355, v356, v357);
        System_Action___ctor(v358, (Il2CppObject *)this, Method_CombineResultEffectComponent_clickNext__, 0LL);
        if ( !svtResultInfoWindow )
          break;
        v256 = svtResultInfoWindow;
        v257 = v351;
        v258 = baseUsrSvtCollictionLv;
        v259 = v353;
        v260 = v358;
LABEL_210:
        SvtCombineResultWindowComponent__setAfterSvtResultState(v256, v257, v258, v259, v260, 0LL);
        return;
      case 1:
      case 10:
      case 19:
      case 26:
        v69 = sub_B17014(string___TypeInfo, 1LL, v57);
        v71 = this->fields.baseUsrSvtData;
        if ( !v71 )
          break;
        v72 = (System_String_array *)v69;
        *(_QWORD *)&v390.fields.currentCryptoKey = &v71->fields.svtId;
        *(_QWORD *)&v390.fields.fakeValue = 0LL;
        EntityListFromIdNum = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v390, v70);
        if ( !v72 )
          break;
        v81 = (System_Int32_array **)EntityListFromIdNum;
        if ( EntityListFromIdNum )
        {
          EntityListFromIdNum = (void *)sub_B170BC(EntityListFromIdNum, v72->obj.klass->_1.element_class);
          if ( !EntityListFromIdNum )
            goto LABEL_229;
        }
        if ( !v72->max_length )
          goto LABEL_226;
        v72->m_Items[0] = (System_String_o *)v81;
        sub_B16F98((BattleServantConfConponent_o *)v72->m_Items, v81, v75, v76, v77, v78, v79, v80);
        v82 = System_String__Concat_43823856(v72, 0LL);
        if ( UnityEngine_PlayerPrefs__GetInt_34836848(v82, 0LL) != 1 || (this->fields.kind | 0x10) == 26 )
          goto LABEL_23;
        v84 = sub_B17014(string___TypeInfo, 1LL, v83);
        v86 = this->fields.baseUsrSvtData;
        if ( !v86 )
          break;
        v87 = (System_String_array *)v84;
        *(_QWORD *)&v391.fields.currentCryptoKey = &v86->fields.svtId;
        *(_QWORD *)&v391.fields.fakeValue = 0LL;
        EntityListFromIdNum = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v391, v85);
        if ( !v87 )
          break;
        v93 = (System_Int32_array **)EntityListFromIdNum;
        if ( EntityListFromIdNum )
        {
          EntityListFromIdNum = (void *)sub_B170BC(EntityListFromIdNum, v87->obj.klass->_1.element_class);
          if ( !EntityListFromIdNum )
          {
LABEL_229:
            sub_B170F4(EntityListFromIdNum);
            sub_B170A0();
          }
        }
        if ( !v87->max_length )
          goto LABEL_226;
        v87->m_Items[0] = (System_String_o *)v93;
        sub_B16F98((BattleServantConfConponent_o *)v87->m_Items, v93, v75, v88, v89, v90, v91, v92);
        v94 = System_String__Concat_43823856(v87, 0LL);
        UnityEngine_PlayerPrefs__SetInt(v94, 0, 0LL);
        v95 = this->fields.baseUsrSvtData;
        if ( (BYTE3(CombineResultFormManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineResultFormManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineResultFormManager_TypeInfo);
        }
        CombineResultFormManager__ResetVoiceList(v95, 0LL);
LABEL_23:
        limitUpResultCheck = this->fields.limitUpResultCheck;
        if ( !limitUpResultCheck )
          break;
        LimitUpResultCheckComponent__checkResultLimitUp(
          limitUpResultCheck,
          this->fields.kind,
          this->fields.baseUsrSvtData,
          this->fields.resUsrSvtData,
          this->fields.baseUsrSvtCollectionLimitCnt,
          this->fields.limitUpRewardGiftDataList,
          0LL);
        p_playVoiceList = &this->fields.playVoiceList;
        if ( this->fields.isLimitUpSuppression )
        {
          this->fields.playVoiceList = 0LL;
          v104 = &this->fields.playVoiceList;
          LimitUpSvtVoiceList = 0LL;
        }
        else
        {
          LimitUpSvtVoiceList = CombineResultEffectComponent__getLimitUpSvtVoiceList(this, 1, v97);
          this->fields.playVoiceList = LimitUpSvtVoiceList;
          v104 = &this->fields.playVoiceList;
        }
        sub_B16F98(
          (BattleServantConfConponent_o *)v104,
          (System_Int32_array **)LimitUpSvtVoiceList,
          (System_String_array **)v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        v189 = *p_playVoiceList;
        if ( *p_playVoiceList )
        {
LABEL_130:
          if ( this->fields.asstName )
          {
            this->fields.maxPlayCnt = *(_QWORD *)&v189->max_length;
            CombineResultEffectComponent__playVoice(this, v56);
          }
          return;
        }
        v190 = this->fields.baseUsrSvtData;
        if ( !v190 )
          break;
        v192 = *(_QWORD *)&v190->fields.limitCount.fields.currentCryptoKey;
        v191 = *(_QWORD *)&v190->fields.limitCount.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v398.fields.currentCryptoKey = v192;
        *(_QWORD *)&v398.fields.fakeValue = v191;
        v193 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v398, 0LL);
        v194 = this->fields.baseUsrSvtData;
        v195 = v193 == 2;
        if ( !v194 )
          break;
        v196 = v193;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v194->fields.limitCount, 0LL) != 3 )
          goto LABEL_124;
        v201 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v201 = BalanceConfig_TypeInfo;
        }
        v202 = this->fields.baseUsrSvtData;
        if ( v202 )
        {
          v204 = *(_QWORD *)&v202->fields.svtId.fields.currentCryptoKey;
          v203 = *(_QWORD *)&v202->fields.svtId.fields.fakeValue;
          LimitSealedDialogMaxLimitOpenIds = (System_Collections_Generic_IEnumerable_TSource__o *)v201->static_fields->LimitSealedDialogMaxLimitOpenIds;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v399.fields.currentCryptoKey = v204;
          *(_QWORD *)&v399.fields.fakeValue = v203;
          v206 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v399, 0LL);
          v195 = (v196 == 2) | System_Linq_Enumerable__Contains_int_(
                                 LimitSealedDialogMaxLimitOpenIds,
                                 v206,
                                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_124:
          isLimitUpSuppression = this->fields.isLimitUpSuppression;
          if ( this->fields.isLimitUpSuppression )
          {
            v208 = this->fields.kind;
            isLimitUpSuppression = v208 != 10 && v208 != 26;
          }
          if ( (isLimitUpSuppression & v195) != 0 )
          {
            CombineResultEffectComponent__OpenLimitCountSealDialog(this, v197);
            return;
          }
          v277 = this->fields.limitUpResultCheck;
          v278 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v197, v198, v199, v200);
          System_Action___ctor(
            v278,
            (Il2CppObject *)this,
            Method_CombineResultEffectComponent__setSkillResultInfo_b__143_5__,
            0LL);
          if ( v277 )
          {
            LimitUpResultCheckComponent__DispResultLimitUp(v277, v278, 1, 0LL);
            return;
          }
        }
        break;
      case 2:
      case 3:
        v106 = this->fields.baseUsrSvtData;
        if ( !v106 )
          break;
        SkillIdList = UserServantEntity__getSkillIdList(v106, -1, -1, 1, 0LL);
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        svtUseSkillIdList = SkillIdList;
        v116 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v112, v113, v114, v115);
        System_Action___ctor(v116, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v117 = this->fields.baseUsrSvtData;
        if ( !v117 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v121 = *(_QWORD *)&v117->fields.svtId.fields.currentCryptoKey;
        v120 = *(_QWORD *)&v117->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v392.fields.currentCryptoKey = v121;
        *(_QWORD *)&v392.fields.fakeValue = v120;
        v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v392, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v123 = v122;
        v124 = this->fields.kind == 3;
        isDispLv = 0;
        goto LABEL_142;
      case 4:
      case 5:
      case 8:
      case 18:
      case 27:
        v64 = this->fields.skillResultInfoWindow;
        v65 = this->fields.baseUsrSvtData;
        v66 = this->fields.targetId;
        v67 = this->fields.targetLv;
        v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
        System_Action___ctor(v68, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v64 )
          break;
        SkillUpResultWindowComponent__OpenNpUpResultInfo_23648372(
          v64,
          v65,
          v66,
          v67,
          v68,
          this->fields.targetIdOld,
          this->fields.targetLvOld,
          this->fields.kind,
          0LL);
        return;
      case 6:
        v235 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v235 )
          break;
        v236 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)v235,
                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        v237 = this->fields.baseUsrSvtData;
        if ( !v237 )
          break;
        v238 = *(_OWORD *)&v237->fields.id.fields.fakeValue;
        v239 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)v236;
        *(_OWORD *)&v385.fields.currentCryptoKey = *(_OWORD *)&v237->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v385.fields.fakeValue = v238;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v383 = v385;
        v240 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v383, 0LL);
        if ( !v239 )
          break;
        v241 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 v239,
                 v240,
                 (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        this->fields.resUsrSvtData = v241;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.resUsrSvtData,
          (System_Int32_array **)v241,
          v242,
          v243,
          v244,
          v245,
          v246,
          v247);
        v248 = this->fields.svtResultInfoWindow;
        v249 = this->fields.resUsrSvtData;
        v250 = this->fields.baseUsrSvtCollictionLv;
        v255 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v251, v252, v253, v254);
        System_Action___ctor(v255, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v248 )
          break;
        v256 = v248;
        v257 = v249;
        v258 = v250;
        v259 = v255;
        v260 = 0LL;
        goto LABEL_210;
      case 7:
      case 21:
        v125 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v125 + 306) & 1) == 0 )
          sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
        v126 = **(_QWORD **)(v125 + 192);
        if ( (*(_BYTE *)(v126 + 306) & 1) == 0 )
          sub_AAFCFC(v126);
        v127 = **(DataManager_o ***)(v126 + 184);
        if ( !v127 )
          break;
        v128 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v127,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
        v133 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v129,
                                                           v130,
                                                           v131,
                                                           v132);
        System_Collections_Generic_List_int____ctor(
          v133,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        v138 = 0LL;
        v139 = 1;
LABEL_59:
        v152 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v152 = BalanceConfig_TypeInfo;
        }
        if ( v139 <= v152->static_fields->SvtSkillListMax )
        {
          v140 = this->fields.baseUsrSvtData;
          if ( v140 )
          {
            v142 = *(_QWORD *)&v140->fields.svtId.fields.currentCryptoKey;
            v141 = *(_QWORD *)&v140->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v393.fields.currentCryptoKey = v142;
            *(_QWORD *)&v393.fields.fakeValue = v141;
            v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v393, 0LL);
            if ( v128 )
            {
              EntityListFromIdNum = ServantSkillMaster__getEntityListFromIdNum(v128, v143, v139, 0LL);
              if ( EntityListFromIdNum )
              {
                v144 = *((_DWORD *)EntityListFromIdNum + 6);
                if ( v144 < 1 )
                {
LABEL_51:
                  v148 = this->fields.baseUsrSvtData;
                  if ( !v148 )
                    break;
                  v150 = *(_QWORD *)&v148->fields.svtId.fields.currentCryptoKey;
                  v149 = *(_QWORD *)&v148->fields.svtId.fields.fakeValue;
                  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  }
                  *(_QWORD *)&v394.fields.currentCryptoKey = v150;
                  *(_QWORD *)&v394.fields.fakeValue = v149;
                  v151 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v394, 0LL);
                  v146 = ServantSkillMaster__GetEntity(v128, v151, v139, 1, 0LL);
                  v147 = v138;
                  if ( v146 )
                  {
LABEL_56:
                    if ( !v133 )
                      break;
                    System_Collections_Generic_List_int___Add(
                      v133,
                      v146->fields.skillId,
                      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                    v138 = v147;
                  }
                  ++v139;
                  goto LABEL_59;
                }
                v145 = 0;
                while ( 1 )
                {
                  if ( v145 >= v144 )
                  {
LABEL_226:
                    sub_B17100(EntityListFromIdNum, v74, v75);
                    sub_B170A0();
                  }
                  v146 = (ServantSkillEntity_o *)*((_QWORD *)EntityListFromIdNum + (int)v145 + 4);
                  if ( !v146 )
                    break;
                  v147 = *((_QWORD *)EntityListFromIdNum + (int)v145 + 4);
                  if ( v146->fields.skillId == this->fields.targetId )
                    goto LABEL_56;
                  if ( (int)++v145 >= v144 )
                    goto LABEL_51;
                }
              }
            }
          }
        }
        else
        {
          if ( this->fields.kind == 7 )
          {
            v153 = this->fields.baseUsrSvtData;
            if ( !v153 )
              break;
            DispLimitCount = UserServantEntity__getDispLimitCount(v153, 0, 0LL);
            v155 = this->fields.baseUsrSvtData;
            v388 = DispLimitCount;
            if ( !v155 )
              break;
            if ( UserServantEntity__IsHeroine(v155, 0LL) )
            {
              v156 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v156 )
                break;
              v157 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)v156,
                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              UserId = NetworkManager__get_UserId(0LL);
              v159 = this->fields.baseUsrSvtData;
              if ( !v159 )
                break;
              v160 = UserId;
              v162 = *(_QWORD *)&v159->fields.svtId.fields.currentCryptoKey;
              v161 = *(_QWORD *)&v159->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v395.fields.currentCryptoKey = v162;
              *(_QWORD *)&v395.fields.fakeValue = v161;
              v163 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v395, 0LL);
              if ( !v157 )
                break;
              if ( UserServantCollectionMaster__TryGetEntity(v157, &entity, v160, v163, 0LL) )
              {
                if ( !entity )
                  break;
                costumeIds = entity->fields.costumeIds;
                if ( !costumeIds )
                  break;
                if ( *(_QWORD *)&costumeIds->max_length )
                {
                  v165 = UserServantCollectionEntity__GetSkillChangeCostumeList(entity, 0LL);
                  if ( System_Linq_Enumerable__Any_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v165,
                         (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___) )
                  {
                    v388 = System_Linq_Enumerable__Max((System_Collections_Generic_IEnumerable_int__o *)v165, 0LL);
                  }
                }
              }
            }
            v166 = this->fields.baseUsrSvtData;
            if ( !v166 )
              break;
            v168 = *(_QWORD *)&v166->fields.svtId.fields.currentCryptoKey;
            v167 = *(_QWORD *)&v166->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v396.fields.currentCryptoKey = v168;
            *(_QWORD *)&v396.fields.fakeValue = v167;
            v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v396, 0LL);
            if ( !v138 )
              break;
            if ( !v128 )
              break;
            EntityListFromSkillId = ServantSkillMaster__getEntityListFromSkillId(
                                      v128,
                                      v169,
                                      *(_DWORD *)(v138 + 20),
                                      this->fields.targetIdOld,
                                      0LL);
            if ( !EntityListFromSkillId )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v385,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromSkillId,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantSkillEntity__GetEnumerator__);
            v386.fields.current = (Il2CppObject *)v385.fields.fakeValue;
            *(_OWORD *)&v386.fields.list = *(_OWORD *)&v385.fields.currentCryptoKey;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v386,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__MoveNext__) )
            {
              current = v386.fields.current;
              if ( !v386.fields.current )
                sub_B170D4();
              if ( ServantSkillEntity__isEnable((ServantSkillEntity_o *)v386.fields.current, 0, 0LL) )
              {
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                v172 = NetworkManager__get_UserId(0LL);
                v173 = this->fields.baseUsrSvtData;
                if ( !v173 )
                  sub_B170D4();
                v174 = v172;
                v175 = v173->fields.lv;
                v177 = *(_QWORD *)&v173->fields.limitCount.fields.currentCryptoKey;
                v176 = *(_QWORD *)&v173->fields.limitCount.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v397.fields.currentCryptoKey = v177;
                *(_QWORD *)&v397.fields.fakeValue = v176;
                v178 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v397, 0LL);
                if ( ServantSkillEntity__isUse(
                       (ServantSkillEntity_o *)current,
                       v174,
                       v175,
                       v178,
                       v388,
                       -1,
                       -1,
                       -1LL,
                       0LL) )
                {
                  isRelease = 1;
                  goto LABEL_183;
                }
              }
            }
            isRelease = 0;
LABEL_183:
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v386,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillEntity__Dispose__);
          }
          else
          {
            isRelease = 0;
          }
          v370 = this->fields.skillResultInfoWindow;
          v371 = this->fields.targetId;
          v372 = this->fields.targetLv;
          v373 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v134, v135, v136, v137);
          System_Action___ctor(v373, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
          v374 = this->fields.baseUsrSvtData;
          if ( v374 )
          {
            v375 = this->fields.targetIdOld;
            v376 = this->fields.targetLvOld;
            v378 = *(_QWORD *)&v374->fields.svtId.fields.currentCryptoKey;
            v377 = *(_QWORD *)&v374->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v401.fields.currentCryptoKey = v378;
            *(_QWORD *)&v401.fields.fakeValue = v377;
            v379 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v401, 0LL);
            if ( v133 )
            {
              v380 = v379;
              v381 = System_Collections_Generic_List_int___ToArray(
                       v133,
                       (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
              if ( v370 )
              {
                SkillUpResultWindowComponent__OpenSkillUpResultInfo(
                  v370,
                  v371,
                  v372,
                  v373,
                  v375,
                  v376,
                  v380,
                  v381,
                  0,
                  isRelease,
                  0,
                  0LL);
                return;
              }
            }
          }
        }
        break;
      case 9:
        v230 = this->fields.skillResultInfoWindow;
        v231 = this->fields.baseUsrSvtData;
        oldFriendShipRank = this->fields.oldFriendShipRank;
        v233 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
        System_Action___ctor(v233, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v230 )
          break;
        SkillUpResultWindowComponent__OpenFriendshipUpResultInfo(v230, v231, oldFriendShipRank, v233, 0LL);
        return;
      case 11:
        v209 = this->fields.skillResultInfoWindow;
        v210 = this->fields.baseUsrSvtData;
        v211 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
        System_Action___ctor(v211, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        if ( !v209 )
          break;
        SkillUpResultWindowComponent__OpenPowerUpResultInfo(v209, v210, v211, 0LL);
        return;
      case 12:
      case 14:
      case 22:
      case 24:
        goto LABEL_211;
      case 13:
        friendshipExceedResultWindow = this->fields.friendshipExceedResultWindow;
        if ( !friendshipExceedResultWindow )
          break;
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
          friendshipExceedResultWindow,
          this->fields.baseUsrSvtData,
          0LL);
        goto LABEL_211;
      case 15:
        CostumeSvtVoiceList = CombineResultEffectComponent__getCostumeSvtVoiceList(this, v56);
        this->fields.playVoiceList = CostumeSvtVoiceList;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.playVoiceList,
          (System_Int32_array **)CostumeSvtVoiceList,
          v213,
          v214,
          v215,
          v216,
          v217,
          v218);
        v189 = this->fields.playVoiceList;
        if ( v189 )
          goto LABEL_130;
        goto LABEL_211;
      case 16:
      case 17:
        if ( this->fields.isSecretTreasureDeviceRankUpAnim )
        {
          v184 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v185 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v185 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v185->static_fields->DEFAULT_FADE_TIME;
          v187 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v180, v181, v182, v183);
          v188 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_0__;
        }
        else
        {
          if ( kind == 16 )
          {
            messageCallback = this->fields.messageCallback;
            if ( messageCallback )
            {
              this->fields.messageCallback = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.messageCallback,
                0LL,
                v57,
                v58,
                v59,
                v60,
                v61,
                v62);
              v264 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v264 )
                break;
              v266 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v264,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_40F6057 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v265);
                byte_40F6057 = 1;
              }
              v267 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v267 = TerminalPramsManager_TypeInfo;
              }
              if ( !v266 )
                break;
              v268 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v266,
                                        v267->static_fields->_QuestId_k__BackingField,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              v269 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v269 )
                break;
              v270 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)v269,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( !v270 )
                break;
              v271 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v270,
                                          this->fields.targetSvtId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v272 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v272 = BalanceConfig_TypeInfo;
              }
              if ( v272->static_fields->CloseSecretTreasureDeviceQuestClear )
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v273 = LocalizationManager__Get((System_String_o *)StringLiteral_10853/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE_2"*/, 0LL);
                if ( !v271 )
                  break;
                v274 = v273;
                Name = (Il2CppObject *)ServantEntity__getName(v271, -1, -1, 0LL);
                v276 = System_String__Format(v274, Name, 0LL);
              }
              else
              {
                if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v359 = LocalizationManager__Get((System_String_o *)StringLiteral_10852/*"QUEST_AFTER_MESSAGE_SECRET_TREASURE_DEVICE"*/, 0LL);
                if ( !v268 )
                  break;
                v360 = v359;
                QuestName = QuestEntity__getQuestName(v268, 0LL);
                if ( !v271 )
                  break;
                v362 = (Il2CppObject *)QuestName;
                v363 = (Il2CppObject *)ServantEntity__getName(v271, -1, -1, 0LL);
                v276 = System_String__Format_43739268(v360, v362, v363, 0LL);
              }
              CombineResultEffectComponent_MessageDelegate__Invoke(messageCallback, v276, 0LL);
            }
          }
          if ( !this->fields.callbackFunc )
            return;
          v184 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v368 = AvalonSceneManager_TypeInfo;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            v368 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v368->static_fields->DEFAULT_FADE_TIME;
          v187 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v364, v365, v366, v367);
          v188 = &Method_CombineResultEffectComponent__setSkillResultInfo_b__143_1__;
        }
        v369 = v187;
        System_Action___ctor(v187, (Il2CppObject *)this, *v188, 0LL);
        if ( v184 )
        {
          CommonUI__maskFadeout(v184, 1, DEFAULT_FADE_TIME, v369, 0LL);
          return;
        }
        break;
      case 20:
        commandCardExceedResultWindow = this->fields.commandCardExceedResultWindow;
        if ( !commandCardExceedResultWindow )
          break;
        CommandCardExceedResultWindowComponent__SetCommandCardExceedInfo(
          commandCardExceedResultWindow,
          this->fields.baseUsrSvtData,
          this->fields.commandCardIndex,
          this->fields.commandCardExceedCount,
          0LL);
        goto LABEL_211;
      case 23:
        v219 = this->fields.friendshipExceedResultWindow;
        if ( !v219 )
          break;
        FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_27346128(
          v219,
          this->fields.baseUsrSvtData,
          this->fields.oldFriendShipRank,
          0LL);
        goto LABEL_211;
      case 25:
        v220 = this->fields.baseUsrSvtData;
        if ( !v220 )
          break;
        AppendSkillInfo = UserServantEntity__getAppendSkillInfo(v220, 0LL);
        if ( !AppendSkillInfo )
          break;
        svtUseSkillIdList = AppendSkillInfo->fields.svtUseSkillIdList;
        skillResultInfoWindow = this->fields.skillResultInfoWindow;
        targetId = this->fields.targetId;
        targetLv = this->fields.targetLv;
        v116 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v222, v223, v224, v225);
        System_Action___ctor(v116, (Il2CppObject *)this, Method_CombineResultEffectComponent_EndDisp__, 0LL);
        v226 = this->fields.baseUsrSvtData;
        if ( !v226 )
          break;
        targetIdOld = this->fields.targetIdOld;
        targetLvOld = this->fields.targetLvOld;
        v228 = *(_QWORD *)&v226->fields.svtId.fields.currentCryptoKey;
        v227 = *(_QWORD *)&v226->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v400.fields.currentCryptoKey = v228;
        *(_QWORD *)&v400.fields.fakeValue = v227;
        v229 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v400, 0LL);
        if ( !skillResultInfoWindow )
          break;
        v123 = v229;
        v124 = this->fields.targetLvOld == 0;
        isDispLv = 1;
LABEL_142:
        SkillUpResultWindowComponent__OpenSkillUpResultInfo(
          skillResultInfoWindow,
          targetId,
          targetLv,
          v116,
          targetIdOld,
          targetLvOld,
          v123,
          svtUseSkillIdList,
          v124,
          1,
          isDispLv,
          0LL);
        return;
      default:
        return;
    }
  }
  sub_B170D4();
}


void __fastcall CombineResultEffectComponent__stopVoice(CombineResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x20
  System_String_o *vcName; // x21
  BattleServantConfConponent_o *p_player; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F99A6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F99A6 = 1;
  }
  if ( this->fields.player )
  {
    asstName = this->fields.asstName;
    vcName = this->fields.vcName;
    p_player = (BattleServantConfConponent_o *)&this->fields.player;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice(asstName, vcName, 0.0, 0LL);
    p_player->klass = 0LL;
    sub_B16F98(p_player, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_ClickDelegate___ctor(
        CombineResultEffectComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CombineResultEffectComponent_ClickDelegate__BeginInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_40F7118 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7118 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CombineResultEffectComponent_ClickDelegate__EndInvoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_ClickDelegate__Invoke(
        CombineResultEffectComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineResultEffectComponent_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CombineResultEffectComponent_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CombineResultEffectComponent_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CombineResultEffectComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfo___ctor(
        CombineResultEffectComponent_CostumeSkillInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager___ctor(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F7119 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo, v3);
    byte_40F7119 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                                                                 v4,
                                                                                                 v5,
                                                                                                 v6,
                                                                                                 v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.beforeSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v8;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo___ctor__);
  this->fields.afterSkillList = (struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *)v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.afterSkillList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x0

  if ( (byte_40F711B & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v8);
    byte_40F711B = 1;
  }
  v9 = sub_B170CC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv, method, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = id, *(_DWORD *)(v9 + 20) = lv, (afterSkillList = this->fields.afterSkillList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__AddBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x22
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x0

  if ( (byte_40F711A & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__, v8);
    byte_40F711A = 1;
  }
  v9 = sub_B170CC(CombineResultEffectComponent_CostumeSkillInfo_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&lv, method, v4);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_DWORD *)(v9 + 16) = id, *(_DWORD *)(v9 + 20) = lv, (beforeSkillList = this->fields.beforeSkillList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeSkillList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x20

  if ( (byte_40F711D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_40F711D = 1;
  }
  afterSkillList = this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B170D4();
  if ( afterSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return afterSkillList->fields._items->m_Items[index];
}


int32_t __fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetAfterSkillCount(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *afterSkillList; // x8

  if ( (byte_40F711E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Count__,
      method);
    byte_40F711E = 1;
  }
  afterSkillList = this->fields.afterSkillList;
  if ( !afterSkillList )
    sub_B170D4();
  return afterSkillList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
CombineResultEffectComponent_CostumeSkillInfo_o *__fastcall CombineResultEffectComponent_CostumeSkillInfoManager__GetBeforeSkill(
        CombineResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__o *beforeSkillList; // x20

  if ( (byte_40F711C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_CombineResultEffectComponent_CostumeSkillInfo__get_Item__,
      *(_QWORD *)&index);
    byte_40F711C = 1;
  }
  beforeSkillList = this->fields.beforeSkillList;
  if ( !beforeSkillList )
    sub_B170D4();
  if ( beforeSkillList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return beforeSkillList->fields._items->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent_MessageDelegate___ctor(
        CombineResultEffectComponent_MessageDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CombineResultEffectComponent_MessageDelegate__BeginInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)message;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__EndInvoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall CombineResultEffectComponent_MessageDelegate__Invoke(
        CombineResultEffectComponent_MessageDelegate_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineResultEffectComponent_MessageDelegate_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  CombineResultEffectComponent_MessageDelegate_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  CombineResultEffectComponent_MessageDelegate_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CombineResultEffectComponent_MessageDelegate_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, message, method);
      v31 = sub_B1702C(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = message->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_AAFEF8(message, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
              (*v24)(message, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = message->klass;
                if ( *(_WORD *)&message->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&message->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_AAFEF8(message, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(message, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&message->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  message,
                  *((_QWORD *)&message->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(message, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
            (*v26)(v29, message, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_AAFEF8(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, message, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                message,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, message, v28);
    }
  }
}


void __fastcall CombineResultEffectComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7112 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent___c_TypeInfo, v1);
    byte_40F7112 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CombineResultEffectComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall CombineResultEffectComponent___c___ctor(
        CombineResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineResultEffectComponent___c___SetSecretTreasureDeviceInfoForQuestClear_b__105_0(
        CombineResultEffectComponent___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return System_Int32__CompareTo_38275572((_DWORD)a + 24, b->fields.priority, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_0___ctor(
        CombineResultEffectComponent___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_0___setSkillResultInfo_b__3(
        CombineResultEffectComponent___c__DisplayClass143_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_1___ctor(
        CombineResultEffectComponent___c__DisplayClass143_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_1___setSkillResultInfo_b__2(
        CombineResultEffectComponent___c__DisplayClass143_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  UnityEngine_Object_o *effect; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v15; // x8
  struct CombineResultEffectComponent_o *v16; // x0
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v17; // x8
  CombineResultEffectComponent_o *v18; // x0
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v19; // x8
  CombineResultEffectComponent_o *v20; // x0
  WebViewManager_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v26; // x8
  struct CombineResultEffectComponent_o *v27; // x8
  UserServantEntity_o *baseUsrSvtData; // x21
  struct CombineResultEffectComponent_ClickDelegate_o *_9__4; // x22
  CommonUI_o *v30; // x20
  __int64 v31; // x9
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
  const MethodInfo *v44; // x2
  CombineResultEffectComponent_ClickDelegate_o *callback; // x0

  if ( (byte_40F7113 & 1) == 0 )
  {
    sub_B16FFC(&CombineResultEffectComponent_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__, v5);
    byte_40F7113 = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_25;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  effect = (UnityEngine_Object_o *)_4__this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_34809676(effect, 0LL);
  v15 = this->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_25;
  v16 = v15->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  v16->fields.effect = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v16->fields.effect, 0LL, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_25;
  v18 = v17->fields.__4__this;
  if ( !v18 )
    goto LABEL_25;
  CombineResultEffectComponent__Close(v18, 0LL);
  v19 = this->fields.CS___8__locals1;
  if ( !v19 )
    goto LABEL_25;
  v20 = v19->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  if ( v20->fields.baseUsrSvtData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = this->fields.CS___8__locals1;
    if ( v26 )
    {
      v27 = v26->fields.__4__this;
      if ( v27 )
      {
        baseUsrSvtData = v27->fields.baseUsrSvtData;
        _9__4 = this->fields.__9__4;
        v30 = (CommonUI_o *)Instance;
        if ( !_9__4 )
        {
          _9__4 = (struct CombineResultEffectComponent_ClickDelegate_o *)sub_B170CC(
                                                                           CombineResultEffectComponent_ClickDelegate_TypeInfo,
                                                                           v22,
                                                                           v23,
                                                                           v24,
                                                                           v25);
          v31 = *(_QWORD *)Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)&_9__4->fields.extra_arg = Method_CombineResultEffectComponent___c__DisplayClass143_1__setSkillResultInfo_b__4__;
          *(_QWORD *)&_9__4->fields.method_ptr = v31;
          *(_QWORD *)&_9__4->fields.method = this;
          sub_B16F98(
            (BattleServantConfConponent_o *)&_9__4->fields.method,
            (System_Int32_array **)this,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          this->fields.__9__4 = _9__4;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__9__4,
            (System_Int32_array **)_9__4,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
        }
        if ( v30 )
        {
          CommonUI__OpenCombineLimit(v30, baseUsrSvtData, _9__4, 0LL);
          return;
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  if ( v20->fields.callbackFunc )
  {
    CombineResultEffectComponent__EndDisp(v20, 0LL);
    callback = this->fields.callback;
    if ( !callback )
      goto LABEL_25;
    CombineResultEffectComponent_ClickDelegate__Invoke(callback, 1, v44);
  }
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_1___setSkillResultInfo_b__4(
        CombineResultEffectComponent___c__DisplayClass143_1_o *this,
        bool decide,
        const MethodInfo *method)
{
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *CS___8__locals1; // x8
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct CombineResultEffectComponent___c__DisplayClass143_0_o *v5; // x8
  CombineResultEffectComponent_o *v7; // x0
  const MethodInfo *v8; // x2
  CombineResultEffectComponent_ClickDelegate_o *callback; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (_4__this->fields.combineLimitLv = 0, (v5 = this->fields.CS___8__locals1) == 0LL)
    || (v7 = v5->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  CombineResultEffectComponent__EndDisp(v7, 0LL);
  callback = this->fields.callback;
  if ( callback )
    CombineResultEffectComponent_ClickDelegate__Invoke(callback, 1, v8);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_2___ctor(
        CombineResultEffectComponent___c__DisplayClass143_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass143_2___setSkillResultInfo_b__6(
        CombineResultEffectComponent___c__DisplayClass143_2_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CardServantFlagRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct CombineResultEffectComponent_o *v18; // x8

  if ( (byte_40F7114 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardServantFlagRequest___, decide);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__, v8);
    byte_40F7114 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.isSecretTreasureDeviceRankUpAnim = 0;
  _9__7 = this->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     decide,
                                                     method,
                                                     v3,
                                                     v4);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass143_2__setSkillResultInfo_b__7__,
      0LL);
    this->fields.__9__7 = _9__7;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__7,
      (System_Int32_array **)_9__7,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (CardServantFlagRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    _9__7,
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardServantFlagRequest___);
  v18 = this->fields.__4__this;
  if ( !v18 || !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B170D4();
  CardServantFlagRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    v18->fields.targetSvtId,
    v18->fields.targetFlagId,
    0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass143_2___setSkillResultInfo_b__7(
        CombineResultEffectComponent___c__DisplayClass143_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  CombineResultEffectComponent_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CombineResultEffectComponent_ClickDelegate__Invoke(callback, 1, method);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass165_0___ctor(
        CombineResultEffectComponent___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass165_0___OpenNotification_b__0(
        CombineResultEffectComponent___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct CombineResultEffectComponent_o *_4__this; // x8
  struct UserServantEntity_o *resUsrSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  int32_t limitCount; // w20
  int32_t v10; // w21
  CombineResultEffectComponent_o *v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_40F7115 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&ServantCharaGraphEXOpenManager_TypeInfo, v3);
    byte_40F7115 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  resUsrSvtData = _4__this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_13;
  v7 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
  limitCount = this->fields.limitCount;
  v10 = v8;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(v10, limitCount, 0LL);
  ServantCharaGraphEXOpenManager__WriteData(0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
LABEL_13:
    sub_B170D4();
  CombineResultEffectComponent__FadeoutProcess(v11, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ctor(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__0(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        bool isDcd,
        const MethodInfo *method)
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
  System_Action_o *_9__1; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F7116 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDcd);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__, v6);
    byte_40F7116 = 1;
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
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_CombineResultEffectComponent___c__DisplayClass171_0__ProfileChangeDecideAction_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, _9__1, 0LL);
}


void __fastcall CombineResultEffectComponent___c__DisplayClass171_0___ProfileChangeDecideAction_b__1(
        CombineResultEffectComponent___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  struct CombineResultEffectComponent_o *_4__this; // x8
  LimitUpResultCheckComponent_o *limitUpResultCheck; // x0
  CommonUI_o *v7; // x20

  if ( (byte_40F7117 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F7117 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  limitUpResultCheck = _4__this->fields.limitUpResultCheck;
  if ( !limitUpResultCheck )
    goto LABEL_11;
  LimitUpResultCheckComponent__SetActiveInfoWindow(limitUpResultCheck, 1, 0LL);
  v7 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v7 )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}